// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 36

// FCullingField<int> @ 143f405a0

FCullingField<int> * __thiscall
FCullingField<int>::FCullingField<int>
          (FCullingField<int> *this,FFieldNode<float> *param_1,FFieldNode<int> *param_2,
          EFieldCullingOperationType param_3)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Operation = param_3;
  this->_padding_ = (longlong)&___7__FCullingField_H__6B_;
  (this->Culling).Ptr = param_1;
  (this->Input).Ptr = param_2;
  return this;
}

// FCullingField<float> @ 143f40620

FCullingField<float> * __thiscall
FCullingField<float>::FCullingField<float>
          (FCullingField<float> *this,FFieldNode<float> *param_1,FFieldNode<float> *param_2,
          EFieldCullingOperationType param_3)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Operation = param_3;
  this->_padding_ = (longlong)&___7__FCullingField_M__6B_;
  (this->Culling).Ptr = param_1;
  (this->Input).Ptr = param_2;
  return this;
}

// FCullingField<UE::Math::TVector<double>_> @ 143f406a0

FCullingField<UE::Math::TVector<double>_> * __thiscall
FCullingField<UE::Math::TVector<double>_>::FCullingField<UE::Math::TVector<double>_>
          (FCullingField<UE::Math::TVector<double>_> *this,FFieldNode<float> *param_1,
          FFieldNode<UE::Math::TVector<double>_> *param_2,EFieldCullingOperationType param_3)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Operation = param_3;
  this->_padding_ = (longlong)&___7__FCullingField_U__TVector_N_Math_UE____6B_;
  (this->Culling).Ptr = param_1;
  (this->Input).Ptr = param_2;
  return this;
}

// ~FCullingField<int> @ 143f48440

void __thiscall FCullingField<int>::~FCullingField<int>(FCullingField<int> *this)

{
  FFieldNode<int> *pFVar1;
  FFieldNode<float> *pFVar2;
  
  this->_padding_ = (longlong)&___7__FCullingField_H__6B_;
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->Culling).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// ~FCullingField<float> @ 143f48490

void __thiscall FCullingField<float>::~FCullingField<float>(FCullingField<float> *this)

{
  FFieldNode<float> *pFVar1;
  
  this->_padding_ = (longlong)&___7__FCullingField_M__6B_;
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// ~FCullingField<UE::Math::TVector<double>_> @ 143f484e0

void __thiscall
FCullingField<UE::Math::TVector<double>_>::~FCullingField<UE::Math::TVector<double>_>
          (FCullingField<UE::Math::TVector<double>_> *this)

{
  FFieldNode<UE::Math::TVector<double>_> *pFVar1;
  FFieldNode<float> *pFVar2;
  
  this->_padding_ = (longlong)&___7__FCullingField_U__TVector_N_Math_UE____6B_;
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->Culling).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4b980

bool __thiscall FCullingField<int>::operator==(FCullingField<int> *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x10);
  iVar3 = (**(code **)(this->_padding_ + 0x10))();
  iVar4 = (*pcVar1)(param_1);
  if ((((iVar4 == iVar3) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
      (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
     (((bVar2 = FieldsEqual<FFieldNode<float>_>
                          (&this->Culling,
                           (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                           (param_1 + 1)), bVar2 &&
       (bVar2 = FieldsEqual<FFieldNode<int>_>
                          (&this->Input,
                           (TUniquePtr<FFieldNode<int>,TDefaultDelete<FFieldNode<int>_>_> *)
                           &param_1[1].Name), bVar2)) &&
      (this->Operation == (EFieldCullingOperationType)param_1[2]._padding_)))) {
    return true;
  }
  return false;
}

// operator== @ 143f4ba20

bool __thiscall FCullingField<float>::operator==(FCullingField<float> *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x10);
  iVar3 = (**(code **)(this->_padding_ + 0x10))();
  iVar4 = (*pcVar1)(param_1);
  if ((((iVar4 == iVar3) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
      (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
     (((bVar2 = FieldsEqual<FFieldNode<float>_>
                          (&this->Culling,
                           (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                           (param_1 + 1)), bVar2 &&
       (bVar2 = FieldsEqual<FFieldNode<float>_>
                          (&this->Input,
                           (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                           &param_1[1].Name), bVar2)) &&
      (this->Operation == (EFieldCullingOperationType)param_1[2]._padding_)))) {
    return true;
  }
  return false;
}

// operator== @ 143f4bac0

bool __thiscall
FCullingField<UE::Math::TVector<double>_>::operator==
          (FCullingField<UE::Math::TVector<double>_> *this,FFieldNodeBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x10);
  iVar3 = (**(code **)(this->_padding_ + 0x10))();
  iVar4 = (*pcVar1)(param_1);
  if ((((iVar4 == iVar3) && ((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value)) &&
      (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) &&
     (((bVar2 = FieldsEqual<FFieldNode<float>_>
                          (&this->Culling,
                           (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                           (param_1 + 1)), bVar2 &&
       (bVar2 = FieldsEqual<FFieldNode<UE::Math::TVector<double>_>_>
                          (&this->Input,
                           (TUniquePtr<FFieldNode<UE::Math::TVector<double>_>,TDefaultDelete<FFieldNode<UE::Math::TVector<double>_>_>_>
                            *)&param_1[1].Name), bVar2)) &&
      (this->Operation == (EFieldCullingOperationType)param_1[2]._padding_)))) {
    return true;
  }
  return false;
}

// ComputeFieldBounds @ 143f59c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCullingField<int>::ComputeFieldBounds
          (FCullingField<int> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<int> *pFVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  uVar7 = SUB84(__real_c7efffffe0000000,0);
  uVar8 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
  uVar9 = SUB84(__real_47efffffe0000000,0);
  uVar10 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  local_a8 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_a0 = _UNK_150b2d318;
  pFVar1 = (this->Culling).Ptr;
  local_98 = __real_c7efffffe0000000;
  local_68 = __real_47efffffe0000000;
  local_b0 = __real_c7efffffe0000000;
  local_80 = __real_47efffffe0000000;
  local_c0 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_b8 = _UNK_150b2d318;
  local_78 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_70 = _UNK_150b28868;
  local_90 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_88 = _UNK_150b28868;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_a8,&local_78,&local_60);
    uVar7 = SUB84(local_98,0);
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar9 = SUB84(local_68,0);
    uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x48))(pFVar2,&local_c0,&local_90,&local_d8);
    uVar7 = SUB84(local_98,0);
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar9 = SUB84(local_68,0);
    uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar4 = 0;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar3;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar12 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (local_60 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    if ((dStack_58 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) &&
       (local_50 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) goto LAB_143f59db4;
  }
  iVar4 = 1;
  (param_3->field0_0x0)._s_0.X = local_60 + (param_3->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dStack_58 + (param_3->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = local_50 + (param_3->field0_0x0)._s_0.Z;
  uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar12 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
LAB_143f59db4:
  if (((local_d8 != (double)CONCAT44(uVar12,uVar11)) || (dStack_d0 != (double)CONCAT44(uVar6,uVar5))
      ) || (local_c8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    iVar4 = iVar4 + 1;
    (param_3->field0_0x0)._s_0.X = local_d8 + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dStack_d0 + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_c8 + (param_3->field0_0x0)._s_0.Z;
  }
  if (iVar4 == 0) {
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dStack_d0 = __real_3ff0000000000000 / (double)iVar4;
    local_c8 = dStack_d0 * (param_3->field0_0x0)._s_0.Z;
    local_d8 = dStack_d0 * (param_3->field0_0x0)._s_0.X;
    dStack_d0 = dStack_d0 * (param_3->field0_0x0)._s_0.Y;
  }
  (param_3->field0_0x0)._s_0.X = local_d8;
  (param_3->field0_0x0)._s_0.Y = dStack_d0;
  (param_3->field0_0x0)._s_0.Z = local_c8;
  if (this->Operation == Field_Culling_Inside) {
    if ((double)CONCAT44(uVar8,uVar7) <= local_b0) {
      local_b0 = (double)CONCAT44(uVar8,uVar7);
    }
    if (local_80 <= (double)CONCAT44(uVar10,uVar9)) {
      local_80 = (double)CONCAT44(uVar10,uVar9);
    }
    if (local_a8 <= local_c0) {
      local_c0 = local_a8;
    }
    if (dStack_a0 <= dStack_b8) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_88 <= dStack_70) {
      dStack_88 = dStack_70;
    }
    if (local_90 <= local_78) {
      local_90 = local_78;
    }
  }
  else {
    if (this->Operation != Field_Culling_Outside) {
      return;
    }
    if (local_b0 <= (double)CONCAT44(uVar8,uVar7)) {
      local_b0 = (double)CONCAT44(uVar8,uVar7);
    }
    if ((double)CONCAT44(uVar10,uVar9) <= local_80) {
      local_80 = (double)CONCAT44(uVar10,uVar9);
    }
    if (local_c0 <= local_a8) {
      local_c0 = local_a8;
    }
    if (dStack_b8 <= dStack_a0) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_70 <= dStack_88) {
      dStack_88 = dStack_70;
    }
    if (local_78 <= local_90) {
      local_90 = local_78;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_90;
  (param_2->field0_0x0)._s_0.Y = dStack_88;
  (param_2->field0_0x0)._s_0.Z = local_80;
  return;
}

// ComputeFieldBounds @ 143f59f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCullingField<float>::ComputeFieldBounds
          (FCullingField<float> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  FFieldNode<float> *pFVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  uVar6 = SUB84(__real_c7efffffe0000000,0);
  uVar7 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
  uVar8 = SUB84(__real_47efffffe0000000,0);
  uVar9 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  local_a8 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_a0 = _UNK_150b2d318;
  pFVar1 = (this->Culling).Ptr;
  local_98 = __real_c7efffffe0000000;
  local_68 = __real_47efffffe0000000;
  local_b0 = __real_c7efffffe0000000;
  local_80 = __real_47efffffe0000000;
  local_c0 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_b8 = _UNK_150b2d318;
  local_78 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_70 = _UNK_150b28868;
  local_90 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_88 = _UNK_150b28868;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_a8,&local_78,&local_60);
    uVar6 = SUB84(local_98,0);
    uVar7 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar8 = SUB84(local_68,0);
    uVar9 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_c0,&local_90,&local_d8);
    uVar6 = SUB84(local_98,0);
    uVar7 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar8 = SUB84(local_68,0);
    uVar9 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar3 = 0;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar2;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar11 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (local_60 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
    uVar4 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar5 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    if ((dStack_58 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) &&
       (local_50 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) goto LAB_143f5a0e4;
  }
  iVar3 = 1;
  (param_3->field0_0x0)._s_0.X = local_60 + (param_3->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dStack_58 + (param_3->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = local_50 + (param_3->field0_0x0)._s_0.Z;
  uVar4 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar5 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar11 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
LAB_143f5a0e4:
  if (((local_d8 != (double)CONCAT44(uVar11,uVar10)) || (dStack_d0 != (double)CONCAT44(uVar5,uVar4))
      ) || (local_c8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    iVar3 = iVar3 + 1;
    (param_3->field0_0x0)._s_0.X = local_d8 + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dStack_d0 + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_c8 + (param_3->field0_0x0)._s_0.Z;
  }
  if (iVar3 == 0) {
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dStack_d0 = __real_3ff0000000000000 / (double)iVar3;
    local_c8 = dStack_d0 * (param_3->field0_0x0)._s_0.Z;
    local_d8 = dStack_d0 * (param_3->field0_0x0)._s_0.X;
    dStack_d0 = dStack_d0 * (param_3->field0_0x0)._s_0.Y;
  }
  (param_3->field0_0x0)._s_0.X = local_d8;
  (param_3->field0_0x0)._s_0.Y = dStack_d0;
  (param_3->field0_0x0)._s_0.Z = local_c8;
  if (this->Operation == Field_Culling_Inside) {
    if ((double)CONCAT44(uVar7,uVar6) <= local_b0) {
      local_b0 = (double)CONCAT44(uVar7,uVar6);
    }
    if (local_80 <= (double)CONCAT44(uVar9,uVar8)) {
      local_80 = (double)CONCAT44(uVar9,uVar8);
    }
    if (local_a8 <= local_c0) {
      local_c0 = local_a8;
    }
    if (dStack_a0 <= dStack_b8) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_88 <= dStack_70) {
      dStack_88 = dStack_70;
    }
    if (local_90 <= local_78) {
      local_90 = local_78;
    }
  }
  else {
    if (this->Operation != Field_Culling_Outside) {
      return;
    }
    if (local_b0 <= (double)CONCAT44(uVar7,uVar6)) {
      local_b0 = (double)CONCAT44(uVar7,uVar6);
    }
    if ((double)CONCAT44(uVar9,uVar8) <= local_80) {
      local_80 = (double)CONCAT44(uVar9,uVar8);
    }
    if (local_c0 <= local_a8) {
      local_c0 = local_a8;
    }
    if (dStack_b8 <= dStack_a0) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_70 <= dStack_88) {
      dStack_88 = dStack_70;
    }
    if (local_78 <= local_90) {
      local_90 = local_78;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_90;
  (param_2->field0_0x0)._s_0.Y = dStack_88;
  (param_2->field0_0x0)._s_0.Z = local_80;
  return;
}

// ComputeFieldBounds @ 143f5a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCullingField<UE::Math::TVector<double>_>::ComputeFieldBounds
          (FCullingField<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  
  uVar7 = SUB84(__real_c7efffffe0000000,0);
  uVar8 = (undefined4)((ulonglong)__real_c7efffffe0000000 >> 0x20);
  uVar9 = SUB84(__real_47efffffe0000000,0);
  uVar10 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  local_a8 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_a0 = _UNK_150b2d318;
  pFVar1 = (this->Culling).Ptr;
  local_98 = __real_c7efffffe0000000;
  local_68 = __real_47efffffe0000000;
  local_b0 = __real_c7efffffe0000000;
  local_80 = __real_47efffffe0000000;
  local_c0 = ___xmm_c7efffffe0000000c7efffffe0000000;
  dStack_b8 = _UNK_150b2d318;
  local_78 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_70 = _UNK_150b28868;
  local_90 = ___xmm_47efffffe000000047efffffe0000000;
  dStack_88 = _UNK_150b28868;
  local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1,&local_a8,&local_78,&local_60);
    uVar7 = SUB84(local_98,0);
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar9 = SUB84(local_68,0);
    uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x48))(pFVar2,&local_c0,&local_90,&local_d8);
    uVar7 = SUB84(local_98,0);
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar9 = SUB84(local_68,0);
    uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar4 = 0;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar3;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar12 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  if (local_60 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
    uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    if ((dStack_58 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) &&
       (local_50 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) goto LAB_143f5a414;
  }
  iVar4 = 1;
  (param_3->field0_0x0)._s_0.X = local_60 + (param_3->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dStack_58 + (param_3->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = local_50 + (param_3->field0_0x0)._s_0.Z;
  uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar12 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
LAB_143f5a414:
  if (((local_d8 != (double)CONCAT44(uVar12,uVar11)) || (dStack_d0 != (double)CONCAT44(uVar6,uVar5))
      ) || (local_c8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    iVar4 = iVar4 + 1;
    (param_3->field0_0x0)._s_0.X = local_d8 + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dStack_d0 + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_c8 + (param_3->field0_0x0)._s_0.Z;
  }
  if (iVar4 == 0) {
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dStack_d0 = __real_3ff0000000000000 / (double)iVar4;
    local_c8 = dStack_d0 * (param_3->field0_0x0)._s_0.Z;
    local_d8 = dStack_d0 * (param_3->field0_0x0)._s_0.X;
    dStack_d0 = dStack_d0 * (param_3->field0_0x0)._s_0.Y;
  }
  (param_3->field0_0x0)._s_0.X = local_d8;
  (param_3->field0_0x0)._s_0.Y = dStack_d0;
  (param_3->field0_0x0)._s_0.Z = local_c8;
  if (this->Operation == Field_Culling_Inside) {
    if ((double)CONCAT44(uVar8,uVar7) <= local_b0) {
      local_b0 = (double)CONCAT44(uVar8,uVar7);
    }
    if (local_80 <= (double)CONCAT44(uVar10,uVar9)) {
      local_80 = (double)CONCAT44(uVar10,uVar9);
    }
    if (local_a8 <= local_c0) {
      local_c0 = local_a8;
    }
    if (dStack_a0 <= dStack_b8) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_88 <= dStack_70) {
      dStack_88 = dStack_70;
    }
    if (local_90 <= local_78) {
      local_90 = local_78;
    }
  }
  else {
    if (this->Operation != Field_Culling_Outside) {
      return;
    }
    if (local_b0 <= (double)CONCAT44(uVar8,uVar7)) {
      local_b0 = (double)CONCAT44(uVar8,uVar7);
    }
    if ((double)CONCAT44(uVar10,uVar9) <= local_80) {
      local_80 = (double)CONCAT44(uVar10,uVar9);
    }
    if (local_c0 <= local_a8) {
      local_c0 = local_a8;
    }
    if (dStack_b8 <= dStack_a0) {
      dStack_b8 = dStack_a0;
    }
    (param_1->field0_0x0)._s_0.X = local_c0;
    (param_1->field0_0x0)._s_0.Y = dStack_b8;
    (param_1->field0_0x0)._s_0.Z = local_b0;
    if (dStack_70 <= dStack_88) {
      dStack_88 = dStack_70;
    }
    if (local_78 <= local_90) {
      local_90 = local_78;
    }
  }
  (param_2->field0_0x0)._s_0.X = local_90;
  (param_2->field0_0x0)._s_0.Y = dStack_88;
  (param_2->field0_0x0)._s_0.Z = local_80;
  return;
}

// EvalMaxMagnitude @ 143f5f450

float __thiscall FCullingField<int>::EvalMaxMagnitude(FCullingField<int> *this)

{
  FFieldNode<int> *pFVar1;
  float fVar2;
  
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f5f45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x40))();
    return fVar2;
  }
  return 0.0;
}

// EvalMaxMagnitude @ 143f5f470

float __thiscall FCullingField<float>::EvalMaxMagnitude(FCullingField<float> *this)

{
  FFieldNode<float> *pFVar1;
  float fVar2;
  
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f5f47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x40))();
    return fVar2;
  }
  return 0.0;
}

// EvalMaxMagnitude @ 143f5f490

float __thiscall
FCullingField<UE::Math::TVector<double>_>::EvalMaxMagnitude
          (FCullingField<UE::Math::TVector<double>_> *this)

{
  FFieldNode<UE::Math::TVector<double>_> *pFVar1;
  float fVar2;
  
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f5f49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x40))();
    return fVar2;
  }
  return 0.0;
}

// Evaluate @ 143f5fdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCullingField<int>::Evaluate
          (FCullingField<int> *this,FFieldContext *param_1,TFieldArrayView<int> *param_2)

{
  int iVar1;
  int iVar2;
  FFieldNode<float> *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  FFieldSystemMetaData *pFVar7;
  FScriptContainerElement *pFVar8;
  FFieldSystemMetaData FVar9;
  code *pcVar10;
  FFieldNode<int> *pFVar11;
  bool bVar12;
  int iVar13;
  FFieldSystemMetaData **ppFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [4];
  uint local_144;
  TArray<float,TSizedDefaultAllocator<32>_> *local_140;
  uint local_138;
  int local_134;
  int local_130;
  uint local_12c;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *local_128;
  FCullingField<int> *local_120;
  FFieldNode<int> *local_118;
  TFieldArrayView<int> *local_110;
  TFieldArrayView<FFieldContextIndex> local_108;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar3 = (this->Culling).Ptr;
  iVar1 = (param_1->SampleIndices).ArrayNum;
  iVar2 = param_2->ArrayNum;
  local_118 = (this->Input).Ptr;
  local_130 = iVar1;
  local_120 = this;
  local_110 = param_2;
  if (pFVar3 == (FFieldNode<float> *)0x0) {
    if (local_118 != (FFieldNode<int> *)0x0) {
      (**(code **)(*(longlong *)local_118 + 0x50))();
    }
  }
  else {
    iVar13 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    if (iVar13 != 3) {
      local_148[0] = 0;
      bVar12 = `FCullingField<int>::Evaluate'::__l6::<lambda_1>::operator()(local_148);
      if (!bVar12) {
        return;
      }
    }
    uVar20 = param_1->ScalarResults->ArrayNum;
    local_12c = uVar20;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,uVar20 + iVar2,No);
    local_140 = param_1->ScalarResults;
    local_138 = uVar20;
    local_134 = iVar2;
    if ((local_140->ArrayNum < (int)(uVar20 + iVar2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar4 = param_1->ScalarResults;
    uVar17 = 0;
    if ((int)uVar20 < pTVar4->ArrayNum) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    memset((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar20 * 4,0,(longlong)iVar2 << 2);
    (**(code **)(*(longlong *)pFVar3 + 0x50))(pFVar3,param_1);
    uVar20 = param_1->IndexResults->ArrayNum;
    local_144 = uVar20;
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
              (param_1->IndexResults,uVar20 + iVar2,No);
    local_128 = param_1->IndexResults;
    if ((local_128->ArrayNum < (int)(uVar20 + iVar2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = uVar20;
    if (0 < iVar1) {
      do {
        uVar17 = 0;
        if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar5 = (param_1->SampleIndices).ElementArray;
        uVar16 = (param_1->SampleIndices).ArrayOffset + uVar18;
        uVar17 = 0;
        if ((int)uVar16 < pTVar5->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar17 = *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar16 * 8 + 4);
        if (local_120->Operation == Field_Culling_Outside) {
          uVar16 = 0;
          if ((int)uVar17 < local_134) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar17 = uVar17 + local_138;
          uVar16 = 0;
          if ((int)uVar17 < local_140->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) != 0.0) {
LAB_143f60197:
            uVar17 = 0;
            if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = (param_1->SampleIndices).ElementArray;
            uVar16 = (param_1->SampleIndices).ArrayOffset + uVar18;
            uVar17 = 0;
            if ((int)uVar16 < pTVar5->ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar6 = *(undefined8 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
            uVar17 = 0;
            if ((int)uVar19 < iVar2) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = local_128;
            uVar17 = 0;
            if ((int)uVar20 < local_128->ArrayNum) {
              uVar17 = ~uVar20 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = uVar19 + 1;
            lVar15 = (longlong)(int)uVar20;
            uVar20 = uVar20 + 1;
            *(undefined8 *)((pTVar5->AllocatorInstance).Data + lVar15 * 8) = uVar6;
          }
        }
        else {
          uVar16 = 0;
          if ((int)uVar17 < local_134) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar17 = uVar17 + local_138;
          uVar16 = 0;
          if ((int)uVar17 < local_140->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) == 0.0)
          goto LAB_143f60197;
        }
        uVar18 = uVar18 + 1;
        uVar17 = local_144;
      } while ((int)uVar18 < local_130);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,local_12c,No);
    uVar20 = local_144;
    if (uVar19 != 0) {
      TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->IndexResults,uVar19 + uVar17,No);
      ppFVar14 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
                 ::FindChecked(&param_1->MetaData,ECommandData_Culling);
      pFVar7 = *ppFVar14;
      uVar20 = local_144;
      if (pFVar7 != (FFieldSystemMetaData *)0x0) {
        *(undefined1 *)(pFVar7 + 1) = 1;
        TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2],uVar19,No);
        pTVar5 = param_1->IndexResults;
        uVar20 = 0;
        if ((int)uVar17 < pTVar5->ArrayNum) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (pTVar5->AllocatorInstance).Data;
        FVar9 = pFVar7[2];
        if ((*(int *)((longlong)FVar9 + 8) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        memcpy(*(void **)FVar9,pFVar8 + (longlong)(int)uVar17 * 8,(longlong)(int)uVar19 << 3);
        pFVar11 = local_118;
        uVar20 = local_144;
        if (local_118 != (FFieldNode<int> *)0x0) {
          local_108.ElementArray = param_1->IndexResults;
          local_108.ArrayOffset = local_144;
          local_108.ArrayNum = uVar19;
          if (((local_108.ElementArray)->ArrayNum < (int)(uVar19 + uVar17)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x1f,
                                  L"Field array size out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FFieldContext::FFieldContext
                    ((FFieldContext *)local_f8,&local_108,&param_1->SamplePositions,
                     &param_1->MetaData,param_1->TimeSeconds,param_1->VectorResults,
                     param_1->ScalarResults,param_1->IntegerResults,param_1->IndexResults,
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2]);
          (**(code **)(*(longlong *)pFVar11 + 0x50))(pFVar11,local_f8);
          if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
            (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
          }
          local_90 = 0;
          if ((void *)local_f8._96_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._96_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (local_f8 + 0x20);
        }
      }
    }
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(param_1->IndexResults,uVar20,No);
  }
  return;
}

// Evaluate @ 143f60580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCullingField<float>::Evaluate
          (FCullingField<float> *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  int iVar1;
  int iVar2;
  FFieldNode<float> *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  FFieldSystemMetaData *pFVar7;
  FScriptContainerElement *pFVar8;
  FFieldSystemMetaData FVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  FFieldSystemMetaData **ppFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [4];
  uint local_144;
  TArray<float,TSizedDefaultAllocator<32>_> *local_140;
  uint local_138;
  int local_134;
  int local_130;
  uint local_12c;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *local_128;
  FCullingField<float> *local_120;
  FFieldNode<float> *local_118;
  TFieldArrayView<float> *local_110;
  TFieldArrayView<FFieldContextIndex> local_108;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar3 = (this->Culling).Ptr;
  iVar1 = (param_1->SampleIndices).ArrayNum;
  iVar2 = param_2->ArrayNum;
  local_118 = (this->Input).Ptr;
  local_130 = iVar1;
  local_120 = this;
  local_110 = param_2;
  if (pFVar3 == (FFieldNode<float> *)0x0) {
    if (local_118 != (FFieldNode<float> *)0x0) {
      (**(code **)(*(longlong *)local_118 + 0x50))();
    }
  }
  else {
    iVar12 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    if (iVar12 != 3) {
      local_148[0] = 0;
      bVar11 = `FCullingField<float>::Evaluate'::__l6::<lambda_1>::operator()(local_148);
      if (!bVar11) {
        return;
      }
    }
    uVar19 = param_1->ScalarResults->ArrayNum;
    local_12c = uVar19;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,uVar19 + iVar2,No);
    local_140 = param_1->ScalarResults;
    local_138 = uVar19;
    local_134 = iVar2;
    if ((local_140->ArrayNum < (int)(uVar19 + iVar2)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar4 = param_1->ScalarResults;
    uVar16 = 0;
    if ((int)uVar19 < pTVar4->ArrayNum) {
      uVar16 = ~uVar19 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    memset((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar19 * 4,0,(longlong)iVar2 << 2);
    (**(code **)(*(longlong *)pFVar3 + 0x50))(pFVar3,param_1);
    uVar19 = param_1->IndexResults->ArrayNum;
    local_144 = uVar19;
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
              (param_1->IndexResults,uVar19 + iVar2,No);
    local_128 = param_1->IndexResults;
    if ((local_128->ArrayNum < (int)(uVar19 + iVar2)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = uVar19;
    if (0 < iVar1) {
      do {
        uVar16 = 0;
        if ((int)uVar17 < (param_1->SampleIndices).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar5 = (param_1->SampleIndices).ElementArray;
        uVar15 = (param_1->SampleIndices).ArrayOffset + uVar17;
        uVar16 = 0;
        if ((int)uVar15 < pTVar5->ArrayNum) {
          uVar16 = ~uVar15 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar16 = *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar15 * 8 + 4);
        if (local_120->Operation == Field_Culling_Outside) {
          uVar15 = 0;
          if ((int)uVar16 < local_134) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar16 = uVar16 + local_138;
          uVar15 = 0;
          if ((int)uVar16 < local_140->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) != 0.0) {
LAB_143f60967:
            uVar16 = 0;
            if ((int)uVar17 < (param_1->SampleIndices).ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = (param_1->SampleIndices).ElementArray;
            uVar15 = (param_1->SampleIndices).ArrayOffset + uVar17;
            uVar16 = 0;
            if ((int)uVar15 < pTVar5->ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar6 = *(undefined8 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar15 * 8);
            uVar16 = 0;
            if ((int)uVar18 < iVar2) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = local_128;
            uVar16 = 0;
            if ((int)uVar19 < local_128->ArrayNum) {
              uVar16 = ~uVar19 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar18 = uVar18 + 1;
            lVar14 = (longlong)(int)uVar19;
            uVar19 = uVar19 + 1;
            *(undefined8 *)((pTVar5->AllocatorInstance).Data + lVar14 * 8) = uVar6;
          }
        }
        else {
          uVar15 = 0;
          if ((int)uVar16 < local_134) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar16 = uVar16 + local_138;
          uVar15 = 0;
          if ((int)uVar16 < local_140->ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar16 * 4) == 0.0)
          goto LAB_143f60967;
        }
        uVar17 = uVar17 + 1;
        uVar16 = local_144;
      } while ((int)uVar17 < local_130);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,local_12c,No);
    uVar19 = local_144;
    if (uVar18 != 0) {
      TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->IndexResults,uVar18 + uVar16,No);
      ppFVar13 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
                 ::FindChecked(&param_1->MetaData,ECommandData_Culling);
      pFVar7 = *ppFVar13;
      uVar19 = local_144;
      if (pFVar7 != (FFieldSystemMetaData *)0x0) {
        *(undefined1 *)(pFVar7 + 1) = 1;
        TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2],uVar18,No);
        pTVar5 = param_1->IndexResults;
        uVar19 = 0;
        if ((int)uVar16 < pTVar5->ArrayNum) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (pTVar5->AllocatorInstance).Data;
        FVar9 = pFVar7[2];
        if ((*(int *)((longlong)FVar9 + 8) < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        memcpy(*(void **)FVar9,pFVar8 + (longlong)(int)uVar16 * 8,(longlong)(int)uVar18 << 3);
        pFVar3 = local_118;
        uVar19 = local_144;
        if (local_118 != (FFieldNode<float> *)0x0) {
          local_108.ElementArray = param_1->IndexResults;
          local_108.ArrayOffset = local_144;
          local_108.ArrayNum = uVar18;
          if (((local_108.ElementArray)->ArrayNum < (int)(uVar18 + uVar16)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x1f,
                                  L"Field array size out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FFieldContext::FFieldContext
                    ((FFieldContext *)local_f8,&local_108,&param_1->SamplePositions,
                     &param_1->MetaData,param_1->TimeSeconds,param_1->VectorResults,
                     param_1->ScalarResults,param_1->IntegerResults,param_1->IndexResults,
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2]);
          (**(code **)(*(longlong *)pFVar3 + 0x50))(pFVar3,local_f8);
          if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
            (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
          }
          local_90 = 0;
          if ((void *)local_f8._96_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._96_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (local_f8 + 0x20);
        }
      }
    }
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(param_1->IndexResults,uVar19,No);
  }
  return;
}

// Evaluate @ 143f60d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FCullingField<UE::Math::TVector<double>_>::Evaluate
          (FCullingField<UE::Math::TVector<double>_> *this,FFieldContext *param_1,
          TFieldArrayView<UE::Math::TVector<double>_> *param_2)

{
  int iVar1;
  int iVar2;
  FFieldNode<float> *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  FFieldSystemMetaData *pFVar7;
  FScriptContainerElement *pFVar8;
  FFieldSystemMetaData FVar9;
  code *pcVar10;
  FFieldNode<UE::Math::TVector<double>_> *pFVar11;
  bool bVar12;
  int iVar13;
  FFieldSystemMetaData **ppFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [4];
  uint local_144;
  TArray<float,TSizedDefaultAllocator<32>_> *local_140;
  uint local_138;
  int local_134;
  int local_130;
  uint local_12c;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *local_128;
  FCullingField<UE::Math::TVector<double>_> *local_120;
  FFieldNode<UE::Math::TVector<double>_> *local_118;
  TFieldArrayView<UE::Math::TVector<double>_> *local_110;
  TFieldArrayView<FFieldContextIndex> local_108;
  undefined1 local_f8 [104];
  undefined4 local_90;
  TUniquePtr<FFieldSystemMetaDataCulling,TDefaultDelete<FFieldSystemMetaDataCulling>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar3 = (this->Culling).Ptr;
  iVar1 = (param_1->SampleIndices).ArrayNum;
  iVar2 = param_2->ArrayNum;
  local_118 = (this->Input).Ptr;
  local_130 = iVar1;
  local_120 = this;
  local_110 = param_2;
  if (pFVar3 == (FFieldNode<float> *)0x0) {
    if (local_118 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
      (**(code **)(*(longlong *)local_118 + 0x50))();
    }
  }
  else {
    iVar13 = (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    if (iVar13 != 3) {
      local_148[0] = 0;
      bVar12 = `FCullingField<UE::Math::TVector<double>_>::Evaluate'::__l6::<lambda_1>::operator()
                         (local_148);
      if (!bVar12) {
        return;
      }
    }
    uVar20 = param_1->ScalarResults->ArrayNum;
    local_12c = uVar20;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,uVar20 + iVar2,No);
    local_140 = param_1->ScalarResults;
    local_138 = uVar20;
    local_134 = iVar2;
    if ((local_140->ArrayNum < (int)(uVar20 + iVar2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar4 = param_1->ScalarResults;
    uVar17 = 0;
    if ((int)uVar20 < pTVar4->ArrayNum) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    memset((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar20 * 4,0,(longlong)iVar2 << 2);
    (**(code **)(*(longlong *)pFVar3 + 0x50))(pFVar3,param_1);
    uVar20 = param_1->IndexResults->ArrayNum;
    local_144 = uVar20;
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
              (param_1->IndexResults,uVar20 + iVar2,No);
    local_128 = param_1->IndexResults;
    if ((local_128->ArrayNum < (int)(uVar20 + iVar2)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                            ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar19 = 0;
    uVar18 = 0;
    uVar17 = uVar20;
    if (0 < iVar1) {
      do {
        uVar17 = 0;
        if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                ,0x50,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar5 = (param_1->SampleIndices).ElementArray;
        uVar16 = (param_1->SampleIndices).ArrayOffset + uVar18;
        uVar17 = 0;
        if ((int)uVar16 < pTVar5->ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar17 = *(uint *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar16 * 8 + 4);
        if (local_120->Operation == Field_Culling_Outside) {
          uVar16 = 0;
          if ((int)uVar17 < local_134) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar17 = uVar17 + local_138;
          uVar16 = 0;
          if ((int)uVar17 < local_140->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) != 0.0) {
LAB_143f61137:
            uVar17 = 0;
            if ((int)uVar18 < (param_1->SampleIndices).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = (param_1->SampleIndices).ElementArray;
            uVar16 = (param_1->SampleIndices).ArrayOffset + uVar18;
            uVar17 = 0;
            if ((int)uVar16 < pTVar5->ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar6 = *(undefined8 *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
            uVar17 = 0;
            if ((int)uVar19 < iVar2) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pTVar5 = local_128;
            uVar17 = 0;
            if ((int)uVar20 < local_128->ArrayNum) {
              uVar17 = ~uVar20 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = uVar19 + 1;
            lVar15 = (longlong)(int)uVar20;
            uVar20 = uVar20 + 1;
            *(undefined8 *)((pTVar5->AllocatorInstance).Data + lVar15 * 8) = uVar6;
          }
        }
        else {
          uVar16 = 0;
          if ((int)uVar17 < local_134) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar4 = local_140;
          uVar17 = uVar17 + local_138;
          uVar16 = 0;
          if ((int)uVar17 < local_140->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(float *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) == 0.0)
          goto LAB_143f61137;
        }
        uVar18 = uVar18 + 1;
        uVar17 = local_144;
      } while ((int)uVar18 < local_130);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,local_12c,No);
    uVar20 = local_144;
    if (uVar19 != 0) {
      TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->IndexResults,uVar19 + uVar17,No);
      ppFVar14 = TMapBase<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>_>
                 ::FindChecked(&param_1->MetaData,ECommandData_Culling);
      pFVar7 = *ppFVar14;
      uVar20 = local_144;
      if (pFVar7 != (FFieldSystemMetaData *)0x0) {
        *(undefined1 *)(pFVar7 + 1) = 1;
        TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2],uVar19,No);
        pTVar5 = param_1->IndexResults;
        uVar20 = 0;
        if ((int)uVar17 < pTVar5->ArrayNum) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (pTVar5->AllocatorInstance).Data;
        FVar9 = pFVar7[2];
        if ((*(int *)((longlong)FVar9 + 8) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        memcpy(*(void **)FVar9,pFVar8 + (longlong)(int)uVar17 * 8,(longlong)(int)uVar19 << 3);
        pFVar11 = local_118;
        uVar20 = local_144;
        if (local_118 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
          local_108.ElementArray = param_1->IndexResults;
          local_108.ArrayOffset = local_144;
          local_108.ArrayNum = uVar19;
          if (((local_108.ElementArray)->ArrayNum < (int)(uVar19 + uVar17)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x1f,
                                  L"Field array size out of bounds: %i from an array of size %i"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FFieldContext::FFieldContext
                    ((FFieldContext *)local_f8,&local_108,&param_1->SamplePositions,
                     &param_1->MetaData,param_1->TimeSeconds,param_1->VectorResults,
                     param_1->ScalarResults,param_1->IntegerResults,param_1->IndexResults,
                     (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *)pFVar7[2]);
          (**(code **)(*(longlong *)pFVar11 + 0x50))(pFVar11,local_f8);
          if (local_88.Ptr != (FFieldSystemMetaDataCulling *)0x0) {
            (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
          }
          local_90 = 0;
          if ((void *)local_f8._96_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._96_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (local_f8 + 0x20);
        }
      }
    }
    TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::SetNum(param_1->IndexResults,uVar20,No);
  }
  return;
}

// FillSetupCount @ 143f671d0

void __thiscall
FCullingField<int>::FillSetupCount(FCullingField<int> *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<int> *pFVar2;
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2,param_1,param_2);
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 5;
  return;
}

// FillSetupCount @ 143f67230

void __thiscall
FCullingField<float>::FillSetupCount(FCullingField<float> *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
  }
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,param_1,param_2);
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 5;
  return;
}

// FillSetupCount @ 143f67290

void __thiscall
FCullingField<UE::Math::TVector<double>_>::FillSetupCount
          (FCullingField<UE::Math::TVector<double>_> *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x30))(pFVar2,param_1,param_2);
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 5;
  return;
}

// FillSetupDatas @ 143f676d0

void __thiscall
FCullingField<int>::FillSetupDatas
          (FCullingField<int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<int> *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20 [6];
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))();
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<int> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,param_1,param_2,param_3);
  }
  FFieldNode<int>::FillSetupDatas((FFieldNode<int> *)this,param_1,param_2,param_3);
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_28 = (float)((this->Culling).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_24 = (float)((this->Input).Ptr != (FFieldNode<int> *)0x0);
  if ((pFVar3 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_24;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_20[0] = (float)(int)this->Operation;
  if ((pFVar3 <= (FScriptContainerElement *)local_20) &&
     ((FScriptContainerElement *)local_20 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_20[0];
  return;
}

// FillSetupDatas @ 143f67960

void __thiscall
FCullingField<float>::FillSetupDatas
          (FCullingField<float> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FFieldNode<float> *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float local_28;
  float local_24;
  float local_20 [6];
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))();
  }
  pFVar1 = (this->Input).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,param_1,param_2,param_3);
  }
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_28 = (float)((this->Culling).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_28;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_24 = (float)((this->Input).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar2 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_24;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_20[0] = (float)(int)this->Operation;
  if ((pFVar2 <= (FScriptContainerElement *)local_20) &&
     ((FScriptContainerElement *)local_20 < pFVar2 + (longlong)param_2->ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar5 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_20[0];
  return;
}

// FillSetupDatas @ 143f67bf0

void __thiscall
FCullingField<UE::Math::TVector<double>_>::FillSetupDatas
          (FCullingField<UE::Math::TVector<double>_> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  FFieldNode<float> *pFVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20 [6];
  
  pFVar1 = (this->Culling).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x38))();
  }
  pFVar2 = (this->Input).Ptr;
  if (pFVar2 != (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,param_1,param_2,param_3);
  }
  FFieldNode<UE::Math::TVector<double>_>::FillSetupDatas
            ((FFieldNode<UE::Math::TVector<double>_> *)this,param_1,param_2,param_3);
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_28 = (float)((this->Culling).Ptr != (FFieldNode<float> *)0x0);
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_24 = (float)((this->Input).Ptr != (FFieldNode<UE::Math::TVector<double>_> *)0x0);
  if ((pFVar3 <= (FScriptContainerElement *)&local_24) &&
     ((FScriptContainerElement *)&local_24 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_24;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_20[0] = (float)(int)this->Operation;
  if ((pFVar3 <= (FScriptContainerElement *)local_20) &&
     ((FScriptContainerElement *)local_20 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = param_2->ArrayNum;
  if (iVar6 == param_2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar6 + 1;
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_20[0];
  return;
}

// NewCopy @ 143f6ff60

FFieldNodeBase * __thiscall FCullingField<int>::NewCopy(FCullingField<int> *this)

{
  EFieldCullingOperationType EVar1;
  FFieldNode<int> *pFVar2;
  FFieldNode<float> *pFVar3;
  FFieldNodeBase *pFVar4;
  FName FVar5;
  longlong lVar6;
  
  pFVar4 = ::operator_new(0x28);
  if (pFVar4 != (FFieldNodeBase *)0x0) {
    pFVar2 = (this->Input).Ptr;
    EVar1 = this->Operation;
    if (pFVar2 == (FFieldNode<int> *)0x0) {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    else {
      FVar5 = (FName)(**(code **)(*(longlong *)pFVar2 + 0x18))();
    }
    pFVar3 = (this->Culling).Ptr;
    if (pFVar3 == (FFieldNode<float> *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)pFVar3 + 0x18))();
    }
    (pFVar4->Name).ComparisonIndex = 0;
    (pFVar4->Name).Number = 0;
    pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar4->Name,"");
    *(EFieldCullingOperationType *)&pFVar4[2]._padding_ = EVar1;
    pFVar4->_padding_ = (longlong)&___7__FCullingField_H__6B_;
    pFVar4[1].Name = FVar5;
    pFVar4[1]._padding_ = lVar6;
    return pFVar4;
  }
  return (FFieldNodeBase *)0x0;
}

// NewCopy @ 143f70020

FFieldNodeBase * __thiscall FCullingField<float>::NewCopy(FCullingField<float> *this)

{
  EFieldCullingOperationType EVar1;
  FFieldNode<float> *pFVar2;
  FFieldNodeBase *pFVar3;
  FName FVar4;
  longlong lVar5;
  
  pFVar3 = ::operator_new(0x28);
  if (pFVar3 != (FFieldNodeBase *)0x0) {
    pFVar2 = (this->Input).Ptr;
    EVar1 = this->Operation;
    if (pFVar2 == (FFieldNode<float> *)0x0) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
    }
    else {
      FVar4 = (FName)(**(code **)(*(longlong *)pFVar2 + 0x18))();
    }
    pFVar2 = (this->Culling).Ptr;
    if (pFVar2 == (FFieldNode<float> *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(longlong *)pFVar2 + 0x18))();
    }
    (pFVar3->Name).ComparisonIndex = 0;
    (pFVar3->Name).Number = 0;
    pFVar3->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar3->Name,"");
    *(EFieldCullingOperationType *)&pFVar3[2]._padding_ = EVar1;
    pFVar3->_padding_ = (longlong)&___7__FCullingField_M__6B_;
    pFVar3[1].Name = FVar4;
    pFVar3[1]._padding_ = lVar5;
    return pFVar3;
  }
  return (FFieldNodeBase *)0x0;
}

// NewCopy @ 143f700e0

FFieldNodeBase * __thiscall
FCullingField<UE::Math::TVector<double>_>::NewCopy(FCullingField<UE::Math::TVector<double>_> *this)

{
  EFieldCullingOperationType EVar1;
  FFieldNode<UE::Math::TVector<double>_> *pFVar2;
  FFieldNode<float> *pFVar3;
  FFieldNodeBase *pFVar4;
  FName FVar5;
  longlong lVar6;
  
  pFVar4 = ::operator_new(0x28);
  if (pFVar4 != (FFieldNodeBase *)0x0) {
    pFVar2 = (this->Input).Ptr;
    EVar1 = this->Operation;
    if (pFVar2 == (FFieldNode<UE::Math::TVector<double>_> *)0x0) {
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
    }
    else {
      FVar5 = (FName)(**(code **)(*(longlong *)pFVar2 + 0x18))();
    }
    pFVar3 = (this->Culling).Ptr;
    if (pFVar3 == (FFieldNode<float> *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)pFVar3 + 0x18))();
    }
    (pFVar4->Name).ComparisonIndex = 0;
    (pFVar4->Name).Number = 0;
    pFVar4->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
    ::FName::FName(&pFVar4->Name,"");
    *(EFieldCullingOperationType *)&pFVar4[2]._padding_ = EVar1;
    pFVar4->_padding_ = (longlong)&___7__FCullingField_U__TVector_N_Math_UE____6B_;
    pFVar4[1].Name = FVar5;
    pFVar4[1]._padding_ = lVar6;
    return pFVar4;
  }
  return (FFieldNodeBase *)0x0;
}

// SerializationType @ 143f739d0

ESerializationType __thiscall FCullingField<int>::SerializationType(FCullingField<int> *this)

{
  return FieldNode_FCullingField;
}

// SerializationType @ 143f739e0

ESerializationType __thiscall FCullingField<float>::SerializationType(FCullingField<float> *this)

{
  return FieldNode_FCullingField;
}

// SerializationType @ 143f739f0

ESerializationType __thiscall
FCullingField<UE::Math::TVector<double>_>::SerializationType
          (FCullingField<UE::Math::TVector<double>_> *this)

{
  return FieldNode_FCullingField;
}

// Serialize @ 143f73bc0

void __thiscall FCullingField<int>::Serialize(FCullingField<int> *this,FArchive *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  SerializeInternal<float>(param_1,&this->Culling);
  SerializeInternal<int>(param_1,&this->Input);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Operation;
  if ((byte *)*plVar2 + 1 <= (byte *)plVar2[1]) {
    bVar1 = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
    this->Operation = (uint)bVar1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->Operation = (uint)(byte)local_res8[0];
  return;
}

// Serialize @ 143f73c60

void __thiscall FCullingField<float>::Serialize(FCullingField<float> *this,FArchive *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  SerializeInternal<float>(param_1,&this->Culling);
  SerializeInternal<float>(param_1,&this->Input);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Operation;
  if ((byte *)*plVar2 + 1 <= (byte *)plVar2[1]) {
    bVar1 = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
    this->Operation = (uint)bVar1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->Operation = (uint)(byte)local_res8[0];
  return;
}

// Serialize @ 143f73d00

void __thiscall
FCullingField<UE::Math::TVector<double>_>::Serialize
          (FCullingField<UE::Math::TVector<double>_> *this,FArchive *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  SerializeInternal<float>(param_1,&this->Culling);
  SerializeInternal<UE::Math::TVector<double>_>(param_1,&this->Input);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (undefined1)this->Operation;
  if ((byte *)*plVar2 + 1 <= (byte *)plVar2[1]) {
    bVar1 = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
    this->Operation = (uint)bVar1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  this->Operation = (uint)(byte)local_res8[0];
  return;
}

// operator() @ 1504a9e70

bool __thiscall `FCullingField<int>::Evaluate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055983>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FCullingField<int>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<int>&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9eb0

bool __thiscall `FCullingField<float>::Evaluate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055983>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FCullingField<float>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<float>&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9ef0

bool __thiscall
`FCullingField<UE::Math::TVector<double>_>::Evaluate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243055983>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243055983>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FCullingField<UE::Math::TVector<double>_>::Evaluate(FFieldContext&___ptr64,TFieldArrayView<UE::Math::TVector<double>_>&___ptr64)const___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

