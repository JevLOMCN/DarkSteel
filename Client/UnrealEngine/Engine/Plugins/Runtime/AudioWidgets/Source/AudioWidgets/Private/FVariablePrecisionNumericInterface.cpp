// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// ToString @ 14d890fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
FVariablePrecisionNumericInterface::ToString
          (FVariablePrecisionNumericInterface *this,FString *__return_storage_ptr__,float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FNumberFormattingOptions *pFVar4;
  FDecimalNumberFormattingRules *pFVar5;
  int iVar6;
  float fVar7;
  FNumberFormattingOptions local_48 [2];
  
  fVar7 = (float)((uint)*param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar7 < ___real_5f800000) {
    if (__real_3f800000 <= fVar7 * __real_3a83126f) {
      iVar6 = 0;
      goto LAB_14d89105f;
    }
    if (fVar7 * __real_3c23d70a < __real_3f800000) {
      iVar6 = 3;
      if (__real_3f800000 <= fVar7 * __real_3dcccccd) {
        iVar6 = 2;
      }
      goto LAB_14d89105f;
    }
  }
  iVar6 = 1;
LAB_14d89105f:
  pFVar4 = FNumberFormattingOptions::FNumberFormattingOptions(local_48);
  pFVar4->UseGrouping = false;
  pFVar4->MinimumFractionalDigits = iVar6;
  pFVar4->MaximumFractionalDigits = iVar6;
  uVar2._0_1_ = pFVar4->AlwaysSign;
  uVar2._1_1_ = pFVar4->UseGrouping;
  uVar2._2_1_ = pFVar4->IndicateNearlyInteger;
  uVar2._3_1_ = pFVar4->field_0x3;
  uVar2._4_4_ = pFVar4->RoundingMode;
  uVar3._0_4_ = pFVar4->MinimumIntegralDigits;
  uVar3._4_4_ = pFVar4->MaximumIntegralDigits;
  uVar1._0_4_ = pFVar4->MinimumFractionalDigits;
  uVar1._4_4_ = pFVar4->MaximumFractionalDigits;
  pFVar5 = ExpressionParser::GetLocalizedNumberFormattingRules();
  fVar7 = *param_1;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48[0]._0_8_ = uVar2;
  local_48[0]._8_8_ = uVar3;
  local_48[0]._16_8_ = uVar1;
  FastDecimalFormat::Internal::FractionalToString
            ((double)fVar7,pFVar5,local_48,__return_storage_ptr__);
  return __return_storage_ptr__;
}

