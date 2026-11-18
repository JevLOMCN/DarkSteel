// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b6b40

UClass * __cdecl UInputModifierToWorldSpace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierToWorldSpace",
               &Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton,
               StaticRegisterNativesUInputModifierToWorldSpace,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierToWorldSpace>,
               InternalVTableHelperCtorCaller<UInputModifierToWorldSpace>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton;
}

// UInputModifierToWorldSpace @ 14a6cd0d0

UInputModifierToWorldSpace * __thiscall
UInputModifierToWorldSpace::UInputModifierToWorldSpace
          (UInputModifierToWorldSpace *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifierToWorldSpace__6B_;
  return this;
}

// UInputModifierToWorldSpace @ 14a6cd100

UInputModifierToWorldSpace * __thiscall
UInputModifierToWorldSpace::UInputModifierToWorldSpace
          (UInputModifierToWorldSpace *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInputModifierToWorldSpace__6B_;
  return this;
}

// ~UInputModifierToWorldSpace @ 14a6cfa40

void __thiscall
UInputModifierToWorldSpace::~UInputModifierToWorldSpace(UInputModifierToWorldSpace *this)

{
  *(undefined ***)this = &___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e19c0

UClass * __cdecl UInputModifierToWorldSpace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierToWorldSpace",
               &Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton,
               StaticRegisterNativesUInputModifierToWorldSpace,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierToWorldSpace>,
               InternalVTableHelperCtorCaller<UInputModifierToWorldSpace>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierToWorldSpace.InnerSingleton;
}

// GetVisualizationColor_Implementation @ 14a6e30b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UInputModifierToWorldSpace::GetVisualizationColor_Implementation
          (UInputModifierToWorldSpace *this,FLinearColor *__return_storage_ptr__,
          FInputActionValue *param_1,FInputActionValue *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  auVar1 = *(undefined1 (*) [16])&(param_1->Value).field0_0x0;
  dVar7 = auVar1._8_8_;
  if (___real_bfe99999a0000000 < dVar7) {
    dVar6 = __real_bfb99999a0000000;
    if (dVar7 < ___real_3fee666660000000) {
      dVar6 = 0.0;
    }
  }
  else {
    dVar6 = dVar7 + __real_3fecccccd0000000;
  }
  dVar7 = auVar1._0_8_;
  if (dVar7 < __real_3fe99999a0000000) {
    dVar2 = __real_bfb99999a0000000;
    if (___real_bfee666660000000 < dVar7) {
      dVar2 = 0.0;
    }
  }
  else {
    dVar2 = __real_3fecccccd0000000 - dVar7;
  }
  fVar3 = __real_3f800000;
  if ((double)((float)dVar2 + __real_3dcccccd) <
      (double)CONCAT44(auVar1._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       auVar1._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    fVar3 = 0.0;
  }
  uVar4 = auVar1._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = auVar1._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  fVar8 = __real_3f800000;
  if ((double)((float)dVar6 + __real_3dcccccd) <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != (double)((float)dVar6 + __real_3dcccccd)) {
    fVar8 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// ModifyRaw_Implementation @ 14a6e8860

FInputActionValue * __thiscall
UInputModifierToWorldSpace::ModifyRaw_Implementation
          (UInputModifierToWorldSpace *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  undefined8 uVar1;
  EInputActionValueType EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar3 = *(undefined8 *)&(param_2->Value).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_2->Value).field0_0x0 + 8);
  EVar2 = param_2->ValueType;
  uVar1 = *(undefined8 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
  __return_storage_ptr__->ValueType = EVar2;
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (EVar2 == Axis2D) {
    uStack_20 = (undefined4)uVar4;
    uStack_1c = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(undefined4 *)&(__return_storage_ptr__->Value).field0_0x0 = uStack_20;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = uStack_1c;
    *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = (int)uVar3;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = uVar5;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x10) = uVar1;
  }
  else {
    if (EVar2 == Axis3D) {
      local_18 = (undefined4)uVar1;
      uStack_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)&(__return_storage_ptr__->Value).field0_0x0 = local_18;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 4) = uStack_14;
      *(int *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = (int)uVar3;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0xc) = uVar5;
      *(undefined8 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x10) = uVar4;
      return __return_storage_ptr__;
    }
    *(undefined8 *)&(__return_storage_ptr__->Value).field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 8) = uVar4;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x10) = uVar1;
    if ((EVar2 == Boolean) || (EVar2 == Axis1D)) {
      (__return_storage_ptr__->Value).field0_0x0._s_0.Y = 0.0;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
    if (EVar2 != Axis2D) {
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierToWorldSpace @ 14a6fb6d0

void __cdecl UInputModifierToWorldSpace::StaticRegisterNativesUInputModifierToWorldSpace(void)

{
  return;
}

