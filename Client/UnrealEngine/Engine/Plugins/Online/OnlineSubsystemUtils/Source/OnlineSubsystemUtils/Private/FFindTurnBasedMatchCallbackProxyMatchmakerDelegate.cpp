// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// FFindTurnBasedMatchCallbackProxyMatchmakerDelegate @ 14ec51fa0

FFindTurnBasedMatchCallbackProxyMatchmakerDelegate * __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this)

{
  this->_padding_ = (longlong)&___7FFindTurnBasedMatchCallbackProxyMatchmakerDelegate__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FindTurnBasedMatchCallbackProxy = (UFindTurnBasedMatchCallbackProxy *)0x0;
  (this->TurnBasedInterface).Object = (IOnlineTurnBased *)0x0;
  (this->TurnBasedInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FFindTurnBasedMatchCallbackProxyMatchmakerDelegate @ 14ec55cd0

void __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::
~FFindTurnBasedMatchCallbackProxyMatchmakerDelegate
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FFindTurnBasedMatchCallbackProxyMatchmakerDelegate__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TurnBasedInterface).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FTurnBasedMatchmakerDelegate__6B_;
  return;
}

// OnMatchFound @ 14ec88ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::OnMatchFound
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this,
          TSharedRef<FTurnBasedMatch,1> *param_1)

{
  UFindTurnBasedMatchCallbackProxy *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FRepLayout,1> *pTVar6;
  FString *pFVar7;
  uchar *local_108;
  undefined8 local_100;
  FString local_f8;
  void *local_e8 [2];
  TSharedPtr<FRepLayout,1> local_d8;
  undefined1 local_c8 [16];
  FBitReader local_b8;
  
  if (5 < (byte)LogOnline._0_1_) {
    (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,local_e8);
    ::FString::PrintfImpl(&local_f8,L"Turn-based match found: %s");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8[0] != (void *)0x0) {
      FMemory::Free(local_e8[0]);
    }
  }
  local_108 = (uchar *)0x0;
  local_100 = 0;
  cVar3 = (**(code **)((longlong)*param_1->Object + 0x28))(param_1->Object,&local_108);
  if ((cVar3 != '\0') &&
     (this->FindTurnBasedMatchCallbackProxy != (UFindTurnBasedMatchCallbackProxy *)0x0)) {
    if (((this->TurnBasedInterface).Object == (IOnlineTurnBased *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (**(code **)((longlong)*(this->TurnBasedInterface).Object + 0x58))();
    FBitReader::FBitReader(&local_b8,local_108,(longlong)iVar5);
    pTVar6 = FRepLayout::CreateFromClass
                       (&local_d8,
                        *(UClass **)
                         &this->FindTurnBasedMatchCallbackProxy->TurnBasedMatchInterface->field_0x10
                        ,(UNetConnection *)0x0,None);
    if ((pTVar6->Object == (FRepLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FRepLayout::SerializeObjectReplicatedProperties
              (pTVar6->Object,
               (UObject *)this->FindTurnBasedMatchCallbackProxy->TurnBasedMatchInterface,
               (FBitArchive *)&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    FBitReader::~FBitReader(&local_b8);
  }
  pUVar1 = this->FindTurnBasedMatchCallbackProxy;
  if (pUVar1 != (UFindTurnBasedMatchCallbackProxy *)0x0) {
    pFVar7 = (FString *)(**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,local_c8);
    FOnlineTurnBasedMatchResult::Broadcast(&pUVar1->OnSuccess,pFVar7);
  }
  if (local_108 != (uchar *)0x0) {
    FMemory::Free(local_108);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnMatchmakerCancelled @ 14ec890e0

void __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::OnMatchmakerCancelled
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this)

{
  void *local_18;
  undefined8 local_10;
  
  if (this->FindTurnBasedMatchCallbackProxy != (UFindTurnBasedMatchCallbackProxy *)0x0) {
    local_18 = (void *)0x0;
    local_10 = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->FindTurnBasedMatchCallbackProxy->OnFailure,&local_18);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}

// OnMatchmakerFailed @ 14ec89140

void __thiscall
FFindTurnBasedMatchCallbackProxyMatchmakerDelegate::OnMatchmakerFailed
          (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *this)

{
  void *local_18;
  undefined8 local_10;
  
  if (this->FindTurnBasedMatchCallbackProxy != (UFindTurnBasedMatchCallbackProxy *)0x0) {
    local_18 = (void *)0x0;
    local_10 = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->FindTurnBasedMatchCallbackProxy->OnFailure,&local_18);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}

