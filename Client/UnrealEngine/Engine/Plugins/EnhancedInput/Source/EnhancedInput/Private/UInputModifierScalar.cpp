// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b5da0

UClass * __cdecl UInputModifierScalar::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierScalar",
               &Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton,
               StaticRegisterNativesUInputModifierScalar,0x40,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierScalar>,
               InternalVTableHelperCtorCaller<UInputModifierScalar>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton;
}

// UInputModifierScalar @ 14a6ccdf0

UInputModifierScalar * __thiscall
UInputModifierScalar::UInputModifierScalar(UInputModifierScalar *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierScalar__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scalar).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scalar).field0_0x0._s_0.Y = (double)uVar1;
  (this->Scalar).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// UInputModifierScalar @ 14a6cce30

UInputModifierScalar * __thiscall
UInputModifierScalar::UInputModifierScalar(UInputModifierScalar *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierScalar__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scalar).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scalar).field0_0x0._s_0.Y = (double)uVar1;
  (this->Scalar).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// ~UInputModifierScalar @ 14a6cf9a0

void __thiscall UInputModifierScalar::~UInputModifierScalar(UInputModifierScalar *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1600

UClass * __cdecl UInputModifierScalar::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierScalar",
               &Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton,
               StaticRegisterNativesUInputModifierScalar,0x40,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierScalar>,
               InternalVTableHelperCtorCaller<UInputModifierScalar>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierScalar.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7bc0

FInputActionValue * __thiscall
UInputModifierScalar::ModifyRaw_Implementation
          (UInputModifierScalar *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  EInputActionValueType EVar5;
  undefined7 uVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  
  if (param_2->ValueType == Boolean) {
    bVar7 = `UInputModifierScalar::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()
                      (local_res20);
    if (!bVar7) {
      dVar1 = (param_2->Value).field0_0x0._s_0.Y;
      dVar2 = (param_2->Value).field0_0x0._s_0.Z;
      EVar5 = param_2->ValueType;
      uVar6 = *(undefined7 *)&param_2->field_0x19;
      (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar2;
      __return_storage_ptr__->ValueType = EVar5;
      *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar6;
      return __return_storage_ptr__;
    }
  }
  dVar4 = (param_2->Value).field0_0x0._s_0.Y;
  dVar1 = (param_2->Value).field0_0x0._s_0.Z;
  dVar2 = (this->Scalar).field0_0x0._s_0.Z;
  dVar3 = (this->Scalar).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X =
       (param_2->Value).field0_0x0._s_0.X * (this->Scalar).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar4 * dVar3;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar1 * dVar2;
  __return_storage_ptr__->ValueType = Axis3D;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierScalar @ 14a6fb680

void __cdecl UInputModifierScalar::StaticRegisterNativesUInputModifierScalar(void)

{
  return;
}

// operator() @ 150552930

bool __thiscall
`UInputModifierScalar::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4172921492431962194>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4172921492431962194>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

