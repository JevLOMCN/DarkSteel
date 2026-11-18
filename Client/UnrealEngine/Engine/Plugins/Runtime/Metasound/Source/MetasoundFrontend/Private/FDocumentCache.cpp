// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 23

// FDocumentCache @ 14ae1a9a0

FDocumentCache * __thiscall
Metasound::Frontend::FDocumentCache::FDocumentCache
          (FDocumentCache *this,FMetasoundFrontendDocument *param_1,
          TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentCache_Frontend_Metasound__6B_;
  (this->DependencyCache).Object = (FDocumentDependencyCache *)0x0;
  (this->DependencyCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EdgeCacheMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeCacheMap).Pairs.ArrayNum = 0;
  (this->EdgeCacheMap).Pairs.ArrayMax = 0;
  (this->NodeCacheMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeCacheMap).Pairs.ArrayNum = 0;
  (this->NodeCacheMap).Pairs.ArrayMax = 0;
  (this->InterfaceCache).Object = (FDocumentGraphInterfaceCache *)0x0;
  (this->InterfaceCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Document = param_1;
  (this->ModifyDelegates).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ModifyDelegates).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TransactionCount = 0;
  (this->BuildPageID).A = 0;
  (this->BuildPageID).B = 0;
  (this->BuildPageID).C = 0;
  (this->BuildPageID).D = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FDocumentCache @ 14ae1aa20

FDocumentCache * __thiscall
Metasound::Frontend::FDocumentCache::FDocumentCache(FDocumentCache *this)

{
  FDocumentModifyDelegates *pFVar1;
  FDocumentModifyDelegates *pFVar2;
  FDocumentModifyDelegates *pFVar3;
  
  pFVar3 = (FDocumentModifyDelegates *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentCache_Frontend_Metasound__6B_;
  (this->DependencyCache).Object = (FDocumentDependencyCache *)0x0;
  (this->DependencyCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EdgeCacheMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeCacheMap).Pairs.ArrayNum = 0;
  (this->EdgeCacheMap).Pairs.ArrayMax = 0;
  (this->NodeCacheMap).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeCacheMap).Pairs.ArrayNum = 0;
  (this->NodeCacheMap).Pairs.ArrayMax = 0;
  (this->InterfaceCache).Object = (FDocumentGraphInterfaceCache *)0x0;
  (this->InterfaceCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->Document = (FMetasoundFrontendDocument *)0x0;
  pFVar1 = ::operator_new(0x2e0);
  pFVar2 = pFVar3;
  if (pFVar1 != (FDocumentModifyDelegates *)0x0) {
    pFVar2 = FDocumentModifyDelegates::FDocumentModifyDelegates(pFVar1);
  }
  (this->ModifyDelegates).Object = pFVar2;
  pFVar1 = ::operator_new(0x18);
  if (pFVar1 != (FDocumentModifyDelegates *)0x0) {
    *(undefined4 *)&pFVar1->_padding_ = 1;
    pFVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDocumentModifyDelegates_Frontend_Metasound__U__DefaultDeleter_UFDocumentModifyDelegates_Frontend_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) = 1;
    *(FDocumentModifyDelegates **)&pFVar1->OnDocumentMetadataChanged = pFVar2;
    pFVar3 = pFVar1;
  }
  (this->ModifyDelegates).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar3;
  EnsureRetrievingVTablePtrDuringCtor(L"TSharedRef()");
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1>::
  Init<Metasound::Frontend::FDocumentModifyDelegates>
            (&this->ModifyDelegates,(this->ModifyDelegates).Object);
  this->TransactionCount = 0;
  (this->BuildPageID).A = 0;
  (this->BuildPageID).B = 0;
  (this->BuildPageID).C = 0;
  (this->BuildPageID).D = 0;
  return this;
}

// ~FDocumentCache @ 14ae1d530

void __thiscall Metasound::Frontend::FDocumentCache::~FDocumentCache(FDocumentCache *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModifyDelegates).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InterfaceCache).SharedReferenceCount.ReferenceController);
  DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,int>
            ((TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *)
             (this->NodeCacheMap).Pairs.AllocatorInstance.Data,(this->NodeCacheMap).Pairs.ArrayNum);
  pFVar3 = (this->NodeCacheMap).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,int>
            ((TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *)
             (this->EdgeCacheMap).Pairs.AllocatorInstance.Data,(this->EdgeCacheMap).Pairs.ArrayNum);
  pFVar3 = (this->EdgeCacheMap).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DependencyCache).SharedReferenceCount.ReferenceController);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ae1d5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator() @ 14ae1e690

void __thiscall
`Metasound::Frontend::FDocumentCache::Init'::__l2::<lambda_1>::operator()
          (void *this,FDocumentMutatePageArgs *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  FKeyForward local_res8;
  
  lVar1 = *(longlong *)this;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_>,TSizedDefaultAllocator<32>_>
                      *)(lVar1 + 0x28),&param_1->PageID,local_res8,(TLess<FGuid_const_&>)local_res8)
  ;
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < *(int *)(lVar1 + 0x30)) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pvVar7 = (void *)((longlong)(int)uVar4 * 0x20 + *(longlong *)(lVar1 + 0x28));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)pvVar7 + 0x18));
    iVar6 = *(int *)(lVar1 + 0x30) + ~uVar4;
    if (iVar6 != 0) {
      memmove(pvVar7,(void *)((longlong)pvVar7 + 0x20),(longlong)iVar6 << 5);
    }
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(ForAnyElementType *)(lVar1 + 0x28),*(int *)(lVar1 + 0x30),
               (int *)(lVar1 + 0x34));
  }
  lVar1 = *(longlong *)this;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>,FGuid,TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::FKeyForward,TLess<FGuid_const_&>_>
                    ((TArray<TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_>,TSizedDefaultAllocator<32>_>
                      *)(lVar1 + 0x38),&param_1->PageID,(FKeyForward)local_res8,
                     (TLess<FGuid_const_&>)local_res8);
  if (uVar4 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar4 < *(int *)(lVar1 + 0x40)) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pvVar7 = (void *)((longlong)(int)uVar4 * 0x20 + *(longlong *)(lVar1 + 0x38));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)pvVar7 + 0x18));
    iVar6 = *(int *)(lVar1 + 0x40) + ~uVar4;
    if (iVar6 != 0) {
      memmove(pvVar7,(void *)((longlong)pvVar7 + 0x20),(longlong)iVar6 << 5);
    }
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(ForAnyElementType *)(lVar1 + 0x38),*(int *)(lVar1 + 0x40),
               (int *)(lVar1 + 0x44));
  }
  return;
}

// ContainsDependency @ 14ae272d0

bool __thiscall
Metasound::Frontend::FDocumentCache::ContainsDependency
          (FDocumentCache *this,FNodeClassRegistryKey *param_1)

{
  FDocumentDependencyCache *pFVar1;
  int *piVar2;
  
  pFVar1 = GetDependencyCache(this);
  piVar2 = TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
           ::Find(&pFVar1->KeyToIndex,param_1);
  return piVar2 != (int *)0x0;
}

// ContainsDependencyOfType @ 14ae27300

bool __thiscall
Metasound::Frontend::FDocumentCache::ContainsDependencyOfType
          (FDocumentCache *this,EMetasoundFrontendClassType param_1)

{
  int iVar1;
  EMetasoundFrontendClassType EVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar3 = (**(code **)(this->_padding_ + 0x38))();
  iVar1 = *(int *)(lVar3 + 0x180);
  lVar4 = *(longlong *)(lVar3 + 0x178);
  lVar5 = (longlong)iVar1 * 0x90 + lVar4;
  while( true ) {
    if (*(int *)(lVar3 + 0x180) != iVar1) {
      `TCheckedPointerIterator<FMetasoundFrontendClass_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (lVar4 == lVar5) break;
    EVar2 = FMetasoundFrontendClassMetadata::GetType
                      ((FMetasoundFrontendClassMetadata *)(lVar4 + 0x18));
    if (EVar2 == param_1) {
      return true;
    }
    lVar4 = lVar4 + 0x90;
  }
  return false;
}

// Create @ 14ae28c50

TSharedRef<Metasound::Frontend::FDocumentCache,1> * __cdecl
Metasound::Frontend::FDocumentCache::Create
          (TSharedRef<Metasound::Frontend::FDocumentCache,1> *__return_storage_ptr__,
          FMetasoundFrontendDocument *param_1,
          TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *param_2,FGuid *param_3,
          bool param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentModifyDelegates *pFVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> *paVar5;
  bool bVar6;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentCache::Create");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId140,"Metasound::Frontend::FDocumentCache::Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId140);
  }
  pTVar4 = ::operator_new(0x98);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar2 = param_2->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar5 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar5 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    *(FMetasoundFrontendDocument **)&pTVar4[6].SharedReferenceCount = param_1;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[1]._padding_ = (longlong)&___7FDocumentCache_Frontend_Metasound__6B_;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5]._padding_ = 0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[6]._padding_ = 0;
    pTVar4[7]._padding_ = (longlong)pFVar2;
    *(TReferenceControllerBase<1> **)&pTVar4[7].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar5 = (atomic<int>)((int)*paVar5 + 1);
      UNLOCK();
    }
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[9]._padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  TSharedRef<Metasound::Frontend::FDocumentCache,1>::
  TSharedRef<Metasound::Frontend::FDocumentCache,1>
            (__return_storage_ptr__,(FDocumentCache *)(pTVar4 + 1),pTVar4);
  Init(__return_storage_ptr__->Object,param_3,param_4);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindDependency @ 14ae32610

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::FDocumentCache::FindDependency(FDocumentCache *this,FGuid *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FDocumentDependencyCache *pFVar4;
  uint *puVar5;
  longlong lVar6;
  FMetasoundFrontendClass *pFVar7;
  uint uVar8;
  
  pFVar4 = GetDependencyCache(this);
  puVar5 = (uint *)TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                             (&pFVar4->IDToIndex,param_1);
  if (puVar5 == (uint *)0x0) {
    return (FMetasoundFrontendClass *)0x0;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x38))();
  uVar1 = *puVar5;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x180)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FMetasoundFrontendClass *)((longlong)(int)uVar1 * 0x90 + *(longlong *)(lVar6 + 0x178));
}

// FindDependency @ 14ae326c0

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::FDocumentCache::FindDependency
          (FDocumentCache *this,FNodeClassRegistryKey *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FDocumentDependencyCache *pFVar4;
  uint *puVar5;
  longlong lVar6;
  FMetasoundFrontendClass *pFVar7;
  uint uVar8;
  
  pFVar4 = GetDependencyCache(this);
  puVar5 = (uint *)TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
                   ::Find(&pFVar4->KeyToIndex,param_1);
  if (puVar5 == (uint *)0x0) {
    return (FMetasoundFrontendClass *)0x0;
  }
  lVar6 = (**(code **)(this->_padding_ + 0x38))();
  uVar1 = *puVar5;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x180)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMetasoundFrontendClass *)(*pcVar2)();
      return pFVar7;
    }
  }
  return (FMetasoundFrontendClass *)((longlong)(int)uVar1 * 0x90 + *(longlong *)(lVar6 + 0x178));
}

// FindDependencyIndex @ 14ae32770

int * __thiscall
Metasound::Frontend::FDocumentCache::FindDependencyIndex(FDocumentCache *this,FGuid *param_1)

{
  FDocumentDependencyCache *pFVar1;
  int *piVar2;
  
  pFVar1 = GetDependencyCache(this);
  piVar2 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                     (&pFVar1->IDToIndex,param_1);
  return piVar2;
}

// FindDependencyIndex @ 14ae327a0

int * __thiscall
Metasound::Frontend::FDocumentCache::FindDependencyIndex
          (FDocumentCache *this,FNodeClassRegistryKey *param_1)

{
  FDocumentDependencyCache *pFVar1;
  int *piVar2;
  
  pFVar1 = GetDependencyCache(this);
  piVar2 = TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
           ::Find(&pFVar1->KeyToIndex,param_1);
  return piVar2;
}

// GetDependencyCache @ 14ae37df0

FDocumentDependencyCache * __thiscall
Metasound::Frontend::FDocumentCache::GetDependencyCache(FDocumentCache *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDocumentDependencyCache *pFVar8;
  FDocumentDependencyCache *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->DependencyCache).Object != (FDocumentDependencyCache *)0x0) goto LAB_14ae37f68;
  pFVar6 = (FMetasoundFrontendDocument *)(**(code **)(this->_padding_ + 0x38))();
  pTVar7 = ::operator_new(0x40);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FDocumentDependencyCache *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_14ae37ea1:
    if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
       (*(int *)(pFVar8->_padding_ + 8) < 1)) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8->_padding_ = (longlong)pFVar8;
      if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar8->_padding_;
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
        pFVar8->_padding_ = (longlong)pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentDependencyCache_FDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentDependencyCache::FDocumentDependencyCache
              ((FDocumentDependencyCache *)(pTVar7 + 1),pFVar6);
    pFVar8 = (FDocumentDependencyCache *)(pTVar7 + 1);
    if (pFVar8 != (FDocumentDependencyCache *)0x0) goto LAB_14ae37ea1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDocumentDependencyCache *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pFVar8;
  local_10.ReferenceController = pTVar7;
  if (&this->DependencyCache !=
      (TSharedPtr<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1> *)&local_18) {
    (this->DependencyCache).Object = pFVar8;
    local_18 = (FDocumentDependencyCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DependencyCache).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14ae37f68:
  if ((this->DependencyCache).Object == (FDocumentDependencyCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDocumentDependencyCache *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (this->DependencyCache).Object;
}

// GetDependencyCache @ 14ae37fb0

FDocumentDependencyCache * __thiscall
Metasound::Frontend::FDocumentCache::GetDependencyCache(FDocumentCache *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FMetasoundFrontendDocument *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FDocumentDependencyCache *pFVar8;
  FDocumentDependencyCache *local_18;
  FSharedReferencer<1> local_10;
  
  if ((this->DependencyCache).Object != (FDocumentDependencyCache *)0x0) goto LAB_14ae38128;
  pFVar6 = (FMetasoundFrontendDocument *)(**(code **)(this->_padding_ + 0x38))();
  pTVar7 = ::operator_new(0x40);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FDocumentDependencyCache *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_14ae38061:
    if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
       (*(int *)(pFVar8->_padding_ + 8) < 1)) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8->_padding_ = (longlong)pFVar8;
      if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar8->_padding_;
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
        pFVar8->_padding_ = (longlong)pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentDependencyCache_FDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentDependencyCache::FDocumentDependencyCache
              ((FDocumentDependencyCache *)(pTVar7 + 1),pFVar6);
    pFVar8 = (FDocumentDependencyCache *)(pTVar7 + 1);
    if (pFVar8 != (FDocumentDependencyCache *)0x0) goto LAB_14ae38061;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDocumentDependencyCache *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pFVar8;
  local_10.ReferenceController = pTVar7;
  if (&this->DependencyCache !=
      (TSharedPtr<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1> *)&local_18) {
    (this->DependencyCache).Object = pFVar8;
    local_18 = (FDocumentDependencyCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DependencyCache).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14ae38128:
  if ((this->DependencyCache).Object == (FDocumentDependencyCache *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FDocumentDependencyCache *)(*pcVar4)();
      return pFVar8;
    }
  }
  return (this->DependencyCache).Object;
}

// GetDocument @ 14ae381b0

FMetasoundFrontendDocument * __thiscall
Metasound::Frontend::FDocumentCache::GetDocument(FDocumentCache *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundFrontendDocument *pFVar3;
  
  if (this->Document != (FMetasoundFrontendDocument *)0x0) {
    return this->Document;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Document",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                     ,0x86,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundFrontendDocument *)(*pcVar1)();
    return pFVar3;
  }
  return this->Document;
}

// GetEdgeCache @ 14ae38420

IDocumentGraphEdgeCache * __thiscall
Metasound::Frontend::FDocumentCache::GetEdgeCache(FDocumentCache *this,FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentCache *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar6;
  TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *pTVar7;
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar8;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *pTVar9;
  FDocumentGraphEdgeCache *pFVar10;
  FDocumentModifyDelegates *pFVar11;
  FSharedReferencer<1> local_40;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_38;
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> local_28;
  
  pTVar6 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->EdgeCacheMap,param_1);
  if (pTVar6 == (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)0x0) {
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar10 = pTVar6->Object;
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar10 != (FDocumentGraphEdgeCache *)0x0) goto LAB_14ae38557;
  }
  pTVar7 = TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *)&this->_padding_,
                      (TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *)&local_38);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = (FDocumentCache *)pTVar7->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar11 = (this->ModifyDelegates).Object;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar11 = (this->ModifyDelegates).Object;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar8 = FDocumentGraphEdgeCache::Create(&local_28,&local_38,param_1,pFVar11);
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar10 = pTVar8->Object;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (FDocumentCache *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_38.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar9 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::AllocateMemoryForEmplace<FGuid_const_&>(&this->EdgeCacheMap,param_1);
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  *(uint *)&pTVar9->field_0x0 = param_1->A;
  *(uint *)&pTVar9->field_0x4 = uVar3;
  *(uint *)&pTVar9->field_0x8 = uVar4;
  *(uint *)&pTVar9->field_0xc = uVar5;
  *(FDocumentGraphEdgeCache **)&pTVar9->field_0x10 = pFVar10;
  *(TReferenceControllerBase<1> **)&pTVar9->field_0x18 = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_14ae38557:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  return (IDocumentGraphEdgeCache *)pFVar10;
}

// GetInterfaceCache @ 14ae38a90

IDocumentGraphInterfaceCache * __thiscall
Metasound::Frontend::FDocumentCache::GetInterfaceCache(FDocumentCache *this)

{
  TSharedPtr<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDocumentCache *pFVar3;
  FDocumentModifyDelegates *pFVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *pTVar7;
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *pTVar8;
  IDocumentGraphInterfaceCache *pIVar9;
  FDocumentGraphInterfaceCache *local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_38;
  TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> local_28;
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> local_18;
  
  pTVar1 = &this->InterfaceCache;
  if ((this->InterfaceCache).Object == (FDocumentGraphInterfaceCache *)0x0) {
    pTVar7 = TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *)&this->_padding_,
                        &local_28);
    pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
    pFVar3 = (FDocumentCache *)pTVar7->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar4 = (this->ModifyDelegates).Object;
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar4 = (this->ModifyDelegates).Object;
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = pFVar3;
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    pTVar8 = FDocumentGraphInterfaceCache::Create(&local_18,&local_38,&pFVar4->InterfaceDelegates);
    local_40.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_48 = pTVar8->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *)&local_48) {
      pTVar1->Object = local_48;
      local_48 = (FDocumentGraphInterfaceCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InterfaceCache).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (pTVar1->Object == (FDocumentGraphInterfaceCache *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pIVar9 = (IDocumentGraphInterfaceCache *)(*pcVar5)();
      return pIVar9;
    }
  }
  return (IDocumentGraphInterfaceCache *)pTVar1->Object;
}

// GetNodeCache @ 14ae394a0

IDocumentGraphNodeCache * __thiscall
Metasound::Frontend::FDocumentCache::GetNodeCache(FDocumentCache *this,FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentCache *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar6;
  TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *pTVar7;
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar8;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *pTVar9;
  FDocumentGraphNodeCache *pFVar10;
  FDocumentModifyDelegates *pFVar11;
  FSharedReferencer<1> local_40;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_38;
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> local_28;
  
  pTVar6 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->NodeCacheMap,param_1);
  if (pTVar6 == (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)0x0) {
    local_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar10 = pTVar6->Object;
    local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar10 != (FDocumentGraphNodeCache *)0x0) goto LAB_14ae395d7;
  }
  pTVar7 = TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *)&this->_padding_,
                      (TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *)&local_38);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar2 = (FDocumentCache *)pTVar7->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar11 = (this->ModifyDelegates).Object;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pFVar11 = (this->ModifyDelegates).Object;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar1;
  pTVar8 = FDocumentGraphNodeCache::Create(&local_28,&local_38,param_1,pFVar11);
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar10 = pTVar8->Object;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = (FDocumentCache *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_38.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar9 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::AllocateMemoryForEmplace<FGuid_const_&>(&this->NodeCacheMap,param_1);
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  *(uint *)&pTVar9->field_0x0 = param_1->A;
  *(uint *)&pTVar9->field_0x4 = uVar3;
  *(uint *)&pTVar9->field_0x8 = uVar4;
  *(uint *)&pTVar9->field_0xc = uVar5;
  *(FDocumentGraphNodeCache **)&pTVar9->field_0x10 = pFVar10;
  *(TReferenceControllerBase<1> **)&pTVar9->field_0x18 = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_14ae395d7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  return (IDocumentGraphNodeCache *)pFVar10;
}

// GetTransactionCount @ 14ae3d5d0

int __thiscall
Metasound::Frontend::FDocumentCache::GetTransactionCount(FDocumentCache *this,FGuid *param_1)

{
  FDocumentGraphNodeCache *pFVar1;
  FDocumentGraphEdgeCache *pFVar2;
  FDocumentGraphInterfaceCache *pFVar3;
  TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar4;
  TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  iVar6 = this->TransactionCount;
  pTVar4 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->NodeCacheMap,param_1);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDocumentGraphNodeCache *)0x0) {
      iVar6 = iVar6 + pFVar1->TransactionCount;
    }
  }
  pTVar5 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->EdgeCacheMap,param_1);
  if (pTVar5 != (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)0x0) {
    pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar5->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FDocumentGraphEdgeCache *)0x0) {
      iVar6 = iVar6 + pFVar2->TransactionCount;
    }
  }
  pFVar3 = (this->InterfaceCache).Object;
  if (pFVar3 != (FDocumentGraphInterfaceCache *)0x0) {
    iVar6 = iVar6 + pFVar3->TransactionCount;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar6;
}

// GetTransactionCount @ 14ae3d6a0

int __thiscall Metasound::Frontend::FDocumentCache::GetTransactionCount(FDocumentCache *this)

{
  FDocumentGraphNodeCache *pFVar1;
  FDocumentGraphEdgeCache *pFVar2;
  FDocumentGraphInterfaceCache *pFVar3;
  TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar4;
  TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  iVar6 = this->TransactionCount;
  pTVar4 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->NodeCacheMap,&this->BuildPageID);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7 = (pTVar4->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar4->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDocumentGraphNodeCache *)0x0) {
      iVar6 = iVar6 + pFVar1->TransactionCount;
    }
  }
  pTVar5 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->EdgeCacheMap,&this->BuildPageID);
  if (pTVar5 != (TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)0x0) {
    pTVar8 = (pTVar5->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar5->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FDocumentGraphEdgeCache *)0x0) {
      iVar6 = iVar6 + pFVar2->TransactionCount;
    }
  }
  pFVar3 = (this->InterfaceCache).Object;
  if (pFVar3 != (FDocumentGraphInterfaceCache *)0x0) {
    iVar6 = iVar6 + pFVar3->TransactionCount;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar6;
}

// Init @ 14ae3e3e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Metasound::Frontend::FDocumentCache::Init(FDocumentCache *this,FGuid *param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDocumentCache *pFVar4;
  longlong *plVar5;
  FDocumentModifyDelegates *pFVar6;
  bool bVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  TSharedRef<Metasound::Frontend::IDocumentCache,1> *pTVar14;
  FMetasoundFrontendDocument *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>_> *pTVar17;
  TTuple<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>_> *pTVar18;
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  atomic<int> *paVar21;
  FDocumentDependencyCache *pFVar22;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *pTVar23;
  bool bVar24;
  bool bVar25;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_138;
  TSharedRef<Metasound::Frontend::FDocumentModifyDelegates,1> *local_128;
  FDocumentDependencyCache *local_120;
  FSharedReferencer<1> local_118;
  FDocumentGraphInterfaceCache *local_110;
  FSharedReferencer<1> local_108;
  FDocumentCache *local_100;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_f8;
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> local_e8;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_d8;
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  TSharedRef<Metasound::Frontend::IDocumentCache,1> local_98;
  TSharedRef<Metasound::Frontend::FDocumentGraphInterfaceCache,1> local_88;
  code *local_78;
  ForAnyElementType FStack_70;
  code *local_68;
  FDocumentGraphInterfaceCache *pFStack_60;
  code *local_58;
  FMetasoundFrontendDocument *pFStack_50;
  
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentCache::Init");
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId102,"Metasound::Frontend::FDocumentCache::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x66);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId102);
  }
  if ((this->Document == (FMetasoundFrontendDocument *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Document",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                          ,0x67,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar9 = param_1->B;
  uVar10 = param_1->C;
  uVar11 = param_1->D;
  pTVar20 = (TReferenceControllerBase<1> *)0x0;
  (this->BuildPageID).A = param_1->A;
  (this->BuildPageID).B = uVar9;
  (this->BuildPageID).C = uVar10;
  (this->BuildPageID).D = uVar11;
  if (!param_2) goto LAB_14ae3e852;
  bVar12 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar12) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentCache::Init_Prime");
  }
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId108,"Metasound::Frontend::FDocumentCache::Init_Prime",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x6c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId108);
  }
  pTVar14 = TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
                      ((TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *)&this->_padding_,
                       &local_98);
  pTVar3 = (pTVar14->SharedReferenceCount).ReferenceController;
  pFVar4 = (FDocumentCache *)pTVar14->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar15 = (FMetasoundFrontendDocument *)(**(code **)(this->_padding_ + 0x38))(this);
  pTVar16 = ::operator_new(0x40);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
    pFVar22 = (FDocumentDependencyCache *)&DAT_00000010;
LAB_14ae3e5ef:
    if (((pFVar22->_padding_ == 0) || (pFVar22->_padding_ == 0)) ||
       (*(int *)(pFVar22->_padding_ + 8) < 1)) {
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22->_padding_ = (longlong)pFVar22;
      if (pTVar20 != (TReferenceControllerBase<1> *)pFVar22->_padding_) {
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->WeakReferenceCount = (atomic<int>)((int)pTVar20->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pFVar22->_padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pFVar22->_padding_ = (longlong)pTVar20;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    }
  }
  else {
    pTVar16->SharedReferenceCount = (atomic<int>)0x1;
    pTVar16->WeakReferenceCount = (atomic<int>)0x1;
    pTVar16->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFDocumentDependencyCache_FDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentDependencyCache::FDocumentDependencyCache
              ((FDocumentDependencyCache *)(pTVar16 + 1),pFVar15);
    pFVar22 = (FDocumentDependencyCache *)(pTVar16 + 1);
    pTVar20 = pTVar16;
    if (pFVar22 != (FDocumentDependencyCache *)0x0) goto LAB_14ae3e5ef;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_120 = pFVar22;
  local_118.ReferenceController = pTVar20;
  if (&this->DependencyCache !=
      (TSharedPtr<Metasound::Frontend::FDocumentCache::FDocumentDependencyCache,1> *)&local_120) {
    (this->DependencyCache).Object = pFVar22;
    local_120 = (FDocumentDependencyCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DependencyCache).SharedReferenceCount,&local_118);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  pTVar23 = &this->ModifyDelegates;
  pFVar6 = pTVar23->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar21 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar21 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  local_f8.Object = pFVar4;
  local_f8.SharedReferenceCount.ReferenceController = pTVar3;
  FDocumentGraphEdgeCache::Create(&local_e8,&local_f8,param_1,pFVar6);
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_128 = &this->ModifyDelegates;
  pTVar17 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphEdgeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
            ::AllocateMemoryForEmplace<FGuid_const_&>(&this->EdgeCacheMap,param_1);
  uVar9 = param_1->B;
  uVar10 = param_1->C;
  uVar11 = param_1->D;
  *(uint *)&pTVar17->field_0x0 = param_1->A;
  *(uint *)&pTVar17->field_0x4 = uVar9;
  *(uint *)&pTVar17->field_0x8 = uVar10;
  *(uint *)&pTVar17->field_0xc = uVar11;
  *(FDocumentGraphEdgeCache **)&pTVar17->field_0x10 = local_e8.Object;
  *(TReferenceControllerBase<1> **)&pTVar17->field_0x18 =
       local_e8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar6 = pTVar23->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
    pTVar23 = local_128;
  }
  local_d8.Object = pFVar4;
  local_d8.SharedReferenceCount.ReferenceController = pTVar3;
  FDocumentGraphNodeCache::Create(&local_c8,&local_d8,param_1,pFVar6);
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar18 = TSortedMap<FGuid,TSharedPtr<Metasound::Frontend::FDocumentGraphNodeCache,1>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
            ::AllocateMemoryForEmplace<FGuid_const_&>(&this->NodeCacheMap,param_1);
  uVar9 = param_1->B;
  uVar10 = param_1->C;
  uVar11 = param_1->D;
  *(uint *)&pTVar18->field_0x0 = param_1->A;
  *(uint *)&pTVar18->field_0x4 = uVar9;
  *(uint *)&pTVar18->field_0x8 = uVar10;
  *(uint *)&pTVar18->field_0xc = uVar11;
  *(FDocumentGraphNodeCache **)&pTVar18->field_0x10 = local_c8.Object;
  *(TReferenceControllerBase<1> **)&pTVar18->field_0x18 =
       local_c8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar6 = pTVar23->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138.Object = pFVar4;
  local_138.SharedReferenceCount.ReferenceController = pTVar3;
  pTVar19 = FDocumentGraphInterfaceCache::Create(&local_88,&local_138,&pFVar6->InterfaceDelegates);
  local_108.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
  local_110 = pTVar19->Object;
  if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->InterfaceCache !=
      (TSharedPtr<Metasound::Frontend::FDocumentGraphInterfaceCache,1> *)&local_110) {
    (this->InterfaceCache).Object = local_110;
    local_110 = (FDocumentGraphInterfaceCache *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InterfaceCache).SharedReferenceCount,&local_108);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
LAB_14ae3e852:
  local_138.Object = (FDocumentCache *)OnDependencyAdded;
  local_138.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_78 = OnDependencyAdded;
  FStack_70.Data = (FScriptContainerElement *)local_138.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &((this->ModifyDelegates).Object)->OnDependencyAdded,(FDocumentCache *)local_b8,
             (pmf_3c041b41 *)this);
  local_138.Object = (FDocumentCache *)OnRemoveSwappingDependency;
  local_138.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_68 = OnRemoveSwappingDependency;
  pFStack_60 = (FDocumentGraphInterfaceCache *)local_138.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &((this->ModifyDelegates).Object)->OnRemoveSwappingDependency,
             (FDocumentCache *)(local_b8 + 8),(pmf_4c7efad7 *)this);
  local_138.Object = (FDocumentCache *)OnRenamingDependencyClass;
  local_138.SharedReferenceCount.ReferenceController =
       local_138.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_58 = OnRenamingDependencyClass;
  pFStack_50 = (FMetasoundFrontendDocument *)local_138.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<Metasound::Frontend::FDocumentCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,FMetasoundFrontendClassName_const_&),FDefaultDelegateUserPolicy>
              *)&((this->ModifyDelegates).Object)->OnRenamingDependencyClass,
             (FDocumentCache *)((longlong)local_b8 + 0x10),(pmf_d4687218 *)this);
  local_100 = this;
  TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
  ::
  AddSPLambda<Metasound::Frontend::FDocumentCache,_Metasound::Frontend::FDocumentCache::Init_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(Metasound::Frontend::FDocumentMutatePageArgs_const_&),FDefaultDelegateUserPolicy>
              *)&(((this->ModifyDelegates).Object)->PageDelegates).OnRemovingPage,
             (FDocumentCache *)local_a0,(<lambda_1> *)this);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// OnDependencyAdded @ 14ae40490

void __thiscall
Metasound::Frontend::FDocumentCache::OnDependencyAdded(FDocumentCache *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  FDocumentDependencyCache *pFVar5;
  TTuple<FGuid,int> *pTVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res10 [2];
  FNodeClassRegistryKey local_38;
  
  local_res10[0] = param_1;
  lVar4 = (**(code **)(this->_padding_ + 0x38))();
  lVar8 = (longlong)(int)local_res10[0];
  uVar7 = 0;
  if ((int)local_res10[0] < *(int *)(lVar4 + 0x180)) {
    uVar7 = ~local_res10[0] >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x178) + lVar8 * 0x90;
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_38,(FMetasoundFrontendClassMetadata *)(lVar4 + 0x18));
  pFVar5 = GetDependencyCache(this);
  TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
  ::Emplace<Metasound::Frontend::FNodeClassRegistryKey_const_&,int_const_&>
            (&pFVar5->KeyToIndex,&local_38,(int *)local_res10);
  pTVar6 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::
           AllocateMemoryForEmplace<FGuid_const_&>(&pFVar5->IDToIndex,(FGuid *)(lVar4 + 8));
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)pTVar6 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)&pTVar6->field_0x8 = uVar2;
  *(uint *)&pTVar6->field_0x10 = local_res10[0];
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnRemoveSwappingDependency @ 14ae40df0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FDocumentCache::OnRemoveSwappingDependency
          (FDocumentCache *this,int param_1,int param_2)

{
  TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FDocumentDependencyCache *pFVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined4 local_res10;
  FNodeClassRegistryKey local_88;
  FNodeClassRegistryKey local_60;
  
  lVar4 = (**(code **)(this->_padding_ + 0x38))();
  pFVar13 = (FScriptContainerElement *)0x0;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar4 + 0x180)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = (longlong)param_1 * 0x90 + *(longlong *)(lVar4 + 0x178);
  uVar6 = 0;
  if (param_2 < *(int *)(lVar4 + 0x180)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar4 = (longlong)param_2 * 0x90 + *(longlong *)(lVar4 + 0x178);
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_88,(FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_60,(FMetasoundFrontendClassMetadata *)(lVar4 + 0x18));
  pFVar5 = GetDependencyCache(this);
  uVar6 = (pFVar5->KeyToIndex).Pairs.ArrayNum;
  iVar9 = 0;
  pFVar1 = (pFVar5->KeyToIndex).Pairs.AllocatorInstance.Data;
  local_res10 = 0xffffffff;
  this_00 = &pFVar5->KeyToIndex;
  pFVar10 = pFVar13;
  iVar7 = iVar9;
  uVar11 = uVar6;
  if (0 < (int)uVar6) {
    do {
      uVar12 = uVar11 >> 1;
      iVar7 = uVar12 + (int)pFVar10;
      bVar3 = Frontend::operator<((FNodeClassRegistryKey *)(pFVar1 + (longlong)iVar7 * 0x28),
                                  &local_88);
      if (bVar3) {
        pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar7 + (uVar11 & 1));
      }
      iVar7 = (int)pFVar10;
      uVar11 = uVar12;
    } while (uVar12 != 0);
  }
  if (iVar7 < (int)uVar6) {
    bVar3 = Frontend::operator<(&local_88,(FNodeClassRegistryKey *)(pFVar1 + (longlong)iVar7 * 0x28)
                               );
    if ((bVar3) || (iVar7 == -1)) goto LAB_14ae40fdf;
    if ((iVar7 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10 = *(undefined4 *)
                   ((this_00->Pairs).AllocatorInstance.Data + (longlong)iVar7 * 0x28 + 0x24);
    TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
    RemoveAt(&this_00->Pairs,iVar7,Default);
  }
  else {
LAB_14ae40fdf:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRemoved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                       ,0x1a,
                       L"Failed to remove/swap expected MetaSound Document Cache key/value pair");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((((local_60.Type == local_88.Type) &&
        (local_60.ClassName.Namespace == local_88.ClassName.Namespace)) &&
       (local_60.ClassName.Name == local_88.ClassName.Name)) &&
      ((local_60.ClassName.Variant == local_88.ClassName.Variant &&
       (local_60.Version.Major == local_88.Version.Major)))) &&
     (local_60.Version.Minor == local_88.Version.Minor)) goto LAB_14ae4113c;
  uVar6 = (pFVar5->KeyToIndex).Pairs.ArrayNum;
  pFVar1 = (this_00->Pairs).AllocatorInstance.Data;
  pFVar10 = pFVar13;
  uVar11 = uVar6;
  if (0 < (int)uVar6) {
    do {
      uVar12 = uVar11 >> 1;
      iVar7 = uVar12 + (int)pFVar10;
      bVar3 = Frontend::operator<((FNodeClassRegistryKey *)(pFVar1 + (longlong)iVar7 * 0x28),
                                  &local_60);
      if (bVar3) {
        pFVar10 = (FScriptContainerElement *)(ulonglong)(iVar7 + (uVar11 & 1));
      }
      iVar9 = (int)pFVar10;
      uVar11 = uVar12;
    } while (uVar12 != 0);
  }
  if (iVar9 < (int)uVar6) {
    bVar3 = Frontend::operator<(&local_60,(FNodeClassRegistryKey *)(pFVar1 + (longlong)iVar9 * 0x28)
                               );
    if ((bVar3) || (iVar9 == -1)) goto LAB_14ae4110c;
    if ((iVar9 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar13 = (this_00->Pairs).AllocatorInstance.Data + (longlong)iVar9 * 0x28 + 0x24;
    if (pFVar13 == (FScriptContainerElement *)0x0) goto LAB_14ae4110c;
  }
  else {
LAB_14ae4110c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x141,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)pFVar13 = local_res10;
LAB_14ae4113c:
  DocumentCachePrivate::
  RemoveSwapMapIndexChecked<TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>
            ((FGuid *)(lVar8 + 8),(FGuid *)(lVar4 + 8),&pFVar5->IDToIndex);
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnRenamingDependencyClass @ 14ae41730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FDocumentCache::OnRenamingDependencyClass
          (FDocumentCache *this,int param_1,FMetasoundFrontendClassName *param_2)

{
  TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
  *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  FDocumentDependencyCache *pFVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint local_res10 [2];
  FMetasoundFrontendClassMetadata local_b8;
  FNodeClassRegistryKey local_80;
  FNodeClassRegistryKey local_58;
  
  local_res10[0] = param_1;
  lVar6 = (**(code **)(this->_padding_ + 0x38))();
  lVar10 = (longlong)(int)local_res10[0];
  iVar8 = 0;
  uVar11 = 0;
  if ((int)local_res10[0] < *(int *)(lVar6 + 0x180)) {
    uVar11 = ~local_res10[0] >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = lVar10 * 0x90 + *(longlong *)(lVar6 + 0x178);
  FNodeClassRegistryKey::FNodeClassRegistryKey
            (&local_80,(FMetasoundFrontendClassMetadata *)(lVar6 + 0x18));
  local_b8.ClassName.Namespace = *(FName *)(lVar6 + 0x18);
  local_b8.ClassName.Name = *(FName *)(lVar6 + 0x20);
  local_b8.ClassName.Variant = *(FName *)(lVar6 + 0x28);
  local_b8.Version = *(FMetasoundFrontendVersionNumber *)(lVar6 + 0x30);
  local_b8._32_8_ = *(undefined8 *)(lVar6 + 0x38);
  local_b8.ChangeID._4_8_ = *(undefined8 *)(lVar6 + 0x40);
  local_b8.ChangeID.D = *(uint *)(lVar6 + 0x48);
  FMetasoundFrontendClassMetadata::SetClassName(&local_b8,param_2);
  FNodeClassRegistryKey::FNodeClassRegistryKey(&local_58,&local_b8);
  pFVar7 = GetDependencyCache(this);
  this_00 = &pFVar7->KeyToIndex;
  TSortedMap<Metasound::Frontend::FNodeClassRegistryKey,int,TSizedDefaultAllocator<32>,TLess<Metasound::Frontend::FNodeClassRegistryKey_const_&>_>
  ::Emplace<Metasound::Frontend::FNodeClassRegistryKey_const_&,int_const_&>
            (this_00,&local_58,(int *)local_res10);
  uVar11 = (pFVar7->KeyToIndex).Pairs.ArrayNum;
  pFVar2 = (this_00->Pairs).AllocatorInstance.Data;
  iVar9 = 0;
  if (0 < (int)uVar11) {
    do {
      iVar1 = (uVar11 >> 1) + iVar9;
      bVar5 = Frontend::operator<((FNodeClassRegistryKey *)(pFVar2 + (longlong)iVar1 * 0x28),
                                  &local_80);
      iVar8 = iVar9;
      if (bVar5) {
        iVar8 = iVar1 + (uVar11 & 1);
      }
      uVar4 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
      iVar9 = iVar8;
    } while (uVar4 != 0);
  }
  if (iVar8 < (pFVar7->KeyToIndex).Pairs.ArrayNum) {
    bVar5 = Frontend::operator<(&local_80,(FNodeClassRegistryKey *)(pFVar2 + (longlong)iVar8 * 0x28)
                               );
    if ((!bVar5) && (iVar8 != -1)) {
      TArray<TTuple<Metasound::Frontend::FNodeClassRegistryKey,int>,TSizedDefaultAllocator<32>_>::
      RemoveAt(&this_00->Pairs,iVar8,Default);
    }
  }
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

