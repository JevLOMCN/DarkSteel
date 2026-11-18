// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 3

// StaticStruct @ 148c0adc0

UScriptStruct * __cdecl FClothParameterMask_Legacy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothParameterMask_Legacy,(UObject *)pUVar1,
                         L"ClothParameterMask_Legacy");
  }
  return Z_Registration_Info_UScriptStruct_FClothParameterMask_Legacy.OuterSingleton;
}

// FClothParameterMask_Legacy @ 148c19070

FClothParameterMask_Legacy * __thiscall
FClothParameterMask_Legacy::FClothParameterMask_Legacy(FClothParameterMask_Legacy *this)

{
  (this->MaskName).ComparisonIndex = 0;
  (this->MaskName).Number = 0;
  this->CurrentTarget = None;
  this->MaxValue_DEPRECATED = 0.0;
  (this->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->bEnabled = false;
  this->MinValue_DEPRECATED = 100.0;
  return this;
}

// MigrateTo @ 148c2e080

void __thiscall
FClothParameterMask_Legacy::MigrateTo(FClothParameterMask_Legacy *this,FPointWeightMap *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->Values;
  if (&param_1->Values != pTVar1) {
    pFVar2 = (param_1->Values).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_1->Values).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->Values).ArrayNum = (this->Values).ArrayNum;
    (param_1->Values).ArrayMax = (this->Values).ArrayMax;
    (this->Values).ArrayNum = 0;
    (this->Values).ArrayMax = 0;
  }
  return;
}

