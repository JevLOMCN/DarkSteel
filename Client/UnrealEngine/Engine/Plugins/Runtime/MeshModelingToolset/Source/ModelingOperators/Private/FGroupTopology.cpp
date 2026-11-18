// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// operator= @ 14c94a210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGroupTopology * __thiscall
UE::Geometry::FGroupTopology::operator=(FGroupTopology *this,FGroupTopology *param_1)

{
  TArray<UE::Geometry::FGroupTopology::FCorner,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FGroupTopology::FGroup,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FGroupTopology::FGroupEdge,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FCorner *pFVar8;
  FGroup *pFVar9;
  FGroupEdge *pFVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined1 auStackY_a8 [32];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  lVar6 = *(longlong *)&param_1->ShouldAddExtraCornerAtVert;
  uStack_40 = (longlong *)0x0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)&(param_1->ShouldAddExtraCornerAtVert).field_0x28;
    puVar18 = (undefined8 *)&(param_1->ShouldAddExtraCornerAtVert).field_0x10;
    if (puVar7 != (undefined8 *)0x0) {
      puVar18 = puVar7;
    }
    (**(code **)*puVar18)(puVar18,&local_58);
  }
  lVar17 = *(longlong *)&this->ShouldAddExtraCornerAtVert;
  uVar11 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x10;
  uVar12 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14;
  uVar13 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x18;
  uVar14 = *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x1c;
  uVar15 = *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x20;
  plVar16 = *(longlong **)&(this->ShouldAddExtraCornerAtVert).field_0x28;
  *(longlong *)&this->ShouldAddExtraCornerAtVert = lVar6;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x8 = uStack_60;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x10 = (undefined4)local_58;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x14 = local_58._4_4_;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x18 = uStack_50;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x1c = uStack_4c;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x20 = (undefined4)local_48;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = (undefined4)uStack_40;
  *(undefined4 *)&(this->ShouldAddExtraCornerAtVert).field_0x2c = uStack_40._4_4_;
  local_58._0_4_ = uVar11;
  local_58._4_4_ = uVar12;
  uStack_50 = uVar13;
  uStack_4c = uVar14;
  local_48 = uVar15;
  uStack_40 = plVar16;
  if (lVar17 != 0) {
    plVar19 = &local_58;
    if (plVar16 != (longlong *)0x0) {
      plVar19 = plVar16;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  pTVar1 = &this->Corners;
  if (pTVar1 != &param_1->Corners) {
    DestructItems<UE::Geometry::FGroupTopology::FCorner,int>
              ((FCorner *)(pTVar1->AllocatorInstance).Data,(this->Corners).ArrayNum);
    iVar5 = (param_1->Corners).ArrayNum;
    piVar2 = &(this->Corners).ArrayMax;
    pFVar8 = (FCorner *)(param_1->Corners).AllocatorInstance.Data;
    (this->Corners).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      ConstructItems<UE::Geometry::FGroupTopology::FCorner,UE::Geometry::FGroupTopology::FCorner,int>
                ((pTVar1->AllocatorInstance).Data,pFVar8,iVar5);
    }
  }
  pTVar3 = &this->Groups;
  if (pTVar3 != &param_1->Groups) {
    DestructItems<UE::Geometry::FGroupTopology::FGroup,int>
              ((FGroup *)(pTVar3->AllocatorInstance).Data,(this->Groups).ArrayNum);
    iVar5 = (param_1->Groups).ArrayNum;
    piVar2 = &(this->Groups).ArrayMax;
    pFVar9 = (FGroup *)(param_1->Groups).AllocatorInstance.Data;
    (this->Groups).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      ConstructItems<UE::Geometry::FGroupTopology::FGroup,UE::Geometry::FGroupTopology::FGroup,int>
                ((pTVar3->AllocatorInstance).Data,pFVar9,iVar5);
    }
  }
  pTVar4 = &this->Edges;
  if (pTVar4 != &param_1->Edges) {
    DestructItems<UE::Geometry::FGroupTopology::FGroupEdge,int>
              ((FGroupEdge *)(pTVar4->AllocatorInstance).Data,(this->Edges).ArrayNum);
    iVar5 = (param_1->Edges).ArrayNum;
    piVar2 = &(this->Edges).ArrayMax;
    pFVar10 = (FGroupEdge *)(param_1->Edges).AllocatorInstance.Data;
    (this->Edges).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<UE::Geometry::FGroupTopology::FGroupEdge,UE::Geometry::FGroupTopology::FGroupEdge,int>
                ((pTVar4->AllocatorInstance).Data,pFVar10,iVar5);
    }
  }
  this->Mesh = param_1->Mesh;
  this->GroupLayer = param_1->GroupLayer;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->GroupIDToGroupIndexMap,&param_1->GroupIDToGroupIndexMap);
  if (&this->CornerVerticesFlags != &param_1->CornerVerticesFlags) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&this->CornerVerticesFlags,&param_1->CornerVerticesFlags);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->EmptyArray,&param_1->EmptyArray);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->VertexIDToCornerIDMap,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->VertexIDToCornerIDMap);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->CurrentExtraCornerVids,&param_1->CurrentExtraCornerVids);
  return this;
}

