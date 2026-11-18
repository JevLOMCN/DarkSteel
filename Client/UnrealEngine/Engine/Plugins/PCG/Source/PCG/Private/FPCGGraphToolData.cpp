// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149722190

UScriptStruct * __cdecl FPCGGraphToolData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGGraphToolData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGGraphToolData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGGraphToolData,(UObject *)pUVar1,
                         L"PCGGraphToolData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGGraphToolData.OuterSingleton;
}

// ~FPCGGraphToolData @ 149725c90

void __thiscall FPCGGraphToolData::~FPCGGraphToolData(FPCGGraphToolData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->CompatibleToolTags).AllocatorInstance.Data,
             (this->CompatibleToolTags).ArrayNum);
  pFVar1 = (this->CompatibleToolTags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Tooltip).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149725cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// FPCGGraphToolData @ 14988c820

FPCGGraphToolData * __thiscall FPCGGraphToolData::FPCGGraphToolData(FPCGGraphToolData *this)

{
  UClass *pUVar1;
  
  this->_padding_ = (longlong)&___7FPCGGraphToolData__6B_;
  FText::FText(&this->DisplayName);
  FText::FText(&this->Tooltip);
  (this->CompatibleToolTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompatibleToolTags).ArrayNum = 0;
  (this->CompatibleToolTags).ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  (this->InitialActorClassToSpawn).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->NewActorLabel).ComparisonIndex = 0;
  (this->NewActorLabel).Number = 0;
  this->bIsPreset = false;
  return this;
}

