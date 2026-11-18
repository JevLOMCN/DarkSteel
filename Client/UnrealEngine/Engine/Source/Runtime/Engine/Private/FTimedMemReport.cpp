// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Get @ 148b3f110

FTimedMemReport * __cdecl FTimedMemReport::Get(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'::__l2::
      Singleton.TotalTime = 0.0;
      `public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'::__l2::
      Singleton.DumpDelayTime = -1.0;
      pwVar1 = FCommandLine::Get();
      if (pwVar1 != (wchar_t *)0x0) {
        FParse::Value(pwVar1,L"TimedMemoryReport=",
                      &`public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'
                       ::__l2::Singleton.DumpDelayTime);
      }
      _Init_thread_footer(&`public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_struct_FTimedMemReport&___ptr64___cdecl_FTimedMemReport::Get(void)'::__l2
          ::Singleton;
}

// SetDumpDelayParse @ 148b75af0

void __cdecl
FTimedMemReport::SetDumpDelayParse(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FTimedMemReport *pFVar4;
  wchar_t *_Str;
  double dVar5;
  
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    dVar5 = _wtof(_Str);
    pFVar4 = Get();
    pFVar4->DumpDelayTime = (float)dVar5;
    pFVar4->TotalTime = 0.0;
  }
  return;
}

