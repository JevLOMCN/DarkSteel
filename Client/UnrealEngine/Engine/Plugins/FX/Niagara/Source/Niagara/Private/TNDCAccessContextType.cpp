// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TNDCAccessContextType @ 1490b2090

TNDCAccessContextType * __thiscall
TNDCAccessContextType::TNDCAccessContextType(TNDCAccessContextType *this,UScriptStruct *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  TNDCAccessContextType *pTVar5;
  UScriptStruct *pUVar6;
  
  if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextBase,(UObject *)pUVar4,
                         L"NDCAccessContextBase");
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      this->AccessContextStruct = (UScriptStruct *)0x0;
      goto LAB_1490b2117;
    }
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     (bVar3 = true,
     (longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
     &(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  pUVar6 = (UScriptStruct *)0x0;
  if (bVar3) {
    pUVar6 = param_1;
  }
  this->AccessContextStruct = pUVar6;
  if (pUVar6 != (UScriptStruct *)0x0) {
    return this;
  }
LAB_1490b2117:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("AccessContextStruct",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessContext.h"
                     ,0xd2,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TNDCAccessContextType *)(*pcVar2)();
    return pTVar5;
  }
  return this;
}

