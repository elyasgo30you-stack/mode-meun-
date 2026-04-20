#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void destroyPlayer(PlayerObject* p0, GameObject* p1) {
        if (Mod::get()->getSettingValue<bool>("noclip") || Mod::get()->getSettingValue<bool>("godmode")) return;
        PlayLayer::destroyPlayer(p0, p1);
    }
};

class $modify(PlayerObject) {
    void pushButton(PlayerButton p0) {
        if (Mod::get()->getSettingValue<bool>("inf-jump")) this->m_isOnGround = true;
        PlayerObject::pushButton(p0);
    }
};
