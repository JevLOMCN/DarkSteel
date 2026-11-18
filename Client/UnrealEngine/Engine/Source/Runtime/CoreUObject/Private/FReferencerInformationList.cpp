// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FReferencerInformationList @ 1421b2c70

FReferencerInformationList * __thiscall
FReferencerInformationList::FReferencerInformationList
          (FReferencerInformationList *this,
          TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FReferencerInformation *pFVar4;
  
  piVar1 = &(this->InternalReferences).ArrayMax;
  (this->InternalReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar4 = (FReferencerInformation *)(param_1->AllocatorInstance).Data;
  (this->InternalReferences).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FReferencerInformation,FReferencerInformation,int>
              ((this->InternalReferences).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->ExternalReferences;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ExternalReferences).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (FReferencerInformation *)(param_2->AllocatorInstance).Data;
  (this->ExternalReferences).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FReferencerInformation,FReferencerInformation,int>
              ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// FReferencerInformationList @ 1421b2d50

FReferencerInformationList * __thiscall
FReferencerInformationList::FReferencerInformationList(FReferencerInformationList *this)

{
  (this->InternalReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalReferences).ArrayNum = 0;
  (this->InternalReferences).ArrayMax = 0;
  (this->ExternalReferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalReferences).ArrayNum = 0;
  (this->ExternalReferences).ArrayMax = 0;
  return this;
}

