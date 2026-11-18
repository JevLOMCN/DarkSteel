// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b59a0

UClass * __cdecl UInputModifierSmoothDelta::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSmoothDelta",
               &Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton,
               StaticRegisterNativesUInputModifierSmoothDelta,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierSmoothDelta>,
               InternalVTableHelperCtorCaller<UInputModifierSmoothDelta>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton;
}

// UInputModifierSmoothDelta @ 14a6ccf90

UInputModifierSmoothDelta * __thiscall
UInputModifierSmoothDelta::UInputModifierSmoothDelta
          (UInputModifierSmoothDelta *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->SmoothingMethod = Lerp;
  this->_padding_ = (longlong)&___7UInputModifierSmoothDelta__6B_;
  this->Speed = 0.5;
  this->EasingExponent = 2.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OldValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OldValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->OldValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Delta).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Delta).field0_0x0._s_0.Y = (double)uVar1;
  (this->Delta).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UInputModifierSmoothDelta @ 14a6cd000

UInputModifierSmoothDelta * __thiscall
UInputModifierSmoothDelta::UInputModifierSmoothDelta
          (UInputModifierSmoothDelta *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->SmoothingMethod = Lerp;
  this->_padding_ = (longlong)&___7UInputModifierSmoothDelta__6B_;
  this->Speed = 0.5;
  this->EasingExponent = 2.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OldValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OldValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->OldValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Delta).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Delta).field0_0x0._s_0.Y = (double)uVar1;
  (this->Delta).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UInputModifierSmoothDelta @ 14a6cfa00

void __thiscall
UInputModifierSmoothDelta::~UInputModifierSmoothDelta(UInputModifierSmoothDelta *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1840

UClass * __cdecl UInputModifierSmoothDelta::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSmoothDelta",
               &Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton,
               StaticRegisterNativesUInputModifierSmoothDelta,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierSmoothDelta>,
               InternalVTableHelperCtorCaller<UInputModifierSmoothDelta>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSmoothDelta.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7f80

FInputActionValue * __thiscall
UInputModifierSmoothDelta::ModifyRaw_Implementation
          (UInputModifierSmoothDelta *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  ENormalizeInputSmoothingType EVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  EInputActionValueType EVar9;
  undefined7 uVar10;
  bool bVar11;
  TVector<double> *pTVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 local_res20 [8];
  TVector<double>_u_0 local_a8;
  TVector<double> local_90 [5];
  
  if ((param_2->ValueType == Boolean) &&
     (bVar11 = `UInputModifierSmoothDelta::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()
                         (local_res20), !bVar11)) {
    dVar18 = (param_2->Value).field0_0x0._s_0.Y;
    dVar4 = (param_2->Value).field0_0x0._s_0.Z;
    EVar9 = param_2->ValueType;
    uVar10 = *(undefined7 *)&param_2->field_0x19;
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar18;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar4;
    __return_storage_ptr__->ValueType = EVar9;
    *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar10;
    return __return_storage_ptr__;
  }
  local_90[0].field0_0x0._16_8_ = (param_2->Value).field0_0x0._s_0.Z;
  dVar19 = (param_2->Value).field0_0x0._s_0.X - (this->OldValue).field0_0x0._s_0.X;
  dVar4 = (param_2->Value).field0_0x0._s_0.Y - (this->OldValue).field0_0x0._s_0.Y;
  dVar5 = (double)local_90[0].field0_0x0._16_8_ - (this->OldValue).field0_0x0._s_0.Z;
  dVar18 = dVar4 * dVar4 + dVar19 * dVar19 + dVar5 * dVar5;
  uVar6 = dVar4;
  uVar7 = dVar5;
  uVar8 = dVar19;
  if ((dVar18 != __real_3ff0000000000000) &&
     (uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar18)) {
    dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
    uVar6 = dVar4 * dVar18;
    uVar7 = dVar5 * dVar18;
    uVar8 = dVar19 * dVar18;
  }
  uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
  dVar4 = (param_2->Value).field0_0x0._s_0.Y;
  EVar2 = this->SmoothingMethod;
  dVar18 = (param_2->Value).field0_0x0._s_0.Z;
  (this->OldValue).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (this->OldValue).field0_0x0._s_0.Y = dVar4;
  (this->OldValue).field0_0x0._s_0.Z = dVar18;
  fVar13 = __real_3f000000;
  fVar15 = __real_3f800000;
  local_a8._8_4_ = (int)uVar6;
  local_a8._0_8_ = uVar8;
  local_a8._12_4_ = uVar17;
  local_a8._s_0.Z = (double)uVar7;
  switch(EVar2) {
  case Lerp:
    dVar5 = (double)this->Speed;
    dVar19 = (double)(__real_3f800000 - this->Speed);
    dVar18 = (this->Delta).field0_0x0._s_0.Y;
    dVar4 = (this->Delta).field0_0x0._s_0.Z;
    (this->Delta).field0_0x0._s_0.X =
         dVar19 * (this->Delta).field0_0x0._s_0.X + (double)uVar8 * dVar5;
    (this->Delta).field0_0x0._s_0.Y = dVar19 * dVar18 + (double)uVar6 * dVar5;
    (this->Delta).field0_0x0._s_0.Z = dVar19 * dVar4 + (double)uVar7 * dVar5;
    goto LAB_14a6e86a4;
  case Interp_To:
    pTVar12 = FMath::VInterpTo(local_90,&this->Delta,(TVector<double> *)&local_a8._s_0,param_3,
                               this->Speed);
    goto LAB_14a6e817b;
  case Interp_Constant_To:
    pTVar12 = FMath::VInterpConstantTo
                        (local_90,&this->Delta,(TVector<double> *)&local_a8._s_0,param_3,this->Speed
                        );
LAB_14a6e817b:
    dVar18 = (pTVar12->field0_0x0)._s_0.Y;
    (this->Delta).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    (this->Delta).field0_0x0._s_0.Y = dVar18;
    (this->Delta).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    goto LAB_14a6e86a4;
  case Interp_Circular_In:
    pTVar12 = &this->Delta;
    dVar18 = (double)(__real_3f800000 - SQRT(__real_3f800000 - this->Speed * this->Speed));
    dVar4 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18 +
            (this->Delta).field0_0x0._s_0.Z;
    (pTVar12->field0_0x0)._s_0.X =
         ((double)uVar8 - (pTVar12->field0_0x0)._s_0.X) * dVar18 + (pTVar12->field0_0x0)._s_0.X;
    dVar18 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    break;
  case Interp_Circular_Out:
    pTVar12 = &this->Delta;
    fVar15 = this->Speed - __real_3f800000;
    dVar18 = (double)SQRT(__real_3f800000 - fVar15 * fVar15);
    dVar4 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18 +
            (this->Delta).field0_0x0._s_0.Z;
    (pTVar12->field0_0x0)._s_0.X =
         ((double)uVar8 - (pTVar12->field0_0x0)._s_0.X) * dVar18 + (pTVar12->field0_0x0)._s_0.X;
    dVar18 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    break;
  case Interp_Circular_In_Out:
    fVar15 = this->Speed;
    fVar13 = fVar15 + fVar15;
    if (__real_3f000000 <= fVar15) {
      fVar15 = SQRT(__real_3f800000 - (fVar13 - __real_40000000) * (fVar13 - __real_40000000)) +
               __real_3f800000;
    }
    else {
      fVar15 = __real_3f800000 - SQRT(__real_3f800000 - fVar13 * fVar13);
    }
    dVar18 = (double)(fVar15 * __real_3f000000);
    goto LAB_14a6e82ed;
  case Interp_Ease_In:
    fVar15 = powf(this->Speed,this->EasingExponent);
    goto LAB_14a6e8347;
  case Interp_Ease_Out:
    pTVar12 = &this->Delta;
    fVar13 = powf(__real_3f800000 - this->Speed,this->EasingExponent);
    dVar18 = (this->Delta).field0_0x0._s_0.Z;
    dVar5 = (double)(fVar15 - fVar13);
    dVar4 = (this->Delta).field0_0x0._s_0.Z;
    (pTVar12->field0_0x0)._s_0.X =
         ((double)uVar8 - (pTVar12->field0_0x0)._s_0.X) * dVar5 + (pTVar12->field0_0x0)._s_0.X;
    (this->Delta).field0_0x0._s_0.Y =
         ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar5 + (this->Delta).field0_0x0._s_0.Y
    ;
    (this->Delta).field0_0x0._s_0.Z = ((double)uVar7 - dVar18) * dVar5 + dVar4;
    goto LAB_14a6e86a4;
  case Interp_Ease_In_Out:
    fVar14 = this->Speed;
    if (__real_3f000000 <= fVar14) {
      fVar14 = powf(__real_3f800000 - ((fVar14 + fVar14) - __real_3f800000),this->EasingExponent);
      fVar15 = (fVar15 - fVar14) + fVar15;
LAB_14a6e845e:
      dVar18 = (double)(fVar15 * fVar13);
    }
    else {
      fVar15 = powf(fVar14 + fVar14,this->EasingExponent);
      dVar18 = (double)(fVar15 * fVar13);
    }
    goto LAB_14a6e82ed;
  case Interp_Expo_In:
    fVar15 = 0.0;
    if (this->Speed != 0.0) {
      fVar15 = powf(__real_40000000,(this->Speed - __real_3f800000) * __real_41200000);
    }
    dVar18 = (double)fVar15;
    goto LAB_14a6e849d;
  case Interp_Expo_Out:
    if (this->Speed != __real_3f800000) {
      fVar13 = powf(__real_40000000,this->Speed * __real_c1200000);
      fVar15 = fVar15 - fVar13;
    }
    dVar18 = (double)fVar15;
    goto LAB_14a6e82ed;
  case Interp_Expo_In_Out:
    fVar14 = this->Speed;
    fVar16 = fVar14 + fVar14;
    if (__real_3f000000 <= fVar14) {
      if (fVar16 - __real_3f800000 == __real_3f800000) {
        dVar18 = (double)((__real_3f800000 + __real_3f800000) * __real_3f000000);
      }
      else {
        fVar14 = powf(__real_40000000,(fVar16 - __real_3f800000) * __real_c1200000);
        dVar18 = (double)(((fVar15 - fVar14) + fVar15) * fVar13);
      }
    }
    else {
      fVar15 = 0.0;
      if (fVar16 == 0.0) goto LAB_14a6e845e;
      fVar15 = powf(__real_40000000,(fVar16 - __real_3f800000) * __real_41200000);
      dVar18 = (double)(fVar15 * fVar13);
    }
LAB_14a6e82ed:
    dVar4 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    dVar5 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18;
    dVar18 = ((double)uVar8 - (this->Delta).field0_0x0._s_0.X) * dVar18;
LAB_14a6e830d:
    dVar19 = (this->Delta).field0_0x0._s_0.Y;
    dVar1 = (this->Delta).field0_0x0._s_0.Z;
    (this->Delta).field0_0x0._s_0.X = dVar18 + (this->Delta).field0_0x0._s_0.X;
    (this->Delta).field0_0x0._s_0.Y = dVar4 + dVar19;
    (this->Delta).field0_0x0._s_0.Z = dVar5 + dVar1;
    goto LAB_14a6e86a4;
  case Interp_Sin_In:
    pTVar12 = &this->Delta;
    fVar15 = cosf(this->Speed * __real_3fc90fdb);
    dVar18 = (double)(__real_3f800000 - fVar15);
    dVar4 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18 +
            (this->Delta).field0_0x0._s_0.Z;
    (pTVar12->field0_0x0)._s_0.X =
         ((double)uVar8 - (pTVar12->field0_0x0)._s_0.X) * dVar18 + (pTVar12->field0_0x0)._s_0.X;
    dVar18 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    break;
  case Interp_Sin_Out:
    fVar15 = sinf(this->Speed * __real_3fc90fdb);
LAB_14a6e8347:
    pTVar12 = &this->Delta;
    dVar18 = (double)fVar15;
    dVar4 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18 +
            (this->Delta).field0_0x0._s_0.Z;
    (pTVar12->field0_0x0)._s_0.X =
         ((double)uVar8 - (pTVar12->field0_0x0)._s_0.X) * dVar18 + (pTVar12->field0_0x0)._s_0.X;
    dVar18 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    break;
  case Interp_Sin_In_Out:
    fVar15 = this->Speed;
    if (__real_3f000000 <= fVar15) {
      fVar15 = sinf(((fVar15 + fVar15) - __real_3f800000) * __real_3fc90fdb);
      dVar18 = (double)((fVar15 + __real_3f800000) * fVar13);
    }
    else {
      fVar15 = cosf((fVar15 + fVar15) * __real_3fc90fdb);
      dVar18 = (double)((__real_3f800000 - fVar15) * fVar13);
    }
LAB_14a6e849d:
    dVar4 = ((double)uVar6 - (this->Delta).field0_0x0._s_0.Y) * dVar18;
    dVar5 = ((double)uVar7 - (this->Delta).field0_0x0._s_0.Z) * dVar18;
    dVar18 = ((double)uVar8 - (this->Delta).field0_0x0._s_0.X) * dVar18;
    goto LAB_14a6e830d;
  default:
    auVar3._8_4_ = (int)uVar6;
    auVar3._0_8_ = uVar8;
    auVar3._12_4_ = uVar17;
    *(undefined1 (*) [16])&(this->Delta).field0_0x0 = auVar3;
    (this->Delta).field0_0x0._s_0.Z = (double)uVar7;
    goto LAB_14a6e86a4;
  }
  (this->Delta).field0_0x0._s_0.Y = dVar18 + (this->Delta).field0_0x0._s_0.Y;
  (this->Delta).field0_0x0._s_0.Z = dVar4;
LAB_14a6e86a4:
  dVar4 = (this->Delta).field0_0x0._s_0.X;
  dVar5 = (this->Delta).field0_0x0._s_0.Y;
  __return_storage_ptr__->ValueType = Axis3D;
  dVar18 = (this->Delta).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar18;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierSmoothDelta @ 14a6fb6b0

void __cdecl UInputModifierSmoothDelta::StaticRegisterNativesUInputModifierSmoothDelta(void)

{
  return;
}

// operator() @ 1505529b0

bool __thiscall
`UInputModifierSmoothDelta::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4172921492431962135>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4172921492431962135>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

