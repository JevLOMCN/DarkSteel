// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e847d40

UScriptStruct * __cdecl FMakeBoxMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeBoxMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeBoxMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e848140

FName __thiscall FMakeBoxMeshDataflowNode::GetType(FMakeBoxMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeBoxMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8483c0

bool __thiscall FMakeBoxMeshDataflowNode::IsA(FMakeBoxMeshDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FMakeBoxMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e848428;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e848428:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e848446;
      }
    }
  }
  bVar5 = true;
LAB_14e848446:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8484b0

FStructOnScope * __thiscall
FMakeBoxMeshDataflowNode::NewStructOnScope(FMakeBoxMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeBoxMeshDataflowNode,(UObject *)pUVar2,
                           L"MakeBoxMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e848600

void __thiscall
FMakeBoxMeshDataflowNode::SerializeInternal(FMakeBoxMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeBoxMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeBoxMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84867d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e848690

FName __thiscall FMakeBoxMeshDataflowNode::GetDisplayName(FMakeBoxMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeBoxMesh");
  return in_RDX;
}

// GetCategory @ 14e8486f0

FName __thiscall FMakeBoxMeshDataflowNode::GetCategory(FMakeBoxMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e848990

FString * __thiscall
FMakeBoxMeshDataflowNode::GetTags(FMakeBoxMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e848a80

UScriptStruct * __thiscall
FMakeBoxMeshDataflowNode::TypedScriptStruct(FMakeBoxMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeBoxMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeBoxMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeBoxMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e848fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FMakeBoxMeshDataflowNode::Evaluate
          (FMakeBoxMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDynamicMesh3 *this_00;
  undefined1 *puVar1;
  UObject *pUVar2;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  double dVar3;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  FGridBoxMeshGenerator local_128;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar1 == &this->Mesh) {
    pUVar2 = GetTransientPackageAsObject();
    this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar2);
    local_res8.DebugPtr = this_01.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
    }
    UDynamicMesh::Reset(this_01.DebugPtr);
    this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
    UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator(&local_128);
    local_128.Box.Frame.Origin.field0_0x0._16_4_ =
         *(undefined4 *)((longlong)&(this->Center).field0_0x0 + 0x10);
    local_128.Box.Frame.Origin.field0_0x0._20_4_ =
         *(undefined4 *)((longlong)&(this->Center).field0_0x0 + 0x14);
    local_128.EdgeVertices.field0_0x0._s_0.A = this->SubdivisionsX + 1;
    local_128.Box.Frame.Origin.field0_0x0._s_0.X = (this->Center).field0_0x0._s_0.X;
    local_128.Box.Frame.Origin.field0_0x0._s_0.Y = (this->Center).field0_0x0._s_0.Y;
    local_128.EdgeVertices.field0_0x0._s_0.B = this->SubdivisionsY + 1;
    local_128.bPolygroupPerQuad = false;
    local_128.Box.Extents.field0_0x0._s_0.X =
         (this->Size).field0_0x0._s_0.X * __real_3fe0000000000000;
    local_128.EdgeVertices.field0_0x0._s_0.C = this->SubdivisionsZ + 1;
    dVar3 = (this->Size).field0_0x0._s_0.Z * __real_3fe0000000000000;
    local_128.Box.Frame.Rotation.field0_0x0._0_4_ = 0;
    local_128.Box.Frame.Rotation.field0_0x0._4_4_ = 0;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.Y = 0.0;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
    local_128.Box.Frame.Rotation.field0_0x0._s_0.W = _UNK_15061cbc8;
    local_128.Box.Extents.field0_0x0._16_4_ = SUB84(dVar3,0);
    local_128.Box.Extents.field0_0x0._8_8_ =
         (this->Size).field0_0x0._s_0.Y * __real_3fe0000000000000;
    local_128.Box.Extents.field0_0x0._20_4_ = (int)((ulonglong)dVar3 >> 0x20);
    UE::Geometry::FGridBoxMeshGenerator::Generate(&local_128);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)&local_128);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
               &this->Mesh);
    local_128._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
    if ((void *)local_128._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_128._padding_);
    }
  }
  return;
}

// FMakeBoxMeshDataflowNode @ 14e9221e0

FMakeBoxMeshDataflowNode * __thiscall
FMakeBoxMeshDataflowNode::FMakeBoxMeshDataflowNode
          (FMakeBoxMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->SubdivisionsX = 3;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeBoxMeshDataflowNode__6B_;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Size).field0_0x0._s_0.X = 5.0;
  (this->Size).field0_0x0._s_0.Y = 5.0;
  (this->Size).field0_0x0._s_0.Z = 5.0;
  local_28.Reference = &this->Mesh;
  (((TObjectPtr<UDynamicMesh> *)local_28.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  local_48.Reference = (void *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  this->SubdivisionsY = 3;
  this->SubdivisionsZ = 3;
  local_48.Index = -1;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FMakeBoxMeshDataflowNode @ 14e9222d0

FMakeBoxMeshDataflowNode * __thiscall
FMakeBoxMeshDataflowNode::FMakeBoxMeshDataflowNode(FMakeBoxMeshDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->SubdivisionsX = 3;
  this->SubdivisionsY = 3;
  this->_padding_ = (longlong)&___7FMakeBoxMeshDataflowNode__6B_;
  (this->Size).field0_0x0._s_0.X = 5.0;
  (this->Size).field0_0x0._s_0.Y = 5.0;
  (this->Size).field0_0x0._s_0.Z = 5.0;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  this->SubdivisionsZ = 3;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  return this;
}

