// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 2

// StaticStruct @ 14d0d0d80

UScriptStruct * __cdecl FNamingTokenResultData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenResultData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NamingTokens();
    Z_Registration_Info_UScriptStruct_FNamingTokenResultData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamingTokenResultData,(UObject *)pUVar1,
                         L"NamingTokenResultData");
  }
  return Z_Registration_Info_UScriptStruct_FNamingTokenResultData.OuterSingleton;
}

// operator= @ 14d0d5490

FNamingTokenResultData * __thiscall
FNamingTokenResultData::operator=(FNamingTokenResultData *this,FNamingTokenResultData *param_1)

{
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNamingTokenValueData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  FText::operator=(&this->OriginalText,&param_1->OriginalText);
  FText::operator=(&this->EvaluatedText,&param_1->EvaluatedText);
  pTVar1 = &param_1->TokenValues;
  pTVar2 = &this->TokenValues;
  if (pTVar2 != pTVar1) {
    DestructItems<FNamingTokenValueData,int>
              ((FNamingTokenValueData *)(pTVar2->AllocatorInstance).Data,
               (this->TokenValues).ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TokenValues).ArrayNum = (param_1->TokenValues).ArrayNum;
    (this->TokenValues).ArrayMax = (param_1->TokenValues).ArrayMax;
    (param_1->TokenValues).ArrayNum = 0;
    (param_1->TokenValues).ArrayMax = 0;
  }
  return this;
}

