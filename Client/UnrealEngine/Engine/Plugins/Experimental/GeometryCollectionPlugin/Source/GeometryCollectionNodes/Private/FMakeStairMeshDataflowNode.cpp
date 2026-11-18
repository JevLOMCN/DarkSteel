// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e852020

UScriptStruct * __cdecl FMakeStairMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeStairMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeStairMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8523a0

FName __thiscall FMakeStairMeshDataflowNode::GetType(FMakeStairMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeStairMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e852480

bool __thiscall FMakeStairMeshDataflowNode::IsA(FMakeStairMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeStairMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8524e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8524e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e852506;
      }
    }
  }
  bVar5 = true;
LAB_14e852506:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e852540

FStructOnScope * __thiscall
FMakeStairMeshDataflowNode::NewStructOnScope(FMakeStairMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeStairMeshDataflowNode,(UObject *)pUVar2,
                           L"MakeStairMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8525f0

void __thiscall
FMakeStairMeshDataflowNode::SerializeInternal(FMakeStairMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeStairMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeStairMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e85266d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e852740

FName __thiscall FMakeStairMeshDataflowNode::GetDisplayName(FMakeStairMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeStairMesh");
  return in_RDX;
}

// GetCategory @ 14e8527f0

FName __thiscall FMakeStairMeshDataflowNode::GetCategory(FMakeStairMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Mesh");
  return in_RDX;
}

// GetTags @ 14e852820

FString * __thiscall
FMakeStairMeshDataflowNode::GetTags
          (FMakeStairMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8528e0

UScriptStruct * __thiscall
FMakeStairMeshDataflowNode::TypedScriptStruct(FMakeStairMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeStairMeshDataflowNode,(UObject *)pUVar1,
                         L"MakeStairMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeStairMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e852ac0

void __thiscall
FMakeStairMeshDataflowNode::Evaluate
          (FMakeStairMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  EDataflowStairTypeEnum EVar1;
  FDynamicMesh3 *this_00;
  undefined1 *puVar2;
  UObject *pUVar3;
  TObjectPtr<UDynamicMesh>_u_0 this_01;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  undefined1 local_188 [168];
  float local_e0;
  int local_dc;
  EStairStyle local_d8;
  float local_48;
  float local_44;
  bool local_40;
  undefined8 local_3c;
  float local_34;
  float local_30;
  TVector<float>_u_0 local_2c;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar2 != &this->Mesh) {
    return;
  }
  pUVar3 = GetTransientPackageAsObject();
  this_01.DebugPtr = NewObject<UDynamicMesh>(pUVar3);
  local_res8.DebugPtr = this_01.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01.DebugPtr != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
  }
  UDynamicMesh::Reset(this_01.DebugPtr);
  EVar1 = this->StairType;
  this_00 = ((this_01.DebugPtr)->Mesh).Ptr;
  if (EVar1 == Linear) {
    UE::Geometry::FStairGenerator::FStairGenerator((FStairGenerator *)local_188);
    local_188._164_4_ = this->StepWidth;
    local_e0 = this->StepHeight;
    local_dc = this->NumSteps;
    local_48 = this->StepDepth;
    local_188._0_8_ = &___7FLinearStairGenerator_Geometry_UE__6B_;
    local_d8 = Solid;
    local_188[0xa0] = true;
    local_188[0xa1] = true;
    UE::Geometry::FStairGenerator::Generate((FStairGenerator *)local_188);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_188);
    local_188._0_8_ = &___7FLinearStairGenerator_Geometry_UE__6B_;
  }
  else if (EVar1 == Floating) {
    UE::Geometry::FStairGenerator::FStairGenerator((FStairGenerator *)local_188);
    local_188._164_4_ = this->StepWidth;
    local_e0 = this->StepHeight;
    local_48 = this->StepDepth;
    local_188._0_8_ = &___7FFloatingStairGenerator_Geometry_UE__6B_;
    local_dc = this->NumSteps;
    local_d8 = Floating;
    local_188[0xa0] = true;
    local_188[0xa1] = true;
    UE::Geometry::FStairGenerator::Generate((FStairGenerator *)local_188);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_188);
    local_188._0_8_ = &___7FLinearStairGenerator_Geometry_UE__6B_;
  }
  else {
    if (EVar1 == Curved) {
      UE::Geometry::FCurvedStairGenerator::FCurvedStairGenerator((FCurvedStairGenerator *)local_188)
      ;
    }
    else {
      if (EVar1 != Spiral) goto LAB_14e852d28;
      UE::Geometry::FStairGenerator::FStairGenerator((FStairGenerator *)local_188);
      local_2c._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_188._0_8_ = &___7FSpiralStairGenerator_Geometry_UE__6B_;
      local_40 = true;
      local_3c._0_4_ = 0.0;
      local_3c._4_4_ = 0.0;
      local_34 = 0.0;
      local_30 = 1.0;
      local_2c._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_d8 = Floating;
    }
    local_188._164_4_ = this->StepWidth;
    local_e0 = this->StepHeight;
    local_dc = this->NumSteps;
    local_44 = this->CurveAngle;
    local_48 = this->InnerRadius;
    local_188[0xa0] = true;
    local_188[0xa1] = true;
    UE::Geometry::FStairGenerator::Generate((FStairGenerator *)local_188);
    UE::Geometry::FDynamicMesh3::Copy(this_00,(FMeshShapeGenerator *)local_188);
    local_188._0_8_ = &___7FCurvedStairGenerator_Geometry_UE__6B_;
  }
  UE::Geometry::FStairGenerator::~FStairGenerator((FStairGenerator *)local_188);
LAB_14e852d28:
  FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
            ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
             &this->Mesh);
  return;
}

// FMakeStairMeshDataflowNode @ 14e923a70

FMakeStairMeshDataflowNode * __thiscall
FMakeStairMeshDataflowNode::FMakeStairMeshDataflowNode
          (FMakeStairMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->StairType = Linear;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeStairMeshDataflowNode__6B_;
  local_28.Reference = &this->Mesh;
  local_48.Reference = (void *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_28.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  this->NumSteps = 8;
  this->StepWidth = 150.0;
  this->StepHeight = 20.0;
  this->StepDepth = 30.0;
  this->CurveAngle = 90.0;
  this->InnerRadius = 150.0;
  local_48.Index = -1;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FMakeStairMeshDataflowNode @ 14e923b50

FMakeStairMeshDataflowNode * __thiscall
FMakeStairMeshDataflowNode::FMakeStairMeshDataflowNode(FMakeStairMeshDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->StairType = Linear;
  this->_padding_ = (longlong)&___7FMakeStairMeshDataflowNode__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  this->NumSteps = 8;
  this->StepWidth = 150.0;
  this->StepHeight = 20.0;
  this->StepDepth = 30.0;
  this->CurveAngle = 90.0;
  this->InnerRadius = 150.0;
  return this;
}

