// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 9

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>_> @ 146303230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager>_>
          *param_1)

{
  TRawMessageHandler<FChaosVDChannelStateChangeCommandMessage,FChaosVDRemoteSessionsManager> *pTVar1
  ;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFChaosVDChannelStateChangeCommandMessage__VFChaosVDRemoteSessionsManager____U__DefaultDeleter_V__TRawMessageHandler_UFChaosVDChannelStateChangeCommandMessage__VFChaosVDRemoteSessionsManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>_> @ 1463032a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager>_>
          *param_1)

{
  TRawMessageHandler<FChaosVDFullSessionInfoRequestMessage,FChaosVDRemoteSessionsManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFChaosVDFullSessionInfoRequestMessage__VFChaosVDRemoteSessionsManager____U__DefaultDeleter_V__TRawMessageHandler_UFChaosVDFullSessionInfoRequestMessage__VFChaosVDRemoteSessionsManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>_> @ 146303310

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager>_>
          *param_1)

{
  TRawMessageHandler<FChaosVDSessionPing,FChaosVDRemoteSessionsManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFChaosVDSessionPing__VFChaosVDRemoteSessionsManager____U__DefaultDeleter_V__TRawMessageHandler_UFChaosVDSessionPing__VFChaosVDRemoteSessionsManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>_> @ 146303380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
          *param_1)

{
  TRawMessageHandler<FChaosVDStartRecordingCommandMessage,FChaosVDRemoteSessionsManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFChaosVDStartRecordingCommandMessage__VFChaosVDRemoteSessionsManager____U__DefaultDeleter_V__TRawMessageHandler_UFChaosVDStartRecordingCommandMessage__VFChaosVDRemoteSessionsManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>_> @ 1463033f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMessageHandler,1> * __thiscall
TSharedPtr<IMessageHandler,1>::
TSharedPtr<IMessageHandler,1><TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
          (TSharedPtr<IMessageHandler,1> *this,
          TRawPtrProxy<TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager>_>
          *param_1)

{
  TRawMessageHandler<FChaosVDStopRecordingCommandMessage,FChaosVDRemoteSessionsManager> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IMessageHandler *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TRawMessageHandler_UFChaosVDStopRecordingCommandMessage__VFChaosVDRemoteSessionsManager____U__DefaultDeleter_V__TRawMessageHandler_UFChaosVDStopRecordingCommandMessage__VFChaosVDRemoteSessionsManager_____SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FPhysScene_Chaos> @ 146303460

TSharedPtr<FPhysScene_Chaos,1> * __thiscall
TSharedPtr<FPhysScene_Chaos,1>::operator=<FPhysScene_Chaos>
          (TSharedPtr<FPhysScene_Chaos,1> *this,TRawPtrProxy<FPhysScene_Chaos> *param_1)

{
  FPhysScene_Chaos *pFVar1;
  TSharedPtr<FPhysScene_Chaos,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFPhysScene_Chaos__U__DefaultDeleter_VFPhysScene_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FPhysScene_Chaos *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14630b910

FChaosDDFrame * __thiscall
TSharedPtr<ChaosDD::Private::FChaosDDFrame,1>::operator->
          (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosDDFrame *pFVar3;
  
  if (this->Object != (FChaosDDFrame *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosDDFrame *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14630b960

FChaosDDScene * __thiscall
TSharedPtr<ChaosDD::Private::FChaosDDScene,1>::operator->
          (TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FChaosDDScene *pFVar3;
  
  if (this->Object != (FChaosDDScene *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosDDScene *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14630b9b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageEndpoint * __thiscall
TSharedPtr<FMessageEndpoint,1>::operator->(TSharedPtr<FMessageEndpoint,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMessageEndpoint *pFVar3;
  
  if (this->Object != (FMessageEndpoint *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMessageEndpoint *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

