// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// DumpInfo @ 14243afa0

void __thiscall
UE::Slate::Private::FSlateCrashReporterHandler::DumpInfo
          (FSlateCrashReporterHandler *this,FCrashContextExtendedWriter *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FCrashContextExtendedWriter *pFVar5;
  size_t sVar6;
  FName *pFVar7;
  int *piVar8;
  wchar_t *_Str;
  FName *this_00;
  int iVar9;
  undefined1 local_res8 [8];
  FCrashContextExtendedWriter *local_res10;
  
  local_res10 = param_1;
  if (this != (FSlateCrashReporterHandler *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    piVar8 = &this->Contexts[0].ArrayNum;
    (this->Builder)._padding_ = (this->Builder)._padding_;
    iVar9 = 0;
    do {
      if (*piVar8 != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&this->Builder,L"Thread: ",8);
        if (iVar9 == 0) {
          _Str = L"Slate";
        }
        else if (iVar9 == 1) {
          _Str = L"Game";
        }
        else {
          _Str = L"Other";
        }
        sVar6 = wcslen(_Str);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)&this->Builder,_Str,(int)sVar6);
        if ((ulonglong)(this->Builder)._padding_ < (this->Builder)._padding_ + 2U) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&this->Builder,1);
        }
        *(undefined2 *)(this->Builder)._padding_ = 10;
        plVar1 = &(this->Builder)._padding_;
        *plVar1 = *plVar1 + 2;
        iVar2 = *piVar8;
        this_00 = (FName *)(((TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>
                              *)(piVar8 + -2))->AllocatorInstance).Data;
        pFVar7 = this_00 + (longlong)iVar2 * 4;
        while( true ) {
          if (*piVar8 != iVar2) {
            `TCheckedPointerIterator<UE::Slate::Private::FSlateCrashReporterHandler::FContext,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (this_00 == pFVar7) break;
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&this->Builder,L"Context:\'",9);
          ::FName::AppendString(this_00 + 3,(TStringBuilderBase<wchar_t> *)&this->Builder);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&this->Builder,L"\' Type:\'",8);
          ::FName::AppendString(this_00,(TStringBuilderBase<wchar_t> *)&this->Builder);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&this->Builder,L"\' Tag:\'",7);
          ::FName::AppendString(this_00 + 1,(TStringBuilderBase<wchar_t> *)&this->Builder);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&this->Builder,L"\' Location:\'",0xc);
          ::FName::AppendString(this_00 + 2,(TStringBuilderBase<wchar_t> *)&this->Builder);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&this->Builder,L"\'\n",2);
          this_00 = this_00 + 4;
        }
      }
      pFVar5 = local_res10;
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 4;
    } while (iVar9 < 3);
    lVar3 = (this->Builder)._padding_;
    if ((int)(lVar3 - (this->Builder)._padding_ >> 1) != 0) {
      pcVar4 = *(code **)((longlong)*local_res10 + 0x10);
      if ((ulonglong)(this->Builder)._padding_ < lVar3 + 2U) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&this->Builder,1);
      }
      *(undefined2 *)(this->Builder)._padding_ = 0;
      (*pcVar4)(pFVar5,L"Slate",(this->Builder)._padding_);
    }
                    /* WARNING: Could not recover jumptable at 0x00014243b1d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Get @ 14243e420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateCrashReporterHandler * __cdecl UE::Slate::Private::FSlateCrashReporterHandler::Get(void)

{
  pmf_5025532d lpCriticalSection;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_UE::Slate::Private::FSlateCrashReporterHandler&___ptr64___cdecl_UE::Slate::Private::FSlateCrashReporterHandler::Get(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_UE::Slate::Private::FSlateCrashReporterHandler&___ptr64___cdecl_UE::Slate::Private::FSlateCrashReporterHandler::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_UE::Slate::Private::FSlateCrashReporterHandler&___ptr64___cdecl_UE::Slate::Private::FSlateCrashReporterHandler::Get(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    lpCriticalSection = (pmf_5025532d)::operator_new(0x2078);
    if (lpCriticalSection != (pmf_5025532d)0x0) {
      memset((void *)lpCriticalSection,0,0x2078);
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
      *(undefined8 *)((longlong)lpCriticalSection + 0x28) = 0;
      *(undefined8 *)((longlong)lpCriticalSection + 0x30) = 0;
      *(undefined8 *)((longlong)lpCriticalSection + 0x38) = 0;
      *(undefined8 *)((longlong)lpCriticalSection + 0x40) = 0;
      *(undefined8 *)((longlong)lpCriticalSection + 0x48) = 0;
      *(undefined8 *)((longlong)lpCriticalSection + 0x50) = 0;
      *(longlong *)((longlong)lpCriticalSection + 0x58) = (longlong)lpCriticalSection + 0x78;
      *(longlong *)((longlong)lpCriticalSection + 0x60) = (longlong)lpCriticalSection + 0x78;
      *(longlong *)((longlong)lpCriticalSection + 0x68) = (longlong)lpCriticalSection + 0x2078;
      *(undefined2 *)((longlong)lpCriticalSection + 0x70) = 0;
    }
    _Local = lpCriticalSection;
    TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
    ::AddRaw<UE::Slate::Private::FSlateCrashReporterHandler>
              ((TMulticastDelegateRegistration<void___cdecl(FCrashContextExtendedWriter_&),FDefaultDelegateUserPolicy>
                *)&FGenericCrashContext::AdditionalCrashContextDelegate,
               (FSlateCrashReporterHandler *)&stack0x00000008,lpCriticalSection);
    atexit(`UE::Slate::Private::FSlateCrashReporterHandler::Get'::__l2::
           _dynamic_atexit_destructor_for__Local__);
    _Init_thread_footer(&`public:_static_struct_UE::Slate::Private::FSlateCrashReporterHandler&___ptr64___cdecl_UE::Slate::Private::FSlateCrashReporterHandler::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    return (FSlateCrashReporterHandler *)_Local;
  }
  return (FSlateCrashReporterHandler *)_Local;
}

// PopInfo @ 14244aef0

void __thiscall
UE::Slate::Private::FSlateCrashReporterHandler::PopInfo
          (FSlateCrashReporterHandler *this,EThread param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  
  if (param_1 != Thread_Other) {
    if (this->Contexts[(int)param_1].ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = this->Contexts[(int)param_1].ArrayNum;
    uVar1 = iVar3 - 1;
    pFVar6 = this->Contexts[(int)param_1].AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(pFVar6,pFVar6 + 0x20,(longlong)iVar3 << 5);
    }
    piVar2 = &this->Contexts[(int)param_1].ArrayNum;
    *piVar2 = *piVar2 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&this->Contexts[(int)param_1].AllocatorInstance,
               this->Contexts[(int)param_1].ArrayNum,&this->Contexts[(int)param_1].ArrayMax);
    return;
  }
  if (this != (FSlateCrashReporterHandler *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if (this->Contexts[2].ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar3 = this->Contexts[2].ArrayNum;
    uVar1 = iVar3 - 1;
    pFVar6 = this->Contexts[2].AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
    iVar3 = ~uVar1 + iVar3;
    if (iVar3 != 0) {
      memmove(pFVar6,pFVar6 + 0x20,(longlong)iVar3 << 5);
    }
    piVar2 = &this->Contexts[2].ArrayNum;
    *piVar2 = *piVar2 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,&this->Contexts[2].AllocatorInstance,this->Contexts[2].ArrayNum,
               &this->Contexts[2].ArrayMax);
                    /* WARNING: Could not recover jumptable at 0x00014244afad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

