// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// SetDefaultNameCache @ 14a6826c0

void __thiscall
FRigVMExtendedExecuteContext::SetDefaultNameCache(FRigVMExtendedExecuteContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  
  lVar4 = (**(code **)((this->PublicDataScope)._padding_ + 0x20))(&this->PublicDataScope);
  pUVar5 = FRigVMExecuteContext::StaticStruct();
  if (pUVar5 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14a682737;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x29e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a682737:
  lVar4 = (**(code **)((this->PublicDataScope)._padding_ + 0x18))(&this->PublicDataScope);
  *(FRigVMNameCache **)(lVar4 + 0x50) = &this->NameCache;
  return;
}

