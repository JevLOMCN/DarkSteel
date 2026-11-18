// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b2780

UScriptStruct * __cdecl FTransformCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8b28b0

FName __thiscall FTransformCollectionDataflowNode::GetType(FTransformCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FTransformCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b28e0

bool __thiscall
FTransformCollectionDataflowNode::IsA(FTransformCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FTransformCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b2948;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b2948:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b2966;
      }
    }
  }
  bVar5 = true;
LAB_14e8b2966:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b2a50

FStructOnScope * __thiscall
FTransformCollectionDataflowNode::NewStructOnScope(FTransformCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionDataflowNode,
                           (UObject *)pUVar2,L"TransformCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b2b30

void __thiscall
FTransformCollectionDataflowNode::SerializeInternal
          (FTransformCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b2bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b2bf0

FName __thiscall
FTransformCollectionDataflowNode::GetDisplayName(FTransformCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TransformCollection");
  return in_RDX;
}

// GetCategory @ 14e8b2c30

FName __thiscall
FTransformCollectionDataflowNode::GetCategory(FTransformCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Transform");
  return in_RDX;
}

// GetTags @ 14e8b2c60

FString * __thiscall
FTransformCollectionDataflowNode::GetTags
          (FTransformCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b2c90

UScriptStruct * __thiscall
FTransformCollectionDataflowNode::TypedScriptStruct(FTransformCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionDataflowNode,
                         (UObject *)pUVar1,L"TransformCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FTransformCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b2ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTransformCollectionDataflowNode::Evaluate
          (FTransformCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  float fVar2;
  ERotationOrderEnum EVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowInput *pFVar6;
  TVector<double> *pTVar7;
  ERotationOrderEnum *pEVar8;
  float *pfVar9;
  bool *pbVar10;
  FDataflowSelection *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStackY_328 [32];
  FConnectionReference local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_260;
  FCollectionTransformFacade local_248;
  TTransform<double> local_158;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 == pFVar1) {
    pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar5);
    local_2d8.Reference = &this->Translate;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar6,param_1,local_2d8.Reference);
    local_260._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_260._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_260._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    local_2d8.Reference = &this->Rotate;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar6,param_1,local_2d8.Reference);
    local_278._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_278._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_278._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    local_2d8.Reference = &this->Scale;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar6,param_1,local_2d8.Reference);
    local_290._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_290._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_290._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    local_2d8.Reference = &this->RotationOrder;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pEVar8 = FDataflowInput::GetValue<enum_ERotationOrderEnum>(pFVar6,param_1,local_2d8.Reference);
    EVar3 = *pEVar8;
    local_2d8.Reference = &this->UniformScale;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pfVar9 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_2d8.Reference);
    fVar2 = *pfVar9;
    local_2d8.Reference = &this->RotatePivot;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar6,param_1,local_2d8.Reference);
    local_2a8._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_2a8._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_2a8._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    local_2d8.Reference = &this->ScalePivot;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pTVar7 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                       (pFVar6,param_1,local_2d8.Reference);
    local_2c0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    local_2c0._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
    local_2c0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    local_2d8.Reference = &this->bInvertTransformation;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    pbVar10 = FDataflowInput::GetValue<bool>(pFVar6,param_1,local_2d8.Reference);
    GeometryCollection::Facades::FCollectionTransformFacade::BuildTransform
              (&local_158,(TVector<double> *)&local_260._s_0,EVar3,
               (TVector<double> *)&local_278._s_0,(TVector<double> *)&local_290._s_0,fVar2,
               (TVector<double> *)&local_2a8._s_0,(TVector<double> *)&local_2c0._s_0,*pbVar10);
    GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
              (&local_248,&local_f8);
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    local_2d8.Reference = &this->TransformSelection;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2d8);
    if (pFVar6->Connection == (FDataflowOutput *)0x0) {
      GeometryCollection::Facades::FCollectionTransformFacade::Transform(&local_248,&local_158);
    }
    else {
      this_00 = (FDataflowSelection *)
                FDataflowNode::GetValue<FDataflowTransformSelection>
                          ((FDataflowNode *)this,param_1,&this->TransformSelection);
      pTVar11 = FDataflowSelection::AsArray
                          (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2d8);
      GeometryCollection::Facades::FCollectionTransformFacade::Transform
                (&local_248,&local_158,pTVar11);
      if (local_2d8.Reference != (FDataflowTransformSelection *)0x0) {
        FMemory::Free(local_2d8.Reference);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FTransformCollectionDataflowNode @ 14e92f0c0

FTransformCollectionDataflowNode * __thiscall
FTransformCollectionDataflowNode::FTransformCollectionDataflowNode
          (FTransformCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowTransformSelection *pFVar2;
  uint uVar3;
  FName this_00;
  FDataflowInput *pFVar4;
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
  this->_padding_ = (longlong)&___7FTransformCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar2 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  local_78.Index = -1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->Translate).field0_0x0._s_0.X = 0.0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  (this->Translate).field0_0x0._s_0.Y = 0.0;
  (this->Translate).field0_0x0._s_0.Z = 0.0;
  this->RotationOrder = Dataflow_RotationOrder_XYZ;
  (this->Rotate).field0_0x0._s_0.X = 0.0;
  (this->Rotate).field0_0x0._s_0.Y = 0.0;
  (this->Rotate).field0_0x0._s_0.Z = 0.0;
  (this->RotatePivot).field0_0x0._s_0.X = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Y = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Z = 0.0;
  (((TVector<double> *)((longlong)local_res8 + 0x390))->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x398) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x3a0) = 0;
  *(bool *)((longlong)local_res8 + 0x3a8) = false;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  this->UniformScale = 1.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Translate;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
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
  local_78.Reference = &this->RotationOrder;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->UniformScale;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->RotatePivot;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x390);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x3a8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FTransformCollectionDataflowNode *)this_00;
}

// FTransformCollectionDataflowNode @ 14e92f3b0

FTransformCollectionDataflowNode * __thiscall
FTransformCollectionDataflowNode::FTransformCollectionDataflowNode
          (FTransformCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FTransformCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  (this->Translate).field0_0x0._s_0.X = 0.0;
  (this->Translate).field0_0x0._s_0.Y = 0.0;
  (this->Translate).field0_0x0._s_0.Z = 0.0;
  this->RotationOrder = Dataflow_RotationOrder_XYZ;
  (this->Rotate).field0_0x0._s_0.X = 0.0;
  (this->Rotate).field0_0x0._s_0.Y = 0.0;
  (this->Rotate).field0_0x0._s_0.Z = 0.0;
  this->UniformScale = 1.0;
  (this->RotatePivot).field0_0x0._s_0.X = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Y = 0.0;
  (this->RotatePivot).field0_0x0._s_0.Z = 0.0;
  (this->ScalePivot).field0_0x0._s_0.X = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Y = 0.0;
  (this->ScalePivot).field0_0x0._s_0.Z = 0.0;
  this->bInvertTransformation = false;
  return this;
}

