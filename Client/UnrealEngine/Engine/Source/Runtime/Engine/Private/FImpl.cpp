// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// HandleLocalizedTextChanged @ 1479d55f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FTextRenderComponentCultureChangedFixUp::FImpl::HandleLocalizedTextChanged(FImpl *this)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  TObjectIterator<UTextRenderComponent> local_38;
  TObjectIterator<UTextRenderComponent> local_20;
  
  local_20.Index = 0xffffffff;
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UTextRenderComponent::GetPrivateStaticClass();
  GetObjectsOfClass(pUVar6,&local_20.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UTextRenderComponent>::Advance(&local_20);
  _Src.Data = local_20.ObjectArray.AllocatorInstance.Data;
  lVar8 = (longlong)local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.ArrayNum = local_20.ObjectArray.ArrayNum;
  local_38.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_20.ObjectArray.ArrayNum == 0) {
    local_38.ObjectArray.ArrayMax = 0;
    uVar2 = local_20.Index;
    uVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_38,
               local_20.ObjectArray.ArrayNum,&local_38.ObjectArray.ArrayMax);
    memcpy(local_38.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
    uVar2 = local_20.Index;
    uVar7 = local_20.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_38.Index = uVar2;
    if (uVar2 == uVar7) {
      if (local_38.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.ObjectArray.AllocatorInstance.Data);
      }
      if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar2 < local_38.ObjectArray.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)
                (local_38.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8));
    TObjectIterator<UTextRenderComponent>::Advance(&local_38);
    uVar2 = local_38.Index;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Register @ 1479e2b80

void __thiscall FTextRenderComponentCultureChangedFixUp::FImpl::Register(FImpl *this)

{
  FTextLocalizationManager *pFVar1;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_res10;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  pFVar1 = FTextLocalizationManager::Get();
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  CreateSP<FTextRenderComponentCultureChangedFixUp::FImpl>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,this,
             (pmf_ba9ab4f4)0x1479d55f0);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar1->OnTextRevisionChangedEvent,&local_res10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_20);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

