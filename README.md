# zephyr-external-module-template

# Setup

1. open this repository with vscode
2. open as devcontainer
3. `cd lib`
4. `west init -l tests`
5. `west update`

# Build

1. `cd lib`
2. `west build -p auto -b native_sim tests/bar`

# Tests

1. `cd lib`
2. `zephyr/scripts/twister -v -T tests`
