!function(name,definition){if(typeof module!="undefined")module.exports=definition();else if(typeof define=="function"&&typeof define.amd=="object")define(definition);else this[name]=definition()}("domready",function(){var fns=[],listener,doc=document,hack=doc.documentElement.doScroll,domContentLoaded="DOMContentLoaded",loaded=(hack?/^loaded|^c/:/^loaded|^i|^c/).test(doc.readyState);if(!loaded)doc.addEventListener(domContentLoaded,listener=function(){doc.removeEventListener(domContentLoaded,listener); loaded=1;while(listener=fns.shift())listener()});return function(fn){loaded?setTimeout(fn,0):fns.push(fn)}});domready(function(){document.documentElement.className+=" domready"});
domready(function() {
    // var navVariation = document.getElementById("navVariation");
    // var navBtn = document.createElement("a");
    // navBtn.setAttribute("href", "#!");
    // navBtn.setAttribute("class", "nav_toggle nav_toggle-variation");
    // navBtn.insertAdjacentHTML("beforeend", '<span class="btn-text">light-dark variation</span>');
    // navVariation.insertBefore(navBtn, navVariation.firstChild);
    // navVariation.classList.add("nav-closed");
    //
    // function hasClass(e, t) {
    //     return (new RegExp(" " + t + " ")).test(" " + e.className + " ")
    // }
    //
    // function toggleClass(e, t) {
    //     var n = " " + e.className.replace(/[\t\r\n]/g, " ") + " ";
    //     if (hasClass(e, t)) {
    //         while (n.indexOf(" " + t + " ") >= 0) n = n.replace(" " + t + " ", " ");
    //         e.className = n.replace(/^\s+|\s+$/g, "")
    //     } else e.className += " " + t
    // }
    // navBtn.onclick = function() {
    //     toggleClass(this.parentNode, "nav-open");
    //     toggleClass(this.parentNode, "nav-closed")
    // };
    //
    // var main = document.getElementById("main");
    // var toggleBtn1 = document.createElement("button");
    // var navThemes = document.getElementById("navThemes");
    // var navBtnThemes = document.createElement("a");
    // var content = document.getElementById("content");
    //
    // navBtnThemes.setAttribute("href", "#!");
    // navBtnThemes.setAttribute("class", "nav_toggle nav_toggle-themes");
    // navBtnThemes.insertAdjacentHTML("beforeend", '<span class="btn-text">themes</span>');
    // navThemes.insertBefore(navBtnThemes, navThemes.firstChild);
    // navThemes.classList.add("nav-themes-hidden");
    //
    // navBtnThemes.onclick = function() {
    //     toggleClass(this.parentNode, "nav-themes-open");
    //     toggleClass(this.parentNode, "nav-themes-hidden");
    //     toggleClass(content, "has-themes-hidden")
    // };
    //
    // var dtHeader = document.getElementById("demo-tilesHeader");
    // var toggleBtn1 = document.createElement("button");
    // var numberShades = document.getElementById("numberShades");
    // var demoTilesId = document.getElementById("demo-tiles-id");
    // toggleBtn1.innerHTML = "show colornames";
    // toggleBtn1.setAttribute("class", "button button-16");
    // toggleBtn1.setAttribute("data-text-swap", "hide colornames");
    // toggleBtn1.setAttribute("data-text-original", "show colornames");
    // dtHeader.insertBefore(toggleBtn1, dtHeader.firstChild);
    // toggleBtn1.addEventListener("click", function() {
    //     [].map.call(document.querySelectorAll(".shade-added"), function(el) {
    //         el.classList.toggle("hidden")
    //     });
    //     [].map.call(document.querySelectorAll(".shade-original"), function(el) {
    //         el.classList.toggle("w-1v3")
    //     });
    //     [].map.call(document.querySelectorAll(".demo-tiles"), function(el) {
    //         el.classList.toggle("collapsed")
    //     });
    //     if (toggleBtn1.getAttribute("data-text-swap") == toggleBtn1.innerHTML) toggleBtn1.innerHTML = toggleBtn1.getAttribute("data-text-original");
    //     else {
    //         toggleBtn1.setAttribute("data-text-original", toggleBtn1.innerHTML);
    //         toggleBtn1.innerHTML = toggleBtn1.getAttribute("data-text-swap")
    //     }
    //     if (demoTilesId.getAttribute("data-text-swap") == demoTilesId.innerHTML) demoTilesId.innerHTML = demoTilesId.getAttribute("data-text-original");
    //     else {
    //         demoTilesId.setAttribute("data-text-original", demoTilesId.innerHTML);
    //         demoTilesId.innerHTML = demoTilesId.getAttribute("data-text-swap")
    //     }
    //     if (numberShades.getAttribute("data-text-swap") == numberShades.innerHTML) numberShades.innerHTML = numberShades.getAttribute("data-text-original");
    //     else {
    //         numberShades.setAttribute("data-text-original", numberShades.innerHTML);
    //         numberShades.innerHTML = numberShades.getAttribute("data-text-swap")
    //     }
    // }, false)
    //
  document.documentElement.className = document.documentElement.className.replace(/\bno-js\b/g, '') + ' js ';
});
