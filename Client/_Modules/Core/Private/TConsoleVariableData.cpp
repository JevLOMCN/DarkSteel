// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TConsoleVariableData<FString> @ 14161a350

TConsoleVariableData<FString> * __thiscall
TConsoleVariableData<FString>::TConsoleVariableData<FString>
          (TConsoleVariableData<FString> *this,FString *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &this->ShadowedValue[0].Data.ArrayMax;
  pFVar2 = this->ShadowedValue + 1;
  this->ShadowedValue[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ShadowedValue[0].Data.ArrayNum = 0;
  *piVar1 = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ShadowedValue[1].Data.ArrayNum = 0;
  this->ShadowedValue[1].Data.ArrayMax = 0;
  if (this != (TConsoleVariableData<FString> *)param_1) {
    iVar3 = (param_1->Data).ArrayNum;
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    this->ShadowedValue[0].Data.ArrayNum = iVar3;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
      memcpy(this->ShadowedValue[0].Data.AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
    }
  }
  if (pFVar2 != param_1) {
    iVar3 = (param_1->Data).ArrayNum;
    piVar1 = &this->ShadowedValue[1].Data.ArrayMax;
    iVar4 = *piVar1;
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    this->ShadowedValue[1].Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
      }
    }
  }
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return this;
}

