// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 6

// ~FIoHttpRequest @ 1445878e0

void __thiscall UE::FIoHttpRequest::~FIoHttpRequest(FIoHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Handle != 0) {
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x58))(GHttpIoDispatcher.Object,this->Handle)
    ;
    this->Handle = 0;
  }
  return;
}

// operator= @ 144587b40

FIoHttpRequest * __thiscall
UE::FIoHttpRequest::operator=(FIoHttpRequest *this,FIoHttpRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  FIoHttpRequest *pFVar3;
  
  if (this->Handle != 0) {
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FIoHttpRequest *)(*pcVar1)();
        return pFVar3;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x58))(GHttpIoDispatcher.Object,this->Handle)
    ;
    this->Handle = 0;
  }
  this->Handle = param_1->Handle;
  param_1->Handle = 0;
  return this;
}

// Cancel @ 14458a3d0

void __thiscall UE::FIoHttpRequest::Cancel(FIoHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Handle == 0) {
    return;
  }
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014458a421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x40))(GHttpIoDispatcher.Object,this->Handle);
  return;
}

// Release @ 144593180

void __thiscall UE::FIoHttpRequest::Release(FIoHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Handle != 0) {
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x58))(GHttpIoDispatcher.Object,this->Handle)
    ;
    this->Handle = 0;
  }
  return;
}

// Status @ 1445939c0

EIoErrorCode __thiscall UE::FIoHttpRequest::Status(FIoHttpRequest *this)

{
  code *pcVar1;
  bool bVar2;
  EIoErrorCode EVar3;
  
  if (this->Handle == 0) {
    return InvalidCode;
  }
  if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144593a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x50))
                    (GHttpIoDispatcher.Object,this->Handle);
  return EVar3;
}

// UpdatePriorty @ 144593b20

void __thiscall UE::FIoHttpRequest::UpdatePriorty(FIoHttpRequest *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Handle != 0) {
    if (GHttpIoDispatcher.Object == (IHttpIoDispatcher *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*GHttpIoDispatcher.Object + 0x48))
              (GHttpIoDispatcher.Object,this->Handle,param_1);
  }
  return;
}

