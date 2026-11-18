// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FAdditionalCrashContextStack @ 14161b670

FAdditionalCrashContextStack * __thiscall
FAdditionalCrashContextStack::FAdditionalCrashContextStack(FAdditionalCrashContextStack *this)

{
  FAdditionalCrashContextStack *pFVar1;
  FAdditionalCrashContextStack *pFVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  this->Next = (FAdditionalCrashContextStack *)0x0;
  this->StackIndex = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar1 = (FAdditionalCrashContextStack *)&GProviderHead;
  for (pFVar2 = GProviderHead; pFVar2 != (FAdditionalCrashContextStack *)0x0; pFVar2 = pFVar2->Next)
  {
    pFVar1 = pFVar2;
  }
  pFVar1->Next = this;
  LeaveCriticalSection(lpCriticalSection);
  return this;
}

// ~FAdditionalCrashContextStack @ 1416205b0

void __thiscall
FAdditionalCrashContextStack::~FAdditionalCrashContextStack(FAdditionalCrashContextStack *this)

{
  FAdditionalCrashContextStack *pFVar1;
  FAdditionalCrashContextStack *pFVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    pFVar1 = (FAdditionalCrashContextStack *)&GProviderHead;
    for (pFVar2 = GProviderHead; pFVar2 != this; pFVar2 = pFVar2->Next) {
      pFVar1 = pFVar2;
    }
    pFVar1->Next = this->Next;
                    /* WARNING: Could not recover jumptable at 0x000141620611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ExecuteProviders @ 141639980

void __cdecl FAdditionalCrashContextStack::ExecuteProviders(FCrashContextExtendedWriter *param_1)

{
  FScopedAdditionalCrashContextProvider *pFVar1;
  code *pcVar2;
  FAdditionalCrashContextStack *pFVar3;
  BOOL BVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  pFVar3 = GProviderHead;
  if (BVar4 != 0) {
    for (; pFVar3 != (FAdditionalCrashContextStack *)0x0; pFVar3 = pFVar3->Next) {
      uVar8 = 0;
      if (pFVar3->StackIndex != 0) {
        do {
          pFVar1 = pFVar3->Stack[uVar8];
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->Func);
          plVar6 = *(longlong **)&(pFVar1->Func).field_0x28;
          pcVar2 = *(code **)&pFVar1->Func;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)&(pFVar1->Func).field_0x10;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          (*pcVar2)(uVar5,param_1);
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < pFVar3->StackIndex);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// GetThreadContextProvider @ 141646fc0

FAdditionalCrashContextStack * __cdecl FAdditionalCrashContextStack::GetThreadContextProvider(void)

{
  longlong lVar1;
  FAdditionalCrashContextStack *pFVar2;
  FAdditionalCrashContextStack *pFVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  FAdditionalCrashContextStack *pFVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar4 = (FAdditionalCrashContextStack *)(lVar1 + 0x130);
  if ((*(uint *)(lVar1 + 0x1c0) & 1) == 0) {
    *(uint *)(lVar1 + 0x1c0) = *(uint *)(lVar1 + 0x1c0) | 1;
    pFVar4->Next = (FAdditionalCrashContextStack *)0x0;
    *(undefined4 *)(lVar1 + 0x1b8) = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)GetAdditionalProviderLock();
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    pFVar2 = (FAdditionalCrashContextStack *)&GProviderHead;
    for (pFVar3 = GProviderHead; pFVar3 != (FAdditionalCrashContextStack *)0x0;
        pFVar3 = pFVar3->Next) {
      pFVar2 = pFVar3;
    }
    pFVar2->Next = pFVar4;
    LeaveCriticalSection(lpCriticalSection);
    __tlregdtor(`FAdditionalCrashContextStack::GetThreadContextProvider'::__l2::
                _dynamic_atexit_destructor_for__ThreadContextProvider__);
  }
  return pFVar4;
}

// PopProvider @ 141650480

void __cdecl FAdditionalCrashContextStack::PopProvider(void)

{
  code *pcVar1;
  bool bVar2;
  FAdditionalCrashContextStack *pFVar3;
  
  pFVar3 = GetThreadContextProvider();
  if (pFVar3->StackIndex == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StackIndex > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformCrashContext.h"
                       ,0x3af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3->StackIndex = pFVar3->StackIndex - 1;
  pFVar3->Stack[pFVar3->StackIndex] = (FScopedAdditionalCrashContextProvider *)0x0;
  return;
}

// PushProvider @ 1416521d0

void __cdecl
FAdditionalCrashContextStack::PushProvider(FScopedAdditionalCrashContextProvider *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAdditionalCrashContextStack *pFVar3;
  
  pFVar3 = GetThreadContextProvider();
  if (0xf < pFVar3->StackIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StackIndex < MaxStackDepth",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\GenericPlatform\\GenericPlatformCrashContext.h"
                       ,0x3a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3->Stack[pFVar3->StackIndex] = param_1;
  pFVar3->StackIndex = pFVar3->StackIndex + 1;
  return;
}

