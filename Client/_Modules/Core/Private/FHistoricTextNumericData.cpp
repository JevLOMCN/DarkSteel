// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// operator= @ 141739ed0

FHistoricTextNumericData * __thiscall
FHistoricTextNumericData::operator=
          (FHistoricTextNumericData *this,FHistoricTextNumericData *param_1)

{
  TOptional<FNumberFormattingOptions> *pTVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  TOptional<FNumberFormattingOptions> *pTVar8;
  
  this->FormatType = param_1->FormatType;
  FFormatArgumentValue::operator=(&this->SourceValue,&param_1->SourceValue);
  pTVar1 = &this->FormatOptions;
  pTVar8 = &param_1->FormatOptions;
  if (pTVar8 != pTVar1) {
    if ((param_1->FormatOptions).bIsSet != false) {
      bVar2 = (pTVar8->TypedValue).UseGrouping;
      bVar3 = (pTVar8->TypedValue).IndicateNearlyInteger;
      uVar4 = (pTVar8->TypedValue).field_0x3;
      EVar5 = (pTVar8->TypedValue).RoundingMode;
      iVar6 = (param_1->FormatOptions).TypedValue.MinimumIntegralDigits;
      iVar7 = (param_1->FormatOptions).TypedValue.MaximumIntegralDigits;
      (pTVar1->TypedValue).AlwaysSign = (pTVar8->TypedValue).AlwaysSign;
      (pTVar1->TypedValue).UseGrouping = bVar2;
      (pTVar1->TypedValue).IndicateNearlyInteger = bVar3;
      (pTVar1->TypedValue).field_0x3 = uVar4;
      (pTVar1->TypedValue).RoundingMode = EVar5;
      (this->FormatOptions).TypedValue.MinimumIntegralDigits = iVar6;
      (this->FormatOptions).TypedValue.MaximumIntegralDigits = iVar7;
      iVar6 = (param_1->FormatOptions).TypedValue.MaximumFractionalDigits;
      (this->FormatOptions).TypedValue.MinimumFractionalDigits =
           (param_1->FormatOptions).TypedValue.MinimumFractionalDigits;
      (this->FormatOptions).TypedValue.MaximumFractionalDigits = iVar6;
      (this->FormatOptions).bIsSet = true;
      return this;
    }
    if ((this->FormatOptions).bIsSet != false) {
      (this->FormatOptions).bIsSet = false;
    }
  }
  return this;
}

