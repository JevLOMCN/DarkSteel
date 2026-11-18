// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 47

// FGroupTopology @ 14c6ded30

FGroupTopology * __thiscall
UE::Geometry::FGroupTopology::FGroupTopology
          (FGroupTopology *this,FDynamicMesh3 *param_1,
          TDynamicMeshScalarTriangleAttribute<int> *param_2,bool param_3)

{
  this->_padding_ = (longlong)&___7FGroupTopology_Geometry_UE__6B_;
  *(undefined8 *)&this->ShouldAddExtraCornerAtVert = 0;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = 0;
  (this->Corners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Corners).ArrayNum = 0;
  (this->Corners).ArrayMax = 0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->GroupIDToGroupIndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIDToGroupIndexMap).ArrayNum = 0;
  (this->GroupIDToGroupIndexMap).ArrayMax = 0;
  (this->CornerVerticesFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CornerVerticesFlags).NumBits = 0;
  (this->CornerVerticesFlags).MaxBits = 0x80;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  *(undefined8 *)&this->VertexIDToCornerIDMap = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x48 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x34 = 0;
  (this->CurrentExtraCornerVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExtraCornerVids).HashSize = 0;
  this->Mesh = param_1;
  this->GroupLayer = param_2;
  if (param_3) {
    RebuildTopology(this);
  }
  return this;
}

// FGroupTopology @ 14c6dee40

FGroupTopology * __thiscall
UE::Geometry::FGroupTopology::FGroupTopology
          (FGroupTopology *this,FDynamicMesh3 *param_1,bool param_2)

{
  this->_padding_ = (longlong)&___7FGroupTopology_Geometry_UE__6B_;
  *(undefined8 *)&this->ShouldAddExtraCornerAtVert = 0;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = 0;
  (this->Corners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Corners).ArrayNum = 0;
  (this->Corners).ArrayMax = 0;
  (this->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Groups).ArrayNum = 0;
  (this->Groups).ArrayMax = 0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  (this->GroupIDToGroupIndexMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupIDToGroupIndexMap).ArrayNum = 0;
  (this->GroupIDToGroupIndexMap).ArrayMax = 0;
  (this->CornerVerticesFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CornerVerticesFlags).NumBits = 0;
  (this->CornerVerticesFlags).MaxBits = 0x80;
  (this->EmptyArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmptyArray).ArrayNum = 0;
  (this->EmptyArray).ArrayMax = 0;
  *(undefined8 *)&this->VertexIDToCornerIDMap = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x48 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x34 = 0;
  (this->CurrentExtraCornerVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExtraCornerVids).HashSize = 0;
  this->Mesh = param_1;
  this->GroupLayer = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
  if (param_2) {
    RebuildTopology(this);
  }
  return this;
}

// ~FGroupTopology @ 14c6e1460

void __thiscall UE::Geometry::FGroupTopology::~FGroupTopology(FGroupTopology *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  (this->CurrentExtraCornerVids).HashSize = 0;
  this->_padding_ = (longlong)&___7FGroupTopology_Geometry_UE__6B_;
  FVar1 = (this->CurrentExtraCornerVids).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentExtraCornerVids).Elements);
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VertexIDToCornerIDMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VertexIDToCornerIDMap);
  pFVar3 = (this->EmptyArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FVar4 = (this->CornerVerticesFlags).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar3 = (this->GroupIDToGroupIndexMap).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int>
            ((FGroupEdge *)(this->Edges).AllocatorInstance.Data,(this->Edges).ArrayNum);
  pFVar3 = (this->Edges).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Geometry::FGroupTopology::FGroup,int>
            ((FGroup *)(this->Groups).AllocatorInstance.Data,(this->Groups).ArrayNum);
  pFVar3 = (this->Groups).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::Geometry::FGroupTopology::FCorner,int>
            ((FCorner *)(this->Corners).AllocatorInstance.Data,(this->Corners).ArrayNum);
  pFVar3 = (this->Corners).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (*(longlong *)&this->ShouldAddExtraCornerAtVert != 0) {
    plVar5 = *(longlong **)&(this->ShouldAddExtraCornerAtVert).field_0x28;
    plVar6 = (longlong *)&(this->ShouldAddExtraCornerAtVert).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// operator() @ 14c6e88c0

bool __thiscall
`UE::Geometry::FGroupTopology::FindCornerNbrEdges'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar6 * 4) = local_res10[0];
  return true;
}

// operator() @ 14c6ea9e0

bool __thiscall
`UE::Geometry::FGroupTopology::IsEdgeAngleSharp'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 local_res8;
  
  uVar9 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar12 = uVar9 >> 0x20;
  uVar11 = (uint)(uVar9 >> 0x20);
  bVar14 = uVar11 != *(uint *)((longlong)this + 8);
  local_res8 = uVar9;
  uVar13 = (uint)uVar9;
  if (!bVar14) {
    local_res8 = CONCAT44(uVar11,uVar11);
    uVar13 = uVar11;
    uVar12 = uVar9;
  }
  lVar5 = *(longlong *)(*(longlong *)this + 0x10);
  uVar10 = (uint)uVar9;
  if (bVar14) {
    uVar10 = uVar11;
  }
  uVar9 = (ulonglong)((uint)local_res8 & 0x1ff);
  lVar6 = *(longlong *)(lVar5 + ((uVar12 & 0xffffffff) >> 9) * 8);
  pdVar1 = (double *)(lVar6 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
  dVar7 = pdVar1[1];
  dVar3 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar13 >> 9) * 8);
  dVar4 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  pdVar2 = (double *)(lVar5 + uVar9 * 0x18);
  dVar8 = pdVar2[1];
  (param_2->field0_0x0)._s_0.X = *pdVar1 - *pdVar2;
  (param_2->field0_0x0)._s_0.Y = dVar7 - dVar8;
  (param_2->field0_0x0)._s_0.Z = dVar3 - dVar4;
  bVar14 = UE::Math::TVector<double>::Normalize(param_2,__real_3f1a36e2e0000000);
  return bVar14;
}

// CollectGroupBoundaryVertices @ 14c71efe0

void __thiscall
UE::Geometry::FGroupTopology::CollectGroupBoundaryVertices
          (FGroupTopology *this,int param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint *puVar13;
  undefined1 local_res20 [8];
  undefined1 local_68;
  undefined1 local_67 [3];
  undefined4 local_64;
  uint local_60;
  int local_5c;
  uint *local_58;
  FGroup *local_50;
  FScriptContainerElement *local_48;
  
  local_50 = FindGroupByID(this,param_1);
  if (local_50 == (FGroup *)0x0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021028773>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x25b,"Group != nullptr");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_60 = (local_50->Boundaries).ArrayNum;
    uVar11 = (ulonglong)(int)local_60;
    pFVar12 = (local_50->Boundaries).AllocatorInstance.Data;
    local_48 = pFVar12 + uVar11 * 0x28;
    while( true ) {
      pFVar5 = local_48;
      if ((local_50->Boundaries).ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar12 == pFVar5) break;
      puVar13 = *(uint **)pFVar12;
      iVar2 = *(int *)(pFVar12 + 8);
      local_58 = puVar13 + iVar2;
      while( true ) {
        puVar7 = local_58;
        if (*(int *)(pFVar12 + 8) != iVar2) {
          local_68 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_68);
        }
        if (puVar13 == puVar7) break;
        uVar3 = *puVar13;
        uVar9 = 0;
        if ((int)uVar3 < (this->Edges).ArrayNum) {
          uVar9 = ~uVar3 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->Edges).AllocatorInstance.Data;
        puVar10 = *(undefined4 **)(pFVar5 + (longlong)(int)uVar3 * 0x50 + 0x10);
        iVar4 = *(int *)(pFVar5 + (longlong)(int)uVar3 * 0x50 + 0x18);
        puVar1 = puVar10 + iVar4;
        while( true ) {
          if (*(int *)(pFVar5 + (longlong)(int)uVar3 * 0x50 + 0x18) != iVar4) {
            local_67[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_67);
          }
          if (puVar10 == puVar1) break;
          local_64 = *puVar10;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (param_2,&local_5c,(bool *)&local_64);
          puVar10 = puVar10 + 1;
        }
        puVar13 = puVar13 + 1;
      }
      pFVar12 = pFVar12 + 0x28;
      uVar11 = (ulonglong)local_60;
    }
  }
  return;
}

// CollectGroupVertices @ 14c71f1e0

void __thiscall
UE::Geometry::FGroupTopology::CollectGroupVertices
          (FGroupTopology *this,int param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FGroup *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  int local_38;
  int local_34;
  int local_30 [2];
  undefined8 local_28;
  undefined4 local_20 [2];
  
  pFVar6 = FindGroupByID(this,param_1);
  if (pFVar6 == (FGroup *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021028791>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x249,"Found != nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar8 = (pFVar6->Triangles).AllocatorInstance.Data;
    iVar2 = (pFVar6->Triangles).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar6->Triangles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar8 == pFVar1) break;
      uVar7 = (ulonglong)(*(uint *)pFVar8 & 0x1ff);
      lVar3 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
               (ulonglong)(*(uint *)pFVar8 >> 9) * 8);
      local_28 = *(undefined8 *)(lVar3 + uVar7 * 0xc);
      local_20[0] = *(undefined4 *)(lVar3 + 8 + uVar7 * 0xc);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_2,&local_38,(bool *)&local_28);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_2,&local_34,(bool *)((longlong)&local_28 + 4));
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (param_2,local_30,(bool *)local_20);
      pFVar8 = pFVar8 + 4;
    }
  }
  return;
}

// FindCornerNbrCorners @ 14c731270

void __thiscall
UE::Geometry::FGroupTopology::FindCornerNbrCorners
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int *piVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  int local_78;
  uint local_74;
  uint local_70;
  int *local_68;
  FGroup *local_60;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  int *local_48;
  
  if (((param_1 < 0) || ((this->Corners).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CornerID >= 0 && CornerID < Corners.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x218,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0;
  if (param_1 < (this->Corners).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_50 = (this->Corners).AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 3 + 1;
  local_70 = *(uint *)(local_50 + lVar9 * 8 + 8);
  uVar11 = (ulonglong)(int)local_70;
  local_50 = local_50 + lVar9 * 8;
  piVar14 = *(int **)local_50;
  local_48 = piVar14 + uVar11;
  do {
    piVar5 = local_48;
    local_68 = piVar14;
    if (*(int *)(local_50 + 8) != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (piVar14 == piVar5) {
      return;
    }
    local_60 = FindGroupByID(this,*piVar14);
    local_74 = (local_60->Boundaries).ArrayNum;
    uVar11 = (ulonglong)(int)local_74;
    pFVar13 = (local_60->Boundaries).AllocatorInstance.Data;
    local_58 = pFVar13 + uVar11 * 0x28;
    while( true ) {
      pFVar3 = local_58;
      if ((local_60->Boundaries).ArrayNum != (int)uVar11) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar3) break;
      puVar12 = *(uint **)pFVar13;
      iVar2 = *(int *)(pFVar13 + 8);
      puVar1 = puVar12 + iVar2;
      while( true ) {
        if (*(int *)(pFVar13 + 8) != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (puVar12 == puVar1) break;
        uVar8 = *puVar12;
        lVar9 = (longlong)(int)uVar8;
        uVar7 = 0;
        if ((int)uVar8 < (this->Edges).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Edges).AllocatorInstance.Data;
        iVar10 = *(int *)(pFVar3 + lVar9 * 0x50 + 0x48);
        if (iVar10 == param_1) {
          iVar10 = *(int *)(pFVar3 + lVar9 * 0x50 + 0x4c);
LAB_14c73143e:
          local_78 = iVar10;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,&local_78);
        }
        else if (*(int *)(pFVar3 + lVar9 * 0x50 + 0x4c) == param_1) goto LAB_14c73143e;
        puVar12 = puVar12 + 1;
      }
      pFVar13 = pFVar13 + 0x28;
      uVar11 = (ulonglong)local_74;
    }
    piVar14 = local_68 + 1;
    uVar11 = (ulonglong)local_70;
  } while( true );
}

// FindCornerNbrEdges @ 14c7314b0

void __thiscall
UE::Geometry::FGroupTopology::FindCornerNbrEdges
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18 [2];
  code *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FGroupTopology::FindCornerNbrEdges'::__l2::<lambda_1>,bool,int>
             ::Call;
  local_res18[0] = param_2;
  ForCornerNbrEdges(this,param_1,(TFunctionRef<bool___cdecl(int)> *)&local_18);
  return;
}

// FindCornerNbrGroups @ 14c7314f0

void __thiscall
UE::Geometry::FGroupTopology::FindCornerNbrGroups
          (FGroupTopology *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  int local_48;
  uint local_44;
  FScriptContainerElement *local_40;
  
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_44 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_44;
  local_40 = pFVar11 + uVar8 * 4;
  while( true ) {
    pFVar4 = local_40;
    if (param_1->ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar4) break;
    uVar2 = *(uint *)pFVar11;
    lVar9 = (longlong)(int)uVar2;
    if (((int)uVar2 < 0) || ((this->Corners).ArrayNum <= (int)uVar2)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CornerID >= 0 && CornerID < Corners.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x1dc,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar2 < (this->Corners).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Corners).AllocatorInstance.Data;
    piVar10 = *(int **)(pFVar4 + lVar9 * 0x18 + 8);
    iVar3 = *(int *)(pFVar4 + lVar9 * 0x18 + 0x10);
    piVar1 = piVar10 + iVar3;
    while( true ) {
      if (*(int *)(pFVar4 + lVar9 * 0x18 + 0x10) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (piVar10 == piVar1) break;
      local_48 = *piVar10;
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,&local_48);
      piVar10 = piVar10 + 1;
    }
    uVar8 = (ulonglong)local_44;
    pFVar11 = pFVar11 + 4;
  }
  return;
}

// FindCornerNbrGroups @ 14c731640

void __thiscall
UE::Geometry::FGroupTopology::FindCornerNbrGroups
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  lVar7 = (longlong)param_1;
  if ((param_1 < 0) || ((this->Corners).ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CornerID >= 0 && CornerID < Corners.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x1dc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Corners).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Corners).AllocatorInstance.Data;
  piVar8 = *(int **)(pFVar3 + lVar7 * 0x18 + 8);
  iVar2 = *(int *)(pFVar3 + lVar7 * 0x18 + 0x10);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)(pFVar3 + lVar7 * 0x18 + 0x10) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (piVar8 == piVar1) break;
    local_res8[0] = *piVar8;
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,local_res8);
    piVar8 = piVar8 + 1;
  }
  return;
}

// FindEdgeNbrEdges @ 14c731740

void __thiscall
UE::Geometry::FGroupTopology::FindEdgeNbrEdges
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  code *local_38;
  TArray<int,TSizedDefaultAllocator<32>_> **local_30;
  code *local_28;
  TArray<int,TSizedDefaultAllocator<32>_> **local_20;
  
  if ((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x14a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x48);
  if (iVar1 != -1) {
    local_30 = &local_res8;
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FGroupTopology::FindCornerNbrEdges'::__l2::<lambda_1>,bool,int>
               ::Call;
    local_res8 = param_2;
    ForCornerNbrEdges(this,iVar1,(TFunctionRef<bool___cdecl(int)> *)&local_38);
  }
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x4c);
  if (iVar1 != -1) {
    local_20 = &local_res20;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FGroupTopology::FindCornerNbrEdges'::__l2::<lambda_1>,bool,int>
               ::Call;
    local_res20 = param_2;
    ForCornerNbrEdges(this,iVar1,(TFunctionRef<bool___cdecl(int)> *)&local_28);
  }
  return;
}

// FindEdgeNbrGroups @ 14c731850

void __thiscall
UE::Geometry::FGroupTopology::FindEdgeNbrGroups
          (FGroupTopology *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    FindEdgeNbrGroups(this,*(int *)pFVar3,param_2);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// FindEdgeNbrGroups @ 14c7318d0

void __thiscall
UE::Geometry::FGroupTopology::FindEdgeNbrGroups
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = &(this->Edges).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x13a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x128,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x18) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FindVertexNbrGroups(this,**(int **)(pFVar2 + (longlong)param_1 * 0x50 + 0x10),param_2);
  uVar6 = *(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x18) - 1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x18)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FindVertexNbrGroups(this,*(int *)(*(longlong *)(pFVar2 + (longlong)param_1 * 0x50 + 0x10) +
                                   (longlong)(int)uVar6 * 4),param_2);
  return;
}

// FindGroupByID @ 14c731a80

FGroup * __thiscall UE::Geometry::FGroupTopology::FindGroupByID(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGroup *pFVar4;
  uint uVar5;
  
  if ((-1 < param_1) && (param_1 < (this->GroupIDToGroupIndexMap).ArrayNum)) {
    if (*(int *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data + (longlong)param_1 * 4) !=
        -1) {
      uVar3 = 0;
      if (param_1 < (this->GroupIDToGroupIndexMap).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FGroup *)(*pcVar1)();
          return pFVar4;
        }
      }
      uVar3 = *(uint *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data +
                       (longlong)param_1 * 4);
      uVar5 = 0;
      if ((int)uVar3 < (this->Groups).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FGroup *)(*pcVar1)();
          return pFVar4;
        }
      }
      return (FGroup *)((this->Groups).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x38);
    }
  }
  return (FGroup *)0x0;
}

// FindGroupEdgeID @ 14c731b90

int __thiscall UE::Geometry::FGroupTopology::FindGroupEdgeID(FGroupTopology *this,int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FGroup *pFVar9;
  int *piVar10;
  ulonglong uVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  iVar7 = (**(code **)(this->_padding_ + 0x18))
                    (this,*(undefined4 *)
                           (*(longlong *)
                             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                             (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                           (ulonglong)(param_1 & 0x1ff) * 0x10));
  pFVar9 = FindGroupByID(this,iVar7);
  if (pFVar9 == (FGroup *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021029106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x10e,"Group != nullptr");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  else {
    local_res18 = (pFVar9->Boundaries).ArrayNum;
    uVar11 = (ulonglong)(int)local_res18;
    pFVar13 = (pFVar9->Boundaries).AllocatorInstance.Data;
    local_res20 = pFVar13 + uVar11 * 0x28;
    while( true ) {
      pFVar4 = local_res20;
      if ((pFVar9->Boundaries).ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar4) break;
      puVar12 = *(uint **)pFVar13;
      iVar7 = *(int *)(pFVar13 + 8);
      puVar1 = puVar12 + iVar7;
      while( true ) {
        if (*(int *)(pFVar13 + 8) != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (puVar12 == puVar1) break;
        uVar3 = *puVar12;
        uVar8 = 0;
        if ((int)uVar3 < (this->Edges).ArrayNum) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        pFVar4 = (this->Edges).AllocatorInstance.Data;
        piVar10 = *(int **)(pFVar4 + (longlong)(int)uVar3 * 0x50 + 0x20);
        piVar2 = piVar10 + *(int *)(pFVar4 + (longlong)(int)uVar3 * 0x50 + 0x28);
        for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
          if (*piVar10 == param_1) {
            return uVar3;
          }
        }
        puVar12 = puVar12 + 1;
      }
      uVar11 = (ulonglong)local_res18;
      pFVar13 = pFVar13 + 0x28;
    }
  }
  return -1;
}

// FindGroupEdgeID @ 14c731d40

int __thiscall
UE::Geometry::FGroupTopology::FindGroupEdgeID(FGroupTopology *this,FMeshTriEdgeID param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)
                    ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)param_1 >> 0xb) * 8) +
                  ((ulonglong)(param_1.TriangleID & 0x1ff) * 3 + param_1.TriEdgeIndex) * 4);
  if (iVar1 != -1) {
    iVar1 = FindGroupEdgeID(this,iVar1);
    return iVar1;
  }
  return -1;
}

// FindVertexNbrGroups @ 14c732ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FGroupTopology::FindVertexNbrGroups
          (FGroupTopology *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FSmallListSet *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_288 [32];
  undefined1 local_268 [4];
  int local_264;
  uint local_260;
  BaseValueIterator local_258;
  code *local_228 [2];
  undefined **local_218;
  FDynamicMesh3 *local_210;
  int local_208;
  undefined ***local_200;
  FScriptContainerElement *local_1f8;
  undefined1 local_1e8 [40];
  longlong *local_1c0;
  FSmallListSet *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  undefined4 uStack_194;
  FSmallListSet *local_190;
  ulonglong uStack_188;
  longlong local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [144];
  undefined1 local_d8 [144];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar7 = (param_1->AllocatorInstance).Data;
  local_260 = param_1->ArrayNum;
  uVar4 = (ulonglong)(int)local_260;
  local_1f8 = pFVar7 + uVar4 * 4;
  while( true ) {
    pFVar3 = local_1f8;
    if (param_1->ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_268);
    }
    if (pFVar7 == pFVar3) break;
    local_210 = this->Mesh;
    iVar2 = *(int *)pFVar7;
    local_200 = (undefined ***)0x0;
    local_218 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__VtxTrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__TPairExpandEnumerable_VValueIterator_FSmallListSet_Geometry_UE___45_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    pFVar1 = &local_210->VertexEdgeLists;
    local_228[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VtxTrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex2i,int>
                   ::Call;
    local_1e8._0_8_ = 0;
    local_1c0 = (longlong *)0x0;
    local_1b8 = (FSmallListSet *)0x0;
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    local_190 = (FSmallListSet *)0x0;
    uStack_188 = uStack_188 & 0xffffffff00000000;
    local_208 = iVar2;
    FSmallListSet::BaseValueIterator::BaseValueIterator(&local_258,pFVar1,iVar2,false);
    uStack_1b0 = CONCAT44(local_258.block_ptr,local_258.ListIndex);
    local_1a8._4_4_ = local_258.iEnd;
    local_1a8._0_4_ = local_258.N;
    local_1b8 = local_258.ListSet;
    local_198 = local_258.cur_value;
    uStack_194 = local_258._36_4_;
    iStack_1a0 = local_258.iCur;
    iStack_19c = local_258.cur_ptr;
    local_258.block_ptr = -1;
    uStack_188 = CONCAT44(0xffffffff,iVar2);
    local_258.N = 0;
    local_258.iCur = -1;
    local_258.cur_ptr = -1;
    local_180 = (ulonglong)(uint)local_258.iEnd << 0x20;
    local_170 = local_258.cur_value;
    uStack_16c = local_258._36_4_;
    uStack_178 = 0xffffffffffffffff;
    local_258.ListSet = pFVar1;
    local_258.ListIndex = iVar2;
    local_190 = pFVar1;
    TFunction<UE::Geometry::FIndex2i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_228);
    if (local_228[0] != (code *)0x0) {
      pppuVar5 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar5 = local_200;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168,
               (ValueIterator *)&local_1b8,(ValueIterator *)&local_190,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_d8,
               (ValueIterator *)&local_190,(ValueIterator *)&local_190,
               (TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1e8);
    while ((((local_168._0_8_ != local_d8._0_8_ || (local_168._8_4_ != local_d8._8_4_)) ||
            (local_168._24_4_ != local_d8._24_4_)) || (local_168._28_4_ != local_d8._28_4_))) {
      local_264 = (**(code **)(this->_padding_ + 0x18))(this,local_168._88_4_);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,&local_264);
      TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_168);
    }
    if (local_d8._96_8_ != 0) {
      plVar6 = (longlong *)(local_d8 + 0x70);
      if ((longlong *)local_d8._136_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_d8._136_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_168._96_8_ != 0) {
      plVar6 = (longlong *)(local_168 + 0x70);
      if ((longlong *)local_168._136_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_168._136_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_1e8._0_8_ != 0) {
      plVar6 = (longlong *)(local_1e8 + 0x10);
      if (local_1c0 != (longlong *)0x0) {
        plVar6 = local_1c0;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    uVar4 = (ulonglong)local_260;
    pFVar7 = pFVar7 + 4;
  }
  return;
}

// FindVertexNbrGroups @ 14c733150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FGroupTopology::FindVertexNbrGroups
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1f8 [32];
  int local_1d8 [4];
  undefined1 local_1c8 [48];
  ValueIterator local_198;
  ValueIterator local_170;
  undefined1 local_148 [144];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  FDynamicMesh3::VtxTrianglesItr
            (this->Mesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_1c8,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148,&local_198
             ,&local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_b8,&local_170,
             &local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  while ((((local_148._0_8_ != local_b8._0_8_ || (local_148._8_4_ != local_b8._8_4_)) ||
          (local_148._24_4_ != local_b8._24_4_)) || (local_148._28_4_ != local_b8._28_4_))) {
    local_1d8[0] = (**(code **)(this->_padding_ + 0x18))(this,local_148._88_4_);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(param_2,local_1d8);
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148);
  }
  if (local_b8._96_8_ != 0) {
    plVar1 = (longlong *)(local_b8 + 0x70);
    if ((longlong *)local_b8._136_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_b8._136_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_148._96_8_ != 0) {
    plVar1 = (longlong *)(local_148 + 0x70);
    if ((longlong *)local_148._136_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_148._136_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_1c8._0_8_ != 0) {
    plVar1 = (longlong *)(local_1c8 + 0x10);
    if ((longlong *)local_1c8._40_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_1c8._40_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ForCornerNbrEdges @ 14c736270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FGroupTopology::ForCornerNbrEdges
          (FGroupTopology *this,int param_1,TFunctionRef<bool___cdecl(int)> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116 [2];
  uint local_114;
  uint local_110 [2];
  uint local_108;
  uint local_104;
  uint local_100;
  uint *local_f8;
  int *local_f0;
  undefined4 local_e4;
  TFunctionRef<bool___cdecl(int)> *local_e0;
  FGroupTopology *local_d8;
  FGroup *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  int *local_b8;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar13 = (ulonglong)param_1;
  local_114 = param_1;
  local_e0 = param_2;
  local_d8 = this;
  if (((param_1 < 0) || ((this->Corners).ArrayNum <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CornerID >= 0 && CornerID < Corners.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x1f7,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  uVar9 = 0;
  if (param_1 < (this->Corners).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  local_6c = 0x80;
  local_68 = -1;
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c0 = (this->Corners).AllocatorInstance.Data;
  lVar1 = uVar13 * 3 + 1;
  local_100 = *(uint *)(local_c0 + lVar1 * 8 + 8);
  uVar12 = (ulonglong)(int)local_100;
  local_c0 = local_c0 + lVar1 * 8;
  piVar18 = *(int **)local_c0;
  local_b8 = piVar18 + uVar12;
  do {
    piVar4 = local_b8;
    local_f0 = piVar18;
    if (*(int *)(local_c0 + 8) != (int)uVar12) {
      local_118 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_118);
    }
    if (piVar18 == piVar4) {
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
LAB_14c7366ac:
        local_50 = 0;
        FMemory::Free((void *)local_58);
      }
LAB_14c7366b1:
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    local_d0 = FindGroupByID(this,*piVar18);
    local_104 = (local_d0->Boundaries).ArrayNum;
    uVar12 = (ulonglong)(int)local_104;
    pFVar17 = (local_d0->Boundaries).AllocatorInstance.Data;
    local_c8 = pFVar17 + uVar12 * 0x28;
    while( true ) {
      pFVar2 = local_c8;
      if ((local_d0->Boundaries).ArrayNum != (int)uVar12) {
        local_117 = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_117);
      }
      if (pFVar17 == pFVar2) break;
      local_108 = *(uint *)(pFVar17 + 8);
      uVar12 = (ulonglong)(int)local_108;
      puVar16 = *(uint **)pFVar17;
      puVar14 = puVar16 + uVar12;
      local_f8 = puVar14;
      while( true ) {
        if (*(int *)(pFVar17 + 8) != (int)uVar12) {
          local_116[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_116);
        }
        if (puVar16 == puVar14) break;
        uVar9 = *puVar16;
        uVar15 = 0;
        if ((int)uVar9 < (this->Edges).ArrayNum) {
          uVar15 = ~uVar9 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Edges).AllocatorInstance.Data;
        if ((*(int *)(pFVar2 + (longlong)(int)uVar9 * 0x50 + 0x48) == (int)uVar13) ||
           (*(int *)(pFVar2 + (longlong)(int)uVar9 * 0x50 + 0x4c) == (int)uVar13)) {
          if (local_64 == 0) {
            iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                               (int *)(local_98 + 0xc));
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),false);
            iVar8 = local_68;
          }
          else {
            iVar8 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
            local_64 = local_64 + -1;
            iVar7 = local_68;
            if (local_64 != 0) {
              *(undefined4 *)(local_98._0_8_ + (longlong)iVar8 * 0xc) = 0xffffffff;
            }
          }
          local_68 = iVar8;
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,&local_b0,iVar7);
          if (local_b0.Pointer != (uint *)0x0) {
            *(uint *)local_b0.Pointer = uVar9;
            *(uint *)((longlong)local_b0.Pointer + 4) = 0xffffffff;
          }
          uVar15 = *(uint *)local_b0.Pointer;
          if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
            FVar10 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = local_58;
            }
            for (iVar8 = *(int *)((longlong)FVar10 + (ulonglong)(local_50 - 1U & uVar15) * 4);
                iVar8 != -1; iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0xc + 4)) {
              if (*(uint *)(local_98._0_8_ + (longlong)iVar8 * 0xc) == uVar15) {
                if (iVar8 != -1) {
                  *(uint *)(local_98._0_8_ + (longlong)iVar8 * 0xc) = uVar15;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_98,local_b0.Index,1);
                  goto LAB_14c73663f;
                }
                break;
              }
            }
          }
          uVar11 = local_98._8_4_ - local_64;
          if (uVar11 < 4) {
            iVar8 = 1;
          }
          else {
            uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            local_e4 = (undefined4)lVar1;
            iVar8 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((int)uVar11 < 1) || (iVar8 <= local_50)) {
            uVar15 = local_50 - 1U & uVar15;
            *(uint *)((longlong)local_b0.Pointer + 8) = uVar15;
            FVar10 = (ForElementType<FSetElementId>)local_60;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FVar10 = local_58;
            }
            uVar13 = (longlong)local_50 - 1U & (longlong)(int)uVar15;
            *(uint *)((longlong)local_b0.Pointer + 4) = *(uint *)((longlong)FVar10 + uVar13 * 4);
            *(int *)((longlong)FVar10 + uVar13 * 4) = local_b0.Index;
          }
          else {
            local_50 = iVar8;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
          }
          local_110[0] = uVar9;
          cVar6 = (**(code **)local_e0)(*(undefined8 *)&local_e0->field_0x8,local_110);
          if (cVar6 == '\0') {
            local_50 = 0;
            if (local_58 == (ForElementType<FSetElementId>)0x0) goto LAB_14c7366b1;
            goto LAB_14c7366ac;
          }
LAB_14c73663f:
          uVar13 = (ulonglong)local_114;
          puVar14 = local_f8;
        }
        uVar12 = (ulonglong)local_108;
        puVar16 = puVar16 + 1;
        this = local_d8;
      }
      pFVar17 = pFVar17 + 0x28;
      uVar12 = (ulonglong)local_104;
    }
    piVar18 = local_f0 + 1;
    uVar12 = (ulonglong)local_100;
  } while( true );
}

// GenerateBoundaryAndGroupEdges @ 14c736bd0

/* WARNING: Removing unreachable block (ram,0x00014c73730d) */
/* WARNING: Removing unreachable block (ram,0x00014c73732b) */
/* WARNING: Removing unreachable block (ram,0x00014c737348) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FGroupTopology::GenerateBoundaryAndGroupEdges
          (FGroupTopology *this,FGroup *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          TBitArray<FDefaultBitArrayAllocator> *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  ForElementType<FSetElementId> FVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ForElementType<unsigned_int> FVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ForElementType<FSetElementId> FVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  char local_res10 [8];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_res18;
  ForElementType<unsigned_int> local_res20;
  uint local_2f8 [2];
  ForAnyElementType local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [8];
  uint local_2d8 [2];
  uint local_2d0;
  uint local_2cc;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c8;
  uint local_2b8;
  uint local_2b4;
  int local_2b0;
  uint local_2ac;
  uint local_2a8;
  ulonglong local_2a0;
  FScriptContainerElement *local_298;
  int local_288;
  int iStack_284;
  FEdgeSpan local_280;
  undefined8 local_240;
  int local_238;
  int iStack_234;
  FEdgeSpan local_230;
  undefined8 local_1f0;
  uint local_1e8 [2];
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  uint local_1d0 [4];
  FScriptContainerElement *local_1c0;
  int local_1b8;
  int iStack_1b4;
  longlong local_1b0;
  ulonglong local_1a8;
  TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *local_1a0;
  TPairInitializer<int_const_&,int_const_&> local_198;
  undefined1 local_188 [16];
  uint *local_178;
  uint *local_170;
  uint *local_168;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  FMeshRegionBoundaryLoops local_148;
  
  local_res18 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )param_2;
  local_res20 = (ForElementType<unsigned_int>)param_3;
  FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops(&local_148,this->Mesh,&param_1->Triangles,true)
  ;
  if (local_148.bFailed == false) {
    local_1a0 = &param_1->Boundaries;
    iVar9 = local_148.Loops.ArrayNum;
    TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_>::SetNum
              (local_1a0,iVar9,Default);
    local_198.Value = (int *)(longlong)iVar9;
    local_2a8 = 0;
    if (0 < iVar9) {
      local_1b0 = 0;
      do {
        lVar15 = local_1b0;
        uVar21 = local_2a8;
        uVar20 = ~local_2a8;
        uVar12 = 0;
        if ((int)local_2a8 < local_148.Loops.ArrayNum) {
          uVar12 = uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar27 = local_148.Loops.AllocatorInstance.Data + lVar15 * 0x40;
        uVar12 = 0;
        if ((int)uVar21 < local_1a0->ArrayNum) {
          uVar12 = uVar20 >> 0x1f;
        }
        local_298 = pFVar27;
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pFVar28 = (local_1a0->AllocatorInstance).Data + lVar15 * 0x28;
        local_2f0.Data = (FScriptContainerElement *)0x0;
        local_2e8 = 0;
        local_2b0 = *(int *)(pFVar27 + 0x10);
        local_2d0 = 0;
        local_1e0 = pFVar28;
        if (0 < local_2b0) {
          do {
            uVar21 = local_2d0;
            uVar12 = 0;
            if ((int)local_2d0 < *(int *)(pFVar27 + 0x10)) {
              uVar12 = ~local_2d0 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            uVar21 = *(uint *)(*(longlong *)(pFVar27 + 8) + (longlong)(int)uVar21 * 4);
            local_2d8[0] = uVar21;
            if ((((int)uVar21 < 0) || (*(int *)((longlong)param_3 + 0x18) <= (int)uVar21)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            uVar12 = local_2d8[0];
            FVar14 = (ForElementType<unsigned_int>)param_3;
            if (*(ForElementType<unsigned_int> *)((longlong)param_3 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar14 = *(ForElementType<unsigned_int> *)((longlong)param_3 + 0x10);
            }
            uVar20 = uVar21 & 0x1f;
            if ((int)uVar21 < 0) {
              uVar21 = uVar21 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar21 >> 5) * 4) >> uVar20 & 1) == 0)
            {
              if ((((int)local_2d8[0] < 0) ||
                  (*(int *)((longlong)param_3 + 0x18) <= (int)local_2d8[0])) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              FVar14 = (ForElementType<unsigned_int>)param_3;
              if (*(ForElementType<unsigned_int> *)((longlong)param_3 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar14 = *(ForElementType<unsigned_int> *)((longlong)param_3 + 0x10);
              }
              uVar21 = uVar12;
              if ((int)uVar12 < 0) {
                uVar21 = uVar12 + 0x1f;
              }
              puVar16 = (uint *)((longlong)FVar14 + (longlong)((int)uVar21 >> 5) * 4);
              *puVar16 = *puVar16 | 1 << ((byte)uVar12 & 0x1f);
              local_res10[0] = '\0';
              cVar8 = (**(code **)(this->_padding_ + 0x28))(this,local_2d8[0],local_res10);
              if (cVar8 != '\0') {
                uVar21 = (this->Corners).ArrayNum;
                piVar1 = &(this->Corners).ArrayMax;
                if (uVar21 == *piVar1) {
                  uVar21 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&(this->Corners).AllocatorInstance,piVar1);
                }
                (this->Corners).ArrayNum = uVar21 + 1;
                lVar15 = (longlong)(int)uVar21 * 0x18;
                pFVar25 = (this->Corners).AllocatorInstance.Data;
                *(undefined8 *)(pFVar25 + lVar15) = 0;
                *(undefined8 *)(pFVar25 + lVar15 + 8) = 0;
                *(undefined8 *)(pFVar25 + lVar15 + 0x10) = 0;
                uVar12 = 0;
                if ((int)uVar21 < (this->Corners).ArrayNum) {
                  uVar12 = ~uVar21 >> 0x1f;
                }
                local_1d0[0] = uVar21;
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                pFVar25 = (this->Corners).AllocatorInstance.Data + lVar15;
                *(uint *)pFVar25 = local_2d8[0];
                GetAllVertexGroups(this,local_2d8[0],
                                   (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar25 + 8));
                local_178 = local_2d8;
                local_170 = local_1d0;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)&this->VertexIDToCornerIDMap,
                           (TPairInitializer<int_const_&,int_const_&> *)(local_188 + 8),
                           (bool *)&local_178);
                if (local_res10[0] != '\0') {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&this->CurrentExtraCornerVids,(int *)(local_188 + 4),(bool *)local_2d8)
                  ;
                }
                goto LAB_14c737010;
              }
            }
            else {
              if (*(int *)&(this->VertexIDToCornerIDMap).field_0x8 !=
                  *(int *)&(this->VertexIDToCornerIDMap).field_0x34) {
                puVar2 = *(undefined1 **)&(this->VertexIDToCornerIDMap).field_0x40;
                puVar18 = &(this->VertexIDToCornerIDMap).field_0x38;
                if (puVar2 != (undefined1 *)0x0) {
                  puVar18 = puVar2;
                }
                iVar9 = *(int *)(puVar18 +
                                (ulonglong)
                                (*(int *)&(this->VertexIDToCornerIDMap).field_0x48 - 1U &
                                local_2d8[0]) * 4);
                if (iVar9 != -1) {
                  do {
                    if (*(uint *)(*(longlong *)&this->VertexIDToCornerIDMap + (longlong)iVar9 * 0x10
                                 ) == local_2d8[0]) goto LAB_14c736e7b;
                    iVar9 = *(int *)(*(longlong *)&this->VertexIDToCornerIDMap + 8 +
                                    (longlong)iVar9 * 0x10);
                  } while (iVar9 != -1);
                }
              }
              iVar9 = -1;
LAB_14c736e7b:
              if (iVar9 != -1) {
LAB_14c737010:
                if (((local_2f0.Data <= (FScriptContainerElement *)&local_2d0) &&
                    ((FScriptContainerElement *)&local_2d0 <
                     local_2f0.Data + (longlong)local_2e8._4_4_ * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if ((int)local_2e8 == local_2e8._4_4_) {
                  iVar9 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_2f0,(int *)((longlong)&local_2e8 + 4));
                  local_2e8 = CONCAT44(local_2e8._4_4_,iVar9);
                }
                lVar15 = (longlong)(int)local_2e8;
                local_2e8 = CONCAT44(local_2e8._4_4_,(int)local_2e8 + 1);
                *(uint *)(local_2f0.Data + lVar15 * 4) = local_2d0;
              }
            }
            local_2d0 = local_2d0 + 1;
            param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_res18;
          } while ((int)local_2d0 < local_2b0);
        }
        iVar9 = local_2b0;
        puVar16 = (uint *)0x0;
        if ((int)local_2e8 == 0) {
          puVar22 = *(uint **)(pFVar27 + 0x18);
          iVar9 = *(int *)(pFVar27 + 0x20);
          puVar13 = puVar22 + iVar9;
          while( true ) {
            if (*(int *)(pFVar27 + 0x20) != iVar9) {
              local_2e0[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_2e0);
            }
            if (puVar22 == puVar13) break;
            if ((puVar16 == (uint *)0x0) || ((int)*puVar22 < (int)*puVar16)) {
              puVar16 = puVar22;
            }
            puVar22 = puVar22 + 1;
          }
          local_1e8[0] = *puVar16;
          if (*(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)param_2)->Elements).field_0x8 !=
              *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)param_2)->Elements).field_0x34) {
            FVar3 = (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)param_2)->Hash).SecondaryData;
            FVar19 = (ForElementType<FSetElementId>)
                     &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)param_2)->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = FVar3;
            }
            uVar21 = *(uint *)((longlong)FVar19 +
                              (ulonglong)
                              (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                 *)param_2)->HashSize - 1U & local_1e8[0]) * 4);
            if (uVar21 != 0xffffffff) {
              do {
                puVar16 = (uint *)((longlong)(int)uVar21 * 0x10 +
                                  *(longlong *)
                                   &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                      *)param_2)->Elements);
                if (*puVar16 == local_1e8[0]) {
                  puVar13 = puVar16 + 1;
                  if (puVar16 == (uint *)0x0) {
                    puVar13 = (uint *)0x0;
                  }
                  if (puVar13 != (uint *)0x0) {
                    local_2cc = *puVar13;
                    goto LAB_14c737183;
                  }
                  break;
                }
                uVar21 = puVar16[2];
              } while (uVar21 != 0xffffffff);
            }
          }
          local_2cc = 0xffffffff;
LAB_14c737183:
          if (local_2cc == 0xffffffff) {
            if ((*(int *)(pFVar27 + 0x20) < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            pcVar5 = *(code **)(this->_padding_ + 0x18);
            uVar26 = *(ulonglong *)
                      (*(longlong *)
                        ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(**(uint **)(pFVar27 + 0x18) >> 9) * 8) + 8 +
                      (ulonglong)(**(uint **)(pFVar27 + 0x18) & 0x1ff) * 0x10);
            iVar9 = (int)(uVar26 >> 0x20);
            local_2a0 = uVar26;
            if (iVar9 == -1) {
              local_238 = (*pcVar5)(this,uVar26 & 0xffffffff);
              iStack_234 = -1;
            }
            else {
              iVar9 = (*pcVar5)(this,iVar9);
              iVar10 = (**(code **)(this->_padding_ + 0x18))(this,uVar26 & 0xffffffff);
              if ((iVar10 == iVar9) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Group1 != Group2",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                     ,0x212,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              if (((iVar10 < 0) || (iVar9 < 0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Group1 >= 0 && Group2 >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                     ,0x213,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              local_238 = iVar9;
              iStack_234 = iVar10;
              if (iVar10 < iVar9) {
                local_238 = iVar10;
                iStack_234 = iVar9;
              }
            }
            local_230.Mesh = this->Mesh;
            local_1f0 = 0xffffffffffffffff;
            local_230.Edges.ArrayNum = 0;
            local_230.Edges.ArrayMax = 0;
            local_230.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230.Vertices.ArrayNum = 0;
            local_230.Vertices.ArrayMax = 0;
            local_230.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_230.BowtieVertices.ArrayNum = 0;
            local_230.BowtieVertices.ArrayMax = 0;
            local_230.bBowtiesCalculated = false;
            FEdgeSpan::InitializeFromEdges
                      (&local_230,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar27 + 0x18));
            pFVar27 = (this->Edges).AllocatorInstance.Data;
            local_1d0[1] = 0xffffffff;
            local_1d0[2] = 0xffffffff;
            local_1f0 = 0xffffffffffffffff;
            if (((pFVar27 <= (FScriptContainerElement *)&local_238) &&
                ((FScriptContainerElement *)&local_238 <
                 pFVar27 + (longlong)(this->Edges).ArrayMax * 0x50)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            uVar21 = (this->Edges).ArrayNum;
            piVar1 = &(this->Edges).ArrayMax;
            if (uVar21 == *piVar1) {
              uVar21 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,&(this->Edges).AllocatorInstance,piVar1);
            }
            pFVar27 = (this->Edges).AllocatorInstance.Data;
            (this->Edges).ArrayNum = uVar21 + 1;
            pFVar27 = pFVar27 + (longlong)(int)uVar21 * 0x50;
            *(ulonglong *)pFVar27 = CONCAT44(iStack_234,local_238);
            FEdgeSpan::FEdgeSpan((FEdgeSpan *)(pFVar27 + 8),&local_230);
            *(undefined8 *)(pFVar27 + 0x48) = local_1f0;
            local_168 = local_1e8;
            local_160 = &local_2cc;
            local_2cc = uVar21;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)param_2,(TPairInitializer<int_const_&,int_const_&> *)local_188,
                       (bool *)&local_168);
            if (local_230.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.BowtieVertices.AllocatorInstance.Data);
            }
            if (local_230.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.Edges.AllocatorInstance.Data);
            }
            if (local_230.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_230.Vertices.AllocatorInstance.Data);
            }
          }
          pFVar27 = local_1e0;
          if (((*(uint **)&local_1e0->field_0x0 <= &local_2cc) &&
              (&local_2cc < *(uint **)&local_1e0->field_0x0 + *(int *)(local_1e0 + 0xc))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar9 = *(int *)&pFVar27[8].field_0x0;
          if (iVar9 == *(int *)(pFVar27 + 0xc)) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)pFVar27,(int *)(pFVar27 + 0xc));
          }
          *(int *)&pFVar27[8].field_0x0 = iVar9 + 1;
          *(uint *)(*(longlong *)&pFVar27->field_0x0 + (longlong)iVar9 * 4) = local_2cc;
          if (local_2f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data);
          }
        }
        else {
          lVar15 = (longlong)(int)local_2e8;
          if (((int)local_2e8 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_2b8 = *(uint *)local_2f0.Data;
          if (((local_2f0.Data <= (FScriptContainerElement *)&local_2b8) &&
              ((FScriptContainerElement *)&local_2b8 <
               local_2f0.Data + (longlong)local_2e8._4_4_ * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((int)local_2e8 == local_2e8._4_4_) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_2f0,(int *)((longlong)&local_2e8 + 4));
            local_2e8 = CONCAT44(local_2e8._4_4_,iVar10);
          }
          lVar17 = (longlong)(int)local_2e8;
          local_2ac = 0;
          local_2a0 = 0;
          local_2e8 = CONCAT44(local_2e8._4_4_,(int)local_2e8 + 1);
          *(uint *)(local_2f0.Data + lVar17 * 4) = local_2b8;
          local_1d8 = lVar15;
          if (0 < lVar15) {
            pFVar28 = pFVar28 + 0xc;
            local_1c0 = pFVar28;
            do {
              uVar26 = local_2a0;
              uVar21 = local_2ac;
              uVar12 = 0;
              if ((int)local_2ac < (int)local_2e8) {
                uVar12 = ~local_2ac >> 0x1f;
              }
              if (uVar12 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
              }
              uVar24 = uVar21 + 1;
              uVar12 = *(uint *)(local_2f0.Data + uVar26 * 4);
              uVar20 = 0;
              if ((int)uVar24 < (int)local_2e8) {
                uVar20 = ~uVar24 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              lVar17 = (longlong)(int)((*(int *)(local_2f0.Data + uVar26 * 4 + 4) - uVar12) + iVar9)
                       % (longlong)iVar9;
              iVar10 = (int)lVar17;
              if (((iVar10 == 0) && (iVar10 = iVar9, lVar15 != 1)) &&
                 (bVar6 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_3316175843021028650>,SUB81(lVar17,0),
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                                     ,0x2d6,"NumSpans == 1"), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              pFVar27 = local_298;
              uVar20 = 0;
              if ((int)uVar12 < *(int *)(local_298 + 0x20)) {
                uVar20 = ~uVar12 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              pFVar25 = local_298;
              iVar9 = local_2b0;
              iVar23 = 1;
              local_2b4 = *(uint *)(*(longlong *)(pFVar27 + 0x18) + (longlong)(int)uVar12 * 4);
              if (1 < iVar10) {
                do {
                  uVar20 = (int)(iVar23 + uVar12) % iVar9;
                  uVar21 = 0;
                  if ((int)uVar20 < *(int *)(pFVar25 + 0x20)) {
                    uVar21 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  uVar21 = *(uint *)(*(longlong *)(pFVar25 + 0x18) + (longlong)(int)uVar20 * 4);
                  if ((int)local_2b4 < (int)uVar21) {
                    uVar21 = local_2b4;
                  }
                  local_2b4 = uVar21;
                  iVar23 = iVar23 + 1;
                  lVar15 = local_1d8;
                  pFVar28 = local_1c0;
                  uVar21 = local_2ac;
                } while (iVar23 < iVar10);
              }
              pFVar27 = local_298;
              if (*(int *)&(local_res18->Elements).field_0x8 !=
                  *(int *)&(local_res18->Elements).field_0x34) {
                FVar3 = (local_res18->Hash).SecondaryData;
                FVar19 = (ForElementType<FSetElementId>)&local_res18->Hash;
                if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = FVar3;
                }
                uVar20 = *(uint *)((longlong)FVar19 +
                                  (ulonglong)(local_res18->HashSize - 1U & local_2b4) * 4);
                if (uVar20 != 0xffffffff) {
                  do {
                    puVar16 = (uint *)((longlong)(int)uVar20 * 0x10 +
                                      *(longlong *)&local_res18->Elements);
                    if (*puVar16 == local_2b4) {
                      puVar13 = puVar16 + 1;
                      if (puVar16 == (uint *)0x0) {
                        puVar13 = (uint *)0x0;
                      }
                      if (puVar13 != (uint *)0x0) {
                        local_2f8[0] = *puVar13;
                        if (local_2f8[0] == 0xffffffff) goto LAB_14c7378b3;
                        uVar12 = 0;
                        if ((int)local_2f8[0] < (this->Edges).ArrayNum) {
                          uVar12 = ~local_2f8[0] >> 0x1f;
                        }
                        if ((uVar12 == 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar6)) {
                          pcVar5 = (code *)swi(3);
                          uVar7 = (*pcVar5)();
                          return (bool)uVar7;
                        }
                        pFVar27 = local_1e0;
                        if (((*(uint **)&local_1e0->field_0x0 <= local_2f8) &&
                            (local_2f8 < *(uint **)&local_1e0->field_0x0 + *(int *)pFVar28)) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar6)) {
                          pcVar5 = (code *)swi(3);
                          uVar7 = (*pcVar5)();
                          return (bool)uVar7;
                        }
                        iVar9 = *(int *)&pFVar27[8].field_0x0;
                        if (iVar9 == *(int *)pFVar28) {
                          iVar9 = Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x404,(ForAnyElementType *)pFVar27,(int *)pFVar28);
                        }
                        *(int *)&pFVar27[8].field_0x0 = iVar9 + 1;
                        *(uint *)(*(longlong *)&pFVar27->field_0x0 + (longlong)iVar9 * 4) =
                             local_2f8[0];
                        goto LAB_14c737fa2;
                      }
                      break;
                    }
                    uVar20 = puVar16[2];
                  } while (uVar20 != 0xffffffff);
                }
              }
              local_2f8[0] = 0xffffffff;
LAB_14c7378b3:
              uVar20 = 0;
              if ((int)uVar12 < *(int *)(local_298 + 0x20)) {
                uVar20 = ~uVar12 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              uVar20 = *(uint *)(*(longlong *)(pFVar27 + 0x18) + (longlong)(int)uVar12 * 4);
              pcVar5 = *(code **)(this->_padding_ + 0x18);
              uVar4 = *(ulonglong *)
                       (*(longlong *)
                         ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar20 >> 9) * 8) + 8 + (ulonglong)(uVar20 & 0x1ff) * 0x10);
              iVar9 = (int)(uVar4 >> 0x20);
              local_1a8 = uVar4;
              if (iVar9 == -1) {
                local_288 = (*pcVar5)(this,uVar4 & 0xffffffff);
                iStack_284 = -1;
              }
              else {
                iVar9 = (*pcVar5)(this,iVar9);
                iVar23 = (**(code **)(this->_padding_ + 0x18))(this,uVar4 & 0xffffffff);
                if ((iVar23 == iVar9) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Group1 != Group2",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                       ,0x212,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if (((iVar23 < 0) || (iVar9 < 0)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Group1 >= 0 && Group2 >= 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                       ,0x213,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                local_288 = iVar9;
                iStack_284 = iVar23;
                if (iVar23 < iVar9) {
                  local_288 = iVar23;
                  iStack_284 = iVar9;
                }
              }
              pFVar27 = local_298;
              iVar9 = local_2b0;
              iVar23 = 0;
              local_240 = 0xffffffffffffffff;
              local_280.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.Vertices.ArrayNum = 0;
              local_280.Vertices.ArrayMax = 0;
              local_280.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.Edges.ArrayNum = 0;
              local_280.Edges.ArrayMax = 0;
              local_280.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.BowtieVertices.ArrayNum = 0;
              local_280.BowtieVertices.ArrayMax = 0;
              local_280.bBowtiesCalculated = false;
              local_280.Mesh = (FDynamicMesh3 *)0x0;
              local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_2c8.ArrayNum = 0;
              local_2c8.ArrayMax = 0;
              if (0 < iVar10 + 1) {
                do {
                  uVar20 = (int)(iVar23 + uVar12) % iVar9;
                  uVar21 = 0;
                  if ((int)uVar20 < *(int *)(pFVar27 + 0x10)) {
                    uVar21 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  pFVar28 = (FScriptContainerElement *)
                            (*(longlong *)(pFVar27 + 8) + (longlong)(int)uVar20 * 4);
                  if (((local_2c8.AllocatorInstance.Data <= pFVar28) &&
                      (pFVar28 < local_2c8.AllocatorInstance.Data + (longlong)local_2c8.ArrayMax * 4
                      )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    uVar7 = (*pcVar5)();
                    return (bool)uVar7;
                  }
                  if (local_2c8.ArrayNum == local_2c8.ArrayMax) {
                    iVar11 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
                    local_2c8.ArrayNum = iVar11;
                  }
                  lVar15 = (longlong)local_2c8.ArrayNum;
                  iVar23 = iVar23 + 1;
                  local_2c8.ArrayNum = local_2c8.ArrayNum + 1;
                  *(int *)(local_2c8.AllocatorInstance.Data + lVar15 * 4) = *(int *)pFVar28;
                  uVar26 = local_2a0;
                  pFVar28 = local_1c0;
                  uVar21 = local_2ac;
                } while (iVar23 < iVar10 + 1);
              }
              local_280.Mesh = this->Mesh;
              if (local_280.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Vertices.AllocatorInstance.Data);
              }
              local_280.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.Vertices.ArrayNum = 0;
              local_280.Vertices.ArrayMax = 0;
              if (local_280.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Edges.AllocatorInstance.Data);
              }
              local_280.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.Edges.ArrayNum = 0;
              local_280.Edges.ArrayMax = 0;
              if (local_280.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_280.BowtieVertices.AllocatorInstance.Data);
              }
              local_280.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_280.BowtieVertices.ArrayNum = 0;
              local_280.BowtieVertices.ArrayMax = 0;
              local_280.bBowtiesCalculated = false;
              FEdgeSpan::InitializeFromVertices(&local_280,&local_2c8,true);
              uVar12 = 0;
              if ((int)(local_2c8.ArrayNum - 1U) < local_2c8.ArrayNum) {
                uVar12 = ~(local_2c8.ArrayNum - 1U) >> 0x1f;
              }
              if (uVar12 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
              }
              iVar9 = GetCornerIDFromVertexID
                                (this,*(int *)(local_2c8.AllocatorInstance.Data +
                                              (longlong)local_2c8.ArrayNum * 4 + -4));
              if ((local_2c8.ArrayNum < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              local_1b8 = GetCornerIDFromVertexID(this,*(int *)local_2c8.AllocatorInstance.Data);
              local_240 = CONCAT44(iVar9,local_1b8);
              iStack_1b4 = iVar9;
              if (((local_1b8 == -1) || (iVar9 == -1)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Edge.EndpointCorners.A != IndexConstants::InvalidID && Edge.EndpointCorners.B != IndexConstants::InvalidID"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                                     ,0x2f8,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              pFVar27 = (this->Edges).AllocatorInstance.Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_288) &&
                  ((FScriptContainerElement *)&local_288 <
                   pFVar27 + (longlong)(this->Edges).ArrayMax * 0x50)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              uVar12 = (this->Edges).ArrayNum;
              piVar1 = &(this->Edges).ArrayMax;
              if (uVar12 == *piVar1) {
                uVar12 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x850,&(this->Edges).AllocatorInstance,piVar1);
              }
              pFVar27 = (this->Edges).AllocatorInstance.Data;
              (this->Edges).ArrayNum = uVar12 + 1;
              pFVar27 = pFVar27 + (longlong)(int)uVar12 * 0x50;
              *(ulonglong *)pFVar27 = CONCAT44(iStack_284,local_288);
              FEdgeSpan::FEdgeSpan((FEdgeSpan *)(pFVar27 + 8),&local_280);
              pFVar25 = local_1e0;
              *(undefined8 *)(pFVar27 + 0x48) = local_240;
              local_2f8[0] = uVar12;
              if (((*(uint **)&local_1e0->field_0x0 <= local_2f8) &&
                  (local_2f8 < *(uint **)&local_1e0->field_0x0 + *(int *)pFVar28)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
              iVar9 = *(int *)&pFVar25[8].field_0x0;
              if (iVar9 == *(int *)pFVar28) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar25,(int *)pFVar28);
              }
              *(int *)&pFVar25[8].field_0x0 = iVar9 + 1;
              *(uint *)(*(longlong *)&pFVar25->field_0x0 + (longlong)iVar9 * 4) = local_2f8[0];
              local_158 = &local_2b4;
              local_150 = local_2f8;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (local_res18,&local_198,(bool *)&local_158);
              if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.AllocatorInstance.Data);
              }
              if (local_280.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_280.BowtieVertices.AllocatorInstance.Data);
              }
              if (local_280.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Edges.AllocatorInstance.Data);
              }
              lVar15 = local_1d8;
              if (local_280.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Vertices.AllocatorInstance.Data);
                lVar15 = local_1d8;
              }
LAB_14c737fa2:
              local_2ac = uVar21 + 1;
              local_2a0 = uVar26 + 1;
              iVar9 = local_2b0;
            } while ((longlong)local_2a0 < lVar15);
          }
          param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    local_res18;
          param_3 = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
          if (local_2f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data);
            param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_res18;
            param_3 = (TBitArray<FDefaultBitArrayAllocator> *)local_res20;
          }
        }
        local_2a8 = local_2a8 + 1;
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < (longlong)local_198.Value);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FMeshRegionBoundaryLoops::~FMeshRegionBoundaryLoops(&local_148);
  return bVar6;
}

// GetAllVertexGroups @ 14c739120

void __thiscall
UE::Geometry::FGroupTopology::GetAllVertexGroups
          (FGroupTopology *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  FSmallListSet *pFVar2;
  int local_res8 [2];
  int local_res10 [4];
  undefined8 local_res20;
  BaseValueIterator local_58;
  
  pFVar2 = &this->Mesh->VertexEdgeLists;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_58,pFVar2,param_1,false);
  while ((((local_58.ListSet != pFVar2 || (local_58.ListIndex != param_1)) || (local_58.iCur != -1))
         || (local_58.cur_ptr != -1))) {
    uVar1 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
               ((local_58._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
             (ulonglong)(local_58.cur_value & 0x1ff) * 0x10);
    local_res20 = uVar1;
    local_res10[0] = (**(code **)(this->_padding_ + 0x18))(this,uVar1 & 0xffffffff);
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(param_2,local_res10);
    if ((int)(uVar1 >> 0x20) != -1) {
      local_res8[0] = (**(code **)(this->_padding_ + 0x18))(this,local_res20._4_4_);
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(param_2,local_res8);
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_58);
  }
  return;
}

// GetCornerIDFromVertexID @ 14c7394f0

int __thiscall
UE::Geometry::FGroupTopology::GetCornerIDFromVertexID(FGroupTopology *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  
  pFVar1 = this->Mesh;
  if ((((param_1 < 0) ||
       ((int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                   (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh->IsVertex(VertexID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0xd9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (*(int *)&(this->VertexIDToCornerIDMap).field_0x8 !=
      *(int *)&(this->VertexIDToCornerIDMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->VertexIDToCornerIDMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->VertexIDToCornerIDMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->VertexIDToCornerIDMap).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar4 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar4 * 0x10 + *(longlong *)&this->VertexIDToCornerIDMap);
        if (*piVar6 == param_1) {
          piVar5 = piVar6 + 1;
          if (piVar6 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 == (int *)0x0) {
            return -1;
          }
          return *piVar5;
        }
        iVar4 = piVar6[2];
      } while (iVar4 != -1);
    }
  }
  return -1;
}

// GetCornerVertexID @ 14c7395f0

int __thiscall UE::Geometry::FGroupTopology::GetCornerVertexID(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->Corners).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CornerID >= 0 && CornerID < Corners.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0xd3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Corners).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Corners).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// GetEdgeArcLength @ 14c7397e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

double __thiscall
UE::Geometry::FGroupTopology::GetEdgeArcLength
          (FGroupTopology *this,int param_1,TArray<double,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar13 = (longlong)param_1;
  piVar1 = &(this->Edges).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x167,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    dVar15 = (double)(*pcVar7)();
    return dVar15;
  }
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                         ,0x128,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    dVar15 = (double)(*pcVar7)();
    return dVar15;
  }
  uVar12 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    dVar15 = (double)(*pcVar7)();
    return dVar15;
  }
  pFVar4 = (this->Edges).AllocatorInstance.Data;
  iVar3 = *(int *)(pFVar4 + lVar13 * 0x50 + 0x18);
  if (param_2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar3,Default);
    if ((param_2->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      dVar15 = (double)(*pcVar7)();
      return dVar15;
    }
    *(undefined8 *)(param_2->AllocatorInstance).Data = 0;
  }
  uVar12 = 1;
  dVar15 = 0.0;
  if ((longlong)iVar3 < 2) {
    dVar15 = 0.0;
  }
  else {
    lVar14 = 1;
    do {
      pFVar5 = this->Mesh;
      uVar10 = 0;
      if ((int)(uVar12 - 1) < *(int *)(pFVar4 + lVar13 * 0x50 + 0x18)) {
        uVar10 = -uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        dVar15 = (double)(*pcVar7)();
        return dVar15;
      }
      uVar10 = *(uint *)(*(longlong *)(pFVar4 + lVar13 * 0x50 + 0x10) + -4 + lVar14 * 4);
      uVar11 = (ulonglong)(uVar10 & 0x1ff);
      lVar6 = *(longlong *)
               ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      pdVar2 = (double *)(lVar6 + uVar11 * 0x18);
      dVar19 = *pdVar2;
      dVar20 = pdVar2[1];
      dVar18 = *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
      pFVar5 = this->Mesh;
      uVar10 = 0;
      if ((int)uVar12 < *(int *)(pFVar4 + lVar13 * 0x50 + 0x18)) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        dVar15 = (double)(*pcVar7)();
        return dVar15;
      }
      uVar10 = *(uint *)(*(longlong *)(pFVar4 + lVar13 * 0x50 + 0x10) + lVar14 * 4);
      uVar11 = (ulonglong)(uVar10 & 0x1ff);
      lVar6 = *(longlong *)
               ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      dVar18 = dVar18 - *(double *)(lVar6 + 0x10 + uVar11 * 0x18);
      pdVar2 = (double *)(lVar6 + uVar11 * 0x18);
      dVar8 = pdVar2[1];
      dVar19 = dVar19 - *pdVar2;
      auVar16._8_8_ = dVar8;
      auVar16._0_8_ = dVar8;
      dVar20 = dVar20 - dVar8;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
      auVar17 = sqrtpd(auVar16,auVar17);
      dVar15 = dVar15 + auVar17._0_8_;
      if (param_2 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
        uVar10 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          dVar15 = (double)(*pcVar7)();
          return dVar15;
        }
        *(double *)((param_2->AllocatorInstance).Data + lVar14 * 8) = dVar15;
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar3);
  }
  return dVar15;
}

// GetEdgeAveragePosition @ 14c739b20

TVector<double> * __thiscall
UE::Geometry::FGroupTopology::GetEdgeAveragePosition
          (FGroupTopology *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TVector<double> *pTVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 local_c8 [16];
  double local_b8;
  
  pTVar12 = GetGroupEdgeVertices(this,param_1);
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar25 = 0.0;
  pFVar3 = this->Mesh;
  if ((pTVar12->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar13 = (TVector<double> *)(*pcVar5)();
    return pTVar13;
  }
  dVar9 = __real_3fe0000000000000;
  uVar16 = *(uint *)(pTVar12->AllocatorInstance).Data;
  uVar14 = (ulonglong)(uVar16 & 0x1ff);
  lVar17 = *(longlong *)
            ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
  iVar15 = pTVar12->ArrayNum;
  dVar23 = *(double *)(lVar17 + 0x10 + uVar14 * 0x18);
  pauVar1 = (undefined1 (*) [16])(lVar17 + uVar14 * 0x18);
  uVar18 = *(undefined4 *)*pauVar1;
  uVar19 = *(undefined4 *)(*pauVar1 + 4);
  uVar20 = *(undefined4 *)(*pauVar1 + 8);
  uVar21 = *(undefined4 *)(*pauVar1 + 0xc);
  if (1 < iVar15) {
    uVar16 = 1;
    lVar17 = 4;
    local_c8 = *pauVar1;
    local_b8 = dVar23;
    do {
      pFVar3 = this->Mesh;
      uVar11 = 0;
      if ((int)uVar16 < iVar15) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar13 = (TVector<double> *)(*pcVar5)();
        return pTVar13;
      }
      uVar16 = uVar16 + 1;
      uVar11 = *(uint *)((pTVar12->AllocatorInstance).Data + lVar17);
      lVar17 = lVar17 + 4;
      uVar14 = (ulonglong)(uVar11 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      auVar2 = *(undefined1 (*) [16])(lVar4 + uVar14 * 0x18);
      uVar18 = auVar2._0_4_;
      uVar19 = auVar2._4_4_;
      uVar20 = auVar2._8_4_;
      uVar21 = auVar2._12_4_;
      dVar23 = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
      iVar15 = pTVar12->ArrayNum;
      dVar24 = auVar2._0_8_ - (double)local_c8._0_8_;
      dVar22 = auVar2._8_8_ - (double)local_c8._8_8_;
      dVar22 = SQRT(dVar22 * dVar22 + dVar24 * dVar24 + (dVar23 - local_b8) * (dVar23 - local_b8));
      dVar25 = dVar25 + dVar22;
      dVar22 = dVar22 * dVar9;
      uVar6 = (double)uVar6 + ((double)local_c8._0_8_ + auVar2._0_8_) * dVar22;
      uVar7 = (double)uVar7 + ((double)local_c8._8_8_ + auVar2._8_8_) * dVar22;
      uVar8 = (double)uVar8 + (local_b8 + dVar23) * dVar22;
      local_c8 = auVar2;
      local_b8 = dVar23;
    } while ((int)uVar16 < iVar15);
    if (__real_3cb0000000000000 <= dVar25) {
      dVar25 = __real_3ff0000000000000 / dVar25;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar25 * (double)uVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar25 * (double)uVar7;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar25 * (double)uVar8;
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar18;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar19;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar20;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar21;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar23;
  return __return_storage_ptr__;
}

// GetEdgeMidpoint @ 14c73a330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TVector<double> * __thiscall
UE::Geometry::FGroupTopology::GetEdgeMidpoint
          (FGroupTopology *this,TVector<double> *__return_storage_ptr__,int param_1,double *param_2,
          TArray<double,TSizedDefaultAllocator<32>_> *param_3)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FDynamicMesh3 *pFVar7;
  FDynamicMesh3 *pFVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  TVector<double> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  
  if (((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                          ,0x197,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar10)();
    return pTVar12;
  }
  pTVar13 = GetGroupEdgeVertices(this,param_1);
  iVar6 = pTVar13->ArrayNum;
  if (iVar6 == 2) {
    uVar15 = *(uint *)(pTVar13->AllocatorInstance).Data;
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar19 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar20 = pdVar1[1];
    dVar3 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    uVar15 = *(uint *)((pTVar13->AllocatorInstance).Data + 4);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar19 = *(longlong *)
              ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    dVar4 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar24 = *pdVar1;
    dVar25 = pdVar1[1];
    if (param_2 != (double *)0x0) {
      *param_2 = SQRT((dVar25 - dVar20) * (dVar25 - dVar20) + (dVar24 - dVar5) * (dVar24 - dVar5) +
                      (dVar4 - dVar3) * (dVar4 - dVar3));
    }
    if (param_3 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      TArray<double,TSizedDefaultAllocator<32>_>::SetNum(param_3,2,Default);
      if ((param_3->ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar10)();
        return pTVar12;
      }
      *(undefined8 *)(param_3->AllocatorInstance).Data = 0;
      if ((param_3->ArrayNum < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar10)();
        return pTVar12;
      }
      *(double *)((param_3->AllocatorInstance).Data + 8) =
           SQRT((dVar25 - dVar20) * (dVar25 - dVar20) + (dVar24 - dVar5) * (dVar24 - dVar5) +
                (dVar4 - dVar3) * (dVar4 - dVar3));
    }
    dVar20 = (dVar25 + dVar20) * __real_3fe0000000000000;
    dVar3 = (dVar3 + dVar4) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 + dVar24) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar20;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  else if (param_3 == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    dVar3 = GetEdgeArcLength(this,param_1,(TArray<double,TSizedDefaultAllocator<32>_> *)0x0);
    if (param_2 != (double *)0x0) {
      *param_2 = dVar3;
    }
    dVar4 = __real_3fe0000000000000;
    uVar16 = 1;
    dVar3 = dVar3 * __real_3fe0000000000000;
    uVar15 = 0;
    if (1 < iVar6) {
      lVar19 = 1;
      dVar5 = 0.0;
      do {
        pFVar7 = this->Mesh;
        uVar17 = 0;
        if ((int)(uVar16 - 1) < pTVar13->ArrayNum) {
          uVar17 = -uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          pTVar12 = (TVector<double> *)(*pcVar10)();
          return pTVar12;
        }
        uVar17 = *(uint *)((pTVar13->AllocatorInstance).Data + lVar19 * 4 + -4);
        uVar14 = (ulonglong)(uVar17 & 0x1ff);
        lVar9 = *(longlong *)
                 ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
        pdVar1 = (double *)(lVar9 + uVar14 * 0x18);
        dVar24 = *pdVar1;
        dVar25 = pdVar1[1];
        dVar20 = *(double *)(lVar9 + 0x10 + uVar14 * 0x18);
        pFVar7 = this->Mesh;
        uVar17 = 0;
        if ((int)uVar16 < pTVar13->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          pTVar12 = (TVector<double> *)(*pcVar10)();
          return pTVar12;
        }
        uVar17 = *(uint *)((pTVar13->AllocatorInstance).Data + lVar19 * 4);
        uVar14 = (ulonglong)(uVar17 & 0x1ff);
        lVar9 = *(longlong *)
                 ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
        pdVar1 = (double *)(lVar9 + uVar14 * 0x18);
        dVar23 = *(double *)(lVar9 + 0x10 + uVar14 * 0x18);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar23;
        dVar24 = dVar24 - *pdVar1;
        dVar20 = dVar20 - dVar23;
        dVar25 = dVar25 - pdVar1[1];
        auVar22._8_8_ = 0;
        auVar22._0_8_ = dVar25 * dVar25 + dVar24 * dVar24 + dVar20 * dVar20;
        auVar22 = sqrtpd(auVar21,auVar22);
        dVar20 = auVar22._0_8_ + dVar5;
        if (dVar3 < dVar20) {
          pFVar7 = this->Mesh;
          uVar17 = uVar15;
          if ((int)(uVar16 - 1) < pTVar13->ArrayNum) {
            uVar17 = -uVar16 >> 0x1f;
          }
          dVar3 = (dVar3 - dVar5) / auVar22._0_8_;
          if ((uVar17 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            pTVar12 = (TVector<double> *)(*pcVar10)();
            return pTVar12;
          }
          pFVar8 = this->Mesh;
          uVar17 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar16 * 4 + -4);
          uVar14 = (ulonglong)(uVar17 & 0x1ff);
          lVar19 = *(longlong *)
                    ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8
                    );
          dVar4 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
          pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
          dVar5 = *pdVar1;
          dVar20 = pdVar1[1];
          if ((int)uVar16 < pTVar13->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            pTVar12 = (TVector<double> *)(*pcVar10)();
            return pTVar12;
          }
          dVar23 = __real_3ff0000000000000 - dVar3;
          uVar15 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
          uVar14 = (ulonglong)(uVar15 & 0x1ff);
          lVar19 = *(longlong *)
                    ((pFVar8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8
                    );
          pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
          dVar25 = pdVar1[1];
          dVar24 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
          (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5 * dVar23 + *pdVar1 * dVar3;
          dVar4 = dVar4 * dVar23 + dVar24 * dVar3;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar20 * dVar23 + dVar25 * dVar3;
          goto LAB_14c73ab7f;
        }
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 1;
        dVar5 = dVar20;
      } while (lVar19 < iVar6);
    }
    pFVar7 = this->Mesh;
    if ((pTVar13->ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    uVar16 = *(uint *)(pTVar13->AllocatorInstance).Data;
    pFVar8 = this->Mesh;
    uVar14 = (ulonglong)(uVar16 & 0x1ff);
    uVar17 = iVar6 - 1;
    lVar19 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar20 = pdVar1[1];
    dVar3 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    if ((int)uVar17 < pTVar13->ArrayNum) {
      uVar15 = ~uVar17 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    uVar15 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar17 * 4);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar19 = *(longlong *)
              ((pFVar8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar24 = pdVar1[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 + *pdVar1) * dVar4;
    dVar5 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar20 + dVar24) * dVar4;
    dVar4 = (dVar3 + dVar5) * dVar4;
LAB_14c73ab7f:
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  }
  else {
    dVar3 = GetEdgeArcLength(this,param_1,param_3);
    if (param_2 != (double *)0x0) {
      *param_2 = dVar3;
    }
    dVar3 = dVar3 * __real_3fe0000000000000;
    uVar15 = 0;
    lVar19 = 0;
    while( true ) {
      uVar17 = ~uVar15 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar16 = uVar17;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar10)();
        return pTVar12;
      }
      pFVar2 = (param_3->AllocatorInstance).Data + lVar19;
      if (dVar3 < *(double *)pFVar2 || dVar3 == *(double *)pFVar2) break;
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 8;
    }
    uVar18 = ~(uVar15 - 1) >> 0x1f;
    uVar16 = 0;
    if ((int)(uVar15 - 1) < param_3->ArrayNum) {
      uVar16 = uVar18;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    dVar4 = *(double *)((param_3->AllocatorInstance).Data + (longlong)(int)(uVar15 - 1) * 8);
    uVar16 = 0;
    if ((int)uVar15 < param_3->ArrayNum) {
      uVar16 = uVar17;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    pFVar7 = this->Mesh;
    uVar16 = 0;
    if ((int)(uVar15 - 1) < pTVar13->ArrayNum) {
      uVar16 = uVar18;
    }
    dVar3 = (dVar3 - dVar4) /
            (*(double *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar15 * 8) - dVar4);
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    pFVar8 = this->Mesh;
    uVar16 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)(uVar15 - 1) * 4);
    uVar14 = (ulonglong)(uVar16 & 0x1ff);
    lVar19 = *(longlong *)
              ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8);
    dVar4 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar5 = *pdVar1;
    dVar20 = pdVar1[1];
    uVar16 = 0;
    if ((int)uVar15 < pTVar13->ArrayNum) {
      uVar16 = uVar17;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      pTVar12 = (TVector<double> *)(*pcVar10)();
      return pTVar12;
    }
    dVar23 = __real_3ff0000000000000 - dVar3;
    uVar15 = *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)(int)uVar15 * 4);
    uVar14 = (ulonglong)(uVar15 & 0x1ff);
    lVar19 = *(longlong *)
              ((pFVar8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    pdVar1 = (double *)(lVar19 + uVar14 * 0x18);
    dVar25 = pdVar1[1];
    dVar24 = *(double *)(lVar19 + 0x10 + uVar14 * 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1 * dVar3 + dVar23 * dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar24 * dVar3 + dVar23 * dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar25 * dVar3 + dVar23 * dVar20;
  }
  return __return_storage_ptr__;
}

// GetGroupEdgeEdges @ 14c73c100

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FGroupTopology::GetGroupEdgeEdges(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if ((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x12e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x20);
}

// GetGroupEdgeTangent @ 14c73c1b0

bool __thiscall
UE::Geometry::FGroupTopology::GetGroupEdgeTangent
          (FGroupTopology *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar14 = (longlong)param_1;
  if ((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                        ,0x314,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  uVar12 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  pFVar3 = this->Mesh;
  if (*(int *)(pFVar2 + lVar14 * 0x50 + 0x18) < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  pFVar4 = this->Mesh;
  uVar13 = (ulonglong)(**(uint **)(pFVar2 + lVar14 * 0x50 + 0x10) & 0x1ff);
  uVar15 = *(int *)(pFVar2 + lVar14 * 0x50 + 0x18) - 1;
  lVar5 = *(longlong *)
           ((pFVar3->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)(**(uint **)(pFVar2 + lVar14 * 0x50 + 0x10) >> 9) * 8);
  dVar17 = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar13 * 0x18);
  dVar18 = *pdVar1;
  dVar8 = pdVar1[1];
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(pFVar2 + lVar14 * 0x50 + 0x18)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
  }
  uVar9 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  uVar12 = *(uint *)(*(longlong *)(pFVar2 + lVar14 * 0x50 + 0x10) + (longlong)(int)uVar15 * 4);
  uVar13 = (ulonglong)(uVar12 & 0x1ff);
  lVar14 = *(longlong *)
            ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar13 * 0x18);
  dVar17 = *(double *)(lVar14 + 0x10 + uVar13 * 0x18) - dVar17;
  dVar18 = *pdVar1 - dVar18;
  dVar8 = pdVar1[1] - dVar8;
  dVar16 = dVar8 * dVar8 + dVar18 * dVar18 + dVar17 * dVar17;
  if (dVar16 <= __real_3eb0c6f7a0b5ed8d) {
    bVar10 = false;
    (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    (param_2->field0_0x0)._s_0.Y = (double)uVar9;
    uVar9 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  }
  else {
    dVar16 = SQRT(dVar16);
    if (dVar16 <= 0.0) {
      bVar10 = true;
      (param_2->field0_0x0)._s_0.X = 0.0;
      (param_2->field0_0x0)._s_0.Y = 0.0;
      uVar9 = 0.0;
    }
    else {
      bVar10 = true;
      dVar16 = __real_3ff0000000000000 / dVar16;
      auVar7._8_4_ = SUB84(dVar16 * dVar8,0);
      auVar7._0_8_ = dVar16 * dVar18;
      auVar7._12_4_ = (int)((ulonglong)(dVar16 * dVar8) >> 0x20);
      *(undefined1 (*) [16])&param_2->field0_0x0 = auVar7;
      uVar9 = dVar16 * dVar17;
    }
  }
  (param_2->field0_0x0)._s_0.Z = (double)uVar9;
  return bVar10;
}

// GetGroupEdgeVertices @ 14c73c430

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FGroupTopology::GetGroupEdgeVertices(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if ((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x128,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x10);
}

// GetGroupFrame @ 14c73c4e0

TFrame3<double> * __thiscall
UE::Geometry::FGroupTopology::GetGroupFrame
          (FGroupTopology *this,TFrame3<double> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  TFrame3<double> *pTVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  double dVar19;
  double dVar20;
  undefined1 local_res18 [8];
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_d0;
  TVector<double> local_b8;
  TVector<double> local_a0 [5];
  
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  unique0x10000090 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  unique0x10000094 =
       (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar16 = 0;
  if (param_1 < (this->GroupIDToGroupIndexMap).ArrayNum) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFrame3<double> *)(*pcVar5)();
      return pTVar14;
    }
  }
  uVar16 = *(uint *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data + (longlong)param_1 * 4);
  uVar13 = 0;
  if ((int)uVar16 < (this->Groups).ArrayNum) {
    uVar13 = ~uVar16 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TFrame3<double> *)(*pcVar5)();
      return pTVar14;
    }
  }
  pFVar4 = (this->Groups).AllocatorInstance.Data;
  lVar17 = (longlong)(int)uVar16 * 0x38;
  piVar18 = *(int **)(pFVar4 + lVar17 + 8);
  iVar2 = *(int *)(pFVar4 + lVar17 + 0x10);
  piVar1 = piVar18 + iVar2;
  dVar8 = local_e8;
  dVar7 = dStack_e0;
  uVar6 = local_d8;
  while( true ) {
    if (*(int *)(pFVar4 + lVar17 + 0x10) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (piVar18 == piVar1) break;
    iVar3 = *piVar18;
    pTVar15 = FDynamicMesh3::GetTriCentroid(this->Mesh,&local_b8,iVar3);
    uVar9 = (double)uVar9 + (pTVar15->field0_0x0)._s_0.X;
    uVar10 = (double)uVar10 + (pTVar15->field0_0x0)._s_0.Y;
    uVar11 = (double)uVar11 + (pTVar15->field0_0x0)._s_0.Z;
    pTVar15 = FDynamicMesh3::GetTriNormal(this->Mesh,local_a0,iVar3);
    piVar18 = piVar18 + 1;
    dVar8 = dVar8 + (pTVar15->field0_0x0)._s_0.X;
    dVar7 = dVar7 + (pTVar15->field0_0x0)._s_0.Y;
    uVar6 = (double)uVar6 + (pTVar15->field0_0x0)._s_0.Z;
  }
  dVar20 = __real_3ff0000000000000 / (double)*(int *)(pFVar4 + lVar17 + 0x10);
  dVar19 = SQRT(dVar7 * dVar7 + dVar8 * dVar8 + (double)uVar6 * (double)uVar6);
  if (dVar19 <= 0.0) {
    _local_e8 = ZEXT816(0);
    local_d8 = 0.0;
  }
  else {
    dVar19 = __real_3ff0000000000000 / dVar19;
    local_d8 = (double)uVar6 * dVar19;
    dStack_e0 = dVar7 * dVar19;
    local_e8 = dVar8 * dVar19;
  }
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar20 * (double)uVar9;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar20 * (double)uVar10;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar20 * (double)uVar11;
  local_d0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_d0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_d0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  TQuaternion<double>::SetFromTo
            (&__return_storage_ptr__->Rotation,(TVector<double> *)&local_d0._s_0,
             (TVector<double> *)&local_e8);
  return __return_storage_ptr__;
}

// GetGroupID @ 14c73c7c0

/* WARNING: Removing unreachable block (ram,0x00014c73c872) */

int __thiscall UE::Geometry::FGroupTopology::GetGroupID(FGroupTopology *this,int param_1)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  int iVar3;
  
  if (this->GroupLayer != (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
    iVar3 = *(int *)(*(longlong *)
                      (*(longlong *)&this->GroupLayer->field_0x20 +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    return iVar3;
  }
  pFVar2 = this->Mesh;
  if ((pFVar2->TriangleGroups).bIsSet == false) {
    return 0;
  }
  if ((-1 < param_1) &&
     (param_1 < (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)
                             ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             lVar1) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iVar3 = *(int *)(*(longlong *)
                        ((pFVar2->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1)
                      + (ulonglong)(param_1 & 0x1ff) * 4);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      return iVar3;
    }
  }
  return 0;
}

// GetGroupNbrGroups @ 14c73c8a0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FGroupTopology::GetGroupNbrGroups(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FGroup *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pFVar3 = FindGroupByID(this,param_1);
  if (pFVar3 == (FGroup *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021029133>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0xf3,"Found != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pTVar4 = &pFVar3->NeighbourGroupIDs;
  if (pFVar3 == (FGroup *)0x0) {
    pTVar4 = &this->EmptyArray;
  }
  return pTVar4;
}

// GetGroupTriangles @ 14c73c910

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FGroupTopology::GetGroupTriangles(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FGroup *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pFVar3 = FindGroupByID(this,param_1);
  if (pFVar3 == (FGroup *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021029140>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0xec,"Found != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  pTVar4 = &pFVar3->Triangles;
  if (pFVar3 == (FGroup *)0x0) {
    pTVar4 = &this->EmptyArray;
  }
  return pTVar4;
}

// GetSelectedTriangles @ 14c741170

void __thiscall
UE::Geometry::FGroupTopology::GetSelectedTriangles
          (FGroupTopology *this,FGroupTopologySelection *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FGroupTopologySelection *pFVar7;
  bool bVar8;
  FGroup *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [4];
  undefined4 local_b4;
  FGroupTopologySelection *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  FGroupTopologySelection *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SelectedGroupIDs).Elements.field_0x10
  ;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar18;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14c74121e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_14c74121e:
  uVar11 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  iStack_88 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
              *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = (undefined1 *)pTVar18;
  iStack_8c = iStack_94;
  local_78 = pTVar18;
  local_70 = param_1;
  TStack_68.Array = pTVar18;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  if (uVar11 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar18;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14c74131f;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_7c = (int)lVar10;
    uVar11 = local_7c + -1 + uVar16;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14c74131f:
  while( true ) {
    pFVar7 = local_70;
    if (*(int *)&(local_70->SelectedGroupIDs).Elements.field_0x8 -
        *(int *)&(local_70->SelectedGroupIDs).Elements.field_0x34 != (int)uStack_48) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) && (TStack_68.Array == pTVar18)) &&
       (pFVar7 == param_1)) break;
    pFVar9 = FindGroupByID(this,*(int *)(*(longlong *)&(pFVar7->SelectedGroupIDs).Elements +
                                        (longlong)TStack_68.CurrentBitIndex * 0xc));
    if ((pFVar9 == (FGroup *)0x0) &&
       (bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3316175843021029140>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                           ,0xec,"Found != nullptr"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar17 = &pFVar9->Triangles;
    if (pFVar9 == (FGroup *)0x0) {
      pTVar17 = &this->EmptyArray;
    }
    pFVar13 = (pTVar17->AllocatorInstance).Data;
    iVar3 = pTVar17->ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar3 * 4;
    while( true ) {
      if (pTVar17->ArrayNum != iVar3) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b8);
      }
      if (pFVar13 == pFVar1) break;
      local_b4 = *(undefined4 *)pFVar13;
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_b4) &&
          ((FScriptContainerElement *)&local_b4 < pFVar5 + (longlong)param_2->ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar12;
      }
      pFVar13 = pFVar13 + 4;
      param_2->ArrayNum = iVar12 + 1;
      *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_b4;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    pTVar18 = local_78;
  }
  return;
}

// GetSelectionBounds @ 14c7414c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FGroupTopology::GetSelectionBounds
          (FGroupTopology *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined8 *puVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  FGroupTopologySelection *pFVar10;
  bool bVar11;
  TAxisAlignedBox3<double> *pTVar12;
  FGroup *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6;
  undefined1 local_2d5;
  undefined1 local_2d4 [4];
  uint local_2d0;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined8 local_2c0;
  uint local_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  FGroupTopologySelection *local_2a0;
  uint uStack_298;
  uint uStack_294;
  undefined1 *local_290;
  undefined4 uStack_288;
  uint uStack_284;
  uint local_280;
  int iStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_270;
  int iStack_268;
  uint uStack_264;
  undefined1 *local_260;
  undefined4 uStack_258;
  int iStack_254;
  int local_250;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  TVector<double>_u_0 local_228;
  double dStack_210;
  double local_208;
  double dStack_200;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FGroupTopologySelection *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TVector<double> local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0;
  TVector<double> local_a8;
  TVector<double> local_90 [2];
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (((*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 ==
        *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34) &&
      (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 ==
       *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34)) &&
     (*(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 ==
      *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34)) {
    bVar11 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3316175843021028409>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                        ,0x3c7,"!Selection.IsEmpty()");
    if (!bVar11) {
      FDynamicMesh3::GetBounds(this->Mesh,__return_storage_ptr__,false);
      return __return_storage_ptr__;
    }
    pcVar7 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
    return pTVar12;
  }
  local_2a8 = *(code **)param_2;
  pFVar3 = this->Mesh;
  pTVar1 = &param_1->SelectedCornerIDs;
  local_228._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_228._s_0.Y = _UNK_150a9e648;
  local_2b0 = *(undefined8 *)&param_2->field_0x8;
  local_250 = 0;
  iStack_268 = 0;
  puVar23 = &(param_1->SelectedCornerIDs).Elements.field_0x10;
  local_208 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_200 = _UNK_1508ffb58;
  local_2c0 = 1;
  local_228._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  dStack_210 = _UNK_150a9e6d8;
  iVar20 = *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  uStack_264 = 1;
  iStack_254 = 0;
  if (iVar20 != 0) {
    puVar24 = *(uint **)&(param_1->SelectedCornerIDs).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar23;
    }
    uStack_264 = *puVar24;
    while (uStack_264 == 0) {
      lVar14 = (longlong)iStack_268;
      local_250 = local_250 + 0x20;
      iStack_268 = iStack_268 + 1;
      uStack_264 = 1;
      iStack_254 = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_268) goto LAB_14c74163e;
      uStack_264 = puVar24[lVar14 + 1];
    }
    uStack_264 = -uStack_264 & uStack_264;
    uVar15 = (ulonglong)uStack_264 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_240 = (int)lVar14;
    iStack_254 = local_240 + -1 + local_250;
    if (iVar20 < iStack_254) {
      iStack_254 = iVar20;
    }
  }
LAB_14c74163e:
  uVar16 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  iStack_248 = *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34;
  uVar27 = uVar16 & 0xffffffe0;
  TStack_1f0._padding_ = CONCAT44(uStack_264,iStack_268);
  uStack_258 = 0xffffffff;
  TStack_1f0.CurrentBitIndex = iStack_254;
  TStack_1f0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_1f0._28_4_ = local_5c;
  TStack_1f0.BaseBitIndex = local_250;
  uStack_1d0 = CONCAT44(uStack_244,iStack_248);
  local_270 = pTVar1;
  local_260 = puVar23;
  local_1f8 = pTVar1;
  TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar23;
  if ((((int)uVar16 < 0) || (iVar20 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
    return pTVar12;
  }
  pcVar7 = local_2a8;
  uVar8 = local_2b0;
  uVar25 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  if (uVar16 != uVar25) {
    puVar22 = *(undefined1 **)&(param_1->SelectedCornerIDs).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar23;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar19;
      uVar27 = uVar27 + 0x20;
      iVar19 = iVar19 + 1;
      uVar16 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14c741750;
      uVar16 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_23c = (int)lVar14;
    uVar16 = local_23c + -1 + uVar27;
    if ((int)uVar25 < (int)uVar16) {
      uVar16 = uVar25;
    }
  }
LAB_14c741750:
  while( true ) {
    pTVar9 = local_1f8;
    if (*(int *)&(local_1f8->Elements).field_0x8 - *(int *)&(local_1f8->Elements).field_0x34 !=
        (int)uStack_1d0) {
      local_2d8 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    if (((TStack_1f0.CurrentBitIndex == uVar16) &&
        (TStack_1f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) && (pTVar9 == pTVar1)
       ) break;
    iVar20 = *(int *)(*(longlong *)&pTVar9->Elements + (longlong)TStack_1f0.CurrentBitIndex * 0xc);
    if ((((-1 < iVar20) && (iVar20 < (this->Corners).ArrayNum)) &&
        (uVar27 = GetCornerVertexID(this,iVar20), -1 < (int)uVar27)) &&
       ((int)uVar27 <
        (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
      uVar15 = (ulonglong)(uVar27 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar27 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe) {
        lVar14 = *(longlong *)
                  ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar14 + uVar15 * 0x18);
        local_168 = *puVar2;
        uStack_160 = puVar2[1];
        local_158 = *(undefined8 *)(lVar14 + 0x10 + uVar15 * 0x18);
        (*pcVar7)(local_90,uVar8,&local_168);
        TAxisAlignedBox3<double>::Contain((TAxisAlignedBox3<double> *)&local_228._s_0,local_90);
      }
    }
    TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
  }
  uStack_298 = 0;
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SelectedEdgeIDs).Elements.field_0x10;
  iVar20 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  local_2a0 = (FGroupTopologySelection *)&param_1->SelectedEdgeIDs;
  uStack_294 = (uint)local_2c0;
  uStack_284 = uStack_298;
  local_280 = uStack_298;
  if (iVar20 != 0) {
    puVar24 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)pTVar26;
    }
    uVar16 = *puVar24;
    while (uVar16 == 0) {
      lVar14 = (longlong)(int)uStack_298;
      local_280 = local_280 + 0x20;
      uStack_298 = uStack_298 + 1;
      uStack_284 = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uStack_298)
      goto LAB_14c7418de;
      uVar16 = puVar24[lVar14 + 1];
    }
    uStack_294 = -uVar16 & uVar16;
    uVar15 = (ulonglong)uStack_294 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_238 = (int)lVar14;
    uStack_284 = local_280 + -1 + local_238;
    if (iVar20 < (int)uStack_284) {
      uStack_284 = iVar20;
    }
  }
LAB_14c7418de:
  iStack_27c = local_3c;
  iStack_278 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar16 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uVar27 = uVar16 & 0xffffffe0;
  uStack_288 = 0xffffffff;
  TStack_1c0._padding_ = CONCAT44(uStack_294,uStack_298);
  TStack_1c0.CurrentBitIndex = uStack_284;
  TStack_1c0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar16 >> 5;
  TStack_1c0._28_4_ = local_3c;
  TStack_1c0.BaseBitIndex = local_280;
  uStack_1a0 = CONCAT44(uStack_274,iStack_278);
  local_2d0 = uVar16;
  local_2c8 = pTVar26;
  local_290 = (undefined1 *)pTVar26;
  local_1c8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2a0;
  TStack_1c0.Array = pTVar26;
  if ((((int)uVar16 < 0) || (iVar20 < (int)uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
    return pTVar12;
  }
  uVar25 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  if (uVar16 != uVar25) {
    puVar23 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = (undefined1 *)pTVar26;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar19 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar19;
      uVar27 = uVar27 + 0x20;
      iVar19 = iVar19 + 1;
      uVar16 = uVar25;
      local_2d0 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14c741a10;
      uVar16 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_234 = (int)lVar14;
    uVar16 = (uVar27 - 1) + local_234;
    local_2d0 = uVar16;
    if ((int)uVar25 < (int)uVar16) {
      uVar16 = uVar25;
      local_2d0 = uVar25;
    }
  }
LAB_14c741a10:
  while( true ) {
    pTVar1 = local_1c8;
    uVar27 = 0;
    if (*(int *)&(local_1c8->Elements).field_0x8 - *(int *)&(local_1c8->Elements).field_0x34 !=
        (int)uStack_1a0) {
      local_2d7 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    if (((TStack_1c0.CurrentBitIndex == uVar16) && (TStack_1c0.Array == pTVar26)) &&
       (pTVar1 == &param_1->SelectedEdgeIDs)) break;
    uVar25 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_1c0.CurrentBitIndex * 0xc);
    lVar14 = (longlong)(int)uVar25;
    if ((-1 < (int)uVar25) && ((int)uVar25 < (this->Edges).ArrayNum)) {
      if ((int)uVar25 < (this->Edges).ArrayNum) {
        uVar27 = ~uVar25 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
        return pTVar12;
      }
      pcVar7 = local_2a8;
      pFVar4 = (this->Edges).AllocatorInstance.Data;
      puVar21 = *(uint **)(pFVar4 + lVar14 * 0x50 + 0x10);
      iVar20 = *(int *)(pFVar4 + lVar14 * 0x50 + 0x18);
      puVar24 = puVar21 + iVar20;
      while( true ) {
        if (*(int *)(pFVar4 + lVar14 * 0x50 + 0x18) != iVar20) {
          local_2d6 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_2d6);
        }
        pTVar26 = local_2c8;
        uVar16 = local_2d0;
        if (puVar21 == puVar24) break;
        uVar16 = *puVar21;
        if ((-1 < (int)uVar16) &&
           ((int)uVar16 <
            (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
          uVar15 = (ulonglong)(uVar16 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar16 >> 9) * 8) + uVar15 * 2) - 1U) <
              0xfffe) {
            lVar5 = *(longlong *)
                     ((pFVar3->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar16 >> 9) * 8);
            puVar2 = (undefined8 *)(lVar5 + uVar15 * 0x18);
            local_108 = *puVar2;
            uStack_100 = puVar2[1];
            local_f8 = *(undefined8 *)(lVar5 + 0x10 + uVar15 * 0x18);
            (*pcVar7)(&local_f0,local_2b0,&local_108);
            TAxisAlignedBox3<double>::Contain((TAxisAlignedBox3<double> *)&local_228._s_0,&local_f0)
            ;
          }
        }
        puVar21 = puVar21 + 1;
      }
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
  }
  uVar16 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  local_290 = &(param_1->SelectedGroupIDs).Elements.field_0x10;
  uStack_284 = uVar27;
  local_280 = uVar27;
  if (uVar16 != 0) {
    puVar24 = *(uint **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_290;
    }
    uVar25 = *puVar24;
    local_280 = 0;
    while (uVar25 == 0) {
      lVar14 = (longlong)(int)uVar27;
      local_280 = local_280 + 0x20;
      uVar27 = uVar27 + 1;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
      goto LAB_14c741c4b;
      uVar25 = puVar24[lVar14 + 1];
    }
    local_2c0 = (ulonglong)(-uVar25 & uVar25);
    uVar15 = local_2c0 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_230 = (int)lVar14;
    uStack_284 = (local_280 - 1) + local_230;
    if ((int)uVar16 < (int)uStack_284) {
LAB_14c741c4b:
      uStack_284 = uVar16;
    }
  }
  pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SelectedGroupIDs).Elements.field_0x10
  ;
  uVar16 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  uVar17 = uVar16 & 0xffffffe0;
  iStack_27c = iStack_254;
  iStack_278 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34;
  uStack_294 = (uint)local_2c0;
  uStack_288 = 0xffffffff;
  uVar25 = -1 << ((byte)uVar16 & 0x1f);
  TStack_190._padding_ = CONCAT44(uStack_294,uVar27);
  TStack_190.CurrentBitIndex = uStack_284;
  TStack_190.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar16 >> 5;
  local_2c0 = CONCAT44(local_2c0._4_4_,uVar25);
  TStack_190._28_4_ = iStack_254;
  TStack_190.BaseBitIndex = local_280;
  uStack_170 = CONCAT44(uStack_274,iStack_278);
  local_2d0 = uVar16;
  local_2c8 = pTVar26;
  local_2a0 = param_1;
  uStack_298 = uVar27;
  local_198 = param_1;
  TStack_190.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_290;
  if ((int)uVar16 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
      return pTVar12;
    }
    uVar25 = (uint)local_2c0;
  }
  uVar27 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  if (uVar16 != uVar27) {
    puVar23 = *(undefined1 **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = (undefined1 *)pTVar26;
    }
    uVar25 = uVar25 & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar25 == 0) {
      lVar14 = (longlong)iVar20;
      uVar17 = uVar17 + 0x20;
      iVar20 = iVar20 + 1;
      uVar16 = uVar27;
      local_2d0 = uVar27;
      if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14c741d76;
      uVar25 = *(uint *)(puVar23 + lVar14 * 4 + 4);
    }
    uVar15 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_22c = (int)lVar14;
    uVar16 = (uVar17 - 1) + local_22c;
    local_2d0 = uVar16;
    if ((int)uVar27 < (int)uVar16) {
      uVar16 = uVar27;
      local_2d0 = uVar27;
    }
  }
LAB_14c741d76:
  while( true ) {
    pFVar10 = local_198;
    if (*(int *)&(local_198->SelectedGroupIDs).Elements.field_0x8 -
        *(int *)&(local_198->SelectedGroupIDs).Elements.field_0x34 != (int)uStack_170) {
      local_2d5 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d5);
    }
    if (((TStack_190.CurrentBitIndex == uVar16) && (TStack_190.Array == pTVar26)) &&
       (pFVar10 == param_1)) break;
    pFVar13 = FindGroupByID(this,*(int *)(*(longlong *)&(pFVar10->SelectedGroupIDs).Elements +
                                         (longlong)TStack_190.CurrentBitIndex * 0xc));
    if ((pFVar13 == (FGroup *)0x0) &&
       (bVar11 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3316175843021029140>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                            ,0xec,"Found != nullptr"), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TAxisAlignedBox3<double> *)(*pcVar7)();
      return pTVar12;
    }
    pcVar7 = local_2a8;
    pTVar28 = &pFVar13->Triangles;
    if (pFVar13 == (FGroup *)0x0) {
      pTVar28 = &this->EmptyArray;
    }
    pFVar18 = (pTVar28->AllocatorInstance).Data;
    iVar20 = pTVar28->ArrayNum;
    pFVar4 = pFVar18 + (longlong)iVar20 * 4;
    while( true ) {
      if (pTVar28->ArrayNum != iVar20) {
        local_2d4[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2d4);
      }
      if (pFVar18 == pFVar4) break;
      uVar16 = *(uint *)pFVar18;
      pFVar6 = this->Mesh;
      if ((-1 < (int)uVar16) &&
         ((int)uVar16 <
          (int)((pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar15 = (ulonglong)(uVar16 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (ulonglong)(uVar16 >> 9) * 8) + uVar15 * 2) - 1U) < 0xfffe)
        {
          lVar14 = *(longlong *)
                    ((pFVar6->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          local_2c0 = *(longlong *)(lVar14 + uVar15 * 0xc);
          uVar16 = *(uint *)(lVar14 + 8 + uVar15 * 0xc);
          local_2b8 = uVar16;
          if ((-1 < (int)(uint)local_2c0) &&
             ((int)(uint)local_2c0 <
              (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
            uVar15 = (ulonglong)((uint)local_2c0 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)((uint)local_2c0 >> 9) * 8) + uVar15 * 2) -
                        1U) < 0xfffe) {
              lVar14 = *(longlong *)
                        ((pFVar3->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)local_2c0 >> 9) * 8);
              puVar2 = (undefined8 *)(lVar14 + uVar15 * 0x18);
              local_150 = *puVar2;
              uStack_148 = puVar2[1];
              local_140 = *(undefined8 *)(lVar14 + 0x10 + uVar15 * 0x18);
              (*pcVar7)(&local_d8,local_2b0,&local_150);
              TAxisAlignedBox3<double>::Contain
                        ((TAxisAlignedBox3<double> *)&local_228._s_0,&local_d8);
            }
          }
          if ((-1 < (longlong)local_2c0) &&
             ((int)local_2c0._4_4_ <
              (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
            uVar15 = (ulonglong)(local_2c0._4_4_ & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)(local_2c0._4_4_ >> 9) * 8) + uVar15 * 2) -
                        1U) < 0xfffe) {
              lVar14 = *(longlong *)
                        ((pFVar3->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_2c0._4_4_ >> 9) * 8);
              puVar2 = (undefined8 *)(lVar14 + uVar15 * 0x18);
              local_138 = *puVar2;
              uStack_130 = puVar2[1];
              local_128 = *(undefined8 *)(lVar14 + 0x10 + uVar15 * 0x18);
              (*pcVar7)(&local_c0,local_2b0,&local_138);
              TAxisAlignedBox3<double>::Contain
                        ((TAxisAlignedBox3<double> *)&local_228._s_0,&local_c0);
            }
          }
          if ((-1 < (int)uVar16) &&
             ((int)uVar16 <
              (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) {
            uVar15 = (ulonglong)(local_2b8 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)(uVar16 >> 9) * 8) + uVar15 * 2) - 1U) <
                0xfffe) {
              lVar14 = *(longlong *)
                        ((pFVar3->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar16 >> 9) * 8);
              puVar2 = (undefined8 *)(lVar14 + uVar15 * 0x18);
              local_120 = *puVar2;
              uStack_118 = puVar2[1];
              local_110 = *(undefined8 *)(lVar14 + 0x10 + uVar15 * 0x18);
              (*pcVar7)(&local_a8,local_2b0,&local_120);
              TAxisAlignedBox3<double>::Contain
                        ((TAxisAlignedBox3<double> *)&local_228._s_0,&local_a8);
            }
          }
        }
      }
      pFVar18 = pFVar18 + 4;
    }
    TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
    pTVar26 = local_2c8;
    uVar16 = local_2d0;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_228._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_228._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_228._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dStack_210;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_208;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dStack_200;
  return __return_storage_ptr__;
}

// GetSelectionFrame @ 14c742100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TFrame3<double> * __thiscall
UE::Geometry::FGroupTopology::GetSelectionFrame
          (FGroupTopology *this,TFrame3<double> *__return_storage_ptr__,
          FGroupTopologySelection *param_1,TFrame3<double> *param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  int *piVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  FGroupTopologySelection *pFVar23;
  bool bVar24;
  uint uVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  TFrame3<double> *pTVar27;
  TVector<double> *pTVar28;
  FGroup *pFVar29;
  uint uVar30;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  ulonglong uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  ulonglong uVar43;
  uint *puVar44;
  TBitArray<FDefaultBitArrayAllocator> *pTVar45;
  uint uVar46;
  double extraout_XMM0_Qa;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined8 uVar53;
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 local_res20 [8];
  undefined1 local_5f8 [4];
  int local_5f4;
  TVector<double>_u_0 local_5f0;
  undefined1 local_5d8 [4];
  uint local_5d4;
  TVector<double>_u_0 local_5d0;
  TBitArray<FDefaultBitArrayAllocator> *local_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  FGroupTopologySelection *local_598;
  uint uStack_590;
  uint uStack_58c;
  undefined1 *local_588;
  undefined4 uStack_580;
  uint uStack_57c;
  uint local_578;
  undefined4 uStack_574;
  int iStack_570;
  undefined4 uStack_56c;
  undefined1 local_568 [24];
  TQuaternion<double>_u_0 TStack_550;
  ulonglong local_530;
  FGroupTopologySelection *local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_520;
  undefined8 local_500;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d8;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined8 uStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_458;
  undefined8 uStack_438;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_428;
  undefined8 uStack_408;
  TQuaternion<double>_u_0 local_400;
  TVector<double>_u_0 local_3e0;
  TQuaternion<double>_u_0 local_3c8;
  TQuaternion<double>_u_0 local_3a8;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_370;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TQuaternion<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  TVector<double>_u_0 local_2d0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  TVector<double>_u_0 local_278;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined8 local_238;
  double dStack_230;
  undefined4 local_210;
  undefined4 uStack_20c;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  TVector<double> local_1d8;
  TVector<double> local_1c0;
  TVector<double> local_1a8;
  TVector<double> local_190;
  TVector<double> local_178;
  TVector<double> local_160 [2];
  undefined4 local_12c;
  undefined4 local_10c;
  TFrame3<double> local_108 [3];
  ulonglong uVar31;
  
  if (param_2 == (TFrame3<double> *)0x0) {
    uStack_240 = 0;
    local_238 = ___xmm_3ff00000000000000000000000000000;
    dVar48 = local_238;
    dStack_230 = _UNK_15061cbc8;
    uStack_240._0_4_ = 0;
    uStack_240._4_4_ = 0;
    local_238._0_4_ = SUB84(___xmm_3ff00000000000000000000000000000,0);
    local_238._4_4_ = (undefined4)((ulonglong)___xmm_3ff00000000000000000000000000000 >> 0x20);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_25c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_254 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_568._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_568._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_568._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_568._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    TStack_550._8_4_ = (undefined4)uStack_240;
    TStack_550._12_4_ = uStack_240._4_4_;
    TStack_550._16_4_ = (undefined4)local_238;
    TStack_550._20_4_ = local_238._4_4_;
    TStack_550._s_0.W = _UNK_15061cbc8;
    auStack_250 = auVar51;
    local_238 = dVar48;
  }
  else {
    auVar51 = *(undefined1 (*) [16])((longlong)&(param_2->Origin).field0_0x0 + 0x10);
    local_568._0_4_ = *(undefined4 *)&(param_2->Origin).field0_0x0;
    local_568._4_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 4);
    local_568._8_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 8);
    local_568._12_4_ = *(undefined4 *)((longlong)&(param_2->Origin).field0_0x0 + 0xc);
    TStack_550._8_4_ = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 8);
    TStack_550._12_4_ = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0xc);
    TStack_550._16_4_ = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x10);
    TStack_550._20_4_ = *(undefined4 *)((longlong)&(param_2->Rotation).field0_0x0 + 0x14);
    TStack_550._s_0.W = (param_2->Rotation).field0_0x0._s_0.W;
  }
  uVar33 = 0;
  uVar39 = 0;
  unique0x10003f5f = auVar51;
  if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
      *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34 == 1) {
    uVar34 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
    uVar38 = 0;
    uVar25 = uVar38;
    if (uVar34 != 0) {
      puVar44 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
      if (puVar44 == (uint *)0x0) {
        puVar44 = (uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x10;
      }
      uVar25 = *puVar44;
      uVar31 = uVar33;
      uVar43 = uVar33;
      while (uVar25 == 0) {
        iVar36 = (int)uVar31;
        uVar39 = (int)uVar43 + 0x20;
        uVar43 = (ulonglong)uVar39;
        uVar30 = iVar36 + 1;
        uVar31 = (ulonglong)uVar30;
        uVar25 = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar30)
        goto LAB_14c74227c;
        uVar25 = puVar44[(longlong)iVar36 + 1];
      }
      uVar31 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar32 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_4b8 = (int)lVar32;
      uVar25 = (uVar39 - 1) + local_4b8;
      if ((int)uVar34 < (int)uVar25) {
        uVar25 = uVar34;
      }
    }
LAB_14c74227c:
    iVar36 = *(int *)(*(longlong *)&(param_1->SelectedEdgeIDs).Elements +
                     (longlong)(int)uVar25 * 0xc);
    pTVar26 = GetGroupEdgeVertices(this,iVar36);
    if ((pTVar26->ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    uVar34 = pTVar26->ArrayNum - 1;
    iVar37 = *(int *)(pTVar26->AllocatorInstance).Data;
    uVar39 = uVar38;
    if ((int)uVar34 < pTVar26->ArrayNum) {
      uVar39 = ~uVar34 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    if (iVar37 == *(int *)((pTVar26->AllocatorInstance).Data + (longlong)pTVar26->ArrayNum * 4 + -4)
       ) {
      pTVar28 = GetEdgeAveragePosition(this,&local_178,iVar36);
      pFVar5 = this->Mesh;
      local_568._0_8_ = (pTVar28->field0_0x0)._s_0.X;
      local_568._8_8_ = (pTVar28->field0_0x0)._s_0.Y;
      uVar34 = pTVar26->ArrayNum - 1;
      dVar48 = (pTVar28->field0_0x0)._s_0.Z;
      local_5d0._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_5d0._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      uVar39 = uVar38;
      if ((int)uVar34 < pTVar26->ArrayNum) {
        uVar39 = ~uVar34 >> 0x1f;
      }
      local_5d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_568._16_8_ = dVar48;
      if ((uVar39 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar10 = (code *)swi(3);
        pTVar27 = (TFrame3<double> *)(*pcVar10)();
        return pTVar27;
      }
      uVar43 = (ulonglong)pTVar26->ArrayNum;
      uVar39 = *(uint *)((pTVar26->AllocatorInstance).Data + uVar43 * 4 + -4);
      uVar31 = (ulonglong)(uVar39 & 0x1ff);
      lVar32 = *(longlong *)
                ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8);
      local_5a0 = *(double *)(lVar32 + 0x10 + uVar31 * 0x18);
      pdVar2 = (double *)(lVar32 + uVar31 * 0x18);
      local_5b0 = *pdVar2;
      dStack_5a8 = pdVar2[1];
      uVar31 = uVar33;
      if (0 < pTVar26->ArrayNum) {
        do {
          uVar22 = local_5d0._s_0.Z;
          uVar21 = local_5d0._s_0.Y;
          uVar50 = local_5d0._s_0.X;
          uVar53 = auVar51._8_8_;
          pFVar5 = this->Mesh;
          uVar34 = (uint)uVar33;
          uVar39 = uVar38;
          if ((int)uVar34 < (int)uVar43) {
            uVar39 = ~uVar34 >> 0x1f;
          }
          if (uVar39 == 0) {
            bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar53 = auVar51._8_8_;
            if (bVar24) {
              pcVar10 = (code *)swi(3);
              pTVar27 = (TFrame3<double> *)(*pcVar10)();
              return pTVar27;
            }
          }
          uVar33 = (ulonglong)(uVar34 + 1);
          uVar43 = (ulonglong)(uint)pTVar26->ArrayNum;
          uVar39 = *(uint *)((pTVar26->AllocatorInstance).Data + uVar31);
          uVar35 = (ulonglong)(uVar39 & 0x1ff);
          lVar32 = *(longlong *)
                    ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8
                    );
          dVar48 = *(double *)(lVar32 + 0x10 + uVar35 * 0x18);
          auVar4 = *(undefined1 (*) [16])(lVar32 + uVar35 * 0x18);
          dVar54 = dVar48 - local_5a0;
          auVar14._4_8_ = uVar53;
          auVar14._0_4_ = auVar4._4_4_;
          auVar52._0_8_ = auVar14._0_8_ << 0x20;
          auVar52._8_4_ = auVar4._8_4_;
          auVar52._12_4_ = auVar4._12_4_;
          local_5d0._s_0.X = (double)uVar50 + (local_5a0 + dVar48) * (auVar52._8_8_ - dStack_5a8);
          local_5a0 = *(double *)(lVar32 + 0x10 + uVar35 * 0x18);
          auVar51._0_8_ = (auVar52._8_8_ + dStack_5a8) * (auVar4._0_8_ - local_5b0);
          auVar51._8_8_ = auVar4._8_8_;
          local_5d0._s_0.Y = (double)uVar21 + dVar54 * (local_5b0 + auVar4._0_8_);
          pdVar2 = (double *)(lVar32 + uVar35 * 0x18);
          local_5b0 = *pdVar2;
          dStack_5a8 = pdVar2[1];
          local_5d0._s_0.Z = (double)uVar22 + auVar51._0_8_;
          uVar31 = uVar31 + 4;
        } while ((int)(uVar34 + 1) < pTVar26->ArrayNum);
      }
      dVar48 = local_5d0._s_0.Y * local_5d0._s_0.Y + local_5d0._s_0.X * local_5d0._s_0.X +
               local_5d0._s_0.Z * local_5d0._s_0.Z;
      if (__real_3e45798ee0000000 < dVar48) {
        dVar54 = (double)CONCAT44(TStack_550._12_4_,TStack_550._8_4_);
        local_3a8._s_0.W = __real_3ff0000000000000;
        dVar48 = __real_3ff0000000000000 / SQRT(dVar48);
        local_5d0._s_0.Z = local_5d0._s_0.Z * dVar48;
        local_5d0._s_0.X = local_5d0._s_0.X * dVar48;
        local_5d0._s_0.Y = local_5d0._s_0.Y * dVar48;
        dVar48 = (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_) +
                 (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_);
        local_370._s_0.X = TStack_550._s_0.X * dVar48 + TStack_550._s_0.W * (dVar54 + dVar54);
        local_370._s_0.Y =
             dVar54 * dVar48 - TStack_550._s_0.W * (TStack_550._s_0.X + TStack_550._s_0.X);
        local_3a8._s_0.X = 0.0;
        local_370._s_0.Z =
             __real_3ff0000000000000 -
             (dVar54 * (dVar54 + dVar54) +
             TStack_550._s_0.X * (TStack_550._s_0.X + TStack_550._s_0.X));
        local_3a8._s_0.Y = 0.0;
        local_3a8._s_0.Z = 0.0;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_3a8._s_0,(TVector<double> *)&local_370._s_0,
                   (TVector<double> *)&local_5d0._s_0);
        TFrame3<double>::Rotate((TFrame3<double> *)local_568,(TQuaternion<double> *)&local_3a8._s_0)
        ;
      }
    }
    else {
      pTVar26 = GetGroupEdgeEdges(this,iVar36);
      if ((pTVar26->ArrayNum < 1) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar10 = (code *)swi(3);
        pTVar27 = (TFrame3<double> *)(*pcVar10)();
        return pTVar27;
      }
      uVar39 = *(uint *)(pTVar26->AllocatorInstance).Data;
      uVar33 = *(ulonglong *)
                (*(longlong *)
                  ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8)
                 + 8 + (ulonglong)(uVar39 & 0x1ff) * 0x10);
      iVar40 = (int)(uVar33 >> 0x20);
      iVar37 = (int)uVar33;
      if (iVar40 != -1) {
        uVar31 = uVar33 >> 0x20;
        if (iVar37 < iVar40) {
          uVar31 = uVar33;
        }
        iVar37 = (int)uVar31;
      }
      FDynamicMesh3::GetTriNormal(this->Mesh,(TVector<double> *)&local_3e0._s_0,iVar37);
      dVar48 = __real_3ff0000000000000;
      if (((local_3e0._s_0.X != 0.0) || (local_3e0._s_0.Y != 0.0)) || (local_3e0._s_0.Z != 0.0)) {
        pTVar28 = TFrame3<double>::GetAxis((TFrame3<double> *)local_568,&local_1a8,2);
        local_3c8._s_0.X = 0.0;
        local_3c8._s_0.W = dVar48;
        local_3c8._s_0.Y = 0.0;
        local_3c8._s_0.Z = 0.0;
        TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_3c8._s_0,pTVar28,(TVector<double> *)&local_3e0._s_0
                  );
        TFrame3<double>::Rotate((TFrame3<double> *)local_568,(TQuaternion<double> *)&local_3c8._s_0)
        ;
      }
      bVar24 = GetGroupEdgeTangent(this,iVar36,&local_1d8);
      if (bVar24) {
        dVar54 = (double)CONCAT44(TStack_550._12_4_,TStack_550._8_4_);
        dVar47 = (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_) +
                 (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_);
        dVar11 = TStack_550._s_0.X * dVar47 + TStack_550._s_0.W * (dVar54 + dVar54);
        dVar48 = dVar48 - (dVar54 * (dVar54 + dVar54) +
                          TStack_550._s_0.X * (TStack_550._s_0.X + TStack_550._s_0.X));
        dVar54 = dVar54 * dVar47 - TStack_550._s_0.W * (TStack_550._s_0.X + TStack_550._s_0.X);
        local_388._s_0.X = dVar11;
        local_388._s_0.Y = dVar54;
        local_388._s_0.Z = dVar48;
        TFrame3<double>::GetAxis((TFrame3<double> *)local_568,&local_1c0,0);
        VectorUtil::PlaneAngleSignedD<double>
                  (&local_1c0,&local_1d8,(TVector<double> *)&local_388._s_0);
        __libm_sse2_sincos_();
        local_328._s_0.Y = extraout_XMM0_Qa * dVar54;
        local_328._s_0.X = extraout_XMM0_Qa * dVar11;
        local_328._s_0.Z = extraout_XMM0_Qa * dVar48;
        TFrame3<double>::Rotate((TFrame3<double> *)local_568,(TQuaternion<double> *)&local_328._s_0)
        ;
      }
      pTVar28 = GetEdgeMidpoint(this,&local_190,iVar36,(double *)0x0,
                                (TArray<double,TSizedDefaultAllocator<32>_> *)0x0);
      local_568._0_8_ = (pTVar28->field0_0x0)._s_0.X;
      local_568._8_8_ = (pTVar28->field0_0x0)._s_0.Y;
      local_568._16_8_ = (pTVar28->field0_0x0)._s_0.Z;
    }
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (double)local_568._0_8_;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)local_568._8_8_;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)local_568._16_8_;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = TStack_550._s_0.X;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y =
         (double)CONCAT44(TStack_550._12_4_,TStack_550._8_4_);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z =
         (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = TStack_550._s_0.W;
    return __return_storage_ptr__;
  }
  pTVar1 = &param_1->SelectedCornerIDs;
  puVar41 = &(param_1->SelectedCornerIDs).Elements.field_0x10;
  local_5b8 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar1;
  if (*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
      *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34 == 1) {
    pFVar5 = this->Mesh;
    local_4d8.UnvisitedBitMask = 0xffffffff;
    local_4d8._padding_._0_4_ = 0;
    local_4d8._padding_._4_4_ = 1;
    local_4d8.CurrentBitIndex = 0;
    local_4d8.BaseBitIndex = 0;
    local_4d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar41;
    if (*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d8);
    }
    TStack_520._padding_ = CONCAT44(local_4d8._padding_._4_4_,(undefined4)local_4d8._padding_);
    TStack_520.Array = local_4d8.Array;
    uVar39 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)local_4d8.CurrentBitIndex * 0xc);
    uVar34 = 0;
    if ((int)uVar39 < (this->Corners).ArrayNum) {
      uVar34 = ~uVar39 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    uVar39 = *(uint *)((this->Corners).AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18);
    uVar33 = (ulonglong)(uVar39 & 0x1ff);
    lVar32 = *(longlong *)
              ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar39 >> 9) * 8);
    pdVar2 = (double *)(lVar32 + uVar33 * 0x18);
    uVar18 = *(undefined4 *)(pdVar2 + 1);
    uVar19 = *(undefined4 *)((longlong)pdVar2 + 0xc);
    puVar3 = (undefined4 *)(lVar32 + 0x10 + uVar33 * 0x18);
    uVar16 = *puVar3;
    uVar17 = puVar3[1];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar2;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 8) = uVar18;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0xc) = uVar19;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = uVar16;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x14) = uVar17;
    *(undefined4 *)&(__return_storage_ptr__->Rotation).field0_0x0 = TStack_550._0_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 4) = TStack_550._4_4_
    ;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y =
         (double)CONCAT44(TStack_550._12_4_,TStack_550._8_4_);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z =
         (double)CONCAT44(TStack_550._20_4_,TStack_550._16_4_);
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = TStack_550._s_0.W;
    return __return_storage_ptr__;
  }
  local_5f0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  local_5f0._s_0.Y =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_4f8._padding_._0_4_ = 0;
  local_530 = 1;
  local_4f8._padding_._4_4_ = 1;
  local_5f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_5a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4f8.UnvisitedBitMask = 0xffffffff;
  local_4f8.CurrentBitIndex = 0;
  local_4f8.BaseBitIndex = 0;
  local_5b0 = local_5f0._s_0.X;
  dStack_5a8 = local_5f0._s_0.Y;
  local_4f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar41;
  if (*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f8);
  }
  uVar39 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  TStack_520._padding_ = CONCAT44(local_4f8._padding_._4_4_,(undefined4)local_4f8._padding_);
  TStack_520.CurrentBitIndex = local_4f8.CurrentBitIndex;
  TStack_520.UnvisitedBitMask = local_4f8.UnvisitedBitMask;
  TStack_520._28_4_ = local_4f8._28_4_;
  TStack_520.BaseBitIndex = local_4f8.BaseBitIndex;
  local_500 = CONCAT44(local_500._4_4_,
                       *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
                       *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34);
  TStack_520.Array = local_4f8.Array;
  iVar36 = (int)uVar39 >> 5;
  uVar34 = uVar39 & 0xffffffe0;
  TStack_458.Array = local_4f8.Array;
  uStack_438 = local_500;
  local_528 = (FGroupTopologySelection *)pTVar1;
  local_460 = pTVar1;
  TStack_458._padding_ = TStack_520._padding_;
  TStack_458._16_8_ = TStack_520._16_8_;
  TStack_458._24_8_ = TStack_520._24_8_;
  if (((int)uVar39 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    pTVar27 = (TFrame3<double> *)(*pcVar10)();
    return pTVar27;
  }
  pTVar45 = local_5b8;
  uVar25 = *(uint *)&(param_1->SelectedCornerIDs).Elements.field_0x28;
  dVar54 = local_5b0;
  dVar48 = dStack_5a8;
  dVar11 = local_5a0;
  if (uVar39 != uVar25) {
    puVar42 = *(undefined1 **)&(param_1->SelectedCornerIDs).Elements.field_0x20;
    if (puVar42 == (undefined1 *)0x0) {
      puVar42 = puVar41;
    }
    uVar39 = -1 << ((byte)uVar39 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar36 * 4);
    while (uVar39 == 0) {
      lVar32 = (longlong)iVar36;
      uVar34 = uVar34 + 0x20;
      iVar36 = iVar36 + 1;
      uVar39 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_14c742b90;
      uVar39 = *(uint *)(puVar42 + lVar32 * 4 + 4);
    }
    uVar31 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_4b4 = (int)lVar32;
    uVar39 = local_4b4 + -1 + uVar34;
    if ((int)uVar25 < (int)uVar39) {
      uVar39 = uVar25;
    }
  }
LAB_14c742b90:
  while( true ) {
    pTVar1 = local_460;
    if (*(int *)&(local_460->Elements).field_0x8 - *(int *)&(local_460->Elements).field_0x34 !=
        (int)uStack_438) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    iVar36 = (int)uVar33;
    if (((TStack_458.CurrentBitIndex == uVar39) &&
        (TStack_458.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar41)) &&
       (pTVar1 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)pTVar45)) break;
    pFVar5 = this->Mesh;
    uVar34 = GetCornerVertexID(this,*(int *)(*(longlong *)&pTVar1->Elements +
                                            (longlong)TStack_458.CurrentBitIndex * 0xc));
    uVar33 = (ulonglong)(iVar36 + 1);
    dVar54 = dVar54 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dVar48 = dVar48 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar11 = dVar11 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    lVar32 = *(longlong *)
              ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar34 >> 9) * 8);
    pdVar2 = (double *)(lVar32 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
    local_1f0 = *pdVar2;
    dStack_1e8 = pdVar2[1];
    local_1e0 = *(double *)(lVar32 + 0x10 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
    local_5f0._s_0.X = local_5f0._s_0.X + local_1f0;
    TStack_458.UnvisitedBitMask = TStack_458.UnvisitedBitMask & ~TStack_458._padding_._4_4_;
    local_5f0._s_0.Y = local_5f0._s_0.Y + dStack_1e8;
    local_5f0._s_0.Z = local_5f0._s_0.Z + local_1e0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_458);
  }
  uVar25 = 0;
  uVar34 = 0;
  local_5b8 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  uVar38 = 0;
  uVar39 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  local_598 = (FGroupTopologySelection *)&param_1->SelectedEdgeIDs;
  uStack_58c = (uint)local_530;
  uStack_57c = uVar34;
  uStack_590 = uVar34;
  local_578 = uVar38;
  if (uVar39 != 0) {
    puVar44 = *(uint **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar44 == (uint *)0x0) {
      puVar44 = (uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x10;
    }
    uVar30 = *puVar44;
    local_578 = uVar25;
    uStack_590 = uVar25;
    while (uVar30 == 0) {
      lVar32 = (longlong)(int)uStack_590;
      local_578 = local_578 + 0x20;
      uStack_590 = uStack_590 + 1;
      uStack_57c = uVar39;
      if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_590)
      goto LAB_14c742d35;
      uVar30 = puVar44[lVar32 + 1];
    }
    uStack_58c = -uVar30 & uVar30;
    uVar33 = (ulonglong)uStack_58c * 2 + 1;
    lVar32 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_4b0 = (int)lVar32;
    uStack_57c = local_4b0 + -1 + local_578;
    if ((int)uVar39 < (int)uStack_57c) {
      uStack_57c = uVar39;
    }
  }
LAB_14c742d35:
  local_588 = &(param_1->SelectedEdgeIDs).Elements.field_0x10;
  uVar30 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uStack_574 = local_12c;
  iStack_570 = *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34;
  uVar46 = uVar30 & 0xffffffe0;
  TStack_428._padding_ = CONCAT44(uStack_58c,uStack_590);
  uStack_580 = 0xffffffff;
  TStack_428.CurrentBitIndex = uStack_57c;
  TStack_428.UnvisitedBitMask = 0xffffffff;
  iVar37 = (int)uVar30 >> 5;
  TStack_428._28_4_ = local_12c;
  TStack_428.BaseBitIndex = local_578;
  uStack_408 = CONCAT44(uStack_56c,iStack_570);
  local_5f4 = iVar36;
  local_5d4 = uVar30;
  local_4a0 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_598;
  local_430 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_598;
  TStack_428.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_588;
  if ((((int)uVar30 < 0) || ((int)uVar39 < (int)uVar30)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    pTVar27 = (TFrame3<double> *)(*pcVar10)();
    return pTVar27;
  }
  dVar47 = __real_3fe0000000000000;
  pTVar45 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->SelectedEdgeIDs).Elements.field_0x10;
  uVar39 = *(uint *)&(param_1->SelectedEdgeIDs).Elements.field_0x28;
  uVar20 = local_5d4;
  if (uVar30 != uVar39) {
    puVar41 = *(undefined1 **)&(param_1->SelectedEdgeIDs).Elements.field_0x20;
    if (puVar41 == (undefined1 *)0x0) {
      puVar41 = (undefined1 *)pTVar45;
    }
    uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar37 * 4);
    while (uVar30 == 0) {
      lVar32 = (longlong)iVar37;
      uVar46 = uVar46 + 0x20;
      iVar37 = iVar37 + 1;
      local_5d4 = uVar39;
      uVar20 = uVar39;
      if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar37)
      goto LAB_14c742e70;
      uVar30 = *(uint *)(puVar41 + lVar32 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_4ac = (int)lVar32;
    local_5d4 = local_4ac + -1 + uVar46;
    uVar20 = local_5d4;
    if ((int)uVar39 < (int)local_5d4) {
      local_5d4 = uVar39;
      uVar20 = uVar39;
    }
  }
LAB_14c742e70:
  while( true ) {
    pTVar1 = local_430;
    if (*(int *)&(local_430->Elements).field_0x8 - *(int *)&(local_430->Elements).field_0x34 !=
        (int)uStack_408) {
      local_5f8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_5f8);
      pTVar45 = local_5b8;
    }
    if (((TStack_428.CurrentBitIndex == uVar20) && (TStack_428.Array == pTVar45)) &&
       (pTVar1 == local_4a0)) break;
    uVar39 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_428.CurrentBitIndex * 0xc);
    lVar32 = (longlong)(int)uVar39;
    uVar30 = uVar38;
    if ((int)uVar39 < (this->Edges).ArrayNum) {
      uVar30 = ~uVar39 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    pFVar6 = (this->Edges).AllocatorInstance.Data;
    pFVar5 = this->Mesh;
    if ((*(int *)(pFVar6 + lVar32 * 0x50 + 0x18) < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    pFVar7 = this->Mesh;
    uVar33 = (ulonglong)(**(uint **)(pFVar6 + lVar32 * 0x50 + 0x10) & 0x1ff);
    lVar8 = *(longlong *)
             ((pFVar5->Vertices).Blocks.AllocatorInstance.Data +
             (ulonglong)(**(uint **)(pFVar6 + lVar32 * 0x50 + 0x10) >> 9) * 8);
    uVar46 = *(int *)(pFVar6 + lVar32 * 0x50 + 0x18) - 1;
    local_5a0 = *(double *)(lVar8 + 0x10 + uVar33 * 0x18);
    pdVar2 = (double *)(lVar8 + uVar33 * 0x18);
    dVar12 = *pdVar2;
    dVar13 = pdVar2[1];
    uVar30 = uVar38;
    if ((int)uVar46 < *(int *)(pFVar6 + lVar32 * 0x50 + 0x18)) {
      uVar30 = ~uVar46 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    uVar30 = *(uint *)(*(longlong *)(pFVar6 + lVar32 * 0x50 + 0x10) + -4 +
                      (longlong)*(int *)(pFVar6 + lVar32 * 0x50 + 0x18) * 4);
    uVar33 = (ulonglong)(uVar30 & 0x1ff);
    lVar8 = *(longlong *)
             ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar30 >> 9) * 8);
    local_588 = *(undefined1 **)(lVar8 + 0x10 + uVar33 * 0x18);
    pdVar2 = (double *)(lVar8 + uVar33 * 0x18);
    dVar49 = *pdVar2;
    dVar15 = pdVar2[1];
    if ((*(int *)(pFVar6 + lVar32 * 0x50 + 0x18) < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    piVar9 = *(int **)(pFVar6 + lVar32 * 0x50 + 0x10);
    uVar46 = *(int *)(pFVar6 + lVar32 * 0x50 + 0x18) - 1;
    uVar30 = uVar38;
    if ((int)uVar46 < *(int *)(pFVar6 + lVar32 * 0x50 + 0x18)) {
      uVar30 = ~uVar46 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar10 = (code *)swi(3);
      pTVar27 = (TFrame3<double> *)(*pcVar10)();
      return pTVar27;
    }
    if (*piVar9 ==
        *(int *)(*(longlong *)(pFVar6 + lVar32 * 0x50 + 0x10) + -4 +
                (longlong)*(int *)(pFVar6 + lVar32 * 0x50 + 0x18) * 4)) {
      pTVar28 = GetEdgeAveragePosition(this,local_160,uVar39);
      local_5f0._s_0.X = local_5f0._s_0.X + (pTVar28->field0_0x0)._s_0.X;
      local_5f0._s_0.Y = local_5f0._s_0.Y + (pTVar28->field0_0x0)._s_0.Y;
      local_5f0._s_0.Z = local_5f0._s_0.Z + (pTVar28->field0_0x0)._s_0.Z;
    }
    else {
      local_5f0._s_0.X = local_5f0._s_0.X + dVar12 * dVar47 + dVar49 * dVar47;
      local_5f0._s_0.Y = local_5f0._s_0.Y + dVar13 * dVar47 + dVar15 * dVar47;
      local_5f0._s_0.Z = local_5f0._s_0.Z + local_5a0 * dVar47 + (double)local_588 * dVar47;
    }
    local_5f4 = local_5f4 + 1;
    TStack_428.UnvisitedBitMask = TStack_428.UnvisitedBitMask & ~TStack_428._padding_._4_4_;
    dVar54 = dVar54 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dVar48 = dVar48 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar11 = dVar11 + UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_428);
    pTVar45 = local_5b8;
  }
  local_578 = 0;
  uVar39 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  puVar41 = &(param_1->SelectedGroupIDs).Elements.field_0x10;
  uStack_57c = local_578;
  if (uVar39 != 0) {
    puVar44 = *(uint **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar44 == (uint *)0x0) {
      puVar44 = (uint *)puVar41;
    }
    uVar38 = *puVar44;
    local_578 = uVar25;
    uVar34 = uVar25;
    while (uVar38 == 0) {
      lVar32 = (longlong)(int)uVar34;
      local_578 = local_578 + 0x20;
      uVar34 = uVar34 + 1;
      uStack_57c = uVar39;
      if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
      goto LAB_14c743232;
      uVar38 = puVar44[lVar32 + 1];
    }
    local_530 = (ulonglong)(-uVar38 & uVar38);
    uVar33 = local_530 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    local_4a8 = (int)lVar32;
    uStack_57c = (local_578 - 1) + local_4a8;
    if ((int)uVar39 < (int)uStack_57c) {
      uStack_57c = uVar39;
    }
  }
LAB_14c743232:
  uVar25 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  uStack_58c = (uint)local_530;
  uStack_574 = local_10c;
  iStack_570 = *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
               *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34;
  uStack_580 = 0xffffffff;
  uVar38 = uVar25 & 0xffffffe0;
  TStack_520._padding_ = CONCAT44(uStack_58c,uVar34);
  iVar36 = (int)uVar25 >> 5;
  TStack_520._28_4_ = local_10c;
  TStack_520.BaseBitIndex = local_578;
  local_500 = CONCAT44(uStack_56c,iStack_570);
  TStack_520.CurrentBitIndex = uStack_57c;
  TStack_520.UnvisitedBitMask = 0xffffffff;
  uStack_590 = uVar34;
  local_598 = param_1;
  local_588 = puVar41;
  local_528 = param_1;
  TStack_520.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar41;
  if ((((int)uVar25 < 0) || ((int)uVar39 < (int)uVar25)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar24)) {
    pcVar10 = (code *)swi(3);
    pTVar27 = (TFrame3<double> *)(*pcVar10)();
    return pTVar27;
  }
  dVar47 = __real_3ff0000000000000;
  uVar39 = *(uint *)&(param_1->SelectedGroupIDs).Elements.field_0x28;
  if (uVar25 != uVar39) {
    puVar42 = *(undefined1 **)&(param_1->SelectedGroupIDs).Elements.field_0x20;
    if (puVar42 == (undefined1 *)0x0) {
      puVar42 = puVar41;
    }
    uVar34 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar42 + (longlong)iVar36 * 4);
    while (uVar34 == 0) {
      lVar32 = (longlong)iVar36;
      uVar38 = uVar38 + 0x20;
      iVar36 = iVar36 + 1;
      uVar25 = uVar39;
      if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar36)
      goto LAB_14c743340;
      uVar34 = *(uint *)(puVar42 + lVar32 * 4 + 4);
    }
    uVar33 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar32 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    uVar25 = (int)lVar32 + -1 + uVar38;
    if ((int)uVar39 < (int)uVar25) {
      uVar25 = uVar39;
    }
  }
LAB_14c743340:
  while( true ) {
    pFVar23 = local_528;
    if (*(int *)&(local_528->SelectedGroupIDs).Elements.field_0x8 -
        *(int *)&(local_528->SelectedGroupIDs).Elements.field_0x34 != (int)local_500) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_5d8);
    }
    if (((TStack_520.CurrentBitIndex == uVar25) &&
        (TStack_520.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar41)) &&
       (pFVar23 == param_1)) break;
    iVar36 = *(int *)(*(longlong *)&(pFVar23->SelectedGroupIDs).Elements +
                     (longlong)TStack_520.CurrentBitIndex * 0xc);
    pFVar29 = FindGroupByID(this,iVar36);
    if (pFVar29 != (FGroup *)0x0) {
      GetGroupFrame(this,(TFrame3<double> *)&local_308._s_0,iVar36);
      local_5f0._s_0.X = local_5f0._s_0.X + local_308._s_0.X;
      local_5f0._s_0.Y = local_5f0._s_0.Y + local_308._s_0.Y;
      local_5f4 = local_5f4 + 1;
      local_5f0._s_0.Z = local_5f0._s_0.Z + local_308._s_0.Z;
      dVar54 = dVar54 + local_2d8 * (local_2e8 + local_2e8) + local_2f0 * (local_2e0 + local_2e0);
      dVar48 = dVar48 + (local_2e8 * (local_2e0 + local_2e0) - local_2d8 * (local_2f0 + local_2f0));
      dVar11 = dVar11 + (dVar47 - (local_2f0 * (local_2f0 + local_2f0) +
                                  local_2e8 * (local_2e8 + local_2e8)));
    }
    TStack_520.UnvisitedBitMask = TStack_520.UnvisitedBitMask & ~TStack_520._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_520);
  }
  local_498 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dStack_490 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_488 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_480 = 0;
  dStack_478 = 0.0;
  dStack_470 = ___xmm_3ff00000000000000000000000000000;
  dStack_468 = _UNK_15061cbc8;
  dVar12 = local_498;
  dVar13 = dStack_490;
  uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (0 < local_5f4) {
    dVar49 = dVar47 / (double)local_5f4;
    dVar12 = local_5f0._s_0.X * dVar49;
    dVar13 = local_5f0._s_0.Y * dVar49;
    uVar50 = local_5f0._s_0.Z * dVar49;
    dVar49 = dVar48 * dVar48 + dVar54 * dVar54 + dVar11 * dVar11;
    local_2d0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_2a8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_290 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 < dVar49) {
      dVar49 = dVar47 / SQRT(dVar49);
      local_2d0._s_0.Z = dVar54 * dVar49;
      local_2a8 = dVar48 * dVar49;
      local_290 = dVar11 * dVar49;
    }
    dVar48 = local_2a8 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y +
             local_2d0._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X +
             local_290 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_5f0._s_0.X = dVar12;
    local_5f0._s_0.Y = dVar13;
    local_5f0._s_0.Z = (double)uVar50;
    if ((double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar48,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        ___real_3fefff2e48e90000) {
      dVar54 = local_2a8 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
               local_290 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_2b0 = local_290 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
                  local_2d0._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_298 = local_2d0._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
                  local_2a8 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      dVar48 = SQRT(local_2b0 * local_2b0 + dVar54 * dVar54 + local_298 * local_298);
      if (dVar48 <= 0.0) {
        local_2d0._s_0.Y = 0.0;
        local_2b0 = 0.0;
        local_298 = 0.0;
      }
      else {
        dVar48 = dVar47 / dVar48;
        local_2d0._s_0.Y = dVar54 * dVar48;
        local_2b0 = local_2b0 * dVar48;
        local_298 = local_298 * dVar48;
      }
      local_2d0._s_0.X = local_290 * local_2b0 - local_2a8 * local_298;
      local_400._s_0.X = 0.0;
      local_2b8 = local_2d0._s_0.Z * local_298 - local_290 * local_2d0._s_0.Y;
      local_400._s_0.W = dVar47;
      local_400._s_0.Y = 0.0;
      local_400._16_4_ = 0;
      local_400._20_4_ = 0;
      local_2a0 = local_2a8 * local_2d0._s_0.Y - local_2d0._s_0.Z * local_2b0;
      TQuaternion<double>::SetFromRotationMatrix
                ((TQuaternion<double> *)&local_400._s_0,(TMatrix3<double> *)&local_2d0._s_0);
      dVar48 = (double)CONCAT44(local_400._20_4_,local_400._16_4_);
      local_210 = SUB84(local_400._s_0.X,0);
      uStack_20c = (undefined4)((ulonglong)local_400._0_8_ >> 0x20);
      dStack_478 = local_400._s_0.Y;
      goto LAB_14c743847;
    }
    if (dVar48 < 0.0) {
      local_340._0_4_ =
           UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_ ^
           (uint)__xmm_80000000000000008000000000000000;
      local_340._4_4_ =
           UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_ ^
           __xmm_80000000000000008000000000000000._4_4_;
      local_340._8_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_ ^ _UNK_15066df78;
      local_340._12_4_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
      local_358._s_0.X =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_8_ >> 0x20)
                            ^ __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      local_340._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      local_358._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20)
                            ^ __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      local_358._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)
                                   UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_8_ >> 0x20)
                            ^ __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y,0) ^
                            (uint)__xmm_80000000000000008000000000000000);
      local_278._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_278._s_0.Y = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_278._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      pTVar27 = TFrame3<double>::TFrame3<double>
                          (local_108,(TVector<double> *)&local_5f0._s_0,
                           (TVector<double> *)&local_278._s_0,(TVector<double> *)&local_340._s_0,
                           (TVector<double> *)&local_358._s_0);
      dVar12 = (pTVar27->Origin).field0_0x0._s_0.X;
      dVar13 = *(double *)((longlong)&(pTVar27->Origin).field0_0x0 + 8);
      uVar50 = (pTVar27->Origin).field0_0x0._s_0.Z;
      local_210 = *(undefined4 *)&(pTVar27->Rotation).field0_0x0;
      uStack_20c = *(undefined4 *)((longlong)&(pTVar27->Rotation).field0_0x0 + 4);
      dStack_478 = (pTVar27->Rotation).field0_0x0._s_0.Y;
      local_400._s_0.W = (pTVar27->Rotation).field0_0x0._s_0.W;
      dVar48 = (pTVar27->Rotation).field0_0x0._s_0.Z;
      goto LAB_14c743847;
    }
  }
  uStack_20c = 0;
  local_210 = 0;
  dStack_478 = 0.0;
  local_400._s_0.W = _UNK_15061cbc8;
  dVar48 = ___xmm_3ff00000000000000000000000000000;
LAB_14c743847:
  auVar4._8_4_ = SUB84(dVar13,0);
  auVar4._0_8_ = dVar12;
  auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Origin).field0_0x0 = auVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (double)uVar50;
  *(undefined4 *)&(__return_storage_ptr__->Rotation).field0_0x0 = local_210;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Rotation).field0_0x0 + 4) = uStack_20c;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dStack_478;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dVar48;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = local_400._s_0.W;
  return __return_storage_ptr__;
}

// IsBoundaryEdge @ 14c74fc00

bool __thiscall UE::Geometry::FGroupTopology::IsBoundaryEdge(FGroupTopology *this,int param_1)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  pFVar1 = this->Mesh;
  uVar6 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  if (*(int *)(pFVar2 + (longlong)param_1 * 0x50 + 0x28) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = **(uint **)(pFVar2 + (longlong)param_1 * 0x50 + 0x20);
  return *(int *)(*(longlong *)
                   ((pFVar1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
                  0xc + (ulonglong)(uVar6 & 0x1ff) * 0x10) == -1;
}

// IsCornerVertex @ 14c750a70

bool __thiscall UE::Geometry::FGroupTopology::IsCornerVertex(FGroupTopology *this,int param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014c750a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x28))(this,param_1,0);
  return (bool)uVar1;
}

// IsEdgeAngleSharp @ 14c750ad0

bool __cdecl
UE::Geometry::FGroupTopology::IsEdgeAngleSharp
          (FDynamicMesh3 *param_1,int param_2,FIndex2i *param_3,double param_4)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDynamicMesh3 *local_58;
  int local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if (((((param_1 == (FDynamicMesh3 *)0x0) || (uVar1 = (param_3->field0_0x0)._s_0.A, (int)uVar1 < 0)
        ) || (iVar7 = (param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                      (param_1->EdgeRefCounts).RefCounts.CurBlockUsed, iVar7 <= (int)uVar1)) ||
      ((pFVar3 = (param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8) +
                                   (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) ||
       (uVar2 = (param_3->field0_0x0)._s_0.B, (int)uVar2 < 0)))) ||
     ((iVar7 <= (int)uVar2 ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))))) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3316175843021028344>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x408,"Mesh && Mesh->IsEdge(AttachedEids.A) && Mesh->IsEdge(AttachedEids.B)"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
    local_58 = param_1;
    local_50 = param_2;
    bVar5 = `UE::Geometry::FGroupTopology::IsEdgeAngleSharp'::__l2::<lambda_1>::operator()
                      (&local_58,uVar1,(TVector<double> *)&local_30._s_0);
    if ((bVar5) &&
       (bVar5 = `UE::Geometry::FGroupTopology::IsEdgeAngleSharp'::__l2::<lambda_1>::operator()
                          (&local_58,(param_3->field0_0x0)._s_0.B,(TVector<double> *)&local_48._s_0)
       , bVar5)) {
      return param_4 <=
             local_48._s_0.Y * local_30._s_0.Y + local_48._s_0.X * local_30._s_0.X +
             local_48._s_0.Z * local_30._s_0.Z;
    }
  }
  return false;
}

// IsGroupEdge @ 14c750c40

bool __thiscall
UE::Geometry::FGroupTopology::IsGroupEdge(FGroupTopology *this,FMeshTriEdgeID param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(*(longlong *)
                     ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 0xb) * 8) +
                   ((ulonglong)(param_1.TriangleID & 0x1ff) * 3 + param_1.TriEdgeIndex) * 4);
  if (uVar1 == 0xffffffff) {
    return false;
  }
  iVar3 = (int)((ulonglong)
                *(undefined8 *)
                 (*(longlong *)
                   ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
                  + 8 + (ulonglong)(uVar1 & 0x1ff) * 0x10) >> 0x20);
  if (iVar3 == -1) {
    return param_2;
  }
  iVar2 = (**(code **)(this->_padding_ + 0x18))(this);
  iVar3 = (**(code **)(this->_padding_ + 0x18))(this,iVar3);
  return iVar2 != iVar3;
}

// IsIsolatedLoop @ 14c750d10

bool __thiscall UE::Geometry::FGroupTopology::IsIsolatedLoop(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x48) == -1;
}

// IsSimpleGroupEdge @ 14c7512a0

bool __thiscall UE::Geometry::FGroupTopology::IsSimpleGroupEdge(FGroupTopology *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->Edges).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupEdgeID >= 0 && GroupEdgeID < Edges.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                       ,0x134,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Edges).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((this->Edges).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x28) == 1;
}

// RebuildTopology @ 14c758f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall UE::Geometry::FGroupTopology::RebuildTopology(FGroupTopology *this)

{
  uint *puVar1;
  FGroupEdge *pFVar2;
  FCorner *pFVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  longlong lVar6;
  int *piVar7;
  FGroup *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  int *piVar21;
  longlong lVar22;
  FGroup *pFVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153 [3];
  int local_150 [2];
  FGroupTopology *local_148;
  uint local_140;
  int *local_138;
  TArray<int,TSizedDefaultAllocator<32>_> local_130;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint local_110;
  IndexIterator local_108;
  FGroup *local_f8;
  FGroup local_f0;
  FScriptContainerElement *local_b8;
  FGroup *local_b0;
  undefined1 local_a8 [16];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  undefined1 local_88 [64];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_148 = this;
  TArray<UE::Geometry::FGroupTopology::FGroup,TSizedDefaultAllocator<32>_>::Reset(&this->Groups,0);
  piVar21 = &(this->Edges).ArrayMax;
  pFVar2 = (FGroupEdge *)(this->Edges).AllocatorInstance.Data;
  iVar11 = (this->Edges).ArrayNum;
  if ((this->Edges).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int>(pFVar2,iVar11);
    (this->Edges).ArrayNum = 0;
    if (*piVar21 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&(this->Edges).AllocatorInstance,0,piVar21);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int>(pFVar2,iVar11);
    (this->Edges).ArrayNum = 0;
  }
  piVar21 = &(this->Corners).ArrayMax;
  pFVar3 = (FCorner *)(this->Corners).AllocatorInstance.Data;
  iVar11 = (this->Corners).ArrayNum;
  iVar19 = 0;
  if ((this->Corners).ArrayMax < 0) {
    DestructItems<UE::Geometry::FGroupTopology::FCorner,int>(pFVar3,iVar11);
    (this->Corners).ArrayNum = 0;
    if (*piVar21 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->Corners).AllocatorInstance,0,piVar21);
    }
  }
  else {
    DestructItems<UE::Geometry::FGroupTopology::FCorner,int>(pFVar3,iVar11);
    (this->Corners).ArrayNum = 0;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->CurrentExtraCornerVids);
  pFVar4 = this->Mesh;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_108,&pFVar4->TriangleRefCounts,0,
             (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed);
  uVar24 = (pFVar4->TriangleRefCounts).RefCounts.CurBlock;
  uVar15 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar14 = local_108._8_4_;
joined_r0x00014c759094:
  local_108._8_4_ = uVar14;
  if (uVar14 != uVar24 * 0x200 + uVar15) {
    iVar11 = (**(code **)(this->_padding_ + 0x18))(this,uVar14);
    if (iVar19 < iVar11) {
      iVar19 = iVar11;
    }
    uVar14 = uVar14 + 1;
    if ((int)uVar14 < (int)local_108._12_4_) {
      do {
        lVar22 = (ulonglong)(uVar14 & 0x1ff) * 2;
        if ((*(short *)(lVar22 + *(longlong *)
                                  (*(longlong *)(local_108._0_8_ + 8) + (ulonglong)(uVar14 >> 9) * 8
                                  )) != 0) &&
           (*(short *)(lVar22 + *(longlong *)
                                 (*(longlong *)(local_108._0_8_ + 8) + (ulonglong)(uVar14 >> 9) * 8)
                      ) != -1)) break;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)local_108._12_4_);
    }
    goto joined_r0x00014c759094;
  }
  piVar21 = &(this->GroupIDToGroupIndexMap).ArrayMax;
  (this->GroupIDToGroupIndexMap).ArrayNum = 0;
  if (*piVar21 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->GroupIDToGroupIndexMap).AllocatorInstance,0,piVar21);
  }
  local_120 = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->GroupIDToGroupIndexMap,&local_120,iVar19 + 1)
  ;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_11c = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_130,&local_11c,iVar19 + 1);
  pFVar4 = this->Mesh;
  uVar24 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar16 = 0;
  if ((uVar24 == 0) ||
     (pFVar17 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
     (ushort)(**(short **)pFVar17 - 1U) < 0xfffe)) {
LAB_14c7591f2:
    uVar15 = (uint)uVar16;
  }
  else {
    uVar16 = 1;
    uVar15 = 1;
    if (1 < (int)uVar24) {
      do {
        lVar6 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
        lVar22 = *(longlong *)(pFVar17 + (uVar16 >> 9) * 8);
        if ((*(short *)(lVar6 + lVar22) != 0) && (*(short *)(lVar6 + lVar22) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while ((int)uVar15 < (int)uVar24);
      goto LAB_14c7591f2;
    }
  }
joined_r0x00014c7591f5:
  if (uVar15 != uVar24) {
    while( true ) {
      uVar14 = (**(code **)(this->_padding_ + 0x18))(this);
      lVar22 = (longlong)(int)uVar14;
      uVar25 = ~uVar14 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar14 < (this->GroupIDToGroupIndexMap).ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      if (*(int *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data + lVar22 * 4) == -1) {
        pFVar23 = (FGroup *)(this->Groups).AllocatorInstance.Data;
        local_f0.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Triangles.ArrayNum = 0;
        local_f0.Triangles.ArrayMax = 0;
        local_f0.Boundaries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Boundaries.ArrayNum = 0;
        local_f0.Boundaries.ArrayMax = 0;
        local_f0.NeighbourGroupIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.NeighbourGroupIDs.ArrayNum = 0;
        local_f0.NeighbourGroupIDs.ArrayMax = 0;
        local_f0.GroupID = uVar14;
        if (((pFVar23 <= &local_f0) && (&local_f0 < pFVar23 + (this->Groups).ArrayMax)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        iVar11 = (this->Groups).ArrayNum;
        piVar21 = &(this->Groups).ArrayMax;
        if (iVar11 == *piVar21) {
          iVar11 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&(this->Groups).AllocatorInstance,piVar21);
        }
        (this->Groups).ArrayNum = iVar11 + 1;
        FGroup::FGroup((FGroup *)((this->Groups).AllocatorInstance.Data + (longlong)iVar11 * 0x38),
                       &local_f0);
        uVar15 = 0;
        if ((int)uVar14 < (this->GroupIDToGroupIndexMap).ArrayNum) {
          uVar15 = uVar25;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        *(int *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data + lVar22 * 4) = iVar11;
        if (local_f0.NeighbourGroupIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.NeighbourGroupIDs.AllocatorInstance.Data);
        }
        DestructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>
                  ((FGroupBoundary *)local_f0.Boundaries.AllocatorInstance.Data,
                   local_f0.Boundaries.ArrayNum);
        if ((FGroupBoundary *)local_f0.Boundaries.AllocatorInstance.Data != (FGroupBoundary *)0x0) {
          FMemory::Free(local_f0.Boundaries.AllocatorInstance.Data);
        }
        if (local_f0.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Triangles.AllocatorInstance.Data);
        }
      }
      uVar15 = 0;
      if ((int)uVar14 < local_130.ArrayNum) {
        uVar15 = uVar25;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      *(int *)(local_130.AllocatorInstance.Data + lVar22 * 4) =
           *(int *)(local_130.AllocatorInstance.Data + lVar22 * 4) + 1;
      if ((int)uVar24 <= (int)uVar15) break;
      while( true ) {
        lVar6 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
        lVar22 = *(longlong *)
                  ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar16 >> 9) * 8);
        if ((*(short *)(lVar6 + lVar22) != 0) && (*(short *)(lVar6 + lVar22) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        if ((int)uVar24 <= (int)uVar15) goto joined_r0x00014c7591f5;
      }
    }
    goto joined_r0x00014c7591f5;
  }
  pFVar13 = (this->Groups).AllocatorInstance.Data;
  iVar11 = (this->Groups).ArrayNum;
  pFVar17 = pFVar13 + 0x14;
  pFVar26 = pFVar13 + (longlong)iVar11 * 0x38;
  while( true ) {
    if ((this->Groups).ArrayNum != iVar11) {
      local_158 = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_158);
    }
    if (pFVar13 == pFVar26) break;
    uVar24 = *(uint *)pFVar13;
    uVar15 = 0;
    if ((int)uVar24 < local_130.ArrayNum) {
      uVar15 = ~uVar24 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    uVar24 = *(uint *)(local_130.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    if ((int)*(uint *)pFVar17 < (int)uVar24) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar24,(ForAnyElementType *)(pFVar17 + -0xc),*(uint *)(pFVar17 + -4),
                 (int *)pFVar17);
    }
    pFVar13 = pFVar13 + 0x38;
    pFVar17 = pFVar17 + 0x38;
  }
  pFVar4 = this->Mesh;
  uVar16 = 0;
  uVar24 = (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed +
           (pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar24 != 0) &&
     (pFVar17 = (pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar17 - 1U))) {
    uVar16 = 1;
    uVar15 = 1;
    if ((int)uVar24 < 2) goto joined_r0x00014c7595bc;
    do {
      lVar22 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
      this = local_148;
      if ((*(short *)(lVar22 + *(longlong *)(pFVar17 + (uVar16 >> 9) * 8)) != 0) &&
         (*(short *)(lVar22 + *(longlong *)(pFVar17 + (uVar16 >> 9) * 8)) != -1)) break;
      uVar15 = (uint)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar24);
  }
  uVar15 = (uint)uVar16;
joined_r0x00014c7595bc:
  if (uVar15 != uVar24) {
    while( true ) {
      local_150[0] = (int)uVar16;
      uVar14 = (**(code **)(this->_padding_ + 0x18))(this,uVar16);
      uVar15 = 0;
      if ((int)uVar14 < (this->GroupIDToGroupIndexMap).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      uVar14 = *(uint *)((this->GroupIDToGroupIndexMap).AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 4);
      uVar15 = 0;
      if ((int)uVar14 < (this->Groups).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      pFVar17 = (this->Groups).AllocatorInstance.Data;
      if (((*(int **)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 8) <= local_150) &&
          (local_150 <
           *(int **)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 8) +
           *(int *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 0x14))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = *(int *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 0x10);
      if (iVar11 == *(int *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 0x14)) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 8),
                            (int *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 0x14));
      }
      *(int *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 0x10) = iVar11 + 1;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      *(int *)(*(longlong *)(pFVar17 + (longlong)(int)uVar14 * 0x38 + 8) + (longlong)iVar11 * 4) =
           local_150[0];
      if ((int)uVar24 <= (int)uVar15) break;
      while( true ) {
        lVar6 = (ulonglong)((uint)uVar16 & 0x1ff) * 2;
        lVar22 = *(longlong *)
                  ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar16 >> 9) * 8);
        if ((*(short *)(lVar6 + lVar22) != 0) && (*(short *)(lVar6 + lVar22) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        if ((int)uVar24 <= (int)uVar15) goto joined_r0x00014c7595bc;
      }
    }
    goto joined_r0x00014c7595bc;
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->VertexIDToCornerIDMap);
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_8c = 0x80;
  local_90 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar24 = local_90 + 0x1f >> 5;
  if (local_90 + 0x1f >> 5 != 0) {
    if (4 < uVar24) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)local_a8,0,uVar24,4);
      local_8c = uVar24 << 5;
    }
    FVar12 = (ForElementType<unsigned_int>)local_a8;
    if (local_98 != (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_98;
    }
    memset((void *)FVar12,0,(ulonglong)uVar24 << 2);
    uVar24 = local_90 & 0x8000001f;
    if ((int)uVar24 < 0) {
      uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
    }
    if (uVar24 != 0) {
      FVar12 = (ForElementType<unsigned_int>)local_a8;
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_98;
      }
      puVar1 = (uint *)((longlong)FVar12 +
                       (longlong)((int)(local_90 + ((int)local_90 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar24 & 0x1f);
    }
  }
  local_110 = (this->Groups).ArrayNum;
  uVar16 = (ulonglong)(int)local_110;
  pFVar23 = (FGroup *)(this->Groups).AllocatorInstance.Data;
  piVar21 = &(pFVar23->Boundaries).ArrayNum;
  local_b0 = pFVar23 + uVar16;
  while( true ) {
    pFVar8 = local_b0;
    local_138 = piVar21;
    local_f8 = pFVar23;
    if ((this->Groups).ArrayNum != (int)uVar16) {
      local_157 = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_157);
    }
    if (pFVar23 == pFVar8) break;
    bVar9 = GenerateBoundaryAndGroupEdges
                      (this,pFVar23,
                       (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )local_88,(TBitArray<FDefaultBitArrayAllocator> *)local_a8);
    if (!bVar9) {
      bVar9 = false;
LAB_14c759a98:
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98);
      }
      local_40 = 0;
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      return bVar9;
    }
    local_140 = *piVar21;
    uVar16 = (ulonglong)(int)local_140;
    pFVar17 = (((TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *)
               (piVar21 + -2))->AllocatorInstance).Data;
    local_b8 = pFVar17 + uVar16 * 0x28;
    while( true ) {
      pFVar13 = local_b8;
      if (*piVar21 != (int)uVar16) {
        local_156 = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_156);
      }
      if (pFVar17 == pFVar13) break;
      pFVar17[0x20] = (FScriptContainerElement)0x0;
      puVar20 = *(uint **)pFVar17;
      iVar11 = *(int *)(pFVar17 + 8);
      puVar1 = puVar20 + iVar11;
      while( true ) {
        if (*(int *)(pFVar17 + 8) != iVar11) {
          local_155 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_155)
          ;
        }
        if (puVar20 == puVar1) break;
        uVar24 = *puVar20;
        uVar15 = 0;
        if ((int)uVar24 < (this->Edges).ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        pFVar13 = (this->Edges).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x50;
        local_118 = *(int *)pFVar13;
        if (local_118 == pFVar23->GroupID) {
          local_118 = *(int *)(pFVar13 + 4);
        }
        if (local_118 == -1) {
          pFVar17[0x20] = (FScriptContainerElement)0x1;
          puVar20 = puVar20 + 1;
        }
        else {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar17 + 0x10),&local_118);
          puVar20 = puVar20 + 1;
        }
      }
      pFVar17 = pFVar17 + 0x28;
      uVar16 = (ulonglong)local_140;
      piVar21 = local_138;
    }
    local_140 = *piVar21;
    uVar16 = (ulonglong)(int)local_140;
    pFVar26 = (((TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *)
               (piVar21 + -2))->AllocatorInstance).Data;
    pFVar13 = pFVar26 + uVar16 * 0x28;
    pFVar17 = pFVar26 + 0x18;
    while( true ) {
      if (*piVar21 != (int)uVar16) {
        local_154 = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_154);
      }
      piVar7 = local_138;
      if (pFVar26 == pFVar13) break;
      piVar18 = *(int **)(pFVar17 + -8);
      iVar11 = *(int *)pFVar17;
      piVar21 = piVar18 + iVar11;
      while( true ) {
        if (*(int *)pFVar17 != iVar11) {
          local_153[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_153);
        }
        if (piVar18 == piVar21) break;
        local_114 = *piVar18;
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + 2),&local_114);
        piVar18 = piVar18 + 1;
      }
      uVar16 = (ulonglong)local_140;
      pFVar26 = pFVar26 + 0x28;
      pFVar17 = pFVar17 + 0x28;
      piVar21 = local_138;
    }
    pFVar23 = local_f8 + 1;
    piVar21 = piVar21 + 0xe;
    uVar16 = (ulonglong)local_110;
    this = local_148;
  }
  bVar9 = true;
  goto LAB_14c759a98;
}

// RebuildTopologyWithSpecificExtraCorners @ 14c75acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners
          (FGroupTopology *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)&this->ShouldAddExtraCornerAtVert;
  uStack_20 = (longlong *)*(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x28;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = 0;
  local_28 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x20;
  puVar1 = &(this->ShouldAddExtraCornerAtVert).field_0x10;
  local_68 = *(longlong *)puVar1;
  puVar2 = &(this->ShouldAddExtraCornerAtVert).field_0x18;
  uStack_60 = *(undefined8 *)puVar2;
  local_38 = *(undefined4 *)puVar1;
  uStack_34 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14;
  uStack_30 = *(undefined4 *)puVar2;
  uStack_2c = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x1c;
  if (local_48 != 0) {
    *(undefined8 *)&this->ShouldAddExtraCornerAtVert = 0;
  }
  local_78 = *(longlong *)&this->ShouldAddExtraCornerAtVert;
  uVar8 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x8;
  uVar3 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x20;
  plStack_50 = *(longlong **)&(this->ShouldAddExtraCornerAtVert).field_0x28;
  *(code **)&this->ShouldAddExtraCornerAtVert =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FGroupTopology::RebuildTopologyWithSpecificExtraCorners'::__l2::<lambda_1>,bool,UE::Geometry::FGroupTopology_const_&,int,UE::Geometry::FIndex2i_const_&>
       ::Call;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x8 = uStack_70;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x10 = 0x528c69d0;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14 = 1;
  *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
   &(this->ShouldAddExtraCornerAtVert).field_0x18 = param_1;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x20 = (undefined4)local_58;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = 0;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x2c = 0;
  local_58 = uVar3;
  uStack_70 = uVar8;
  if (local_78 != 0) {
    plVar11 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar11 = plStack_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  uVar10 = (**(code **)(this->_padding_ + 8))(this);
  lVar9 = *(longlong *)&this->ShouldAddExtraCornerAtVert;
  uVar8 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x8;
  uVar4 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x10;
  uVar5 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14;
  uVar6 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x18;
  uVar7 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x1c;
  uVar3 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x20;
  plVar11 = *(longlong **)&(this->ShouldAddExtraCornerAtVert).field_0x28;
  *(longlong *)&this->ShouldAddExtraCornerAtVert = local_48;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x8 = uStack_40;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x10 = local_38;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14 = uStack_34;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x18 = uStack_30;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x1c = uStack_2c;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = (undefined4)uStack_20;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x2c = uStack_20._4_4_;
  local_48 = lVar9;
  uStack_40 = uVar8;
  local_38 = uVar4;
  uStack_34 = uVar5;
  uStack_30 = uVar6;
  uStack_2c = uVar7;
  local_28 = uVar3;
  uStack_20 = plVar11;
  if (lVar9 != 0) {
    plVar12 = (longlong *)&local_38;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return (bool)uVar10;
}

// RetargetOnClonedMesh @ 14c75f4b0

void __thiscall
UE::Geometry::FGroupTopology::RetargetOnClonedMesh(FGroupTopology *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this->Mesh = param_1;
  iVar1 = (this->Edges).ArrayNum;
  pFVar2 = (this->Edges).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Edges).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(FDynamicMesh3 **)(pFVar2 + 8) = param_1;
    pFVar2 = pFVar2 + 0x50;
  }
  return;
}

// ShouldVertBeCorner @ 14c763aa0

bool __thiscall
UE::Geometry::FGroupTopology::ShouldVertBeCorner(FGroupTopology *this,int param_1,bool *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  FSmallListSet *pFVar9;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  BaseValueIterator local_68;
  
  if (param_2 != (bool *)0x0) {
    *param_2 = false;
  }
  pFVar9 = &this->Mesh->VertexEdgeLists;
  local_res8 = 0xffffffffffffffff;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_68,pFVar9,param_1,false);
  do {
    while( true ) {
      if ((((local_68.ListSet == pFVar9) && (local_68.ListIndex == param_1)) &&
          (local_68.iCur == -1)) && (local_68.cur_ptr == -1)) {
        if (*(void **)&this->ShouldAddExtraCornerAtVert != (void *)0x0) {
          local_res10[0] = param_1;
          Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddExtraCornerAtVert);
          plVar2 = *(longlong **)&(this->ShouldAddExtraCornerAtVert).field_0x28;
          pcVar1 = *(code **)&this->ShouldAddExtraCornerAtVert;
          plVar7 = (longlong *)&(this->ShouldAddExtraCornerAtVert).field_0x10;
          if (plVar2 != (longlong *)0x0) {
            plVar7 = plVar2;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          cVar3 = (*pcVar1)(uVar6,this,local_res10,&local_res8);
          if (cVar3 != '\0') {
            if (param_2 != (bool *)0x0) {
              *param_2 = true;
            }
            return true;
          }
        }
        return false;
      }
      uVar8 = local_68.cur_value;
      local_res18 = *(undefined8 *)
                     (*(longlong *)
                       ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                       ((local_68._32_8_ & 0xffffffff) >> 9) * 8) + 8 +
                     (ulonglong)(uVar8 & 0x1ff) * 0x10);
      if ((int)((ulonglong)local_res18 >> 0x20) == -1) break;
      pcVar1 = *(code **)(this->_padding_ + 0x18);
      iVar4 = (*pcVar1)(this);
      iVar5 = (*pcVar1)(this,local_res18._4_4_);
      if (iVar4 != iVar5) break;
LAB_14c763ba2:
      FSmallListSet::BaseValueIterator::GotoNext(&local_68);
    }
    if ((int)local_res8 != -1) {
      if (local_res8._4_4_ != -1) {
        return true;
      }
      local_res8 = CONCAT44(uVar8,(int)local_res8);
      goto LAB_14c763ba2;
    }
    local_res8 = CONCAT44(local_res8._4_4_,uVar8);
    FSmallListSet::BaseValueIterator::GotoNext(&local_68);
  } while( true );
}

