// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b6400

UClass * __cdecl UInputModifierSmooth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSmooth",
               &Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton,
               StaticRegisterNativesUInputModifierSmooth,0x58,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierSmooth>,
               InternalVTableHelperCtorCaller<UInputModifierSmooth>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton;
}

// UInputModifierSmooth @ 14a6cced0

UInputModifierSmooth * __thiscall
UInputModifierSmooth::UInputModifierSmooth(UInputModifierSmooth *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierSmooth__6B_;
  this->ZeroTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AverageValue).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AverageValue).Value.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AverageValue).ValueType = Boolean;
  (this->AverageValue).Value.field0_0x0._s_0.Z = (double)uVar1;
  this->Samples = 0;
  this->TotalSampleTime = 0.0083;
  return this;
}

// UInputModifierSmooth @ 14a6ccf30

UInputModifierSmooth * __thiscall
UInputModifierSmooth::UInputModifierSmooth(UInputModifierSmooth *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierSmooth__6B_;
  this->ZeroTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AverageValue).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AverageValue).Value.field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->AverageValue).ValueType = Boolean;
  (this->AverageValue).Value.field0_0x0._s_0.Z = (double)uVar1;
  this->Samples = 0;
  this->TotalSampleTime = 0.0083;
  return this;
}

// ~UInputModifierSmooth @ 14a6cf9e0

void __thiscall UInputModifierSmooth::~UInputModifierSmooth(UInputModifierSmooth *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearSmoothedAxis @ 14a6d6730

void __thiscall UInputModifierSmooth::ClearSmoothedAxis(UInputModifierSmooth *this)

{
  undefined8 uVar1;
  
  this->ZeroTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AverageValue).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AverageValue).Value.field0_0x0._s_0.Y = (double)uVar1;
  (this->AverageValue).Value.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Samples = 0;
  this->TotalSampleTime = 0.0083;
  return;
}

// GetPrivateStaticClass @ 14a6e1780

UClass * __cdecl UInputModifierSmooth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSmooth",
               &Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton,
               StaticRegisterNativesUInputModifierSmooth,0x58,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierSmooth>,
               InternalVTableHelperCtorCaller<UInputModifierSmooth>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSmooth.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7d00

FInputActionValue * __thiscall
UInputModifierSmooth::ModifyRaw_Implementation
          (UInputModifierSmooth *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  float *pfVar1;
  double dVar2;
  EInputActionValueType EVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined7 uVar11;
  bool bVar12;
  FInputActionValue *pFVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double local_78;
  undefined7 uStack_6f;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  fVar14 = FInputActionValue::GetMagnitudeSq(&this->AverageValue);
  if (fVar14 != 0.0) {
    this->Samples = this->Samples + 1;
    this->TotalSampleTime = param_3 + this->TotalSampleTime;
  }
  if (__real_3e800000 <= param_3) {
    this->ZeroTime = 0.0;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->AverageValue).Value.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->AverageValue).Value.field0_0x0._s_0.Y = (double)uVar10;
    (this->AverageValue).Value.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this->Samples = 0;
    this->TotalSampleTime = 0.0083;
    goto LAB_14a6e7f2e;
  }
  if ((this->Samples < 1) || (this->TotalSampleTime <= 0.0)) goto LAB_14a6e7f2e;
  fVar14 = this->TotalSampleTime / (float)this->Samples;
  if ((fVar14 <= 0.0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AxisSamplingTime > 0.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\InputModifiers.cpp"
                          ,0x10b,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FInputActionValue *)(*pcVar4)();
    return pFVar13;
  }
  pfVar1 = &this->ZeroTime;
  fVar15 = FInputActionValue::GetMagnitudeSq(param_2);
  if (fVar15 != 0.0) {
    *pfVar1 = 0.0;
    fVar15 = FInputActionValue::GetMagnitudeSq(&this->AverageValue);
    if ((fVar15 != 0.0) && (param_3 < fVar14 + fVar14)) {
      dVar7 = (param_2->Value).field0_0x0._s_0.Y;
      dVar18 = (double)(param_3 / fVar14);
      dVar2 = (param_2->Value).field0_0x0._s_0.Z;
      (param_2->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X * dVar18;
      (param_2->Value).field0_0x0._s_0.Y = dVar7 * dVar18;
      (param_2->Value).field0_0x0._s_0.Z = dVar18 * dVar2;
    }
    dVar2 = (param_2->Value).field0_0x0._s_0.Y;
    dVar7 = (param_2->Value).field0_0x0._s_0.Z;
    EVar3 = param_2->ValueType;
    uVar11 = *(undefined7 *)&param_2->field_0x19;
    (this->AverageValue).Value.field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
    (this->AverageValue).Value.field0_0x0._s_0.Y = dVar2;
    (this->AverageValue).Value.field0_0x0._s_0.Z = dVar7;
    (this->AverageValue).ValueType = EVar3;
    *(undefined7 *)&(this->AverageValue).field_0x19 = uVar11;
    goto LAB_14a6e7f2e;
  }
  fVar15 = *pfVar1;
  if (fVar14 <= fVar15) {
    *pfVar1 = 0.0;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->AverageValue).Value.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->AverageValue).Value.field0_0x0._s_0.Y = (double)uVar10;
    (this->AverageValue).Value.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *pfVar1 = param_3 + 0.0;
    this->Samples = 0;
    this->TotalSampleTime = 0.0083;
    goto LAB_14a6e7f2e;
  }
  EVar3 = param_2->ValueType;
  if ((this->AverageValue).ValueType != EVar3) {
    local_78 = (this->AverageValue).Value.field0_0x0._s_0.Z;
    uVar8 = *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 4);
    uVar16 = *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 8);
    uVar17 = *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 0xc);
    if ((EVar3 == Boolean) || (EVar3 == Axis1D)) {
      uVar16 = 0;
      uVar17 = 0;
LAB_14a6e7e71:
      local_78 = 0.0;
    }
    else if (EVar3 == Axis2D) goto LAB_14a6e7e71;
    *(undefined4 *)&(this->AverageValue).Value.field0_0x0 =
         *(undefined4 *)&(this->AverageValue).Value.field0_0x0;
    *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 4) = uVar8;
    *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 8) = uVar16;
    *(undefined4 *)((longlong)&(this->AverageValue).Value.field0_0x0 + 0xc) = uVar17;
    (this->AverageValue).Value.field0_0x0._s_0.Z = local_78;
    *(ulonglong *)&(this->AverageValue).ValueType = CONCAT71(uStack_6f,EVar3);
  }
  dVar7 = (this->AverageValue).Value.field0_0x0._s_0.X;
  dVar18 = (this->AverageValue).Value.field0_0x0._s_0.Y;
  dVar9 = (this->AverageValue).Value.field0_0x0._s_0.Z;
  uVar10 = *(undefined8 *)&(this->AverageValue).ValueType;
  dVar2 = (double)(param_3 / fVar14);
  this->ZeroTime = fVar15 + param_3;
  dVar18 = dVar18 * dVar2;
  uStack_50 = (undefined4)uVar10;
  uStack_4c = (undefined4)((ulonglong)uVar10 >> 0x20);
  auVar6._8_4_ = SUB84(dVar18,0);
  auVar6._0_8_ = dVar7 * dVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])&(param_2->Value).field0_0x0 = auVar6;
  auVar5._8_4_ = uStack_50;
  auVar5._0_8_ = dVar9 * dVar2;
  auVar5._12_4_ = uStack_4c;
  *(undefined1 (*) [16])((longlong)&(param_2->Value).field0_0x0 + 0x10) = auVar5;
LAB_14a6e7f2e:
  dVar2 = (param_2->Value).field0_0x0._s_0.Y;
  dVar7 = (param_2->Value).field0_0x0._s_0.Z;
  EVar3 = param_2->ValueType;
  uVar11 = *(undefined7 *)&param_2->field_0x19;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar7;
  __return_storage_ptr__->ValueType = EVar3;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar11;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierSmooth @ 14a6fb6a0

void __cdecl UInputModifierSmooth::StaticRegisterNativesUInputModifierSmooth(void)

{
  return;
}

