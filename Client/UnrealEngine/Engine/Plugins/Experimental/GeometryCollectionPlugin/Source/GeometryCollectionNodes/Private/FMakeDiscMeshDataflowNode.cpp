// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e84edb0

UScriptStruct * __cdecl FMakeDiscMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDiscMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeDiscMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e84ef40

FName __thiscall FMakeDiscMeshDataflowNode::GetType(FMakeDiscMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeDiscMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e84ef80

bool __thiscall FMakeDiscMeshDataflowNode::IsA(FMakeDiscMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeDiscMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84efe8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84efe8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84f006;
      }
    }
  }
  bVar5 = true;
LAB_14e84f006:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84f040

FStructOnScope * __thiscall
FMakeDiscMeshDataflowNode::NewStructOnScope(FMakeDiscMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeDiscMeshDataflowNode,(UObject *)pUVar2,
                           L"MakeDiscMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84f100

void __thiscall
FMakeDiscMeshDataflowNode::SerializeInternal(FMakeDiscMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDiscMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeDiscMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84f17d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84fa30

FName __thiscall FMakeDiscMeshDataflowNode::GetDisplayName(FMakeDiscMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeDiscMesh");
  return in_RDX;
}

// GetCategory @ 14e84fa60

FName __thiscall FMakeDiscMeshDataflowNode::GetCategory(FMakeDiscMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e84fa90

FString * __thiscall
FMakeDiscMeshDataflowNode::GetTags(FMakeDiscMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84fac0

UScriptStruct * __thiscall
FMakeDiscMeshDataflowNode::TypedScriptStruct(FMakeDiscMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeDiscMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeDiscMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeDiscMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84fc50

void __thiscall
FMakeDiscMeshDataflowNode::Evaluate
          (FMakeDiscMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDynamicMesh3 *this_00;
  undefined1 *puVar1;
  UObject *pUVar2;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  FDiscMeshGenerator local_e8;
  
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
    UE::Geometry::FDiscMeshGenerator::FDiscMeshGenerator(&local_e8);
    local_e8.Radius = this->Radius;
    if (this->Radius <= __real_358637bd) {
      local_e8.Radius = __real_358637bd;
    }
    local_e8.AngleSamples = this->AngleSamples;
    local_e8.Normal.field0_0x0._s_0.Y = (float)(this->Normal).field0_0x0._s_0.Y;
    local_e8.RadialSamples = this->RadialSamples;
    local_e8.bSinglePolygroup = true;
    local_e8.Normal.field0_0x0._s_0.X = (float)(this->Normal).field0_0x0._s_0.X;
    local_e8.EndAngle = this->EndAngle;
    local_e8.Normal.field0_0x0._s_0.Z = (float)(this->Normal).field0_0x0._s_0.Z;
    local_e8.StartAngle = this->StartAngle;
    UE::Geometry::FDiscMeshGenerator::Generate(&local_e8);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)&local_e8);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
               &this->Mesh);
    local_e8._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
  }
  return;
}

// FMakeDiscMeshDataflowNode @ 14e922990

FMakeDiscMeshDataflowNode * __thiscall
FMakeDiscMeshDataflowNode::FMakeDiscMeshDataflowNode
          (FMakeDiscMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  undefined8 uVar1;
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->Radius = 1.0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeDiscMeshDataflowNode__6B_;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_28.Reference = &this->Mesh;
  local_48.Reference = (void *)0x0;
  local_48.ContainerReference = (void *)0x0;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  local_28.ContainerReference = (void *)0x0;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  (((TObjectPtr<UDynamicMesh> *)local_28.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  this->AngleSamples = 0xc;
  this->RadialSamples = 2;
  this->StartAngle = 0.0;
  this->EndAngle = 360.0;
  local_48.Index = -1;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FMakeDiscMeshDataflowNode @ 14e922a70

FMakeDiscMeshDataflowNode * __thiscall
FMakeDiscMeshDataflowNode::FMakeDiscMeshDataflowNode(FMakeDiscMeshDataflowNode *this)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Radius = 1.0;
  this->_padding_ = (longlong)&___7FMakeDiscMeshDataflowNode__6B_;
  uVar1 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  (this->Normal).field0_0x0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  (this->Normal).field0_0x0._s_0.Y = (double)uVar1;
  (this->Normal).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->AngleSamples = 0xc;
  this->RadialSamples = 2;
  this->StartAngle = 0.0;
  this->EndAngle = 360.0;
  return this;
}

