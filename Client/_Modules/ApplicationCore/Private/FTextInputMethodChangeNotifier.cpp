// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 5

// ~FTextInputMethodChangeNotifier @ 1423c6cf0

void __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::~FTextInputMethodChangeNotifier
          (FTextInputMethodChangeNotifier *this)

{
  FTextStoreACP *pFVar1;
  
  this->_padding_ = (longlong)&::FTextInputMethodChangeNotifier::_vftable_;
  pFVar1 = (this->TextStoreACP).RawPointer;
  if (pFVar1 != (FTextStoreACP *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x10))();
  }
  this->_padding_ = (longlong)&___7ITextInputMethodChangeNotifier__6B_;
  return;
}

// CancelComposition @ 1423d21c0

void __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::CancelComposition
          (FTextInputMethodChangeNotifier *this)

{
  FTextStoreACP *pFVar1;
  ITfContextOwnerCompositionServices *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->TextStoreACP).RawPointer == (FTextStoreACP *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->TextStoreACP).RawPointer;
  if ((pFVar1->TSFContextOwnerCompositionServices).RawPointer !=
      (ITfContextOwnerCompositionServices *)0x0) {
    if (pFVar1 == (FTextStoreACP *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TextStoreACP).RawPointer;
    if ((pFVar1->Composition).TSFCompositionView.RawPointer != (ITfCompositionView *)0x0) {
      if (pFVar1 == (FTextStoreACP *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (this->TextStoreACP).RawPointer;
      if ((pFVar1->TSFContextOwnerCompositionServices).RawPointer ==
          (ITfContextOwnerCompositionServices *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar2 = (pFVar1->TSFContextOwnerCompositionServices).RawPointer;
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x38);
      if ((this->TextStoreACP).RawPointer == (FTextStoreACP *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*pcVar3)(pIVar2,(((this->TextStoreACP).RawPointer)->Composition).TSFCompositionView.
                       RawPointer);
    }
  }
  return;
}

// NotifyLayoutChanged @ 1423efa90

void __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::NotifyLayoutChanged
          (FTextInputMethodChangeNotifier *this,ELayoutChangeType param_1)

{
  FTextStoreACP *pFVar1;
  ITextStoreACPSink *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if ((this->TextStoreACP).RawPointer == (FTextStoreACP *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->TextStoreACP).RawPointer;
  if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
    uVar5 = 1;
    if (param_1 == Created) {
      uVar5 = 0;
    }
    else if ((param_1 != Changed) && (param_1 == Destroyed)) {
      uVar5 = 2;
    }
    if (pFVar1 == (FTextStoreACP *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TextStoreACP).RawPointer;
    if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer == (ITextStoreACPSink *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer;
    (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,uVar5,0);
  }
  return;
}

// NotifySelectionChanged @ 1423efb80

void __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::NotifySelectionChanged
          (FTextInputMethodChangeNotifier *this)

{
  FTextStoreACP *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->TextStoreACP).RawPointer == (FTextStoreACP *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->TextStoreACP).RawPointer;
  if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
    if (pFVar1 == (FTextStoreACP *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->TextStoreACP).RawPointer;
    if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer == (ITextStoreACPSink *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001423efc29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*(pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer + 0x20))();
    return;
  }
  return;
}

// NotifyTextChanged @ 1423efc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
_anon_40B6E0C6::FTextInputMethodChangeNotifier::NotifyTextChanged
          (FTextInputMethodChangeNotifier *this,uint param_1,uint param_2,uint param_3)

{
  FTextStoreACP *pFVar1;
  ITextStoreACPSink *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((this->TextStoreACP).RawPointer == (FTextStoreACP *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->TextStoreACP).RawPointer;
  if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer != (ITextStoreACPSink *)0x0) {
    local_44 = param_2 + param_1;
    local_40 = param_3 + param_1;
    local_48 = param_1;
    if (pFVar1 == (FTextStoreACP *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->TextStoreACP).RawPointer;
    if ((pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer == (ITextStoreACPSink *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (pFVar1->AdviseSinkObject).TextStoreACPSink.RawPointer;
    (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,0,&local_48);
  }
  return;
}

