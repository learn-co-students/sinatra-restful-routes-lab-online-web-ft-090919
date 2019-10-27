class ApplicationController < Sinatra::Base
  configure do
    set :public_folder, 'public'
    set :views, 'app/views'
  end

  get '/' do
    redirect to '/recipes'
  end

  get '/recipes' do
    @recipes = Recipe.all
    erb :index
  end

  get '/recipes/new' do
    erb :new
  end

  get 'recipes/:id/edit' do 
    @recipe = Recipe.find(params[:id])
    erb :edit
  end

  get '/recipes/:id' do 
    @recipe = Recipe.find_by_id(params[:id])
    erb :show
  end

  post '/recipes' do
    puts params
    @recipe = Recipe.new({:name=>params[:name], :ingredients=>params[:ingredients], :cook_time=>params[:cook_time]})
    redirect to '/recipes/{@recipe.id}'
    @recipe.save
    redirect to '/recipes/{@recipe.id}'
  end

# delete '/recipes/:id/delete'
#   @recipe = Recipe.find_by_id(params[:id])
#   @recipe.delete
#   redirect to '/recipes'
# end

end