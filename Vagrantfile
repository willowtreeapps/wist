Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"

  config.vm.provider "virtualbox" do |vb|
    vb.cpus = 4
    vb.memory = "2048"
  end
  
  config.vm.provision "shell", inline: <<-SHELL
    # Install dependencies
    apt update
    apt install -y git cmake build-essential python nodejs npm
    git clone https://github.com/juj/emsdk.git

    # Emscripten sdk installation sourced from here
    # https://kripken.github.io/emscripten-site/docs/getting_started/downloads.html

    # Enter that directory
    cd emsdk
        # Fetch the latest registry of available tools.
    ./emsdk update

    # Download and install the latest SDK tools.
    ./emsdk install latest

    # Make the "latest" SDK "active" for the current user. (writes ~/.emscripten file)
    ./emsdk activate latest

    # Doesn't work from here 
    # Activate PATH and other environment variables in the current terminal
    # source ./emsdk_env.sh

  SHELL
end
