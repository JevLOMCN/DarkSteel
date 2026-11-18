// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// FContentBundleContainer @ 148a419c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundleContainer * __thiscall
FContentBundleContainer::FContentBundleContainer(FContentBundleContainer *this,UWorld *param_1)

{
  this->InjectedWorld = param_1;
  (this->ContentBundles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContentBundles).ArrayNum = 0;
  (this->ContentBundles).ArrayMax = 0;
  return this;
}

// ~FContentBundleContainer @ 148a441c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleContainer::~FContentBundleContainer(FContentBundleContainer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ContentBundles).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetGameContentBundles().IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int>
            ((TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_> *)
             (this->ContentBundles).AllocatorInstance.Data,(this->ContentBundles).ArrayNum);
  pFVar1 = (this->ContentBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddReferencedObjects @ 148a49a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::AddReferencedObjects
          (FContentBundleContainer *this,FReferenceCollector *param_1)

{
  FReferenceCollector *local_res10 [3];
  code *local_18;
  FReferenceCollector **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::AddReferencedObjects'::__l2::<lambda_1>,void,FContentBundleBase_*>
             ::Call;
  local_res10[0] = param_1;
  ForEachContentBundle(this,(TFunctionRef<void___cdecl(FContentBundleBase_*)> *)&local_18);
  return;
}

// Deinitialize @ 148a4f8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleContainer::Deinitialize(FContentBundleContainer *this)

{
  int *piVar1;
  UWorld *pUVar2;
  code *pcVar3;
  bool bVar4;
  UContentBundleEngineSubsystem *pUVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_58;
  FString local_48;
  code *local_38;
  undefined1 *local_30;
  FString local_28;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId67,"FContentBundleContainer::Deinitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
               ,0x43);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId67);
  }
  pUVar2 = this->InjectedWorld;
  if ((pUVar2 != (UWorld *)0x0) && (5 < (byte)LogContentBundle._0_1_)) {
    GetDebugStringForWorld(&local_28,pUVar2);
    local_res10 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res10,&local_58);
    ::FString::PrintfImpl(&local_48,L"[%s(%s)]");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = (UContentBundleEngineSubsystem *)0x0;
  if (GEngine == (UEngine *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                       ,0x86,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar5 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar5->OnContentBundleClientRegistered,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar5->OnContentBundleClientUnregistered,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar5->OnContentBundleClientRequestedContentInjection,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar5->OnContentBundleClientRequestedContentRemoval,this);
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::DeinitializeContentBundles'::__l2::<lambda_1>,void,FContentBundleBase_*>
             ::Call;
  ForEachContentBundle(this,(TFunctionRef<void___cdecl(FContentBundleBase_*)> *)&local_38);
  DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int>
            ((TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_> *)
             (this->ContentBundles).AllocatorInstance.Data,(this->ContentBundles).ArrayNum);
  piVar1 = &(this->ContentBundles).ArrayMax;
  (this->ContentBundles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DeinitializeContentBundle @ 148a4fc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::DeinitializeContentBundle
          (FContentBundleContainer *this,FContentBundleBase *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  FContentBundleBase::Uninitialize(param_1);
  pFVar2 = (this->ContentBundles).AllocatorInstance.Data;
  iVar1 = (this->ContentBundles).ArrayNum;
  pFVar7 = pFVar2;
  do {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 8) {
      uVar6 = 0xffffffff;
LAB_148a4fc83:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_148a4fcb6:
      TArray<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtSwapImpl(&this->ContentBundles,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,(this->ContentBundles).ArrayNum,
                 &(this->ContentBundles).ArrayMax);
      return;
    }
    if (*(FContentBundleBase **)pFVar7 == param_1) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) goto LAB_148a4fc83;
      goto LAB_148a4fcb6;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// DeinitializeContentBundles @ 148a4fd20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleContainer::DeinitializeContentBundles(FContentBundleContainer *this)

{
  int *piVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::DeinitializeContentBundles'::__l2::<lambda_1>,void,FContentBundleBase_*>
             ::Call;
  ForEachContentBundle(this,(TFunctionRef<void___cdecl(FContentBundleBase_*)> *)&local_18);
  DestructItems<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,int>
            ((TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_> *)
             (this->ContentBundles).AllocatorInstance.Data,(this->ContentBundles).ArrayNum);
  piVar1 = &(this->ContentBundles).ArrayMax;
  (this->ContentBundles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// ForEachContentBundle @ 148a532e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::ForEachContentBundle
          (FContentBundleContainer *this,TFunctionRef<void___cdecl(FContentBundleBase_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_res8;
  
  pFVar3 = (this->ContentBundles).AllocatorInstance.Data;
  iVar2 = (this->ContentBundles).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ContentBundles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar3;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ForEachContentBundleBreakable @ 148a53350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::ForEachContentBundleBreakable
          (FContentBundleContainer *this,TFunctionRef<bool___cdecl(FContentBundleBase_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = (this->ContentBundles).AllocatorInstance.Data;
  iVar2 = (this->ContentBundles).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ContentBundles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 == '\0') {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetContentBundle @ 148a54bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundleBase * __thiscall
FContentBundleContainer::GetContentBundle
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  FContentBundleBase *local_res10 [3];
  FContentBundleClient *local_28;
  FContentBundleBase **local_20;
  code *local_18;
  FContentBundleClient **local_10;
  
  local_20 = local_res10;
  local_10 = &local_28;
  local_res10[0] = (FContentBundleBase *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  local_28 = param_1;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_18);
  return local_res10[0];
}

// GetGameContentBundles @ 148a58930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,TSizedDefaultAllocator<32>_> *
__thiscall FContentBundleContainer::GetGameContentBundles(FContentBundleContainer *this)

{
  return &this->ContentBundles;
}

// GetGameContentBundles @ 148a58940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,TSizedDefaultAllocator<32>_> *
__thiscall FContentBundleContainer::GetGameContentBundles(FContentBundleContainer *this)

{
  return &this->ContentBundles;
}

// GetInjectedWorld @ 148a58ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FContentBundleContainer::GetInjectedWorld(FContentBundleContainer *this)

{
  return this->InjectedWorld;
}

// GetNumContentBundles @ 148a591e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FContentBundleContainer::GetNumContentBundles(FContentBundleContainer *this)

{
  return (this->ContentBundles).ArrayNum;
}

// Initialize @ 148a5bb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleContainer::Initialize(FContentBundleContainer *this)

{
  UWorld *pUVar1;
  code *pcVar2;
  bool bVar3;
  UContentBundleEngineSubsystem *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId37,"FContentBundleContainer::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
               ,0x25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
  }
  if (5 < (byte)LogContentBundle._0_1_) {
    pUVar1 = this->InjectedWorld;
    GetDebugStringForWorld(&local_28,pUVar1);
    local_res10[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res10,&local_48);
    ::FString::PrintfImpl(&local_38,L"[%s(%s)]");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  InitializeContentBundlesForegisteredClients(this);
  if (GEngine == (UEngine *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = (UContentBundleEngineSubsystem *)0x0;
  }
  else {
    pUVar4 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  }
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnContentBundleClientRegistered,
             (FContentBundleContainer *)(local_res10 + 1),(pmf_44680e04)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnContentBundleClientUnregistered,
             (FContentBundleContainer *)(local_res10 + 2),(pmf_ff887176)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnContentBundleClientRequestedContentInjection,
             (FContentBundleContainer *)local_58,(pmf_ff887176)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnContentBundleClientRequestedContentRemoval,
             (FContentBundleContainer *)(local_58 + 8),(pmf_ff887176)this);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// InitializeContentBundle @ 148a5c620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundleBase * __thiscall
FContentBundleContainer::InitializeContentBundle
          (FContentBundleContainer *this,TSharedPtr<FContentBundleClient,1> *param_1)

{
  int *piVar1;
  EContentBundleClientState EVar2;
  UWorld *pUVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  UWorldPartition *this_00;
  FContentBundleBase *pFVar12;
  UPackage *pUVar13;
  UEnum *this_01;
  UContentBundleDescriptor *pUVar14;
  FContentBundle *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong local_res8;
  FString local_58;
  FContentBundleClient *local_48;
  longlong *local_40;
  code *local_38;
  FContentBundleClient **local_30;
  FText local_28;
  
  this_00 = UWorld::GetWorldPartition(this->InjectedWorld);
  bVar8 = UWorldPartition::IsInitialized(this_00);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InjectedWorld->GetWorldPartition()->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
                         ,0xe9,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FContentBundleBase *)(*pcVar6)();
    return pFVar12;
  }
  if ((param_1->Object == (FContentBundleClient *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FContentBundleBase *)(*pcVar6)();
    return pFVar12;
  }
  local_48 = param_1->Object;
  local_40 = &local_res8;
  local_res8 = 0;
  local_30 = &local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_38);
  if ((local_res8 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetContentBundle(*ContentBundleClient) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleContainer.cpp"
                         ,0xea,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FContentBundleBase *)(*pcVar6)();
    return pFVar12;
  }
  if (5 < (byte)LogContentBundle._0_1_) {
    if ((param_1->Object == (FContentBundleClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FContentBundleBase *)(*pcVar6)();
      return pFVar12;
    }
    EVar2 = param_1->Object->State;
    this_01 = Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton;
    if (Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton == (UEnum *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_Engine();
      this_01 = GetStaticEnum(Z_Construct_UEnum_Engine_EContentBundleClientState,(UObject *)pUVar13,
                              L"EContentBundleClientState");
      Z_Registration_Info_UEnum_EContentBundleClientState.OuterSingleton = this_01;
      if ((this_01 == (UEnum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FContentBundleBase *)(*pcVar6)();
        return pFVar12;
      }
    }
    UEnum::GetDisplayNameTextByValue(this_01,&local_28,(longlong)(int)EVar2);
    FText::ToString(&local_28);
    if ((param_1->Object == (FContentBundleClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FContentBundleBase *)(*pcVar6)();
      return pFVar12;
    }
    pUVar3 = this->InjectedWorld;
    if ((param_1->Object == (FContentBundleClient *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FContentBundleBase *)(*pcVar6)();
      return pFVar12;
    }
    pUVar14 = (UContentBundleDescriptor *)
              FWeakObjectPtr::Get(&(param_1->Object->ContentBundleDescriptor).WeakPtr);
    ContentBundle::LogPrivate::MakeDebugInfoString(&local_58,pUVar14,pUVar3);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  pUVar3 = this->InjectedWorld;
  pFVar15 = ::operator_new(0x40);
  if (pFVar15 == (FContentBundle *)0x0) {
    pFVar15 = (FContentBundle *)0x0;
  }
  else {
    pFVar15 = FContentBundle::FContentBundle(pFVar15,param_1,pUVar3);
  }
  iVar10 = (this->ContentBundles).ArrayNum;
  piVar1 = &(this->ContentBundles).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->ContentBundles).ArrayNum = iVar10 + 1;
  *(FContentBundle **)((this->ContentBundles).AllocatorInstance.Data + (longlong)iVar10 * 8) =
       pFVar15;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"FContentBundleBase::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  if (((int)pFVar15->_padding_ != -1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x1b,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FContentBundleBase *)(*pcVar6)();
    return pFVar12;
  }
  (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
  if (((int)pFVar15->_padding_ != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Registered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x1f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FContentBundleBase *)(*pcVar6)();
    return pFVar12;
  }
  pTVar16 = (TReferenceControllerBase<1> *)pFVar15->_padding_;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar7 = pTVar16->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148a5c9e0;
      }
      LOCK();
      aVar11 = pTVar16->SharedReferenceCount;
      bVar9 = aVar7 == aVar11;
      if (bVar9) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar11 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar11;
    } while (!bVar9);
    plVar4 = (longlong *)pFVar15->_padding_;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = pFVar15->_padding_;
      if (((int)pFVar15->_padding_ != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContentBundleStatus == EContentBundleStatus::Registered",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                             ,0x5b,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FContentBundleBase *)(*pcVar6)();
        return pFVar12;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
    }
  }
LAB_148a5c9e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FContentBundleBase *)pFVar15;
}

// InitializeContentBundlesForegisteredClients @ 148a5ca70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::InitializeContentBundlesForegisteredClients(FContentBundleContainer *this)

{
  int iVar1;
  UWorld *pUVar2;
  code *pcVar3;
  bool bVar4;
  UContentBundleEngineSubsystem *pUVar5;
  FContentBundleBase *pFVar6;
  TSharedPtr<FContentBundleClient,1> *pTVar7;
  TSharedPtr<FContentBundleClient,1> *pTVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (GEngine == (UEngine *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                       ,0x86,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = (UContentBundleEngineSubsystem *)0x0;
  }
  else {
    pUVar5 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  }
  iVar1 = (pUVar5->ContentBundleClients).ArrayNum;
  pTVar7 = (TSharedPtr<FContentBundleClient,1> *)
           (pUVar5->ContentBundleClients).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar1 != 0) {
    if (5 < (byte)LogContentBundle._0_1_) {
      pUVar2 = this->InjectedWorld;
      GetDebugStringForWorld(&local_58,pUVar2);
      local_res10 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res10,&local_98);
      ::FString::PrintfImpl(&local_88,L"[%s(%s)]");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pTVar8 = pTVar7 + iVar1;
    for (; pTVar7 != pTVar8; pTVar7 = pTVar7 + 1) {
      pFVar6 = InitializeContentBundle(this,pTVar7);
      InjectContentBundle(this,pFVar6);
    }
    if (5 < (byte)LogContentBundle._0_1_) {
      pUVar2 = this->InjectedWorld;
      GetDebugStringForWorld(&local_48,pUVar2);
      local_res18[0] = (FName)pUVar2->_padding_;
      ::FName::ToString(local_res18,&local_78);
      ::FString::PrintfImpl(&local_68,L"[%s(%s)]");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// InjectContentBundle @ 148a5d230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleContainer::InjectContentBundle
          (FContentBundleContainer *this,FContentBundleBase *param_1)

{
  FContentBundleClient *pFVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  if (param_1->Status == Registered) {
    pTVar5 = (param_1->Client).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar5->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148a5d266;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar6 = aVar2 == aVar4;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar6);
      pFVar1 = (param_1->Client).Object;
      if ((pFVar1 != (FContentBundleClient *)0x0) &&
         (cVar3 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this->InjectedWorld), cVar3 != '\0'))
      {
        FContentBundleBase::InjectContent(param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        return true;
      }
    }
LAB_148a5d266:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return false;
}

// InjectContentBundle @ 148a5d2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleContainer::InjectContentBundle
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  UWorld *pUVar1;
  bool bVar2;
  UContentBundleDescriptor *pUVar3;
  FContentBundleBase *local_res10;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_28._8_8_ = &local_res10;
  local_10 = local_28;
  local_res10 = (FContentBundleBase *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  local_28._0_8_ = param_1;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_18);
  if (local_res10 != (FContentBundleBase *)0x0) {
    bVar2 = InjectContentBundle(this,local_res10);
    return bVar2;
  }
  if (4 < (byte)LogContentBundle._0_1_) {
    pUVar1 = this->InjectedWorld;
    pUVar3 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
    ContentBundle::LogPrivate::MakeDebugInfoString((FString *)local_28,pUVar3,pUVar1);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if ((FContentBundleClient *)local_28._0_8_ != (FContentBundleClient *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  return false;
}

// OnContentBundleClientContentInjectionRequested @ 148a5f3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::OnContentBundleClientContentInjectionRequested
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  UWorld *pUVar1;
  UContentBundleDescriptor *pUVar2;
  FContentBundleBase *local_res10;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  local_28._8_8_ = &local_res10;
  local_10 = local_28;
  local_res10 = (FContentBundleBase *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  local_28._0_8_ = param_1;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_18);
  if (local_res10 != (FContentBundleBase *)0x0) {
    InjectContentBundle(this,local_res10);
    return;
  }
  if (4 < (byte)LogContentBundle._0_1_) {
    pUVar1 = this->InjectedWorld;
    pUVar2 = (UContentBundleDescriptor *)
             FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
    ContentBundle::LogPrivate::MakeDebugInfoString((FString *)local_28,pUVar2,pUVar1);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if ((FContentBundleClient *)local_28._0_8_ != (FContentBundleClient *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  return;
}

// OnContentBundleClientContentRemovalRequested @ 148a5f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::OnContentBundleClientContentRemovalRequested
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  FContentBundleClient *pFVar1;
  UContentBundleManager *this_00;
  atomic<int> aVar2;
  FContentBundleBase *this_01;
  char cVar3;
  atomic<int> aVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UWorldPartition *this_02;
  UContentBundleDescriptor *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FContentBundleBase *pFStackX_10;
  undefined1 auStack_38 [16];
  code *pcStack_28;
  undefined1 *puStack_20;
  
  auStack_38._8_8_ = &pFStackX_10;
  puStack_20 = auStack_38;
  pFStackX_10 = (FContentBundleBase *)0x0;
  pcStack_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
               ::Call;
  auStack_38._0_8_ = param_1;
  ForEachContentBundleBreakable
            (this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&pcStack_28);
  this_01 = pFStackX_10;
  if (pFStackX_10 == (FContentBundleBase *)0x0) {
    if (4 < (byte)LogContentBundle._0_1_) {
      pUVar6 = this->InjectedWorld;
      pUVar7 = (UContentBundleDescriptor *)
               FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
      ContentBundle::LogPrivate::MakeDebugInfoString((FString *)auStack_38,pUVar7,pUVar6);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      if ((FContentBundleClient *)auStack_38._0_8_ != (FContentBundleClient *)0x0) {
        FMemory::Free((void *)auStack_38._0_8_);
      }
    }
  }
  else if ((pFStackX_10->Status == ContentInjected) || (pFStackX_10->Status == ReadyToInject)) {
    pTVar8 = (pFStackX_10->Client).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148a653d3;
        }
        LOCK();
        aVar4 = pTVar8->SharedReferenceCount;
        bVar9 = aVar2 == aVar4;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar9);
      pFVar1 = (pFStackX_10->Client).Object;
      if ((pFVar1 != (FContentBundleClient *)0x0) &&
         (cVar3 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,this->InjectedWorld), cVar3 == '\0'
         )) {
        this_00 = (this->InjectedWorld->ContentBundleManager).field0_0x0.DebugPtr;
        pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar5);
        this_02 = UWorld::GetWorldPartition(pUVar6);
        if ((this_02 != (UWorldPartition *)0x0) &&
           (bVar9 = UWorldPartition::IsInitialized(this_02), bVar9)) {
          if (4 < (byte)LogContentBundle._0_1_) {
            ContentBundle::LogPrivate::MakeDebugInfoString
                      ((FString *)auStack_38,(this_01->Descriptor).field0_0x0.DebugPtr,
                       this_01->InjectedWorld);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
            if ((FContentBundleClient *)auStack_38._0_8_ != (FContentBundleClient *)0x0) {
              FMemory::Free((void *)auStack_38._0_8_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          return;
        }
      }
    }
LAB_148a653d3:
    FContentBundleBase::RemoveContent(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return;
}

// OnContentBundleClientRegistered @ 148a5f4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::OnContentBundleClientRegistered
          (FContentBundleContainer *this,TSharedPtr<FContentBundleClient,1> *param_1)

{
  FContentBundleBase *pFVar1;
  
  pFVar1 = InitializeContentBundle(this,param_1);
  InjectContentBundle(this,pFVar1);
  return;
}

// OnContentBundleClientUnregistered @ 148a5f510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::OnContentBundleClientUnregistered
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FContentBundleBase *pFVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FContentBundleBase *local_res18 [2];
  FContentBundleClient *local_38;
  FContentBundleBase **local_30;
  code *local_28;
  FContentBundleClient **local_20;
  
  local_30 = local_res18;
  local_20 = &local_38;
  local_res18[0] = (FContentBundleBase *)0x0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  local_38 = param_1;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_28);
  pFVar4 = local_res18[0];
  if (local_res18[0] != (FContentBundleBase *)0x0) {
    FContentBundleBase::Uninitialize(local_res18[0]);
    pFVar2 = (this->ContentBundles).AllocatorInstance.Data;
    iVar1 = (this->ContentBundles).ArrayNum;
    for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)iVar1 * 8; pFVar7 = pFVar7 + 8) {
      if (*(FContentBundleBase **)pFVar7 == pFVar4) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar2 >> 3);
        uVar8 = 0;
        if ((int)uVar6 < iVar1) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if (uVar8 == 0) goto LAB_148a5f593;
        goto LAB_148a5f5c6;
      }
    }
    uVar6 = 0xffffffff;
LAB_148a5f593:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_148a5f5c6:
    TArray<TUniquePtr<FContentBundle,TDefaultDelete<FContentBundle>_>,TSizedDefaultAllocator<32>_>::
    RemoveAtSwapImpl(&this->ContentBundles,uVar6);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,(this->ContentBundles).ArrayNum,
               &(this->ContentBundles).ArrayMax);
  }
  return;
}

// RegisterContentBundleClientEvents @ 148a622e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::RegisterContentBundleClientEvents(FContentBundleContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleEngineSubsystem *pUVar3;
  FContentBundleContainer local_res10;
  
  if (GEngine == (UEngine *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = (UContentBundleEngineSubsystem *)0x0;
  }
  else {
    pUVar3 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  }
  TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
  ::AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FContentBundleClient,1>_&),FDefaultDelegateUserPolicy>
              *)&pUVar3->OnContentBundleClientRegistered,&local_res10,(pmf_44680e04)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar3->OnContentBundleClientUnregistered,
             (FContentBundleContainer *)&local_res10.ContentBundles.ArrayNum,(pmf_ff887176)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar3->OnContentBundleClientRequestedContentInjection,
             (FContentBundleContainer *)&local_res10.InjectedWorld,(pmf_ff887176)this);
  TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>::
  AddRaw<FContentBundleContainer>
            ((TMulticastDelegateRegistration<void___cdecl(FContentBundleClient_&),FDefaultDelegateUserPolicy>
              *)&pUVar3->OnContentBundleClientRequestedContentRemoval,
             (FContentBundleContainer *)&stack0xffffffffffffffe8,(pmf_ff887176)this);
  return;
}

// RemoveContentBundle @ 148a65200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleContainer::RemoveContentBundle
          (FContentBundleContainer *this,FContentBundleBase *param_1)

{
  FContentBundleClient *pFVar1;
  UContentBundleManager *this_00;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  UClass *pUVar5;
  UWorld *this_01;
  UWorldPartition *this_02;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FString local_18;
  
  if ((param_1->Status == ContentInjected) || (param_1->Status == ReadyToInject)) {
    pTVar6 = (param_1->Client).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148a65250;
        }
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar7 = aVar2 == aVar4;
        if (bVar7) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar7);
      pFVar1 = (param_1->Client).Object;
      if ((pFVar1 != (FContentBundleClient *)0x0) &&
         (cVar3 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,this->InjectedWorld), cVar3 == '\0'
         )) {
        this_00 = (this->InjectedWorld->ContentBundleManager).field0_0x0.DebugPtr;
        pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
        this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar5);
        this_02 = UWorld::GetWorldPartition(this_01);
        if ((this_02 != (UWorldPartition *)0x0) &&
           (bVar7 = UWorldPartition::IsInitialized(this_02), bVar7)) {
          if (4 < (byte)LogContentBundle._0_1_) {
            ContentBundle::LogPrivate::MakeDebugInfoString
                      (&local_18,(param_1->Descriptor).field0_0x0.DebugPtr,param_1->InjectedWorld);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          goto LAB_148a65331;
        }
      }
    }
LAB_148a65250:
    FContentBundleBase::RemoveContent(param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    bVar7 = true;
  }
  else {
LAB_148a65331:
    bVar7 = false;
  }
  return bVar7;
}

// RemoveContentBundle @ 148a65340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FContentBundleContainer::RemoveContentBundle
          (FContentBundleContainer *this,FContentBundleClient *param_1)

{
  FContentBundleClient *pFVar1;
  UContentBundleManager *this_00;
  atomic<int> aVar2;
  FContentBundleBase *this_01;
  char cVar3;
  atomic<int> aVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UWorldPartition *this_02;
  UContentBundleDescriptor *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  FContentBundleBase *local_res10;
  undefined1 local_38 [16];
  code *local_28;
  undefined1 *local_20;
  
  local_38._8_8_ = &local_res10;
  local_20 = local_38;
  local_res10 = (FContentBundleBase *)0x0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FContentBundleContainer::GetContentBundle'::__l2::<lambda_1>,bool,FContentBundleBase_*>
             ::Call;
  local_38._0_8_ = param_1;
  ForEachContentBundleBreakable(this,(TFunctionRef<bool___cdecl(FContentBundleBase_*)> *)&local_28);
  this_01 = local_res10;
  if (local_res10 == (FContentBundleBase *)0x0) {
    if (4 < (byte)LogContentBundle._0_1_) {
      pUVar6 = this->InjectedWorld;
      pUVar7 = (UContentBundleDescriptor *)
               FWeakObjectPtr::Get(&(param_1->ContentBundleDescriptor).WeakPtr);
      ContentBundle::LogPrivate::MakeDebugInfoString((FString *)local_38,pUVar7,pUVar6);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      if ((FContentBundleClient *)local_38._0_8_ != (FContentBundleClient *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
    return false;
  }
  if ((local_res10->Status == ContentInjected) || (local_res10->Status == ReadyToInject)) {
    pTVar8 = (local_res10->Client).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148a653d3;
        }
        LOCK();
        aVar4 = pTVar8->SharedReferenceCount;
        bVar9 = aVar2 == aVar4;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar9);
      pFVar1 = (local_res10->Client).Object;
      if ((pFVar1 != (FContentBundleClient *)0x0) &&
         (cVar3 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,this->InjectedWorld), cVar3 == '\0'
         )) {
        this_00 = (this->InjectedWorld->ContentBundleManager).field0_0x0.DebugPtr;
        pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar5);
        this_02 = UWorld::GetWorldPartition(pUVar6);
        if ((this_02 != (UWorldPartition *)0x0) &&
           (bVar9 = UWorldPartition::IsInitialized(this_02), bVar9)) {
          if (4 < (byte)LogContentBundle._0_1_) {
            ContentBundle::LogPrivate::MakeDebugInfoString
                      ((FString *)local_38,(this_01->Descriptor).field0_0x0.DebugPtr,
                       this_01->InjectedWorld);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
            if ((FContentBundleClient *)local_38._0_8_ != (FContentBundleClient *)0x0) {
              FMemory::Free((void *)local_38._0_8_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          goto LAB_148a654b1;
        }
      }
    }
LAB_148a653d3:
    FContentBundleBase::RemoveContent(this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    bVar9 = true;
  }
  else {
LAB_148a654b1:
    bVar9 = false;
  }
  return bVar9;
}

// UnregisterContentBundleClientEvents @ 148a6b350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FContentBundleContainer::UnregisterContentBundleClientEvents(FContentBundleContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UContentBundleEngineSubsystem *pUVar3;
  
  if (GEngine == (UEngine *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleEngineSubsystem.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = (UContentBundleEngineSubsystem *)0x0;
  }
  else {
    pUVar3 = UEngine::GetEngineSubsystem<UContentBundleEngineSubsystem>(GEngine);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnContentBundleClientRegistered,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnContentBundleClientUnregistered,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnContentBundleClientRequestedContentInjection,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnContentBundleClientRequestedContentRemoval,this);
  return;
}

