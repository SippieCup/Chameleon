#pragma once

class IVEngineClient {
	public:
		inline bool GetPlayerInfo(int Index, player_info_t* PlayerInfo) {
			return CallVirtualFunction<bool(__thiscall *)(void *, int, player_info_t*)>(this, 8)(this, Index, PlayerInfo);
		}

		inline int GetPlayerForUserID(int UserID) {
			return CallVirtualFunction<bool(__thiscall *)(void *, int)>(this, 9)(this, UserID);
		}

		inline int GetLocalPlayer() {
			return CallVirtualFunction<int(__thiscall *)(void *)>(this, 12)(this);
		}
};