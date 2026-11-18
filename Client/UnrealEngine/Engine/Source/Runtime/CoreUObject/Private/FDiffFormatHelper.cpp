// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Get @ 141ef7c00

/* WARNING: Enum "Type": Some values do not have unique names */

FDiffFormatHelper * __cdecl FDiffFormatHelper::Get(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FDiffFormatHelper *pFVar5;
  uint uVar6;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      pFVar4 = FOutputDeviceHelper::FormatLogLine
                         (&local_18,Warning,(FName *)&LogArchiveDiff.field_0x4,L"",GPrintLogTimes,
                          __real_bff0000000000000,(int *)0x0);
      iVar1 = (pFVar4->Data).ArrayNum;
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      if (0xff < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FDiffFormatHelper *)(*pcVar2)();
          return pFVar5;
        }
      }
      `public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'::__l2
      ::Instance.Indent =
           L"                                                                                                                                                                                                                                                               "
           + (0xff - (longlong)(int)uVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      `public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'::__l2
      ::Instance.LineTerminator = L"\n";
      _Init_thread_footer(&`public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'
              ::__l2::Instance;
    }
  }
  return &`public:_static_struct_FDiffFormatHelper&___ptr64___cdecl_FDiffFormatHelper::Get(void)'::
          __l2::Instance;
}

