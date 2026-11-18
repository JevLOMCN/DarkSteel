// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 15

// StartupModule @ 146cfa2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::StartupModule(FDrawPrimitiveDebuggerModule *this)

{
  FGlobalTabmanager *this_00;
  TSharedRef<FGlobalTabmanager,1> *pTVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FName *pFVar4;
  FName local_res8;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  ulonglong local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  this->bLiveCaptureEnabled = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FDrawPrimitiveDebuggerModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FViewDebugInfo::Instance.OnUpdate,(FDrawPrimitiveDebuggerModule *)&local_res8,
             (pmf_18f93678)this);
  (this->UpdateDelegateHandle).ID = (ulong64)local_res8;
  pTVar1 = FGlobalTabmanager::Get();
  this_00 = pTVar1->Object;
  local_40 = 0;
  local_50 = (undefined1  [8])0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDrawPrimitiveDebuggerModule____A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[4] = MakeDrawPrimitiveDebuggerTab;
    puVar2[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar4 = ::FName::FName(&local_res8,"Primitive Debugger");
  FGlobalTabmanager::RegisterNomadTabSpawner
            (this_00,*pFVar4,
             (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              *)local_68,
             (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_38);
  if (((int)local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
    local_40 = local_40 & 0xffffffff00000000;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  return;
}

// ShutdownModule @ 146cfa4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::ShutdownModule(FDrawPrimitiveDebuggerModule *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->UpdateDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FViewDebugInfo::Instance.OnUpdate,FVar1);
    return;
  }
  return;
}

// CaptureSingleFrame @ 146cfa4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::CaptureSingleFrame(FDrawPrimitiveDebuggerModule *this)

{
  if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger);
  }
  FViewDebugInfo::CaptureNextFrame(&FViewDebugInfo::Instance);
  return;
}

// IsLiveCaptureEnabled @ 146cfa500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FDrawPrimitiveDebuggerModule::IsLiveCaptureEnabled(FDrawPrimitiveDebuggerModule *this)

{
  return this->bLiveCaptureEnabled;
}

// EnableLiveCapture @ 146cfa510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::EnableLiveCapture(FDrawPrimitiveDebuggerModule *this)

{
  if (this->bLiveCaptureEnabled == false) {
    if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger)
      ;
    }
    this->bLiveCaptureEnabled = true;
    FViewDebugInfo::EnableLiveCapture(&FViewDebugInfo::Instance);
    return;
  }
  return;
}

// DisableLiveCapture @ 146cfa560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::DisableLiveCapture(FDrawPrimitiveDebuggerModule *this)

{
  if (this->bLiveCaptureEnabled != false) {
    if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger)
      ;
    }
    this->bLiveCaptureEnabled = false;
    FViewDebugInfo::DisableLiveCapture(&FViewDebugInfo::Instance);
    return;
  }
  return;
}

// DiscardCaptureData @ 146cfa5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::DiscardCaptureData(FDrawPrimitiveDebuggerModule *this)

{
  if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger);
  }
  FViewDebugInfo::ClearCaptureData(&FViewDebugInfo::Instance);
  return;
}

// OpenDebugWindow @ 146cfa5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::OpenDebugWindow(FDrawPrimitiveDebuggerModule *this)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  TSharedRef<FGlobalTabmanager,1> *pTVar5;
  FName *pFVar6;
  FName local_res8;
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if ((this->DebuggerTab).Object == (SDockTab *)0x0) {
    if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger)
      ;
    }
    FVar4 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
            AddRaw<FDrawPrimitiveDebuggerModule>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                        *)&GEngine->WorldDestroyedEvent,(FDrawPrimitiveDebuggerModule *)&local_res8,
                       (pmf_6529d67f)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnWorldDestroyedHandle).ID = *FVar4.ID;
    FVar4 = TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
            AddRaw<FDrawPrimitiveDebuggerModule>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
                        *)&FCoreUObjectDelegates::PostLoadMapWithWorld,
                       (FDrawPrimitiveDebuggerModule *)&local_res8,(pmf_6529d67f)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnWorldAddedHandle).ID = *FVar4.ID;
    bVar3 = FViewDebugInfo::HasEverUpdated(&FViewDebugInfo::Instance);
    if (!bVar3) {
      (**(code **)(this->_padding_ + 0x40))(this);
    }
    pTVar5 = FGlobalTabmanager::Get();
    pFVar1 = pTVar5->Object;
    pcVar2 = *(code **)(pFVar1->_padding_ + 8);
    pFVar6 = ::FName::FName(&local_res8,"Primitive Debugger");
    local_28 = *pFVar6;
    local_20 = 0xffffffff;
    local_1c = 1;
    (*pcVar2)(pFVar1,local_18,&local_28,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  return;
}

// CloseDebugWindow @ 146cfa6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDrawPrimitiveDebuggerModule::CloseDebugWindow(FDrawPrimitiveDebuggerModule *this)

{
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->DebuggerTab).Object != (SDockTab *)0x0) {
    if (4 < (byte)LogDrawPrimitiveDebugger._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDrawPrimitiveDebugger)
      ;
    }
    if ((this->DebuggerTab).Object == (SDockTab *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SDockTab::RequestCloseTab((this->DebuggerTab).Object);
    FVar1.ID = (this->OnWorldDestroyedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->WorldDestroyedEvent
                 ,FVar1);
    }
    FVar1.ID = (this->OnWorldAddedHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreUObjectDelegates::PostLoadMapWithWorld,FVar1);
      return;
    }
  }
  return;
}

// GetViewDebugInfo @ 146d22730

FViewDebugInfo * __cdecl FDrawPrimitiveDebuggerModule::GetViewDebugInfo(void)

{
  return &FViewDebugInfo::Instance;
}

// HandleWorldAdded @ 146d22f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDrawPrimitiveDebuggerModule::HandleWorldAdded(FDrawPrimitiveDebuggerModule *this,UWorld *param_1)

{
  SDrawPrimitiveDebugger *this_00;
  bool bVar1;
  UWorld *this_01;
  FDelegateHandle FVar2;
  longlong lVar3;
  code **ppcVar4;
  pmf_9f760675 *ppVar5;
  code *pcStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [16];
  pmf_9f760675 pStack_48;
  TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> TStack_38;
  
  this_00 = (this->DebuggerWidget).Object;
  if (this_00 == (SDrawPrimitiveDebugger *)0x0) {
    return;
  }
  bVar1 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>
                    (&this_00->ActiveWorld,param_1);
  if (!bVar1) {
    SDrawPrimitiveDebugger::ResetDebuggerChanges(this_00);
    bVar1 = FWeakObjectPtr::IsValid(&(this_00->ActiveWorld).WeakPtr);
    if (bVar1) {
      this_01 = (UWorld *)FWeakObjectPtr::Get(&(this_00->ActiveWorld).WeakPtr);
      UWorld::RemoveOnPreUnregisterAllActorComponentsHandler
                (this_01,(FDelegateHandle)(this_00->ActorComponentsUnregisteredHandle).ID);
    }
    if ((param_1 == (UWorld *)0x0) ||
       (bVar1 = FInternalUObjectBaseUtilityIsValidFlagsChecker::CheckObjectValidBasedOnItsFlags
                          ((UObject *)param_1), !bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pcStack_68 = SDrawPrimitiveDebugger::HandleActorCleanup;
      uStack_60 = 0;
      ppcVar4 = &pcStack_68;
      ppVar5 = &pStack_48;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)ppVar5 = *(undefined1 *)ppcVar4;
        ppcVar4 = (code **)((longlong)ppcVar4 + 1);
        ppVar5 = (pmf_9f760675 *)&ppVar5->field_0x1;
      }
      TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
      CreateRaw<SDrawPrimitiveDebugger>(&TStack_38,this_00,&pStack_48);
      FVar2 = UWorld::AddOnPreUnregisterAllActorComponentsHandler
                        (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                                 auStack_58);
                    /* WARNING: Load size is inaccurate */
      (this_00->ActorComponentsUnregisteredHandle).ID = *FVar2.ID;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_38);
    }
    auStack_58._8_8_ = UE::CoreUObject::Private::MakeObjectHandle((UObject *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              (&(this_00->ActiveWorld).WeakPtr,(FObjectPtr)((longlong)auStack_58 + 8));
  }
  return;
}

// HandleWorldDestroyed @ 146d22f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDrawPrimitiveDebuggerModule::HandleWorldDestroyed
          (FDrawPrimitiveDebuggerModule *this,UWorld *param_1)

{
  SDrawPrimitiveDebugger *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->DebuggerWidget).Object;
  if (this_00 != (SDrawPrimitiveDebugger *)0x0) {
    SDrawPrimitiveDebugger::ClearAllEntries(this_00);
    if ((this->DebuggerWidget).Object == (SDrawPrimitiveDebugger *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SDrawPrimitiveDebugger::SetActiveWorld((this->DebuggerWidget).Object,(UWorld *)0x0);
  }
                    /* WARNING: Could not recover jumptable at 0x000146d22fda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x60))(this);
  return;
}

// MakeDrawPrimitiveDebuggerTab @ 146d26c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
FDrawPrimitiveDebuggerModule::MakeDrawPrimitiveDebuggerTab
          (FDrawPrimitiveDebuggerModule *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  byte *pbVar1;
  SDrawPrimitiveDebugger *pSVar2;
  SDockTab *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SDockTab,1> *pTVar13;
  FSlateBaseNamedArgs *pFVar14;
  UWorld *pUVar15;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  FLLMScope local_738 [2];
  undefined1 local_730 [8];
  FDelegateAllocation local_728;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_718;
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs> local_700;
  SDockTab *local_6e8;
  FSharedReferencer<1> local_6e0;
  SDrawPrimitiveDebugger *local_6d8;
  FSharedReferencer<1> local_6d0;
  FName local_6c8;
  FMemScope local_6c0;
  FName local_6b8;
  FMemScope local_6b0;
  SDrawPrimitiveDebugger *local_6a8;
  TReferenceControllerBase<1> *local_6a0;
  FDestructionSentinel local_698;
  FDestructionSentinel local_680;
  FDelegateAllocation *local_668;
  FArguments local_660;
  FSlateBaseNamedArgs local_238;
  
  pFVar10 = SDockTab::FArguments::FArguments(&local_660);
  pFVar10->_TabRole = NomadTab;
  local_730 = (undefined1  [8])0x0;
  local_728.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_728.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_730,
             (FWriteAccessScope *)&local_680);
  local_668 = &local_728;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_728);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFDrawPrimitiveDebuggerModule____A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = OnTabClosed;
    puVar11[3] = this;
    if (this == (FDrawPrimitiveDebuggerModule *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
        return pTVar13;
      }
    }
  }
  if (local_680.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_680.Accessor,&local_680);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnTabClosed,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6c0,&local_6c8,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_718,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\DrawPrimitiveDebuggerModule.cpp"
             ,0xb1,local_res8);
  FMemScope::~FMemScope(&local_6c0);
  FLLMScope::~FLLMScope(local_res20);
  pSVar3 = local_718._Widget.Object;
  if (local_718._Widget.Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_718._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SDockTab::Construct(local_718._Widget.Object,pFVar10);
  if (local_718._Widget.Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  if (((local_718._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_718._Widget.Object)->_padding_ + 0x228))(local_718._Widget.Object);
    bVar9 = 0;
    if (cVar8 != '\0') goto LAB_146d26e3c;
  }
  else {
LAB_146d26e3c:
    bVar9 = 0x20;
  }
  *(byte *)&(local_718._Widget.Object)->_padding_ =
       (byte)(local_718._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_718._Widget.Object)->_padding_ =
       (byte)(local_718._Widget.Object)->_padding_ | bVar9;
  if (local_718._Widget.Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_718._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_718._Widget.Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  FVar6.ReferenceController = local_718._Widget.SharedReferenceCount.ReferenceController;
  local_718._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_718._Widget.Object = (SDockTab *)0x0;
  if (pSVar3 == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  local_6e8 = pSVar3;
  local_6e0.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->DebuggerTab != (TSharedPtr<SDockTab,1> *)&local_6e8) {
    (this->DebuggerTab).Object = pSVar3;
    local_6e8 = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerTab).SharedReferenceCount,&local_6e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_730,
             (FWriteAccessScope *)&local_698);
  if ((local_728.DelegateSize != 0) &&
     (local_728.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_728.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_728,0,0,0x10);
    local_728.DelegateSize = 0;
  }
  if (local_698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_698.Accessor,&local_698);
  }
  if (local_728.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_728.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_730);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._IconColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._TabColorScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnTabDrawerClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnExtendContextMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnPersistVisualState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnCanCloseTab);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnTabDraggedOverDockArea);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnTabRelocated);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnTabActivated);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._OnTabClosed);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._LabelSuffix.Getter);
  if (local_660._LabelSuffix.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_660._LabelSuffix.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._Label.Getter);
  if (local_660._Label.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_660._Label.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_660._ContentPadding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660._TabWellContentRight.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660._TabWellContentLeft.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_660);
  if ((this->DebuggerWidget).Object != (SDrawPrimitiveDebugger *)0x0) goto LAB_146d273e4;
  pFVar14 = (FSlateBaseNamedArgs *)
            SDrawPrimitiveDebugger::FArguments::FArguments((FArguments *)&local_238);
  FLLMScope::FLLMScope(local_738,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6b0,&local_6b8,true);
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDrawPrimitiveDebugger,RequiredArgs::T0RequiredArgs>
            (&local_700,"SDrawPrimitiveDebugger",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\DrawPrimitiveDebuggerModule.cpp"
             ,0xb7,local_res10);
  FMemScope::~FMemScope(&local_6b0);
  FLLMScope::~FLLMScope(local_738);
  pSVar2 = local_700._Widget.Object;
  if (local_700._Widget.Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_700._Widget.Object,pFVar14);
  SDrawPrimitiveDebugger::Construct(local_700._Widget.Object,(FArguments *)pFVar14);
  if (local_700._Widget.Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  if (((local_700._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_700._Widget.Object)->_padding_ + 0x228))(local_700._Widget.Object);
    bVar9 = 0;
    if (cVar8 != '\0') goto LAB_146d271c9;
  }
  else {
LAB_146d271c9:
    bVar9 = 0x20;
  }
  *(byte *)&(local_700._Widget.Object)->_padding_ =
       (byte)(local_700._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_700._Widget.Object)->_padding_ =
       (byte)(local_700._Widget.Object)->_padding_ | bVar9;
  if (local_700._Widget.Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_700._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_700._Widget.Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  FVar6.ReferenceController = local_700._Widget.SharedReferenceCount.ReferenceController;
  local_700._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_700._Widget.Object = (SDrawPrimitiveDebugger *)0x0;
  if (pSVar2 == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  local_6d8 = pSVar2;
  local_6d0.ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->DebuggerWidget != (TSharedPtr<SDrawPrimitiveDebugger,1> *)&local_6d8) {
    (this->DebuggerWidget).Object = pSVar2;
    local_6d8 = (SDrawPrimitiveDebugger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerWidget).SharedReferenceCount,&local_6d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_238);
  if ((this->DebuggerWidget).Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pSVar2 = (this->DebuggerWidget).Object;
  pUVar15 = UEngine::GetCurrentPlayWorld(GEngine,(UWorld *)0x0);
  SDrawPrimitiveDebugger::SetActiveWorld(pSVar2,pUVar15);
  if ((this->DebuggerTab).Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pSVar3 = (this->DebuggerTab).Object;
  pcVar5 = *(code **)(pSVar3->_padding_ + 0x248);
  if ((this->DebuggerWidget).Object == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  pTVar4 = (this->DebuggerWidget).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->DebuggerWidget).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SDrawPrimitiveDebugger *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6a8 = pSVar2;
  local_6a0 = pTVar4;
  (*pcVar5)(pSVar3,&local_6a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_146d273e4:
  if ((this->DebuggerTab).Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (this->DebuggerTab).Object;
  pTVar4 = (this->DebuggerTab).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SDockTab *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDockTab,1> *)(*pcVar5)();
      return pTVar13;
    }
  }
  return __return_storage_ptr__;
}

// OnTabClosed @ 146d2b340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDrawPrimitiveDebuggerModule::OnTabClosed
          (FDrawPrimitiveDebuggerModule *this,TSharedRef<SDockTab,1> *param_1)

{
  TSharedPtr<SDockTab,1> *pTVar1;
  TSharedPtr<SDrawPrimitiveDebugger,1> *pTVar2;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->DebuggerTab;
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SDockTab,1> *)&local_48) {
    pTVar1->Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerTab).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<SDockTab,1> *)&local_38) {
    pTVar1->Object = (SDockTab *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerTab).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  pTVar2 = &this->DebuggerWidget;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<SDrawPrimitiveDebugger,1> *)&local_28) {
    pTVar2->Object = (SDrawPrimitiveDebugger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerWidget).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<SDrawPrimitiveDebugger,1> *)&local_18) {
    pTVar2->Object = (SDrawPrimitiveDebugger *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DebuggerWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateViewInformation @ 146d2be40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDrawPrimitiveDebuggerModule::OnUpdateViewInformation(FDrawPrimitiveDebuggerModule *this)

{
  SDrawPrimitiveDebugger *this_00;
  code *pcVar1;
  EStatFlags EVar2;
  bool bVar3;
  int iVar4;
  TStatId TVar5;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *pTVar6;
  FViewDebugInfo *this_01;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar7;
  TSparseSetElement<FPrimitiveComponentId> *pTVar8;
  FPrimitiveDebuggerEntry *this_02;
  FPrimitiveInfo *this_03;
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pSVar10;
  longlong lVar11;
  SDrawPrimitiveDebugger **ppSVar12;
  TRangedForIterator *pTVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  <lambda_1> *p<Var16;
  TRangedForIterator *pTVar17;
  undefined1 *puVar18;
  FSourceLocation *pFVar19;
  undefined1 auStackY_508 [32];
  undefined4 uStack_338;
  undefined4 uStack_334;
  char *pcStack_330;
  char *pcStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  char *pcStack_318;
  char *pcStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  char *pcStack_300;
  char *pcStack_2f8;
  SDrawPrimitiveDebugger *pSStack_2f0;
  undefined1 *puStack_2e8;
  FScopeCycleCounter FStack_2e0;
  FScopeCycleCounter FStack_2d0;
  FScopeCycleCounter aFStack_2c0 [3];
  undefined1 auStack_298 [16];
  <lambda_1> <Stack_288;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  FSourceLocation FStack_248;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  FSourceLocation FStack_1f8;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  FSourceLocation FStack_1a8;
  TRangedForIterator TStack_188;
  TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> TStack_158;
  TRangedForIterator TStack_148;
  TRangedForIterator TStack_118;
  TRangedForIterator TStack_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined1 auStack_78 [40];
  int iStack_50;
  ForElementType<FSetElementId> FStack_40;
  int iStack_30;
  ulonglong uStack_28;
  
  this_00 = (this->DebuggerWidget).Object;
  if (this_00 == (SDrawPrimitiveDebugger *)0x0) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_508;
  uStack_338 = 0x4b3;
  uStack_334 = 2;
  pcStack_330 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  pcStack_328 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
  puVar14 = &uStack_338;
  puVar15 = auStack_278;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((longlong)puVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = auStack_278;
  puVar18 = auStack_260;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  EVar2 = ::operator|(ClearEveryFrame,CycleStat);
  TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefresh,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefresh,1> *)
                     &StatPtr_STAT_PrimitiveDebuggerRefresh);
  TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
  puVar15 = auStack_260;
  pFVar19 = &FStack_248;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
    puVar15 = puVar15 + 1;
    pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
  }
  FScopeCycleCounter::FScopeCycleCounter(aFStack_2c0,TVar5,EVar2,false,&FStack_248);
  pTVar6 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
           TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(&TStack_158,(FNullTag *)0x0);
  SDrawPrimitiveDebugger::OnRowSelectionChanged(this_00,pTVar6,Direct);
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>::Empty
            (&this_00->AvailableEntries,0);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_78);
  TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
  ForElementType<FSetElementId>(&FStack_40);
  iStack_30 = 0;
  TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
  ::GetKeys<DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
            ((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              *)&this_00->Entries,
             (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
              *)auStack_78);
  uStack_320 = 0x4bd;
  uStack_31c = 3;
  pcStack_318 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
  ;
  pcStack_310 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
  puVar14 = &uStack_320;
  puVar15 = auStack_228;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((longlong)puVar14 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = auStack_228;
  puVar18 = auStack_210;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar18 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar18 = puVar18 + 1;
  }
  EVar2 = ::operator|(ClearEveryFrame,CycleStat);
  TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefreshGather,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerRefreshGather,1> *)
                     &StatPtr_STAT_PrimitiveDebuggerRefreshGather);
  TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
  puVar15 = auStack_210;
  pFVar19 = &FStack_1f8;
  for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
    puVar15 = puVar15 + 1;
    pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
  }
  FScopeCycleCounter::FScopeCycleCounter(&FStack_2e0,TVar5,EVar2,false,&FStack_1f8);
  this_01 = FViewDebugInfo::Get();
  pSStack_2f0 = this_00;
  puStack_2e8 = auStack_78;
  ppSVar12 = &pSStack_2f0;
  puVar15 = auStack_298;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = *(undefined1 *)ppSVar12;
    ppSVar12 = (SDrawPrimitiveDebugger **)((longlong)ppSVar12 + 1);
    puVar15 = puVar15 + 1;
  }
  puVar15 = auStack_298;
  p<Var16 = &<Stack_288;
  for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(undefined1 *)&p<Var16->__this = *puVar15;
    puVar15 = puVar15 + 1;
    p<Var16 = (<lambda_1> *)((longlong)&p<Var16->__this + 1);
  }
  FViewDebugInfo::ForEachPrimitive<_SDrawPrimitiveDebugger::Refresh_::__l3::<lambda_1>_>
            (this_01,&<Stack_288);
  FScopeCycleCounter::~FScopeCycleCounter(&FStack_2e0);
  pTVar7 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&TStack_b8,(TBitArray<FDefaultBitArrayAllocator> *)(auStack_78 + 0x10));
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&TStack_148,
             (TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_78,pTVar7);
  pTVar13 = &TStack_148;
  pTVar17 = &TStack_188;
  for (lVar11 = 0x30; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(char *)&pTVar17->_padding_ = (char)pTVar13->_padding_;
    pTVar13 = (TRangedForIterator *)((longlong)&pTVar13->_padding_ + 1);
    pTVar17 = (TRangedForIterator *)((longlong)&pTVar17->_padding_ + 1);
  }
  pTVar7 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&TStack_98,(TBitArray<FDefaultBitArrayAllocator> *)(auStack_78 + 0x10),
                      iStack_50);
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::TRangedForIterator::TRangedForIterator
            (&TStack_118,
             (TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_78,pTVar7);
  pTVar13 = &TStack_118;
  pTVar17 = &TStack_e8;
  for (lVar11 = 0x30; lVar11 != 0; lVar11 = lVar11 + -1) {
    *(char *)&pTVar17->_padding_ = (char)pTVar13->_padding_;
    pTVar13 = (TRangedForIterator *)((longlong)&pTVar13->_padding_ + 1);
    pTVar17 = (TRangedForIterator *)((longlong)&pTVar17->_padding_ + 1);
  }
  do {
    bVar3 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!=(&TStack_188,&TStack_e8);
    if (!bVar3) {
      uStack_308 = 0x4e6;
      uStack_304 = 2;
      pcStack_300 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\DrawPrimitiveDebugger\\Private\\SDrawPrimitiveDebugger.cpp"
      ;
      pcStack_2f8 = "void __cdecl SDrawPrimitiveDebugger::Refresh(void)";
      puVar14 = &uStack_308;
      puVar15 = auStack_1d8;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar15 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((longlong)puVar14 + 1);
        puVar15 = puVar15 + 1;
      }
      puVar15 = auStack_1d8;
      puVar18 = auStack_1c0;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar18 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      }
      EVar2 = ::operator|(ClearEveryFrame,CycleStat);
      TVar5 = FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerUpdateVis,1>::GetStatId
                        ((FThreadSafeStaticStatInner<FStat_STAT_PrimitiveDebuggerUpdateVis,1> *)
                         &StatPtr_STAT_PrimitiveDebuggerUpdateVis);
      TVar5.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
      puVar15 = auStack_1c0;
      pFVar19 = &FStack_1a8;
      for (lVar11 = 0x18; lVar11 != 0; lVar11 = lVar11 + -1) {
        *(undefined1 *)&(pFVar19->Impl)._Line = *puVar15;
        puVar15 = puVar15 + 1;
        pFVar19 = (FSourceLocation *)((longlong)&(pFVar19->Impl)._Line + 1);
      }
      FScopeCycleCounter::FScopeCycleCounter(&FStack_2d0,TVar5,EVar2,false,&FStack_1a8);
      SDrawPrimitiveDebugger::UpdateVisibleRows(this_00);
      if ((this_00->Table).Object !=
          (SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
        pSVar10 = TSharedPtr<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
                  operator->(&this_00->Table);
        (**(code **)(pSVar10->_padding_ + 0x248))(pSVar10);
      }
      FScopeCycleCounter::~FScopeCycleCounter(&FStack_2d0);
      iStack_30 = 0;
      TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ~ForElementType<FSetElementId>(&FStack_40);
      TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auStack_78);
      FScopeCycleCounter::~FScopeCycleCounter(aFStack_2c0);
      return;
    }
    pTVar8 = TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::operator[]((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)TStack_188._padding_,TStack_188._padding_._4_4_);
    this_02 = TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
              ::Find((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                      *)&this_00->Entries,(FPrimitiveComponentId *)pTVar8);
    if (((this_02 == (FPrimitiveDebuggerEntry *)0x0) || (!(bool)this_02->bRetainDuringRefresh)) ||
       ((this_02->Data).Object == (FPrimitiveInfo *)0x0)) {
LAB_146d2f3dd:
      if (this_02 != (FPrimitiveDebuggerEntry *)0x0) {
        SDrawPrimitiveDebugger::FlushDebugVisualizationsForEntry
                  (this_00,(FPrimitiveComponentId)*(uint *)pTVar8);
        TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
        ::Remove((TMapBase<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,SDrawPrimitiveDebugger::FPrimitiveDebuggerEntry,0>_>
                  *)&this_00->Entries,(FPrimitiveComponentId *)pTVar8);
      }
    }
    else {
      this_03 = TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::operator->(&this_02->Data);
      bVar3 = FViewDebugInfo::FPrimitiveInfo::IsPrimitiveValid(this_03);
      if (!bVar3) goto LAB_146d2f3dd;
      pTVar9 = &this_00->AvailableEntries;
      if (((FPrimitiveDebuggerEntry *)(pTVar9->AllocatorInstance).Data <= this_02) &&
         (this_02 < (FPrimitiveDebuggerEntry *)
                    ((pTVar9->AllocatorInstance).Data +
                    (longlong)(this_00->AvailableEntries).ArrayMax * 0x10))) {
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((this_00->AvailableEntries).ArrayNum == (this_00->AvailableEntries).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar9->AllocatorInstance,&(this_00->AvailableEntries).ArrayMax);
        (this_00->AvailableEntries).ArrayNum = iVar4;
      }
      iVar4 = (this_00->AvailableEntries).ArrayNum;
      (this_00->AvailableEntries).ArrayNum = (this_00->AvailableEntries).ArrayNum + 1;
      pTVar6 = ::operator_new(0x10,(pTVar9->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>::
      TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>(pTVar6,&this_02->Data);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TBaseIterator<0>::operator++((TBaseIterator<0> *)&TStack_188);
  } while( true );
}

