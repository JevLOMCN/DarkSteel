// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// PrettyTime @ 1416505c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl FGenericPlatformTime::PrettyTime(FString *__return_storage_ptr__,double param_1)

{
  if (param_1 < __real_3f50624dd2f1a9fc) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d us");
    return __return_storage_ptr__;
  }
  if (param_1 < __real_3ff0000000000000) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d.%03d ms");
    return __return_storage_ptr__;
  }
  if (param_1 < __real_4024000000000000) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d.%02d sec");
    return __return_storage_ptr__;
  }
  if (param_1 < __real_404e000000000000) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d.%d sec");
    return __return_storage_ptr__;
  }
  if (param_1 < __real_40ac200000000000) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d:%02d min");
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d:%02d:%02d hours");
  return __return_storage_ptr__;
}

// StrDate @ 141661910

wchar_t * __cdecl FGenericPlatformTime::StrDate(wchar_t *param_1,ulong64 param_2)

{
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [4];
  
  FWindowsPlatformTime::SystemTime
            (local_res8,local_res20,local_18,local_res18,&local_1c,&local_20,&local_24,&local_28);
  TCString<wchar_t>::SnprintfImpl(param_1,(int)param_2,L"%02d/%02d/%02d");
  return param_1;
}

// StrTime @ 1416619b0

wchar_t * __cdecl FGenericPlatformTime::StrTime(wchar_t *param_1,ulong64 param_2)

{
  int local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [4];
  
  FWindowsPlatformTime::SystemTime
            (local_18,&local_1c,&local_20,&local_24,local_res20,local_res18,local_res8,&local_28);
  TCString<wchar_t>::SnprintfImpl(param_1,(int)param_2,L"%02d:%02d:%02d");
  return param_1;
}

// StrTimestamp @ 141661a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

wchar_t * __cdecl FGenericPlatformTime::StrTimestamp(void)

{
  short *psVar1;
  wchar_t *_Str;
  longlong lVar2;
  size_t sVar3;
  undefined4 *puVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined2 *)(lVar2 + 0x1e0) = 0;
  _Str = (wchar_t *)(lVar2 + 0x1e0);
  FWindowsPlatformTime::SystemTime
            (local_res8,local_res18,&local_2c,local_res10,&local_30,&local_34,&local_38,local_res20)
  ;
  TCString<wchar_t>::SnprintfImpl(_Str,0x400,L"%02d/%02d/%02d");
  puVar4 = (undefined4 *)(lVar2 + 0x1de);
  do {
    psVar1 = (short *)((longlong)puVar4 + 2);
    puVar4 = (undefined4 *)((longlong)puVar4 + 2);
  } while (*psVar1 != 0);
  *puVar4 = _u__;
  sVar3 = wcslen(_Str);
  FWindowsPlatformTime::SystemTime
            (&local_38,&local_34,&local_30,&local_2c,local_res18,local_res10,local_res8,local_res20)
  ;
  TCString<wchar_t>::SnprintfImpl
            ((wchar_t *)(lVar2 + (longlong)(int)sVar3 * 2 + 0x1e0),0x400 - (int)sVar3,
             L"%02d:%02d:%02d");
  return _Str;
}

