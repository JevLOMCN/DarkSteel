// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// StaticStruct @ 146eaf400

UScriptStruct * __cdecl FBlackboardEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlackboardEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FBlackboardEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardEntry,(UObject *)pUVar1,
                         L"BlackboardEntry");
  }
  return Z_Registration_Info_UScriptStruct_FBlackboardEntry.OuterSingleton;
}

// operator== @ 146ece120

bool __thiscall FBlackboardEntry::operator==(FBlackboardEntry *this,FBlackboardEntry *param_1)

{
  UBlackboardKeyType *pUVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->EntryName == param_1->EntryName) {
    pUVar1 = (this->KeyType).field0_0x0.DebugPtr;
    pUVar2 = (param_1->KeyType).field0_0x0.DebugPtr;
    if (pUVar1 == (UBlackboardKeyType *)0x0) {
      if (pUVar2 == (UBlackboardKeyType *)0x0) {
        return true;
      }
    }
    else if ((pUVar2 != (UBlackboardKeyType *)0x0) && (pUVar1->_padding_ == pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

