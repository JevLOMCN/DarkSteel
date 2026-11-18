// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// FGroupTopology @ 14cc1b9d0

FGroupTopology * __thiscall UE::Geometry::FGroupTopology::FGroupTopology(FGroupTopology *this)

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
  this->Mesh = (FDynamicMesh3 *)0x0;
  this->GroupLayer = (TDynamicMeshScalarTriangleAttribute<int> *)0x0;
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
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x34 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x48 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x30 = 0xffffffff;
  (this->CurrentExtraCornerVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExtraCornerVids).HashSize = 0;
  return this;
}

// FGroupTopology @ 14cd4f190

FGroupTopology * __thiscall
UE::Geometry::FGroupTopology::FGroupTopology(FGroupTopology *this,FGroupTopology *param_1)

{
  TArray<UE::Geometry::FGroupTopology::FCorner,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Geometry::FGroupTopology::FGroup,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FGroupTopology::FGroupEdge,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  FCorner *pFVar9;
  FGroup *pFVar10;
  FGroupEdge *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  
  this->_padding_ = (longlong)&___7FGroupTopology_Geometry_UE__6B_;
  lVar7 = *(longlong *)&param_1->ShouldAddExtraCornerAtVert;
  *(undefined8 *)&(this->ShouldAddExtraCornerAtVert).field_0x28 = 0;
  *(longlong *)&this->ShouldAddExtraCornerAtVert = lVar7;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)&(param_1->ShouldAddExtraCornerAtVert).field_0x28;
    puVar15 = (undefined8 *)&(param_1->ShouldAddExtraCornerAtVert).field_0x10;
    if (puVar8 != (undefined8 *)0x0) {
      puVar15 = puVar8;
    }
    (**(code **)*puVar15)();
  }
  pTVar1 = &this->Corners;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Corners).ArrayMax;
  iVar6 = (param_1->Corners).ArrayNum;
  pFVar9 = (FCorner *)(param_1->Corners).AllocatorInstance.Data;
  (this->Corners).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    ConstructItems<UE::Geometry::FGroupTopology::FCorner,UE::Geometry::FGroupTopology::FCorner,int>
              ((pTVar1->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar3 = &this->Groups;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Groups).ArrayMax;
  iVar6 = (param_1->Groups).ArrayNum;
  pFVar10 = (FGroup *)(param_1->Groups).AllocatorInstance.Data;
  (this->Groups).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    ConstructItems<UE::Geometry::FGroupTopology::FGroup,UE::Geometry::FGroupTopology::FGroup,int>
              ((pTVar3->AllocatorInstance).Data,pFVar10,iVar6);
  }
  pTVar4 = &this->Edges;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Edges).ArrayMax;
  iVar6 = (param_1->Edges).ArrayNum;
  pFVar11 = (FGroupEdge *)(param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    ConstructItems<UE::Geometry::FGroupTopology::FGroupEdge,UE::Geometry::FGroupTopology::FGroupEdge,int>
              ((pTVar4->AllocatorInstance).Data,pFVar11,iVar6);
  }
  pTVar5 = &this->GroupIDToGroupIndexMap;
  this->Mesh = param_1->Mesh;
  this->GroupLayer = param_1->GroupLayer;
  piVar2 = &(this->GroupIDToGroupIndexMap).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->GroupIDToGroupIndexMap).ArrayNum;
  pFVar12 = (param_1->GroupIDToGroupIndexMap).AllocatorInstance.Data;
  (this->GroupIDToGroupIndexMap).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar12,(longlong)iVar6 << 2);
  }
  (this->CornerVerticesFlags).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CornerVerticesFlags).NumBits = 0;
  (this->CornerVerticesFlags).MaxBits = 0;
  uVar14 = (param_1->CornerVerticesFlags).NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    uVar13 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar13 = uVar14;
    }
    (this->CornerVerticesFlags).MaxBits = uVar13;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->CornerVerticesFlags,0);
  }
  iVar6 = (param_1->CornerVerticesFlags).NumBits;
  (this->CornerVerticesFlags).NumBits = iVar6;
  if (iVar6 != 0) {
    _Src = (param_1->CornerVerticesFlags).AllocatorInstance.SecondaryData;
    _Dst = (this->CornerVerticesFlags).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<unsigned_int>)0x0) {
      _Src = (ForElementType<unsigned_int>)&param_1->CornerVerticesFlags;
    }
    if (_Dst == (ForElementType<unsigned_int>)0x0) {
      _Dst = (ForElementType<unsigned_int>)&this->CornerVerticesFlags;
    }
    memcpy((void *)_Dst,(void *)_Src,(ulonglong)(iVar6 + 0x1fU >> 5) << 2);
  }
  pTVar5 = &this->EmptyArray;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->EmptyArray).ArrayMax;
  iVar6 = (param_1->EmptyArray).ArrayNum;
  pFVar12 = (param_1->EmptyArray).AllocatorInstance.Data;
  (this->EmptyArray).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar12,(longlong)iVar6 << 2);
  }
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x0 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x8 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x20 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x28 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x34 = 0;
  *(undefined8 *)&(this->VertexIDToCornerIDMap).field_0x40 = 0;
  *(undefined4 *)&(this->VertexIDToCornerIDMap).field_0x48 = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->VertexIDToCornerIDMap,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &param_1->VertexIDToCornerIDMap);
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentExtraCornerVids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentExtraCornerVids).Elements.field_0x34 = 0;
  (this->CurrentExtraCornerVids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentExtraCornerVids).HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->CurrentExtraCornerVids,&param_1->CurrentExtraCornerVids);
  return this;
}

