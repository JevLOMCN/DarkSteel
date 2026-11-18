// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b6b70

UScriptStruct * __cdecl FTransformMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformMeshDataflowNode,(UObject *)pUVar1,
                         L"TransformMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e8b7100

FName __thiscall FTransformMeshDataflowNode::GetType(FTransformMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FTransformMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b7160

bool __thiscall FTransformMeshDataflowNode::IsA(FTransformMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FTransformMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b71c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b71c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b71e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b71e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b7320

FStructOnScope * __thiscall
FTransformMeshDataflowNode::NewStructOnScope(FTransformMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTransformMeshDataflowNode,(UObject *)pUVar2,
                           L"TransformMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b7420

void __thiscall
FTransformMeshDataflowNode::SerializeInternal(FTransformMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformMeshDataflowNode,(UObject *)pUVar1,
                         L"TransformMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b749d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b75c0

FName __thiscall FTransformMeshDataflowNode::GetDisplayName(FTransformMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransformMesh");
  return in_RDX;
}

// GetCategory @ 14e8b7620

FName __thiscall FTransformMeshDataflowNode::GetCategory(FTransformMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Transform");
  return in_RDX;
}

// GetTags @ 14e8b7810

FString * __thiscall
FTransformMeshDataflowNode::GetTags
          (FTransformMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b78b0

UScriptStruct * __thiscall
FTransformMeshDataflowNode::TypedScriptStruct(FTransformMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformMeshDataflowNode,(UObject *)pUVar1,
                         L"TransformMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b7c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformMeshDataflowNode::Evaluate
          (FTransformMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TObjectPtr<UDynamicMesh> *pTVar1;
  float fVar2;
  TObjectPtr<UDynamicMesh> TVar3;
  undefined1 *puVar4;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar5;
  UObject *pUVar6;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  FDataflowInput *pFVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  float *pfVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  bool *pbVar14;
  undefined1 auStackY_1f8 [32];
  TObjectPtr<UDynamicMesh>_u_0 local_1a0;
  FConnectionReference local_198;
  FConnectionReference local_180;
  FConnectionReference local_168;
  FConnectionReference local_150;
  FConnectionReference local_138;
  FConnectionReference local_120;
  TQuaternion<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  void *local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pTVar1 = &this->Mesh;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar4 != pTVar1) {
    return;
  }
  pTVar5 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>((FDataflowNode *)this,param_1,pTVar1)
            ->field0_0x0;
  TVar3.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar5->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar3.field0_0x0 == (UDynamicMesh *)0x0) goto LAB_14e8b7f6c;
    UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
  }
  if (TVar3.field0_0x0 != (UDynamicMesh *)0x0) {
    pUVar6 = GetTransientPackageAsObject();
    this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar6);
    local_1a0.DebugPtr = this_00.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    UDynamicMesh::SetMesh(this_00.DebugPtr,*(FDynamicMesh3 **)((longlong)TVar3.field0_0x0 + 0xb8));
    local_168.Reference = &this->Translate;
    local_168.Index = -1;
    local_168.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
    pTVar8 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar7,param_1,local_168.Reference);
    local_150.Reference = &this->Rotate;
    local_150.Index = -1;
    local_150.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
    pTVar9 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar7,param_1,local_150.Reference);
    local_138.Reference = &this->Scale;
    local_138.Index = -1;
    local_138.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
    pTVar10 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar7,param_1,local_138.Reference);
    local_198.Reference = &this->UniformScale;
    local_198.Index = -1;
    local_198.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
    pfVar11 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_198.Reference);
    fVar2 = *pfVar11;
    local_198.Reference = &this->RotatePivot;
    local_198.Index = -1;
    local_198.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
    pTVar12 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar7,param_1,local_198.Reference);
    local_120.Reference = &this->ScalePivot;
    local_120.Index = -1;
    local_120.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
    pTVar13 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar7,param_1,local_120.Reference);
    local_180.Reference = &this->bInvertTransformation;
    local_180.Index = -1;
    local_180.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_180);
    pbVar14 = FDataflowInput::GetValue<bool>(pFVar7,param_1,local_180.Reference);
    GeometryCollection::Facades::FCollectionTransformFacade::BuildTransform
              (&local_b8,pTVar8,this->RotationOrder,pTVar9,pTVar10,fVar2,pTVar12,pTVar13,*pbVar14);
    local_108._s_0.X = local_b8.Rotation.XY.m128d_f64[0];
    local_108._s_0.Z = local_b8.Rotation.ZW.m128d_f64[0];
    local_108._s_0.Y = local_b8.Rotation.XY.m128d_f64[1];
    local_108._s_0.W = local_b8.Rotation.ZW.m128d_f64[1];
    local_d8 = local_b8.Translation.ZW.m128d_f64[0];
    local_180.ContainerReference = (void *)local_b8.Scale3D.ZW.m128d_f64[0];
    local_e8 = local_b8.Translation.XY.m128d_f64[0];
    dStack_e0 = local_b8.Translation.XY.m128d_f64[1];
    local_c0 = (void *)local_b8.Scale3D.ZW.m128d_f64[0];
    local_d0 = local_b8.Scale3D.XY.m128d_f64[0];
    dStack_c8 = local_b8.Scale3D.XY.m128d_f64[1];
    MeshTransforms::ApplyTransform
              (((this_00.DebugPtr)->Mesh).Ptr,(TTransformSRT3<double> *)&local_108._s_0,true,All);
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_1a0.ObjectPtr,
               &this->Mesh);
    return;
  }
LAB_14e8b7f6c:
  pUVar6 = GetTransientPackageAsObject();
  local_1a0.DebugPtr = NewObject<UDynamicMesh>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a0.DebugPtr != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a0.DebugPtr);
  }
  FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>
            ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_1a0.ObjectPtr,pTVar1);
  return;
}

// FTransformMeshDataflowNode @ 14e92f4a0

FTransformMeshDataflowNode * __thiscall
FTransformMeshDataflowNode::FTransformMeshDataflowNode
          (FTransformMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FName this_00;
  FDataflowInput *pFVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  local_78.Index = -1;
  this->RotationOrder = Dataflow_RotationOrder_XYZ;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FTransformMeshDataflowNode__6B_;
  local_78.Reference = &this->Mesh;
  (this->Translate).field0_0x0._s_0.X = 0.0;
  (((TObjectPtr<UDynamicMesh> *)local_78.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->Translate).field0_0x0._s_0.Y = 0.0;
  (this->Translate).field0_0x0._s_0.Z = 0.0;
  (this->Rotate).field0_0x0._s_0.X = 0.0;
  (this->Rotate).field0_0x0._s_0.Y = 0.0;
  this->bInvertTransformation = false;
  (this->Rotate).field0_0x0._s_0.Z = 0.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->RotatePivot).field0_0x0._s_0.X = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Y = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Z = 0.0;
  (this->ScalePivot).field0_0x0._s_0.X = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Y = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Z = 0.0;
  this->UniformScale = 1.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Translate;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Rotate;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Scale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->UniformScale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->RotatePivot;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->ScalePivot;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->bInvertTransformation;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (TObjectPtr<UDynamicMesh> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FTransformMeshDataflowNode *)this_00;
}

// FTransformMeshDataflowNode @ 14e92f710

FTransformMeshDataflowNode * __thiscall
FTransformMeshDataflowNode::FTransformMeshDataflowNode(FTransformMeshDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->UniformScale = 1.0;
  this->RotationOrder = Dataflow_RotationOrder_XYZ;
  this->_padding_ = (longlong)&___7FTransformMeshDataflowNode__6B_;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->Translate).field0_0x0._s_0.X = 0.0;
  (this->Translate).field0_0x0._s_0.Y = 0.0;
  (this->Translate).field0_0x0._s_0.Z = 0.0;
  (this->Rotate).field0_0x0._s_0.X = 0.0;
  (this->Rotate).field0_0x0._s_0.Y = 0.0;
  (this->Rotate).field0_0x0._s_0.Z = 0.0;
  (this->RotatePivot).field0_0x0._s_0.X = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Y = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Z = 0.0;
  (this->ScalePivot).field0_0x0._s_0.X = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Y = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Z = 0.0;
  this->bInvertTransformation = false;
  return this;
}

