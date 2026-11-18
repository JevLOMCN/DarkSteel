// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 8

// StaticClass @ 14a6b5b40

UClass * __cdecl UInputModifierDeadZone::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierDeadZone",
               &Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton,
               StaticRegisterNativesUInputModifierDeadZone,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierDeadZone>,
               InternalVTableHelperCtorCaller<UInputModifierDeadZone>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton;
}

// UInputModifierDeadZone @ 14a6ccb70

UInputModifierDeadZone * __thiscall
UInputModifierDeadZone::UInputModifierDeadZone(UInputModifierDeadZone *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LowerThreshold = 0.2;
  this->_padding_ = (longlong)&___7UInputModifierDeadZone__6B_;
  this->UpperThreshold = 1.0;
  this->Type = Radial;
  return this;
}

// UInputModifierDeadZone @ 14a6ccbb0

UInputModifierDeadZone * __thiscall
UInputModifierDeadZone::UInputModifierDeadZone
          (UInputModifierDeadZone *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->LowerThreshold = 0.2;
  this->_padding_ = (longlong)&___7UInputModifierDeadZone__6B_;
  this->UpperThreshold = 1.0;
  this->Type = Radial;
  return this;
}

// ~UInputModifierDeadZone @ 14a6cf900

void __thiscall UInputModifierDeadZone::~UInputModifierDeadZone(UInputModifierDeadZone *this)

{
  this->_padding_ = (longlong)&___7UInputModifier__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1240

UClass * __cdecl UInputModifierDeadZone::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputModifierDeadZone",
               &Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton,
               StaticRegisterNativesUInputModifierDeadZone,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputModifierDeadZone>,
               InternalVTableHelperCtorCaller<UInputModifierDeadZone>,local_res8,
               UInputModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputModifierDeadZone.InnerSingleton;
}

// GetVisualizationColor_Implementation @ 14a6e2f60

FLinearColor * __thiscall
UInputModifierDeadZone::GetVisualizationColor_Implementation
          (UInputModifierDeadZone *this,FLinearColor *__return_storage_ptr__,
          FInputActionValue *param_1,FInputActionValue *param_2)

{
  float fVar1;
  float fVar2;
  
  if ((param_2->ValueType != Boolean) && (param_2->ValueType != Axis1D)) {
    fVar2 = __real_3f000000;
    if ((param_2->Value).field0_0x0._s_0.X != 0.0) {
      fVar2 = 0.0;
    }
    fVar1 = __real_3f000000;
    if ((param_2->Value).field0_0x0._s_0.Y != 0.0) {
      fVar1 = 0.0;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.R = fVar1 + fVar2;
    return __return_storage_ptr__;
  }
  fVar2 = 0.0;
  if ((float)(param_2->Value).field0_0x0._s_0.X == 0.0) {
    fVar2 = __real_3f800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar2;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  return __return_storage_ptr__;
}

// ModifyRaw_Implementation @ 14a6e70f0

FInputActionValue * __thiscall
UInputModifierDeadZone::ModifyRaw_Implementation
          (UInputModifierDeadZone *this,FInputActionValue *__return_storage_ptr__,
          UEnhancedPlayerInput *param_1,FInputActionValue *param_2,float param_3)

{
  EInputActionValueType EVar1;
  EDeadZoneType EVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined7 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  double dVar16;
  double local_58;
  
  EVar1 = param_2->ValueType;
  if (EVar1 == Boolean) {
    dVar13 = (param_2->Value).field0_0x0._s_0.Y;
    dVar3 = (param_2->Value).field0_0x0._s_0.Z;
    EVar1 = param_2->ValueType;
    uVar6 = *(undefined7 *)&param_2->field_0x19;
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar13;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar3;
    __return_storage_ptr__->ValueType = EVar1;
    *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar6;
    return __return_storage_ptr__;
  }
  dVar13 = (param_2->Value).field0_0x0._s_0.X;
  dVar3 = (param_2->Value).field0_0x0._s_0.Y;
  EVar2 = this->Type;
  local_58 = (param_2->Value).field0_0x0._s_0.Z;
  if (EVar2 == Axial) {
    fVar9 = this->LowerThreshold;
    fVar8 = (float)dVar13;
    fVar15 = __real_3f800000 / (this->UpperThreshold - fVar9);
    fVar7 = (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar9;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar10 = fVar7 * fVar15;
    if (__real_3f800000 <= fVar7 * fVar15) {
      fVar10 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      if (0.0 <= fVar8) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
      }
    }
    dVar13 = (double)fVar10;
    fVar8 = (float)dVar3;
    fVar7 = (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar9;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar10 = fVar7 * fVar15;
    if (__real_3f800000 <= fVar7 * fVar15) {
      fVar10 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      if (0.0 <= fVar8) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000);
      }
    }
    dVar3 = (double)fVar10;
    fVar7 = (float)local_58;
    fVar9 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar9;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar8 = fVar9 * fVar15;
    if (__real_3f800000 <= fVar9 * fVar15) {
      fVar8 = __real_3f800000;
    }
    if (fVar7 <= 0.0) {
      if (0.0 <= fVar7) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
      }
    }
    local_58 = (double)fVar8;
    goto LAB_14a6e76d6;
  }
  if (EVar2 == Radial) {
    if (EVar1 == Axis3D) {
      dVar16 = dVar3 * dVar3 + dVar13 * dVar13 + local_58 * local_58;
      if (dVar16 == __real_3ff0000000000000) {
        uVar14 = dVar13;
        uVar5 = dVar3;
        uVar11 = (param_2->Value).field0_0x0._s_0.Z;
      }
      else {
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (__real_3e45798ee0000000 <= dVar16) {
          dVar12 = __real_3ff0000000000000 / SQRT(dVar16);
          uVar14 = dVar12 * dVar13;
          uVar5 = dVar3 * dVar12;
          uVar11 = dVar12 * local_58;
        }
      }
      fVar7 = (float)SQRT(dVar16);
      fVar9 = fVar7 - this->LowerThreshold;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 / (this->UpperThreshold - this->LowerThreshold);
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        if (0.0 <= fVar7) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
        }
      }
      local_58 = (double)fVar9;
      dVar13 = (double)uVar14 * local_58;
      dVar3 = (double)uVar5 * local_58;
      local_58 = (double)uVar11 * local_58;
    }
    else if (EVar1 == Axis2D) {
      dVar16 = dVar3 * dVar3 + dVar13 * dVar13;
      if (dVar16 == __real_3ff0000000000000) {
        uVar14 = 0.0;
        uVar11 = dVar13;
        uVar5 = dVar3;
        if (local_58 == 0.0) {
          uVar14 = (param_2->Value).field0_0x0._s_0.Z;
        }
      }
      else {
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (__real_3e45798ee0000000 <= dVar16) {
          uVar11 = (__real_3ff0000000000000 / SQRT(dVar16)) * dVar13;
          uVar14 = 0.0;
          uVar5 = dVar3 * (__real_3ff0000000000000 / SQRT(dVar16));
        }
      }
      fVar7 = (float)SQRT(dVar16);
      fVar9 = fVar7 - this->LowerThreshold;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 / (this->UpperThreshold - this->LowerThreshold);
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        if (0.0 <= fVar7) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
        }
      }
      local_58 = (double)fVar9;
      dVar3 = (double)uVar5 * local_58;
      dVar13 = local_58 * (double)uVar11;
      local_58 = (double)uVar14 * local_58;
    }
    else {
      fVar7 = (float)dVar13;
      fVar9 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) - this->LowerThreshold;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 / (this->UpperThreshold - this->LowerThreshold);
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        if (fVar7 < 0.0) {
          dVar13 = (double)(float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
          goto LAB_14a6e76d6;
        }
        fVar9 = 0.0;
      }
      dVar13 = (double)fVar9;
    }
    goto LAB_14a6e76d6;
  }
  if (EVar2 != UnscaledRadial) goto LAB_14a6e76d6;
  if (EVar1 == Axis3D) {
    dVar16 = dVar3 * dVar3 + dVar13 * dVar13 + local_58 * local_58;
    if (dVar16 == __real_3ff0000000000000) {
      uVar14 = dVar13;
      uVar5 = dVar3;
      uVar11 = (param_2->Value).field0_0x0._s_0.Z;
    }
    else {
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar16) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar16);
        uVar14 = dVar12 * dVar13;
        uVar5 = dVar12 * dVar3;
        uVar11 = dVar12 * local_58;
      }
    }
    fVar9 = (float)SQRT(dVar16);
    if (fVar9 < this->LowerThreshold) {
LAB_14a6e7226:
      fVar7 = 0.0;
    }
    else {
      fVar7 = this->UpperThreshold;
      if (fVar9 <= this->UpperThreshold) {
        fVar7 = fVar9;
      }
      if (fVar9 <= 0.0) {
        if (0.0 <= fVar9) goto LAB_14a6e7226;
        fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
      }
    }
    local_58 = (double)fVar7;
    dVar13 = (double)uVar14 * local_58;
    dVar3 = (double)uVar5 * local_58;
    local_58 = (double)uVar11 * local_58;
    goto LAB_14a6e76d6;
  }
  if (EVar1 == Axis2D) {
    dVar16 = dVar3 * dVar3 + dVar13 * dVar13;
    if (dVar16 == __real_3ff0000000000000) {
      uVar11 = 0.0;
      uVar14 = dVar13;
      uVar5 = dVar3;
      if (local_58 == 0.0) {
        uVar11 = (param_2->Value).field0_0x0._s_0.Z;
      }
    }
    else {
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee0000000 <= dVar16) {
        uVar11 = 0.0;
        uVar14 = (__real_3ff0000000000000 / SQRT(dVar16)) * dVar13;
        uVar5 = (__real_3ff0000000000000 / SQRT(dVar16)) * dVar3;
      }
    }
    fVar9 = (float)SQRT(dVar16);
    if (fVar9 < this->LowerThreshold) {
LAB_14a6e7312:
      fVar7 = 0.0;
    }
    else {
      fVar7 = this->UpperThreshold;
      if (fVar9 <= this->UpperThreshold) {
        fVar7 = fVar9;
      }
      if (fVar9 <= 0.0) {
        if (0.0 <= fVar9) goto LAB_14a6e7312;
        fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
      }
    }
    local_58 = (double)fVar7;
    dVar13 = (double)uVar14 * local_58;
    dVar3 = (double)uVar5 * local_58;
    local_58 = (double)uVar11 * local_58;
    goto LAB_14a6e76d6;
  }
  fVar7 = (float)dVar13;
  fVar9 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar9 < this->LowerThreshold) {
LAB_14a6e7378:
    fVar8 = 0.0;
  }
  else {
    fVar8 = this->UpperThreshold;
    if (fVar9 <= this->UpperThreshold) {
      fVar8 = fVar9;
    }
    if (fVar7 <= 0.0) {
      if (fVar7 < 0.0) {
        dVar13 = (double)(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
        goto LAB_14a6e76d6;
      }
      goto LAB_14a6e7378;
    }
  }
  dVar13 = (double)fVar8;
LAB_14a6e76d6:
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar13;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Value).field0_0x0 = auVar4;
  __return_storage_ptr__->ValueType = Axis3D;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = local_58;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInputModifierDeadZone @ 14a6fb630

void __cdecl UInputModifierDeadZone::StaticRegisterNativesUInputModifierDeadZone(void)

{
  return;
}

