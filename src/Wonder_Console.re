let makeObjInToWindow: unit => unit = [%raw
  () => {|
    window.wonder_console = {};


    window.wonder_console.log = function(msg){
    }

    window.wonder_console.info = function(msg){
    }

    window.wonder_console.error = function(msg){
    }

    window.wonder_console.warn = function(msg){
    }

    window.wonder_console.trace = function(msg){
    }

  |}
];

let log = [%raw
  msg => {|
    window.wonder_console.log(msg);
  |}
];

let info = [%raw
  msg => {|
    return window.wonder_console.info(msg);
  |}
];

let error = [%raw
  msg => {|
    return window.wonder_console.error(msg);
  |}
];

let warn = [%raw
  msg => {|
    return window.wonder_console.warn(msg);
  |}
];

let trace = [%raw
  msg => {|
    return window.wonder_console.trace(msg);
  |}
];