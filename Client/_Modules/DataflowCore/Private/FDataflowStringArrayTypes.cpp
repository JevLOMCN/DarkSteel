// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// StaticStruct @ 1443de3c0

UScriptStruct * __cdecl FDataflowStringArrayTypes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowStringArrayTypes,(UObject *)pUVar1,
                         L"DataflowStringArrayTypes");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowStringArrayTypes.OuterSingleton;
}

// operator= @ 144434470

FDataflowStringArrayTypes * __thiscall
FDataflowStringArrayTypes::operator=
          (FDataflowStringArrayTypes *this,FDataflowStringArrayTypes *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FString,int>
              ((FString *)(this->Value).AllocatorInstance.Data,(this->Value).ArrayNum);
    iVar2 = (param_1->Value).ArrayNum;
    piVar1 = &(this->Value).ArrayMax;
    pFVar3 = (param_1->Value).AllocatorInstance.Data;
    (this->Value).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FString,FString,int>
              ((this->Value).AllocatorInstance.Data,(FString *)pFVar3,iVar2);
  }
  return this;
}

