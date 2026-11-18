// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 1

// GetDefaultObject<UAutomationControllerSettings> @ 148c50490

UAutomationControllerSettings * __thiscall
UClass::GetDefaultObject<UAutomationControllerSettings>(UClass *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UAutomationControllerSettings *pUVar6;
  
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    InternalCreateDefaultObjectWrapper(this);
  }
  pUVar6 = (UAutomationControllerSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar5 = UAutomationControllerSettings::StaticClass();
  lVar2 = pUVar6->_padding_;
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UAutomationControllerSettings *)(*pcVar3)();
      return pUVar6;
    }
  }
  return pUVar6;
}

