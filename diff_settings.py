def apply(config, args):
    basename = "boot"

    config["arch"] = "mipsel"
    config["baseimg"] = f"{basename}.dat"
    config["myimg"] = f"build/{basename}.dat"
    config["mapfile"] = f"build/{basename}.map"
    config["source_directories"] = [f"src/{basename}", "include"]