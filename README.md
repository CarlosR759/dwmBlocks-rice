<div align="center">
  # DwmBlocks

  ### A ***Simple*** and ***comfy*** bar.
</div>


This is my bar for working, which includes:

  - Local ip address.
  - cpu percentage usage.
  - Inside Temperature [In celsius].
  - Ram in use and total amount of ram.
  - HDD or ssd percentage of memory used.
  - Date calendar and time.

---


## Prerequisites
You will need dev tools for compiling:

<details>
  <summary>Arch</summary>

  ```sh
  sudo pacman -S base base-devel 
  ```
</details>

<details>
  <summary>Debian/ubuntu</summary>

  ```sh
  sudo apt install build-essential 
  ```
  
</details>

<details>
  <summary>RedHat/Fedora</summary>

  ```sh
  sudo dnf groupinstall "Development Tools" "Development Libraries"
  ```
</details>

## Installation

```sh
git clone https://github.com/CarlosR759/dwmBlocks-rice.git 
```

>[!NOTE]
> - My dwmblocks need to be inserted in a path file $HOME/programs/dwmblocks so you will need to rename your git cloned repo to match the path in the file blocks.h . You can change the path if you like but you should make sure that dwmblocks have the scripts folder, which have all the scripts to get the status info bar working.
> - If by some case you have problems with $HOME env variable, you can replace it manually like: /home/yourUsername/programs/dwmblocks or the path that you like.


```sh
mv dwmBlocks-rice dwmBlocks 
```

```sh
cd dwmBlocks
```

```sh
sudo make clean install
```

>[!TIP]
> - You can add more status info in the config.h file. The script should be included in the script folder to make use of the SC(route) of the config.h file.
