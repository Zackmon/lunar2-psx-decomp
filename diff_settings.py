def apply(config, args):
    basename = "boot"

    config["arch"] = "mipsel"
    config["baseimg"] = f"SLUS_010/SLUS_010.71"
    config["myimg"] = f"build/{basename}.dat"
    config["mapfile"] = f"build/{basename}.map"
    config["source_directories"] = [f"src/{basename}", "include"]