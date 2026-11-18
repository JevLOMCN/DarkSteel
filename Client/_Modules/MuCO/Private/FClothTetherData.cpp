// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FClothTetherData @ 14ab9f300

FClothTetherData * __thiscall
FClothTetherData::FClothTetherData(FClothTetherData *this,FClothTetherData *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  (this->Tethers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Tethers).ArrayMax;
  iVar2 = (param_1->Tethers).ArrayNum;
  pTVar3 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
           (param_1->Tethers).AllocatorInstance.Data;
  (this->Tethers).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((this->Tethers).AllocatorInstance.Data,pTVar3,iVar2);
  return this;
}

