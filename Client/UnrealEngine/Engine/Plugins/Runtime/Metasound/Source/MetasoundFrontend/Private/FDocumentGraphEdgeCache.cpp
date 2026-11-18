// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 14

// FDocumentGraphEdgeCache @ 14ae1adf0

FDocumentGraphEdgeCache * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::FDocumentGraphEdgeCache
          (FDocumentGraphEdgeCache *this,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1,FGuid *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FMetasoundFrontendGraph *pFVar9;
  FDocumentGraphEdgeCache *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int local_res8 [2];
  TKeyInitializer<FMetasoundFrontendVertexHandle_&&> local_res10;
  FMetasoundFrontendVertexHandle *local_res18;
  undefined8 *local_res20;
  uint local_98;
  FMetasoundFrontendVertexHandle local_94;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentGraphEdgeCache_Frontend_Metasound__6B_;
  *(undefined8 *)&this->OutputToEdgeIndices = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x8 = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x20 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x28 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x34 = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x40 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x48 = 0;
  *(undefined8 *)&this->InputToEdgeIndex = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x48 = 0;
  (this->Parent).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Parent).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar11 = param_2->A;
  uVar6 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->TransactionCount = 0;
  (this->PageID).A = uVar11;
  (this->PageID).B = uVar6;
  (this->PageID).C = uVar3;
  (this->PageID).D = uVar4;
  lVar8 = (**(code **)(param_1->Object->_padding_ + 0x38))();
  pFVar9 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                     ((FMetasoundFrontendGraphClass *)(lVar8 + 0x70),param_2);
  local_98 = 0;
  iVar7 = (pFVar9->Edges).ArrayNum;
  if (0 < iVar7) {
    do {
      uVar11 = local_98;
      uVar6 = 0;
      if ((int)local_98 < iVar7) {
        uVar6 = ~local_98 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FDocumentGraphEdgeCache *)(*pcVar2)();
        return pFVar10;
      }
      pFVar12 = (pFVar9->Edges).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40;
      local_94.NodeID.A = *(uint *)pFVar12;
      local_94.NodeID.B = *(uint *)(pFVar12 + 4);
      local_94.NodeID.C = *(uint *)(pFVar12 + 8);
      local_94.NodeID.D = *(uint *)(pFVar12 + 0xc);
      local_94.VertexID._0_8_ = *(undefined8 *)(pFVar12 + 0x10);
      local_94.VertexID._8_8_ = *(undefined8 *)(pFVar12 + 0x18);
      uVar11 = (local_94.NodeID.A >> 2) +
               (int)((ulonglong)*(undefined8 *)(pFVar12 + 0x18) >> 0x20) +
               local_94.NodeID.A * 0x40 + -0x61c88647 ^ local_94.NodeID.A;
      iVar7 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                        ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->OutputToEdgeIndices,uVar11,&local_94);
      if ((iVar7 == -1) ||
         (lVar8 = (longlong)iVar7 * 0x38 + *(longlong *)&this->OutputToEdgeIndices, lVar8 == 0)) {
        local_res18 = &local_94;
        TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_>
                  ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->OutputToEdgeIndices,(uint)local_res8,
                   (TKeyInitializer<FMetasoundFrontendVertexHandle_&&> *)(ulonglong)uVar11,
                   (bool *)&local_res18);
        lVar8 = (longlong)local_res8[0] * 0x38 + *(longlong *)&this->OutputToEdgeIndices;
      }
      if (((*(uint **)(lVar8 + 0x20) <= &local_98) &&
          (&local_98 < *(uint **)(lVar8 + 0x20) + *(int *)(lVar8 + 0x2c))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar10 = (FDocumentGraphEdgeCache *)(*pcVar2)();
        return pFVar10;
      }
      iVar7 = *(int *)(lVar8 + 0x28);
      if (iVar7 == *(int *)(lVar8 + 0x2c)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar8 + 0x20),(int *)(lVar8 + 0x2c));
      }
      uVar11 = local_98;
      *(int *)(lVar8 + 0x28) = iVar7 + 1;
      *(uint *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar7 * 4) = local_98;
      local_res20 = &local_74;
      local_74 = *(undefined8 *)(pFVar12 + 0x20);
      uStack_6c = *(undefined8 *)(pFVar12 + 0x28);
      local_64 = *(undefined8 *)(pFVar12 + 0x30);
      uStack_5c = *(undefined8 *)(pFVar12 + 0x38);
      TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_>
                ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                  *)&this->InputToEdgeIndex,&local_res10,(bool *)&local_res20);
      *(uint *)((longlong)(int)local_res10.Key * 0x2c + 0x20 + *(longlong *)&this->InputToEdgeIndex)
           = uVar11;
      iVar7 = (pFVar9->Edges).ArrayNum;
      local_98 = local_98 + 1;
    } while ((int)local_98 < iVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FDocumentGraphEdgeCache @ 14ae1b110

FDocumentGraphEdgeCache * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::FDocumentGraphEdgeCache(FDocumentGraphEdgeCache *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FDocumentGraphEdgeCache *pFVar7;
  FDocumentCache *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentGraphEdgeCache_Frontend_Metasound__6B_;
  *(undefined8 *)&this->OutputToEdgeIndices = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x8 = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x20 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x28 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x34 = 0;
  *(undefined8 *)&(this->OutputToEdgeIndices).field_0x40 = 0;
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x48 = 0;
  *(undefined8 *)&this->InputToEdgeIndex = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->InputToEdgeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x48 = 0;
  pTVar6 = ::operator_new(0x98);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FDocumentCache *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBVFDocumentCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FDocumentCache::FDocumentCache((FDocumentCache *)(pTVar6 + 1));
    pFVar8 = (FDocumentCache *)(pTVar6 + 1);
    pTVar9 = pTVar6;
    if (pFVar8 == (FDocumentCache *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FDocumentGraphEdgeCache *)(*pcVar4)();
        return pFVar7;
      }
      goto LAB_14ae1b27c;
    }
  }
  if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8->_padding_ = (longlong)pFVar8;
    if (pTVar9 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
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
      pFVar8->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
LAB_14ae1b27c:
  (this->Parent).Object = pFVar8;
  (this->Parent).WeakReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  (this->PageID).A = 0;
  (this->PageID).B = 0;
  (this->PageID).C = 0;
  (this->PageID).D = 0;
  this->TransactionCount = 0;
  return this;
}

// ~FDocumentGraphEdgeCache @ 14ae1d5c0

void __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::~FDocumentGraphEdgeCache
          (FDocumentGraphEdgeCache *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
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
  *(undefined4 *)&(this->InputToEdgeIndex).field_0x48 = 0;
  pvVar6 = *(void **)&(this->InputToEdgeIndex).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputToEdgeIndex);
  *(undefined4 *)&(this->OutputToEdgeIndices).field_0x48 = 0;
  pvVar6 = *(void **)&(this->OutputToEdgeIndices).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputToEdgeIndices);
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

// ContainsEdge @ 14ae27390

bool __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::ContainsEdge
          (FDocumentGraphEdgeCache *this,FMetasoundFrontendEdge *param_1)

{
  uint uVar1;
  undefined4 uVar4;
  TReferenceControllerBase<1> *pTVar2;
  FDocumentCache *pFVar3;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  int iVar8;
  atomic<int> aVar9;
  FMetasoundFrontendGraph *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  FMetasoundFrontendVertexHandle local_38;
  
  local_38.NodeID.A = (param_1->ToNodeID).A;
  local_38.NodeID.B = (param_1->ToNodeID).B;
  local_38.NodeID.C = (param_1->ToNodeID).C;
  local_38.NodeID.D = (param_1->ToNodeID).D;
  uVar4 = (param_1->ToVertexID).D;
  local_38.VertexID.A = (param_1->ToVertexID).A;
  local_38.VertexID.B = (param_1->ToVertexID).B;
  local_38.VertexID.C = (param_1->ToVertexID).C;
  local_38.VertexID.D = (param_1->ToVertexID).D;
  iVar8 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                      *)&this->InputToEdgeIndex,
                     (local_38.NodeID.A >> 2) + 0x9e3779b9 + uVar4 + local_38.NodeID.A * 0x40 ^
                     local_38.NodeID.A,&local_38);
  if (iVar8 != -1) {
    lVar14 = (longlong)iVar8 * 0x2c + *(longlong *)&this->InputToEdgeIndex;
    pTVar15 = (TReferenceControllerBase<1> *)(lVar14 + 0x20);
    if (lVar14 == 0) {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController;
      pTVar13 = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar2->SharedReferenceCount;
        do {
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          if (aVar6 == (atomic<int>)0x0) goto LAB_14ae27431;
          LOCK();
          aVar9 = pTVar2->SharedReferenceCount;
          bVar16 = aVar6 == aVar9;
          if (bVar16) {
            pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar9 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar9;
        } while (!bVar16);
        pFVar3 = (this->Parent).Object;
        pTVar13 = pTVar2;
        if (pFVar3 != (FDocumentCache *)0x0) {
          lVar14 = (**(code **)(pFVar3->_padding_ + 0x38))();
          pFVar10 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                              ((FMetasoundFrontendGraphClass *)(lVar14 + 0x70),&this->PageID);
          uVar1 = (uint)pTVar15->_padding_;
          uVar12 = 0;
          if ((int)uVar1 < (pFVar10->Edges).ArrayNum) {
            uVar12 = ~uVar1 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar11 = (pFVar10->Edges).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40;
          if ((((*(uint *)(pFVar11 + 0xc) == (param_1->FromNodeID).D &&
                *(uint *)(pFVar11 + 8) == (param_1->FromNodeID).C) &&
               *(uint *)(pFVar11 + 4) == (param_1->FromNodeID).B) &&
               *(uint *)pFVar11 == (param_1->FromNodeID).A) &&
             (((*(uint *)(pFVar11 + 0x1c) == (param_1->FromVertexID).D &&
               *(uint *)(pFVar11 + 0x18) == (param_1->FromVertexID).C) &&
              *(uint *)(pFVar11 + 0x14) == (param_1->FromVertexID).B) &&
              *(uint *)(pFVar11 + 0x10) == (param_1->FromVertexID).A)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            return true;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          return false;
        }
      }
LAB_14ae27431:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  return false;
}

// Create @ 14ae28e00

TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> * __cdecl
Metasound::Frontend::FDocumentGraphEdgeCache::Create
          (TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *__return_storage_ptr__,
          TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> *param_1,FGuid *param_2,
          FDocumentModifyDelegates *param_3)

{
  FDocumentGraphEdgeCache *pFVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGraphModifyDelegates *this;
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *pTVar6;
  bool bVar7;
  TSharedRef<Metasound::Frontend::FDocumentCache_const_,1> local_68;
  code *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  code *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::Frontend::FDocumentGraphEdgeCache::Create");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1030,"Metasound::Frontend::FDocumentGraphEdgeCache::Create",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentCache.cpp"
               ,0x406);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1030);
  }
  pTVar5 = ::operator_new(0xf0);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentGraphEdgeCache_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    local_68.Object = param_1->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDocumentGraphEdgeCache((FDocumentGraphEdgeCache *)(pTVar5 + 1),&local_68,param_2);
  }
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1>::
  TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1>
            (__return_storage_ptr__,(FDocumentGraphEdgeCache *)(pTVar5 + 1),pTVar5);
  pFVar1 = __return_storage_ptr__->Object;
  this = TSortedMap<FGuid,Metasound::Frontend::FGraphModifyDelegates,TSizedDefaultAllocator<32>,TLess<FGuid_const_&>_>
         ::Find(&param_3->GraphDelegates,param_2);
  if ((this == (FGraphModifyDelegates *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x141,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<Metasound::Frontend::FDocumentGraphEdgeCache,1> *)(*pcVar3)();
    return pTVar6;
  }
  local_68.Object = (FDocumentCache *)OnEdgeAdded;
  local_68.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_58 = OnEdgeAdded;
  pTStack_50 = local_68.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphEdgeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)this,
             (FDocumentGraphEdgeCache *)&stack0x00000008,(pmf_a425c5e2 *)pFVar1);
  local_68.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_68.Object = (FDocumentCache *)OnRemoveSwappingEdge;
  local_48 = OnRemoveSwappingEdge;
  pTStack_40 = local_68.SharedReferenceCount.ReferenceController;
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphEdgeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &(this->EdgeDelegates).OnRemoveSwappingEdge,(FDocumentGraphEdgeCache *)&stack0x00000010
             ,(pmf_5a11f076 *)pFVar1);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindEdgeIndexToNodeInput @ 14ae32ad0

int * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::FindEdgeIndexToNodeInput
          (FDocumentGraphEdgeCache *this,FGuid *param_1,FGuid *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  FMetasoundFrontendVertexHandle local_28;
  
  local_28.NodeID.A = param_1->A;
  local_28.NodeID.B = param_1->B;
  local_28.NodeID.C = param_1->C;
  local_28.NodeID.D = param_1->D;
  uVar1 = param_2->D;
  local_28.VertexID.A = param_2->A;
  local_28.VertexID.B = param_2->B;
  local_28.VertexID.C = param_2->C;
  local_28.VertexID.D = param_2->D;
  iVar2 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                      *)&this->InputToEdgeIndex,
                     uVar1 + local_28.NodeID.A * 0x40 + (local_28.NodeID.A >> 2) + 0x9e3779b9 ^
                     local_28.NodeID.A,&local_28);
  if (iVar2 == -1) {
    return (int *)0x0;
  }
  lVar4 = (longlong)iVar2 * 0x2c + *(longlong *)&(this->InputToEdgeIndex).field_0x0;
  piVar3 = (int *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}

// FindEdgeIndicesFromNodeOutput @ 14ae32b60

TArrayView<int_const_,int> * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::FindEdgeIndicesFromNodeOutput
          (FDocumentGraphEdgeCache *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          FGuid *param_1,FGuid *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<int_const_,int> *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FMetasoundFrontendVertexHandle local_28;
  
  local_28.NodeID.A = param_1->A;
  local_28.NodeID.B = param_1->B;
  local_28.NodeID.C = param_1->C;
  local_28.NodeID.D = param_1->D;
  uVar1 = param_2->D;
  local_28.VertexID.A = param_2->A;
  local_28.VertexID.B = param_2->B;
  local_28.VertexID.C = param_2->C;
  local_28.VertexID.D = param_2->D;
  iVar4 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->OutputToEdgeIndices,
                     (local_28.NodeID.A >> 2) + 0x9e3779b9 + uVar1 + local_28.NodeID.A * 0x40 ^
                     local_28.NodeID.A,&local_28);
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->OutputToEdgeIndices).field_0x0;
    puVar7 = (undefined8 *)(lVar6 + 0x20);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      iVar4 = *(int *)(puVar7 + 1);
      __return_storage_ptr__->DataPtr = (int *)*puVar7;
      if (iVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
          return pTVar5;
        }
      }
      __return_storage_ptr__->ArrayNum = iVar4;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->DataPtr = (int *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// FindEdges @ 14ae32c40

TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::FindEdges
          (FDocumentGraphEdgeCache *this,
          TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,FGuid *param_1,FGuid *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDocumentCache *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  uint *puVar7;
  atomic<int> aVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FMetasoundFrontendGraph *pFVar14;
  uint *puVar15;
  TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  uint *local_res10;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMetasoundFrontendVertexHandle local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar2 = (this->Parent).WeakReferenceCount.ReferenceController;
  pTVar17 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar2->SharedReferenceCount;
    do {
      pTVar17 = (TReferenceControllerBase<1> *)0x0;
      if (aVar6 == (atomic<int>)0x0) goto LAB_14ae32c91;
      LOCK();
      aVar8 = pTVar2->SharedReferenceCount;
      bVar19 = aVar6 == aVar8;
      if (bVar19) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar19);
    pFVar3 = (this->Parent).Object;
    pTVar17 = pTVar2;
    if (pFVar3 != (FDocumentCache *)0x0) {
      lVar13 = (**(code **)(pFVar3->_padding_ + 0x38))();
      pFVar14 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                          ((FMetasoundFrontendGraphClass *)(lVar13 + 0x70),&this->PageID);
      uVar1 = param_1->A;
      local_58.NodeID.B = param_1->B;
      local_58.NodeID.C = param_1->C;
      local_58.NodeID.D = param_1->D;
      local_58.VertexID.A = param_2->A;
      local_58.VertexID.B = param_2->B;
      local_58.VertexID.C = param_2->C;
      local_58.VertexID.D = param_2->D;
      local_58.NodeID.A = uVar1;
      iVar9 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                        ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                          *)&this->InputToEdgeIndex,
                         (uVar1 >> 2) + 0x9e3779b9 + local_58.VertexID.D + uVar1 * 0x40 ^ uVar1,
                         &local_58);
      if (iVar9 != -1) {
        lVar13 = (longlong)iVar9 * 0x2c + *(longlong *)&this->InputToEdgeIndex;
        puVar15 = (uint *)(lVar13 + 0x20);
        if (lVar13 == 0) {
          puVar15 = (uint *)0x0;
        }
        if (puVar15 != (uint *)0x0) {
          uVar11 = *puVar15;
          uVar10 = 0;
          if ((int)uVar11 < (pFVar14->Edges).ArrayNum) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar16 = (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar5)();
            return pTVar16;
          }
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_68 = (pFVar14->Edges).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x40;
          if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 <
               pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            pTVar16 = (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                      (*pcVar5)();
            return pTVar16;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          *(FScriptContainerElement **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
        }
      }
      iVar9 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                        ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->OutputToEdgeIndices,
                         (uVar1 >> 2) + uVar1 * 0x40 + local_58.VertexID.D + 0x9e3779b9 ^ uVar1,
                         &local_58);
      if (iVar9 != -1) {
        lVar13 = (longlong)iVar9 * 0x38 + *(longlong *)&this->OutputToEdgeIndices;
        puVar18 = (undefined8 *)(lVar13 + 0x20);
        if (lVar13 == 0) {
          puVar18 = (undefined8 *)0x0;
        }
        if (puVar18 != (undefined8 *)0x0) {
          puVar15 = (uint *)*puVar18;
          iVar9 = *(int *)(puVar18 + 1);
          local_res10 = puVar15 + iVar9;
          while( true ) {
            puVar7 = local_res10;
            if (*(int *)(puVar18 + 1) != iVar9) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (puVar15 == puVar7) break;
            uVar1 = *puVar15;
            uVar11 = 0;
            if ((int)uVar1 < (pFVar14->Edges).ArrayNum) {
              uVar11 = ~uVar1 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar5)();
              return pTVar16;
            }
            pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
            local_60 = (pFVar14->Edges).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40;
            if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
                ((FScriptContainerElement *)&local_60 <
                 pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar5 = (code *)swi(3);
              pTVar16 = (TArray<FMetasoundFrontendEdge_const_*,TSizedDefaultAllocator<32>_> *)
                        (*pcVar5)();
              return pTVar16;
            }
            iVar12 = __return_storage_ptr__->ArrayNum;
            if (iVar12 == __return_storage_ptr__->ArrayMax) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar12 + 1;
            puVar15 = puVar15 + 1;
            *(FScriptContainerElement **)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_60;
          }
        }
      }
    }
  }
LAB_14ae32c91:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return __return_storage_ptr__;
}

// GetTransactionCount @ 14ae3d770

int __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::GetTransactionCount(FDocumentGraphEdgeCache *this)

{
  return this->TransactionCount;
}

// Init @ 14ae3e960

void __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::Init
          (FDocumentGraphEdgeCache *this,FEdgeModifyDelegates *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphEdgeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)param_1
             ,(FDocumentGraphEdgeCache *)&stack0x00000010,(pmf_a425c5e2 *)this);
  TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
  AddSP<Metasound::Frontend::FDocumentGraphEdgeCache>
            ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
             &param_1->OnRemoveSwappingEdge,(FDocumentGraphEdgeCache *)&stack0x00000010,
             (pmf_5a11f076 *)this);
  return;
}

// IsNodeInputConnected @ 14ae3f310

bool __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::IsNodeInputConnected
          (FDocumentGraphEdgeCache *this,FGuid *param_1,FGuid *param_2)

{
  undefined4 uVar1;
  int iVar2;
  FMetasoundFrontendVertexHandle local_28;
  
  local_28.NodeID.A = param_1->A;
  local_28.NodeID.B = param_1->B;
  local_28.NodeID.C = param_1->C;
  local_28.NodeID.D = param_1->D;
  uVar1 = param_2->D;
  local_28.VertexID.A = param_2->A;
  local_28.VertexID.B = param_2->B;
  local_28.VertexID.C = param_2->C;
  local_28.VertexID.D = param_2->D;
  iVar2 = TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                      *)&this->InputToEdgeIndex,
                     uVar1 + local_28.NodeID.A * 0x40 + (local_28.NodeID.A >> 2) + 0x9e3779b9 ^
                     local_28.NodeID.A,&local_28);
  return iVar2 != -1;
}

// IsNodeOutputConnected @ 14ae3f370

bool __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::IsNodeOutputConnected
          (FDocumentGraphEdgeCache *this,FGuid *param_1,FGuid *param_2)

{
  undefined4 uVar1;
  int iVar2;
  FMetasoundFrontendVertexHandle local_28;
  
  local_28.NodeID.A = param_1->A;
  local_28.NodeID.B = param_1->B;
  local_28.NodeID.C = param_1->C;
  local_28.NodeID.D = param_1->D;
  uVar1 = param_2->D;
  local_28.VertexID.A = param_2->A;
  local_28.VertexID.B = param_2->B;
  local_28.VertexID.C = param_2->C;
  local_28.VertexID.D = param_2->D;
  iVar2 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                    ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->OutputToEdgeIndices,
                     uVar1 + local_28.NodeID.A * 0x40 + (local_28.NodeID.A >> 2) + 0x9e3779b9 ^
                     local_28.NodeID.A,&local_28);
  return iVar2 != -1;
}

// OnEdgeAdded @ 14ae40580

void __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::OnEdgeAdded(FDocumentGraphEdgeCache *this,int param_1)

{
  FDocumentCache *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  longlong lVar6;
  FMetasoundFrontendGraph *pFVar7;
  FScriptContainerElement *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<FMetasoundFrontendVertexHandle_&&,int_const_&> local_res18;
  undefined8 *local_78;
  uint *local_70;
  FMetasoundFrontendVertexHandle local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  pTVar9 = (this->Parent).WeakReferenceCount.ReferenceController;
  local_res10[0] = param_1;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae405b3;
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
      lVar6 = (**(code **)(pFVar1->_padding_ + 0x38))();
      pFVar7 = FMetasoundFrontendGraphClass::FindConstGraphChecked
                         ((FMetasoundFrontendGraphClass *)(lVar6 + 0x70),&this->PageID);
      lVar6 = (longlong)(int)local_res10[0];
      uVar10 = 0;
      if ((int)local_res10[0] < (pFVar7->Edges).ArrayNum) {
        uVar10 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78 = &local_48;
      pFVar8 = (pFVar7->Edges).AllocatorInstance.Data + lVar6 * 0x40;
      local_70 = local_res10;
      local_48 = *(undefined8 *)(pFVar8 + 0x20);
      uStack_40 = *(undefined8 *)(pFVar8 + 0x28);
      local_38 = *(undefined8 *)(pFVar8 + 0x30);
      uStack_30 = *(undefined8 *)(pFVar8 + 0x38);
      TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FMetasoundFrontendVertexHandle_&&,int_const_&>_>
                ((TSet<TTuple<FMetasoundFrontendVertexHandle,int>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>,FDefaultSetAllocator>
                  *)&this->InputToEdgeIndex,&local_res18,(bool *)&local_78);
      local_68.NodeID.A = *(uint *)pFVar8;
      local_68.NodeID.B = *(uint *)(pFVar8 + 4);
      local_68.NodeID.C = *(uint *)(pFVar8 + 8);
      local_68.NodeID.D = *(uint *)(pFVar8 + 0xc);
      local_68.VertexID._0_8_ = *(undefined8 *)(pFVar8 + 0x10);
      local_68.VertexID._8_8_ = *(undefined8 *)(pFVar8 + 0x18);
      uVar10 = (local_68.NodeID.A >> 2) +
               (int)((ulonglong)*(undefined8 *)(pFVar8 + 0x18) >> 0x20) +
               local_68.NodeID.A * 0x40 + -0x61c88647 ^ local_68.NodeID.A;
      iVar5 = TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMetasoundFrontendVertexHandle>
                        ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->OutputToEdgeIndices,uVar10,&local_68);
      if ((iVar5 == -1) ||
         (lVar6 = (longlong)iVar5 * 0x38 + *(longlong *)&this->OutputToEdgeIndices, lVar6 == 0)) {
        local_res18.Value = (int *)&local_68;
        TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FMetasoundFrontendVertexHandle_&&>_>
                  ((TSet<TTuple<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)&this->OutputToEdgeIndices,(uint)local_res8,
                   (TKeyInitializer<FMetasoundFrontendVertexHandle_&&> *)(ulonglong)uVar10,
                   (bool *)&local_res18.Value);
        lVar6 = (longlong)local_res8[0] * 0x38 + *(longlong *)&this->OutputToEdgeIndices;
      }
      if (((*(uint **)(lVar6 + 0x20) <= local_res10) &&
          (local_res10 < *(uint **)(lVar6 + 0x20) + *(int *)(lVar6 + 0x2c))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)(lVar6 + 0x28);
      if (iVar5 == *(int *)(lVar6 + 0x2c)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar6 + 0x20),(int *)(lVar6 + 0x2c));
      }
      *(int *)(lVar6 + 0x28) = iVar5 + 1;
      *(uint *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar5 * 4) = local_res10[0];
      this->TransactionCount = this->TransactionCount + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
  }
LAB_14ae405b3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// OnRemoveSwappingEdge @ 14ae41190

void __thiscall
Metasound::Frontend::FDocumentGraphEdgeCache::OnRemoveSwappingEdge
          (FDocumentGraphEdgeCache *this,int param_1,int param_2)

{
  FDocumentCache *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  longlong lVar5;
  FMetasoundFrontendGraph *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FMetasoundFrontendVertexHandle local_98;
  FMetasoundFrontendVertexHandle local_78;
  FMetasoundFrontendVertexHandle local_58;
  FMetasoundFrontendVertexHandle local_38;
  
  pTVar10 = (this->Parent).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ae411df;
      }
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
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
      if (param_1 < (pFVar6->Edges).ArrayNum) {
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
      pFVar9 = (pFVar6->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x40;
      uVar7 = 0;
      if (param_2 < (pFVar6->Edges).ArrayNum) {
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
      pFVar8 = (pFVar6->Edges).AllocatorInstance.Data + (longlong)param_2 * 0x40;
      local_98.NodeID._0_8_ = *(undefined8 *)(pFVar8 + 0x20);
      local_98.NodeID._8_8_ = *(undefined8 *)(pFVar8 + 0x28);
      local_98.VertexID._0_8_ = *(undefined8 *)(pFVar8 + 0x30);
      local_98.VertexID._8_8_ = *(undefined8 *)(pFVar8 + 0x38);
      local_78.NodeID._0_8_ = *(undefined8 *)(pFVar9 + 0x20);
      local_78.NodeID._8_8_ = *(undefined8 *)(pFVar9 + 0x28);
      local_78.VertexID._0_8_ = *(undefined8 *)(pFVar9 + 0x30);
      local_78.VertexID._8_8_ = *(undefined8 *)(pFVar9 + 0x38);
      DocumentCachePrivate::
      RemoveSwapMapIndexChecked<TMap<FMetasoundFrontendVertexHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,int,0>_>,FMetasoundFrontendVertexHandle>
                (&local_78,&local_98,&this->InputToEdgeIndex);
      local_58.NodeID._0_8_ = *(undefined8 *)pFVar8;
      local_58.NodeID._8_8_ = *(undefined8 *)(pFVar8 + 8);
      local_58.VertexID._0_8_ = *(undefined8 *)(pFVar8 + 0x10);
      local_58.VertexID._8_8_ = *(undefined8 *)(pFVar8 + 0x18);
      local_38.NodeID._0_8_ = *(undefined8 *)pFVar9;
      local_38.NodeID._8_8_ = *(undefined8 *)(pFVar9 + 8);
      local_38.VertexID._0_8_ = *(undefined8 *)(pFVar9 + 0x10);
      local_38.VertexID._8_8_ = *(undefined8 *)(pFVar9 + 0x18);
      DocumentCachePrivate::
      RemoveSwapMapArrayIndexChecked<TMap<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMetasoundFrontendVertexHandle,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,FMetasoundFrontendVertexHandle>
                (&local_38,param_1,&local_58,param_2,&this->OutputToEdgeIndices);
      this->TransactionCount = this->TransactionCount + 1;
    }
  }
LAB_14ae411df:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

