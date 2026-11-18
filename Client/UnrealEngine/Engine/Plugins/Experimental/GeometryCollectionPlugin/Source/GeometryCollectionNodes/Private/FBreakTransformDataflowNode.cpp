// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8391c0

UScriptStruct * __cdecl FBreakTransformDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakTransformDataflowNode,(UObject *)pUVar1,
                         L"BreakTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton;
}

// GetType @ 14e839460

FName __thiscall FBreakTransformDataflowNode::GetType(FBreakTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBreakTransformDataflowNode");
  return in_RDX;
}

// IsA @ 14e8394f0

bool __thiscall FBreakTransformDataflowNode::IsA(FBreakTransformDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBreakTransformDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e839558;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e839558:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e839576;
      }
    }
  }
  bVar5 = true;
LAB_14e839576:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8395f0

FStructOnScope * __thiscall
FBreakTransformDataflowNode::NewStructOnScope(FBreakTransformDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBreakTransformDataflowNode,(UObject *)pUVar2,
                           L"BreakTransformDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8396d0

void __thiscall
FBreakTransformDataflowNode::SerializeInternal(FBreakTransformDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakTransformDataflowNode,(UObject *)pUVar1,
                         L"BreakTransformDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83974d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e839760

FName __thiscall FBreakTransformDataflowNode::GetDisplayName(FBreakTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakTransform");
  return in_RDX;
}

// GetCategory @ 14e839790

FName __thiscall FBreakTransformDataflowNode::GetCategory(FBreakTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Transform");
  return in_RDX;
}

// GetTags @ 14e8397c0

FString * __thiscall
FBreakTransformDataflowNode::GetTags
          (FBreakTransformDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8397f0

UScriptStruct * __thiscall
FBreakTransformDataflowNode::TypedScriptStruct(FBreakTransformDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakTransformDataflowNode,(UObject *)pUVar1,
                         L"BreakTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBreakTransformDataflowNode.OuterSingleton;
}

// Evaluate @ 14e83a000

void __thiscall
FBreakTransformDataflowNode::Evaluate
          (FBreakTransformDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  undefined1 *puVar14;
  FDataflowInput *this_00;
  TTransform<double> *pTVar15;
  FDataflowOutput *this_01;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  undefined1 local_res8 [8];
  TVector4<double>_u_0 local_138;
  TVector4<double>_u_0 local_118;
  TQuat<double> local_f8;
  TQuat<double> local_d8;
  TVector<double> local_b8;
  TRotator<double> local_a0 [5];
  
  puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FDataflowVectorTypes *)puVar14 != &this->Translation) &&
       (puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TVector<double> *)puVar14 != &this->Rotation)) &&
      (puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TRotator<double> *)puVar14 != &this->Rotator)) &&
     ((puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TQuat<double> *)puVar14 != &this->Quat &&
      (puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowVectorTypes *)puVar14 != &this->Scale)))) {
    return;
  }
  local_138._s_0.X = (double)&this->Transform;
  local_138._8_4_ = 0xffffffff;
  local_138._s_0.Z = 0.0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)&local_138._s_0);
  pTVar15 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                      (this_00,param_1,(TTransform<double> *)local_138._s_0.X);
  dVar8 = (pTVar15->Rotation).XY.m128d_f64[0];
  dVar9 = (pTVar15->Rotation).XY.m128d_f64[1];
  dVar10 = (pTVar15->Rotation).ZW.m128d_f64[0];
  dVar11 = (pTVar15->Rotation).ZW.m128d_f64[1];
  dVar2 = (pTVar15->Translation).XY.m128d_f64[0];
  dVar3 = (pTVar15->Translation).XY.m128d_f64[1];
  dVar4 = (pTVar15->Translation).ZW.m128d_f64[0];
  dVar5 = (pTVar15->Scale3D).XY.m128d_f64[0];
  dVar6 = (pTVar15->Scale3D).XY.m128d_f64[1];
  dVar7 = (pTVar15->Scale3D).ZW.m128d_f64[0];
  local_f8.X = dVar8;
  local_f8.Y = dVar9;
  local_f8.Z = dVar10;
  local_f8.W = dVar11;
  UE::Math::TQuat<double>::Euler(&local_f8,&local_b8);
  local_f8.X = dVar8;
  local_f8.Y = dVar9;
  local_f8.Z = dVar10;
  local_f8.W = dVar11;
  UE::Math::TQuat<double>::Rotator(&local_f8,local_a0);
  dVar12 = __real_3ff0000000000000;
  local_138._s_0.W = __real_3ff0000000000000;
  local_138._s_0.X = dVar2;
  local_138._s_0.Y = dVar3;
  local_138._s_0.Z = dVar4;
  local_118._s_0.Z = dVar4;
  local_f8.Z = dVar7;
  local_d8.X = dVar8;
  local_d8.Y = dVar9;
  local_d8.Z = dVar10;
  local_d8.W = dVar11;
  FDataflowNode::SetValue<FDataflowVectorTypes>
            ((FDataflowNode *)this,param_1,(TVector4<double> *)&local_138._s_0,&this->Translation);
  FDataflowNode::SetValue<UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,&local_b8,&this->Rotation);
  local_118._s_0.X = (double)&this->Rotator;
  local_118._8_4_ = 0xffffffff;
  local_118._s_0.Z = 0.0;
  this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)&local_118._s_0)
  ;
  if (this_01 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TRotator<double>_const_&,UE::Math::TRotator<double>_>'::__l7
    ::<lambda_1>::operator()(local_res8);
  }
  else if (this_01->_padding_ != 0) {
    FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
    uVar13 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
    pFVar17 = FDataflowConnection::GetOwningNodeGuid
                        ((FDataflowConnection *)this_01,(FGuid *)&local_138._s_0);
    pFVar1 = (FProperty *)this_01->_padding_;
    uVar18 = CityHash64((char *)&this_01->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TRotator<double>_const_&>
              (param_1,(uint)uVar18,pFVar1,local_a0,pFVar17,uVar13,(FTimestamp *)FVar16.Value);
  }
  FDataflowNode::SetValue<UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_>
            ((FDataflowNode *)this,param_1,&local_d8,&this->Quat);
  local_118._s_0.Z = local_f8.Z;
  local_118._s_0.W = dVar12;
  local_118._s_0.X = dVar5;
  local_118._s_0.Y = dVar6;
  FDataflowNode::SetValue<FDataflowVectorTypes>
            ((FDataflowNode *)this,param_1,(TVector4<double> *)&local_118._s_0,&this->Scale);
  return;
}

// FBreakTransformDataflowNode @ 14e913560

FBreakTransformDataflowNode * __thiscall
FBreakTransformDataflowNode::FBreakTransformDataflowNode
          (FBreakTransformDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FDataflowOutput *pFVar9;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FBreakTransformDataflowNode__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_68.Reference = &this->Transform;
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(((TTransform<double> *)local_68.Reference)->Rotation).XY.m128d_f64 = auVar3
  ;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Transform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Translation).Value.field0_0x0._s_0.X = 0.0;
  (this->Translation).Value.field0_0x0._s_0.Y = 0.0;
  (this->Translation).Value.field0_0x0._s_0.Z = 0.0;
  (this->Translation).Value.field0_0x0._s_0.W = 0.0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotator).Pitch = 0.0;
  (this->Rotator).Yaw = 0.0;
  (this->Rotator).Roll = 0.0;
  (this->Quat).W = 1.0;
  (this->Quat).X = 0.0;
  (this->Quat).Y = 0.0;
  (this->Quat).Z = 0.0;
  (this->Scale).Value.field0_0x0._s_0.X = 0.0;
  (this->Scale).Value.field0_0x0._s_0.Y = 0.0;
  (this->Scale).Value.field0_0x0._s_0.Z = 0.0;
  (this->Scale).Value.field0_0x0._s_0.W = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Translation;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar9,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
              ::__l2::Instance);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Rotation;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Rotator;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Quat;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Scale;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar9,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>,UE::Math::TQuat<double>,UE::Math::TQuat<float>,FLinearColor,UE::Math::TIntPoint<int>,UE::Math::TIntVector3<int>,UE::Math::TIntVector4<int>,UE::Math::TRotator<double>_>::GetInterface(void)'
              ::__l2::Instance);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_68);
  }
  return this;
}

// FBreakTransformDataflowNode @ 14e913830

FBreakTransformDataflowNode * __thiscall
FBreakTransformDataflowNode::FBreakTransformDataflowNode(FBreakTransformDataflowNode *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBreakTransformDataflowNode__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Transform).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Transform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Transform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Transform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Transform).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Transform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->Transform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->Transform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->Translation).Value.field0_0x0._s_0.X = 0.0;
  (this->Translation).Value.field0_0x0._s_0.Y = 0.0;
  (this->Translation).Value.field0_0x0._s_0.Z = 0.0;
  (this->Translation).Value.field0_0x0._s_0.W = 0.0;
  (this->Rotation).field0_0x0._s_0.X = 0.0;
  (this->Rotation).field0_0x0._s_0.Y = 0.0;
  (this->Rotation).field0_0x0._s_0.Z = 0.0;
  (this->Rotator).Pitch = 0.0;
  (this->Rotator).Yaw = 0.0;
  (this->Rotator).Roll = 0.0;
  (this->Quat).W = 1.0;
  (this->Quat).X = 0.0;
  (this->Quat).Y = 0.0;
  (this->Quat).Z = 0.0;
  (this->Scale).Value.field0_0x0._s_0.X = 0.0;
  (this->Scale).Value.field0_0x0._s_0.Y = 0.0;
  (this->Scale).Value.field0_0x0._s_0.Z = 0.0;
  (this->Scale).Value.field0_0x0._s_0.W = 0.0;
  return this;
}

