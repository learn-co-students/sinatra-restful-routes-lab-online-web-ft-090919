D, [2019-11-06T20:42:41.926381 #292593] DEBUG -- :   [1m[36mActiveRecord::SchemaMigration Load (0.1ms)[0m  [1mSELECT "schema_migrations".* FROM "schema_migrations"[0m
Run options: include {:focus=>true}

All examples were filtered out; ignoring {:focus=>true}

Recipe App
  Index page '/recipes'
    responds with a 200 status code
    displays a list of recipes
    contains links to each recipe's show page
  show page '/recipes/:id'
    responds with a 200 status code
    displays the recipe's name
    displays the recipe's ingredients
    displays the recipe's cook time
    contains a form to delete the recipe
    deletes via a DELETE request
  edit page '/recipes/:id/edit'
    responds with a 200 status code (FAILED - 1)
    contains a form to edit the recipe (FAILED - 2)
    displays the recipe's ingredients before editing (FAILED - 3)
    submits via a patch request (FAILED - 4)
  new page '/recipes/new'
    responds with a 200 status code (FAILED - 5)
    contains a form to create the recipe (FAILED - 6)
    posts the form back to create a new recipe (FAILED - 7)
  creating a new recipe
    creates a new recipe and saves to the database (FAILED - 8)
    redirects to the recipe show page (FAILED - 9)
  updating a recipe
    updates the recipe (FAILED - 10)
    redirects to the recipe show page (FAILED - 11)
  deleting a recipe
    deletes a recipe (FAILED - 12)

Failures:

  1) Recipe App edit page '/recipes/:id/edit' responds with a 200 status code
     Failure/Error: expect(page.status_code).to eq(200)

       expected: 200
            got: 404

       (compared using ==)
     # ./spec/sinatra_restful_routes_lab_spec.rb:75:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  2) Recipe App edit page '/recipes/:id/edit' contains a form to edit the recipe
     Failure/Error: expect(page.body).to include("</form>")

       expected "<!DOCTYPE html>\n<html>\n<head>\n  <style type=\"text/css\">\n  body { text-align:center;font-family...1&#x2F;edit&#x27; do\n    &quot;Hello World&quot;\n  end\nend\n</pre>\n  </div>\n</body>\n</html>\n" to include "</form>"
       Diff:
       @@ -1,2 +1,25 @@
       -</form>
       +<!DOCTYPE html>
       +<html>
       +<head>
       +  <style type="text/css">
       +  body { text-align:center;font-family:helvetica,arial;font-size:22px;
       +    color:#888;margin:20px}
       +  #c {margin:0 auto;width:500px;text-align:left}
       +  </style>
       +</head>
       +<body>
       +  <h2>Sinatra doesn’t know this ditty.</h2>
       +  <img src='http://www.example.com/__sinatra__/404.png'>
       +  <div id="c">
       +    Try this:
       +    <pre># in application_controller.rb
       +class ApplicationController
       +  get &#x27;&#x2F;recipes&#x2F;1&#x2F;edit&#x27; do
       +    &quot;Hello World&quot;
       +  end
       +end
       +</pre>
       +  </div>
       +</body>
       +</html>
     # ./spec/sinatra_restful_routes_lab_spec.rb:79:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  3) Recipe App edit page '/recipes/:id/edit' displays the recipe's ingredients before editing
     Failure/Error: expect(page.body).to include(recipe_ingredients)

       expected "<!DOCTYPE html>\n<html>\n<head>\n  <style type=\"text/css\">\n  body { text-align:center;font-family...1&#x2F;edit&#x27; do\n    &quot;Hello World&quot;\n  end\nend\n</pre>\n  </div>\n</body>\n</html>\n" to include "milk, butter, cheese, elbow pasta"
       Diff:
       @@ -1,2 +1,25 @@
       -milk, butter, cheese, elbow pasta
       +<!DOCTYPE html>
       +<html>
       +<head>
       +  <style type="text/css">
       +  body { text-align:center;font-family:helvetica,arial;font-size:22px;
       +    color:#888;margin:20px}
       +  #c {margin:0 auto;width:500px;text-align:left}
       +  </style>
       +</head>
       +<body>
       +  <h2>Sinatra doesn’t know this ditty.</h2>
       +  <img src='http://www.example.com/__sinatra__/404.png'>
       +  <div id="c">
       +    Try this:
       +    <pre># in application_controller.rb
       +class ApplicationController
       +  get &#x27;&#x2F;recipes&#x2F;1&#x2F;edit&#x27; do
       +    &quot;Hello World&quot;
       +  end
       +end
       +</pre>
       +  </div>
       +</body>
       +</html>
     # ./spec/sinatra_restful_routes_lab_spec.rb:83:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  4) Recipe App edit page '/recipes/:id/edit' submits via a patch request
     Failure/Error: expect(page.find(:css, "form input[name=_method]", :visible => false)[:value]).to match(/patch/i)

     Capybara::ElementNotFound:
       Unable to find css "form input[name=_method]"
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:302:in `block in synced_resolve'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/base.rb:83:in `synchronize'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:293:in `synced_resolve'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:48:in `find'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/session.rb:744:in `block (2 levels) in <class:Session>'
     # ./spec/sinatra_restful_routes_lab_spec.rb:87:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  5) Recipe App new page '/recipes/new' responds with a 200 status code
     Failure/Error: expect(page.status_code).to eq(200)

       expected: 200
            got: 500

       (compared using ==)
     # ./spec/sinatra_restful_routes_lab_spec.rb:98:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  6) Recipe App new page '/recipes/new' contains a form to create the recipe
     Failure/Error: expect(page.body).to include("</form>")

       expected "<!DOCTYPE html>\n<html>\n<head>\n  <meta http-equiv=\"Content-Type\" content=\"text/html; charset=ut...nabled the <code>show_exceptions</code> setting.</p>\n  </div> <!-- /WRAP -->\n  </body>\n</html>\n" to include "</form>"
       Diff:
       @@ -1,2 +1,8375 @@
       -</form>
       +<!DOCTYPE html>
       +<html>
       +<head>
       +  <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
       +  <title>ActiveRecord::RecordNotFound at &#x2F;recipes&#x2F;new</title>
       +
       +  <script type="text/javascript">
       +  //<!--
       +  function toggle(id) {
       +    var pre  = document.getElementById("pre-" + id);
       +    var post = document.getElementById("post-" + id);
       +    var context = document.getElementById("context-" + id);
       +
       +    if (pre.style.display == 'block') {
       +      pre.style.display = 'none';
       +      post.style.display = 'none';
       +      context.style.background = "none";
       +    } else {
       +      pre.style.display = 'block';
       +      post.style.display = 'block';
       +      context.style.background = "#fffed9";
       +    }
       +  }
       +
       +  function toggleBacktrace(){
       +    var bt = document.getElementById("backtrace");
       +    var toggler = document.getElementById("expando");
       +
       +    if (bt.className == 'condensed') {
       +      bt.className = 'expanded';
       +      toggler.innerHTML = "(condense)";
       +    } else {
       +      bt.className = 'condensed';
       +      toggler.innerHTML = "(expand)";
       +    }
       +  }
       +  //-->
       +  </script>
       +
       +<style type="text/css" media="screen">
       +  *                   {margin: 0; padding: 0; border: 0; outline: 0;}
       +  div.clear           {clear: both;}
       +  body                {background: #EEEEEE; margin: 0; padding: 0;
       +                       font-family: 'Lucida Grande', 'Lucida Sans Unicode',
       +                       'Garuda';}
       +  code                {font-family: 'Lucida Console', monospace;
       +                       font-size: 12px;}
       +  li                  {height: 18px;}
       +  ul                  {list-style: none; margin: 0; padding: 0;}
       +  ol:hover            {cursor: pointer;}
       +  ol li               {white-space: pre;}
       +  #explanation        {font-size: 12px; color: #666666;
       +                       margin: 20px 0 0 100px;}
       +/* WRAP */
       +  #wrap               {width: 1000px; background: #FFFFFF; margin: 0 auto;
       +                       padding: 30px 50px 20px 50px;
       +                       border-left: 1px solid #DDDDDD;
       +                       border-right: 1px solid #DDDDDD;}
       +/* HEADER */
       +  #header             {margin: 0 auto 25px auto;}
       +  #header img         {float: left;}
       +  #header #summary    {float: left; margin: 12px 0 0 20px; width:660px;
       +                       font-family: 'Lucida Grande', 'Lucida Sans Unicode';}
       +  h1                  {margin: 0; font-size: 36px; color: #981919;}
       +  h2                  {margin: 0; font-size: 22px; color: #333333;}
       +  #header ul          {margin: 0; font-size: 12px; color: #666666;}
       +  #header ul li strong{color: #444444;}
       +  #header ul li       {display: inline; padding: 0 10px;}
       +  #header ul li.first {padding-left: 0;}
       +  #header ul li.last  {border: 0; padding-right: 0;}
       +/* BODY */
       +  #backtrace,
       +  #get,
       +  #post,
       +  #cookies,
       +  #rack               {width: 980px; margin: 0 auto 10px auto;}
       +  p#nav               {float: right; font-size: 14px;}
       +/* BACKTRACE */
       +  a#expando           {float: left; padding-left: 5px; color: #666666;
       +                      font-size: 14px; text-decoration: none; cursor: pointer;}
       +  a#expando:hover     {text-decoration: underline;}
       +  h3                  {float: left; width: 100px; margin-bottom: 10px;
       +                       color: #981919; font-size: 14px; font-weight: bold;}
       +  #nav a              {color: #666666; text-decoration: none; padding: 0 5px;}
       +  #backtrace li.frame-info {background: #f7f7f7; padding-left: 10px;
       +                           font-size: 12px; color: #333333;}
       +  #backtrace ul       {list-style-position: outside; border: 1px solid #E9E9E9;
       +                       border-bottom: 0;}
       +  #backtrace ol       {width: 920px; margin-left: 50px;
       +                       font: 10px 'Lucida Console', monospace; color: #666666;}
       +  #backtrace ol li    {border: 0; border-left: 1px solid #E9E9E9;
       +                       padding: 2px 0;}
       +  #backtrace ol code  {font-size: 10px; color: #555555; padding-left: 5px;}
       +  #backtrace-ul li    {border-bottom: 1px solid #E9E9E9; height: auto;
       +                       padding: 3px 0;}
       +  #backtrace-ul .code {padding: 6px 0 4px 0;}
       +  #backtrace.condensed .system,
       +  #backtrace.condensed .framework {display:none;}
       +/* REQUEST DATA */
       +  p.no-data           {padding-top: 2px; font-size: 12px; color: #666666;}
       +  table.req           {width: 980px; text-align: left; font-size: 12px;
       +                       color: #666666; padding: 0; border-spacing: 0;
       +                       border: 1px solid #EEEEEE; border-bottom: 0;
       +                       border-left: 0;
       +                       clear:both}
       +  table.req tr th     {padding: 2px 10px; font-weight: bold;
       +                       background: #F7F7F7; border-bottom: 1px solid #EEEEEE;
       +                       border-left: 1px solid #EEEEEE;}
       +  table.req tr td     {padding: 2px 20px 2px 10px;
       +                       border-bottom: 1px solid #EEEEEE;
       +                       border-left: 1px solid #EEEEEE;}
       +/* HIDE PRE/POST CODE AT START */
       +  .pre-context,
       +  .post-context       {display: none;}
       +
       +  table td.code       {width:750px}
       +  table td.code div   {width:750px;overflow:hidden}
       +</style>
       +</head>
       +<body>
       +  <div id="wrap">
       +    <div id="header">
       +      <img src="/__sinatra__/500.png" alt="application error" height="161" width="313" />
       +      <div id="summary">
       +        <h1><strong>ActiveRecord::RecordNotFound</strong> at <strong>&#x2F;recipes&#x2F;new
       +          </strong></h1>
       +        <h2>Couldn&#x27;t find Recipe with &#x27;id&#x27;=new</h2>
       +        <ul>
       +          <li class="first"><strong>file:</strong> <code>
       +            core.rb</code></li>
       +          <li><strong>location:</strong> <code>find
       +            </code></li>
       +          <li class="last"><strong>line:
       +            </strong> 155</li>
       +        </ul>
       +      </div>
       +      <div class="clear"></div>
       +    </div>
       +
       +    <div id="backtrace" class='condensed'>
       +      <h3>BACKTRACE</h3>
       +      <p><a href="#" id="expando"
       +            onclick="toggleBacktrace(); return false">(expand)</a></p>
       +      <p id="nav"><strong>JUMP TO:</strong>
       +         
       +            <a href="#get-info">GET</a>
       +            <a href="#post-info">POST</a>
       +         
       +         <a href="#cookie-info">COOKIES</a>
       +         <a href="#env-info">ENV</a>
       +      </p>
       +      <div class="clear"></div>
       +
       +      <ul id="backtrace-ul">
       +
       +      
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;activerecord-4.2.5&#x2F;lib&#x2F;active_record&#x2F;core.rb</code> in
       +                <code><strong>find</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="148"
       +                  class="pre-context" id="pre-1"
       +                  onclick="toggle(1);">
       +                
       +                <li class="pre-context-line"><code>        s = find_by_statement_cache[key] || find_by_statement_cache.synchronize {
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          find_by_statement_cache[key] ||= StatementCache.create(connection) { |params|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            where(key =&gt; params.bind).limit(1)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        record = s.execute([id], self, connection).first
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        unless record
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="155" class="context" id="1"
       +                  onclick="toggle(1);">
       +                <li class="context-line" id="context-1"><code>          raise RecordNotFound, &quot;Couldn&#x27;t find #{name} with &#x27;#{primary_key}&#x27;=#{id}&quot;</code></li>
       +              </ol>
       +
       +              
       +              <ol start="156" class="post-context"
       +                  id="post-1" onclick="toggle(1);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        record
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      rescue RangeError
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        raise RecordNotFound, &quot;Couldn&#x27;t find #{name} with an out of range value for &#x27;#{primary_key}&#x27;&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def find_by(*args) # :nodoc:
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;labs&#x2F;sinatra&#x2F;sinatra-restful-routes-lab-online-web-ft-090919&#x2F;app&#x2F;controllers&#x2F;application_controller.rb</code> in
       +                <code><strong>block in &lt;class:ApplicationController&gt;</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="8"
       +                  class="pre-context" id="pre-2"
       +                  onclick="toggle(2);">
       +                
       +                <li class="pre-context-line"><code>  
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  get &#x27;&#x2F;recipes&#x27; do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    @recipes = Recipe.all
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    erb :index
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  get &#x27;&#x2F;recipes&#x2F;:id&#x27; do
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="15" class="context" id="2"
       +                  onclick="toggle(2);">
       +                <li class="context-line" id="context-2"><code>    @recipe = Recipe.find(params[:id])</code></li>
       +              </ol>
       +
       +              
       +              <ol start="16" class="post-context"
       +                  id="post-2" onclick="toggle(2);">
       +                
       +                <li class="post-context-line"><code>    erb :show
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1628"
       +                  class="pre-context" id="pre-3"
       +                  onclick="toggle(3);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        pattern                 = compile(path, route_mustermann_opts)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        method_name             = &quot;#{verb} #{path}&quot;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        unbound_method          = generate_method(method_name, &amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        conditions, @conditions = @conditions, []
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        wrapper                 = block.arity != 0 ?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          proc { |a, p| unbound_method.bind(a).call(*p) } :
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1635" class="context" id="3"
       +                  onclick="toggle(3);">
       +                <li class="context-line" id="context-3"><code>          proc { |a, p| unbound_method.bind(a).call }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1636" class="post-context"
       +                  id="post-3" onclick="toggle(3);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        [ pattern, conditions, wrapper ]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def compile(path, route_mustermann_opts = {})
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        Mustermann.new(path, mustermann_opts.merge(route_mustermann_opts))
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in compile!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1628"
       +                  class="pre-context" id="pre-4"
       +                  onclick="toggle(4);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        pattern                 = compile(path, route_mustermann_opts)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        method_name             = &quot;#{verb} #{path}&quot;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        unbound_method          = generate_method(method_name, &amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        conditions, @conditions = @conditions, []
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        wrapper                 = block.arity != 0 ?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          proc { |a, p| unbound_method.bind(a).call(*p) } :
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1635" class="context" id="4"
       +                  onclick="toggle(4);">
       +                <li class="context-line" id="context-4"><code>          proc { |a, p| unbound_method.bind(a).call }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1636" class="post-context"
       +                  id="post-4" onclick="toggle(4);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        [ pattern, conditions, wrapper ]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def compile(path, route_mustermann_opts = {})
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        Mustermann.new(path, mustermann_opts.merge(route_mustermann_opts))
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block (3 levels) in route!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="985"
       +                  class="pre-context" id="pre-5"
       +                  onclick="toggle(5);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run routes defined on the class and all superclasses.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route!(base = settings, pass_block = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      if routes = base.routes[@request.request_method]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        routes.each do |pattern, conditions, block|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          returned_pass_block = process_route(pattern, conditions) do |*args|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            env[&#x27;sinatra.route&#x27;] = &quot;#{@request.request_method} #{pattern}&quot;
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="992" class="context" id="5"
       +                  onclick="toggle(5);">
       +                <li class="context-line" id="context-5"><code>            route_eval { block[*args] }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="993" class="post-context"
       +                  id="post-5" onclick="toggle(5);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # don&#x27;t wipe out pass_block in superclass
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          pass_block = returned_pass_block if returned_pass_block
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>route_eval</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1004"
       +                  class="pre-context" id="pre-6"
       +                  onclick="toggle(6);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      route_eval(&amp;pass_block) if pass_block
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      route_missing
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run a route block and throw :halt with the result.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route_eval
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1011" class="context" id="6"
       +                  onclick="toggle(6);">
       +                <li class="context-line" id="context-6"><code>      throw :halt, yield</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1012" class="post-context"
       +                  id="post-6" onclick="toggle(6);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # If the current request matches pattern and conditions, fill params
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # with keys and call the given block.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # Revert params afterwards.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # Returns pass block.
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block (2 levels) in route!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="985"
       +                  class="pre-context" id="pre-7"
       +                  onclick="toggle(7);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run routes defined on the class and all superclasses.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route!(base = settings, pass_block = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      if routes = base.routes[@request.request_method]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        routes.each do |pattern, conditions, block|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          returned_pass_block = process_route(pattern, conditions) do |*args|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            env[&#x27;sinatra.route&#x27;] = &quot;#{@request.request_method} #{pattern}&quot;
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="992" class="context" id="7"
       +                  onclick="toggle(7);">
       +                <li class="context-line" id="context-7"><code>            route_eval { block[*args] }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="993" class="post-context"
       +                  id="post-7" onclick="toggle(7);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # don&#x27;t wipe out pass_block in superclass
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          pass_block = returned_pass_block if returned_pass_block
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in process_route</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1033"
       +                  class="pre-context" id="pre-8"
       +                  onclick="toggle(8);">
       +                
       +                <li class="pre-context-line"><code>        @params[:captures] = force_encoding(captures) unless captures.nil? || captures.empty?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        values += params.values.flatten
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      catch(:pass) do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        conditions.each { |c| throw :pass if c.bind(self).call == false }
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1040" class="context" id="8"
       +                  onclick="toggle(8);">
       +                <li class="context-line" id="context-8"><code>        block ? block[self, values] : yield(self, values)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1041" class="post-context"
       +                  id="post-8" onclick="toggle(8);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    rescue
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @env[&#x27;sinatra.error.params&#x27;] = @params
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      raise
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @params = original if original
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>catch</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1031"
       +                  class="pre-context" id="pre-9"
       +                  onclick="toggle(9);">
       +                
       +                <li class="pre-context-line"><code>        captures           = pattern.match(route).captures.map { |c| URI_INSTANCE.unescape(c) if c }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        values            += captures
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        @params[:captures] = force_encoding(captures) unless captures.nil? || captures.empty?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        values += params.values.flatten
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1038" class="context" id="9"
       +                  onclick="toggle(9);">
       +                <li class="context-line" id="context-9"><code>      catch(:pass) do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1039" class="post-context"
       +                  id="post-9" onclick="toggle(9);">
       +                
       +                <li class="post-context-line"><code>        conditions.each { |c| throw :pass if c.bind(self).call == false }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        block ? block[self, values] : yield(self, values)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    rescue
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @env[&#x27;sinatra.error.params&#x27;] = @params
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      raise
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ensure
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>process_route</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1031"
       +                  class="pre-context" id="pre-10"
       +                  onclick="toggle(10);">
       +                
       +                <li class="pre-context-line"><code>        captures           = pattern.match(route).captures.map { |c| URI_INSTANCE.unescape(c) if c }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        values            += captures
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        @params[:captures] = force_encoding(captures) unless captures.nil? || captures.empty?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        values += params.values.flatten
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1038" class="context" id="10"
       +                  onclick="toggle(10);">
       +                <li class="context-line" id="context-10"><code>      catch(:pass) do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1039" class="post-context"
       +                  id="post-10" onclick="toggle(10);">
       +                
       +                <li class="post-context-line"><code>        conditions.each { |c| throw :pass if c.bind(self).call == false }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        block ? block[self, values] : yield(self, values)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    rescue
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @env[&#x27;sinatra.error.params&#x27;] = @params
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      raise
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ensure
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in route!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="983"
       +                  class="pre-context" id="pre-11"
       +                  onclick="toggle(11);">
       +                
       +                <li class="pre-context-line"><code>      base.filters[type].each { |args| process_route(*args) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run routes defined on the class and all superclasses.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route!(base = settings, pass_block = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      if routes = base.routes[@request.request_method]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        routes.each do |pattern, conditions, block|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="990" class="context" id="11"
       +                  onclick="toggle(11);">
       +                <li class="context-line" id="context-11"><code>          returned_pass_block = process_route(pattern, conditions) do |*args|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="991" class="post-context"
       +                  id="post-11" onclick="toggle(11);">
       +                
       +                <li class="post-context-line"><code>            env[&#x27;sinatra.route&#x27;] = &quot;#{@request.request_method} #{pattern}&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            route_eval { block[*args] }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # don&#x27;t wipe out pass_block in superclass
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          pass_block = returned_pass_block if returned_pass_block
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>each</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="982"
       +                  class="pre-context" id="pre-12"
       +                  onclick="toggle(12);">
       +                
       +                <li class="pre-context-line"><code>      filter! type, base.superclass if base.superclass.respond_to?(:filters)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      base.filters[type].each { |args| process_route(*args) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run routes defined on the class and all superclasses.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route!(base = settings, pass_block = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      if routes = base.routes[@request.request_method]
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="989" class="context" id="12"
       +                  onclick="toggle(12);">
       +                <li class="context-line" id="context-12"><code>        routes.each do |pattern, conditions, block|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="990" class="post-context"
       +                  id="post-12" onclick="toggle(12);">
       +                
       +                <li class="post-context-line"><code>          returned_pass_block = process_route(pattern, conditions) do |*args|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            env[&#x27;sinatra.route&#x27;] = &quot;#{@request.request_method} #{pattern}&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            route_eval { block[*args] }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # don&#x27;t wipe out pass_block in superclass
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          pass_block = returned_pass_block if returned_pass_block
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>route!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="982"
       +                  class="pre-context" id="pre-13"
       +                  onclick="toggle(13);">
       +                
       +                <li class="pre-context-line"><code>      filter! type, base.superclass if base.superclass.respond_to?(:filters)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      base.filters[type].each { |args| process_route(*args) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run routes defined on the class and all superclasses.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def route!(base = settings, pass_block = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      if routes = base.routes[@request.request_method]
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="989" class="context" id="13"
       +                  onclick="toggle(13);">
       +                <li class="context-line" id="context-13"><code>        routes.each do |pattern, conditions, block|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="990" class="post-context"
       +                  id="post-13" onclick="toggle(13);">
       +                
       +                <li class="post-context-line"><code>          returned_pass_block = process_route(pattern, conditions) do |*args|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            env[&#x27;sinatra.route&#x27;] = &quot;#{@request.request_method} #{pattern}&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            route_eval { block[*args] }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # don&#x27;t wipe out pass_block in superclass
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          pass_block = returned_pass_block if returned_pass_block
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in dispatch!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1090"
       +                  class="pre-context" id="pre-14"
       +                  onclick="toggle(14);">
       +                
       +                <li class="pre-context-line"><code>    # Dispatch a request with error handling.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def dispatch!
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @params.merge!(@request.params).each { |key, val| @params[key] = force_encoding(val.dup) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      invoke do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        static! if settings.static? &amp;&amp; (request.get? || request.head?)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        filter! :before
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1097" class="context" id="14"
       +                  onclick="toggle(14);">
       +                <li class="context-line" id="context-14"><code>        route!</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1098" class="post-context"
       +                  id="post-14" onclick="toggle(14);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    rescue ::Exception =&gt; boom
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      invoke { handle_exception!(boom) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      begin
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        filter! :after unless env[&#x27;sinatra.static_file&#x27;]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      rescue ::Exception =&gt; boom
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in invoke</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-15"
       +                  onclick="toggle(15);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="15"
       +                  onclick="toggle(15);">
       +                <li class="context-line" id="context-15"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-15" onclick="toggle(15);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>catch</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-16"
       +                  onclick="toggle(16);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="16"
       +                  onclick="toggle(16);">
       +                <li class="context-line" id="context-16"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-16" onclick="toggle(16);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>invoke</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-17"
       +                  onclick="toggle(17);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="17"
       +                  onclick="toggle(17);">
       +                <li class="context-line" id="context-17"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-17" onclick="toggle(17);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>dispatch!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1087"
       +                  class="pre-context" id="pre-18"
       +                  onclick="toggle(18);">
       +                
       +                <li class="pre-context-line"><code>      nil # avoid double setting the same response tuple twice
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Dispatch a request with error handling.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def dispatch!
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @params.merge!(@request.params).each { |key, val| @params[key] = force_encoding(val.dup) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1094" class="context" id="18"
       +                  onclick="toggle(18);">
       +                <li class="context-line" id="context-18"><code>      invoke do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1095" class="post-context"
       +                  id="post-18" onclick="toggle(18);">
       +                
       +                <li class="post-context-line"><code>        static! if settings.static? &amp;&amp; (request.get? || request.head?)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        filter! :before
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        route!
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    rescue ::Exception =&gt; boom
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      invoke { handle_exception!(boom) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ensure
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in call!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="917"
       +                  class="pre-context" id="pre-19"
       +                  onclick="toggle(19);">
       +                
       +                <li class="pre-context-line"><code>      @env      = env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @params   = IndifferentHash.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @request  = Request.new(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @response = Response.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      template_cache.clear if settings.reload_templates
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @response[&#x27;Content-Type&#x27;] = nil
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="924" class="context" id="19"
       +                  onclick="toggle(19);">
       +                <li class="context-line" id="context-19"><code>      invoke { dispatch! }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="925" class="post-context"
       +                  id="post-19" onclick="toggle(19);">
       +                
       +                <li class="post-context-line"><code>      invoke { error_block!(response.status) } unless @env[&#x27;sinatra.error&#x27;]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      unless @response[&#x27;Content-Type&#x27;]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if Array === body and body[0].respond_to? :content_type
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          content_type body[0].content_type
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        else
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          content_type :html
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in invoke</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-20"
       +                  onclick="toggle(20);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="20"
       +                  onclick="toggle(20);">
       +                <li class="context-line" id="context-20"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-20" onclick="toggle(20);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>catch</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-21"
       +                  onclick="toggle(21);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="21"
       +                  onclick="toggle(21);">
       +                <li class="context-line" id="context-21"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-21" onclick="toggle(21);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>invoke</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1069"
       +                  class="pre-context" id="pre-22"
       +                  onclick="toggle(22);">
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;sinatra.static_file&#x27;] = path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cache_control(*settings.static_cache_control) if settings.static_cache_control?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      send_file path, options.merge(:disposition =&gt; nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Run the block with &#x27;throw :halt&#x27; support and apply result to the response.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def invoke
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1076" class="context" id="22"
       +                  onclick="toggle(22);">
       +                <li class="context-line" id="context-22"><code>      res = catch(:halt) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1077" class="post-context"
       +                  id="post-22" onclick="toggle(22);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      res = [res] if Integer === res or String === res
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if Array === res and Integer === res.first
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        res = res.dup
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        status(res.shift)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body(res.pop)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers(*res)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call!</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="917"
       +                  class="pre-context" id="pre-23"
       +                  onclick="toggle(23);">
       +                
       +                <li class="pre-context-line"><code>      @env      = env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @params   = IndifferentHash.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @request  = Request.new(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @response = Response.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      template_cache.clear if settings.reload_templates
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @response[&#x27;Content-Type&#x27;] = nil
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="924" class="context" id="23"
       +                  onclick="toggle(23);">
       +                <li class="context-line" id="context-23"><code>      invoke { dispatch! }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="925" class="post-context"
       +                  id="post-23" onclick="toggle(23);">
       +                
       +                <li class="post-context-line"><code>      invoke { error_block!(response.status) } unless @env[&#x27;sinatra.error&#x27;]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      unless @response[&#x27;Content-Type&#x27;]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if Array === body and body[0].respond_to? :content_type
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          content_type body[0].content_type
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        else
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          content_type :html
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="906"
       +                  class="pre-context" id="pre-24"
       +                  onclick="toggle(24);">
       +                
       +                <li class="pre-context-line"><code>      @app = app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @template_cache = Tilt::Cache.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      yield self if block_given?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Rack call interface.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="913" class="context" id="24"
       +                  onclick="toggle(24);">
       +                <li class="context-line" id="context-24"><code>      dup.call!(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="914" class="post-context"
       +                  id="post-24" onclick="toggle(24);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def call!(env) # :nodoc:
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @env      = env
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @params   = IndifferentHash.new
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @request  = Request.new(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @response = Response.new
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;xss_header.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="11"
       +                  class="pre-context" id="pre-25"
       +                  onclick="toggle(25);">
       +                
       +                <li class="pre-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Options:
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # xss_mode:: How the browser should prevent the attack (default: :block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    class XSSHeader &lt; Base
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      default_options :xss_mode =&gt; :block, :nosniff =&gt; true
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="18" class="context" id="25"
       +                  onclick="toggle(25);">
       +                <li class="context-line" id="context-25"><code>        status, headers, body = @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="19" class="post-context"
       +                  id="post-25" onclick="toggle(25);">
       +                
       +                <li class="post-context-line"><code>        headers[&#x27;X-XSS-Protection&#x27;]       ||= &quot;1; mode=#{options[:xss_mode]}&quot; if html? headers
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        headers[&#x27;X-Content-Type-Options&#x27;] ||= &#x27;nosniff&#x27;                       if options[:nosniff]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        [status, headers, body]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;path_traversal.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="9"
       +                  class="pre-context" id="pre-26"
       +                  onclick="toggle(26);">
       +                
       +                <li class="pre-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Unescapes &#x27;&#x2F;&#x27; and &#x27;.&#x27;, expands +path_info+.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    # Thus &lt;tt&gt;GET &#x2F;foo&#x2F;%2e%2e%2fbar&lt;&#x2F;tt&gt; becomes &lt;tt&gt;GET &#x2F;bar&lt;&#x2F;tt&gt;.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    class PathTraversal &lt; Base
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        path_was         = env[&quot;PATH_INFO&quot;]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        env[&quot;PATH_INFO&quot;] = cleanup path_was if path_was &amp;&amp; !path_was.empty?
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="16" class="context" id="26"
       +                  onclick="toggle(26);">
       +                <li class="context-line" id="context-26"><code>        app.call env</code></li>
       +              </ol>
       +
       +              
       +              <ol start="17" class="post-context"
       +                  id="post-26" onclick="toggle(26);">
       +                
       +                <li class="post-context-line"><code>      ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        env[&quot;PATH_INFO&quot;] = path_was
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def cleanup(path)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if path.respond_to?(:encoding)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          # Ruby 1.9+ M17N
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;json_csrf.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="19"
       +                  class="pre-context" id="pre-27"
       +                  onclick="toggle(27);">
       +                
       +                <li class="pre-context-line"><code>    class JsonCsrf &lt; Base
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      default_options :allow_if =&gt; nil
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      alias react deny
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        request               = Request.new(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="26" class="context" id="27"
       +                  onclick="toggle(27);">
       +                <li class="context-line" id="context-27"><code>        status, headers, body = app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="27" class="post-context"
       +                  id="post-27" onclick="toggle(27);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if has_vector?(request, headers)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          warn env, &quot;attack prevented by #{self.class}&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          react_and_close(env, body) or [status, headers, body]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        else
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          [status, headers, body]
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="43"
       +                  class="pre-context" id="pre-28"
       +                  onclick="toggle(28);">
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        unless accepts? env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          instrument env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          result = react env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="50" class="context" id="28"
       +                  onclick="toggle(28);">
       +                <li class="context-line" id="context-28"><code>        result or app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="51" class="post-context"
       +                  id="post-28" onclick="toggle(28);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def react(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        result = send(options[:reaction], env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        result if Array === result and result.size == 3
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="43"
       +                  class="pre-context" id="pre-29"
       +                  onclick="toggle(29);">
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        unless accepts? env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          instrument env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          result = react env
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="50" class="context" id="29"
       +                  onclick="toggle(29);">
       +                <li class="context-line" id="context-29"><code>        result or app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="51" class="post-context"
       +                  id="post-29" onclick="toggle(29);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def react(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        result = send(options[:reaction], env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        result if Array === result and result.size == 3
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-protection-2.0.5&#x2F;lib&#x2F;rack&#x2F;protection&#x2F;frame_options.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="24"
       +                  class="pre-context" id="pre-30"
       +                  onclick="toggle(30);">
       +                
       +                <li class="pre-context-line"><code>          frame_options = options[:frame_options]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          frame_options = options[:frame_options].to_s.upcase unless frame_options.respond_to? :to_str
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          frame_options.to_str
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="31" class="context" id="30"
       +                  onclick="toggle(30);">
       +                <li class="context-line" id="context-30"><code>        status, headers, body        = @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="32" class="post-context"
       +                  id="post-30" onclick="toggle(30);">
       +                
       +                <li class="post-context-line"><code>        headers[&#x27;X-Frame-Options&#x27;] ||= frame_options if html? headers
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        [status, headers, body]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-2.0.6&#x2F;lib&#x2F;rack&#x2F;null_logger.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="2"
       +                  class="pre-context" id="pre-31"
       +                  onclick="toggle(31);">
       +                
       +                <li class="pre-context-line"><code>  class NullLogger
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def initialize(app)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @app = app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      env[RACK_LOGGER] = self
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="9" class="context" id="31"
       +                  onclick="toggle(31);">
       +                <li class="context-line" id="context-31"><code>      @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="10" class="post-context"
       +                  id="post-31" onclick="toggle(31);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def info(progname = nil, &amp;block); end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def debug(progname = nil, &amp;block); end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def warn(progname = nil, &amp;block); end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def error(progname = nil, &amp;block); end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def fatal(progname = nil, &amp;block); end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-2.0.6&#x2F;lib&#x2F;rack&#x2F;head.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="5"
       +                  class="pre-context" id="pre-32"
       +                  onclick="toggle(32);">
       +                
       +                <li class="pre-context-line"><code>  # all other requests unchanged.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  class Head
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def initialize(app)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @app = app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="12" class="context" id="32"
       +                  onclick="toggle(32);">
       +                <li class="context-line" id="context-32"><code>      status, headers, body = @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="13" class="post-context"
       +                  id="post-32" onclick="toggle(32);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if env[REQUEST_METHOD] == HEAD
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        [
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          status, headers, Rack::BodyProxy.new([]) do
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            body.close if body.respond_to? :close
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        ]
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;show_exceptions.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="15"
       +                  class="pre-context" id="pre-33"
       +                  onclick="toggle(33);">
       +                
       +                <li class="pre-context-line"><code>    def @@eats_errors.puts(*) end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def initialize(app)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @app = app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="22" class="context" id="33"
       +                  onclick="toggle(33);">
       +                <li class="context-line" id="context-33"><code>      @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="23" class="post-context"
       +                  id="post-33" onclick="toggle(33);">
       +                
       +                <li class="post-context-line"><code>    rescue Exception =&gt; e
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      errors, env[&quot;rack.errors&quot;] = env[&quot;rack.errors&quot;], @@eats_errors
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if prefers_plain_text?(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        content_type = &quot;text&#x2F;plain&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        body = dump_exception(e)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      else
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="187"
       +                  class="pre-context" id="pre-34"
       +                  onclick="toggle(34);">
       +                
       +                <li class="pre-context-line"><code>  # Some Rack handlers (Thin, Rainbows!) implement an extended body object protocol, however,
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  # some middleware (namely Rack::Lint) will break it by not mirroring the methods in question.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  # This middleware will detect an extended body object and will make sure it reaches the
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  # handler directly. We do this here, so our middleware and middleware set up by the app will
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  # still be able to run.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  class ExtendedRack &lt; Struct.new(:app)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="194" class="context" id="34"
       +                  onclick="toggle(34);">
       +                <li class="context-line" id="context-34"><code>      result, callback = app.call(env), env[&#x27;async.callback&#x27;]</code></li>
       +              </ol>
       +
       +              
       +              <ol start="195" class="post-context"
       +                  id="post-34" onclick="toggle(34);">
       +                
       +                <li class="post-context-line"><code>      return result unless callback and async?(*result)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      after_response { callback.call result }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      setup_close(env, *result)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      throw :async
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    private
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1950"
       +                  class="pre-context" id="pre-35"
       +                  onclick="toggle(35);">
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def helpers
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @instance
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1957" class="context" id="35"
       +                  onclick="toggle(35);">
       +                <li class="context-line" id="context-35"><code>      @stack.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1958" class="post-context"
       +                  id="post-35" onclick="toggle(35);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def inspect
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      &quot;#&lt;#{@instance.class} app_file=#{settings.app_file.inspect}&gt;&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>block in call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1495"
       +                  class="pre-context" id="pre-36"
       +                  onclick="toggle(36);">
       +                
       +                <li class="pre-context-line"><code>        setup_default_middleware builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        setup_middleware builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        builder.run app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1502" class="context" id="36"
       +                  onclick="toggle(36);">
       +                <li class="context-line" id="context-36"><code>        synchronize { prototype.call(env) }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1503" class="post-context"
       +                  id="post-36" onclick="toggle(36);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Like Kernel#caller but excluding certain magic entries and without
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # line &#x2F; method information; the resulting array contains filenames only.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def caller_files
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        cleaned_caller(1).flatten
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>synchronize</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1722"
       +                  class="pre-context" id="pre-37"
       +                  onclick="toggle(37);">
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @@mutex = Mutex.new
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def synchronize(&amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        if lock?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @@mutex.synchronize(&amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        else
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1729" class="context" id="37"
       +                  onclick="toggle(37);">
       +                <li class="context-line" id="context-37"><code>          yield</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1730" class="post-context"
       +                  id="post-37" onclick="toggle(37);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # used for deprecation warnings
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def warn(message)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        super message + &quot;\n\tfrom #{cleaned_caller.first.join(&#x27;:&#x27;)}&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info framework">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;sinatra-2.0.5&#x2F;lib&#x2F;sinatra&#x2F;base.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code framework">
       +              
       +              <ol start="1495"
       +                  class="pre-context" id="pre-38"
       +                  onclick="toggle(38);">
       +                
       +                <li class="pre-context-line"><code>        setup_default_middleware builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        setup_middleware builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        builder.run app
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        builder
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def call(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1502" class="context" id="38"
       +                  onclick="toggle(38);">
       +                <li class="context-line" id="context-38"><code>        synchronize { prototype.call(env) }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1503" class="post-context"
       +                  id="post-38" onclick="toggle(38);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Like Kernel#caller but excluding certain magic entries and without
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # line &#x2F; method information; the resulting array contains filenames only.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def caller_files
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        cleaned_caller(1).flatten
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-2.0.6&#x2F;lib&#x2F;rack&#x2F;method_override.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="15"
       +                  class="pre-context" id="pre-39"
       +                  onclick="toggle(39);">
       +                
       +                <li class="pre-context-line"><code>        method = method_override(env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        if HTTP_METHODS.include?(method)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          env[RACK_METHODOVERRIDE_ORIGINAL_METHOD] = env[REQUEST_METHOD]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          env[REQUEST_METHOD] = method
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="22" class="context" id="39"
       +                  onclick="toggle(39);">
       +                <li class="context-line" id="context-39"><code>      @app.call(env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="23" class="post-context"
       +                  id="post-39" onclick="toggle(39);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def method_override(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      req = Request.new(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      method = method_override_param(req) ||
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        env[HTTP_METHOD_OVERRIDE_HEADER]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      begin
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-test-1.1.0&#x2F;lib&#x2F;rack&#x2F;mock_session.rb</code> in
       +                <code><strong>request</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="22"
       +                  class="pre-context" id="pre-40"
       +                  onclick="toggle(40);">
       +                
       +                <li class="pre-context-line"><code>    def set_cookie(cookie, uri = nil)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      cookie_jar.merge(cookie, uri)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def request(uri, env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      env[&#x27;HTTP_COOKIE&#x27;] ||= cookie_jar.for(uri)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      @last_request = Rack::Request.new(env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="29" class="context" id="40"
       +                  onclick="toggle(40);">
       +                <li class="context-line" id="context-40"><code>      status, headers, body = @app.call(@last_request.env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="30" class="post-context"
       +                  id="post-40" onclick="toggle(40);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @last_response = MockResponse.new(status, headers, body, env[&#x27;rack.errors&#x27;].flush)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      body.close if body.respond_to?(:close)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      cookie_jar.merge(last_response.headers[&#x27;Set-Cookie&#x27;], uri)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      @after_request.each(&amp;:call)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-test-1.1.0&#x2F;lib&#x2F;rack&#x2F;test.rb</code> in
       +                <code><strong>process_request</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="259"
       +                  class="pre-context" id="pre-41"
       +                  onclick="toggle(41);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        set_cookie(env.delete(:cookie), uri) if env.key?(:cookie)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Rack::MockRequest.env_for(uri.to_s, env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def process_request(uri, env)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="266" class="context" id="41"
       +                  onclick="toggle(41);">
       +                <li class="context-line" id="context-41"><code>        @rack_mock_session.request(uri, env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="267" class="post-context"
       +                  id="post-41" onclick="toggle(41);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if retry_with_digest_auth?(env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          auth_env = env.merge(&#x27;HTTP_AUTHORIZATION&#x27; =&gt; digest_auth_header,
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                               &#x27;rack-test.digest_auth_retry&#x27; =&gt; true)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          auth_env.delete(&#x27;rack.request&#x27;)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          process_request(uri.path, auth_env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        else
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-test-1.1.0&#x2F;lib&#x2F;rack&#x2F;test.rb</code> in
       +                <code><strong>custom_request</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="122"
       +                  class="pre-context" id="pre-42"
       +                  onclick="toggle(42);">
       +                
       +                <li class="pre-context-line"><code>      # Issue a request using the given verb for the given URI. See #get
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # Example:
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   custom_request &quot;LINK&quot;, &quot;&#x2F;&quot;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def custom_request(verb, uri, params = {}, env = {}, &amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        uri = parse_uri(uri, env)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        env = env_for(uri, env.merge(method: verb.to_s.upcase, params: params))
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="129" class="context" id="42"
       +                  onclick="toggle(42);">
       +                <li class="context-line" id="context-42"><code>        process_request(uri, env, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="130" class="post-context"
       +                  id="post-42" onclick="toggle(42);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Set a header to be included on all subsequent requests through the
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # session. Use a value of nil to remove a previously configured header.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # In accordance with the Rack spec, headers will be included in the Rack
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # environment hash in HTTP_USER_AGENT form.
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rack-test-1.1.0&#x2F;lib&#x2F;rack&#x2F;test.rb</code> in
       +                <code><strong>get</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="51"
       +                  class="pre-context" id="pre-43"
       +                  onclick="toggle(43);">
       +                
       +                <li class="pre-context-line"><code>      # environment. Stores the issues request object in #last_request and
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # the app&#x27;s response in #last_response. Yield #last_response to a block
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # if given.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # Example:
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   get &quot;&#x2F;&quot;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def get(uri, params = {}, env = {}, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="58" class="context" id="43"
       +                  onclick="toggle(43);">
       +                <li class="context-line" id="context-43"><code>        custom_request(&#x27;GET&#x27;, uri, params, env, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="59" class="post-context"
       +                  id="post-43" onclick="toggle(43);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Issue a POST request for the given URI. See #get
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Example:
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      #   post &quot;&#x2F;signup&quot;, &quot;name&quot; =&gt; &quot;Bryan&quot;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def post(uri, params = {}, env = {}, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;rubies&#x2F;ruby-2.6.1&#x2F;lib&#x2F;ruby&#x2F;2.6.0&#x2F;forwardable.rb</code> in
       +                <code><strong>get</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="223"
       +                  class="pre-context" id="pre-44"
       +                  onclick="toggle(44);">
       +                
       +                <li class="pre-context-line"><code>          begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            #{accessor}
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          end#{method_call}
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="230" class="context" id="44"
       +                  onclick="toggle(44);">
       +                <li class="context-line" id="context-44"><code>end</code></li>
       +              </ol>
       +
       +              
       +              <ol start="231" class="post-context"
       +                  id="post-44" onclick="toggle(44);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code># SingleForwardable can be used to setup delegation at the object level as well.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer = String.new
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.extend SingleForwardable        # prepare object for delegation
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.def_delegator &quot;STDOUT&quot;, &quot;puts&quot;  # add delegation for STDOUT.puts()
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.puts &quot;Howdy!&quot;
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;rack_test&#x2F;browser.rb</code> in
       +                <code><strong>process</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="58"
       +                  class="pre-context" id="pre-45"
       +                  onclick="toggle(45);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def process(method, path, attributes = {}, env = {})
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    method = method.downcase
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    new_uri = build_uri(path)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    @current_scheme, @current_host, @current_port = new_uri.select(:scheme, :host, :port)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    reset_cache!
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="65" class="context" id="45"
       +                  onclick="toggle(45);">
       +                <li class="context-line" id="context-45"><code>    send(method, new_uri.to_s, attributes, env.merge(options[:headers] || {}))</code></li>
       +              </ol>
       +
       +              
       +              <ol start="66" class="post-context"
       +                  id="post-45" onclick="toggle(45);">
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  def build_uri(path)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    URI.parse(path).tap do |uri|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      uri.path = request_path if path.empty? || path.start_with?(&#x27;?&#x27;)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      uri.path = &#x27;&#x2F;&#x27; if uri.path.empty?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      uri.path = request_path.sub(%r{&#x2F;[^&#x2F;]*$}, &#x27;&#x2F;&#x27;) + uri.path unless uri.path.start_with?(&#x27;&#x2F;&#x27;)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;rack_test&#x2F;browser.rb</code> in
       +                <code><strong>process_and_follow_redirects</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="36"
       +                  class="pre-context" id="pre-46"
       +                  onclick="toggle(46);">
       +                
       +                <li class="pre-context-line"><code>  def follow(method, path, **attributes)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    return if fragment_or_script?(path)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    process_and_follow_redirects(method, path, attributes, &#x27;HTTP_REFERER&#x27; =&gt; current_url)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def process_and_follow_redirects(method, path, attributes = {}, env = {})
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="43" class="context" id="46"
       +                  onclick="toggle(46);">
       +                <li class="context-line" id="context-46"><code>    process(method, path, attributes, env)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="44" class="post-context"
       +                  id="post-46" onclick="toggle(46);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    return unless driver.follow_redirects?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    driver.redirect_limit.times do
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      if last_response.redirect?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if [307, 308].include? last_response.status
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          process(last_request.request_method, last_response[&#x27;Location&#x27;], last_request.params, env)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;rack_test&#x2F;browser.rb</code> in
       +                <code><strong>visit</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="16"
       +                  class="pre-context" id="pre-47"
       +                  onclick="toggle(47);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def options
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    driver.options
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def visit(path, **attributes)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    reset_host!
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="23" class="context" id="47"
       +                  onclick="toggle(47);">
       +                <li class="context-line" id="context-47"><code>    process_and_follow_redirects(:get, path, attributes)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="24" class="post-context"
       +                  id="post-47" onclick="toggle(47);">
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  def refresh
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    reset_cache!
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    request(last_request.fullpath, last_request.env)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;rack_test&#x2F;driver.rb</code> in
       +                <code><strong>visit</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="38"
       +                  class="pre-context" id="pre-48"
       +                  onclick="toggle(48);">
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def request
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    browser.last_request
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  def visit(path, **attributes)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="45" class="context" id="48"
       +                  onclick="toggle(48);">
       +                <li class="context-line" id="context-48"><code>    browser.visit(path, attributes)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="46" class="post-context"
       +                  id="post-48" onclick="toggle(48);">
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  def refresh
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    browser.refresh
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  def submit(method, path, attributes)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;session.rb</code> in
       +                <code><strong>visit</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="270"
       +                  class="pre-context" id="pre-49"
       +                  onclick="toggle(49);">
       +                
       +                <li class="pre-context-line"><code>          visit_uri_parts[:path] = base_uri.path + visit_uri.path
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          visit_uri = base_uri.merge(visit_uri_parts)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        adjust_server_port(visit_uri)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="277" class="context" id="49"
       +                  onclick="toggle(49);">
       +                <li class="context-line" id="context-49"><code>      driver.visit(visit_uri.to_s)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="278" class="post-context"
       +                  id="post-49" onclick="toggle(49);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    ##
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # Refresh the page
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def refresh
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;capybara-3.14.0&#x2F;lib&#x2F;capybara&#x2F;dsl.rb</code> in
       +                <code><strong>block (2 levels) in &lt;module:DSL&gt;</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="44"
       +                  class="pre-context" id="pre-50"
       +                  onclick="toggle(50);">
       +                
       +                <li class="pre-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def page
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      Capybara.current_session
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    Session::DSL_METHODS.each do |method|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      define_method method do |*args, &amp;block|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="51" class="context" id="50"
       +                  onclick="toggle(50);">
       +                <li class="context-line" id="context-50"><code>        page.send method, *args, &amp;block</code></li>
       +              </ol>
       +
       +              
       +              <ol start="52" class="post-context"
       +                  id="post-50" onclick="toggle(50);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  extend(Capybara::DSL)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;labs&#x2F;sinatra&#x2F;sinatra-restful-routes-lab-online-web-ft-090919&#x2F;spec&#x2F;sinatra_restful_routes_lab_spec.rb</code> in
       +                <code><strong>block (3 levels) in &lt;top (required)&gt;</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="87"
       +                  class="pre-context" id="pre-51"
       +                  onclick="toggle(51);">
       +                
       +                <li class="pre-context-line"><code>      expect(page.find(:css, &quot;form input[name=_method]&quot;, :visible =&gt; false)[:value]).to match(&#x2F;patch&#x2F;i)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  describe &quot;new page &#x27;&#x2F;recipes&#x2F;new&#x27;&quot; do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    before do
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="94" class="context" id="51"
       +                  onclick="toggle(51);">
       +                <li class="context-line" id="context-51"><code>      visit &quot;&#x2F;recipes&#x2F;new&quot;</code></li>
       +              </ol>
       +
       +              
       +              <ol start="95" class="post-context"
       +                  id="post-51" onclick="toggle(51);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    it &#x27;responds with a 200 status code&#x27; do
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      expect(page.status_code).to eq(200)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    it &quot;contains a form to create the recipe&quot; do
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>instance_exec</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="440"
       +                  class="pre-context" id="pre-52"
       +                  onclick="toggle(52);">
       +                
       +                <li class="pre-context-line"><code>        start(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Pending.mark_skipped! self, exception.argument
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        finish(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def instance_exec(*args, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="447" class="context" id="52"
       +                  onclick="toggle(52);">
       +                <li class="context-line" id="context-52"><code>        @example_group_instance.instance_exec(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="448" class="post-context"
       +                  id="post-52" onclick="toggle(52);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>instance_exec</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="440"
       +                  class="pre-context" id="pre-53"
       +                  onclick="toggle(53);">
       +                
       +                <li class="pre-context-line"><code>        start(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Pending.mark_skipped! self, exception.argument
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        finish(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def instance_exec(*args, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="447" class="context" id="53"
       +                  onclick="toggle(53);">
       +                <li class="context-line" id="context-53"><code>        @example_group_instance.instance_exec(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="448" class="post-context"
       +                  id="post-53" onclick="toggle(53);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="341"
       +                  class="pre-context" id="pre-54"
       +                  onclick="toggle(54);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      Hook = Struct.new(:block, :options)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      class BeforeHook &lt; Hook
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run(example)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="348" class="context" id="54"
       +                  onclick="toggle(54);">
       +                <li class="context-line" id="context-54"><code>          example.instance_exec(example, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="349" class="post-context"
       +                  id="post-54" onclick="toggle(54);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      class AfterHook &lt; Hook
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def run(example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          example.instance_exec(example, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>block in run_owned_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="500"
       +                  class="pre-context" id="pre-55"
       +                  onclick="toggle(55);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def all_hooks_for(position, scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks_for(position, scope) { return EMPTY_HOOK_ARRAY }.items_and_filters.map(&amp;:first)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_owned_hooks_for(position, scope, example_or_group)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          matching_hooks_for(position, scope, example_or_group).each do |hook|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="507" class="context" id="55"
       +                  onclick="toggle(55);">
       +                <li class="context-line" id="context-55"><code>            hook.run(example_or_group)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="508" class="post-context"
       +                  id="post-55" onclick="toggle(55);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def processable_hooks_for(position, scope, host)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          if scope == :example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            all_hooks_for(position, scope)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          else
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>each</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="499"
       +                  class="pre-context" id="pre-56"
       +                  onclick="toggle(56);">
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def all_hooks_for(position, scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks_for(position, scope) { return EMPTY_HOOK_ARRAY }.items_and_filters.map(&amp;:first)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_owned_hooks_for(position, scope, example_or_group)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="506" class="context" id="56"
       +                  onclick="toggle(56);">
       +                <li class="context-line" id="context-56"><code>          matching_hooks_for(position, scope, example_or_group).each do |hook|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="507" class="post-context"
       +                  id="post-56" onclick="toggle(56);">
       +                
       +                <li class="post-context-line"><code>            hook.run(example_or_group)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def processable_hooks_for(position, scope, host)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          if scope == :example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            all_hooks_for(position, scope)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run_owned_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="499"
       +                  class="pre-context" id="pre-57"
       +                  onclick="toggle(57);">
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def all_hooks_for(position, scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks_for(position, scope) { return EMPTY_HOOK_ARRAY }.items_and_filters.map(&amp;:first)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_owned_hooks_for(position, scope, example_or_group)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="506" class="context" id="57"
       +                  onclick="toggle(57);">
       +                <li class="context-line" id="context-57"><code>          matching_hooks_for(position, scope, example_or_group).each do |hook|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="507" class="post-context"
       +                  id="post-57" onclick="toggle(57);">
       +                
       +                <li class="post-context-line"><code>            hook.run(example_or_group)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def processable_hooks_for(position, scope, host)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          if scope == :example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            all_hooks_for(position, scope)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>block in run_example_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="586"
       +                  class="pre-context" id="pre-58"
       +                  onclick="toggle(58);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def normalized_scope_for(scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          SCOPE_ALIASES[scope] || scope
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_example_hooks_for(example, position, each_method)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          owner_parent_groups.__send__(each_method) do |group|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="593" class="context" id="58"
       +                  onclick="toggle(58);">
       +                <li class="context-line" id="context-58"><code>            group.hooks.run_owned_hooks_for(position, :example, example)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="594" class="post-context"
       +                  id="post-58" onclick="toggle(58);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def run_around_example_hooks_for(example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          hooks = FlatMap.flat_map(owner_parent_groups) do |group|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            group.hooks.matching_hooks_for(:around, :example, example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>reverse_each</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="585"
       +                  class="pre-context" id="pre-59"
       +                  onclick="toggle(59);">
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def normalized_scope_for(scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          SCOPE_ALIASES[scope] || scope
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_example_hooks_for(example, position, each_method)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="592" class="context" id="59"
       +                  onclick="toggle(59);">
       +                <li class="context-line" id="context-59"><code>          owner_parent_groups.__send__(each_method) do |group|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="593" class="post-context"
       +                  id="post-59" onclick="toggle(59);">
       +                
       +                <li class="post-context-line"><code>            group.hooks.run_owned_hooks_for(position, :example, example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def run_around_example_hooks_for(example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          hooks = FlatMap.flat_map(owner_parent_groups) do |group|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            group.hooks.matching_hooks_for(:around, :example, example)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run_example_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="585"
       +                  class="pre-context" id="pre-60"
       +                  onclick="toggle(60);">
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def normalized_scope_for(scope)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          SCOPE_ALIASES[scope] || scope
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def run_example_hooks_for(example, position, each_method)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="592" class="context" id="60"
       +                  onclick="toggle(60);">
       +                <li class="context-line" id="context-60"><code>          owner_parent_groups.__send__(each_method) do |group|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="593" class="post-context"
       +                  id="post-60" onclick="toggle(60);">
       +                
       +                <li class="post-context-line"><code>            group.hooks.run_owned_hooks_for(position, :example, example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def run_around_example_hooks_for(example)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          hooks = FlatMap.flat_map(owner_parent_groups) do |group|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            group.hooks.matching_hooks_for(:around, :example, example)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="455"
       +                  class="pre-context" id="pre-61"
       +                  onclick="toggle(61);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          if scope == :context
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            unless example_or_group.class.metadata[:skip]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              run_owned_hooks_for(position, :context, example_or_group)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            case position
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="462" class="context" id="61"
       +                  onclick="toggle(61);">
       +                <li class="context-line" id="context-61"><code>            when :before then run_example_hooks_for(example_or_group, :before, :reverse_each)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="463" class="post-context"
       +                  id="post-61" onclick="toggle(61);">
       +                
       +                <li class="post-context-line"><code>            when :after  then run_example_hooks_for(example_or_group, :after,  :each)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            when :around then run_around_example_hooks_for(example_or_group) { yield }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        SCOPES = [:example, :context]
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>run_before_example</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="487"
       +                  class="pre-context" id="pre-62"
       +                  onclick="toggle(62);">
       +                
       +                <li class="pre-context-line"><code>      def record_finished(status, reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        execution_result.record_finished(status, clock.now)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        reporter.example_finished(self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def run_before_example
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        @example_group_instance.setup_mocks_for_rspec
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="494" class="context" id="62"
       +                  onclick="toggle(62);">
       +                <li class="context-line" id="context-62"><code>        hooks.run(:before, :example, self)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="495" class="post-context"
       +                  id="post-62" onclick="toggle(62);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def with_around_and_singleton_context_hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        singleton_context_hooks_host = example_group_instance.singleton_class
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        singleton_context_hooks_host.run_before_context_hooks(example_group_instance)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        with_around_example_hooks { yield }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      ensure
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>block in run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="246"
       +                  class="pre-context" id="pre-63"
       +                  onclick="toggle(63);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          if skipped?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            Pending.mark_pending! self, skip
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          elsif !RSpec.configuration.dry_run?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            with_around_and_singleton_context_hooks do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              begin
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="253" class="context" id="63"
       +                  onclick="toggle(63);">
       +                <li class="context-line" id="context-63"><code>                run_before_example</code></li>
       +              </ol>
       +
       +              
       +              <ol start="254" class="post-context"
       +                  id="post-63" onclick="toggle(63);">
       +                
       +                <li class="post-context-line"><code>                @example_group_instance.instance_exec(self, &amp;@example_block)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                if pending?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                  Pending.mark_fixed! self
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                  raise Pending::PendingExampleFixedError,
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                        &#x27;Expected example to fail since it is pending, but it passed.&#x27;,
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>block in with_around_and_singleton_context_hooks</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="493"
       +                  class="pre-context" id="pre-64"
       +                  onclick="toggle(64);">
       +                
       +                <li class="pre-context-line"><code>        @example_group_instance.setup_mocks_for_rspec
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        hooks.run(:before, :example, self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def with_around_and_singleton_context_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        singleton_context_hooks_host = example_group_instance.singleton_class
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        singleton_context_hooks_host.run_before_context_hooks(example_group_instance)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="500" class="context" id="64"
       +                  onclick="toggle(64);">
       +                <li class="context-line" id="context-64"><code>        with_around_example_hooks { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="501" class="post-context"
       +                  id="post-64" onclick="toggle(64);">
       +                
       +                <li class="post-context-line"><code>      ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        singleton_context_hooks_host.run_after_context_hooks(example_group_instance)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def run_after_example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        assign_generated_description if defined?(::RSpec::Matchers)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        hooks.run(:after, :example, self)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>block in with_around_example_hooks</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="450"
       +                  class="pre-context" id="pre-65"
       +                  onclick="toggle(65);">
       +                
       +                <li class="pre-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def with_around_example_hooks
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="457" class="context" id="65"
       +                  onclick="toggle(65);">
       +                <li class="context-line" id="context-65"><code>        hooks.run(:around, :example, self) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="458" class="post-context"
       +                  id="post-65" onclick="toggle(65);">
       +                
       +                <li class="post-context-line"><code>      rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; e
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        set_exception(e)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def start(reporter)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        reporter.example_started(self)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        execution_result.started_at = clock.now
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>block in run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="457"
       +                  class="pre-context" id="pre-66"
       +                  onclick="toggle(66);">
       +                
       +                <li class="pre-context-line"><code>            unless example_or_group.class.metadata[:skip]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              run_owned_hooks_for(position, :context, example_or_group)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            case position
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            when :before then run_example_hooks_for(example_or_group, :before, :reverse_each)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            when :after  then run_example_hooks_for(example_or_group, :after,  :each)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="464" class="context" id="66"
       +                  onclick="toggle(66);">
       +                <li class="context-line" id="context-66"><code>            when :around then run_around_example_hooks_for(example_or_group) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="465" class="post-context"
       +                  id="post-66" onclick="toggle(66);">
       +                
       +                <li class="post-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        SCOPES = [:example, :context]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        SCOPE_ALIASES = { :each =&gt; :example, :all =&gt; :context }
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>block in run_around_example_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="597"
       +                  class="pre-context" id="pre-67"
       +                  onclick="toggle(67);">
       +                
       +                <li class="pre-context-line"><code>        def run_around_example_hooks_for(example)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks = FlatMap.flat_map(owner_parent_groups) do |group|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            group.hooks.matching_hooks_for(:around, :example, example)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          return yield if hooks.empty? # exit early to avoid the extra allocation cost of `Example::Procsy`
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="604" class="context" id="67"
       +                  onclick="toggle(67);">
       +                <li class="context-line" id="context-67"><code>          initial_procsy = Example::Procsy.new(example) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="605" class="post-context"
       +                  id="post-67" onclick="toggle(67);">
       +                
       +                <li class="post-context-line"><code>          hooks.inject(initial_procsy) do |procsy, around_hook|
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            procsy.wrap { around_hook.execute_with(example, procsy) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end.call
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if respond_to?(:singleton_class) &amp;&amp; singleton_class.ancestors.include?(singleton_class)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          def owner_parent_groups
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="335"
       +                  class="pre-context" id="pre-68"
       +                  onclick="toggle(68);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          define_method(name) { |*a, &amp;b| @proc.__send__(name, *a, &amp;b) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        # Calls the proc and notes that the example has been executed.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def call(*args, &amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @executed = true
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="342" class="context" id="68"
       +                  onclick="toggle(68);">
       +                <li class="context-line" id="context-68"><code>          @proc.call(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="343" class="post-context"
       +                  id="post-68" onclick="toggle(68);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        alias run call
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        # Provides a wrapped proc that will update our `executed?` state when
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        # executed.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def to_proc
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          method(:call).to_proc
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;labs&#x2F;sinatra&#x2F;sinatra-restful-routes-lab-online-web-ft-090919&#x2F;spec&#x2F;spec_helper.rb</code> in
       +                <code><strong>block (3 levels) in &lt;top (required)&gt;</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="18"
       +                  class="pre-context" id="pre-69"
       +                  onclick="toggle(69);">
       +                
       +                <li class="pre-context-line"><code>  config.before(:suite) do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    DatabaseCleaner.strategy = :transaction
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    DatabaseCleaner.clean_with(:truncation)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  config.around(:each) do |example|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    DatabaseCleaner.cleaning do
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="25" class="context" id="69"
       +                  onclick="toggle(69);">
       +                <li class="context-line" id="context-69"><code>      example.run</code></li>
       +              </ol>
       +
       +              
       +              <ol start="26" class="post-context"
       +                  id="post-69" onclick="toggle(69);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  config.order = &#x27;default&#x27;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>ActiveRecord::Base.logger.level = 1
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bundler&#x2F;gems&#x2F;database_cleaner-4c2408ffdbbd&#x2F;lib&#x2F;database_cleaner&#x2F;generic&#x2F;base.rb</code> in
       +                <code><strong>cleaning</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="9"
       +                  class="pre-context" id="pre-70"
       +                  onclick="toggle(70);">
       +                
       +                <li class="pre-context-line"><code>      def db
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        :default
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def cleaning(&amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          start
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="16" class="context" id="70"
       +                  onclick="toggle(70);">
       +                <li class="context-line" id="context-70"><code>          yield</code></li>
       +              </ol>
       +
       +              
       +              <ol start="17" class="post-context"
       +                  id="post-70" onclick="toggle(70);">
       +                
       +                <li class="post-context-line"><code>        ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          clean
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      module ClassMethods
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def available_strategies
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bundler&#x2F;gems&#x2F;database_cleaner-4c2408ffdbbd&#x2F;lib&#x2F;database_cleaner&#x2F;base.rb</code> in
       +                <code><strong>cleaning</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="94"
       +                  class="pre-context" id="pre-71"
       +                  onclick="toggle(71);">
       +                
       +                <li class="pre-context-line"><code>    def clean
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      strategy.clean
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    alias clean! clean
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def cleaning(&amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="101" class="context" id="71"
       +                  onclick="toggle(71);">
       +                <li class="context-line" id="context-71"><code>      strategy.cleaning(&amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="102" class="post-context"
       +                  id="post-71" onclick="toggle(71);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def auto_detected?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      !!@autodetected
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def autodetect_orm
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bundler&#x2F;gems&#x2F;database_cleaner-4c2408ffdbbd&#x2F;lib&#x2F;database_cleaner&#x2F;configuration.rb</code> in
       +                <code><strong>block (2 levels) in cleaning</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="45"
       +                  class="pre-context" id="pre-72"
       +                  onclick="toggle(72);">
       +                
       +                <li class="pre-context-line"><code>      connections.each { |connection| connection.clean }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    alias clean! clean
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def cleaning(&amp;inner_block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      connections.inject(inner_block) do |curr_block, connection|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="52" class="context" id="72"
       +                  onclick="toggle(72);">
       +                <li class="context-line" id="context-72"><code>        proc { connection.cleaning(&amp;curr_block) }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="53" class="post-context"
       +                  id="post-72" onclick="toggle(72);">
       +                
       +                <li class="post-context-line"><code>      end.call
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def clean_with(*args)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      connections.each { |connection| connection.clean_with(*args) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bundler&#x2F;gems&#x2F;database_cleaner-4c2408ffdbbd&#x2F;lib&#x2F;database_cleaner&#x2F;configuration.rb</code> in
       +                <code><strong>cleaning</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="46"
       +                  class="pre-context" id="pre-73"
       +                  onclick="toggle(73);">
       +                
       +                <li class="pre-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    alias clean! clean
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def cleaning(&amp;inner_block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      connections.inject(inner_block) do |curr_block, connection|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        proc { connection.cleaning(&amp;curr_block) }
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="53" class="context" id="73"
       +                  onclick="toggle(73);">
       +                <li class="context-line" id="context-73"><code>      end.call</code></li>
       +              </ol>
       +
       +              
       +              <ol start="54" class="post-context"
       +                  id="post-73" onclick="toggle(73);">
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def clean_with(*args)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      connections.each { |connection| connection.clean_with(*args) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    alias clean_with! clean_with
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;rubies&#x2F;ruby-2.6.1&#x2F;lib&#x2F;ruby&#x2F;2.6.0&#x2F;forwardable.rb</code> in
       +                <code><strong>cleaning</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="223"
       +                  class="pre-context" id="pre-74"
       +                  onclick="toggle(74);">
       +                
       +                <li class="pre-context-line"><code>          begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            #{accessor}
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          end#{method_call}
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    end;
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="230" class="context" id="74"
       +                  onclick="toggle(74);">
       +                <li class="context-line" id="context-74"><code>end</code></li>
       +              </ol>
       +
       +              
       +              <ol start="231" class="post-context"
       +                  id="post-74" onclick="toggle(74);">
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code># SingleForwardable can be used to setup delegation at the object level as well.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer = String.new
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.extend SingleForwardable        # prepare object for delegation
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.def_delegator &quot;STDOUT&quot;, &quot;puts&quot;  # add delegation for STDOUT.puts()
       +</code></li>
       +                
       +                <li class="post-context-line"><code>#    printer.puts &quot;Howdy!&quot;
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info app">
       +              <code>&#x2F;home&#x2F;clone&#x2F;labs&#x2F;sinatra&#x2F;sinatra-restful-routes-lab-online-web-ft-090919&#x2F;spec&#x2F;spec_helper.rb</code> in
       +                <code><strong>block (2 levels) in &lt;top (required)&gt;</strong></code>
       +            </li>
       +
       +            <li class="code app">
       +              
       +              <ol start="17"
       +                  class="pre-context" id="pre-75"
       +                  onclick="toggle(75);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  config.before(:suite) do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    DatabaseCleaner.strategy = :transaction
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    DatabaseCleaner.clean_with(:truncation)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  config.around(:each) do |example|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="24" class="context" id="75"
       +                  onclick="toggle(75);">
       +                <li class="context-line" id="context-75"><code>    DatabaseCleaner.cleaning do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="25" class="post-context"
       +                  id="post-75" onclick="toggle(75);">
       +                
       +                <li class="post-context-line"><code>      example.run
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>  config.order = &#x27;default&#x27;
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>instance_exec</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="440"
       +                  class="pre-context" id="pre-76"
       +                  onclick="toggle(76);">
       +                
       +                <li class="pre-context-line"><code>        start(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Pending.mark_skipped! self, exception.argument
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        finish(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def instance_exec(*args, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="447" class="context" id="76"
       +                  onclick="toggle(76);">
       +                <li class="context-line" id="context-76"><code>        @example_group_instance.instance_exec(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="448" class="post-context"
       +                  id="post-76" onclick="toggle(76);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>instance_exec</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="440"
       +                  class="pre-context" id="pre-77"
       +                  onclick="toggle(77);">
       +                
       +                <li class="pre-context-line"><code>        start(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Pending.mark_skipped! self, exception.argument
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        finish(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def instance_exec(*args, &amp;block)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="447" class="context" id="77"
       +                  onclick="toggle(77);">
       +                <li class="context-line" id="context-77"><code>        @example_group_instance.instance_exec(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="448" class="post-context"
       +                  id="post-77" onclick="toggle(77);">
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>execute_with</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="366"
       +                  class="pre-context" id="pre-78"
       +                  onclick="toggle(78);">
       +                
       +                <li class="pre-context-line"><code>          RSpec.configuration.reporter.notify_non_example_exception(e, &quot;An error occurred in an `after(:context)` hook.&quot;)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      class AroundHook &lt; Hook
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def execute_with(example, procsy)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="373" class="context" id="78"
       +                  onclick="toggle(78);">
       +                <li class="context-line" id="context-78"><code>          example.instance_exec(procsy, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="374" class="post-context"
       +                  id="post-78" onclick="toggle(78);">
       +                
       +                <li class="post-context-line"><code>          return if procsy.executed?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          Pending.mark_skipped!(example,
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                                &quot;#{hook_description} did not execute the example&quot;)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if Proc.method_defined?(:source_location)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          def hook_description
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>block (2 levels) in run_around_example_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="599"
       +                  class="pre-context" id="pre-79"
       +                  onclick="toggle(79);">
       +                
       +                <li class="pre-context-line"><code>            group.hooks.matching_hooks_for(:around, :example, example)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          return yield if hooks.empty? # exit early to avoid the extra allocation cost of `Example::Procsy`
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          initial_procsy = Example::Procsy.new(example) { yield }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks.inject(initial_procsy) do |procsy, around_hook|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="606" class="context" id="79"
       +                  onclick="toggle(79);">
       +                <li class="context-line" id="context-79"><code>            procsy.wrap { around_hook.execute_with(example, procsy) }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="607" class="post-context"
       +                  id="post-79" onclick="toggle(79);">
       +                
       +                <li class="post-context-line"><code>          end.call
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if respond_to?(:singleton_class) &amp;&amp; singleton_class.ancestors.include?(singleton_class)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          def owner_parent_groups
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            @owner.parent_groups
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>call</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="335"
       +                  class="pre-context" id="pre-80"
       +                  onclick="toggle(80);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          define_method(name) { |*a, &amp;b| @proc.__send__(name, *a, &amp;b) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        # Calls the proc and notes that the example has been executed.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        def call(*args, &amp;block)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @executed = true
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="342" class="context" id="80"
       +                  onclick="toggle(80);">
       +                <li class="context-line" id="context-80"><code>          @proc.call(*args, &amp;block)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="343" class="post-context"
       +                  id="post-80" onclick="toggle(80);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        alias run call
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        # Provides a wrapped proc that will update our `executed?` state when
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        # executed.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        def to_proc
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          method(:call).to_proc
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run_around_example_hooks_for</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="600"
       +                  class="pre-context" id="pre-81"
       +                  onclick="toggle(81);">
       +                
       +                <li class="pre-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          return yield if hooks.empty? # exit early to avoid the extra allocation cost of `Example::Procsy`
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          initial_procsy = Example::Procsy.new(example) { yield }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          hooks.inject(initial_procsy) do |procsy, around_hook|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            procsy.wrap { around_hook.execute_with(example, procsy) }
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="607" class="context" id="81"
       +                  onclick="toggle(81);">
       +                <li class="context-line" id="context-81"><code>          end.call</code></li>
       +              </ol>
       +
       +              
       +              <ol start="608" class="post-context"
       +                  id="post-81" onclick="toggle(81);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        if respond_to?(:singleton_class) &amp;&amp; singleton_class.ancestors.include?(singleton_class)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          def owner_parent_groups
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            @owner.parent_groups
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        else # Ruby &lt; 2.1 (see https:&#x2F;&#x2F;bugs.ruby-lang.org&#x2F;issues&#x2F;8035)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;hooks.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="457"
       +                  class="pre-context" id="pre-82"
       +                  onclick="toggle(82);">
       +                
       +                <li class="pre-context-line"><code>            unless example_or_group.class.metadata[:skip]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              run_owned_hooks_for(position, :context, example_or_group)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          else
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            case position
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            when :before then run_example_hooks_for(example_or_group, :before, :reverse_each)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            when :after  then run_example_hooks_for(example_or_group, :after,  :each)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="464" class="context" id="82"
       +                  onclick="toggle(82);">
       +                <li class="context-line" id="context-82"><code>            when :around then run_around_example_hooks_for(example_or_group) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="465" class="post-context"
       +                  id="post-82" onclick="toggle(82);">
       +                
       +                <li class="post-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        SCOPES = [:example, :context]
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        SCOPE_ALIASES = { :each =&gt; :example, :all =&gt; :context }
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>with_around_example_hooks</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="450"
       +                  class="pre-context" id="pre-83"
       +                  onclick="toggle(83);">
       +                
       +                <li class="pre-context-line"><code>    private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        example_group_instance.singleton_class.hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def with_around_example_hooks
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="457" class="context" id="83"
       +                  onclick="toggle(83);">
       +                <li class="context-line" id="context-83"><code>        hooks.run(:around, :example, self) { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="458" class="post-context"
       +                  id="post-83" onclick="toggle(83);">
       +                
       +                <li class="post-context-line"><code>      rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; e
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        set_exception(e)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def start(reporter)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        reporter.example_started(self)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        execution_result.started_at = clock.now
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>with_around_and_singleton_context_hooks</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="493"
       +                  class="pre-context" id="pre-84"
       +                  onclick="toggle(84);">
       +                
       +                <li class="pre-context-line"><code>        @example_group_instance.setup_mocks_for_rspec
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        hooks.run(:before, :example, self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def with_around_and_singleton_context_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        singleton_context_hooks_host = example_group_instance.singleton_class
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        singleton_context_hooks_host.run_before_context_hooks(example_group_instance)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="500" class="context" id="84"
       +                  onclick="toggle(84);">
       +                <li class="context-line" id="context-84"><code>        with_around_example_hooks { yield }</code></li>
       +              </ol>
       +
       +              
       +              <ol start="501" class="post-context"
       +                  id="post-84" onclick="toggle(84);">
       +                
       +                <li class="post-context-line"><code>      ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        singleton_context_hooks_host.run_after_context_hooks(example_group_instance)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def run_after_example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        assign_generated_description if defined?(::RSpec::Matchers)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        hooks.run(:after, :example, self)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="244"
       +                  class="pre-context" id="pre-85"
       +                  onclick="toggle(85);">
       +                
       +                <li class="pre-context-line"><code>        start(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        Pending.mark_pending!(self, pending) if pending?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          if skipped?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            Pending.mark_pending! self, skip
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          elsif !RSpec.configuration.dry_run?
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="251" class="context" id="85"
       +                  onclick="toggle(85);">
       +                <li class="context-line" id="context-85"><code>            with_around_and_singleton_context_hooks do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="252" class="post-context"
       +                  id="post-85" onclick="toggle(85);">
       +                
       +                <li class="post-context-line"><code>              begin
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                run_before_example
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                @example_group_instance.instance_exec(self, &amp;@example_block)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                if pending?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>                  Pending.mark_fixed! self
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>block in run_examples</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="622"
       +                  class="pre-context" id="pre-86"
       +                  onclick="toggle(86);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def self.run_examples(reporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        ordering_strategy.order(filtered_examples).map do |example|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          next if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          instance = new(example.inspect_output)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          set_ivars(instance, before_context_ivars)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="629" class="context" id="86"
       +                  onclick="toggle(86);">
       +                <li class="context-line" id="context-86"><code>          succeeded = example.run(instance, reporter)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="630" class="post-context"
       +                  id="post-86" onclick="toggle(86);">
       +                
       +                <li class="post-context-line"><code>          if !succeeded &amp;&amp; reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            RSpec.world.wants_to_quit = true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          succeeded
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end.all?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>map</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="618"
       +                  class="pre-context" id="pre-87"
       +                  onclick="toggle(87);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          registry.fetch(:global)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def self.run_examples(reporter)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="625" class="context" id="87"
       +                  onclick="toggle(87);">
       +                <li class="context-line" id="context-87"><code>        ordering_strategy.order(filtered_examples).map do |example|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="626" class="post-context"
       +                  id="post-87" onclick="toggle(87);">
       +                
       +                <li class="post-context-line"><code>          next if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          instance = new(example.inspect_output)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          set_ivars(instance, before_context_ivars)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          succeeded = example.run(instance, reporter)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          if !succeeded &amp;&amp; reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            RSpec.world.wants_to_quit = true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>run_examples</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="618"
       +                  class="pre-context" id="pre-88"
       +                  onclick="toggle(88);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          registry.fetch(:global)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def self.run_examples(reporter)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="625" class="context" id="88"
       +                  onclick="toggle(88);">
       +                <li class="context-line" id="context-88"><code>        ordering_strategy.order(filtered_examples).map do |example|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="626" class="post-context"
       +                  id="post-88" onclick="toggle(88);">
       +                
       +                <li class="post-context-line"><code>          next if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          instance = new(example.inspect_output)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          set_ivars(instance, before_context_ivars)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          succeeded = example.run(instance, reporter)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          if !succeeded &amp;&amp; reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            RSpec.world.wants_to_quit = true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="584"
       +                  class="pre-context" id="pre-89"
       +                  onclick="toggle(89);">
       +                
       +                <li class="pre-context-line"><code>      def self.run(reporter=RSpec::Core::NullReporter)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        return if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        reporter.example_group_started(self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        should_run_context_hooks = descendant_filtered_examples.any?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          run_before_context_hooks(new(&#x27;before(:context) hook&#x27;)) if should_run_context_hooks
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="591" class="context" id="89"
       +                  onclick="toggle(89);">
       +                <li class="context-line" id="context-89"><code>          result_for_this_group = run_examples(reporter)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="592" class="post-context"
       +                  id="post-89" onclick="toggle(89);">
       +                
       +                <li class="post-context-line"><code>          results_for_descendants = ordering_strategy.order(children).map { |child| child.run(reporter) }.all?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          result_for_this_group &amp;&amp; results_for_descendants
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Pending::SkipDeclaredInExample =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.skip_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.fail_with_exception(reporter, ex) }
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>block in run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="585"
       +                  class="pre-context" id="pre-90"
       +                  onclick="toggle(90);">
       +                
       +                <li class="pre-context-line"><code>        return if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        reporter.example_group_started(self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        should_run_context_hooks = descendant_filtered_examples.any?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          run_before_context_hooks(new(&#x27;before(:context) hook&#x27;)) if should_run_context_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          result_for_this_group = run_examples(reporter)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="592" class="context" id="90"
       +                  onclick="toggle(90);">
       +                <li class="context-line" id="context-90"><code>          results_for_descendants = ordering_strategy.order(children).map { |child| child.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="593" class="post-context"
       +                  id="post-90" onclick="toggle(90);">
       +                
       +                <li class="post-context-line"><code>          result_for_this_group &amp;&amp; results_for_descendants
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Pending::SkipDeclaredInExample =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.skip_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.fail_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          RSpec.world.wants_to_quit = true if reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>map</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="585"
       +                  class="pre-context" id="pre-91"
       +                  onclick="toggle(91);">
       +                
       +                <li class="pre-context-line"><code>        return if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        reporter.example_group_started(self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        should_run_context_hooks = descendant_filtered_examples.any?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          run_before_context_hooks(new(&#x27;before(:context) hook&#x27;)) if should_run_context_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          result_for_this_group = run_examples(reporter)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="592" class="context" id="91"
       +                  onclick="toggle(91);">
       +                <li class="context-line" id="context-91"><code>          results_for_descendants = ordering_strategy.order(children).map { |child| child.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="593" class="post-context"
       +                  id="post-91" onclick="toggle(91);">
       +                
       +                <li class="post-context-line"><code>          result_for_this_group &amp;&amp; results_for_descendants
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Pending::SkipDeclaredInExample =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.skip_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.fail_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          RSpec.world.wants_to_quit = true if reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;example_group.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="585"
       +                  class="pre-context" id="pre-92"
       +                  onclick="toggle(92);">
       +                
       +                <li class="pre-context-line"><code>        return if RSpec.world.wants_to_quit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        reporter.example_group_started(self)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        should_run_context_hooks = descendant_filtered_examples.any?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          run_before_context_hooks(new(&#x27;before(:context) hook&#x27;)) if should_run_context_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          result_for_this_group = run_examples(reporter)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="592" class="context" id="92"
       +                  onclick="toggle(92);">
       +                <li class="context-line" id="context-92"><code>          results_for_descendants = ordering_strategy.order(children).map { |child| child.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="593" class="post-context"
       +                  id="post-92" onclick="toggle(92);">
       +                
       +                <li class="post-context-line"><code>          result_for_this_group &amp;&amp; results_for_descendants
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Pending::SkipDeclaredInExample =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.skip_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          true
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        rescue Support::AllExceptionsExceptOnesWeMustNotRescue =&gt; ex
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          for_filtered_examples(reporter) { |example| example.fail_with_exception(reporter, ex) }
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          RSpec.world.wants_to_quit = true if reporter.fail_fast_limit_met?
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>block (3 levels) in run_specs</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="109"
       +                  class="pre-context" id="pre-93"
       +                  onclick="toggle(93);">
       +                
       +                <li class="pre-context-line"><code>        examples_count = @world.example_count(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        success = @configuration.reporter.report(examples_count) do |reporter|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @configuration.with_suite_hooks do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            if examples_count == 0 &amp;&amp; @configuration.fail_if_no_examples
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              return @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="116" class="context" id="93"
       +                  onclick="toggle(93);">
       +                <li class="context-line" id="context-93"><code>            example_groups.map { |g| g.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="117" class="post-context"
       +                  id="post-93" onclick="toggle(93);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end &amp;&amp; !@world.non_example_failure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        success ? 0 : @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @private
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>map</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="109"
       +                  class="pre-context" id="pre-94"
       +                  onclick="toggle(94);">
       +                
       +                <li class="pre-context-line"><code>        examples_count = @world.example_count(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        success = @configuration.reporter.report(examples_count) do |reporter|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @configuration.with_suite_hooks do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            if examples_count == 0 &amp;&amp; @configuration.fail_if_no_examples
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              return @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="116" class="context" id="94"
       +                  onclick="toggle(94);">
       +                <li class="context-line" id="context-94"><code>            example_groups.map { |g| g.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="117" class="post-context"
       +                  id="post-94" onclick="toggle(94);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end &amp;&amp; !@world.non_example_failure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        success ? 0 : @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @private
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>block (2 levels) in run_specs</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="109"
       +                  class="pre-context" id="pre-95"
       +                  onclick="toggle(95);">
       +                
       +                <li class="pre-context-line"><code>        examples_count = @world.example_count(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        success = @configuration.reporter.report(examples_count) do |reporter|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          @configuration.with_suite_hooks do
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            if examples_count == 0 &amp;&amp; @configuration.fail_if_no_examples
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>              return @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="116" class="context" id="95"
       +                  onclick="toggle(95);">
       +                <li class="context-line" id="context-95"><code>            example_groups.map { |g| g.run(reporter) }.all?</code></li>
       +              </ol>
       +
       +              
       +              <ol start="117" class="post-context"
       +                  id="post-95" onclick="toggle(95);">
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end &amp;&amp; !@world.non_example_failure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        success ? 0 : @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @private
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;configuration.rb</code> in
       +                <code><strong>with_suite_hooks</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="1982"
       +                  class="pre-context" id="pre-96"
       +                  onclick="toggle(96);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def with_suite_hooks
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        return yield if dry_run?
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        begin
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          run_suite_hooks(&quot;a `before(:suite)` hook&quot;, @before_suite_hooks)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="1989" class="context" id="96"
       +                  onclick="toggle(96);">
       +                <li class="context-line" id="context-96"><code>          yield</code></li>
       +              </ol>
       +
       +              
       +              <ol start="1990" class="post-context"
       +                  id="post-96" onclick="toggle(96);">
       +                
       +                <li class="post-context-line"><code>        ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          run_suite_hooks(&quot;an `after(:suite)` hook&quot;, @after_suite_hooks)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Holds the various registered hooks. Here we use a FilterableItemRepository
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>block in run_specs</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="104"
       +                  class="pre-context" id="pre-97"
       +                  onclick="toggle(97);">
       +                
       +                <li class="pre-context-line"><code>      # @param example_groups [Array&lt;RSpec::Core::ExampleGroup&gt;] groups to run
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @return [Fixnum] exit status code. 0 if all specs passed,
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   or the configured failure exit code (1 by default) if specs
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   failed.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def run_specs(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        examples_count = @world.example_count(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        success = @configuration.reporter.report(examples_count) do |reporter|
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="111" class="context" id="97"
       +                  onclick="toggle(97);">
       +                <li class="context-line" id="context-97"><code>          @configuration.with_suite_hooks do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="112" class="post-context"
       +                  id="post-97" onclick="toggle(97);">
       +                
       +                <li class="post-context-line"><code>            if examples_count == 0 &amp;&amp; @configuration.fail_if_no_examples
       +</code></li>
       +                
       +                <li class="post-context-line"><code>              return @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            example_groups.map { |g| g.run(reporter) }.all?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end &amp;&amp; !@world.non_example_failure
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;reporter.rb</code> in
       +                <code><strong>report</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="67"
       +                  class="pre-context" id="pre-98"
       +                  onclick="toggle(98);">
       +                
       +                <li class="pre-context-line"><code>    #     reporter.report(group.examples.size) do |r|
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    #       example_groups.map {|g| g.run(r) }
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    #     end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    def report(expected_example_count)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      start(expected_example_count)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      begin
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="74" class="context" id="98"
       +                  onclick="toggle(98);">
       +                <li class="context-line" id="context-98"><code>        yield self</code></li>
       +              </ol>
       +
       +              
       +              <ol start="75" class="post-context"
       +                  id="post-98" onclick="toggle(98);">
       +                
       +                <li class="post-context-line"><code>      ensure
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        finish
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    # @private
       +</code></li>
       +                
       +                <li class="post-context-line"><code>    def start(expected_example_count, time=RSpec::Core::Time.now)
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>run_specs</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="103"
       +                  class="pre-context" id="pre-99"
       +                  onclick="toggle(99);">
       +                
       +                <li class="pre-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @param example_groups [Array&lt;RSpec::Core::ExampleGroup&gt;] groups to run
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @return [Fixnum] exit status code. 0 if all specs passed,
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   or the configured failure exit code (1 by default) if specs
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #   failed.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def run_specs(example_groups)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        examples_count = @world.example_count(example_groups)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="110" class="context" id="99"
       +                  onclick="toggle(99);">
       +                <li class="context-line" id="context-99"><code>        success = @configuration.reporter.report(examples_count) do |reporter|</code></li>
       +              </ol>
       +
       +              
       +              <ol start="111" class="post-context"
       +                  id="post-99" onclick="toggle(99);">
       +                
       +                <li class="post-context-line"><code>          @configuration.with_suite_hooks do
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            if examples_count == 0 &amp;&amp; @configuration.fail_if_no_examples
       +</code></li>
       +                
       +                <li class="post-context-line"><code>              return @configuration.failure_exit_code
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>            example_groups.map { |g| g.run(reporter) }.all?
       +</code></li>
       +                
       +                <li class="post-context-line"><code>          end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="80"
       +                  class="pre-context" id="pre-100"
       +                  onclick="toggle(100);">
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # Configures and runs a spec suite.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @param err [IO] error stream
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # @param out [IO] output stream
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def run(err, out)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        setup(err, out)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="87" class="context" id="100"
       +                  onclick="toggle(100);">
       +                <li class="context-line" id="context-100"><code>        run_specs(@world.ordered_example_groups).tap do</code></li>
       +              </ol>
       +
       +              
       +              <ol start="88" class="post-context"
       +                  id="post-100" onclick="toggle(100);">
       +                
       +                <li class="post-context-line"><code>          persist_example_statuses
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Wires together the various configuration objects and state holders.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # @param err [IO] error stream
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>run</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="64"
       +                  class="pre-context" id="pre-101"
       +                  onclick="toggle(101);">
       +                
       +                <li class="pre-context-line"><code>      def self.run(args, err=$stderr, out=$stdout)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        trap_interrupt
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        options = ConfigurationOptions.new(args)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        if options.options[:runner]
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>          options.options[:runner].call(options, err, out)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        else
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="71" class="context" id="101"
       +                  onclick="toggle(101);">
       +                <li class="context-line" id="context-101"><code>          new(options).run(err, out)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="72" class="post-context"
       +                  id="post-101" onclick="toggle(101);">
       +                
       +                <li class="post-context-line"><code>        end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      def initialize(options, configuration=RSpec.configuration, world=RSpec.world)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        @options       = options
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        @configuration = configuration
       +</code></li>
       +                
       +                <li class="post-context-line"><code>        @world         = world
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;lib&#x2F;rspec&#x2F;core&#x2F;runner.rb</code> in
       +                <code><strong>invoke</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="38"
       +                  class="pre-context" id="pre-102"
       +                  onclick="toggle(102);">
       +                
       +                <li class="pre-context-line"><code>        invoke
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # Runs the suite of specs and exits the process with an appropriate exit
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      # code.
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>      def self.invoke
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>        disable_autorun!
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="45" class="context" id="102"
       +                  onclick="toggle(102);">
       +                <li class="context-line" id="context-102"><code>        status = run(ARGV, $stderr, $stdout).to_i</code></li>
       +              </ol>
       +
       +              
       +              <ol start="46" class="post-context"
       +                  id="post-102" onclick="toggle(102);">
       +                
       +                <li class="post-context-line"><code>        exit(status) if status != 0
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      end
       +</code></li>
       +                
       +                <li class="post-context-line"><code>
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # Run a suite of RSpec examples. Does not exit.
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      #
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # This is used internally by RSpec to run a suite, but is available
       +</code></li>
       +                
       +                <li class="post-context-line"><code>      # for use by any other automation tool.
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;gems&#x2F;rspec-core-3.8.0&#x2F;exe&#x2F;rspec</code> in
       +                <code><strong>&lt;top (required)&gt;</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="1"
       +                  class="pre-context" id="pre-103"
       +                  onclick="toggle(103);">
       +                
       +                <li class="pre-context-line"><code>#!&#x2F;usr&#x2F;bin&#x2F;env ruby
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>require &#x27;rspec&#x2F;core&#x27;
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="4" class="context" id="103"
       +                  onclick="toggle(103);">
       +                <li class="context-line" id="context-103"><code>RSpec::Core::Runner.invoke</code></li>
       +              </ol>
       +
       +              
       +              <ol start="5" class="post-context"
       +                  id="post-103" onclick="toggle(103);">
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bin&#x2F;rspec</code> in
       +                <code><strong>load</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="16"
       +                  class="pre-context" id="pre-104"
       +                  onclick="toggle(104);">
       +                
       +                <li class="pre-context-line"><code>  if str and Gem::Version.correct?(str)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    version = str
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    ARGV.shift
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>if Gem.respond_to?(:activate_bin_path)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="23" class="context" id="104"
       +                  onclick="toggle(104);">
       +                <li class="context-line" id="context-104"><code>load Gem.activate_bin_path(&#x27;rspec-core&#x27;, &#x27;rspec&#x27;, version)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="24" class="post-context"
       +                  id="post-104" onclick="toggle(104);">
       +                
       +                <li class="post-context-line"><code>else
       +</code></li>
       +                
       +                <li class="post-context-line"><code>gem &quot;rspec-core&quot;, version
       +</code></li>
       +                
       +                <li class="post-context-line"><code>load Gem.bin_path(&quot;rspec-core&quot;, &quot;rspec&quot;, version)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bin&#x2F;rspec</code> in
       +                <code><strong>&lt;main&gt;</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="16"
       +                  class="pre-context" id="pre-105"
       +                  onclick="toggle(105);">
       +                
       +                <li class="pre-context-line"><code>  if str and Gem::Version.correct?(str)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    version = str
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>    ARGV.shift
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>end
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>if Gem.respond_to?(:activate_bin_path)
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="23" class="context" id="105"
       +                  onclick="toggle(105);">
       +                <li class="context-line" id="context-105"><code>load Gem.activate_bin_path(&#x27;rspec-core&#x27;, &#x27;rspec&#x27;, version)</code></li>
       +              </ol>
       +
       +              
       +              <ol start="24" class="post-context"
       +                  id="post-105" onclick="toggle(105);">
       +                
       +                <li class="post-context-line"><code>else
       +</code></li>
       +                
       +                <li class="post-context-line"><code>gem &quot;rspec-core&quot;, version
       +</code></li>
       +                
       +                <li class="post-context-line"><code>load Gem.bin_path(&quot;rspec-core&quot;, &quot;rspec&quot;, version)
       +</code></li>
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bin&#x2F;ruby_executable_hooks</code> in
       +                <code><strong>eval</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="17"
       +                  class="pre-context" id="pre-106"
       +                  onclick="toggle(106);">
       +                
       +                <li class="pre-context-line"><code>if
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  (index = content.index(&quot;\n#!ruby\n&quot;)) &amp;&amp; index &gt; 0
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>then
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  skipped_content = content.slice!(0..index)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  start_line = skipped_content.count(&quot;\n&quot;) + 1
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  eval content, binding, $0, start_line
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>else
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="24" class="context" id="106"
       +                  onclick="toggle(106);">
       +                <li class="context-line" id="context-106"><code>  eval content, binding, $0</code></li>
       +              </ol>
       +
       +              
       +              <ol start="25" class="post-context"
       +                  id="post-106" onclick="toggle(106);">
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +          
       +
       +            <li class="frame-info system">
       +              <code>&#x2F;home&#x2F;clone&#x2F;.rvm&#x2F;gems&#x2F;ruby-2.6.1&#x2F;bin&#x2F;ruby_executable_hooks</code> in
       +                <code><strong>&lt;main&gt;</strong></code>
       +            </li>
       +
       +            <li class="code system">
       +              
       +              <ol start="17"
       +                  class="pre-context" id="pre-107"
       +                  onclick="toggle(107);">
       +                
       +                <li class="pre-context-line"><code>if
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  (index = content.index(&quot;\n#!ruby\n&quot;)) &amp;&amp; index &gt; 0
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>then
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  skipped_content = content.slice!(0..index)
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  start_line = skipped_content.count(&quot;\n&quot;) + 1
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>  eval content, binding, $0, start_line
       +</code></li>
       +                
       +                <li class="pre-context-line"><code>else
       +</code></li>
       +                
       +              </ol>
       +              
       +
       +              <ol start="24" class="context" id="107"
       +                  onclick="toggle(107);">
       +                <li class="context-line" id="context-107"><code>  eval content, binding, $0</code></li>
       +              </ol>
       +
       +              
       +              <ol start="25" class="post-context"
       +                  id="post-107" onclick="toggle(107);">
       +                
       +                <li class="post-context-line"><code>end
       +</code></li>
       +                
       +              </ol>
       +              
       +              <div class="clear"></div>
       +            </li>
       +
       +          
       +
       +        
       +      
       +
       +      </ul>
       +    </div> <!-- /BACKTRACE -->
       +
       +    
       +      <div id="get">
       +        <h3 id="get-info">GET</h3>
       +        
       +          <p class="no-data">No GET data.</p>
       +        
       +        <div class="clear"></div>
       +      </div> <!-- /GET -->
       +
       +      <div id="post">
       +        <h3 id="post-info">POST</h3>
       +        
       +          <p class="no-data">No POST data.</p>
       +        
       +        <div class="clear"></div>
       +      </div> <!-- /POST -->
       +    
       +
       +    <div id="cookies">
       +      <h3 id="cookie-info">COOKIES</h3>
       +      
       +        <p class="no-data">No cookie data.</p>
       +      
       +      <div class="clear"></div>
       +    </div> <!-- /COOKIES -->
       +
       +    <div id="rack">
       +      <h3 id="env-info">Rack ENV</h3>
       +      <table class="req">
       +        <tr>
       +          <th>Variable</th>
       +          <th>Value</th>
       +        </tr>
       +         
       +         <tr>
       +           <td>CONTENT_LENGTH</td>
       +           <td class="code"><div>0</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>HTTPS</td>
       +           <td class="code"><div>off</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>HTTP_COOKIE</td>
       +           <td class="code"><div></div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>HTTP_HOST</td>
       +           <td class="code"><div>www.example.com</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>PATH_INFO</td>
       +           <td class="code"><div>&#x2F;recipes&#x2F;new</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>QUERY_STRING</td>
       +           <td class="code"><div></div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>REMOTE_ADDR</td>
       +           <td class="code"><div>127.0.0.1</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>REQUEST_METHOD</td>
       +           <td class="code"><div>GET</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>SCRIPT_NAME</td>
       +           <td class="code"><div></div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>SERVER_NAME</td>
       +           <td class="code"><div>www.example.com</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>SERVER_PORT</td>
       +           <td class="code"><div>80</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.errors</td>
       +           <td class="code"><div>#&lt;Object:0x00005605966e1bc0&gt;</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.input</td>
       +           <td class="code"><div>#&lt;StringIO:0x000056059849f338&gt;</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.logger</td>
       +           <td class="code"><div>#&lt;Rack::NullLogger:0x0000560597969fb8 @app=#&lt;Rack::Protection::FrameOptions:0x000056059796a058 @app=#&lt;Rack::Protection::HttpOrigin:0x000056059796a0f8 @app=#&lt;Rack::Protection::IPSpoofing:0x000056059796a170 @app=#&lt;Rack::Protection::JsonCsrf:0x000056059796a210 @app=#&lt;Rack::Protection::PathTraversal:0x000056059796a288 @app=#&lt;Rack::Protection::XSSHeader:0x000056059796a328 @app=#&lt;ApplicationController:0x00005605979034c0 @default_layout=:layout, @preferred_extension=nil, @app=nil, @template_cache=#&lt;Tilt::Cache:0x0000560597903470 @cache={}&gt;&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :xss_mode=&gt;:block, :nosniff=&gt;true, :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :allow_if=&gt;nil, :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :allow_if=&gt;nil, :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}&gt;, @options={:reaction=&gt;:drop_session, :logging=&gt;true, :message=&gt;&quot;Forbidden&quot;, :encryptor=&gt;Digest::SHA1, :session_key=&gt;&quot;rack.session&quot;, :status=&gt;403, :allow_empty_referrer=&gt;true, :report_key=&gt;&quot;protection.failed&quot;, :html_types=&gt;[&quot;text&#x2F;html&quot;, &quot;application&#x2F;xhtml&quot;, &quot;text&#x2F;xml&quot;, &quot;application&#x2F;xml&quot;], :frame_options=&gt;:sameorigin, :img_src=&gt;&quot;&#x27;self&#x27; data:&quot;, :font_src=&gt;&quot;&#x27;self&#x27;&quot;, :without_session=&gt;true}, @frame_options=&quot;SAMEORIGIN&quot;&gt;&gt;</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.multiprocess</td>
       +           <td class="code"><div>true</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.multithread</td>
       +           <td class="code"><div>true</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.request.cookie_hash</td>
       +           <td class="code"><div>{}</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.request.cookie_string</td>
       +           <td class="code"><div></div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.request.query_hash</td>
       +           <td class="code"><div>{}</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.request.query_string</td>
       +           <td class="code"><div></div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.run_once</td>
       +           <td class="code"><div>false</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.test</td>
       +           <td class="code"><div>true</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.url_scheme</td>
       +           <td class="code"><div>http</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>rack.version</td>
       +           <td class="code"><div>[1, 3]</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>sinatra.accept</td>
       +           <td class="code"><div>[#&lt;Sinatra::Request::AcceptEntry:0x000056059849c570 @entry=&quot;*&#x2F;*&quot;, @type=&quot;*&#x2F;*&quot;, @params={}, @q=1.0&gt;]</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>sinatra.error</td>
       +           <td class="code"><div>#&lt;ActiveRecord::RecordNotFound: Couldn&#x27;t find Recipe with &#x27;id&#x27;=new&gt;</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>sinatra.error.params</td>
       +           <td class="code"><div>{&quot;id&quot;=&gt;&quot;new&quot;}</div></td>
       +         </tr>
       +         
       +         <tr>
       +           <td>sinatra.route</td>
       +           <td class="code"><div>GET &#x2F;recipes&#x2F;:id</div></td>
       +         </tr>
       +         
       +      </table>
       +      <div class="clear"></div>
       +    </div> <!-- /RACK ENV -->
       +
       +    <p id="explanation">You're seeing this error because you have
       +enabled the <code>show_exceptions</code> setting.</p>
       +  </div> <!-- /WRAP -->
       +  </body>
       +</html>
     # ./spec/sinatra_restful_routes_lab_spec.rb:102:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  7) Recipe App new page '/recipes/new' posts the form back to create a new recipe
     Failure/Error: fill_in :name, :with => "Enchiladas con Salsa Verde"

     Capybara::ElementNotFound:
       Unable to find field :name
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:302:in `block in synced_resolve'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/base.rb:83:in `synchronize'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:293:in `synced_resolve'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:48:in `find'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/actions.rb:90:in `fill_in'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/session.rb:744:in `block (2 levels) in <class:Session>'
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/dsl.rb:51:in `block (2 levels) in <module:DSL>'
     # ./spec/sinatra_restful_routes_lab_spec.rb:107:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  8) Recipe App creating a new recipe creates a new recipe and saves to the database
     Failure/Error: follow_redirect!

     Rack::Test::Error:
       Last response was not a redirect. Cannot follow_redirect!
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/rack-test-1.1.0/lib/rack/test.rb:189:in `follow_redirect!'
     # ./spec/sinatra_restful_routes_lab_spec.rb:128:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  9) Recipe App creating a new recipe redirects to the recipe show page
     Failure/Error: follow_redirect!

     Rack::Test::Error:
       Last response was not a redirect. Cannot follow_redirect!
     # /home/clone/.rvm/gems/ruby-2.6.1/gems/rack-test-1.1.0/lib/rack/test.rb:189:in `follow_redirect!'
     # ./spec/sinatra_restful_routes_lab_spec.rb:128:in `block (3 levels) in <top (required)>'
     # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
     # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
     # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  10) Recipe App updating a recipe updates the recipe
      Failure/Error: fill_in :name, :with => "Double chocolate chip cookies"

      Capybara::ElementNotFound:
        Unable to find field :name
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:302:in `block in synced_resolve'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/base.rb:83:in `synchronize'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:293:in `synced_resolve'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:48:in `find'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/actions.rb:90:in `fill_in'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/session.rb:744:in `block (2 levels) in <class:Session>'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/dsl.rb:51:in `block (2 levels) in <module:DSL>'
      # ./spec/sinatra_restful_routes_lab_spec.rb:151:in `block (3 levels) in <top (required)>'
      # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
      # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  11) Recipe App updating a recipe redirects to the recipe show page
      Failure/Error: fill_in :name, :with => "Double chocolate chip cookies"

      Capybara::ElementNotFound:
        Unable to find field :name
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:302:in `block in synced_resolve'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/base.rb:83:in `synchronize'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:293:in `synced_resolve'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/finders.rb:48:in `find'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/node/actions.rb:90:in `fill_in'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/session.rb:744:in `block (2 levels) in <class:Session>'
      # /home/clone/.rvm/gems/ruby-2.6.1/gems/capybara-3.14.0/lib/capybara/dsl.rb:51:in `block (2 levels) in <module:DSL>'
      # ./spec/sinatra_restful_routes_lab_spec.rb:151:in `block (3 levels) in <top (required)>'
      # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
      # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

  12) Recipe App deleting a recipe deletes a recipe
      Failure/Error: expect(Recipe.find_by_id(@cookie.id)).to eq(nil)

        expected: nil
             got: #<Recipe id: 3, name: "Chocolate Chip Cookies", ingredients: "chocolate chips, flour, sugar, butter", cook_time: "30 minutes">

        (compared using ==)
      # ./spec/sinatra_restful_routes_lab_spec.rb:184:in `block (3 levels) in <top (required)>'
      # ./spec/spec_helper.rb:25:in `block (3 levels) in <top (required)>'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/generic/base.rb:16:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/base.rb:101:in `cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:52:in `block (2 levels) in cleaning'
      # /home/clone/.rvm/gems/ruby-2.6.1/bundler/gems/database_cleaner-4c2408ffdbbd/lib/database_cleaner/configuration.rb:53:in `cleaning'
      # ./spec/spec_helper.rb:24:in `block (2 levels) in <top (required)>'

Finished in 0.33497 seconds (files took 0.77137 seconds to load)
21 examples, 12 failures

Failed examples:

rspec ./spec/sinatra_restful_routes_lab_spec.rb:74 # Recipe App edit page '/recipes/:id/edit' responds with a 200 status code
rspec ./spec/sinatra_restful_routes_lab_spec.rb:78 # Recipe App edit page '/recipes/:id/edit' contains a form to edit the recipe
rspec ./spec/sinatra_restful_routes_lab_spec.rb:82 # Recipe App edit page '/recipes/:id/edit' displays the recipe's ingredients before editing
rspec ./spec/sinatra_restful_routes_lab_spec.rb:86 # Recipe App edit page '/recipes/:id/edit' submits via a patch request
rspec ./spec/sinatra_restful_routes_lab_spec.rb:97 # Recipe App new page '/recipes/new' responds with a 200 status code
rspec ./spec/sinatra_restful_routes_lab_spec.rb:101 # Recipe App new page '/recipes/new' contains a form to create the recipe
rspec ./spec/sinatra_restful_routes_lab_spec.rb:105 # Recipe App new page '/recipes/new' posts the form back to create a new recipe
rspec ./spec/sinatra_restful_routes_lab_spec.rb:131 # Recipe App creating a new recipe creates a new recipe and saves to the database
rspec ./spec/sinatra_restful_routes_lab_spec.rb:136 # Recipe App creating a new recipe redirects to the recipe show page
rspec ./spec/sinatra_restful_routes_lab_spec.rb:158 # Recipe App updating a recipe updates the recipe
rspec ./spec/sinatra_restful_routes_lab_spec.rb:164 # Recipe App updating a recipe redirects to the recipe show page
rspec ./spec/sinatra_restful_routes_lab_spec.rb:183 # Recipe App deleting a recipe deletes a recipe

