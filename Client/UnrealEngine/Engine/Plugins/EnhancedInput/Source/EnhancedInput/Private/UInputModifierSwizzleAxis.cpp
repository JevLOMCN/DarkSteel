// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b6d20

UClass * __cdecl UInputModifierSwizzleAxis::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSwizzleAxis",
               &Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton,
               StaticRegisterNativesUInputModifierSwizzleAxis,0x30,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierSwizzleAxis>,
               InternalVTableHelperCtorCaller<UInputModifierSwizzleAxis>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton;
}

// UInputModifierSwizzleAxis @ 14a6cd070

UInputModifierSwizzleAxis * __thiscall
UInputModifierSwizzleAxis::UInputModifierSwizzleAxis
          (UInputModifierSwizzleAxis *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Order = YXZ;
  this->_padding_ = (longlong)&___7UInputModifierSwizzleAxis__6B_;
  return this;
}

// UInputModifierSwizzleAxis @ 14a6cd0a0

UInputModifierSwizzleAxis * __thiscall
UInputModifierSwizzleAxis::UInputModifierSwizzleAxis
          (UInputModifierSwizzleAxis *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Order = YXZ;
  this->_padding_ = (longlong)&___7UInputModifierSwizzleAxis__6B_;
  return this;
}

// ~UInputModifierSwizzleAxis @ 14a6cfa20

void __thiscall
UInputModifierSwizzleAxis::~UInputModifierSwizzleAxis(UInputModifierSwizzleAxis *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1900

UClass * __cdecl UInputModifierSwizzleAxis::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierSwizzleAxis",
               &Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton,
               StaticRegisterNativesUInputModifierSwizzleAxis,0x30,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierSwizzleAxis>,
               InternalVTableHelperCtorCaller<UInputModifierSwizzleAxis>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierSwizzleAxis.InnerSingleton;
}

// GetVisualizationColor_Implementation @ 14a6e3060

FLinearColor * __thiscall
UInputModifierSwizzleAxis::GetVisualizationColor_Implementation
          (UInputModifierSwizzleAxis *this,FLinearColor *__return_storage_ptr__,
          FInputActionValue *param_1,FInputActionValue *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f800000;
  dVar1 = (param_1->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  fVar3 = ((float)((uint)(float)dVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) + fVar2) *
          __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar2 - fVar3;
  return __return_storage_ptr__;
}

// ModifyRaw_Implementation @ 14a6e8750

FInputActionValue * __thiscall
UInputModifierSwizzleAxis::ModifyRaw_Implementation
          (UInputModifierSwizzleAxis *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  double dVar1;
  EInputAxisSwizzle EVar2;
  EInputActionValueType EVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double local_18;
  
  uVar4 = *(undefined4 *)&(param_2->Value).field0_0x0;
  uVar5 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
  pdVar7 = &(param_2->Value).field0_0x0._s_0.Y;
  uVar6 = *(undefined4 *)pdVar7;
  uVar8 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
  EVar2 = this->Order;
  dVar1 = *(double *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
  uVar9 = uVar6;
  uVar10 = uVar8;
  uVar12 = uVar4;
  uVar14 = uVar5;
  local_18 = dVar1;
  if (EVar2 != YXZ) {
    uVar11 = SUB84(dVar1,0);
    uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar9 = uVar11;
    uVar10 = uVar13;
    uVar12 = uVar6;
    uVar14 = uVar8;
    local_18 = (param_2->Value).field0_0x0._s_0.X;
    if ((((EVar2 != ZYX) &&
         (uVar9 = uVar4, uVar10 = uVar5, uVar12 = uVar11, uVar14 = uVar13, local_18 = *pdVar7,
         EVar2 != XZY)) &&
        (uVar9 = uVar6, uVar10 = uVar8, local_18 = (param_2->Value).field0_0x0._s_0.X, EVar2 != YZX)
        ) && (uVar9 = uVar4, uVar10 = uVar5, uVar12 = uVar6, uVar14 = uVar8, local_18 = dVar1,
             EVar2 == ZXY)) {
      uVar9 = uVar11;
      uVar10 = uVar13;
      uVar12 = uVar4;
      uVar14 = uVar5;
      local_18 = *pdVar7;
    }
  }
  EVar3 = param_2->ValueType;
  __return_storage_ptr__->ValueType = EVar3;
  *(undefined4 *)&(__return_storage_ptr__->Value).field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = uVar12;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = uVar14;
  *(double *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x10) = local_18;
  if ((EVar3 == Boolean) || (EVar3 == Axis1D)) {
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = 0.0;
  }
  else if (EVar3 != Axis2D) {
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierSwizzleAxis @ 14a6fb6c0

void __cdecl UInputModifierSwizzleAxis::StaticRegisterNativesUInputModifierSwizzleAxis(void)

{
  return;
}

