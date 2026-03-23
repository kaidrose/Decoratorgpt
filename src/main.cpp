#include "decorator.hpp"
#include <Geode/Geode.hpp>
#include <Geode/loader/Mod.hpp>

class KaidenMod : public geode::Mod {
public:
    KaidenMod() : Mod() {}

    void onLoad() override {
        geode::log::info("KaidenMod loaded! Running decorator...");
        decorate();
    }
};

GEODE_REGISTER_MOD(KaidenMod)
