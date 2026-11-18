// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e829ab0

UScriptStruct * __cdecl FMakeTransformDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton;
}

// GetType @ 14e829c20

FName __thiscall FMakeTransformDataflowNode::GetType(FMakeTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeTransformDataflowNode");
  return in_RDX;
}

// IsA @ 14e829d80

bool __thiscall FMakeTransformDataflowNode::IsA(FMakeTransformDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeTransformDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e829de8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e829de8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e829e06;
      }
    }
  }
  bVar5 = true;
LAB_14e829e06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e829e40

FStructOnScope * __thiscall
FMakeTransformDataflowNode::NewStructOnScope(FMakeTransformDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode,(UObject *)pUVar2,
                           L"MakeTransformDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e829ec0

void __thiscall
FMakeTransformDataflowNode::SerializeInternal(FMakeTransformDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e829f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e829f50

FName __thiscall FMakeTransformDataflowNode::GetDisplayName(FMakeTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeTransform");
  return in_RDX;
}

// GetCategory @ 14e829f80

FName __thiscall FMakeTransformDataflowNode::GetCategory(FMakeTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Generators|Transform");
  return in_RDX;
}

// GetTags @ 14e82a040

FString * __thiscall
FMakeTransformDataflowNode::GetTags
          (FMakeTransformDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82a0b0

UScriptStruct * __thiscall
FMakeTransformDataflowNode::TypedScriptStruct(FMakeTransformDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeTransformDataflowNode,(UObject *)pUVar1,
                         L"MakeTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeTransformDataflowNode.OuterSingleton;
}

// Evaluate @ 14e82a170

void __thiscall
FMakeTransformDataflowNode::Evaluate
          (FMakeTransformDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  TQuat<double> *pTVar6;
  FConnectionReference local_d8;
  FConnectionReference local_c0;
  FConnectionReference local_a8;
  TTransform<double> local_88;
  TQuat<double> local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TTransform<double> *)puVar1 == &this->OutTransform) {
    local_d8.Reference = &this->InScale;
    local_d8.Index = -1;
    local_d8.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_d8);
    pTVar3 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar2,param_1,local_d8.Reference)
    ;
    local_c0.Reference = &this->InTranslation;
    local_c0.Index = -1;
    local_c0.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c0);
    pTVar4 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar2,param_1,local_c0.Reference)
    ;
    local_a8.Reference = &this->InRotation;
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a8);
    pTVar5 = FDataflowInput::GetValue<UE::Math::TVector<double>_>(pFVar2,param_1,local_a8.Reference)
    ;
    pTVar6 = UE::Math::TQuat<double>::MakeFromEuler(&local_28,pTVar5);
    local_88.Translation.XY.m128d_f64[0] = (pTVar4->field0_0x0)._s_0.X;
    local_88.Translation.XY.m128d_f64[1] = (pTVar4->field0_0x0)._s_0.Y;
    local_88.Rotation.ZW.m128d_f64[0] = pTVar6->Z;
    local_88.Rotation.ZW.m128d_f64[1] = pTVar6->W;
    local_88.Rotation.XY.m128d_f64[0] = pTVar6->X;
    local_88.Rotation.XY.m128d_f64[1] = pTVar6->Y;
    local_88.Translation.ZW.m128d_f64[0] = (pTVar4->field0_0x0)._s_0.Z;
    local_88.Scale3D.XY.m128d_f64[0] = (pTVar3->field0_0x0)._s_0.X;
    local_88.Scale3D.XY.m128d_f64[1] = (pTVar3->field0_0x0)._s_0.Y;
    local_88.Translation.ZW.m128d_f64[1] = 0.0;
    local_88.Scale3D.ZW.m128d_f64[0] = (pTVar3->field0_0x0)._s_0.Z;
    local_88.Scale3D.ZW.m128d_f64[1] = 0.0;
    FDataflowNode::SetValue<UE::Math::TTransform<double>,UE::Math::TTransform<double>_>
              ((FDataflowNode *)this,param_1,&local_88,&this->OutTransform);
  }
  return;
}

// FMakeTransformDataflowNode @ 14e923d50

FMakeTransformDataflowNode * __thiscall
FMakeTransformDataflowNode::FMakeTransformDataflowNode
          (FMakeTransformDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FMakeTransformDataflowNode__6B_;
  (this->InScale).field0_0x0._s_0.X = 1.0;
  local_58.Reference = &this->InTranslation;
  (this->InScale).field0_0x0._s_0.Y = 1.0;
  (this->InScale).field0_0x0._s_0.Z = 1.0;
  (((TVector<double> *)local_58.Reference)->field0_0x0)._s_0.X = 0.0;
  (this->InTranslation).field0_0x0._s_0.Y = 0.0;
  (this->InTranslation).field0_0x0._s_0.Z = 0.0;
  (this->InRotation).field0_0x0._s_0.X = 0.0;
  (this->InRotation).field0_0x0._s_0.Y = 0.0;
  (this->InRotation).field0_0x0._s_0.Z = 0.0;
  *&(this->OutTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OutTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OutTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OutTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OutTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OutTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->InRotation;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->InScale;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->OutTransform;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FMakeTransformDataflowNode @ 14e923ef0

FMakeTransformDataflowNode * __thiscall
FMakeTransformDataflowNode::FMakeTransformDataflowNode(FMakeTransformDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakeTransformDataflowNode__6B_;
  (this->InTranslation).field0_0x0._s_0.X = 0.0;
  (this->InTranslation).field0_0x0._s_0.Y = 0.0;
  (this->InTranslation).field0_0x0._s_0.Z = 0.0;
  (this->InRotation).field0_0x0._s_0.X = 0.0;
  (this->InRotation).field0_0x0._s_0.Y = 0.0;
  (this->InRotation).field0_0x0._s_0.Z = 0.0;
  (this->InScale).field0_0x0._s_0.X = 1.0;
  (this->InScale).field0_0x0._s_0.Y = 1.0;
  (this->InScale).field0_0x0._s_0.Z = 1.0;
  *&(this->OutTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OutTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OutTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OutTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OutTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OutTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return this;
}

