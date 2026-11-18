// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 5

// FDynamicMeshGroupEditBuilder @ 14ca622f0

FDynamicMeshGroupEditBuilder * __thiscall
FDynamicMeshGroupEditBuilder::FDynamicMeshGroupEditBuilder
          (FDynamicMeshGroupEditBuilder *this,FPolygroupSet *param_1)

{
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *pTVar1;
  int iVar2;
  FPolygroupSet *pFVar3;
  undefined4 uVar4;
  int iVar5;
  FDynamicMeshGroupEdit *pFVar6;
  FDynamicMeshGroupEdit *pFVar7;
  undefined8 *puVar8;
  FDynamicMeshGroupEdit *pFVar9;
  
  pFVar9 = (FDynamicMeshGroupEdit *)0x0;
  pTVar1 = &this->Edit;
  (this->PolygroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&this->SavedIndexMap = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x20 = 0;
  pTVar1->Ptr = (FDynamicMeshGroupEdit *)0x0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x48 = 0;
  pFVar6 = ::operator_new(0x30);
  pFVar7 = pFVar9;
  if (pFVar6 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined8 *)&pFVar6->GroupLayerIndex = 0;
    pFVar6->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FPolygroupSet>;
    uVar4 = *(undefined4 *)((longlong)&param_1->Mesh + 4);
    iVar2 = *(int *)&param_1->PolygroupAttrib;
    iVar5 = *(int *)((longlong)&param_1->PolygroupAttrib + 4);
    *(undefined4 *)&(pFVar6->Triangles).AllocatorInstance.Data = *(undefined4 *)&param_1->Mesh;
    *(undefined4 *)((longlong)&(pFVar6->Triangles).AllocatorInstance.Data + 4) = uVar4;
    (pFVar6->Triangles).ArrayNum = iVar2;
    (pFVar6->Triangles).ArrayMax = iVar5;
    (pFVar6->OldGroups).AllocatorInstance.Data =
         *(FScriptContainerElement **)&param_1->GroupLayerIndex;
    pFVar7 = pFVar6;
  }
  if ((FDynamicMeshGroupEditBuilder *)&stack0xffffffffffffffe8 == this) {
    if (&pFVar7->Triangles != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ca62397;
  }
  else {
    pFVar3 = (this->PolygroupSet).Ptr;
    (this->PolygroupSet).Ptr = (FPolygroupSet *)&pFVar7->Triangles;
    if (pFVar3 != (FPolygroupSet *)0x0) {
      pFVar7 = (FDynamicMeshGroupEdit *)&pFVar3[-1].PolygroupAttrib;
LAB_14ca62397:
      (*(code *)pFVar7->_padding_)();
    }
  }
  pFVar7 = ::operator_new(0x40);
  if (pFVar7 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined4 *)&pFVar7->field_0xc = 0;
    pFVar7->_padding_ = (longlong)&___7FDynamicMeshGroupEdit__6B_;
    pFVar7->GroupLayerIndex = -1;
    (pFVar7->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Triangles).ArrayNum = 0;
    (pFVar7->Triangles).ArrayMax = 0;
    (pFVar7->OldGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->OldGroups).ArrayNum = 0;
    (pFVar7->OldGroups).ArrayMax = 0;
    (pFVar7->NewGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->NewGroups).ArrayNum = 0;
    (pFVar7->NewGroups).ArrayMax = 0;
    pFVar9 = pFVar7;
  }
  if (pTVar1 == (TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *)
                &stack0xfffffffffffffff0) {
    if (pFVar9 == (FDynamicMeshGroupEdit *)0x0) goto LAB_14ca6240b;
    puVar8 = (undefined8 *)pFVar9->_padding_;
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    if (pFVar7 == (FDynamicMeshGroupEdit *)0x0) goto LAB_14ca6240b;
    puVar8 = (undefined8 *)pFVar7->_padding_;
    pFVar9 = pFVar7;
  }
  (*(code *)*puVar8)(pFVar9,1);
LAB_14ca6240b:
  iVar2 = ((this->PolygroupSet).Ptr)->GroupLayerIndex;
  if (iVar2 != -1) {
    pTVar1->Ptr->GroupLayerIndex = iVar2;
  }
  return this;
}

// FDynamicMeshGroupEditBuilder @ 14ca62440

FDynamicMeshGroupEditBuilder * __thiscall
FDynamicMeshGroupEditBuilder::FDynamicMeshGroupEditBuilder
          (FDynamicMeshGroupEditBuilder *this,FDynamicMesh3 *param_1)

{
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *pTVar1;
  FPolygroupSet *pFVar2;
  FDynamicMeshGroupEdit *pFVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  FDynamicMeshGroupEdit *pFVar5;
  undefined8 *puVar6;
  FDynamicMeshGroupEdit *pFVar7;
  
  pFVar7 = (FDynamicMeshGroupEdit *)0x0;
  pTVar1 = &this->Edit;
  (this->PolygroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&this->SavedIndexMap = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x20 = 0;
  pTVar1->Ptr = (FDynamicMeshGroupEdit *)0x0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x48 = 0;
  pFVar3 = ::operator_new(0x30);
  pFVar5 = pFVar7;
  if (pFVar3 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined8 *)&pFVar3->GroupLayerIndex = 0;
    pFVar3->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FPolygroupSet>;
    UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)&pFVar3->Triangles,param_1);
    pFVar5 = pFVar3;
  }
  if ((FDynamicMeshGroupEditBuilder *)&stack0xffffffffffffffe8 == this) {
    if (&pFVar5->Triangles == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ca624f8;
    pTVar4 = (TDynamicMeshScalarTriangleAttribute<int> *)pFVar5->_padding_;
  }
  else {
    pFVar2 = (this->PolygroupSet).Ptr;
    (this->PolygroupSet).Ptr = (FPolygroupSet *)&pFVar5->Triangles;
    if (pFVar2 == (FPolygroupSet *)0x0) goto LAB_14ca624f8;
    pTVar4 = pFVar2[-1].PolygroupAttrib;
    pFVar5 = (FDynamicMeshGroupEdit *)&pFVar2[-1].PolygroupAttrib;
  }
  (*(code *)pTVar4)(pFVar5);
LAB_14ca624f8:
  pFVar5 = ::operator_new(0x40);
  if (pFVar5 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined4 *)&pFVar5->field_0xc = 0;
    pFVar5->_padding_ = (longlong)&___7FDynamicMeshGroupEdit__6B_;
    pFVar5->GroupLayerIndex = -1;
    (pFVar5->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Triangles).ArrayNum = 0;
    (pFVar5->Triangles).ArrayMax = 0;
    (pFVar5->OldGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->OldGroups).ArrayNum = 0;
    (pFVar5->OldGroups).ArrayMax = 0;
    (pFVar5->NewGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->NewGroups).ArrayNum = 0;
    (pFVar5->NewGroups).ArrayMax = 0;
    pFVar7 = pFVar5;
  }
  if (pTVar1 == (TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *)
                &stack0xfffffffffffffff0) {
    if (pFVar7 == (FDynamicMeshGroupEdit *)0x0) {
      return this;
    }
    puVar6 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (pFVar5 == (FDynamicMeshGroupEdit *)0x0) {
      return this;
    }
    puVar6 = (undefined8 *)pFVar5->_padding_;
    pFVar7 = pFVar5;
  }
  (*(code *)*puVar6)(pFVar7,1);
  return this;
}

// FDynamicMeshGroupEditBuilder @ 14ca62590

FDynamicMeshGroupEditBuilder * __thiscall
FDynamicMeshGroupEditBuilder::FDynamicMeshGroupEditBuilder
          (FDynamicMeshGroupEditBuilder *this,FDynamicMesh3 *param_1,int param_2)

{
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *pTVar1;
  int iVar2;
  FPolygroupSet *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDynamicMeshGroupEdit *pFVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  FDynamicMeshGroupEdit *pFVar8;
  undefined8 *puVar9;
  FDynamicMeshGroupEditBuilder *pFVar10;
  FDynamicMeshGroupEdit *pFVar11;
  
  pFVar11 = (FDynamicMeshGroupEdit *)0x0;
  pTVar1 = &this->Edit;
  (this->PolygroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&this->SavedIndexMap = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x20 = 0;
  pTVar1->Ptr = (FDynamicMeshGroupEdit *)0x0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedIndexMap).field_0x48 = 0;
  pFVar6 = ::operator_new(0x30);
  pFVar8 = pFVar11;
  if (pFVar6 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined8 *)&pFVar6->GroupLayerIndex = 0;
    pFVar6->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<UE::Geometry::FPolygroupSet>;
    UE::Geometry::FPolygroupSet::FPolygroupSet((FPolygroupSet *)&pFVar6->Triangles,param_1,param_2);
    pFVar8 = pFVar6;
  }
  if ((FDynamicMeshGroupEditBuilder *)&stack0xffffffffffffffd8 == this) {
    if (&pFVar8->Triangles != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar7 = (TDynamicMeshScalarTriangleAttribute<int> *)pFVar8->_padding_;
      goto LAB_14ca6264a;
    }
  }
  else {
    pFVar3 = (this->PolygroupSet).Ptr;
    (this->PolygroupSet).Ptr = (FPolygroupSet *)&pFVar8->Triangles;
    if (pFVar3 != (FPolygroupSet *)0x0) {
      pTVar7 = pFVar3[-1].PolygroupAttrib;
      pFVar8 = (FDynamicMeshGroupEdit *)&pFVar3[-1].PolygroupAttrib;
LAB_14ca6264a:
      (*(code *)pTVar7)(pFVar8);
    }
  }
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 != (FDynamicMeshGroupEdit *)0x0) {
    *(undefined4 *)&pFVar8->field_0xc = 0;
    pFVar8->_padding_ = (longlong)&___7FDynamicMeshGroupEdit__6B_;
    pFVar8->GroupLayerIndex = -1;
    (pFVar8->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Triangles).ArrayNum = 0;
    (pFVar8->Triangles).ArrayMax = 0;
    (pFVar8->OldGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->OldGroups).ArrayNum = 0;
    (pFVar8->OldGroups).ArrayMax = 0;
    (pFVar8->NewGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->NewGroups).ArrayNum = 0;
    (pFVar8->NewGroups).ArrayMax = 0;
    pFVar11 = pFVar8;
  }
  if (pTVar1 == (TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *)
                &stack0xffffffffffffffe0) {
    if (pFVar11 == (FDynamicMeshGroupEdit *)0x0) goto LAB_14ca626bc;
    puVar9 = (undefined8 *)pFVar11->_padding_;
  }
  else {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar11;
    if (pFVar8 == (FDynamicMeshGroupEdit *)0x0) goto LAB_14ca626bc;
    puVar9 = (undefined8 *)pFVar8->_padding_;
    pFVar11 = pFVar8;
  }
  (*(code *)*puVar9)(pFVar11);
LAB_14ca626bc:
  iVar2 = ((this->PolygroupSet).Ptr)->GroupLayerIndex;
  if (iVar2 == -1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5815141270720348099>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Changes\\MeshPolygroupChange.cpp"
                       ,0x3d,"PolygroupSet->GetPolygroupIndex() != -1");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FDynamicMeshGroupEditBuilder *)(*pcVar4)();
      return pFVar10;
    }
  }
  else {
    pTVar1->Ptr->GroupLayerIndex = iVar2;
  }
  return this;
}

// SaveTriangle @ 14caa0810

void __thiscall
FDynamicMeshGroupEditBuilder::SaveTriangle(FDynamicMeshGroupEditBuilder *this,int param_1)

{
  int *piVar1;
  FDynamicMeshGroupEdit *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint *puVar11;
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> *pTVar12;
  int local_res8 [2];
  uint local_res10 [4];
  int local_48 [2];
  uint *local_40;
  int *local_38;
  
  local_res10[0] = param_1;
  local_48[0] = UE::Geometry::FPolygroupSet::GetGroup((this->PolygroupSet).Ptr,param_1);
  if (*(int *)&(this->SavedIndexMap).field_0x8 != *(int *)&(this->SavedIndexMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SavedIndexMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SavedIndexMap).field_0x38;
    }
    uVar6 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->SavedIndexMap).field_0x48 - 1U & local_res10[0]) * 4
                     );
    if (uVar6 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)&this->SavedIndexMap);
        if (*puVar8 == local_res10[0]) {
          puVar11 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 != (uint *)0x0) {
            iVar7 = UE::Geometry::FPolygroupSet::GetGroup((this->PolygroupSet).Ptr,local_res10[0]);
            uVar6 = *puVar11;
            pFVar2 = (this->Edit).Ptr;
            uVar10 = 0;
            if ((int)uVar6 < (pFVar2->NewGroups).ArrayNum) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(int *)((pFVar2->NewGroups).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = iVar7;
            return;
          }
          break;
        }
        uVar6 = puVar8[2];
      } while (uVar6 != 0xffffffff);
    }
  }
  pTVar12 = &this->Edit;
  local_res8[0] = (pTVar12->Ptr->Triangles).ArrayNum;
  local_40 = local_res10;
  local_38 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedIndexMap,(TPairInitializer<int_const_&,int_const_&> *)(local_res10 + 2),
             (bool *)&local_40);
  pFVar2 = pTVar12->Ptr;
  pFVar3 = (pFVar2->Triangles).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->Triangles).ArrayMax * 4)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (pFVar2->Triangles).ArrayNum;
  piVar1 = &(pFVar2->Triangles).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->Triangles).AllocatorInstance,piVar1);
  }
  (pFVar2->Triangles).ArrayNum = iVar7 + 1;
  *(uint *)((pFVar2->Triangles).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  pFVar2 = pTVar12->Ptr;
  pFVar3 = (pFVar2->OldGroups).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(pFVar2->OldGroups).ArrayMax * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (pFVar2->OldGroups).ArrayNum;
  piVar1 = &(pFVar2->OldGroups).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->OldGroups).AllocatorInstance,piVar1);
  }
  (pFVar2->OldGroups).ArrayNum = iVar7 + 1;
  *(int *)((pFVar2->OldGroups).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
  pFVar2 = pTVar12->Ptr;
  pFVar3 = (pFVar2->NewGroups).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(pFVar2->NewGroups).ArrayMax * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (pFVar2->NewGroups).ArrayNum;
  piVar1 = &(pFVar2->NewGroups).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar2->NewGroups).AllocatorInstance,piVar1);
  }
  (pFVar2->NewGroups).ArrayNum = iVar7 + 1;
  *(int *)((pFVar2->NewGroups).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_48[0];
  return;
}

// SaveTriangle @ 14caa0b50

void __thiscall
FDynamicMeshGroupEditBuilder::SaveTriangle
          (FDynamicMeshGroupEditBuilder *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  FDynamicMeshGroupEdit *pFVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TPairInitializer<int_const_&,int_const_&> local_48;
  int *local_38;
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if (*(int *)&(this->SavedIndexMap).field_0x8 != *(int *)&(this->SavedIndexMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SavedIndexMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SavedIndexMap).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->SavedIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar5 * 0x10 + *(longlong *)&this->SavedIndexMap);
        if (*piVar6 == param_1) {
          pFVar8 = (this->Edit).Ptr;
          puVar9 = (uint *)(piVar6 + 1);
          if (piVar6 == (int *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            uVar1 = *puVar9;
            uVar7 = 0;
            if ((int)uVar1 < (pFVar8->NewGroups).ArrayNum) {
              uVar7 = ~uVar1 >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            *(int *)((pFVar8->NewGroups).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
                 param_3;
            return;
          }
          goto LAB_14caa0bbe;
        }
        iVar5 = piVar6[2];
      } while (iVar5 != -1);
    }
  }
  pFVar8 = (this->Edit).Ptr;
LAB_14caa0bbe:
  local_res8[0] = (pFVar8->Triangles).ArrayNum;
  local_48.Value = local_res10;
  local_38 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedIndexMap,&local_48,(bool *)&local_48.Value);
  pFVar8 = (this->Edit).Ptr;
  pFVar2 = (pFVar8->Triangles).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(pFVar8->Triangles).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar8->Triangles).ArrayNum;
  piVar6 = &(pFVar8->Triangles).ArrayMax;
  if (iVar5 == *piVar6) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar8->Triangles).AllocatorInstance,piVar6);
  }
  (pFVar8->Triangles).ArrayNum = iVar5 + 1;
  *(int *)((pFVar8->Triangles).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
  pFVar8 = (this->Edit).Ptr;
  pFVar2 = (pFVar8->OldGroups).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(pFVar8->OldGroups).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar8->OldGroups).ArrayNum;
  piVar6 = &(pFVar8->OldGroups).ArrayMax;
  if (iVar5 == *piVar6) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar8->OldGroups).AllocatorInstance,piVar6);
  }
  (pFVar8->OldGroups).ArrayNum = iVar5 + 1;
  *(int *)((pFVar8->OldGroups).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res18[0];
  pFVar8 = (this->Edit).Ptr;
  pFVar2 = (pFVar8->NewGroups).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res20) &&
     ((FScriptContainerElement *)local_res20 < pFVar2 + (longlong)(pFVar8->NewGroups).ArrayMax * 4))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar8->NewGroups).ArrayNum;
  piVar6 = &(pFVar8->NewGroups).ArrayMax;
  if (iVar5 == *piVar6) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar8->NewGroups).AllocatorInstance,piVar6);
  }
  (pFVar8->NewGroups).ArrayNum = iVar5 + 1;
  *(int *)((pFVar8->NewGroups).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res20[0];
  return;
}

