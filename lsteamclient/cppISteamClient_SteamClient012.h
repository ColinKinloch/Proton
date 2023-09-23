extern HSteamPipe cppISteamClient_SteamClient012_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient012_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient012_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient012_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient012_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void /*ISteamUser*/ * cppISteamClient_SteamClient012_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamGameServer*/ * cppISteamClient_SteamClient012_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient012_SetLocalIPBinding(void *, uint32, uint16);
extern void /*ISteamFriends*/ * cppISteamClient_SteamClient012_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamUtils*/ * cppISteamClient_SteamClient012_GetISteamUtils(void *, HSteamPipe, const char *);
extern void /*ISteamMatchmaking*/ * cppISteamClient_SteamClient012_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamMatchmakingServers*/ * cppISteamClient_SteamClient012_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient012_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamUserStats*/ * cppISteamClient_SteamClient012_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamGameServerStats*/ * cppISteamClient_SteamClient012_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamApps*/ * cppISteamClient_SteamClient012_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamNetworking*/ * cppISteamClient_SteamClient012_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamRemoteStorage*/ * cppISteamClient_SteamClient012_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamScreenshots*/ * cppISteamClient_SteamClient012_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient012_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient012_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient012_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient012_BShutdownIfAllPipesClosed(void *);
extern void /*ISteamHTTP*/ * cppISteamClient_SteamClient012_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamUnifiedMessages*/ * cppISteamClient_SteamClient012_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamController*/ * cppISteamClient_SteamClient012_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void /*ISteamUGC*/ * cppISteamClient_SteamClient012_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
