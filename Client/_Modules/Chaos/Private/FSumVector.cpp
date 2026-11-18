// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// FSumVector @ 143f456a0

FSumVector * __thiscall
FSumVector::FSumVector
          (FSumVector *this,float param_1,FFieldNode<float> *param_2,
          FFieldNode<UE::Math::TVector<double>_> *param_3,
          FFieldNode<UE::Math::TVector<double>_> *param_4,EFieldOperationType param_5)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FSumVector__6B_;
  (this->VectorLeft).Ptr = param_4;
  this->Operation = param_5;
  (this->Scalar).Ptr = param_2;
  (this->VectorRight).Ptr = param_3;
  return this;
}

// ~FSumVector @ 143f4b270

void __thiscall FSumVector::~FSumVector(FSumVector *this)

{
  FFieldNode<UE::Math::TVector<double>_> *pFVar1;
  FFieldNode<float> *pFVar2;
  
  this->_padding_ = (longlong)&___7FSumVector__6B_;
  pFVar1 = (this->VectorLeft).Ptr;
  if (pFVar1 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar1 = (this->VectorRight).Ptr;
  if (pFVar1 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->Scalar).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c620

bool __thiscall FSumVector::operator==(FSumVector *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x10);
  iVar3 = (**(code **)(this->_padding_ + 0x10))();
  iVar4 = (*pcVar1)(param_1);
  if (((((iVar4 == iVar3) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
       (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
      ((*(float *)&param_1[1]._padding_ == this->Magnitude &&
       (bVar2 = FieldsEqual<FFieldNode<float>_>
                          (&this->Scalar,
                           (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                           &param_1[1].Name), bVar2)))) &&
     ((bVar2 = FieldsEqual<FFieldNode<UE::Math::TVector<double>_>_>
                         (&this->VectorRight,
                          (TUniquePtr<FFieldNode<UE::Math::TVector<double>_>,TDefaultDelete<FFieldNode<UE::Math::TVector<double>_>_>_>
                           *)(param_1 + 2)), bVar2 &&
      ((bVar2 = FieldsEqual<FFieldNode<UE::Math::TVector<double>_>_>
                          (&this->VectorLeft,
                           (TUniquePtr<FFieldNode<UE::Math::TVector<double>_>,TDefaultDelete<FFieldNode<UE::Math::TVector<double>_>_>_>
                            *)&param_1[2].Name), bVar2 &&
       (this->Operation == (EFieldOperationType)param_1[3]._padding_)))))) {
    return true;
  }
  return false;
}

// ComputeFieldBounds @ 143f5aca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSumVector::ComputeFieldBounds
          (FSumVector *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  EFieldOperationType EVar1;
  FFieldNode<float> *pFVar2;
  FFieldNode<UE::Math::TVector<double>_> *pFVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  undefined4 uVar9;
  
  pFVar2 = (this->Scalar).Ptr;
  local_a8 = __real_c7efffffe0000000;
  local_c0 = __real_c7efffffe0000000;
  local_30 = __real_c7efffffe0000000;
  local_78 = __real_47efffffe0000000;
  local_90 = __real_47efffffe0000000;
  local_18 = __real_47efffffe0000000;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_b0 = _UNK_150b2d318;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_6c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_4c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_e8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_e8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_e8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  local_e8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_88 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_80 = _UNK_150b28868;
  local_d0 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_c8 = _UNK_150b2d318;
  local_a0 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_98 = _UNK_150b28868;
  local_40 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_38 = _UNK_150b2d318;
  local_28 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_20 = _UNK_150b28868;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x48))(pFVar2,&local_40,&local_28,&local_e8);
  }
  pFVar3 = (this->VectorRight).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x48))(pFVar3,&local_b8,&local_88,&local_70);
  }
  pFVar3 = (this->VectorLeft).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x48))(pFVar3,&local_d0,&local_a0,&local_58);
  }
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  iVar4 = 0;
  *(undefined4 *)&param_3->field0_0x0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = uVar5;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = uVar10;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  if (((double)CONCAT44(uStack_6c,local_70) == dVar11) &&
     (dVar12 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_),
     (double)CONCAT44(uStack_64,uStack_68) == dVar12)) {
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    if (local_60 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) goto LAB_143f5ae00;
  }
  else {
LAB_143f5ae00:
    iVar4 = 1;
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44(uStack_6c,local_70) + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44(uStack_64,uStack_68) + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_60 + (param_3->field0_0x0)._s_0.Z;
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    dVar12 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  }
  if ((((double)CONCAT44(uStack_54,local_58) != dVar11) ||
      ((double)CONCAT44(uStack_4c,uStack_50) != dVar12)) ||
     (local_48 != (double)CONCAT44(uVar7,uVar5))) {
    iVar4 = iVar4 + 1;
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44(uStack_54,local_58) + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y =
         (double)CONCAT44(uStack_4c,uStack_50) + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_48 + (param_3->field0_0x0)._s_0.Z;
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
    dVar12 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  }
  if (((local_e8._s_0.X != dVar11) || (local_e8._s_0.Y != dVar12)) ||
     (local_e8._s_0.Z != (double)CONCAT44(uVar7,uVar5))) {
    iVar4 = iVar4 + 1;
    (param_3->field0_0x0)._s_0.X = local_e8._s_0.X + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_e8._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_e8._s_0.Z + (param_3->field0_0x0)._s_0.Z;
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar7 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
    ;
  }
  if (iVar4 == 0) {
    local_e8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_e8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_e8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_e8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_e8._s_0.Z = (double)CONCAT44(uVar7,uVar5);
  }
  else {
    dVar12 = __real_3ff0000000000000 / (double)iVar4;
    local_e8._s_0.Z = dVar12 * (param_3->field0_0x0)._s_0.Z;
    dVar11 = dVar12 * (param_3->field0_0x0)._s_0.Y;
    local_e8._8_4_ = SUB84(dVar11,0);
    local_e8._s_0.X = dVar12 * (param_3->field0_0x0)._s_0.X;
    local_e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  }
  (param_3->field0_0x0)._s_0.X = local_e8._s_0.X;
  (param_3->field0_0x0)._s_0.Y = local_e8._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = local_e8._s_0.Z;
  EVar1 = this->Operation;
  uVar10 = (undefined4)((ulonglong)dStack_c8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
  uVar7 = (undefined4)((ulonglong)dStack_98 >> 0x20);
  uVar9 = (undefined4)((ulonglong)dStack_80 >> 0x20);
  uVar5 = SUB84(dStack_98,0);
  if ((EVar1 == Field_Multiply) || (EVar1 == Field_Divide)) {
    if (local_d0 <= local_b8) {
      local_d0 = local_b8;
    }
    uVar6 = SUB84(dStack_c8,0);
    if (dStack_c8 <= dStack_b0) {
      uVar6 = SUB84(dStack_b0,0);
      uVar10 = uVar8;
    }
    if (local_c0 <= local_a8) {
      local_c0 = local_a8;
    }
    (param_1->field0_0x0)._s_0.X = local_d0;
    (param_1->field0_0x0)._s_0.Y = (double)CONCAT44(uVar10,uVar6);
    (param_1->field0_0x0)._s_0.Z = local_c0;
    if (local_78 <= local_90) {
      local_90 = local_78;
    }
    if (dStack_80 <= dStack_98) {
      uVar5 = SUB84(dStack_80,0);
      uVar7 = uVar9;
    }
    if (local_88 <= local_a0) {
      local_a0 = local_88;
    }
  }
  else {
    if (1 < EVar1 - Field_Add) goto LAB_143f5aff3;
    if (local_b8 <= local_d0) {
      local_d0 = local_b8;
    }
    uVar6 = SUB84(dStack_c8,0);
    if (dStack_b0 <= dStack_c8) {
      uVar6 = SUB84(dStack_b0,0);
      uVar10 = uVar8;
    }
    if (local_a8 <= local_c0) {
      local_c0 = local_a8;
    }
    (param_1->field0_0x0)._s_0.X = local_d0;
    (param_1->field0_0x0)._s_0.Y = (double)CONCAT44(uVar10,uVar6);
    (param_1->field0_0x0)._s_0.Z = local_c0;
    if (local_90 <= local_78) {
      local_90 = local_78;
    }
    if (dStack_98 <= dStack_80) {
      uVar5 = SUB84(dStack_80,0);
      uVar7 = uVar9;
    }
    if (local_a0 <= local_88) {
      local_a0 = local_88;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_a0;
  (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar7,uVar5);
  (param_2->field0_0x0)._s_0.Z = local_90;
LAB_143f5aff3:
  dVar11 = (param_1->field0_0x0)._s_0.X;
  if (dVar11 <= local_40) {
    dVar11 = local_40;
  }
  dVar12 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  uVar5 = SUB84(dVar12,0);
  uVar7 = (undefined4)((ulonglong)dVar12 >> 0x20);
  if (dVar12 <= dStack_38) {
    uVar5 = SUB84(dStack_38,0);
    uVar7 = (undefined4)((ulonglong)dStack_38 >> 0x20);
  }
  (param_1->field0_0x0)._s_0.X = dVar11;
  dVar11 = (param_1->field0_0x0)._s_0.Z;
  if (local_30 <= dVar11) {
    local_30 = dVar11;
  }
  (param_1->field0_0x0)._s_0.Y = (double)CONCAT44(uVar7,uVar5);
  uVar5 = SUB84(dStack_20,0);
  uVar7 = (undefined4)((ulonglong)dStack_20 >> 0x20);
  (param_1->field0_0x0)._s_0.Z = local_30;
  dVar11 = (param_2->field0_0x0)._s_0.X;
  if (local_28 <= dVar11) {
    dVar11 = local_28;
  }
  dVar12 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  if (dVar12 <= dStack_20) {
    uVar5 = SUB84(dVar12,0);
    uVar7 = (undefined4)((ulonglong)dVar12 >> 0x20);
  }
  (param_2->field0_0x0)._s_0.X = dVar11;
  dVar11 = (param_2->field0_0x0)._s_0.Z;
  if (local_18 <= dVar11) {
    dVar11 = local_18;
  }
  (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar7,uVar5);
  (param_2->field0_0x0)._s_0.Z = dVar11;
  return;
}

// EvalMaxMagnitude @ 143f5f5e0

float __thiscall FSumVector::EvalMaxMagnitude(FSumVector *this)

{
  EFieldOperationType EVar1;
  FFieldNode<float> *pFVar2;
  FFieldNode<UE::Math::TVector<double>_> *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pFVar2 = (this->Scalar).Ptr;
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    fVar5 = (float)(**(code **)(*(longlong *)pFVar2 + 0x40))();
  }
  pFVar3 = (this->VectorRight).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    fVar6 = (float)(**(code **)(*(longlong *)pFVar3 + 0x40))();
  }
  pFVar3 = (this->VectorLeft).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x40))();
  }
  EVar1 = this->Operation;
  if (EVar1 == Field_Multiply) {
    fVar4 = fVar6 * fVar5;
  }
  else {
    fVar4 = 0.0;
    if (EVar1 == Field_Divide) {
      if (__real_34000000 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar4 = fVar6 / fVar5;
      }
    }
    else if ((EVar1 - Field_Add < 2) && (fVar4 = fVar6, fVar6 <= fVar5)) {
      fVar4 = fVar5;
    }
  }
  return fVar5 * this->Magnitude * fVar4;
}

// Evaluate @ 143f64680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSumVector::Evaluate
          (FSumVector *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  EFieldOperationType EVar8;
  FFieldNode<UE::Math::TVector<double>_> *pFVar9;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  FFieldSystemMetaData **ppFVar21;
  bool bVar22;
  uint uVar23;
  FFieldNode<UE::Math::TVector<double>_> *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f8;
  int local_f0;
  int local_ec;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  longlong *local_d0;
  EMetaType local_c8 [2];
  longlong *local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_b8;
  int local_b0;
  int local_ac;
  EMetaType local_a8 [2];
  FFieldContext *local_a0;
  TPairInitializer<FFieldSystemMetaData::EMetaType_const_&,FFieldSystemMetaData_*_const_&> local_98;
  EMetaType *local_88;
  longlong **local_80;
  
  local_d0 = ::operator_new(0x10);
  local_a0 = param_1;
  if (local_d0 == (longlong *)0x0) {
    local_c0 = (longlong *)0x0;
    local_d0 = (longlong *)0x0;
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("InMetaData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldSystem.h"
                        ,0x17e,L"");
    if (bVar22) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  else {
    local_d0[1] = (longlong)param_2;
    *local_d0 = (longlong)&___7__FFieldSystemMetaDataResults_U__TVector_N_Math_UE____6B_;
    local_c0 = local_d0;
  }
  local_a8[0] = (**(code **)(*local_d0 + 8))();
  local_88 = local_a8;
  local_80 = &local_d0;
  TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FFieldSystemMetaData::EMetaType_const_&,FFieldSystemMetaData_*_const_&>_>
            (&local_a0->MetaData,&local_98,(bool *)&local_88);
  pFVar9 = (this->VectorRight).Ptr;
  local_98.Value = (FFieldSystemMetaData **)(this->Scalar).Ptr;
  iVar28 = param_2->ArrayNum;
  iVar6 = (param_1->SampleIndices).ArrayNum;
  pFVar24 = (this->VectorLeft).Ptr;
  fVar2 = this->Magnitude;
  local_d8 = iVar28;
  if (pFVar9 == (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    if (pFVar24 == (FFieldNode<UE::Math::TVector<double>_> *)0x0) goto LAB_143f6545d;
    lVar30 = *(longlong *)pFVar24;
  }
  else {
    if (pFVar24 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
      iVar7 = param_1->VectorResults->ArrayNum;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->VectorResults,iVar7 + iVar28 * 2,No);
      local_f8 = param_1->VectorResults;
      local_e0 = iVar28 + iVar7;
      local_f0 = iVar7;
      local_ec = iVar28;
      if ((local_f8->ArrayNum < local_e0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_e8 = param_1->VectorResults;
      local_dc = local_d8;
      if ((local_e8->ArrayNum < local_e0 + local_d8) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (**(code **)(*(longlong *)pFVar24 + 0x50))(pFVar24,param_1,&local_f8);
      (**(code **)(*(longlong *)pFVar9 + 0x50))(pFVar9,param_1);
      EVar8 = this->Operation;
      if (EVar8 == Field_Multiply) {
        uVar29 = 0;
        if (0 < iVar6) {
          do {
            uVar26 = 0;
            if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
              uVar26 = ~uVar29 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar10 = (param_1->SampleIndices).ElementArray;
            uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
            uVar26 = 0;
            if ((int)uVar25 < pTVar10->ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pTVar10->AllocatorInstance).Data;
            lVar30 = (longlong)(int)uVar25;
            uVar26 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar25 = 0;
            if ((int)uVar26 < local_dc) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_e8;
            uVar26 = uVar26 + local_e0;
            uVar25 = 0;
            if ((int)uVar26 < local_e8->ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar12 = (pTVar13->AllocatorInstance).Data;
            uVar25 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar27 = 0;
            if ((int)uVar25 < local_ec) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_f8;
            uVar25 = uVar25 + local_f0;
            uVar27 = 0;
            if ((int)uVar25 < local_f8->ArrayNum) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar1 = pFVar12 + (longlong)(int)uVar26 * 0x18 + 8;
            dVar16 = *(double *)pFVar1;
            dVar17 = *(double *)(pFVar1 + 8);
            uVar27 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            dVar4 = *(double *)(pFVar11 + (longlong)(int)uVar25 * 0x18);
            pFVar11 = pFVar11 + (longlong)(int)uVar25 * 0x18 + 8;
            dVar18 = *(double *)pFVar11;
            dVar19 = *(double *)(pFVar11 + 8);
            dVar5 = *(double *)(pFVar12 + (longlong)(int)uVar26 * 0x18);
            uVar26 = 0;
            if ((int)uVar27 < param_2->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar27 = uVar27 + param_2->ArrayOffset;
            pTVar13 = param_2->ElementArray;
            uVar26 = 0;
            if ((int)uVar27 < pTVar13->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar29 = uVar29 + 1;
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            *(double *)(pFVar11 + (longlong)(int)uVar27 * 0x18) = dVar4 * dVar5;
            pFVar11 = pFVar11 + (longlong)(int)uVar27 * 0x18 + 8;
            *(double *)pFVar11 = dVar18 * dVar16;
            *(double *)(pFVar11 + 8) = dVar19 * dVar17;
          } while ((int)uVar29 < iVar6);
        }
      }
      else if (EVar8 == Field_Divide) {
        uVar29 = 0;
        if (0 < iVar6) {
          do {
            uVar26 = 0;
            if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
              uVar26 = ~uVar29 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar10 = (param_1->SampleIndices).ElementArray;
            uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
            uVar26 = 0;
            if ((int)uVar25 < pTVar10->ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pTVar10->AllocatorInstance).Data;
            lVar30 = (longlong)(int)uVar25;
            uVar26 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar25 = 0;
            if ((int)uVar26 < local_ec) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_f8;
            uVar26 = uVar26 + local_f0;
            uVar25 = 0;
            if ((int)uVar26 < local_f8->ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar12 = (pTVar13->AllocatorInstance).Data;
            uVar25 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar27 = 0;
            if ((int)uVar25 < local_dc) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_e8;
            uVar25 = uVar25 + local_e0;
            uVar27 = 0;
            if ((int)uVar25 < local_e8->ArrayNum) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            dVar4 = *(double *)(pFVar12 + (longlong)(int)uVar26 * 0x18);
            uVar27 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            dVar5 = *(double *)(pFVar11 + (longlong)(int)uVar25 * 0x18);
            uVar23 = 0;
            if ((int)uVar27 < param_2->ArrayNum) {
              uVar23 = ~uVar27 >> 0x1f;
            }
            auVar31 = divpd(*(undefined1 (*) [16])(pFVar12 + (longlong)(int)uVar26 * 0x18 + 8),
                            *(undefined1 (*) [16])(pFVar11 + (longlong)(int)uVar25 * 0x18 + 8));
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar27 = uVar27 + param_2->ArrayOffset;
            pTVar13 = param_2->ElementArray;
            uVar26 = 0;
            if ((int)uVar27 < pTVar13->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar29 = uVar29 + 1;
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            *(double *)(pFVar11 + (longlong)(int)uVar27 * 0x18) = dVar4 / dVar5;
            *(undefined1 (*) [16])(pFVar11 + (longlong)(int)uVar27 * 0x18 + 8) = auVar31;
          } while ((int)uVar29 < iVar6);
        }
      }
      else if (EVar8 == Field_Add) {
        uVar29 = 0;
        if (0 < iVar6) {
          do {
            uVar26 = 0;
            if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
              uVar26 = ~uVar29 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar10 = (param_1->SampleIndices).ElementArray;
            uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
            uVar26 = 0;
            if ((int)uVar25 < pTVar10->ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pTVar10->AllocatorInstance).Data;
            lVar30 = (longlong)(int)uVar25;
            uVar26 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar25 = 0;
            if ((int)uVar26 < local_dc) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_e8;
            uVar26 = uVar26 + local_e0;
            uVar25 = 0;
            if ((int)uVar26 < local_e8->ArrayNum) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar12 = (pTVar13->AllocatorInstance).Data;
            uVar25 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            uVar27 = 0;
            if ((int)uVar25 < local_ec) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar13 = local_f8;
            uVar25 = uVar25 + local_f0;
            uVar27 = 0;
            if ((int)uVar25 < local_f8->ArrayNum) {
              uVar27 = ~uVar25 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar1 = pFVar12 + (longlong)(int)uVar26 * 0x18 + 8;
            dVar16 = *(double *)pFVar1;
            dVar17 = *(double *)(pFVar1 + 8);
            uVar27 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            dVar4 = *(double *)(pFVar11 + (longlong)(int)uVar25 * 0x18);
            pFVar11 = pFVar11 + (longlong)(int)uVar25 * 0x18 + 8;
            dVar18 = *(double *)pFVar11;
            dVar19 = *(double *)(pFVar11 + 8);
            dVar5 = *(double *)(pFVar12 + (longlong)(int)uVar26 * 0x18);
            uVar26 = 0;
            if ((int)uVar27 < param_2->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar27 = uVar27 + param_2->ArrayOffset;
            pTVar13 = param_2->ElementArray;
            uVar26 = 0;
            if ((int)uVar27 < pTVar13->ArrayNum) {
              uVar26 = ~uVar27 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            uVar29 = uVar29 + 1;
            pFVar11 = (pTVar13->AllocatorInstance).Data;
            *(double *)(pFVar11 + (longlong)(int)uVar27 * 0x18) = dVar4 + dVar5;
            pFVar11 = pFVar11 + (longlong)(int)uVar27 * 0x18 + 8;
            *(double *)pFVar11 = dVar18 + dVar16;
            *(double *)(pFVar11 + 8) = dVar19 + dVar17;
          } while ((int)uVar29 < iVar6);
        }
      }
      else if ((EVar8 == Field_Substract) && (uVar29 = 0, 0 < iVar6)) {
        do {
          uVar26 = 0;
          if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
            uVar26 = ~uVar29 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar10 = (param_1->SampleIndices).ElementArray;
          uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
          uVar26 = 0;
          if ((int)uVar25 < pTVar10->ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar11 = (pTVar10->AllocatorInstance).Data;
          lVar30 = (longlong)(int)uVar25;
          uVar26 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
          uVar25 = 0;
          if ((int)uVar26 < local_ec) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar13 = local_f8;
          uVar26 = uVar26 + local_f0;
          uVar25 = 0;
          if ((int)uVar26 < local_f8->ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          uVar25 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
          uVar27 = 0;
          if ((int)uVar25 < local_dc) {
            uVar27 = ~uVar25 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pTVar13 = local_e8;
          uVar25 = uVar25 + local_e0;
          uVar27 = 0;
          if ((int)uVar25 < local_e8->ArrayNum) {
            uVar27 = ~uVar25 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          dVar4 = *(double *)(pFVar12 + (longlong)(int)uVar26 * 0x18);
          pFVar12 = pFVar12 + (longlong)(int)uVar26 * 0x18 + 8;
          dVar16 = *(double *)pFVar12;
          dVar17 = *(double *)(pFVar12 + 8);
          uVar26 = *(uint *)(pFVar11 + lVar30 * 8 + 4);
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          pFVar11 = pFVar12 + (longlong)(int)uVar25 * 0x18 + 8;
          dVar18 = *(double *)pFVar11;
          dVar19 = *(double *)(pFVar11 + 8);
          dVar5 = *(double *)(pFVar12 + (longlong)(int)uVar25 * 0x18);
          uVar25 = 0;
          if ((int)uVar26 < param_2->ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar26 = uVar26 + param_2->ArrayOffset;
          pTVar13 = param_2->ElementArray;
          uVar25 = 0;
          if ((int)uVar26 < pTVar13->ArrayNum) {
            uVar25 = ~uVar26 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar29 = uVar29 + 1;
          pFVar11 = (pTVar13->AllocatorInstance).Data;
          *(double *)(pFVar11 + (longlong)(int)uVar26 * 0x18) = dVar4 - dVar5;
          pFVar11 = pFVar11 + (longlong)(int)uVar26 * 0x18 + 8;
          *(double *)pFVar11 = dVar16 - dVar18;
          *(double *)(pFVar11 + 8) = dVar17 - dVar19;
        } while ((int)uVar29 < iVar6);
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->VectorResults,iVar7,No);
      iVar28 = local_d8;
      goto LAB_143f6545d;
    }
    lVar30 = *(longlong *)pFVar9;
    pFVar24 = pFVar9;
  }
  (**(code **)(lVar30 + 0x50))(pFVar24,param_1);
LAB_143f6545d:
  ppFVar21 = local_98.Value;
  if ((FFieldNode<float> *)local_98.Value != (FFieldNode<float> *)0x0) {
    iVar7 = param_1->ScalarResults->ArrayNum;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,iVar28 + iVar7,No);
    local_b8 = param_1->ScalarResults;
    local_b0 = iVar7;
    local_ac = iVar28;
    if ((local_b8->ArrayNum < iVar28 + iVar7) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar22)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    (**(code **)((longlong)*ppFVar21 + 0x50))(ppFVar21,param_1);
    uVar29 = 0;
    if (0 < iVar6) {
      do {
        uVar26 = 0;
        if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
          uVar26 = ~uVar29 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pTVar10 = (param_1->SampleIndices).ElementArray;
        uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
        uVar26 = 0;
        if ((int)uVar25 < pTVar10->ArrayNum) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        uVar26 = *(uint *)(pFVar11 + (longlong)(int)uVar25 * 8 + 4);
        uVar27 = 0;
        if ((int)uVar26 < local_ac) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pTVar20 = local_b8;
        uVar26 = uVar26 + local_b0;
        uVar27 = 0;
        if ((int)uVar26 < local_b8->ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar25 = *(uint *)(pFVar11 + (longlong)(int)uVar25 * 8 + 4);
        fVar3 = *(float *)((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar26 * 4);
        uVar26 = 0;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar25 = uVar25 + param_2->ArrayOffset;
        pTVar13 = param_2->ElementArray;
        uVar26 = 0;
        if ((int)uVar25 < pTVar13->ArrayNum) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar30 = (longlong)(int)uVar25;
        uVar29 = uVar29 + 1;
        pFVar11 = (pTVar13->AllocatorInstance).Data;
        *(double *)(pFVar11 + lVar30 * 0x18) = (double)fVar3 * *(double *)(pFVar11 + lVar30 * 0x18);
        dVar4 = (double)fVar3 * *(double *)(pFVar11 + lVar30 * 0x18 + 8 + 8);
        auVar31._8_4_ = SUB84(dVar4,0);
        auVar31._0_8_ = (double)fVar3 * *(double *)(pFVar11 + lVar30 * 0x18 + 8);
        auVar31._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(pFVar11 + lVar30 * 0x18 + 8) = auVar31;
      } while ((int)uVar29 < iVar6);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,iVar7,No);
  }
  if ((fVar2 != __real_3f800000) && (uVar29 = 0, 0 < iVar6)) {
    do {
      uVar26 = 0;
      if ((int)uVar29 < (param_1->SampleIndices).ArrayNum) {
        uVar26 = ~uVar29 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pTVar10 = (param_1->SampleIndices).ElementArray;
      uVar25 = (param_1->SampleIndices).ArrayOffset + uVar29;
      uVar26 = 0;
      if ((int)uVar25 < pTVar10->ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar26 = *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar25 * 8 + 4);
      uVar25 = 0;
      if ((int)uVar26 < param_2->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar26 = uVar26 + param_2->ArrayOffset;
      pTVar13 = param_2->ElementArray;
      uVar25 = 0;
      if ((int)uVar26 < pTVar13->ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      lVar30 = (longlong)(int)uVar26;
      uVar29 = uVar29 + 1;
      pFVar11 = (pTVar13->AllocatorInstance).Data;
      *(double *)(pFVar11 + lVar30 * 0x18) = (double)fVar2 * *(double *)(pFVar11 + lVar30 * 0x18);
      dVar4 = (double)fVar2 * *(double *)(pFVar11 + lVar30 * 0x18 + 8 + 8);
      auVar15._8_4_ = SUB84(dVar4,0);
      auVar15._0_8_ = (double)fVar2 * *(double *)(pFVar11 + lVar30 * 0x18 + 8);
      auVar15._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(pFVar11 + lVar30 * 0x18 + 8) = auVar15;
    } while ((int)uVar29 < iVar6);
  }
  local_c8[0] = local_a8[0];
  if (*(int *)&(local_a0->MetaData).field_0x8 != *(int *)&(local_a0->MetaData).field_0x34) {
    TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_FFieldSystemMetaData::EMetaType>(&local_a0->MetaData,local_a8[0],local_c8);
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)*local_c0)(local_c0,1);
  }
  return;
}

// FillSetupCount @ 143f67400

void __thiscall FSumVector::FillSetupCount(FSumVector *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  
  pFVar1 = (this->Scalar).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
  }
  pFVar2 = (this->VectorRight).Ptr;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2,param_1,param_2);
  }
  pFVar2 = (this->VectorLeft).Ptr;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2,param_1,param_2);
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 7;
  return;
}

// FillSetupDatas @ 143f6b0a0

void __thiscall
FSumVector::FillSetupDatas
          (FSumVector *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  FFieldNode<float> *pFVar2;
  FFieldNode<UE::Math::TVector<double>_> *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [5];
  
  pFVar2 = (this->Scalar).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x38))();
  }
  pFVar3 = (this->VectorRight).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x38))(pFVar3,param_1,param_2,param_3);
  }
  pFVar3 = (this->VectorLeft).Ptr;
  if (pFVar3 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x38))(pFVar3,param_1,param_2,param_3);
  }
  FFieldNode<UE::Math::TVector<double>_>::FillSetupDatas
            ((FFieldNode<UE::Math::TVector<double>_> *)this,param_1,param_2,param_3);
  pFVar4 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->Magnitude;
  if ((pFVar4 <= pfVar1) && (pfVar1 < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *pfVar1;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = (float)((this->Scalar).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar4 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_24 = (float)((this->VectorRight).Ptr != (FFieldNode<UE::Math::TVector<double>_> *)0x0);
  if ((pFVar4 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_24;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_20 = (float)((this->VectorLeft).Ptr != (FFieldNode<UE::Math::TVector<double>_> *)0x0);
  if ((pFVar4 <= (FScriptContainerElement *)&local_20) &&
     ((FScriptContainerElement *)&local_20 < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_20;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_1c[0] = (float)(int)this->Operation;
  if ((pFVar4 <= (FScriptContainerElement *)local_1c) &&
     ((FScriptContainerElement *)local_1c < pFVar4 + (longlong)param_2->ArrayMax * 4)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_1c[0];
  return;
}

// NewCopy @ 143f70ab0

FFieldNodeBase * __thiscall FSumVector::NewCopy(FSumVector *this)

{
  EFieldOperationType EVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  FFieldNode<float> *pFVar3;
  FSumVector *pFVar4;
  FFieldNode<UE::Math::TVector<double>_> *pFVar5;
  FFieldNode<UE::Math::TVector<double>_> *pFVar6;
  FFieldNode<float> *pFVar7;
  
  pFVar4 = ::operator_new(0x38);
  pFVar7 = (FFieldNode<float> *)0x0;
  if (pFVar4 == (FSumVector *)0x0) {
    return (FFieldNodeBase *)0x0;
  }
  pFVar2 = (this->VectorLeft).Ptr;
  EVar1 = this->Operation;
  pFVar5 = (FFieldNode<UE::Math::TVector<double>_> *)pFVar7;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    pFVar5 = (FFieldNode<UE::Math::TVector<double>_> *)(**(code **)(*(longlong *)pFVar2 + 0x18))();
  }
  pFVar2 = (this->VectorRight).Ptr;
  pFVar6 = (FFieldNode<UE::Math::TVector<double>_> *)pFVar7;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    pFVar6 = (FFieldNode<UE::Math::TVector<double>_> *)(**(code **)(*(longlong *)pFVar2 + 0x18))();
  }
  pFVar3 = (this->Scalar).Ptr;
  if (pFVar3 != (FFieldNode<float> *)0x0) {
    pFVar7 = (FFieldNode<float> *)(**(code **)(*(longlong *)pFVar3 + 0x18))();
  }
  pFVar4 = FSumVector(pFVar4,this->Magnitude,pFVar7,pFVar6,pFVar5,EVar1);
  return (FFieldNodeBase *)pFVar4;
}

// SerializationType @ 143f73af0

ESerializationType __thiscall FSumVector::SerializationType(FSumVector *this)

{
  return FieldNode_FSumVector;
}

// Serialize @ 143f748e0

void __thiscall FSumVector::Serialize(FSumVector *this,FArchive *param_1)

{
  float *pfVar1;
  byte bVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  pfVar1 = &this->Magnitude;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  SerializeInternal<float>(param_1,&this->Scalar);
  SerializeInternal<UE::Math::TVector<double>_>(param_1,&this->VectorRight);
  SerializeInternal<UE::Math::TVector<double>_>(param_1,&this->VectorLeft);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Operation;
  if ((byte *)*plVar4 + 1 <= (byte *)plVar4[1]) {
    bVar2 = *(byte *)*plVar4;
    *plVar4 = *plVar4 + 1;
    this->Operation = (uint)bVar2;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->Operation = (uint)(byte)local_res8[0];
  return;
}

