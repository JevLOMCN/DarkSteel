// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 6

// StaticStruct @ 14d679550

UScriptStruct * __cdecl FBaseFocusCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseFocusCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FBaseFocusCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseFocusCurve,(UObject *)pUVar1,
                         L"BaseFocusCurve");
  }
  return Z_Registration_Info_UScriptStruct_FBaseFocusCurve.OuterSingleton;
}

// AddPointToCurve @ 14d6b62f0

FKeyHandle __thiscall
FBaseFocusCurve::AddPointToCurve
          (FBaseFocusCurve *this,FRichCurve *param_1,float param_2,float param_3,float param_4,
          FKeyHandle param_5)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FRichCurve *in_R8;
  undefined1 in_R9B;
  float in_XMM1_Da;
  uint in_stack_ffffffffffffffc8;
  FKeyHandle local_28;
  FKeyHandle local_24;
  
  FRealCurve::FindKey((FRealCurve *)in_R8,in_XMM1_Da,param_3);
  FVar1 = FKeyHandle::Invalid();
  if (local_24.Index != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    in_R9B = 1;
    FRichCurve::SetKeyValue(in_R8,local_24,param_4,true);
  }
  FVar1 = FKeyHandle::Invalid();
  if (local_24.Index != *(uint *)CONCAT44(extraout_var_00,FVar1.Index)) {
    *(uint *)&param_1->_padding_ = local_24.Index;
    return (FKeyHandle)(uint)param_1;
  }
  FRichCurve::AddKey(in_R8,in_XMM1_Da,param_3,(bool)in_R9B,
                     (FKeyHandle)(in_stack_ffffffffffffffc8 & 0xffffff00));
  FRichCurve::SetKeyTangentMode(in_R8,local_28,RCTM_None,true);
  FRichCurve::SetKeyInterpMode(in_R8,local_28,RCIM_Linear);
  *(uint *)&param_1->_padding_ = local_28.Index;
  return (FKeyHandle)(uint)param_1;
}

// ChangeFocusInCurve @ 14d6b95e0

void __thiscall
FBaseFocusCurve::ChangeFocusInCurve
          (FBaseFocusCurve *this,FRichCurve *param_1,float param_2,float param_3,float param_4)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  float in_XMM1_Da;
  undefined4 local_28;
  
  FRealCurve::FindKey((FRealCurve *)param_1,in_XMM1_Da,param_2);
  FVar1 = FKeyHandle::Invalid();
  if (local_28 != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::SetKeyTime(param_1,local_28,param_3);
  }
  return;
}

// DeletePointFromCurve @ 14d6c0090

void __thiscall
FBaseFocusCurve::DeletePointFromCurve
          (FBaseFocusCurve *this,FRichCurve *param_1,float param_2,float param_3)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  float in_XMM1_Da;
  undefined4 local_18;
  
  FRealCurve::FindKey((FRealCurve *)param_1,in_XMM1_Da,param_2);
  FVar1 = FKeyHandle::Invalid();
  if (local_18 != *(uint *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::DeleteKey(param_1,local_18);
  }
  return;
}

// MergeFocusInCurve @ 14d6e3f90

void __thiscall
FBaseFocusCurve::MergeFocusInCurve
          (FBaseFocusCurve *this,FRichCurve *param_1,float param_2,float param_3,bool param_4,
          float param_5)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FKeyHandle FVar8;
  uint uVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FRichCurveKey *pFVar10;
  undefined4 extraout_var_01;
  uint uVar11;
  longlong lVar12;
  float in_XMM1_Da;
  FKeyHandle local_48;
  FKeyHandle local_44;
  
  FRealCurve::FindKey((FRealCurve *)param_1,in_XMM1_Da,param_2);
  FVar8 = FKeyHandle::Invalid();
  if (local_48.Index != *(uint *)CONCAT44(extraout_var,FVar8.Index)) {
    FRealCurve::FindKey((FRealCurve *)param_1,in_XMM1_Da,param_3);
    FVar8 = FKeyHandle::Invalid();
    if ((local_44.Index != *(uint *)CONCAT44(extraout_var_00,FVar8.Index)) && (param_4)) {
      pFVar10 = FRichCurve::GetKey(param_1,local_48);
      uVar5 = *(undefined8 *)pFVar10;
      uVar6 = *(undefined8 *)&pFVar10->Value;
      fVar2 = pFVar10->LeaveTangentWeight;
      uVar1 = *(undefined8 *)&pFVar10->ArriveTangentWeight;
      uVar9 = FIndexedCurve::GetIndexSafe((FIndexedCurve *)param_1,local_44);
      uVar11 = 0;
      if ((int)uVar9 < (param_1->Keys).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (param_1->Keys).AllocatorInstance.Data;
      lVar12 = (longlong)(int)uVar9 * 0x1c;
      *(undefined8 *)(pFVar3 + lVar12) = uVar5;
      *(undefined8 *)(pFVar3 + lVar12 + 8) = uVar6;
      *(undefined8 *)(pFVar3 + lVar12 + 0x10) = uVar1;
      *(float *)(pFVar3 + lVar12 + 0x18) = fVar2;
      FRichCurve::DeleteKey(param_1,local_48);
      return;
    }
    FVar8 = FKeyHandle::Invalid();
    if (local_44.Index == *(uint *)CONCAT44(extraout_var_01,FVar8.Index)) {
      FRichCurve::SetKeyTime(param_1,local_48,param_3);
    }
  }
  return;
}

// SetPointInCurve @ 14d6ee840

FKeyHandle __thiscall
FBaseFocusCurve::SetPointInCurve
          (FBaseFocusCurve *this,FRichCurve *param_1,float param_2,float param_3,float param_4)

{
  FKeyHandle FVar1;
  undefined4 extraout_var;
  FRichCurve *in_R8;
  float in_XMM1_Da;
  
  FRealCurve::FindKey((FRealCurve *)in_R8,in_XMM1_Da,param_3);
  FVar1 = FKeyHandle::Invalid();
  if ((int)param_1->_padding_ != *(int *)CONCAT44(extraout_var,FVar1.Index)) {
    FRichCurve::SetKeyValue(in_R8,(FKeyHandle)(uint)param_1->_padding_,param_4,true);
  }
  return (FKeyHandle)(uint)param_1;
}

