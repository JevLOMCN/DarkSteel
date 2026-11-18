// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b6180

UClass * __cdecl UInputModifierNegate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierNegate",
               &Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton,
               StaticRegisterNativesUInputModifierNegate,0x30,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierNegate>,
               InternalVTableHelperCtorCaller<UInputModifierNegate>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton;
}

// UInputModifierNegate @ 14a6ccc70

UInputModifierNegate * __thiscall
UInputModifierNegate::UInputModifierNegate(UInputModifierNegate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bX = true;
  this->bY = true;
  this->_padding_ = (longlong)&___7UInputModifierNegate__6B_;
  this->bZ = true;
  return this;
}

// UInputModifierNegate @ 14a6cccb0

UInputModifierNegate * __thiscall
UInputModifierNegate::UInputModifierNegate(UInputModifierNegate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bX = true;
  this->bY = true;
  this->_padding_ = (longlong)&___7UInputModifierNegate__6B_;
  this->bZ = true;
  return this;
}

// ~UInputModifierNegate @ 14a6cf940

void __thiscall UInputModifierNegate::~UInputModifierNegate(UInputModifierNegate *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e13c0

UClass * __cdecl UInputModifierNegate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierNegate",
               &Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton,
               StaticRegisterNativesUInputModifierNegate,0x30,8,CLASS_Intrinsic|CLASS_DefaultConfig,
               CASTCLASS_None,L"Input",InternalConstructor<UInputModifierNegate>,
               InternalVTableHelperCtorCaller<UInputModifierNegate>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierNegate.InnerSingleton;
}

// GetVisualizationColor_Implementation @ 14a6e2fe0

FLinearColor * __thiscall
UInputModifierNegate::GetVisualizationColor_Implementation
          (UInputModifierNegate *this,FLinearColor *__return_storage_ptr__,
          FInputActionValue *param_1,FInputActionValue *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  if ((param_1->Value).field0_0x0._s_0.Z == (param_2->Value).field0_0x0._s_0.Z) {
    fVar3 = 0.0;
  }
  fVar1 = __real_3f800000;
  if ((param_1->Value).field0_0x0._s_0.Y == (param_2->Value).field0_0x0._s_0.Y) {
    fVar1 = 0.0;
  }
  fVar2 = __real_3f800000;
  if ((param_1->Value).field0_0x0._s_0.X == (param_2->Value).field0_0x0._s_0.X) {
    fVar2 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// ModifyRaw_Implementation @ 14a6e78d0

FInputActionValue * __thiscall
UInputModifierNegate::ModifyRaw_Implementation
          (UInputModifierNegate *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_2->Value).field0_0x0._s_0.Z;
  dVar2 = (param_2->Value).field0_0x0._s_0.Y;
  dVar5 = __real_3ff0000000000000;
  if (this->bZ != false) {
    dVar5 = __real_bff0000000000000;
  }
  dVar3 = __real_3ff0000000000000;
  if (this->bY != false) {
    dVar3 = __real_bff0000000000000;
  }
  dVar4 = __real_bff0000000000000;
  if (this->bX == false) {
    dVar4 = __real_3ff0000000000000;
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = dVar4 * (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar3 * dVar2;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar5 * dVar1;
  __return_storage_ptr__->ValueType = Axis3D;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierNegate @ 14a6fb650

void __cdecl UInputModifierNegate::StaticRegisterNativesUInputModifierNegate(void)

{
  return;
}

