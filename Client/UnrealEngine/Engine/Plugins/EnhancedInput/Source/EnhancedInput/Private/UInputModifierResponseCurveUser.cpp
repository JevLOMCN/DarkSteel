// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b67e0

UClass * __cdecl UInputModifierResponseCurveUser::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierResponseCurveUser",
               &Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton,
               StaticRegisterNativesUInputModifierResponseCurveUser,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierResponseCurveUser>,
               InternalVTableHelperCtorCaller<UInputModifierResponseCurveUser>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton;
}

// UInputModifierResponseCurveUser @ 14a6ccd70

UInputModifierResponseCurveUser * __thiscall
UInputModifierResponseCurveUser::UInputModifierResponseCurveUser
          (UInputModifierResponseCurveUser *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierResponseCurveUser__6B_;
  (this->ResponseX).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->ResponseY).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->ResponseZ).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  return this;
}

// UInputModifierResponseCurveUser @ 14a6ccdb0

UInputModifierResponseCurveUser * __thiscall
UInputModifierResponseCurveUser::UInputModifierResponseCurveUser
          (UInputModifierResponseCurveUser *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierResponseCurveUser__6B_;
  (this->ResponseX).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->ResponseY).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->ResponseZ).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  return this;
}

// ~UInputModifierResponseCurveUser @ 14a6cf980

void __thiscall
UInputModifierResponseCurveUser::~UInputModifierResponseCurveUser
          (UInputModifierResponseCurveUser *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1540

UClass * __cdecl UInputModifierResponseCurveUser::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierResponseCurveUser",
               &Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton,
               StaticRegisterNativesUInputModifierResponseCurveUser,0x40,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierResponseCurveUser>,
               InternalVTableHelperCtorCaller<UInputModifierResponseCurveUser>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierResponseCurveUser.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7ac0

FInputActionValue * __thiscall
UInputModifierResponseCurveUser::ModifyRaw_Implementation
          (UInputModifierResponseCurveUser *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  EInputActionValueType EVar2;
  UCurveFloat *pUVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  
  EVar2 = param_2->ValueType;
  fVar6 = 0.0;
  dVar1 = (param_2->Value).field0_0x0._s_0.Z;
  _local_58 = *(undefined1 (*) [16])&(param_2->Value).field0_0x0;
  if ((EVar2 != Boolean) && (EVar2 != Axis1D)) {
    if (EVar2 != Axis2D) {
      if (EVar2 != Axis3D) goto LAB_14a6e7b86;
      pUVar3 = (this->ResponseZ).field0_0x0.DebugPtr;
      if (pUVar3 == (UCurveFloat *)0x0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = UCurveFloat::GetFloatValue(pUVar3,(float)dVar1);
      }
      dVar1 = (double)fVar5;
    }
    pUVar3 = (this->ResponseY).field0_0x0.DebugPtr;
    if (pUVar3 == (UCurveFloat *)0x0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = UCurveFloat::GetFloatValue(pUVar3,(float)local_58._8_8_);
    }
    stack0xffffffffffffffb0 = (double)fVar5;
  }
  pUVar3 = (this->ResponseX).field0_0x0.DebugPtr;
  if (pUVar3 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(pUVar3,(float)(double)local_58._0_8_);
  }
  local_58._0_8_ = (undefined8)fVar6;
LAB_14a6e7b86:
  auVar4._8_4_ = local_58._8_4_;
  auVar4._0_8_ = local_58._0_8_;
  auVar4._12_4_ = uStack_4c;
  *(undefined1 (*) [16])&(__return_storage_ptr__->Value).field0_0x0 = auVar4;
  __return_storage_ptr__->ValueType = Axis3D;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierResponseCurveUser @ 14a6fb670

void __cdecl
UInputModifierResponseCurveUser::StaticRegisterNativesUInputModifierResponseCurveUser(void)

{
  return;
}

