// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8311c0

UScriptStruct * __cdecl FInvertTransformDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInvertTransformDataflowNode,(UObject *)pUVar1,
                         L"InvertTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton;
}

// GetType @ 14e831490

FName __thiscall FInvertTransformDataflowNode::GetType(FInvertTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FInvertTransformDataflowNode");
  return in_RDX;
}

// IsA @ 14e831550

bool __thiscall FInvertTransformDataflowNode::IsA(FInvertTransformDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FInvertTransformDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8315b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8315b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8315d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8315d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e831680

FStructOnScope * __thiscall
FInvertTransformDataflowNode::NewStructOnScope(FInvertTransformDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FInvertTransformDataflowNode,(UObject *)pUVar2,
                           L"InvertTransformDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e831770

void __thiscall
FInvertTransformDataflowNode::SerializeInternal
          (FInvertTransformDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInvertTransformDataflowNode,(UObject *)pUVar1,
                         L"InvertTransformDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8317ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e831840

FName __thiscall FInvertTransformDataflowNode::GetDisplayName(FInvertTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"InvertTransform");
  return in_RDX;
}

// GetCategory @ 14e831870

FName __thiscall FInvertTransformDataflowNode::GetCategory(FInvertTransformDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Transform");
  return in_RDX;
}

// GetTags @ 14e8318a0

FString * __thiscall
FInvertTransformDataflowNode::GetTags
          (FInvertTransformDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8318d0

UScriptStruct * __thiscall
FInvertTransformDataflowNode::TypedScriptStruct(FInvertTransformDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInvertTransformDataflowNode,(UObject *)pUVar1,
                         L"InvertTransformDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FInvertTransformDataflowNode.OuterSingleton;
}

// Evaluate @ 14e831d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FInvertTransformDataflowNode::Evaluate
          (FInvertTransformDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  int iVar12;
  undefined1 *puVar13;
  FDataflowInput *this_00;
  TTransform<double> *pTVar14;
  FDataflowOutput *this_01;
  FTimestamp FVar15;
  FGuid *pFVar16;
  ulong64 uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 local_178 [8];
  FConnectionReference local_170;
  FConnectionReference local_158;
  TTransform<double> local_138 [2];
  
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TTransform<double> *)puVar13 == &this->OutTransform) {
    local_170.Reference = &this->InTransform;
    local_170.Index = -1;
    local_170.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_170);
    pTVar14 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                        (this_00,param_1,&UE::Math::TTransform<double>::Identity);
    auVar22 = *(undefined1 (*) [16])(pTVar14->Scale3D).ZW.m128d_f64;
    auVar42 = *(undefined1 (*) [16])(pTVar14->Scale3D).XY.m128d_f64;
    auVar31._0_8_ =
         (double)CONCAT44(auVar22._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar22._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar31._8_4_ = auVar22._8_4_ & _UNK_15061cc88;
    auVar31._12_4_ = auVar22._12_4_ & _UNK_15061cc8c;
    auVar27._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar31._8_8_);
    auVar27._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar31._0_8_);
    uVar18 = movmskpd((int)this_00,auVar27);
    auVar32._0_8_ =
         (double)CONCAT44(auVar42._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar42._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar32._8_4_ = auVar42._8_4_ & _UNK_15061cc88;
    auVar32._12_4_ = auVar42._12_4_ & _UNK_15061cc8c;
    auVar28._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar32._8_8_);
    auVar28._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar32._0_8_);
    iVar12 = movmskpd((int)pTVar14,auVar28);
    if ((uVar18 & 0x3fffffff) == 0 && iVar12 == 0) {
      local_138[0].Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_138[0].Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_138[0].Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_138[0].Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_138[0].Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_138[0].Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      dVar3 = (pTVar14->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar4 = (pTVar14->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar47 = SUB84(dVar4,0);
      uVar48 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = (pTVar14->Rotation).XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar6 = (pTVar14->Rotation).XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar49 = SUB84(dVar6,0);
      uVar50 = (undefined4)((ulonglong)dVar6 >> 0x20);
      lVar19 = -(ulonglong)
                ((double)CONCAT44(auVar22._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar22._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
      auVar41._8_4_ = uVar49;
      auVar41._0_8_ = dVar5;
      auVar41._12_4_ = uVar50;
      lVar20 = -(ulonglong)
                ((double)CONCAT44(auVar42._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  auVar42._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar21 = -(ulonglong)
                ((double)CONCAT44(auVar42._12_4_ & _UNK_15061cc8c,auVar42._8_4_ & _UNK_15061cc88) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_138[0].Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar20 & auVar28._0_4_;
      local_138[0].Scale3D.XY.m128d_f64[0]._4_4_ =
           ~(uint)((ulonglong)lVar20 >> 0x20) & auVar28._4_4_;
      local_138[0].Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar21 & auVar28._8_4_;
      local_138[0].Scale3D.XY.m128d_f64[1]._4_4_ =
           ~(uint)((ulonglong)lVar21 >> 0x20) & auVar28._12_4_;
      auVar42._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar42._0_8_ = auVar22._0_8_;
      auVar42._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      dVar7 = (pTVar14->Translation).XY.m128d_f64[0] *
              (double)CONCAT44(local_138[0].Scale3D.XY.m128d_f64[0]._4_4_,
                               local_138[0].Scale3D.XY.m128d_f64[0]._0_4_);
      dVar8 = (pTVar14->Translation).XY.m128d_f64[1] *
              (double)CONCAT44(local_138[0].Scale3D.XY.m128d_f64[1]._4_4_,
                               local_138[0].Scale3D.XY.m128d_f64[1]._0_4_);
      uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar33._8_4_ = uVar49;
      auVar33._0_8_ = dVar5;
      auVar33._12_4_ = uVar50;
      local_138[0].Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar22._4_4_,
                            ~(uint)lVar19 & auVar22._0_4_);
      dVar36 = auVar33._8_8_;
      auVar23._8_4_ = SUB84(dVar3,0);
      auVar23._0_8_ = dVar36;
      auVar23._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar44._8_4_ = SUB84(dVar8,0);
      auVar44._0_8_ = dVar7;
      auVar44._12_4_ = uVar39;
      dVar10 = (pTVar14->Translation).ZW.m128d_f64[0] * local_138[0].Scale3D.ZW.m128d_f64[0];
      dVar11 = (pTVar14->Translation).ZW.m128d_f64[1] * 0.0;
      auVar22._8_4_ = uVar47;
      auVar22._0_8_ = dVar3;
      auVar22._12_4_ = uVar48;
      auVar42 = blendpd(auVar41,auVar22,2);
      auVar29._8_4_ = SUB84(dVar8,0);
      auVar29._0_8_ = dVar7;
      auVar29._12_4_ = uVar39;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar22 = blendpd(auVar29,auVar9,2);
      auVar45._0_8_ = auVar44._8_8_ * dVar5 - dVar36 * dVar7;
      auVar45._8_8_ = dVar10 * dVar6 - auVar23._8_8_ * dVar8;
      auVar43._8_4_ = uVar47;
      auVar43._0_8_ = dVar3;
      auVar43._12_4_ = uVar48;
      auVar30._0_8_ = auVar22._0_8_ * dVar3 - auVar42._0_8_ * dVar10;
      auVar30._8_8_ = auVar22._8_8_ * dVar4 - auVar42._8_8_ * dVar11;
      dVar11 = auVar45._8_8_ + auVar45._8_8_;
      dVar2 = auVar30._0_8_ + auVar30._0_8_;
      uVar39 = SUB84(dVar2,0);
      uVar40 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar22 = blendpd(auVar45,auVar30,2);
      auVar46._0_8_ = auVar22._0_8_ + auVar22._0_8_;
      auVar46._8_8_ = auVar22._8_8_ + auVar22._8_8_;
      auVar37._8_4_ = uVar39;
      auVar37._0_8_ = dVar11;
      auVar37._12_4_ = uVar40;
      auVar24._8_4_ = uVar39;
      auVar24._0_8_ = dVar11;
      auVar24._12_4_ = uVar40;
      auVar34._8_4_ = uVar39;
      auVar34._0_8_ = dVar11;
      auVar34._12_4_ = uVar40;
      auVar22 = blendpd(auVar34,auVar46,2);
      auVar38._0_8_ = auVar37._8_8_ * dVar5 - dVar11 * dVar36;
      auVar38._8_8_ = auVar46._0_8_ * dVar6 - auVar24._8_8_ * dVar3;
      auVar25._8_4_ = SUB84(auVar46._8_8_,0);
      auVar25._0_8_ = auVar46._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
      auVar35._0_8_ = auVar22._0_8_ * dVar3 - auVar46._0_8_ * auVar42._0_8_;
      auVar35._8_8_ = auVar22._8_8_ * dVar4 - auVar25._8_8_ * auVar42._8_8_;
      auVar26._8_4_ = SUB84(auVar38._8_8_,0);
      auVar26._0_8_ = auVar38._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar22 = blendpd(auVar38,auVar35,2);
      local_138[0].Translation.ZW.m128d_f64[1] = 0.0;
      local_138[0].Translation.ZW.m128d_f64[0] =
           0.0 - (auVar46._0_8_ * auVar43._8_8_ + dVar10 + auVar22._0_8_);
      local_138[0].Scale3D.ZW.m128d_f64[1] = 0.0;
      local_138[0].Rotation.XY.m128d_f64[1]._0_4_ = uVar49;
      local_138[0].Rotation.XY.m128d_f64[0] = dVar5;
      local_138[0].Rotation.XY.m128d_f64[1]._4_4_ = uVar50;
      local_138[0].Rotation.ZW.m128d_f64[1]._0_4_ = uVar47;
      local_138[0].Rotation.ZW.m128d_f64[0] = dVar3;
      local_138[0].Rotation.ZW.m128d_f64[1]._4_4_ = uVar48;
      local_138[0].Translation.XY.m128d_f64[1] = 0.0 - (dVar2 * dVar4 + dVar8 + auVar35._0_8_);
      local_138[0].Translation.XY.m128d_f64[0] =
           0.0 - (dVar11 * auVar43._8_8_ + dVar7 + auVar26._8_8_);
    }
    local_158.Index = -1;
    local_158.ContainerReference = (void *)0x0;
    local_158.Reference = &this->OutTransform;
    this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_158);
    if (this_01 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<UE::Math::TTransform<double>_const_&,UE::Math::TTransform<double>_>'
      ::__l7::<lambda_1>::operator()(local_178);
    }
    else if (this_01->_padding_ != 0) {
      FVar15 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar18 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar16 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_01,(FGuid *)&local_170);
      pFVar1 = (FProperty *)this_01->_padding_;
      uVar17 = CityHash64((char *)&this_01->_padding_,0x10);
      UE::Dataflow::FContext::SetData<UE::Math::TTransform<double>_const_&>
                (param_1,(uint)uVar17,pFVar1,local_138,pFVar16,uVar18,(FTimestamp *)FVar15.Value);
    }
  }
  return;
}

// FInvertTransformDataflowNode @ 14e921ad0

FInvertTransformDataflowNode * __thiscall
FInvertTransformDataflowNode::FInvertTransformDataflowNode
          (FInvertTransformDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  this->_padding_ = (longlong)&___7FInvertTransformDataflowNode__6B_;
  local_48.Reference = &this->InTransform;
  *&(((TTransform<double> *)local_48.Reference)->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  *&(this->InTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_48.ContainerReference = (void *)0x0;
  *&(this->InTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
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
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->OutTransform;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FInvertTransformDataflowNode @ 14e921c30

FInvertTransformDataflowNode * __thiscall
FInvertTransformDataflowNode::FInvertTransformDataflowNode(FInvertTransformDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FInvertTransformDataflowNode__6B_;
  *&(this->InTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->InTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->InTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->InTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->InTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->InTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
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

