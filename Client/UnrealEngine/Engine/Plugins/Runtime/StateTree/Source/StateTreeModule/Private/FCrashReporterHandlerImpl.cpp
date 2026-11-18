// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// DumpInfo @ 14d4bad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::StateTree::Private::FCrashReporterHandlerImpl::DumpInfo
          (FCrashReporterHandlerImpl *this,FCrashContextExtendedWriter *param_1)

{
  longlong *plVar1;
  TStringBuilderWithBuffer<wchar_t,1024> *this_00;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext> FVar9;
  FWeakObjectPtr *this_01;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  LPCRITICAL_SECTION local_68;
  wchar_t local_60 [16];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_68 = lpCriticalSection;
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection(lpCriticalSection);
  iVar7 = (this->Contexts).ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    this_00 = &this->Builder;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_70 = (longlong)iVar7;
        local_78 = (longlong)(int)uVar8;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar2 = (this->Contexts).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)this;
      if (FVar2 != (ForElementType<UE::StateTree::Private::FCrashReporterHandlerImpl::FContext>)0x0)
      {
        FVar9 = FVar2;
      }
      this_01 = (FWeakObjectPtr *)((longlong)FVar9 + lVar10);
      (this->Builder)._padding_ = this_00->_padding_;
      pUVar6 = FWeakObjectPtr::Get(this_01);
      if (pUVar6 == (UObject *)0x0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this_00,L"<Invalid>",9);
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar6,(TStringBuilderBase<wchar_t> *)this_00,
                   (UObject *)0x0,None);
      }
      if ((ulonglong)(this->Builder)._padding_ < (this->Builder)._padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
      }
      *(undefined2 *)(this->Builder)._padding_ = 10;
      plVar1 = &(this->Builder)._padding_;
      *plVar1 = *plVar1 + 2;
      pUVar6 = FWeakObjectPtr::Get(this_01 + 1);
      if (pUVar6 == (UObject *)0x0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)this_00,L"<Invalid>",9);
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar6,(TStringBuilderBase<wchar_t> *)this_00,
                   (UObject *)0x0,None);
      }
      if ((ulonglong)(this->Builder)._padding_ < (this->Builder)._padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
      }
      *(undefined2 *)(this->Builder)._padding_ = 10;
      plVar1 = &(this->Builder)._padding_;
      *plVar1 = *plVar1 + 2;
      ::FName::AppendString((FName *)(this_01 + 2),(TStringBuilderBase<wchar_t> *)this_00);
      if ((ulonglong)(this->Builder)._padding_ < (this->Builder)._padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
      }
      *(undefined2 *)(this->Builder)._padding_ = 10;
      plVar1 = &(this->Builder)._padding_;
      *plVar1 = *plVar1 + 2;
      TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)this_00,L"%u");
      TCString<wchar_t>::SnprintfImpl(local_60,0x10,L"StateTree%d");
      pcVar3 = *(code **)((longlong)*param_1 + 0x10);
      if ((ulonglong)(this->Builder)._padding_ < (this->Builder)._padding_ + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this_00,1);
      }
      *(undefined2 *)(this->Builder)._padding_ = 0;
      (*pcVar3)(param_1,local_60);
      iVar7 = (this->Contexts).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x20;
      lpCriticalSection = local_68;
    } while ((int)uVar8 < iVar7);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

