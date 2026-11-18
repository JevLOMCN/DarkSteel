// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d527670

UScriptStruct * __cdecl FCompactEventDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompactEventDesc.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FCompactEventDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompactEventDesc,(UObject *)pUVar1,
                         L"CompactEventDesc");
  }
  return Z_Registration_Info_UScriptStruct_FCompactEventDesc.OuterSingleton;
}

// DoesEventMatchDesc @ 14d52ea70

bool __thiscall
FCompactEventDesc::DoesEventMatchDesc(FCompactEventDesc *this,FStateTreeEvent *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  
  if ((this->Tag).TagName != (FName)0x0) {
    if ((param_1->Tag).TagName == (FName)0x0) {
      return false;
    }
    bVar4 = FGameplayTag::MatchesTag(&param_1->Tag,&this->Tag);
    if (!bVar4) {
      return false;
    }
  }
  pUVar2 = (this->PayloadStruct).field0_0x0.DebugPtr;
  if (pUVar2 == (UScriptStruct *)0x0) {
    return true;
  }
  pUVar3 = (param_1->Payload).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

