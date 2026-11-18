// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b5f30

UClass * __cdecl UInputModifierScaleByDeltaTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierScaleByDeltaTime",
               &Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton,
               StaticRegisterNativesUInputModifierScaleByDeltaTime,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierScaleByDeltaTime>,
               InternalVTableHelperCtorCaller<UInputModifierScaleByDeltaTime>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton;
}

// UInputModifierScaleByDeltaTime @ 14a6cce70

UInputModifierScaleByDeltaTime * __thiscall
UInputModifierScaleByDeltaTime::UInputModifierScaleByDeltaTime
          (UInputModifierScaleByDeltaTime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifierScaleByDeltaTime__6B_;
  return this;
}

// UInputModifierScaleByDeltaTime @ 14a6ccea0

UInputModifierScaleByDeltaTime * __thiscall
UInputModifierScaleByDeltaTime::UInputModifierScaleByDeltaTime
          (UInputModifierScaleByDeltaTime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifierScaleByDeltaTime__6B_;
  return this;
}

// ~UInputModifierScaleByDeltaTime @ 14a6cf9c0

void __thiscall
UInputModifierScaleByDeltaTime::~UInputModifierScaleByDeltaTime
          (UInputModifierScaleByDeltaTime *this)

{
  *(undefined ***)this = &___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e16c0

UClass * __cdecl UInputModifierScaleByDeltaTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierScaleByDeltaTime",
               &Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton,
               StaticRegisterNativesUInputModifierScaleByDeltaTime,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierScaleByDeltaTime>,
               InternalVTableHelperCtorCaller<UInputModifierScaleByDeltaTime>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierScaleByDeltaTime.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7c60

FInputActionValue * __thiscall
UInputModifierScaleByDeltaTime::ModifyRaw_Implementation
          (UInputModifierScaleByDeltaTime *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  EInputActionValueType EVar3;
  undefined7 uVar4;
  bool bVar5;
  double dVar6;
  undefined1 local_res20 [8];
  
  if (param_2->ValueType == Boolean) {
    bVar5 = `UInputModifierScaleByDeltaTime::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()
                      (local_res20);
    if (!bVar5) {
      dVar1 = (param_2->Value).field0_0x0._s_0.Y;
      dVar2 = (param_2->Value).field0_0x0._s_0.Z;
      EVar3 = param_2->ValueType;
      uVar4 = *(undefined7 *)&param_2->field_0x19;
      (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar1;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar2;
      __return_storage_ptr__->ValueType = EVar3;
      *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
      return __return_storage_ptr__;
    }
  }
  dVar2 = (param_2->Value).field0_0x0._s_0.Y;
  dVar1 = (param_2->Value).field0_0x0._s_0.Z;
  dVar6 = (double)param_3;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = dVar6 * (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar6 * dVar2;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar6 * dVar1;
  __return_storage_ptr__->ValueType = Axis3D;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierScaleByDeltaTime @ 14a6fb690

void __cdecl
UInputModifierScaleByDeltaTime::StaticRegisterNativesUInputModifierScaleByDeltaTime(void)

{
  return;
}

// operator() @ 150552970

bool __thiscall
`UInputModifierScaleByDeltaTime::ModifyRaw_Implementation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4172921492431962208>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4172921492431962208>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

