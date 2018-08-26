let component = ReasonReact.statelessComponent("ConfigPage");

let make = _children => {
  ...component,
  render: self =>
    <div>
      <Layout>
        <h2> {ReasonReact.string("Config")} </h2>
        <form>
          <div
            className="mdl-textfield mdl-js-textfield mdl-textfield--floating-label">
            <input
              className="mdl-textfield__input"
              type_="text"
              name="event"
            />
            <label className="mdl-textfield__label" htmlFor="event">
              {ReasonReact.string("Event Name")}
            </label>
          </div>
          <div>
            <button
              className="mdl-button mdl-js-button mdl-button--raised mdl-button--colored"
              type_="submit">
              {ReasonReact.string("Save")}
            </button>
          </div>
        </form>
      </Layout>
    </div>,
};

let render = () =>
  ReactDOMServerRe.renderToString(ReasonReact.element(make([||])));
