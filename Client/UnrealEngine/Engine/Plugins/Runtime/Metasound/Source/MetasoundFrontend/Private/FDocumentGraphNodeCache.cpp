// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 25

// FDocumentGraphNodeCache @ 14ae1b560

FDocumentGraphNodeCache * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FDocumentGraphNodeCache
          (FDocumentGraphNodeCache *this,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1,FGuid *param_2)

{
  FGuid *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FMetasoundFrontendGraph *pFVar10;
  FDocumentGraphNodeCache *pFVar11;
  TTuple<FGuid,int> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FGuid *pFVar17;
  uint local_38 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentGraphNodeCache_Frontend_Metasound__6B_;
  (this->IDToIndex).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToIndex).Pairs.ArrayNum = 0;
  (this->IDToIndex).Pairs.ArrayMax = 0;
  (this->ClassIDToNodeIndices).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassIDToNodeIndices).Pairs.ArrayNum = 0;
  (this->ClassIDToNodeIndices).Pairs.ArrayMax = 0;
  (this->Parent).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Parent).WeakReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar7 = param_2->A;
  uVar16 = param_2->B;
  uVar4 = param_2->C;
  uVar5 = param_2->D;
  this->TransactionCount = 0;
  (this->PageID).A = uVar7;
  (this->PageID).B = uVar16;
  (this->PageID).C = uVar4;
  (this->PageID).D = uVar5;
  lVar9 = (**(code **)(param_1->Object->_padding_ + 0x38))();
  pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                      ((FMetasoundFrontendGraphClass *)(lVar9 + 0x70),param_2);
  local_38[0] = 0;
  iVar8 = (pFVar10->Nodes).ArrayNum;
  pFVar15 = (FScriptContainerElement *)0x0;
  if (0 < iVar8) {
    do {
      uVar16 = (uint)pFVar15;
      uVar7 = 0;
      if ((int)uVar16 < iVar8) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FDocumentGraphNodeCache *)(*pcVar3)();
        return pFVar11;
      }
      pFVar17 = (FGuid *)((pFVar10->Nodes).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x88);
      pFVar1 = pFVar17 + 1;
      lVar9 = (**(code **)(param_1->Object->_padding_ + 0x18))(param_1->Object,pFVar1);
      if ((lVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Class",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                             ,0x24d,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FDocumentGraphNodeCache *)(*pcVar3)();
        return pFVar11;
      }
      pTVar12 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::
                AllocateMemoryForEmplace<FGuid_const_&>(&this->IDToIndex,pFVar17);
      uVar7 = pFVar17->B;
      uVar16 = pFVar17->C;
      uVar4 = pFVar17->D;
      *(uint *)&pTVar12->field_0x0 = pFVar17->A;
      *(uint *)&pTVar12->field_0x4 = uVar7;
      *(uint *)&pTVar12->field_0x8 = uVar16;
      *(uint *)&pTVar12->field_0xc = uVar4;
      *(uint *)&pTVar12->field_0x10 = local_38[0];
      pTVar13 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
                ::Find(&this->ClassIDToNodeIndices,pFVar1);
      if (pTVar13 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar14 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
                  ::AllocateMemoryForEmplace<FGuid_const_&>(&this->ClassIDToNodeIndices,pFVar1);
        uVar7 = pFVar1->B;
        uVar16 = pFVar17[1].C;
        uVar4 = pFVar17[1].D;
        *(uint *)&pTVar14->field_0x0 = pFVar1->A;
        *(uint *)&pTVar14->field_0x4 = uVar7;
        *(uint *)&pTVar14->field_0x8 = uVar16;
        *(uint *)&pTVar14->field_0xc = uVar4;
        pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar14->field_0x10;
        *(undefined8 *)pTVar13 = 0;
        *(undefined8 *)&pTVar14->field_0x18 = 0;
        pFVar15 = (FScriptContainerElement *)0x0;
      }
      else {
        pFVar15 = (pTVar13->AllocatorInstance).Data;
      }
      if (((pFVar15 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar15 + (longlong)pTVar13->ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FDocumentGraphNodeCache *)(*pcVar3)();
        return pFVar11;
      }
      iVar8 = pTVar13->ArrayNum;
      if (iVar8 == pTVar13->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
      }
      pTVar13->ArrayNum = iVar8 + 1;
      *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38[0];
      iVar8 = (pFVar10->Nodes).ArrayNum;
      local_38[0] = local_38[0] + 1;
      pFVar15 = (FScriptContainerElement *)(ulonglong)local_38[0];
    } while ((int)local_38[0] < iVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FDocumentGraphNodeCache @ 14ae1b7d0

FDocumentGraphNodeCache * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FDocumentGraphNodeCache(FDocumentGraphNodeCache *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDocumentGraphNodeCache *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FDocumentCache *pFVar9;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentGraphNodeCache_Frontend_Metasound__6B_;
  (this->IDToIndex).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IDToIndex).Pairs.ArrayNum = 0;
  (this->IDToIndex).Pairs.ArrayMax = 0;
  (this->ClassIDToNodeIndices).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassIDToNodeIndices).Pairs.ArrayNum = 0;
  (this->ClassIDToNodeIndices).Pairs.ArrayMax = 0;
  pTVar6 = ::operator_new(0x98);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FDocumentCache *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentCache::FDocumentCache((FDocumentCache *)(pTVar6 + 1));
    pFVar9 = (FDocumentCache *)(pTVar6 + 1);
    pTVar8 = pTVar6;
    if (pFVar9 == (FDocumentCache *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FDocumentGraphNodeCache *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_14ae1b8e9;
    }
  }
  if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
     (*(int *)(pFVar9->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar9->_padding_;
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
      pFVar9->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ae1b8e9:
  (this->Parent).Object = pFVar9;
  (this->Parent).WeakReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  (this->PageID).A = 0;
  (this->PageID).B = 0;
  (this->PageID).C = 0;
  (this->PageID).D = 0;
  this->TransactionCount = 0;
  return this;
}

// ~FDocumentGraphNodeCache @ 14ae1d720

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::~FDocumentGraphNodeCache
          (FDocumentGraphNodeCache *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  pTVar5 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *)
             (this->ClassIDToNodeIndices).Pairs.AllocatorInstance.Data,
             (this->ClassIDToNodeIndices).Pairs.ArrayNum);
  pFVar6 = (this->ClassIDToNodeIndices).Pairs.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->IDToIndex).Pairs.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// ContainsNode @ 14ae27690

bool __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::ContainsNode
          (FDocumentGraphNodeCache *this,FGuid *param_1)

{
  int *piVar1;
  
  piVar1 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                     (&this->IDToIndex,param_1);
  return piVar1 != (int *)0x0;
}

// ContainsNodesOfClassID @ 14ae278f0

bool __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::ContainsNodesOfClassID
          (FDocumentGraphNodeCache *this,FGuid *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&this->ClassIDToNodeIndices,param_1);
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    return pTVar1->ArrayNum != 0;
  }
  return false;
}

// Create @ 14ae292f0

TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> * __cdecl
Metasound::Frontend::FDocumentGraphNodeCache::Create
          (TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *__return_storage_ptr__,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1,FGuid *param_2,
          FDocumentModifyDelegates *param_3)

{
  FDocumentGraphNodeCache *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraphModifyDelegates *pFVar6;
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *pTVar7;
  bool bVar8;
  undefined1 local_98 [24];
  ForAnyElementType FStack_80;
  code *local_78;
  ForAnyElementType FStack_70;
  code *local_68;
  FDocumentCache *pFStack_60;
  code *local_58;
  FScriptContainerElement *pFStack_50;
  code *local_48;
  FScriptContainerElement *pFStack_40;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentGraphNodeCache::Create");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId604,"Metasound::Frontend::FDocumentGraphNodeCache::Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x25c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId604);
  }
  pTVar5 = ::operator_new(0x70);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentGraphNodeCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    local_98._16_8_ = param_1->Object;
    FStack_80.Data = (FScriptContainerElement *)(param_1->SharedReferenceCount).ReferenceController;
    if ((TReferenceControllerBase<1> *)FStack_80.Data != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)FStack_80.Data)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)FStack_80.Data)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDocumentGraphNodeCache
              ((FDocumentGraphNodeCache *)(pTVar5 + 1),
               (TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *)(local_98 + 0x10),param_2
              );
  }
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1>::
  TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1>
            (__return_storage_ptr__,(FDocumentGraphNodeCache *)(pTVar5 + 1),pTVar5);
  pFVar1 = __return_storage_ptr__->Object;
  pFVar6 = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
           ::Find(&param_3->GraphDelegates,param_2);
  if ((pFVar6 == (FGraphModifyDelegates *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedRef<Metasound::Frontend::FDocumentGraphNodeCache,1> *)(*pcVar3)();
    return pTVar7;
  }
  local_98._16_8_ = OnNodeAdded;
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  local_78 = OnNodeAdded;
  FStack_70.Data = FStack_80.Data;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &pFVar6->NodeDelegates,(FDocumentGraphNodeCache *)&stack0x00000008,
             (pmf_d3bfe7c7 *)pFVar1);
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  local_98._16_8_ = OnNodeInputLiteralSet;
  local_68 = OnNodeInputLiteralSet;
  pFStack_60 = (FDocumentCache *)FStack_80.Data;
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&(pFVar6->NodeDelegates).OnNodeInputLiteralSet,
             (FDocumentGraphNodeCache *)&stack0x00000010,(pmf_a1afa329 *)pFVar1);
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  local_98._16_8_ = OnRemoveSwappingNode;
  local_58 = OnRemoveSwappingNode;
  pFStack_50 = FStack_80.Data;
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &(pFVar6->NodeDelegates).OnRemoveSwappingNode,
             (FDocumentGraphNodeCache *)&stack0x00000020,(pmf_f085649b *)pFVar1);
  FStack_80.Data = FStack_80.Data & 0xffffffff00000000;
  local_98._16_8_ = OnRemovingNodeInputLiteral;
  local_48 = OnRemovingNodeInputLiteral;
  pFStack_40 = FStack_80.Data;
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&(pFVar6->NodeDelegates).OnRemovingNodeInputLiteral,
             (FDocumentGraphNodeCache *)local_98,(pmf_a1afa329 *)pFVar1);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindInputVertex @ 14ae33a80

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindInputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FGuid *param_2)

{
  longlong lVar1;
  FMetasoundFrontendVertex *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (lVar1 != 0) {
    pFVar2 = *(FMetasoundFrontendVertex **)(lVar1 + 0x28);
    pFVar3 = pFVar2 + *(int *)(lVar1 + 0x30);
    if (pFVar2 != pFVar3) {
      do {
        if (((param_2->D == (pFVar2->VertexID).D && param_2->C == (pFVar2->VertexID).C) &&
            param_2->B == (pFVar2->VertexID).B) && param_2->A == (pFVar2->VertexID).A) {
          return pFVar2;
        }
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// FindInputVertex @ 14ae33b00

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindInputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FName param_2)

{
  longlong lVar1;
  FMetasoundFrontendVertex *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (lVar1 != 0) {
    pFVar2 = *(FMetasoundFrontendVertex **)(lVar1 + 0x28);
    pFVar3 = pFVar2 + *(int *)(lVar1 + 0x30);
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if (pFVar2->Name == param_2) {
        return pFVar2;
      }
    }
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// FindNode @ 14ae33cc0

FMetasoundFrontendNode * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindNode(FDocumentGraphNodeCache *this,FGuid *param_1)

{
  uint uVar1;
  FDocumentCache *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint *puVar7;
  longlong lVar8;
  FMetasoundFrontendGraph *pFVar9;
  FMetasoundFrontendNode *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  
  puVar7 = (uint *)TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                             (&this->IDToIndex,param_1);
  if (puVar7 != (uint *)0x0) {
    pTVar12 = (this->Parent).WeakReferenceCount.ReferenceController;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar12->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ae33d05;
        }
        LOCK();
        aVar6 = pTVar12->SharedReferenceCount;
        bVar13 = aVar5 == aVar6;
        if (bVar13) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar13);
      pFVar2 = (this->Parent).Object;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x38))();
        pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                           ((FMetasoundFrontendGraphClass *)(lVar8 + 0x70),&this->PageID);
        uVar1 = *puVar7;
        uVar11 = 0;
        if ((int)uVar1 < (pFVar9->Nodes).ArrayNum) {
          uVar11 = ~uVar1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FMetasoundFrontendNode *)(*pcVar4)();
          return pFVar10;
        }
        pFVar3 = (pFVar9->Nodes).AllocatorInstance.Data;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        return (FMetasoundFrontendNode *)(pFVar3 + (longlong)(int)uVar1 * 0x88);
      }
    }
LAB_14ae33d05:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return (FMetasoundFrontendNode *)0x0;
}

// FindNodeIndex @ 14ae33e20

int * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindNodeIndex
          (FDocumentGraphNodeCache *this,FGuid *param_1)

{
  int *piVar1;
  
  piVar1 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::Find
                     (&this->IDToIndex,param_1);
  return piVar1;
}

// FindNodeInputs @ 14ae33e30

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindNodeInputs
          (FDocumentGraphNodeCache *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar6 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(lVar6 + 0x28);
    iVar1 = *(int *)(lVar6 + 0x30);
    lVar8 = (longlong)iVar1 * 0x20 + lVar9;
    while( true ) {
      if (*(int *)(lVar6 + 0x30) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar9 == lVar8) break;
      if ((param_2 == (FName)0x0) || (*(FName *)(lVar9 + 8) == param_2)) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = lVar9;
        if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
           (((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_38[0];
      }
      lVar9 = lVar9 + 0x20;
    }
  }
  return __return_storage_ptr__;
}

// FindNodeOutputs @ 14ae33f90

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindNodeOutputs
          (FDocumentGraphNodeCache *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar6 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
  if (lVar6 != 0) {
    lVar9 = *(longlong *)(lVar6 + 0x38);
    iVar1 = *(int *)(lVar6 + 0x40);
    lVar8 = (longlong)iVar1 * 0x20 + lVar9;
    while( true ) {
      if (*(int *)(lVar6 + 0x40) != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar9 == lVar8) break;
      if ((param_2 == (FName)0x0) || (*(FName *)(lVar9 + 8) == param_2)) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = lVar9;
        if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
           (((FScriptContainerElement *)local_38 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_38[0];
      }
      lVar9 = lVar9 + 0x20;
    }
  }
  return __return_storage_ptr__;
}

// FindNodesOfClassID @ 14ae340f0

TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindNodesOfClassID
          (FDocumentGraphNodeCache *this,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FGuid *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDocumentCache *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  uint uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  FMetasoundFrontendGraph *pFVar13;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar11 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
            ::Find(&this->ClassIDToNodeIndices,param_1);
  if (pTVar11 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (this->Parent).WeakReferenceCount.ReferenceController;
    pTVar15 = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar3->SharedReferenceCount;
      do {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14ae34152;
        LOCK();
        aVar8 = pTVar3->SharedReferenceCount;
        bVar17 = aVar7 == aVar8;
        if (bVar17) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar8 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar8;
      } while (!bVar17);
      pFVar4 = (this->Parent).Object;
      pTVar15 = pTVar3;
      if (pFVar4 != (FDocumentCache *)0x0) {
        lVar12 = (**(code **)(pFVar4->_padding_ + 0x38))();
        pFVar13 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                            ((FMetasoundFrontendGraphClass *)(lVar12 + 0x70),&this->PageID);
        pFVar16 = (pTVar11->AllocatorInstance).Data;
        iVar1 = pTVar11->ArrayNum;
        local_res10 = pFVar16 + (longlong)iVar1 * 4;
        while( true ) {
          pFVar5 = local_res10;
          if (pTVar11->ArrayNum != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar16 == pFVar5) break;
          uVar2 = *(uint *)pFVar16;
          uVar9 = 0;
          if ((int)uVar2 < (pFVar13->Nodes).ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            pTVar14 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar6)();
            return pTVar14;
          }
          local_48[0] = (pFVar13->Nodes).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x88;
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 <
               pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            pTVar14 = (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar6)();
            return pTVar14;
          }
          iVar10 = __return_storage_ptr__->ArrayNum;
          if (iVar10 == __return_storage_ptr__->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar10 + 1;
          pFVar16 = pFVar16 + 4;
          *(FScriptContainerElement **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48[0];
        }
      }
    }
LAB_14ae34152:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  return __return_storage_ptr__;
}

// FindOutputVertex @ 14ae358b0

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindOutputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FGuid *param_2)

{
  longlong lVar1;
  FMetasoundFrontendVertex *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (lVar1 != 0) {
    pFVar2 = *(FMetasoundFrontendVertex **)(lVar1 + 0x38);
    pFVar3 = pFVar2 + *(int *)(lVar1 + 0x40);
    if (pFVar2 != pFVar3) {
      do {
        if (((param_2->D == (pFVar2->VertexID).D && param_2->C == (pFVar2->VertexID).C) &&
            param_2->B == (pFVar2->VertexID).B) && param_2->A == (pFVar2->VertexID).A) {
          return pFVar2;
        }
        pFVar2 = pFVar2 + 1;
      } while (pFVar2 != pFVar3);
    }
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// FindOutputVertex @ 14ae35930

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindOutputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FName param_2)

{
  longlong lVar1;
  FMetasoundFrontendVertex *pFVar2;
  FMetasoundFrontendVertex *pFVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (lVar1 != 0) {
    pFVar2 = *(FMetasoundFrontendVertex **)(lVar1 + 0x38);
    pFVar3 = pFVar2 + *(int *)(lVar1 + 0x40);
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if (pFVar2->Name == param_2) {
        return pFVar2;
      }
    }
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// FindReroutedInputVertices @ 14ae35980

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindReroutedInputVertices
          (FDocumentGraphNodeCache *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FGuid *param_2,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentCache *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FMetasoundFrontendGraph *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  uint *puVar18;
  bool bVar19;
  longlong local_a8;
  longlong local_a0;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_98;
  FMetasoundFrontendGraphClass *local_88;
  TReferenceControllerBase<1> *local_80;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_78;
  uint *local_68;
  int local_60;
  void *local_58 [2];
  FScriptContainerElement *local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_a8 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
  if (local_a8 != 0) {
    pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController;
    pTVar17 = pTVar1;
    local_80 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar1->SharedReferenceCount;
      do {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14ae35a02;
        LOCK();
        aVar5 = pTVar1->SharedReferenceCount;
        bVar19 = aVar4 == aVar5;
        if (bVar19) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar19);
      pFVar2 = (this->Parent).Object;
      pTVar17 = pTVar1;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar9 = (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,local_a8 + 0x10);
        if ((lVar9 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                                ,0x2f1,L""), bVar19)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar10;
        }
        if (((*(FName *)(lVar9 + 0x18) == FRerouteNodeTemplate::ClassName.Namespace) &&
            (*(FName *)(lVar9 + 0x20) == FRerouteNodeTemplate::ClassName.Name)) &&
           (*(FName *)(lVar9 + 0x28) == FRerouteNodeTemplate::ClassName.Variant)) {
          if (param_4 != (bool *)0x0) {
            *param_4 = true;
          }
          plVar11 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&this->PageID);
          lVar9 = local_a8;
          uVar14 = *(int *)(local_a8 + 0x40) - 1;
          uVar6 = 0;
          if ((int)uVar14 < *(int *)(local_a8 + 0x40)) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          (**(code **)(*plVar11 + 0x30))
                    (plVar11,&local_68,param_1,
                     *(longlong *)(lVar9 + 0x38) + 0x10 +
                     (longlong)(*(int *)(lVar9 + 0x40) + -1) * 0x20);
          lVar9 = (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2);
          if (local_68 != local_68 + local_60) {
            local_88 = (FMetasoundFrontendGraphClass *)(lVar9 + 0x70);
            puVar18 = local_68;
            do {
              uVar6 = *puVar18;
              pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked(local_88,&this->PageID);
              uVar14 = 0;
              if ((int)uVar6 < (pFVar12->Edges).ArrayNum) {
                uVar14 = ~uVar6 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar10;
              }
              pFVar15 = (pFVar12->Edges).AllocatorInstance.Data;
              _Src = (FScriptContainerElement *)0x0;
              iVar8 = 0;
              pFVar16 = pFVar15 + (longlong)(int)uVar6 * 0x40 + 0x30;
              pFVar15 = pFVar15 + (longlong)(int)uVar6 * 0x40 + 0x20;
              pcVar3 = *(code **)(this->_padding_ + 0x68);
              if (param_3 ==
                  (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)(this,local_48,pFVar15,pFVar16,0,param_4);
                FVar13.Data = local_48[0];
                if (&local_78 != pTVar10) {
                  _Src = (pTVar10->AllocatorInstance).Data;
                  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  iVar8 = pTVar10->ArrayNum;
                  pTVar10->ArrayNum = 0;
                  pTVar10->ArrayMax = 0;
                }
              }
              else {
                local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_98.ArrayNum = 0;
                local_98.ArrayMax = 0;
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)(this,local_58,pFVar15,pFVar16,&local_98,param_4);
                if (&local_78 != pTVar10) {
                  _Src = (pTVar10->AllocatorInstance).Data;
                  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  iVar8 = pTVar10->ArrayNum;
                  pTVar10->ArrayNum = 0;
                  pTVar10->ArrayMax = 0;
                }
                if (local_58[0] != (void *)0x0) {
                  FMemory::Free(local_58[0]);
                }
                if ((param_3 == &local_98) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)this != (void*)&Source",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x96e,L""), bVar19)) {
                  pcVar3 = (code *)swi(3);
                  pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                            (*pcVar3)();
                  return pTVar10;
                }
                lVar9 = (longlong)local_98.ArrayNum;
                FVar13.Data = local_98.AllocatorInstance.Data;
                if (local_98.ArrayNum != 0) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,local_98.ArrayNum,&param_3->AllocatorInstance,
                                     &param_3->ArrayNum,&param_3->ArrayMax);
                  memcpy((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8,
                         local_98.AllocatorInstance.Data,lVar9 << 3);
                  FVar13.Data = local_98.AllocatorInstance.Data;
                }
              }
              if (FVar13.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar13.Data);
              }
              if ((__return_storage_ptr__ == &local_78) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x986,L""), bVar19)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar10;
              }
              if (iVar8 != 0) {
                iVar7 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,iVar8,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayNum,
                                   &__return_storage_ptr__->ArrayMax);
                memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,_Src,
                        (longlong)iVar8 << 3);
              }
              if (_Src != (FScriptContainerElement *)0x0) {
                FMemory::Free(_Src);
              }
              puVar18 = puVar18 + 1;
              pTVar17 = local_80;
            } while (puVar18 != local_68 + local_60);
          }
        }
        else {
          local_a0 = *(longlong *)(local_a8 + 0x28);
          lVar9 = (longlong)*(int *)(local_a8 + 0x30) * 0x20 + local_a0;
          if (local_a0 != lVar9) {
            do {
              if (((param_2->A == *(uint *)(local_a0 + 0x10) &&
                   param_2->D == *(uint *)(local_a0 + 0x1c)) &&
                  param_2->C == *(uint *)(local_a0 + 0x18)) &&
                  param_2->B == *(uint *)(local_a0 + 0x14)) {
                if (local_a0 == 0) goto LAB_14ae35df4;
                goto LAB_14ae35e1a;
              }
              local_a0 = local_a0 + 0x20;
            } while (local_a0 != lVar9);
          }
          local_a0 = 0;
LAB_14ae35df4:
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("InputVertex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                              ,0x315,L"");
          if (bVar19) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
LAB_14ae35e1a:
          pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_a0) &&
              ((FScriptContainerElement *)&local_a0 <
               pFVar15 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_a0;
          if (param_3 != (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)0x0)
          {
            pFVar15 = (param_3->AllocatorInstance).Data;
            if (((pFVar15 <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < pFVar15 + (longlong)param_3->ArrayMax * 8))
               && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar19)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar10;
            }
            iVar8 = param_3->ArrayNum;
            if (iVar8 == param_3->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar8 + 1;
            *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
          }
        }
      }
    }
LAB_14ae35a02:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  return __return_storage_ptr__;
}

// FindReroutedInputVertices @ 14ae35f80

TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindReroutedInputVertices
          (FDocumentGraphNodeCache *this,
          TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2,
          TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *param_3,bool *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FDocumentCache *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FMetasoundFrontendGraph *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FName *pFVar15;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  uint *puVar19;
  bool bVar20;
  longlong local_a8;
  FName *local_a0;
  TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> local_98;
  FMetasoundFrontendGraphClass *local_88;
  TReferenceControllerBase<1> *local_80;
  TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> local_78;
  uint *local_68;
  int local_60;
  void *local_58 [2];
  FScriptContainerElement *local_48 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_a8 = (**(code **)(this->_padding_ + 0x28))(this,param_1);
  if (local_a8 != 0) {
    pTVar1 = (this->Parent).WeakReferenceCount.ReferenceController;
    pTVar18 = pTVar1;
    local_80 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar1->SharedReferenceCount;
      do {
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14ae36002;
        LOCK();
        aVar5 = pTVar1->SharedReferenceCount;
        bVar20 = aVar4 == aVar5;
        if (bVar20) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar20);
      pFVar2 = (this->Parent).Object;
      pTVar18 = pTVar1;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar9 = (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,local_a8 + 0x10);
        if ((lVar9 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                                ,0x32b,L""), bVar20)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar10;
        }
        if (((*(FName *)(lVar9 + 0x18) == FRerouteNodeTemplate::ClassName.Namespace) &&
            (*(FName *)(lVar9 + 0x20) == FRerouteNodeTemplate::ClassName.Name)) &&
           (*(FName *)(lVar9 + 0x28) == FRerouteNodeTemplate::ClassName.Variant)) {
          if (param_4 != (bool *)0x0) {
            *param_4 = true;
          }
          plVar11 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&this->PageID);
          lVar9 = local_a8;
          uVar14 = *(int *)(local_a8 + 0x40) - 1;
          uVar6 = 0;
          if ((int)uVar14 < *(int *)(local_a8 + 0x40)) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          (**(code **)(*plVar11 + 0x30))
                    (plVar11,&local_68,param_1,
                     *(longlong *)(lVar9 + 0x38) + 0x10 +
                     (longlong)(*(int *)(lVar9 + 0x40) + -1) * 0x20);
          lVar9 = (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2);
          if (local_68 != local_68 + local_60) {
            local_88 = (FMetasoundFrontendGraphClass *)(lVar9 + 0x70);
            puVar19 = local_68;
            do {
              uVar6 = *puVar19;
              pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked(local_88,&this->PageID);
              uVar14 = 0;
              if ((int)uVar6 < (pFVar12->Edges).ArrayNum) {
                uVar14 = ~uVar6 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar10;
              }
              pFVar16 = (pFVar12->Edges).AllocatorInstance.Data;
              _Src = (FScriptContainerElement *)0x0;
              iVar8 = 0;
              pFVar17 = pFVar16 + (longlong)(int)uVar6 * 0x40 + 0x30;
              pFVar16 = pFVar16 + (longlong)(int)uVar6 * 0x40 + 0x20;
              pcVar3 = *(code **)(this->_padding_ + 0x68);
              if (param_3 ==
                  (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)(this,local_48,pFVar16,pFVar17,0,param_4);
                FVar13.Data = local_48[0];
                if (&local_78 != pTVar10) {
                  _Src = (pTVar10->AllocatorInstance).Data;
                  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  iVar8 = pTVar10->ArrayNum;
                  pTVar10->ArrayNum = 0;
                  pTVar10->ArrayMax = 0;
                }
              }
              else {
                local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_98.ArrayNum = 0;
                local_98.ArrayMax = 0;
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)(this,local_58,pFVar16,pFVar17,&local_98,param_4);
                if (&local_78 != pTVar10) {
                  _Src = (pTVar10->AllocatorInstance).Data;
                  (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                  iVar8 = pTVar10->ArrayNum;
                  pTVar10->ArrayNum = 0;
                  pTVar10->ArrayMax = 0;
                }
                if (local_58[0] != (void *)0x0) {
                  FMemory::Free(local_58[0]);
                }
                if ((param_3 == &local_98) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)this != (void*)&Source",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x986,L""), bVar20)) {
                  pcVar3 = (code *)swi(3);
                  pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                            (*pcVar3)();
                  return pTVar10;
                }
                lVar9 = (longlong)local_98.ArrayNum;
                FVar13.Data = local_98.AllocatorInstance.Data;
                if (local_98.ArrayNum != 0) {
                  iVar7 = UE::Core::Private::
                          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (8,8,local_98.ArrayNum,&param_3->AllocatorInstance,
                                     &param_3->ArrayNum,&param_3->ArrayMax);
                  memmove((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8,
                          local_98.AllocatorInstance.Data,lVar9 << 3);
                  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
                  FVar13.Data = local_98.AllocatorInstance.Data;
                }
              }
              if (FVar13.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar13.Data);
              }
              if ((__return_storage_ptr__ == &local_78) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(void*)this != (void*)&Source",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x986,L""), bVar20)) {
                pcVar3 = (code *)swi(3);
                pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar10;
              }
              if (iVar8 != 0) {
                iVar7 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (8,8,iVar8,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayNum,
                                   &__return_storage_ptr__->ArrayMax);
                memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,_Src,
                        (longlong)iVar8 << 3);
              }
              if (_Src != (FScriptContainerElement *)0x0) {
                FMemory::Free(_Src);
              }
              puVar19 = puVar19 + 1;
              pTVar18 = local_80;
            } while (puVar19 != local_68 + local_60);
          }
        }
        else {
          local_a0 = *(FName **)(local_a8 + 0x28);
          pFVar15 = local_a0 + (longlong)*(int *)(local_a8 + 0x30) * 4;
          for (; local_a0 != pFVar15; local_a0 = local_a0 + 4) {
            if (*local_a0 == param_2) {
              if (local_a0 == (FName *)0x0) goto LAB_14ae363ce;
              goto LAB_14ae363f4;
            }
          }
          local_a0 = (FName *)0x0;
LAB_14ae363ce:
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InputVertex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                              ,0x350,L"");
          if (bVar20) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
LAB_14ae363f4:
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_a0) &&
              ((FScriptContainerElement *)&local_a0 <
               pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          iVar8 = __return_storage_ptr__->ArrayNum;
          if (iVar8 == __return_storage_ptr__->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar8 + 1;
          *(FName **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               local_a0;
          if (param_3 != (TArray<FMetasoundFrontendNode_const_*,TSizedDefaultAllocator<32>_> *)0x0)
          {
            pFVar16 = (param_3->AllocatorInstance).Data;
            if (((pFVar16 <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < pFVar16 + (longlong)param_3->ArrayMax * 8))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<FMetasoundFrontendVertex_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar3)();
              return pTVar10;
            }
            iVar8 = param_3->ArrayNum;
            if (iVar8 == param_3->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar8 + 1;
            *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
          }
        }
      }
    }
LAB_14ae36002:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  }
  return __return_storage_ptr__;
}

// FindReroutedOutputVertex @ 14ae36550

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindReroutedOutputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FGuid *param_2,
          FMetasoundFrontendNode **param_3,bool *param_4)

{
  int iVar1;
  FDocumentCache *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  FMetasoundFrontendNode *pFVar7;
  longlong lVar8;
  FMetasoundFrontendVertex *pFVar9;
  longlong *plVar10;
  uint *puVar11;
  FMetasoundFrontendGraph *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FMetasoundFrontendVertex *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  
  pFVar7 = (FMetasoundFrontendNode *)(**(code **)(this->_padding_ + 0x28))();
  if (pFVar7 != (FMetasoundFrontendNode *)0x0) {
    pTVar16 = (this->Parent).WeakReferenceCount.ReferenceController;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar16->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ae365a2;
        }
        LOCK();
        aVar5 = pTVar16->SharedReferenceCount;
        bVar17 = aVar4 == aVar5;
        if (bVar17) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar17);
      pFVar2 = (this->Parent).Object;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,&pFVar7->ClassID);
        if ((lVar8 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                                ,0x364,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
          return pFVar9;
        }
        if (((*(FName *)(lVar8 + 0x18) == FRerouteNodeTemplate::ClassName.Namespace) &&
            (*(FName *)(lVar8 + 0x20) == FRerouteNodeTemplate::ClassName.Name)) &&
           (*(FName *)(lVar8 + 0x28) == FRerouteNodeTemplate::ClassName.Variant)) {
          if (param_4 != (bool *)0x0) {
            *param_4 = true;
          }
          plVar10 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&this->PageID);
          iVar1 = (pFVar7->Interface).Inputs.ArrayNum;
          pFVar9 = (FMetasoundFrontendVertex *)0x0;
          uVar13 = iVar1 - 1;
          uVar6 = 0;
          if ((int)uVar13 < iVar1) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
            return pFVar9;
          }
          pFVar14 = (pFVar7->Interface).Inputs.AllocatorInstance.Data;
          iVar1 = (pFVar7->Interface).Inputs.ArrayNum;
          lVar8 = (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2);
          puVar11 = (uint *)(**(code **)(*plVar10 + 0x28))
                                      (plVar10,param_1,
                                       pFVar14 + ((longlong)iVar1 + -1) * 0x20 + 0x10);
          if (puVar11 != (uint *)0x0) {
            pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                                ((FMetasoundFrontendGraphClass *)(lVar8 + 0x70),&this->PageID);
            uVar6 = *puVar11;
            uVar13 = 0;
            if ((int)uVar6 < (pFVar12->Edges).ArrayNum) {
              uVar13 = ~uVar6 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
              return pFVar9;
            }
            pFVar14 = (pFVar12->Edges).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40;
            pFVar9 = (FMetasoundFrontendVertex *)
                     (**(code **)(this->_padding_ + 0x78))
                               (this,pFVar14,pFVar14 + 0x10,param_3,param_4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
          return pFVar9;
        }
        if (param_3 != (FMetasoundFrontendNode **)0x0) {
          *param_3 = pFVar7;
        }
        pFVar9 = (FMetasoundFrontendVertex *)(pFVar7->Interface).Outputs.AllocatorInstance.Data;
        pFVar15 = pFVar9 + (pFVar7->Interface).Outputs.ArrayNum;
        if (pFVar9 != pFVar15) {
          do {
            if (((param_2->A == (pFVar9->VertexID).A && param_2->D == (pFVar9->VertexID).D) &&
                param_2->C == (pFVar9->VertexID).C) && param_2->B == (pFVar9->VertexID).B)
            goto LAB_14ae367eb;
            pFVar9 = pFVar9 + 1;
          } while (pFVar9 != pFVar15);
        }
        pFVar9 = (FMetasoundFrontendVertex *)0x0;
LAB_14ae367eb:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        return pFVar9;
      }
    }
LAB_14ae365a2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// FindReroutedOutputVertex @ 14ae36810

FMetasoundFrontendVertex * __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::FindReroutedOutputVertex
          (FDocumentGraphNodeCache *this,FGuid *param_1,FName param_2,
          FMetasoundFrontendNode **param_3,bool *param_4)

{
  int iVar1;
  FDocumentCache *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  FMetasoundFrontendNode *pFVar7;
  longlong lVar8;
  FMetasoundFrontendVertex *pFVar9;
  longlong *plVar10;
  uint *puVar11;
  FMetasoundFrontendGraph *pFVar12;
  FMetasoundFrontendVertex *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  
  pFVar7 = (FMetasoundFrontendNode *)(**(code **)(this->_padding_ + 0x28))();
  if (pFVar7 != (FMetasoundFrontendNode *)0x0) {
    pTVar16 = (this->Parent).WeakReferenceCount.ReferenceController;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar16->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ae36862;
        }
        LOCK();
        aVar5 = pTVar16->SharedReferenceCount;
        bVar17 = aVar4 == aVar5;
        if (bVar17) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar17);
      pFVar2 = (this->Parent).Object;
      if (pFVar2 != (FDocumentCache *)0x0) {
        lVar8 = (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,&pFVar7->ClassID);
        if ((lVar8 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Class",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
                                ,0x38e,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
          return pFVar9;
        }
        if (((*(FName *)(lVar8 + 0x18) == FRerouteNodeTemplate::ClassName.Namespace) &&
            (*(FName *)(lVar8 + 0x20) == FRerouteNodeTemplate::ClassName.Name)) &&
           (*(FName *)(lVar8 + 0x28) == FRerouteNodeTemplate::ClassName.Variant)) {
          if (param_4 != (bool *)0x0) {
            *param_4 = true;
          }
          plVar10 = (longlong *)(**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,&this->PageID);
          iVar1 = (pFVar7->Interface).Inputs.ArrayNum;
          pFVar9 = (FMetasoundFrontendVertex *)0x0;
          uVar14 = iVar1 - 1;
          uVar6 = 0;
          if ((int)uVar14 < iVar1) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
            return pFVar9;
          }
          iVar1 = (pFVar7->Interface).Inputs.ArrayNum;
          pFVar15 = (pFVar7->Interface).Inputs.AllocatorInstance.Data;
          lVar8 = (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2);
          puVar11 = (uint *)(**(code **)(*plVar10 + 0x28))
                                      (plVar10,param_1,
                                       pFVar15 + ((longlong)iVar1 + -1) * 0x20 + 0x10);
          if (puVar11 != (uint *)0x0) {
            pFVar12 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                                ((FMetasoundFrontendGraphClass *)(lVar8 + 0x70),&this->PageID);
            uVar6 = *puVar11;
            uVar14 = 0;
            if ((int)uVar6 < (pFVar12->Edges).ArrayNum) {
              uVar14 = ~uVar6 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FMetasoundFrontendVertex *)(*pcVar3)();
              return pFVar9;
            }
            pFVar15 = (pFVar12->Edges).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40;
            pFVar9 = (FMetasoundFrontendVertex *)
                     (**(code **)(this->_padding_ + 0x78))
                               (this,pFVar15,pFVar15 + 0x10,param_3,param_4);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar16);
          return pFVar9;
        }
        if (param_3 != (FMetasoundFrontendNode **)0x0) {
          *param_3 = pFVar7;
        }
        pFVar9 = (FMetasoundFrontendVertex *)(pFVar7->Interface).Outputs.AllocatorInstance.Data;
        pFVar13 = pFVar9 + (pFVar7->Interface).Outputs.ArrayNum;
        for (; pFVar9 != pFVar13; pFVar9 = pFVar9 + 1) {
          if (pFVar9->Name == param_2) goto LAB_14ae36a88;
        }
        pFVar9 = (FMetasoundFrontendVertex *)0x0;
LAB_14ae36a88:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        return pFVar9;
      }
    }
LAB_14ae36862:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  return (FMetasoundFrontendVertex *)0x0;
}

// GetTransactionCount @ 14ae3d790

int __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::GetTransactionCount(FDocumentGraphNodeCache *this)

{
  return this->TransactionCount;
}

// Init @ 14ae3ebf0

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::Init
          (FDocumentGraphNodeCache *this,FNodeModifyDelegates *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)param_1
             ,(FDocumentGraphNodeCache *)&stack0x00000010,(pmf_d3bfe7c7 *)this);
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&param_1->OnNodeInputLiteralSet,(FDocumentGraphNodeCache *)&stack0x00000010,
             (pmf_a1afa329 *)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemoveSwappingNode,(FDocumentGraphNodeCache *)&stack0x00000010,
             (pmf_f085649b *)this);
  TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphNodeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int,int),FDefaultDelegateUserPolicy> *
             )&param_1->OnRemovingNodeInputLiteral,(FDocumentGraphNodeCache *)&stack0x00000010,
             (pmf_a1afa329 *)this);
  return;
}

// OnNodeAdded @ 14ae40a20

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::OnNodeAdded(FDocumentGraphNodeCache *this,int param_1)

{
  FGuid *pFVar1;
  FDocumentCache *pFVar2;
  code *pcVar3;
  atomic<int> aVar4;
  uint uVar5;
  uint uVar6;
  atomic<int> aVar7;
  int iVar8;
  longlong lVar9;
  FMetasoundFrontendGraph *pFVar10;
  TTuple<FGuid,int> *pTVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TTuple<FGuid,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar13;
  uint uVar14;
  FGuid *pFVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  bool bVar18;
  uint local_res10 [2];
  
  pTVar17 = (this->Parent).WeakReferenceCount.ReferenceController;
  local_res10[0] = param_1;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar17->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae40a5f;
      }
      LOCK();
      aVar7 = pTVar17->SharedReferenceCount;
      bVar18 = aVar4 == aVar7;
      if (bVar18) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar18);
    pFVar2 = (this->Parent).Object;
    if (pFVar2 != (FDocumentCache *)0x0) {
      lVar9 = (**(code **)(pFVar2->_padding_ + 0x38))();
      pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                          ((FMetasoundFrontendGraphClass *)(lVar9 + 0x70),&this->PageID);
      lVar9 = (longlong)(int)local_res10[0];
      pFVar16 = (FScriptContainerElement *)0x0;
      uVar14 = 0;
      if ((int)local_res10[0] < (pFVar10->Nodes).ArrayNum) {
        uVar14 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar15 = (FGuid *)((pFVar10->Nodes).AllocatorInstance.Data + lVar9 * 0x88);
      pTVar11 = TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>::
                AllocateMemoryForEmplace<FGuid_const_&>(&this->IDToIndex,pFVar15);
      uVar14 = pFVar15->B;
      uVar5 = pFVar15->C;
      uVar6 = pFVar15->D;
      pFVar1 = pFVar15 + 1;
      *(uint *)&pTVar11->field_0x0 = pFVar15->A;
      *(uint *)&pTVar11->field_0x4 = uVar14;
      *(uint *)&pTVar11->field_0x8 = uVar5;
      *(uint *)&pTVar11->field_0xc = uVar6;
      *(uint *)&pTVar11->field_0x10 = local_res10[0];
      pTVar12 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
                ::Find(&this->ClassIDToNodeIndices,pFVar1);
      if (pTVar12 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar13 = TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
                  ::AllocateMemoryForEmplace<FGuid_const_&>(&this->ClassIDToNodeIndices,pFVar1);
        uVar14 = pFVar1->B;
        uVar5 = pFVar15[1].C;
        uVar6 = pFVar15[1].D;
        *(uint *)&pTVar13->field_0x0 = pFVar1->A;
        *(uint *)&pTVar13->field_0x4 = uVar14;
        *(uint *)&pTVar13->field_0x8 = uVar5;
        *(uint *)&pTVar13->field_0xc = uVar6;
        pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar13->field_0x10;
        *(undefined8 *)pTVar12 = 0;
        *(undefined8 *)&pTVar13->field_0x18 = 0;
      }
      else {
        pFVar16 = (pTVar12->AllocatorInstance).Data;
      }
      if (((pFVar16 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 < pFVar16 + (longlong)pTVar12->ArrayMax * 4)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = pTVar12->ArrayNum;
      if (iVar8 == pTVar12->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
      }
      pTVar12->ArrayNum = iVar8 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_res10[0];
      this->TransactionCount = this->TransactionCount + 1;
    }
  }
LAB_14ae40a5f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return;
}

// OnNodeInputLiteralSet @ 14ae40c00

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::OnNodeInputLiteralSet
          (FDocumentGraphNodeCache *this,int param_1,int param_2,int param_3)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

// OnRemoveSwappingNode @ 14ae41380

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::OnRemoveSwappingNode
          (FDocumentGraphNodeCache *this,int param_1,int param_2)

{
  FDocumentCache *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  longlong lVar5;
  FMetasoundFrontendGraph *pFVar6;
  uint uVar7;
  FGuid *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FGuid *pFVar10;
  bool bVar11;
  
  pTVar9 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae413c7;
      }
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    pFVar1 = (this->Parent).Object;
    if (pFVar1 != (FDocumentCache *)0x0) {
      lVar5 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar6 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                         ((FMetasoundFrontendGraphClass *)(lVar5 + 0x70),&this->PageID);
      uVar7 = 0;
      if (param_1 < (pFVar6->Nodes).ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (FGuid *)((pFVar6->Nodes).AllocatorInstance.Data + (longlong)param_1 * 0x88);
      uVar7 = 0;
      if (param_2 < (pFVar6->Nodes).ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (FGuid *)((pFVar6->Nodes).AllocatorInstance.Data + (longlong)param_2 * 0x88);
      DocumentCachePrivate::
      RemoveSwapMapArrayIndexChecked<TSortedMap<FGuid,TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>
                (pFVar10 + 1,param_1,pFVar8 + 1,param_2,&this->ClassIDToNodeIndices);
      DocumentCachePrivate::
      RemoveSwapMapIndexChecked<TSortedMap<FGuid,int,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>,FGuid>
                (pFVar10,pFVar8,&this->IDToIndex);
      this->TransactionCount = this->TransactionCount + 1;
    }
  }
LAB_14ae413c7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// OnRemovingNodeInputLiteral @ 14ae41610

void __thiscall
Metasound::Frontend::FDocumentGraphNodeCache::OnRemovingNodeInputLiteral
          (FDocumentGraphNodeCache *this,int param_1,int param_2,int param_3)

{
  this->TransactionCount = this->TransactionCount + 1;
  return;
}

