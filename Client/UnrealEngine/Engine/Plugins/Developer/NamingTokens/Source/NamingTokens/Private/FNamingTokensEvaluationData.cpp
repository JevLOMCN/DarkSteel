// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 4

// StaticStruct @ 14d0d0f90

UScriptStruct * __cdecl FNamingTokensEvaluationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NamingTokens();
    Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamingTokensEvaluationData,(UObject *)pUVar1,
                         L"NamingTokensEvaluationData");
  }
  return Z_Registration_Info_UScriptStruct_FNamingTokensEvaluationData.OuterSingleton;
}

// FNamingTokensEvaluationData @ 14d0d4be0

FNamingTokensEvaluationData * __thiscall
FNamingTokensEvaluationData::FNamingTokensEvaluationData(FNamingTokensEvaluationData *this)

{
  (this->CurrentDateTime).Ticks = 0;
  (this->Contexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contexts).ArrayNum = 0;
  (this->Contexts).ArrayMax = 0;
  this->bForceCaseSensitive = false;
  return this;
}

// operator= @ 14d0d5510

FNamingTokensEvaluationData * __thiscall
FNamingTokensEvaluationData::operator=
          (FNamingTokensEvaluationData *this,FNamingTokensEvaluationData *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &this->Contexts;
  (this->CurrentDateTime).Ticks = (param_1->CurrentDateTime).Ticks;
  if (pTVar1 != &param_1->Contexts) {
    iVar3 = (this->Contexts).ArrayMax;
    piVar2 = &(this->Contexts).ArrayMax;
    iVar4 = (param_1->Contexts).ArrayNum;
    pFVar5 = (param_1->Contexts).AllocatorInstance.Data;
    (this->Contexts).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar5,iVar4);
    }
  }
  this->bForceCaseSensitive = param_1->bForceCaseSensitive;
  return this;
}

// Initialize @ 14d0e0b30

void __thiscall FNamingTokensEvaluationData::Initialize(FNamingTokensEvaluationData *this)

{
  FDateTime FVar1;
  
  FVar1 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->CurrentDateTime).Ticks = *FVar1.Ticks;
  return;
}

