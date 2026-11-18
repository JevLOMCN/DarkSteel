// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AddTail @ 1487881e0

void __cdecl
FStreamableDelegateDelayHelper::FPendingDelegateList::AddTail
          (FPendingDelegate *param_1,FPendingDelegateList *param_2,FPendingDelegateList *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->Tail == (FPendingDelegate *)0x0) {
    if (param_2->Head != (FPendingDelegate *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PendingDelegates.Head",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                         ,0x15c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_2->Tail = param_1;
    param_2->Head = param_1;
    param_1->Prev = (FPendingDelegate *)0x0;
    param_1->Next = (FPendingDelegate *)0x0;
  }
  else {
    param_2->Tail->Next = param_1;
    param_1->Prev = param_2->Tail;
    param_1->Next = (FPendingDelegate *)0x0;
    param_2->Tail = param_1;
  }
  if (param_3->Tail != (FPendingDelegate *)0x0) {
    param_3->Tail->NextByHandle = param_1;
    param_1->PrevByHandle = param_3->Tail;
    param_1->NextByHandle = (FPendingDelegate *)0x0;
    param_3->Tail = param_1;
    return;
  }
  if (param_3->Head != (FPendingDelegate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!PendingDelegatesByHandle.Head",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamableManager.cpp"
                       ,0x16a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_3->Tail = param_1;
  param_3->Head = param_1;
  param_1->PrevByHandle = (FPendingDelegate *)0x0;
  param_1->NextByHandle = (FPendingDelegate *)0x0;
  return;
}

