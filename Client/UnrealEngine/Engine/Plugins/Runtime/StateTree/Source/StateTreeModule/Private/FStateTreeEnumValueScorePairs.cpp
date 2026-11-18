// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d4a15b0

UScriptStruct * __cdecl FStateTreeEnumValueScorePairs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEnumValueScorePairs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEnumValueScorePairs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumValueScorePairs,(UObject *)pUVar1,
                         L"StateTreeEnumValueScorePairs");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeEnumValueScorePairs.OuterSingleton;
}

// operator= @ 14d4b4280

FStateTreeEnumValueScorePairs * __thiscall
FStateTreeEnumValueScorePairs::operator=
          (FStateTreeEnumValueScorePairs *this,FStateTreeEnumValueScorePairs *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Data).ArrayMax;
    piVar1 = &(this->Data).ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    (this->Data).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
    }
  }
  return this;
}

