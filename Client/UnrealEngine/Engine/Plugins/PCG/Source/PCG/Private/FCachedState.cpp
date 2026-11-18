// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ShouldScanCells @ 149f63450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
PCGRuntimeGenChangeDetection::FDetector::FCachedState::ShouldScanCells
          (FCachedState *this,FDetectionInputs *param_1)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double local_58;
  double local_50;
  double local_48;
  char local_40;
  double local_38;
  double local_30;
  double local_28;
  char local_20;
  
  (**(code **)(**(longlong **)&param_1->field_0x8 + 0x18))();
  if (local_40 != '\0') {
    if ((this->GenSourcePosition).bIsSet == false) {
      return true;
    }
    uVar6 = PCGHiGenGrid::UnboundedGridSize();
    pTVar3 = CVarMaxPositionDeltaUnbounded.Ref;
    pTVar2 = CVarMaxPositionDeltaGridProportion.Ref;
    if (*(uint *)&param_1->field_0x78 == uVar6) {
      bVar4 = IsInParallelGameThread();
      if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      fVar10 = pTVar3->ShadowedValue[0];
    }
    else {
      bVar4 = IsInParallelGameThread();
      if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      fVar10 = (float)*(uint *)&param_1->field_0x78 * pTVar2->ShadowedValue[0];
    }
    if ((local_40 == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (((this->GenSourcePosition).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    dVar7 = local_48 - (this->GenSourcePosition).TypedValue.field0_0x0._s_0.Z;
    dVar9 = local_50 - (this->GenSourcePosition).TypedValue.field0_0x0._s_0.Y;
    dVar8 = local_58 - (this->GenSourcePosition).TypedValue.field0_0x0._s_0.X;
    if ((double)(fVar10 * fVar10) < dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7) {
      return true;
    }
  }
  if (param_1->field_0x74 == '\0') {
    return false;
  }
  (**(code **)(**(longlong **)&param_1->field_0x8 + 0x20))
            (*(longlong **)&param_1->field_0x8,&local_38);
  bVar4 = (this->GenSourceDirection).bIsSet;
  if (local_20 != '\0') {
    if (bVar4 != false) {
      if ((bVar4 == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (___real_3fefe76c8b439581 <=
          local_30 * (this->GenSourceDirection).TypedValue.field0_0x0._s_0.Y +
          local_38 * (this->GenSourceDirection).TypedValue.field0_0x0._s_0.X +
          local_28 * (this->GenSourceDirection).TypedValue.field0_0x0._s_0.Z) {
        return false;
      }
    }
    return true;
  }
  return bVar4 != false;
}

// UpdateFromInputs @ 149f6c8e0

void __thiscall
PCGRuntimeGenChangeDetection::FDetector::FCachedState::UpdateFromInputs
          (FCachedState *this,FDetectionInputs *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  FCachedState *pFVar5;
  double *pdVar6;
  undefined1 local_28 [32];
  
  pFVar5 = (FCachedState *)
           (**(code **)(**(longlong **)&param_1->field_0x8 + 0x18))
                     (*(longlong **)&param_1->field_0x8,local_28);
  if (pFVar5 != this) {
    if ((pFVar5->GenSourcePosition).bIsSet == false) {
      if ((this->GenSourcePosition).bIsSet != false) {
        (this->GenSourcePosition).bIsSet = false;
      }
    }
    else {
      uVar1 = *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 4);
      uVar2 = *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 8);
      uVar3 = *(undefined4 *)((longlong)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0 + 0xc);
      *(undefined4 *)&(this->GenSourcePosition).TypedValue.field0_0x0 =
           *(undefined4 *)&(pFVar5->GenSourcePosition).TypedValue.field0_0x0;
      *(undefined4 *)((longlong)&(this->GenSourcePosition).TypedValue.field0_0x0 + 4) = uVar1;
      *(undefined4 *)((longlong)&(this->GenSourcePosition).TypedValue.field0_0x0 + 8) = uVar2;
      *(undefined4 *)((longlong)&(this->GenSourcePosition).TypedValue.field0_0x0 + 0xc) = uVar3;
      (this->GenSourcePosition).TypedValue.field0_0x0._s_0.Z =
           (pFVar5->GenSourcePosition).TypedValue.field0_0x0._s_0.Z;
      (this->GenSourcePosition).bIsSet = true;
    }
  }
  if (param_1->field_0x74 != '\0') {
    pdVar6 = (double *)
             (**(code **)(**(longlong **)&param_1->field_0x8 + 0x20))
                       (*(longlong **)&param_1->field_0x8,local_28);
    if ((TOptional<UE::Math::TVector<double>_> *)pdVar6 == &this->GenSourceDirection)
    goto LAB_149f6c973;
    if (*(char *)(pdVar6 + 3) != '\0') {
      dVar4 = pdVar6[1];
      (this->GenSourceDirection).TypedValue.field0_0x0._s_0.X = *pdVar6;
      (this->GenSourceDirection).TypedValue.field0_0x0._s_0.Y = dVar4;
      (this->GenSourceDirection).TypedValue.field0_0x0._s_0.Z = pdVar6[2];
      (this->GenSourceDirection).bIsSet = true;
      goto LAB_149f6c973;
    }
  }
  if ((this->GenSourceDirection).bIsSet != false) {
    (this->GenSourceDirection).bIsSet = false;
  }
LAB_149f6c973:
  this->GenerationRadiusMultiplier = *(float *)&param_1->field_0x70;
  return;
}

