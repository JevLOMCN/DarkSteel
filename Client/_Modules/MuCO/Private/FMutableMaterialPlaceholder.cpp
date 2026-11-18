// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// FMutableMaterialPlaceholder @ 14abbc890

FMutableMaterialPlaceholder * __thiscall
FMutableMaterialPlaceholder::FMutableMaterialPlaceholder
          (FMutableMaterialPlaceholder *this,FMutableMaterialPlaceholder *param_1)

{
  TArray<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FMutableMaterialPlaceHolderParam *pFVar4;
  
  pTVar1 = &this->Params;
  this->ParentMaterialID = param_1->ParentMaterialID;
  this->MatIndex = param_1->MatIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Params).ArrayMax;
  iVar3 = (param_1->Params).ArrayNum;
  pFVar4 = (FMutableMaterialPlaceHolderParam *)(param_1->Params).AllocatorInstance.Data;
  (this->Params).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// operator== @ 14abc1730

bool __thiscall
FMutableMaterialPlaceholder::operator==
          (FMutableMaterialPlaceholder *this,FMutableMaterialPlaceholder *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((this->ParentMaterialID == param_1->ParentMaterialID) &&
     (iVar1 = (this->Params).ArrayNum, iVar1 == (param_1->Params).ArrayNum)) {
    bVar2 = CompareItems<FMutableMaterialPlaceholder::FMutableMaterialPlaceHolderParam,int>
                      ((FMutableMaterialPlaceHolderParam *)(this->Params).AllocatorInstance.Data,
                       (FMutableMaterialPlaceHolderParam *)(param_1->Params).AllocatorInstance.Data,
                       iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

