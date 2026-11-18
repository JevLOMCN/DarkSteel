// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FDecimalNumberFormattingRules @ 1416d45b0

FDecimalNumberFormattingRules * __thiscall
FDecimalNumberFormattingRules::FDecimalNumberFormattingRules
          (FDecimalNumberFormattingRules *this,FDecimalNumberFormattingRules *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ERoundingMode EVar5;
  int iVar6;
  int iVar7;
  
  (this->NaNString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaNString).Data.AllocatorInstance.Data = (param_1->NaNString).Data.AllocatorInstance.Data;
  (param_1->NaNString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaNString).Data.ArrayNum = (param_1->NaNString).Data.ArrayNum;
  (this->NaNString).Data.ArrayMax = (param_1->NaNString).Data.ArrayMax;
  (param_1->NaNString).Data.ArrayNum = 0;
  (param_1->NaNString).Data.ArrayMax = 0;
  (this->NegativePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativePrefixString).Data.AllocatorInstance.Data =
       (param_1->NegativePrefixString).Data.AllocatorInstance.Data;
  (param_1->NegativePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativePrefixString).Data.ArrayNum = (param_1->NegativePrefixString).Data.ArrayNum;
  (this->NegativePrefixString).Data.ArrayMax = (param_1->NegativePrefixString).Data.ArrayMax;
  (param_1->NegativePrefixString).Data.ArrayNum = 0;
  (param_1->NegativePrefixString).Data.ArrayMax = 0;
  (this->NegativeSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativeSuffixString).Data.AllocatorInstance.Data =
       (param_1->NegativeSuffixString).Data.AllocatorInstance.Data;
  (param_1->NegativeSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativeSuffixString).Data.ArrayNum = (param_1->NegativeSuffixString).Data.ArrayNum;
  (this->NegativeSuffixString).Data.ArrayMax = (param_1->NegativeSuffixString).Data.ArrayMax;
  (param_1->NegativeSuffixString).Data.ArrayNum = 0;
  (param_1->NegativeSuffixString).Data.ArrayMax = 0;
  (this->PositivePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositivePrefixString).Data.AllocatorInstance.Data =
       (param_1->PositivePrefixString).Data.AllocatorInstance.Data;
  (param_1->PositivePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositivePrefixString).Data.ArrayNum = (param_1->PositivePrefixString).Data.ArrayNum;
  (this->PositivePrefixString).Data.ArrayMax = (param_1->PositivePrefixString).Data.ArrayMax;
  (param_1->PositivePrefixString).Data.ArrayNum = 0;
  (param_1->PositivePrefixString).Data.ArrayMax = 0;
  (this->PositiveSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositiveSuffixString).Data.AllocatorInstance.Data =
       (param_1->PositiveSuffixString).Data.AllocatorInstance.Data;
  (param_1->PositiveSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositiveSuffixString).Data.ArrayNum = (param_1->PositiveSuffixString).Data.ArrayNum;
  (this->PositiveSuffixString).Data.ArrayMax = (param_1->PositiveSuffixString).Data.ArrayMax;
  (param_1->PositiveSuffixString).Data.ArrayNum = 0;
  (param_1->PositiveSuffixString).Data.ArrayMax = 0;
  (this->PlusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusString).Data.AllocatorInstance.Data = (param_1->PlusString).Data.AllocatorInstance.Data
  ;
  (param_1->PlusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusString).Data.ArrayNum = (param_1->PlusString).Data.ArrayNum;
  (this->PlusString).Data.ArrayMax = (param_1->PlusString).Data.ArrayMax;
  (param_1->PlusString).Data.ArrayNum = 0;
  (param_1->PlusString).Data.ArrayMax = 0;
  (this->MinusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinusString).Data.AllocatorInstance.Data =
       (param_1->MinusString).Data.AllocatorInstance.Data;
  (param_1->MinusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinusString).Data.ArrayNum = (param_1->MinusString).Data.ArrayNum;
  (this->MinusString).Data.ArrayMax = (param_1->MinusString).Data.ArrayMax;
  (param_1->MinusString).Data.ArrayNum = 0;
  (param_1->MinusString).Data.ArrayMax = 0;
  this->GroupingSeparatorCharacter = param_1->GroupingSeparatorCharacter;
  this->DecimalSeparatorCharacter = param_1->DecimalSeparatorCharacter;
  this->PrimaryGroupingSize = param_1->PrimaryGroupingSize;
  this->SecondaryGroupingSize = param_1->SecondaryGroupingSize;
  this->MinimumGroupingDigits = param_1->MinimumGroupingDigits;
  uVar1 = *(undefined8 *)(param_1->DigitCharacters + 4);
  *(undefined8 *)this->DigitCharacters = *(undefined8 *)param_1->DigitCharacters;
  *(undefined8 *)(this->DigitCharacters + 4) = uVar1;
  *(undefined4 *)(this->DigitCharacters + 8) = *(undefined4 *)(param_1->DigitCharacters + 8);
  bVar2 = (param_1->CultureDefaultFormattingOptions).UseGrouping;
  bVar3 = (param_1->CultureDefaultFormattingOptions).IndicateNearlyInteger;
  uVar4 = (param_1->CultureDefaultFormattingOptions).field_0x3;
  EVar5 = (param_1->CultureDefaultFormattingOptions).RoundingMode;
  iVar6 = (param_1->CultureDefaultFormattingOptions).MinimumIntegralDigits;
  iVar7 = (param_1->CultureDefaultFormattingOptions).MaximumIntegralDigits;
  (this->CultureDefaultFormattingOptions).AlwaysSign =
       (param_1->CultureDefaultFormattingOptions).AlwaysSign;
  (this->CultureDefaultFormattingOptions).UseGrouping = bVar2;
  (this->CultureDefaultFormattingOptions).IndicateNearlyInteger = bVar3;
  (this->CultureDefaultFormattingOptions).field_0x3 = uVar4;
  (this->CultureDefaultFormattingOptions).RoundingMode = EVar5;
  (this->CultureDefaultFormattingOptions).MinimumIntegralDigits = iVar6;
  (this->CultureDefaultFormattingOptions).MaximumIntegralDigits = iVar7;
  iVar6 = (param_1->CultureDefaultFormattingOptions).MaximumFractionalDigits;
  (this->CultureDefaultFormattingOptions).MinimumFractionalDigits =
       (param_1->CultureDefaultFormattingOptions).MinimumFractionalDigits;
  (this->CultureDefaultFormattingOptions).MaximumFractionalDigits = iVar6;
  return this;
}

// FDecimalNumberFormattingRules @ 1416d46f0

FDecimalNumberFormattingRules * __thiscall
FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(FDecimalNumberFormattingRules *this)

{
  this->MinimumGroupingDigits = '\x01';
  (this->NaNString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaNString).Data.ArrayNum = 0;
  (this->NaNString).Data.ArrayMax = 0;
  (this->NegativePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativePrefixString).Data.ArrayNum = 0;
  (this->NegativePrefixString).Data.ArrayMax = 0;
  (this->NegativeSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NegativeSuffixString).Data.ArrayNum = 0;
  (this->NegativeSuffixString).Data.ArrayMax = 0;
  (this->PositivePrefixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositivePrefixString).Data.ArrayNum = 0;
  (this->PositivePrefixString).Data.ArrayMax = 0;
  (this->PositiveSuffixString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositiveSuffixString).Data.ArrayNum = 0;
  (this->PositiveSuffixString).Data.ArrayMax = 0;
  (this->PlusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlusString).Data.ArrayNum = 0;
  (this->PlusString).Data.ArrayMax = 0;
  (this->MinusString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MinusString).Data.ArrayNum = 0;
  (this->MinusString).Data.ArrayMax = 0;
  this->GroupingSeparatorCharacter = L'\0';
  this->DecimalSeparatorCharacter = L'\0';
  this->PrimaryGroupingSize = '\0';
  this->SecondaryGroupingSize = '\0';
  FNumberFormattingOptions::FNumberFormattingOptions(&this->CultureDefaultFormattingOptions);
  builtin_wcsncpy(this->DigitCharacters,L"0123456789",10);
  return this;
}

// ~FDecimalNumberFormattingRules @ 1416d8520

void __thiscall
FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(FDecimalNumberFormattingRules *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MinusString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlusString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositiveSuffixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositivePrefixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NegativeSuffixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NegativePrefixString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NaNString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

