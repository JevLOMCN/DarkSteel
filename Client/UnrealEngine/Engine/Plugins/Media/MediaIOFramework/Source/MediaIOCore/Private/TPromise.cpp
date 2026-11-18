// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// EmplaceValue<> @ 14d784000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall TPromise<void>::EmplaceValue<>(TPromise<void> *this)

{
  TFutureState<void> *lpCriticalSection;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((this->State).Object == (TFutureState<void> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object == (TFutureState<void> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  lpCriticalSection = (this->State).Object;
  if ((&lpCriticalSection->field_0x50)[0x18] != '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (lpCriticalSection != (TFutureState<void> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pcVar1 = *(code **)(&lpCriticalSection->field_0x28 + 8);
    uVar8 = *(undefined8 *)(&lpCriticalSection->field_0x28 + 0x10);
    uVar2 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18);
    uVar3 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c);
    uVar4 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20);
    uVar5 = *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24);
    uVar6 = CONCAT44(uStack_24,local_28);
    local_28 = *(undefined4 *)&lpCriticalSection->field_0x50;
    uStack_24 = *(undefined4 *)(&lpCriticalSection->field_0x50 + 4);
    plVar9 = *(longlong **)(&lpCriticalSection->field_0x50 + 8);
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 8) = (undefined4)local_48;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0xc) = local_48._4_4_;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x10) = (undefined4)uStack_40;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x14) = uStack_40._4_4_;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x18) = local_38;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x1c) = uStack_34;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x20) = uStack_30;
    *(undefined4 *)(&lpCriticalSection->field_0x28 + 0x24) = uStack_2c;
    *(undefined8 *)&lpCriticalSection->field_0x50 = uVar6;
    *(longlong **)(&lpCriticalSection->field_0x50 + 8) = plStack_20;
    LOCK();
    (&lpCriticalSection->field_0x50)[0x18] = 1;
    UNLOCK();
    local_48 = pcVar1;
    uStack_40 = uVar8;
    local_38 = uVar2;
    uStack_34 = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    plStack_20 = plVar9;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(**(longlong **)(&lpCriticalSection->field_0x50 + 0x10) + 0x10))();
    if (local_48 != (code *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar1 = local_48;
      plVar9 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar9 = plStack_20;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar1)(uVar8);
      if (local_48 != (code *)0x0) {
        plVar9 = (longlong *)&local_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar9 = plStack_20;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

