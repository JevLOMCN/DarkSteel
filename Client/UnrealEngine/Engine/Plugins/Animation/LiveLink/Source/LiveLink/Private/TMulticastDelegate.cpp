// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 7

// Broadcast @ 14d024180

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
            *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (TMulticastDelegate<void___cdecl(FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar3 = false;
  uVar8 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(*(longlong *)&this->field_0x28 + 8 + lVar7) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)&this->field_0x28 + lVar7),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0242a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d0242c0

void __thiscall
TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> *this,FGuid *param_1
          )

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (TMulticastDelegate<void___cdecl(FGuid),FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar3 = false;
  uVar8 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + *(longlong *)&this->field_0x28) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + *(longlong *)&this->field_0x28),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d0243f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d024400

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy> *this,
          FLiveLinkSubjectKey *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey),FDefaultTSDelegateUserPolicy> *
               )0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar3 = false;
  uVar8 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + *(longlong *)&this->field_0x28) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + *(longlong *)&this->field_0x28),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d024559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d024570

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
            *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2,
           FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_3)

{
  FName FVar1;
  UObject *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  UObject *local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  FName local_48;
  
  pUVar2 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar5._0_4_ = (param_1->Source).A;
  uVar5._4_4_ = (param_1->Source).B;
  uVar6._0_4_ = (param_1->Source).C;
  uVar6._4_4_ = (param_1->Source).D;
  FVar1 = (param_1->SubjectName).Name;
  if ((this == (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar7 = false;
  uVar12 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&this->field_0x30) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)&this->field_0x28 + 8 + lVar11) == 0) ||
         (plVar3 = *(longlong **)(*(longlong *)&this->field_0x28 + lVar11),
         plVar3 == (longlong *)0x0)) {
LAB_14d0246e7:
        bVar7 = true;
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x68);
        local_res10 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_58 = uVar5;
        uStack_50 = uVar6;
        local_48 = FVar1;
        cVar9 = (*pcVar4)(plVar3,&local_58,&local_res10,param_3);
        if (cVar9 == '\0') goto LAB_14d0246e7;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d024743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d024750

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
            *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2,
           FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3)

{
  FName FVar1;
  UObject *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  UObject *local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  FName local_48;
  
  pUVar2 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar5._0_4_ = (param_1->Source).A;
  uVar5._4_4_ = (param_1->Source).B;
  uVar6._0_4_ = (param_1->Source).C;
  uVar6._4_4_ = (param_1->Source).D;
  FVar1 = (param_1->SubjectName).Name;
  if ((this == (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,TSubclassOf<ULiveLinkRole>,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_const_&),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar7 = false;
  uVar12 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12 << 4;
    bVar7 = false;
    do {
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&this->field_0x30) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)&this->field_0x28 + 8 + lVar11) == 0) ||
         (plVar3 = *(longlong **)(*(longlong *)&this->field_0x28 + lVar11),
         plVar3 == (longlong *)0x0)) {
LAB_14d0248c7:
        bVar7 = true;
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x68);
        local_res10 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_58 = uVar5;
        uStack_50 = uVar6;
        local_48 = FVar1;
        cVar9 = (*pcVar4)(plVar3,&local_58,&local_res10,param_3);
        if (cVar9 == '\0') goto LAB_14d0248c7;
      }
      lVar11 = lVar11 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d024923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Broadcast @ 14d024930

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,enum_ELiveLinkSubjectState),FDefaultTSDelegateUserPolicy>
::Broadcast(void *this,FLiveLinkSubjectKey *param_1,ELiveLinkSubjectState param_2)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  FName local_28;
  
  uVar4._0_4_ = (param_1->Source).A;
  uVar4._4_4_ = (param_1->Source).B;
  uVar5._0_4_ = (param_1->Source).C;
  uVar5._4_4_ = (param_1->Source).D;
  FVar1 = (param_1->SubjectName).Name;
  if ((this == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(this);
  *(int *)((longlong)this + 0x3c) = *(int *)((longlong)this + 0x3c) + 1;
  bVar6 = false;
  uVar10 = *(int *)((longlong)this + 0x30) - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)((longlong)this + 0x30)) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar11 + 8 + *(longlong *)((longlong)this + 0x28)) == 0) ||
          (plVar2 = *(longlong **)(lVar11 + *(longlong *)((longlong)this + 0x28)),
          plVar2 == (longlong *)0x0)) ||
         (local_38 = uVar4, uStack_30 = uVar5, local_28 = FVar1,
         cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,param_2), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  *(int *)((longlong)this + 0x3c) = *(int *)((longlong)this + 0x3c) + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d024a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(this);
  return;
}

// Broadcast @ 14d024ab0

void __thiscall
TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>
           *this,FLiveLinkSubjectKey *param_1,bool param_2)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_38;
  undefined8 uStack_30;
  FName local_28;
  
  uVar4._0_4_ = (param_1->Source).A;
  uVar4._4_4_ = (param_1->Source).B;
  uVar5._0_4_ = (param_1->Source).C;
  uVar5._4_4_ = (param_1->Source).D;
  FVar1 = (param_1->SubjectName).Name;
  if ((this == (TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey,bool),FDefaultTSDelegateUserPolicy>
                *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar6 = false;
  uVar10 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&this->field_0x30) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar11 + 8 + *(longlong *)&this->field_0x28) == 0) ||
          (plVar2 = *(longlong **)(lVar11 + *(longlong *)&this->field_0x28),
          plVar2 == (longlong *)0x0)) ||
         (local_38 = uVar4, uStack_30 = uVar5, local_28 = FVar1,
         cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_38,param_2), cVar8 == '\0')) {
        bVar6 = true;
      }
      lVar11 = lVar11 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014d024c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

