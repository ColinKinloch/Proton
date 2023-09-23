extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketIP(void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectByIPAddress(void *, const SteamNetworkingIPAddr *, int, const SteamNetworkingConfigValue_t *);
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateListenSocketP2P(void *, int, int, const SteamNetworkingConfigValue_t *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2P(void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_AcceptConnection(void *, HSteamNetConnection);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseConnection(void *, HSteamNetConnection, int, const char *, bool);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CloseListenSocket(void *, HSteamListenSocket);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionUserData(void *, HSteamNetConnection, int64);
extern int64 cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionUserData(void *, HSteamNetConnection);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SetConnectionName(void *, HSteamNetConnection, const char *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionName(void *, HSteamNetConnection, char *, int);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessageToConnection(void *, HSteamNetConnection, const void *, uint32, int, int64 *);
extern void cppISteamNetworkingSockets_SteamNetworkingSockets006_SendMessages(void *, int, winSteamNetworkingMessage_t_147 **, int64 *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_FlushMessagesOnConnection(void *, HSteamNetConnection);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnConnection(void *, HSteamNetConnection, winSteamNetworkingMessage_t_147 **, int);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceiveMessagesOnListenSocket(void *, HSteamListenSocket, winSteamNetworkingMessage_t_147 **, int);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetConnectionInfo(void *, HSteamNetConnection, SteamNetConnectionInfo_t *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetQuickConnectionStatus(void *, HSteamNetConnection, SteamNetworkingQuickConnectionStatus *);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets006_GetDetailedConnectionStatus(void *, HSteamNetConnection, char *, int);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetListenSocketAddress(void *, HSteamListenSocket, SteamNetworkingIPAddr *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateSocketPair(void *, HSteamNetConnection *, HSteamNetConnection *, bool, const SteamNetworkingIdentity *, const SteamNetworkingIdentity *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_GetIdentity(void *, SteamNetworkingIdentity *);
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets006_InitAuthentication(void *);
extern ESteamNetworkingAvailability cppISteamNetworkingSockets_SteamNetworkingSockets006_GetAuthenticationStatus(void *, SteamNetAuthenticationStatus_t *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedRelayAuthTicket(void *, const void *, int, SteamDatagramRelayAuthTicket *);
extern int cppISteamNetworkingSockets_SteamNetworkingSockets006_FindRelayAuthTicketForServer(void *, const SteamNetworkingIdentity *, int, SteamDatagramRelayAuthTicket *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectToHostedDedicatedServer(void *, const SteamNetworkingIdentity *, int, int, const SteamNetworkingConfigValue_t *);
extern uint16 cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPort(void *);
extern SteamNetworkingPOPID cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerPOPID(void *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_GetHostedDedicatedServerAddress(void *, SteamDatagramHostedAddress *);
extern HSteamListenSocket cppISteamNetworkingSockets_SteamNetworkingSockets006_CreateHostedDedicatedServerListenSocket(void *, int, int, const SteamNetworkingConfigValue_t *);
extern EResult cppISteamNetworkingSockets_SteamNetworkingSockets006_GetGameCoordinatorServerLogin(void *, SteamDatagramGameCoordinatorServerLogin *, int *, void *);
extern HSteamNetConnection cppISteamNetworkingSockets_SteamNetworkingSockets006_ConnectP2PCustomSignaling(void *, void /*ISteamNetworkingConnectionCustomSignaling*/ *, const SteamNetworkingIdentity *, int, const SteamNetworkingConfigValue_t *);
extern bool cppISteamNetworkingSockets_SteamNetworkingSockets006_ReceivedP2PCustomSignal(void *, const void *, int, void /*ISteamNetworkingCustomSignalingRecvContext*/ *);
