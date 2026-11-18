// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149d77660

UScriptStruct * __cdecl FPCGWeightedByCategoryEntryList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGWeightedByCategoryEntryList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGWeightedByCategoryEntryList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGWeightedByCategoryEntryList,(UObject *)pUVar1
                         ,L"PCGWeightedByCategoryEntryList");
  }
  return Z_Registration_Info_UScriptStruct_FPCGWeightedByCategoryEntryList.OuterSingleton;
}

// FPCGWeightedByCategoryEntryList @ 14a018d40

FPCGWeightedByCategoryEntryList * __thiscall
FPCGWeightedByCategoryEntryList::FPCGWeightedByCategoryEntryList
          (FPCGWeightedByCategoryEntryList *this,FString *param_1,
          TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FPCGMeshSelectorWeightedEntry *pFVar4;
  
  ::FString::FString(&this->CategoryEntry,param_1);
  pTVar1 = &this->WeightedMeshEntries;
  this->IsDefault = false;
  piVar2 = &(this->WeightedMeshEntries).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (FPCGMeshSelectorWeightedEntry *)(param_2->AllocatorInstance).Data;
  (this->WeightedMeshEntries).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x288,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FPCGMeshSelectorWeightedEntry,FPCGMeshSelectorWeightedEntry,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

