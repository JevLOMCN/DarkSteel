// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// CanPop @ 14ada7620

bool __thiscall
Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
CanPop(TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar5 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  if (lVar5 != this->LastPayloadID) {
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
    return cVar4 == '\0';
  }
  return false;
}

// Pop @ 14adca210

bool __thiscall
Metasound::TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
Pop(TReceiver<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *this,
   TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,this);
  if ((this->Payload).Ptr ==
      (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payload.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                       ,0x225,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>::operator=
            (param_1,(this->Payload).Ptr);
  return true;
}

