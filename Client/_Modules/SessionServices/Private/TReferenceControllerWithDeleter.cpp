// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 17

// DestroyObject @ 148ce9240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionManager,SharedPointerInternals::DefaultDeleter<FSessionManager>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSessionManager,SharedPointerInternals::DefaultDeleter<FSessionManager>,1>
                *this)

{
  FSessionManager *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSessionManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ce9251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148ce92a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionService,SharedPointerInternals::DefaultDeleter<FSessionService>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSessionService,SharedPointerInternals::DefaultDeleter<FSessionService>,1>
                *this)

{
  FSessionService *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSessionService *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ce92b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf13a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionLogMessage,SharedPointerInternals::DefaultDeleter<FSessionLogMessage>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSessionLogMessage,SharedPointerInternals::DefaultDeleter<FSessionLogMessage>,1>
                *this)

{
  FSessionLogMessage *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSessionLogMessage *)0x0) {
    pFVar2 = (pFVar1->Text).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->InstanceName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x50);
    return;
  }
  return;
}

// DestroyObject @ 148cf13f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServicePong,FSessionManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServicePong,FSessionManager> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_>,1>
                *this)

{
  TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_>,1>
                *this)

{
  TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_>,1>
                *this)

{
  TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>_>,1>
                *this)

{
  TRawMessageHandler<FSessionServicePing,FSessionService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FSessionServicePing,FSessionService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>_>,1>
                *this)

{
  TRawMessageHandler<FSessionServicePong,FSessionManager> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FSessionServicePong,FSessionManager> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf14a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf14b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf14c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf14d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlChannelsStatus,FTraceController> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlChannelsStatus,FTraceController> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf14e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf14f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlDiscovery,FTraceController> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSettings,FTraceController> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSettings,FTraceController> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlStatus,FTraceController> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlStatus,FTraceController> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1550

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionInfo,SharedPointerInternals::DefaultDeleter<FSessionInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSessionInfo,SharedPointerInternals::DefaultDeleter<FSessionInfo>,1>
                *this)

{
  FSessionInfo *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSessionInfo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionInstanceInfo,SharedPointerInternals::DefaultDeleter<FSessionInstanceInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSessionInstanceInfo,SharedPointerInternals::DefaultDeleter<FSessionInstanceInfo>,1>
                *this)

{
  FSessionInstanceInfo *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSessionInstanceInfo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf1581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x88))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148cf1590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTraceController,SharedPointerInternals::DefaultDeleter<FTraceController>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTraceController,SharedPointerInternals::DefaultDeleter<FTraceController>,1>
                *this)

{
  FTraceController *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTraceController *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cf15a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

