// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FReferencerInformation @ 1421b2bc0

FReferencerInformation * __thiscall
FReferencerInformation::FReferencerInformation(FReferencerInformation *this,UObject *param_1)

{
  this->Referencer = param_1;
  this->TotalReferences = 0;
  (this->ReferencingProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencingProperties).ArrayNum = 0;
  (this->ReferencingProperties).ArrayMax = 0;
  return this;
}

// FReferencerInformation @ 1421b2be0

FReferencerInformation * __thiscall
FReferencerInformation::FReferencerInformation
          (FReferencerInformation *this,UObject *param_1,int param_2,
          TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->Referencer = param_1;
  pTVar1 = &this->ReferencingProperties;
  this->TotalReferences = param_2;
  piVar2 = &(this->ReferencingProperties).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  (this->ReferencingProperties).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

