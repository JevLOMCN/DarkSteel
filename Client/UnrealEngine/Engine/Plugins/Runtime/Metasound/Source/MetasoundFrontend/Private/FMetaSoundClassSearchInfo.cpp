// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// StaticStruct @ 14ae49c60

UScriptStruct * __cdecl FMetaSoundClassSearchInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundClassSearchInfo,(UObject *)pUVar1,
                         L"MetaSoundClassSearchInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundClassSearchInfo.OuterSingleton;
}

// FMetaSoundClassSearchInfo @ 14ae59b20

FMetaSoundClassSearchInfo * __thiscall
FMetaSoundClassSearchInfo::FMetaSoundClassSearchInfo
          (FMetaSoundClassSearchInfo *this,FMetasoundFrontendClassMetadata *param_1)

{
  FText::FText(&this->ClassDisplayName);
  FText::FText(&this->ClassDescription);
  (this->Hierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hierarchy).ArrayNum = 0;
  (this->Hierarchy).ArrayMax = 0;
  (this->Keywords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keywords).ArrayNum = 0;
  (this->Keywords).ArrayMax = 0;
  return this;
}

// ~FMetaSoundClassSearchInfo @ 14ae5c270

void __thiscall
FMetaSoundClassSearchInfo::~FMetaSoundClassSearchInfo(FMetaSoundClassSearchInfo *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  DestructItems<FText,int>
            ((FText *)(this->Keywords).AllocatorInstance.Data,(this->Keywords).ArrayNum);
  pFVar1 = (this->Keywords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FText,int>
            ((FText *)(this->Hierarchy).AllocatorInstance.Data,(this->Hierarchy).ArrayNum);
  pFVar1 = (this->Hierarchy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ClassDescription).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->ClassDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ae5c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

// operator= @ 14ae5cac0

FMetaSoundClassSearchInfo * __thiscall
FMetaSoundClassSearchInfo::operator=
          (FMetaSoundClassSearchInfo *this,FMetaSoundClassSearchInfo *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->ClassDisplayName).TextData.Reference;
  pIVar2 = (this->ClassDisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ClassDisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ClassDisplayName).Flags = (param_1->ClassDisplayName).Flags;
  pIVar1 = (param_1->ClassDescription).TextData.Reference;
  pIVar2 = (this->ClassDescription).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ClassDescription).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ClassDescription).Flags = (param_1->ClassDescription).Flags;
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&this->Hierarchy,&param_1->Hierarchy);
  TArray<FText,TSizedDefaultAllocator<32>_>::operator=(&this->Keywords,&param_1->Keywords);
  return this;
}

