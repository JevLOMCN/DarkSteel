// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// StaticStruct @ 149d740a0

UScriptStruct * __cdecl FPCGMatchAndSetWeightedByCategoryEntryList::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList,
                         (UObject *)pUVar1,L"PCGMatchAndSetWeightedByCategoryEntryList");
  }
  return Z_Registration_Info_UScriptStruct_FPCGMatchAndSetWeightedByCategoryEntryList.OuterSingleton
  ;
}

// FPCGMatchAndSetWeightedByCategoryEntryList @ 149e353a0

FPCGMatchAndSetWeightedByCategoryEntryList * __thiscall
FPCGMatchAndSetWeightedByCategoryEntryList::FPCGMatchAndSetWeightedByCategoryEntryList
          (FPCGMatchAndSetWeightedByCategoryEntryList *this)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->CategoryValue);
  this->bIsDefault = false;
  (this->WeightedEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WeightedEntries).ArrayNum = 0;
  (this->WeightedEntries).ArrayMax = 0;
  (this->CategoryValue).bAllowsTypeChange = false;
  return this;
}

// ~FPCGMatchAndSetWeightedByCategoryEntryList @ 149e371c0

void __thiscall
FPCGMatchAndSetWeightedByCategoryEntryList::~FPCGMatchAndSetWeightedByCategoryEntryList
          (FPCGMatchAndSetWeightedByCategoryEntryList *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FPCGMatchAndSetWeightedEntry,int>
            ((FPCGMatchAndSetWeightedEntry *)(this->WeightedEntries).AllocatorInstance.Data,
             (this->WeightedEntries).ArrayNum);
  pFVar1 = (this->WeightedEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CategoryValue).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->CategoryValue).SoftClassPathValue.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->CategoryValue).StringValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetTotalWeight @ 149e6aeb0

int __thiscall
FPCGMatchAndSetWeightedByCategoryEntryList::GetTotalWeight
          (FPCGMatchAndSetWeightedByCategoryEntryList *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->WeightedEntries).ArrayNum;
  iVar4 = 0;
  pFVar2 = (this->WeightedEntries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x180;
  while( true ) {
    if ((this->WeightedEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 0x170);
    pFVar2 = pFVar2 + 0x180;
  }
  return iVar4;
}

// SetType @ 149ec0be0

void __thiscall
FPCGMatchAndSetWeightedByCategoryEntryList::SetType
          (FPCGMatchAndSetWeightedByCategoryEntryList *this,EPCGMetadataTypes param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->WeightedEntries).ArrayNum;
  pFVar2 = (this->WeightedEntries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x180;
  while( true ) {
    if ((this->WeightedEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *pFVar2 = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x180;
  }
  return;
}

