// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 1

// operator= @ 14d0f1260

FNamingTokenFilterArgs * __thiscall
FNamingTokenFilterArgs::operator=(FNamingTokenFilterArgs *this,FNamingTokenFilterArgs *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FString,int>
              ((FString *)(this->AdditionalNamespacesToInclude).AllocatorInstance.Data,
               (this->AdditionalNamespacesToInclude).ArrayNum);
    iVar2 = (param_1->AdditionalNamespacesToInclude).ArrayNum;
    piVar1 = &(this->AdditionalNamespacesToInclude).ArrayMax;
    pFVar3 = (param_1->AdditionalNamespacesToInclude).AllocatorInstance.Data;
    (this->AdditionalNamespacesToInclude).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
      ConstructItems<FString,FString,int>
                ((this->AdditionalNamespacesToInclude).AllocatorInstance.Data,(FString *)pFVar3,
                 iVar2);
    }
  }
  this->bIncludeGlobal = param_1->bIncludeGlobal;
  this->bForceCaseSensitive = param_1->bForceCaseSensitive;
  this->bNativeOnly = param_1->bNativeOnly;
  return this;
}

