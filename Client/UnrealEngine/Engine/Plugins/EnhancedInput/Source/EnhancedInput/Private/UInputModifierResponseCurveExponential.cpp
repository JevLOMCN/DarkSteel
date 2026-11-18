// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 7

// StaticClass @ 14a6b6590

UClass * __cdecl UInputModifierResponseCurveExponential::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierResponseCurveExponential",
               &Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton,
               StaticRegisterNativesUInputModifierResponseCurveExponential,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierResponseCurveExponential>,
               InternalVTableHelperCtorCaller<UInputModifierResponseCurveExponential>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton;
}

// UInputModifierResponseCurveExponential @ 14a6cccf0

UInputModifierResponseCurveExponential * __thiscall
UInputModifierResponseCurveExponential::UInputModifierResponseCurveExponential
          (UInputModifierResponseCurveExponential *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierResponseCurveExponential__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurveExponent).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurveExponent).field0_0x0._s_0.Y = (double)uVar1;
  (this->CurveExponent).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// UInputModifierResponseCurveExponential @ 14a6ccd30

UInputModifierResponseCurveExponential * __thiscall
UInputModifierResponseCurveExponential::UInputModifierResponseCurveExponential
          (UInputModifierResponseCurveExponential *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputModifierResponseCurveExponential__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurveExponent).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurveExponent).field0_0x0._s_0.Y = (double)uVar1;
  (this->CurveExponent).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// ~UInputModifierResponseCurveExponential @ 14a6cf960

void __thiscall
UInputModifierResponseCurveExponential::~UInputModifierResponseCurveExponential
          (UInputModifierResponseCurveExponential *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1480

UClass * __cdecl UInputModifierResponseCurveExponential::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierResponseCurveExponential",
               &Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton,
               StaticRegisterNativesUInputModifierResponseCurveExponential,0x40,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierResponseCurveExponential>,
               InternalVTableHelperCtorCaller<UInputModifierResponseCurveExponential>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierResponseCurveExponential.InnerSingleton;
}

// ModifyRaw_Implementation @ 14a6e7950

FInputActionValue * __thiscall
UInputModifierResponseCurveExponential::ModifyRaw_Implementation
          (UInputModifierResponseCurveExponential *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  EInputActionValueType EVar1;
  uint uVar2;
  double dVar3;
  uint uVar5;
  double dVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_68 [16];
  
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  EVar1 = param_2->ValueType;
  dVar4 = (param_2->Value).field0_0x0._s_0.Z;
  uVar2 = SUB84(dVar4,0);
  uVar5 = (uint)((ulonglong)dVar4 >> 0x20);
  local_68 = *(undefined1 (*) [16])&(param_2->Value).field0_0x0;
  uVar6 = local_68._0_4_;
  uVar7 = local_68._4_4_;
  uVar8 = local_68._8_4_;
  uVar9 = local_68._12_4_;
  if (EVar1 != Axis1D) {
    if (EVar1 != Axis2D) {
      if (EVar1 != Axis3D) goto LAB_14a6e7a79;
      dVar3 = (this->CurveExponent).field0_0x0._s_0.Z;
      if (dVar3 != __real_3ff0000000000000) {
        dVar3 = pow((double)CONCAT44(uVar5 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff),dVar3);
        if (dVar4 <= 0.0) {
          if (0.0 <= dVar4) {
            dVar3 = 0.0;
          }
          else {
            dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                                     __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
          }
        }
        uVar2 = SUB84(dVar3,0);
        uVar5 = (uint)((ulonglong)dVar3 >> 0x20);
      }
    }
    dVar4 = (this->CurveExponent).field0_0x0._s_0.Y;
    if (dVar4 != __real_3ff0000000000000) {
      dVar4 = pow((double)CONCAT44(uVar9 & uVar11,uVar8 & uVar10),dVar4);
      if (local_68._8_8_ <= 0.0) {
        if (0.0 <= local_68._8_8_) {
          dVar4 = 0.0;
        }
        else {
          dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
        }
      }
      uVar8 = SUB84(dVar4,0);
      uVar9 = (uint)((ulonglong)dVar4 >> 0x20);
      local_68._8_4_ = uVar8;
      local_68._12_4_ = uVar9;
      uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
  }
  dVar4 = (this->CurveExponent).field0_0x0._s_0.X;
  if (dVar4 != __real_3ff0000000000000) {
    dVar4 = pow((double)CONCAT44(local_68._4_4_ & uVar11,local_68._0_4_ & uVar10),dVar4);
    if ((double)local_68._0_8_ <= 0.0) {
      if (0.0 <= (double)local_68._0_8_) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
      }
    }
    uVar6 = SUB84(dVar4,0);
    uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar8 = local_68._8_4_;
    uVar9 = local_68._12_4_;
  }
LAB_14a6e7a79:
  *(undefined4 *)&(__return_storage_ptr__->Value).field0_0x0 = uVar6;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = uVar7;
  *(uint *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = uVar8;
  *(uint *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = uVar9;
  __return_storage_ptr__->ValueType = Axis3D;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = (double)CONCAT44(uVar5,uVar2);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierResponseCurveExponential @ 14a6fb660

void __cdecl
UInputModifierResponseCurveExponential::StaticRegisterNativesUInputModifierResponseCurveExponential
          (void)

{
  return;
}

