// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a47a660

UScriptStruct * __cdecl FRigUnit_HierarchyAddControlVector2D_LimitSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings
                         ,(UObject *)pUVar1,L"RigUnit_HierarchyAddControlVector2D_LimitSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings.
         OuterSingleton;
}

// Configure @ 14a51fd80

void __thiscall
FRigUnit_HierarchyAddControlVector2D_LimitSettings::Configure
          (FRigUnit_HierarchyAddControlVector2D_LimitSettings *this,FRigControlSettings *param_1)

{
  double dVar1;
  FRigControlLimitEnabled FVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 local_118;
  
  FRigControlSettings::SetupLimitArrayForType(param_1,false,false,false);
  FVar2 = this->LimitX;
  if ((param_1->LimitEnabled).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)(param_1->LimitEnabled).AllocatorInstance.Data = FVar2;
  FVar2 = this->LimitY;
  if ((param_1->LimitEnabled).ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(FRigControlLimitEnabled *)((param_1->LimitEnabled).AllocatorInstance.Data + 2) = FVar2;
  dVar1 = (this->MinValue).field0_0x0._s_0.Y;
  (param_1->MinimumValue).FloatStorage.Float00 = (float)(this->MinValue).field0_0x0._s_0.X;
  (param_1->MinimumValue).FloatStorage.Float01 = (float)dVar1;
  (param_1->MinimumValue).FloatStorage.Float02 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float03 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float10 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float11 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float12 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float13 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float20 = 0.0;
  (param_1->MinimumValue).FloatStorage.Float21 = 0.0;
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
  dVar1 = (this->MaxValue).field0_0x0._s_0.Y;
  (param_1->MaximumValue).FloatStorage.Float00 = (float)(this->MaxValue).field0_0x0._s_0.X;
  (param_1->MaximumValue).FloatStorage.Float01 = (float)dVar1;
  (param_1->MaximumValue).FloatStorage.Float02 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float03 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float10 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float11 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float12 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float13 = 0.0;
  (param_1->MaximumValue).FloatStorage.Float20 = 0.0;
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

// ConfigureFrom @ 14a520a10

void __thiscall
FRigUnit_HierarchyAddControlVector2D_LimitSettings::ConfigureFrom
          (FRigUnit_HierarchyAddControlVector2D_LimitSettings *this,FRigControlElement *param_1,
          FRigControlSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  float fStack_24;
  
  if ((param_2->LimitEnabled).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->LimitX = *(FRigControlLimitEnabled *)(param_2->LimitEnabled).AllocatorInstance.Data;
  if ((param_2->LimitEnabled).ArrayNum < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->LimitY = *(FRigControlLimitEnabled *)((param_2->LimitEnabled).AllocatorInstance.Data + 2);
  uVar1 = (param_2->MinimumValue).FloatStorage.Float00;
  uVar3 = (param_2->MinimumValue).FloatStorage.Float01;
  (this->MinValue).field0_0x0._s_0.X = (double)(float)uVar1;
  (this->MinValue).field0_0x0._s_0.Y = (double)(float)uVar3;
  uVar2 = (param_2->MaximumValue).FloatStorage.Float00;
  uVar4 = (param_2->MaximumValue).FloatStorage.Float01;
  (this->MaxValue).field0_0x0._s_0.X = (double)(float)uVar2;
  (this->MaxValue).field0_0x0._s_0.Y = (double)(float)uVar4;
  this->bDrawLimits = param_2->bDrawLimits;
  return;
}

