// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 2

// StaticStruct @ 1443de5a0

UScriptStruct * __cdecl FDataflowBoolArrayTypes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBoolArrayTypes,(UObject *)pUVar1,
                         L"DataflowBoolArrayTypes");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowBoolArrayTypes.OuterSingleton;
}

// operator= @ 144434160

FDataflowBoolArrayTypes * __thiscall
FDataflowBoolArrayTypes::operator=(FDataflowBoolArrayTypes *this,FDataflowBoolArrayTypes *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Value).ArrayMax;
    piVar1 = &(this->Value).ArrayMax;
    _Src = (param_1->Value).AllocatorInstance.Data;
    iVar3 = (param_1->Value).ArrayNum;
    (this->Value).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Value).AllocatorInstance.Data,_Src,(longlong)iVar3);
    }
  }
  return this;
}

