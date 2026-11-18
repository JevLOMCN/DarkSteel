// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 4

// DestroyObject @ 14cfebf70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLiveLinkProvider,SharedPointerInternals::DefaultDeleter<FLiveLinkProvider>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLiveLinkProvider,SharedPointerInternals::DefaultDeleter<FLiveLinkProvider>,1>
                *this)

{
  FLiveLinkProvider *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLiveLinkProvider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfebf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cfebf90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>,1>
                *this)

{
  TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfebfa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cfebfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>,1>
                *this)

{
  TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfebfc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cfebfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>,1>
                *this)

{
  TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfebfe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

