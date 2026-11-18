// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Destroy @ 1475bee10

void __cdecl UE::Anim::FSkeletonRemappingRegistry::Destroy(void)

{
  void *pvVar1;
  code *pcVar2;
  FSkeletonRemappingRegistry *SRWLock;
  BOOLEAN BVar3;
  bool bVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
         FCoreUObjectDelegates::GetPostGarbageCollect();
  if (FSkeletonRemappingRegistryPrivate::PostGarbageCollectHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              (this,FSkeletonRemappingRegistryPrivate::PostGarbageCollectHandle);
  }
  SRWLock = GSkeletonRemappingRegistry;
  if (GSkeletonRemappingRegistry != (FSkeletonRemappingRegistry *)0x0) {
    *(undefined4 *)&(GSkeletonRemappingRegistry->PerSkeletonMappings).field_0x48 = 0;
    pvVar1 = *(void **)&(SRWLock->PerSkeletonMappings).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&SRWLock->PerSkeletonMappings);
    *(undefined4 *)&(SRWLock->Mappings).field_0x48 = 0;
    pvVar1 = *(void **)&(SRWLock->Mappings).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&SRWLock->Mappings);
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    ::operator_delete(SRWLock,0xa8);
  }
  GSkeletonRemappingRegistry = (FSkeletonRemappingRegistry *)0x0;
  return;
}

// Get @ 1475cd5a0

FSkeletonRemappingRegistry * __cdecl UE::Anim::FSkeletonRemappingRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FSkeletonRemappingRegistry *pFVar3;
  
  if ((GSkeletonRemappingRegistry == (FSkeletonRemappingRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GSkeletonRemappingRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemappingRegistry.cpp"
                         ,0x32,
                         L"Skeleton remapping registry is not instanced. It is only valid to access this while the engine module is loaded."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSkeletonRemappingRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return GSkeletonRemappingRegistry;
}

// GetRemapping @ 1475dcb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSkeletonRemapping * __thiscall
UE::Anim::FSkeletonRemappingRegistry::GetRemapping
          (FSkeletonRemappingRegistry *this,USkeleton *param_1,USkeleton *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSkeletonRemapping *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_res18 [16];
  undefined1 local_d8 [8];
  FWeakObjectPtr local_d0;
  FSkeletonRemapping *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  TPairInitializer<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_&&,TSharedPtr<FSkeletonRemapping,1>_const_&>
  local_a8;
  USkeleton *local_98;
  USkeleton *local_90;
  USkeleton *local_88;
  USkeleton *local_80;
  USkeleton *local_78;
  undefined8 *local_70;
  FSkeletonRemapping **local_68;
  FWeakObjectPtr *local_60;
  FSkeletonRemapping **local_58;
  FWeakObjectPtr *local_50;
  FSkeletonRemapping **local_48;
  
  if (param_1 == param_2) {
    return &DefaultMapping;
  }
  if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_a8.Value = (TSharedPtr<FSkeletonRemapping,1> *)param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)local_d8,(FObjectPtr)&local_a8.Value);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_98 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_98);
  uVar7 = local_d8._4_4_ ^ local_d8._0_4_;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 +
          (local_d0.ObjectSerialNumber ^ local_d0.ObjectIndex) + uVar7 * 0x40 ^ uVar7;
  if ((this == (FSkeletonRemappingRegistry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSkeletonRemapping *)(*pcVar2)();
    return pFVar5;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  iVar4 = TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>_>
                    ((TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
                      *)&this->Mappings,uVar7,
                     (TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>
                      *)local_d8);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->Mappings + (longlong)iVar4 * 0x28;
    plVar8 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if ((plVar8 != (longlong *)0x0) &&
       (pFVar5 = (FSkeletonRemapping *)*plVar8, pFVar5 != (FSkeletonRemapping *)0x0)) {
      if (this == (FSkeletonRemappingRegistry *)0x0) {
        return pFVar5;
      }
      ReleaseSRWLockShared((PSRWLOCK)this);
      return pFVar5;
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (this != (FSkeletonRemappingRegistry *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  pTVar6 = ::operator_new(0x50);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_c8 = ___xmm_00000000000000000000000000000010;
    pTStack_c0 = _UNK_150651568;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFSkeletonRemapping___00_SharedPointerInternals__6B_;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar6[1]._padding_ = 0;
    local_90 = param_1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar6 + 1),(FObjectPtr)&local_90);
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    local_88 = param_2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&pTVar6[1].SharedReferenceCount,(FObjectPtr)&local_88);
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    FSkeletonRemapping::GenerateMapping((FSkeletonRemapping *)(pTVar6 + 1));
    local_c8 = (FSkeletonRemapping *)(pTVar6 + 1);
    if ((local_c8 == (FSkeletonRemapping *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkeletonRemapping *)(*pcVar2)();
      return pFVar5;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar6;
    pTStack_c0 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this == (FSkeletonRemappingRegistry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSkeletonRemapping *)(*pcVar2)();
    return pFVar5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  iVar4 = TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>_>
                    ((TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
                      *)&this->Mappings,uVar7,
                     (TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>
                      *)local_d8);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)&this->Mappings + (longlong)iVar4 * 0x28;
    plVar8 = (longlong *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      plVar8 = (longlong *)0x0;
    }
    if ((plVar8 != (longlong *)0x0) &&
       (pFVar5 = (FSkeletonRemapping *)*plVar8, pFVar5 != (FSkeletonRemapping *)0x0))
    goto LAB_1475dcfe6;
  }
  local_70 = (undefined8 *)local_d8;
  local_68 = &local_c8;
  TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>_const_&,TSharedPtr<FSkeletonRemapping,1>_const_&>_>
            ((TSet<TTuple<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>,TSharedPtr<FSkeletonRemapping,1>,0>,FDefaultSetAllocator>
              *)&this->Mappings,(uint)local_res18,
             (TPairInitializer<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_>_const_&,TSharedPtr<FSkeletonRemapping,1>_const_&>
              *)(ulonglong)uVar7,(bool *)&local_70);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_80 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_80);
  local_60 = &local_b8;
  local_58 = &local_c8;
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_&&,TSharedPtr<FSkeletonRemapping,1>_const_&>_>
            ((TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
              *)&this->PerSkeletonMappings,
             (TPairInitializer<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_&&,TSharedPtr<FSkeletonRemapping,1>_const_&>
              *)(local_res18 + 8),(bool *)&local_60);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_78 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_78);
  local_50 = &local_b0;
  local_48 = &local_c8;
  TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>_&&,TSharedPtr<FSkeletonRemapping,1>_const_&>_>
            ((TSet<TTuple<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>,FDefaultSetAllocator>
              *)&this->PerSkeletonMappings,&local_a8,(bool *)&local_50);
  pFVar5 = local_c8;
  if ((local_c8 == (FSkeletonRemapping *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), pFVar5 = local_c8, bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FSkeletonRemapping *)(*pcVar2)();
    return pFVar5;
  }
LAB_1475dcfe6:
  if (this != (FSkeletonRemappingRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  return pFVar5;
}

// Init @ 1475e01c0

void __cdecl UE::Anim::FSkeletonRemappingRegistry::Init(void)

{
  FSkeletonRemappingRegistry *pFVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  FDelegateHandle FVar2;
  undefined1 local_res8 [32];
  
  pFVar1 = ::operator_new(0xa8);
  GSkeletonRemappingRegistry = (FSkeletonRemappingRegistry *)0x0;
  if (pFVar1 != (FSkeletonRemappingRegistry *)0x0) {
    *(undefined8 *)&(pFVar1->Mappings).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x18 = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x38 = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x48 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x18 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x38 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x48 = 0;
    (pFVar1->MappingsLock).Mutex.Mutex.Ptr = (void *)0x0;
    *(undefined8 *)&pFVar1->Mappings = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->Mappings).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->Mappings).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->Mappings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->Mappings).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->Mappings).field_0x40 = 0;
    *(undefined8 *)&pFVar1->PerSkeletonMappings = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->PerSkeletonMappings).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->PerSkeletonMappings).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->PerSkeletonMappings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->PerSkeletonMappings).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->PerSkeletonMappings).field_0x40 = 0;
    GSkeletonRemappingRegistry = pFVar1;
  }
  this = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)this,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  FSkeletonRemappingRegistryPrivate::PostGarbageCollectHandle.ID = *FVar2.ID;
  return;
}

// RefreshMappings @ 1475ed210

void __thiscall
UE::Anim::FSkeletonRemappingRegistry::RefreshMappings
          (FSkeletonRemappingRegistry *this,USkeleton *param_1)

{
  FSkeletonRemapping *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  TSharedPtr<FSkeletonRemapping,1> *pTVar5;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  USkeleton *local_res18;
  TArray<TSharedPtr<FSkeletonRemapping,1>,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (this == (FSkeletonRemappingRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  TMultiMap<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>,TSharedPtr<FSkeletonRemapping,1>,1>_>
  ::MultiFind<TSizedDefaultAllocator<32>_>
            (&this->PerSkeletonMappings,(TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>)local_res10
             ,&local_38,false);
  if (this == (FSkeletonRemappingRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  iVar2 = local_38.ArrayNum;
  pTVar5 = (TSharedPtr<FSkeletonRemapping,1> *)
           (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10);
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FSkeletonRemapping,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if ((TSharedPtr<FSkeletonRemapping,1> *)FVar4.Data == pTVar5) break;
    if (((TSharedPtr<FSkeletonRemapping,1> *)FVar4.Data)->Object == (FSkeletonRemapping *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = ((TSharedPtr<FSkeletonRemapping,1> *)FVar4.Data)->Object;
    (this_00->SourceToTargetBoneIndexes).ArrayNum = 0;
    if ((this_00->SourceToTargetBoneIndexes).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this_00->SourceToTargetBoneIndexes).AllocatorInstance,0,
                 &(this_00->SourceToTargetBoneIndexes).ArrayMax);
    }
    (this_00->TargetToSourceBoneIndexes).ArrayNum = 0;
    if ((this_00->TargetToSourceBoneIndexes).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this_00->TargetToSourceBoneIndexes).AllocatorInstance,0,
                 &(this_00->TargetToSourceBoneIndexes).ArrayMax);
    }
    (this_00->RetargetingTable).ArrayNum = 0;
    if ((this_00->RetargetingTable).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(this_00->RetargetingTable).AllocatorInstance,0,
                 &(this_00->RetargetingTable).ArrayMax);
    }
    FSkeletonRemapping::GenerateMapping(this_00);
    FVar4.Data = FVar4.Data + 0x10;
  }
  if (this != (FSkeletonRemappingRegistry *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  DestructItems<TSharedPtr<FSkeletonRemapping,1>,int>
            ((TSharedPtr<FSkeletonRemapping,1> *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((TSharedPtr<FSkeletonRemapping,1> *)local_38.AllocatorInstance.Data !=
      (TSharedPtr<FSkeletonRemapping,1> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

