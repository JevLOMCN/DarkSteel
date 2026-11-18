// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 5

// ~FMediaTextureTracker @ 146c1e6c0

void __thiscall FMediaTextureTracker::~FMediaTextureTracker(FMediaTextureTracker *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FMediaTextureTracker__6B_;
  pFVar1 = (this->MediaTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MapTextureToObject).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MapTextureToObject).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapTextureToObject);
  return;
}

// Get @ 146c27d00

FMediaTextureTracker * __cdecl FMediaTextureTracker::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FMediaTextureTracker::Get'::__l2::_dynamic_atexit_destructor_for__Engine__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Engine;
}

// GetObjects @ 146c2b3e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> * __thiscall
FMediaTextureTracker::GetObjects(FMediaTextureTracker *this,TObjectPtr<UMediaTexture> param_1)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  FVar1 = *(FWeakObjectPtr *)param_1.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (FVar1 != (FWeakObjectPtr)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = FVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar1 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MapTextureToObject,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)&local_res10);
  pTVar4 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0;
  if (iVar2 != -1) {
    pTVar4 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)
             ((longlong)iVar2 * 0x20 + *(longlong *)&(this->MapTextureToObject).field_0x0);
  }
  pTVar3 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)
           &pTVar4->ArrayNum;
  if (pTVar4 == (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0;
  }
  return pTVar3;
}

// RegisterTexture @ 146c31550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FMediaTextureTracker::RegisterTexture
          (FMediaTextureTracker *this,TSharedPtr<FMediaTextureTrackerObject,1> *param_1,
          TObjectPtr<UMediaTexture> param_2)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *this_00;
  ForAnyElementType *pFVar8;
  TKeyInitializer<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_&> local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  FWeakObjectPtr *local_res20;
  FWeakObjectPtr local_58;
  FMediaTextureTrackerObject *local_50;
  TReferenceControllerBase<1> *local_48;
  
  pUVar2 = *(UObject **)param_2.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  this_00 = (this->MediaTextures).AllocatorInstance.Data;
  pFVar3 = this_00 + (longlong)(this->MediaTextures).ArrayNum * 8;
  for (; this_00 != pFVar3; this_00 = this_00 + 8) {
    bVar5 = TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>::UEOpEquals<UMediaTexture,bool>
                      ((TWeakObjectPtr<UMediaTexture,FWeakObjectPtr> *)this_00,
                       (TWeakObjectPtr<UMediaTexture,FWeakObjectPtr> *)&local_res10);
    if (bVar5) goto LAB_146c31673;
  }
  iVar6 = (this->MediaTextures).ArrayNum;
  piVar1 = &(this->MediaTextures).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->MediaTextures).AllocatorInstance,piVar1);
  }
  (this->MediaTextures).ArrayNum = iVar6 + 1;
  *(FWeakObjectPtr *)((this->MediaTextures).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10;
  local_res20 = &local_res10;
  TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MapTextureToObject,&local_res8,(bool *)&local_res20);
LAB_146c31673:
  local_58 = local_res10;
  iVar6 = TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MapTextureToObject,
                     local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)&local_58);
  pFVar7 = (ForAnyElementType *)0x0;
  if (iVar6 != -1) {
    pFVar7 = (ForAnyElementType *)
             ((longlong)iVar6 * 0x20 + *(longlong *)&(this->MapTextureToObject).field_0x0);
  }
  local_50 = param_1->Object;
  pFVar8 = pFVar7 + 1;
  if (pFVar7 == (ForAnyElementType *)0x0) {
    pFVar8 = (ForAnyElementType *)0x0;
  }
  local_48 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->WeakReferenceCount = (atomic<int>)((int)local_48->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (((pFVar8->Data <= (FScriptContainerElement *)&local_50) &&
      ((FScriptContainerElement *)&local_50 <
       pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&pFVar8[1].Data;
  piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar8,piVar1);
  }
  *(int *)&pFVar8[1].Data = iVar6 + 1;
  pFVar3 = pFVar8->Data;
  *(FMediaTextureTrackerObject **)(pFVar3 + (longlong)iVar6 * 0x10) = local_50;
  *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = local_48;
  return;
}

// UnregisterTexture @ 146c39200

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaTextureTracker::UnregisterTexture
          (FMediaTextureTracker *this,TSharedPtr<FMediaTextureTrackerObject,1> *param_1,
          TObjectPtr<UMediaTexture> param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  longlong lVar5;
  TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  TWeakPtr<FMediaTextureTrackerObject,1> local_28;
  
  FVar3 = *(FWeakObjectPtr *)param_2.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (FVar3 != (FWeakObjectPtr)0x0) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar3);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  local_res18[0] = local_res8;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UMediaTexture,FWeakObjectPtr>,TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->MapTextureToObject,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UMediaTexture_const_,FWeakObjectPtr> *)local_res18);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&this->MapTextureToObject;
    this_00 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)
              (lVar5 + 8);
    if (lVar5 == 0) {
      this_00 = (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (this_00 != (TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_> *)0x0
       ) {
      local_28.Object = param_1->Object;
      local_28.WeakReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      TArray<TWeakPtr<FMediaTextureTrackerObject,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                (this_00,&local_28,Default);
      if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_28.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  return;
}

