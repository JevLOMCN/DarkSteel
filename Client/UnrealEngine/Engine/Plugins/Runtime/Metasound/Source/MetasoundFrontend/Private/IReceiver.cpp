// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ~IReceiver @ 14af42de0

void __thiscall Metasound::IReceiver::~IReceiver(IReceiver *this)

{
  FThreadSafeCounter *pFVar1;
  IDataChannel *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7IReceiver_Metasound__6B_;
  if ((this->DataChannel).Object == (IDataChannel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar2 = (this->DataChannel).Object;
  if ((pIVar2->NumAliveReceivers).Counter < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumAliveReceivers.GetValue() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundRouter.h"
                       ,0x14e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  pFVar1 = &pIVar2->NumAliveReceivers;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataChannel).SharedReferenceCount.ReferenceController);
  return;
}

