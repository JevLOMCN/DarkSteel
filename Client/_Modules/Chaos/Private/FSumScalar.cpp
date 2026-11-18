// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// FSumScalar @ 143f45620

FSumScalar * __thiscall
FSumScalar::FSumScalar
          (FSumScalar *this,float param_1,FFieldNode<float> *param_2,FFieldNode<float> *param_3,
          EFieldOperationType param_4)

{
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  ::FName::FName((FName *)&this->_padding_,"");
  this->Magnitude = param_1;
  this->_padding_ = (longlong)&___7FSumScalar__6B_;
  this->Operation = param_4;
  (this->ScalarRight).Ptr = param_2;
  (this->ScalarLeft).Ptr = param_3;
  return this;
}

// ~FSumScalar @ 143f4b220

void __thiscall FSumScalar::~FSumScalar(FSumScalar *this)

{
  FFieldNode<float> *pFVar1;
  
  this->_padding_ = (longlong)&___7FSumScalar__6B_;
  pFVar1 = (this->ScalarLeft).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar1 = (this->ScalarRight).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
  return;
}

// operator== @ 143f4c550

bool __thiscall FSumScalar::operator==(FSumScalar *this,FFieldNodeBase *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  pcVar3 = *(code **)(this->_padding_ + 0x10);
  iVar7 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
  iVar8 = (*pcVar3)(this);
  if (iVar7 == iVar8) {
    if (((uint)this->_padding_ == (param_1->Name).ComparisonIndex.Value) &&
       (*(uint *)((longlong)&this->_padding_ + 4) == (param_1->Name).Number)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    fVar1 = *(float *)&param_1[1]._padding_;
    fVar2 = this->Magnitude;
    bVar4 = FieldsEqual<FFieldNode<float>_>
                      (&this->ScalarRight,
                       (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                       &param_1[1].Name);
    bVar5 = FieldsEqual<FFieldNode<float>_>
                      (&this->ScalarLeft,
                       (TUniquePtr<FFieldNode<float>,TDefaultDelete<FFieldNode<float>_>_> *)
                       (param_1 + 2));
    bVar6 = false;
    if (this->Operation == param_1[2].Name.ComparisonIndex.Value) {
      bVar6 = (bool)(bVar5 & (bVar4 && fVar1 == fVar2) & bVar9);
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// ComputeFieldBounds @ 143f5a960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSumScalar::ComputeFieldBounds
          (FSumScalar *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  EFieldOperationType EVar1;
  FFieldNode<float> *pFVar2;
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
  pFVar2 = (this->ScalarRight).Ptr;
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
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x48))(pFVar2,&local_a8,&local_78,&local_60);
    uVar7 = SUB84(local_98,0);
    uVar8 = (undefined4)((ulonglong)local_98 >> 0x20);
    uVar9 = SUB84(local_68,0);
    uVar10 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  pFVar2 = (this->ScalarLeft).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
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
       (local_50 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) goto LAB_143f5ab04;
  }
  iVar4 = 1;
  (param_3->field0_0x0)._s_0.X = local_60 + (param_3->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dStack_58 + (param_3->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.Z = local_50 + (param_3->field0_0x0)._s_0.Z;
  uVar5 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar6 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
  uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uVar12 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
LAB_143f5ab04:
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
  EVar1 = this->Operation;
  if ((EVar1 == Field_Multiply) || (EVar1 == Field_Divide)) {
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
  else {
    if (1 < EVar1 - Field_Add) {
      return;
    }
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
  (param_2->field0_0x0)._s_0.X = local_90;
  (param_2->field0_0x0)._s_0.Y = dStack_88;
  (param_2->field0_0x0)._s_0.Z = local_80;
  return;
}

// EvalMaxMagnitude @ 143f5f530

float __thiscall FSumScalar::EvalMaxMagnitude(FSumScalar *this)

{
  EFieldOperationType EVar1;
  FFieldNode<float> *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pFVar2 = (this->ScalarRight).Ptr;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 0x40))();
  }
  pFVar2 = (this->ScalarLeft).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    fVar5 = (float)(**(code **)(*(longlong *)pFVar2 + 0x40))();
  }
  EVar1 = this->Operation;
  if (EVar1 == Field_Multiply) {
    fVar3 = fVar5 * fVar4;
  }
  else {
    fVar3 = 0.0;
    if (EVar1 == Field_Divide) {
      if (__real_34000000 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar3 = fVar5 / fVar4;
      }
    }
    else if ((EVar1 - Field_Add < 2) && (fVar3 = fVar5, fVar5 <= fVar4)) {
      fVar3 = fVar4;
    }
  }
  return fVar3 * this->Magnitude;
}

// Evaluate @ 143f63550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSumScalar::Evaluate(FSumScalar *this,FFieldContext *param_1,TFieldArrayView<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  EFieldOperationType EVar6;
  FFieldNode<float> *pFVar7;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  FFieldNode<float> *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  FFieldContext *local_res10;
  TFieldArrayView<float> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_f4 [4];
  TArray<float,TSizedDefaultAllocator<32>_> *local_f0;
  int local_e8;
  int local_e4;
  TArray<float,TSizedDefaultAllocator<32>_> *local_e0;
  int local_d8;
  int local_d4;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  int local_b8;
  EMetaType local_b0 [2];
  longlong *local_a8;
  EMetaType local_a0 [2];
  FFieldContext *local_98;
  TPairInitializer<FFieldSystemMetaData::EMetaType_const_&,FFieldSystemMetaData_*_const_&> local_90;
  longlong **local_80;
  FFieldNode<float> *local_78;
  FFieldNode<float> *pFStack_70;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_c0 = ::operator_new(0x10);
  local_98 = param_1;
  if (local_c0 == (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    local_c0 = (longlong *)0x0;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InMetaData",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldSystem.h"
                        ,0x17e,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    local_c0[1] = (longlong)param_2;
    *local_c0 = (longlong)&___7__FFieldSystemMetaDataResults_M__6B_;
    local_a8 = local_c0;
  }
  local_a0[0] = (**(code **)(*local_c0 + 8))();
  local_90.Value = (FFieldSystemMetaData **)local_a0;
  local_80 = &local_c0;
  TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FFieldSystemMetaData::EMetaType_const_&,FFieldSystemMetaData_*_const_&>_>
            (&local_98->MetaData,&local_90,(bool *)&local_90.Value);
  pFVar15 = (this->ScalarLeft).Ptr;
  iVar4 = (param_1->SampleIndices).ArrayNum;
  iVar14 = param_2->ArrayNum;
  pFVar7 = (this->ScalarRight).Ptr;
  fVar1 = this->Magnitude;
  if (pFVar15 == (FFieldNode<float> *)0x0) {
LAB_143f6444c:
    pFVar15 = (this->ScalarRight).Ptr;
    if (pFVar15 == (FFieldNode<float> *)0x0) goto LAB_143f64486;
    iVar14 = (**(code **)(*(longlong *)pFVar15 + 8))();
    if (iVar14 != 3) {
      local_f4[0] = 0;
      bVar13 = `FSumScalar::Evaluate'::__l30::<lambda_3>::operator()(local_f4);
      if (!bVar13) goto LAB_143f64486;
    }
    pFVar15 = (this->ScalarRight).Ptr;
    lVar20 = *(longlong *)pFVar15;
  }
  else {
    if (pFVar7 != (FFieldNode<float> *)0x0) {
      iVar5 = param_1->ScalarResults->ArrayNum;
      local_b8 = iVar5;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum
                (param_1->ScalarResults,iVar5 + iVar14 * 2,No);
      local_f0 = param_1->ScalarResults;
      local_d8 = iVar5 + iVar14;
      local_e8 = iVar5;
      local_e4 = iVar14;
      if ((local_f0->ArrayNum < local_d8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_e0 = param_1->ScalarResults;
      local_d4 = iVar14;
      if ((local_e0->ArrayNum < local_d8 + iVar14) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InArrayOffset + InArrayNum <= ElementArray.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x1f,L"Field array size out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = 2;
      local_78 = pFVar15;
      pFStack_70 = pFVar7;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&local_d0,2,&local_c4);
      *(FFieldNode<float> **)local_d0.Data = local_78;
      *(FFieldNode<float> **)(local_d0.Data + 8) = pFStack_70;
      if ((local_c8 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar14 = (**(code **)(**(longlong **)local_d0.Data + 8))();
      if ((iVar14 == 3) ||
         (bVar13 = `FSumScalar::Evaluate'::__l8::<lambda_1>::operator()(local_res8), bVar13)) {
        if ((local_c8 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (**(code **)(**(longlong **)local_d0.Data + 0x50))(*(longlong **)local_d0.Data,param_1);
      }
      if ((local_c8 < 2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar14 = (**(code **)(**(longlong **)(local_d0.Data + 8) + 8))();
      if (iVar14 == 3) {
LAB_143f63877:
        if ((local_c8 < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (**(code **)(**(longlong **)(local_d0.Data + 8) + 0x50))
                  (*(longlong **)(local_d0.Data + 8),param_1);
      }
      else {
        local_res8[0] = 0;
        bVar13 = `FSumScalar::Evaluate'::__l8::<lambda_1>::operator()(local_res8);
        if (bVar13) goto LAB_143f63877;
      }
      EVar6 = this->Operation;
      if (EVar6 == Field_Multiply) {
        uVar19 = 0;
        if (0 < iVar4) {
          do {
            uVar17 = 0;
            if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar8 = (param_1->SampleIndices).ElementArray;
            uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
            uVar17 = 0;
            if ((int)uVar16 < pTVar8->ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (pTVar8->AllocatorInstance).Data;
            lVar20 = (longlong)(int)uVar16;
            uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar16 = 0;
            if ((int)uVar17 < local_e4) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_f0;
            uVar17 = uVar17 + local_e8;
            uVar16 = 0;
            if ((int)uVar17 < local_f0->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (pTVar11->AllocatorInstance).Data;
            uVar16 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar18 = 0;
            if ((int)uVar16 < local_d4) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_e0;
            uVar16 = uVar16 + local_d8;
            uVar18 = 0;
            if ((int)uVar16 < local_e0->ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            param_2 = local_res18;
            uVar18 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            fVar2 = *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
            fVar3 = *(float *)(pFVar10 + (longlong)(int)uVar17 * 4);
            uVar17 = 0;
            if ((int)uVar18 < local_res18->ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar18 = uVar18 + param_2->ArrayOffset;
            pTVar11 = param_2->ElementArray;
            uVar17 = 0;
            if ((int)uVar18 < pTVar11->ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar19 = uVar19 + 1;
            *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) =
                 fVar2 * fVar3;
            param_1 = local_res10;
          } while ((int)uVar19 < iVar4);
        }
      }
      else if (EVar6 == Field_Divide) {
        uVar19 = 0;
        if (0 < iVar4) {
          do {
            uVar17 = 0;
            if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar8 = (param_1->SampleIndices).ElementArray;
            uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
            uVar17 = 0;
            if ((int)uVar16 < pTVar8->ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (pTVar8->AllocatorInstance).Data;
            lVar20 = (longlong)(int)uVar16;
            uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar16 = 0;
            if ((int)uVar17 < local_e4) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_f0;
            uVar17 = uVar17 + local_e8;
            uVar16 = 0;
            if ((int)uVar17 < local_f0->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (pTVar11->AllocatorInstance).Data;
            uVar16 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar18 = 0;
            if ((int)uVar16 < local_d4) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_e0;
            uVar16 = uVar16 + local_d8;
            uVar18 = 0;
            if ((int)uVar16 < local_e0->ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            param_2 = local_res18;
            fVar2 = *(float *)(pFVar10 + (longlong)(int)uVar17 * 4);
            uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            fVar3 = *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
            uVar16 = 0;
            if ((int)uVar17 < local_res18->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar17 = uVar17 + param_2->ArrayOffset;
            pTVar11 = param_2->ElementArray;
            uVar16 = 0;
            if ((int)uVar17 < pTVar11->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar19 = uVar19 + 1;
            *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) =
                 fVar2 / fVar3;
            param_1 = local_res10;
          } while ((int)uVar19 < iVar4);
        }
      }
      else if (EVar6 == Field_Add) {
        uVar19 = 0;
        if (0 < iVar4) {
          do {
            uVar17 = 0;
            if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
              uVar17 = ~uVar19 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar8 = (param_1->SampleIndices).ElementArray;
            uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
            uVar17 = 0;
            if ((int)uVar16 < pTVar8->ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (pTVar8->AllocatorInstance).Data;
            lVar20 = (longlong)(int)uVar16;
            uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar16 = 0;
            if ((int)uVar17 < local_d4) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_e0;
            uVar17 = uVar17 + local_d8;
            uVar16 = 0;
            if ((int)uVar17 < local_e0->ArrayNum) {
              uVar16 = ~uVar17 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (pTVar11->AllocatorInstance).Data;
            uVar16 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            uVar18 = 0;
            if ((int)uVar16 < local_e4) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar11 = local_f0;
            uVar16 = uVar16 + local_e8;
            uVar18 = 0;
            if ((int)uVar16 < local_f0->ArrayNum) {
              uVar18 = ~uVar16 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            param_2 = local_res18;
            uVar18 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
            fVar2 = *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
            fVar3 = *(float *)(pFVar10 + (longlong)(int)uVar17 * 4);
            uVar17 = 0;
            if ((int)uVar18 < local_res18->ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                    ,0x50,L"Array index out of bounds: %i from an array of size %i")
               , bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar18 = uVar18 + param_2->ArrayOffset;
            pTVar11 = param_2->ElementArray;
            uVar17 = 0;
            if ((int)uVar18 < pTVar11->ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar19 = uVar19 + 1;
            *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar18 * 4) =
                 fVar2 + fVar3;
            param_1 = local_res10;
          } while ((int)uVar19 < iVar4);
        }
      }
      else if ((EVar6 == Field_Substract) && (uVar19 = 0, 0 < iVar4)) {
        do {
          uVar17 = 0;
          if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar8 = (param_1->SampleIndices).ElementArray;
          uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
          uVar17 = 0;
          if ((int)uVar16 < pTVar8->ArrayNum) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (pTVar8->AllocatorInstance).Data;
          lVar20 = (longlong)(int)uVar16;
          uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
          uVar16 = 0;
          if ((int)uVar17 < local_e4) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar11 = local_f0;
          uVar17 = uVar17 + local_e8;
          uVar16 = 0;
          if ((int)uVar17 < local_f0->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = (pTVar11->AllocatorInstance).Data;
          uVar16 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
          uVar18 = 0;
          if ((int)uVar16 < local_d4) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar11 = local_e0;
          uVar16 = uVar16 + local_d8;
          uVar18 = 0;
          if ((int)uVar16 < local_e0->ArrayNum) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          param_2 = local_res18;
          fVar2 = *(float *)(pFVar10 + (longlong)(int)uVar17 * 4);
          uVar17 = *(uint *)(pFVar9 + lVar20 * 8 + 4);
          fVar3 = *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
          uVar16 = 0;
          if ((int)uVar17 < local_res18->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                                  ,0x50,L"Array index out of bounds: %i from an array of size %i"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar17 = uVar17 + param_2->ArrayOffset;
          pTVar11 = param_2->ElementArray;
          uVar16 = 0;
          if ((int)uVar17 < pTVar11->ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar19 = uVar19 + 1;
          *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar17 * 4) = fVar2 - fVar3;
          param_1 = local_res10;
        } while ((int)uVar19 < iVar4);
      }
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(param_1->ScalarResults,local_b8,No);
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      goto LAB_143f64486;
    }
    iVar14 = (**(code **)(*(longlong *)pFVar15 + 8))(pFVar15);
    if (iVar14 != 3) {
      local_res20[0] = 0;
      bVar13 = `FSumScalar::Evaluate'::__l26::<lambda_2>::operator()(local_res20);
      if (!bVar13) goto LAB_143f6444c;
    }
    lVar20 = *(longlong *)pFVar15;
  }
  (**(code **)(lVar20 + 0x50))(pFVar15,param_1,param_2);
LAB_143f64486:
  if ((fVar1 != __real_3f800000) && (uVar19 = 0, 0 < iVar4)) {
    do {
      uVar17 = 0;
      if ((int)uVar19 < (param_1->SampleIndices).ArrayNum) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar8 = (param_1->SampleIndices).ElementArray;
      uVar16 = (param_1->SampleIndices).ArrayOffset + uVar19;
      uVar17 = 0;
      if ((int)uVar16 < pTVar8->ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar17 = *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)(int)uVar16 * 8 + 4);
      uVar16 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Field\\FieldArrayView.h"
                              ,0x50,L"Array index out of bounds: %i from an array of size %i"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar17 = uVar17 + param_2->ArrayOffset;
      pTVar11 = param_2->ElementArray;
      uVar16 = 0;
      if ((int)uVar17 < pTVar11->ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (pTVar11->AllocatorInstance).Data;
      uVar19 = uVar19 + 1;
      *(float *)(pFVar9 + (longlong)(int)uVar17 * 4) =
           fVar1 * *(float *)(pFVar9 + (longlong)(int)uVar17 * 4);
    } while ((int)uVar19 < iVar4);
  }
  local_b0[0] = local_a0[0];
  if (*(int *)&(local_98->MetaData).field_0x8 != *(int *)&(local_98->MetaData).field_0x34) {
    TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,FFieldSystemMetaData_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_FFieldSystemMetaData::EMetaType>(&local_98->MetaData,local_a0[0],local_b0);
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)*local_a8)(local_a8,1);
  }
  return;
}

// FillSetupCount @ 143f673a0

void __thiscall FSumScalar::FillSetupCount(FSumScalar *this,int *param_1,int *param_2)

{
  FFieldNode<float> *pFVar1;
  
  pFVar1 = (this->ScalarRight).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))();
  }
  pFVar1 = (this->ScalarLeft).Ptr;
  if (pFVar1 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,param_1,param_2);
  }
  *param_1 = *param_1 + 1;
  *param_2 = *param_2 + 6;
  return;
}

// FillSetupDatas @ 143f6ad80

void __thiscall
FSumScalar::FillSetupDatas
          (FSumScalar *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float *pfVar1;
  FFieldNode<float> *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28;
  float local_24;
  float local_20 [6];
  
  pFVar2 = (this->ScalarRight).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x38))();
  }
  pFVar2 = (this->ScalarLeft).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x38))(pFVar2,param_1,param_2,param_3);
  }
  FFieldNode<float>::FillSetupDatas((FFieldNode<float> *)this,param_1,param_2,param_3);
  pFVar3 = (param_2->AllocatorInstance).Data;
  pfVar1 = &this->Magnitude;
  if ((pFVar3 <= pfVar1) && (pfVar1 < pFVar3 + (longlong)param_2->ArrayMax * 4)) {
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
  *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pfVar1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_28 = (float)((this->ScalarRight).Ptr != (FFieldNode<float> *)0x0);
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
  local_24 = (float)((this->ScalarLeft).Ptr != (FFieldNode<float> *)0x0);
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

// NewCopy @ 143f70a00

FFieldNodeBase * __thiscall FSumScalar::NewCopy(FSumScalar *this)

{
  EFieldOperationType EVar1;
  FFieldNode<float> *pFVar2;
  FSumScalar *pFVar3;
  FFieldNode<float> *pFVar4;
  FFieldNode<float> *pFVar5;
  
  pFVar3 = ::operator_new(0x30);
  pFVar5 = (FFieldNode<float> *)0x0;
  if (pFVar3 == (FSumScalar *)0x0) {
    return (FFieldNodeBase *)0x0;
  }
  pFVar2 = (this->ScalarLeft).Ptr;
  EVar1 = this->Operation;
  pFVar4 = pFVar5;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    pFVar4 = (FFieldNode<float> *)(**(code **)(*(longlong *)pFVar2 + 0x18))();
  }
  pFVar2 = (this->ScalarRight).Ptr;
  if (pFVar2 != (FFieldNode<float> *)0x0) {
    pFVar5 = (FFieldNode<float> *)(**(code **)(*(longlong *)pFVar2 + 0x18))();
  }
  pFVar3 = FSumScalar(pFVar3,this->Magnitude,pFVar5,pFVar4,EVar1);
  return (FFieldNodeBase *)pFVar3;
}

// SerializationType @ 143f73ae0

ESerializationType __thiscall FSumScalar::SerializationType(FSumScalar *this)

{
  return FieldNode_FSumScalar;
}

// Serialize @ 143f74800

void __thiscall FSumScalar::Serialize(FSumScalar *this,FArchive *param_1)

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
  SerializeInternal<float>(param_1,&this->ScalarRight);
  SerializeInternal<float>(param_1,&this->ScalarLeft);
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

// operator() @ 1504a9f30

bool __thiscall `FSumScalar::Evaluate'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243056546>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243056546>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9fb0

bool __thiscall `FSumScalar::Evaluate'::__l26::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243056498>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243056498>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9ff0

bool __thiscall `FSumScalar::Evaluate'::__l30::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8586442822243056492>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8586442822243056492>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

