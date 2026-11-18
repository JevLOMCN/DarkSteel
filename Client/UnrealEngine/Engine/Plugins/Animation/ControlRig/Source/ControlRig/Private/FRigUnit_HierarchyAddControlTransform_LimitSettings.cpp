// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a481180

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlTransform_LimitSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings
                         ,(UObject *)pUVar1,L"RigUnit_HierarchyAddControlTransform_LimitSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings.
         OuterSingleton;
}

// FRigUnit_HierarchyAddControlTransform_LimitSettings @ 14a510b10

FRigUnit_HierarchyAddControlTransform_LimitSettings * __thiscall
FRigUnit_HierarchyAddControlTransform_LimitSettings::
FRigUnit_HierarchyAddControlTransform_LimitSettings
          (FRigUnit_HierarchyAddControlTransform_LimitSettings *this)

{
  (this->LimitTranslationX).bMinimum = false;
  (this->LimitTranslationX).bMaximum = false;
  (this->LimitTranslationY).bMinimum = false;
  (this->LimitTranslationY).bMaximum = false;
  (this->LimitTranslationZ).bMinimum = false;
  (this->LimitTranslationZ).bMaximum = false;
  (this->LimitPitch).bMinimum = false;
  (this->LimitPitch).bMaximum = false;
  (this->LimitYaw).bMinimum = false;
  (this->LimitYaw).bMaximum = false;
  (this->LimitRoll).bMinimum = false;
  (this->LimitRoll).bMaximum = false;
  (this->LimitScaleX).bMinimum = false;
  (this->LimitScaleX).bMaximum = false;
  (this->LimitScaleY).bMinimum = false;
  (this->LimitScaleY).bMaximum = false;
  (this->LimitScaleZ).bMinimum = false;
  (this->LimitScaleZ).bMaximum = false;
  (this->MinValue).Location.field0_0x0._s_0.X = -100.0;
  (this->MinValue).Location.field0_0x0._s_0.Y = -100.0;
  (this->MinValue).Location.field0_0x0._s_0.Z = -100.0;
  (this->MinValue).Rotation.Pitch = -180.0;
  (this->MinValue).Rotation.Yaw = -180.0;
  (this->MinValue).Rotation.Roll = -180.0;
  (this->MinValue).Scale.field0_0x0._s_0.X = 0.0;
  (this->MinValue).Scale.field0_0x0._s_0.Y = 0.0;
  (this->MinValue).Scale.field0_0x0._s_0.Z = 0.0;
  (this->MaxValue).Location.field0_0x0._s_0.X = 100.0;
  (this->MaxValue).Location.field0_0x0._s_0.Y = 100.0;
  (this->MaxValue).Location.field0_0x0._s_0.Z = 100.0;
  (this->MaxValue).Rotation.Pitch = 180.0;
  (this->MaxValue).Rotation.Yaw = 180.0;
  (this->MaxValue).Rotation.Roll = 180.0;
  (this->MaxValue).Scale.field0_0x0._s_0.X = 10.0;
  (this->MaxValue).Scale.field0_0x0._s_0.Y = 10.0;
  (this->MaxValue).Scale.field0_0x0._s_0.Z = 10.0;
  this->bDrawLimits = true;
  return this;
}

// Configure @ 14a51f7f0

void __thiscall
FRigUnit_HierarchyAddControlTransform_LimitSettings::Configure
          (FRigUnit_HierarchyAddControlTransform_LimitSettings *this,FRigControlSettings *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FRigControlLimitEnabled FVar9;
  code *pcVar10;
  ulonglong uVar11;
  bool bVar12;
  
  FRigControlSettings::SetupLimitArrayForType(param_1,false,false,false);
  switch(param_1->ControlType) {
  case Transform:
  case EulerTransform:
    FVar9 = this->LimitScaleX;
    if (((param_1->LimitEnabled).ArrayNum < 7) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 0xc) = FVar9;
    FVar9 = this->LimitScaleY;
    if (((param_1->LimitEnabled).ArrayNum < 8) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 0xe) = FVar9;
    FVar9 = this->LimitScaleZ;
    if (((param_1->LimitEnabled).ArrayNum < 9) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 0x10) = FVar9;
  case TransformNoScale:
    FVar9 = this->LimitPitch;
    if (((param_1->LimitEnabled).ArrayNum < 4) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 6) = FVar9;
    FVar9 = this->LimitYaw;
    if (((param_1->LimitEnabled).ArrayNum < 5) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 8) = FVar9;
    FVar9 = this->LimitRoll;
    if (((param_1->LimitEnabled).ArrayNum < 6) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 10) = FVar9;
  case Position:
  case Scale:
  case Rotator:
    FVar9 = this->LimitTranslationZ;
    if (((param_1->LimitEnabled).ArrayNum < 3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 4) = FVar9;
  case Vector2D:
    FVar9 = this->LimitTranslationY;
    if (((param_1->LimitEnabled).ArrayNum < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 2) = FVar9;
  case Float:
  case Integer:
  case ScaleFloat:
    FVar9 = this->LimitTranslationX;
    if (((param_1->LimitEnabled).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar9;
  default:
    dVar1 = (this->MinValue).Rotation.Yaw;
    dVar2 = (this->MinValue).Rotation.Roll;
    dVar3 = (this->MinValue).Location.field0_0x0._s_0.X;
    dVar4 = (this->MinValue).Location.field0_0x0._s_0.Y;
    dVar5 = (this->MinValue).Location.field0_0x0._s_0.Z;
    dVar6 = (this->MinValue).Scale.field0_0x0._s_0.X;
    dVar7 = (this->MinValue).Scale.field0_0x0._s_0.Y;
    dVar8 = (this->MinValue).Scale.field0_0x0._s_0.Z;
    (param_1->MinimumValue).FloatStorage.Float00 = (float)(this->MinValue).Rotation.Pitch;
    (param_1->MinimumValue).FloatStorage.Float01 = (float)dVar1;
    (param_1->MinimumValue).FloatStorage.Float02 = (float)dVar2;
    (param_1->MinimumValue).FloatStorage.Float03 = (float)dVar3;
    uVar11 = (ulonglong)(uint)(float)dVar8;
    (param_1->MinimumValue).FloatStorage.Float10 = (float)dVar4;
    (param_1->MinimumValue).FloatStorage.Float11 = (float)dVar5;
    (param_1->MinimumValue).FloatStorage.Float12 = (float)dVar6;
    (param_1->MinimumValue).FloatStorage.Float13 = (float)dVar7;
    (param_1->MinimumValue).FloatStorage.Float20 = (float)(int)uVar11;
    (param_1->MinimumValue).FloatStorage.Float21 = (float)(int)(uVar11 >> 0x20);
    (param_1->MinimumValue).FloatStorage.Float22 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float23 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float30 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float31 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float32 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float33 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float00_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float01_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float02_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float03_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float10_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float11_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float12_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float13_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float20_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float21_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float22_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float23_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float30_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float31_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float32_2 = 0.0;
    (param_1->MinimumValue).FloatStorage.Float33_2 = 0.0;
    *(undefined4 *)&(param_1->MinimumValue).FloatStorage.bValid = 1;
    dVar1 = (this->MaxValue).Rotation.Roll;
    dVar2 = (this->MaxValue).Location.field0_0x0._s_0.X;
    dVar3 = (this->MaxValue).Location.field0_0x0._s_0.Y;
    dVar4 = (this->MaxValue).Location.field0_0x0._s_0.Z;
    dVar5 = (this->MaxValue).Rotation.Yaw;
    dVar6 = (this->MaxValue).Scale.field0_0x0._s_0.X;
    dVar7 = (this->MaxValue).Scale.field0_0x0._s_0.Y;
    dVar8 = (this->MaxValue).Scale.field0_0x0._s_0.Z;
    (param_1->MaximumValue).FloatStorage.Float00 = (float)(this->MaxValue).Rotation.Pitch;
    (param_1->MaximumValue).FloatStorage.Float01 = (float)dVar5;
    (param_1->MaximumValue).FloatStorage.Float02 = (float)dVar1;
    (param_1->MaximumValue).FloatStorage.Float03 = (float)dVar2;
    (param_1->MaximumValue).FloatStorage.Float10 = (float)dVar3;
    (param_1->MaximumValue).FloatStorage.Float11 = (float)dVar4;
    (param_1->MaximumValue).FloatStorage.Float12 = (float)dVar6;
    (param_1->MaximumValue).FloatStorage.Float13 = (float)dVar7;
    (param_1->MaximumValue).FloatStorage.Float20 = (float)dVar8;
    (param_1->MaximumValue).FloatStorage.Float21 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float00_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float01_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float02_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float03_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float10_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float11_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float12_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float13_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float20_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float21_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float22_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float23_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float30_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float31_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float32_2 = 0.0;
    (param_1->MaximumValue).FloatStorage.Float33_2 = 0.0;
    *(undefined4 *)&(param_1->MaximumValue).FloatStorage.bValid = 1;
    param_1->bDrawLimits = this->bDrawLimits;
    return;
  }
}

// ConfigureFrom @ 14a5205b0

void __thiscall
FRigUnit_HierarchyAddControlTransform_LimitSettings::ConfigureFrom
          (FRigUnit_HierarchyAddControlTransform_LimitSettings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  switch(param_2->ControlType) {
  case Transform:
  case EulerTransform:
    if (((param_2->LimitEnabled).ArrayNum < 7) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitScaleX =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 0xc);
    if (((param_2->LimitEnabled).ArrayNum < 8) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitScaleY =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 0xe);
    if (((param_2->LimitEnabled).ArrayNum < 9) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitScaleZ =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 0x10);
  case TransformNoScale:
    if (((param_2->LimitEnabled).ArrayNum < 4) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitPitch =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 6);
    if (((param_2->LimitEnabled).ArrayNum < 5) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitYaw =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 8);
    if (((param_2->LimitEnabled).ArrayNum < 6) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitRoll =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 10);
  case Position:
  case Scale:
  case Rotator:
    if (((param_2->LimitEnabled).ArrayNum < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitTranslationZ =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 4);
  case Vector2D:
    if (((param_2->LimitEnabled).ArrayNum < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitTranslationY =
         *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 2);
  case Float:
  case Integer:
  case ScaleFloat:
    if (((param_2->LimitEnabled).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->LimitTranslationX =
         *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  default:
    fVar3 = (param_2->MinimumValue).FloatStorage.Float00;
    fVar4 = (param_2->MinimumValue).FloatStorage.Float01;
    fVar5 = (param_2->MinimumValue).FloatStorage.Float02;
    fVar1 = (param_2->MinimumValue).FloatStorage.Float20;
    uVar6 = (param_2->MinimumValue).FloatStorage.Float10;
    uVar7 = (param_2->MinimumValue).FloatStorage.Float11;
    uVar8 = (param_2->MinimumValue).FloatStorage.Float12;
    uVar9 = (param_2->MinimumValue).FloatStorage.Float13;
    (this->MinValue).Location.field0_0x0._s_0.X =
         (double)(param_2->MinimumValue).FloatStorage.Float03;
    (this->MinValue).Location.field0_0x0._s_0.Y = (double)(float)uVar6;
    (this->MinValue).Location.field0_0x0._s_0.Z = (double)(float)uVar7;
    (this->MinValue).Rotation.Pitch = (double)fVar3;
    (this->MinValue).Rotation.Yaw = (double)fVar4;
    (this->MinValue).Rotation.Roll = (double)fVar5;
    (this->MinValue).Scale.field0_0x0._s_0.X = (double)(float)uVar8;
    (this->MinValue).Scale.field0_0x0._s_0.Y = (double)(float)uVar9;
    (this->MinValue).Scale.field0_0x0._s_0.Z = (double)fVar1;
    fVar3 = (param_2->MaximumValue).FloatStorage.Float00;
    fVar4 = (param_2->MaximumValue).FloatStorage.Float01;
    fVar5 = (param_2->MaximumValue).FloatStorage.Float02;
    fVar1 = (param_2->MaximumValue).FloatStorage.Float20;
    uVar10 = (param_2->MaximumValue).FloatStorage.Float10;
    uVar11 = (param_2->MaximumValue).FloatStorage.Float11;
    uVar12 = (param_2->MaximumValue).FloatStorage.Float12;
    uVar13 = (param_2->MaximumValue).FloatStorage.Float13;
    (this->MaxValue).Location.field0_0x0._s_0.X =
         (double)(param_2->MaximumValue).FloatStorage.Float03;
    (this->MaxValue).Location.field0_0x0._s_0.Y = (double)(float)uVar10;
    (this->MaxValue).Location.field0_0x0._s_0.Z = (double)(float)uVar11;
    (this->MaxValue).Rotation.Pitch = (double)fVar3;
    (this->MaxValue).Rotation.Yaw = (double)fVar4;
    (this->MaxValue).Rotation.Roll = (double)fVar5;
    (this->MaxValue).Scale.field0_0x0._s_0.X = (double)(float)uVar12;
    (this->MaxValue).Scale.field0_0x0._s_0.Y = (double)(float)uVar13;
    (this->MaxValue).Scale.field0_0x0._s_0.Z = (double)fVar1;
    this->bDrawLimits = param_2->bDrawLimits;
    return;
  }
}

