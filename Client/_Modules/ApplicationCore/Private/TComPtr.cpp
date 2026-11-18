// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 3

// operator-> @ 1423c7f30

ITextStoreACPSink * __thiscall
TComPtr<ITextStoreACPSink>::operator->(TComPtr<ITextStoreACPSink> *this)

{
  code *pcVar1;
  bool bVar2;
  ITextStoreACPSink *pIVar3;
  
  if (this->RawPointer != (ITextStoreACPSink *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITextStoreACPSink *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

// operator-> @ 1423c7f80

ITfDocumentMgr * __thiscall TComPtr<ITfDocumentMgr>::operator->(TComPtr<ITfDocumentMgr> *this)

{
  code *pcVar1;
  bool bVar2;
  ITfDocumentMgr *pIVar3;
  
  if (this->RawPointer != (ITfDocumentMgr *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITfDocumentMgr *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

// operator-> @ 1423c7fd0

ITfThreadMgr * __thiscall TComPtr<ITfThreadMgr>::operator->(TComPtr<ITfThreadMgr> *this)

{
  code *pcVar1;
  bool bVar2;
  ITfThreadMgr *pIVar3;
  
  if (this->RawPointer != (ITfThreadMgr *)0x0) {
    return this->RawPointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("RawPointer != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                     ,0x9f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ITfThreadMgr *)(*pcVar1)();
    return pIVar3;
  }
  return this->RawPointer;
}

