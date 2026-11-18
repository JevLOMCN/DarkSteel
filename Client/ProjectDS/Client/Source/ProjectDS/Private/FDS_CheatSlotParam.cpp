// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// FDS_CheatSlotParam @ 14bf98f80

FDS_CheatSlotParam * __thiscall
FDS_CheatSlotParam::FDS_CheatSlotParam(FDS_CheatSlotParam *this,FDS_CheatSlotParam *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->ParamValueList).ArrayMax;
  (this->ParamValueList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ParamValueList).ArrayNum;
  pFVar4 = (param_1->ParamValueList).AllocatorInstance.Data;
  (this->ParamValueList).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FString,FString,int>
              ((this->ParamValueList).AllocatorInstance.Data,(FString *)pFVar4,iVar3);
  }
  pTVar2 = &this->ParamTextList;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ParamTextList).ArrayMax;
  iVar3 = (param_1->ParamTextList).ArrayNum;
  pFVar4 = (param_1->ParamTextList).AllocatorInstance.Data;
  (this->ParamTextList).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  this->ParamType = param_1->ParamType;
  ::FString::FString(&this->ParamValue,&param_1->ParamValue);
  this->IsEssential = param_1->IsEssential;
  return this;
}

