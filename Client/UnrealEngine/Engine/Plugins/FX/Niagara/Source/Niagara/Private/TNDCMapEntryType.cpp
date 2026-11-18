// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TNDCMapEntryType @ 1490b2160

TNDCMapEntryType * __thiscall
TNDCMapEntryType::TNDCMapEntryType(TNDCMapEntryType *this,UScriptStruct *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TNDCMapEntryType *pTVar5;
  UScriptStruct *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar4,
                         L"NDCMapEntryBase");
    if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
      this->EntryStruct = (UScriptStruct *)0x0;
      goto LAB_1490b21e7;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     (bVar3 = true,
     (longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
     &(Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  pUVar6 = (UScriptStruct *)0x0;
  if (bVar3) {
    pUVar6 = param_1;
  }
  this->EntryStruct = pUVar6;
  if (pUVar6 != (UScriptStruct *)0x0) {
    return this;
  }
LAB_1490b21e7:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntryStruct",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel_Map.h"
                     ,0x70,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TNDCMapEntryType *)(*pcVar2)();
    return pTVar5;
  }
  return this;
}

