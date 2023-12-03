# WorkSpace Structure

```shell
.
├── CMakeLists.txt                # Root CMakeLists.txt
├── LICENSE
├── README.md                     # This file
├── apps                          # Application folder
│   ├── CMakeLists.txt              # Application CMakeLists.txt
│   ├── inc                         # Application include folder
│   │   └── lib_calc.h                # Application include file
│   ├── main.c                      # Application main file
│   ├── scripts                     # Application scripts folder
│   │   ├── helper.py                 # Application helper script
│   │   ├── killExes.bat              # Application killExes script
│   │   └── killExes.sh               # Application killExes script
│   ├── src                         # Application source folder
│   │   ├── CMakeLists.txt            # Application source CMakeLists.txt
│   │   └── lib_calc.c                # Application source file
│   └── test                        # Application test folder
│       ├── CMakeLists.txt            # Application test CMakeLists.txt
│       └── test_lib_calc.cc          # Application test file
├── doc                           # Documentation folder
│   └── basicStructure.md           # Basic folder structure
└── output                        # Output folder
    ├── exe                         # Output executable folder
    │   ├── main                      # Output main executable folder
    │   └── test                      # Output test executable folder
    └── lib                         # Output library folder
        └── libcalc.a                 # Output library file
```
