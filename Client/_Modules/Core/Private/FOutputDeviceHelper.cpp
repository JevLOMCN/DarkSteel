// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// AppendFormatLogLine @ 1418c81a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOutputDeviceHelper::AppendFormatLogLine
          (TStringBuilderBase<char8_t> *param_1,Type param_2,FName *param_3,wchar_t *param_4,
          Type param_5,double param_6,int *param_7)

{
  size_t sVar1;
  undefined1 auStackY_178 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  AppendFormatLogLine(&local_138,param_2,param_3,(wchar_t *)0x0,param_5,param_6,param_7);
  TStringBuilderBase<char8_t>::Append<wchar_t,0>
            (param_1,local_138.Base,
             (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
  if (param_4 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_4);
    TStringBuilderBase<char8_t>::Append<wchar_t,0>(param_1,param_4,(int)sVar1);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// AppendFormatLogLine @ 1418c8290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOutputDeviceHelper::AppendFormatLogLine
          (TStringBuilderBase<wchar_t> *param_1,Type param_2,FName *param_3,wchar_t *param_4,
          Type param_5,double param_6,int *param_7)

{
  bool bVar1;
  FTimecode *this;
  wchar_t *_Str;
  size_t sVar2;
  int iVar3;
  int iVar4;
  LARGE_INTEGER local_res20;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  FString local_40;
  FTimecode local_30;
  
  if (param_5 == UTC) {
    FWindowsPlatformTime::UtcTime
              (&local_58,&local_54,&local_44,&local_50,&local_4c,&local_48,
               (int *)&local_res20.QuadPart,(int *)&param_5);
    iVar4 = local_54;
    iVar3 = local_58;
    local_54 = local_4c;
    local_58 = local_48;
  }
  else {
    if (param_5 == SinceGStartTime) {
      if (param_6 < 0.0) {
        QueryPerformanceCounter(&local_res20);
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"[%07.2f][%3llu]");
      goto LAB_1418c8502;
    }
    if (param_5 != Local) {
      if (param_5 == Timecode) {
        this = FApp::GetTimecode(&local_30);
        FTimecode::ToString(this,&local_40,false,false);
        TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"[%s][%3llu]");
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1418c8502;
    }
    FWindowsPlatformTime::SystemTime
              (&local_48,&local_4c,&local_44,&local_50,&local_54,&local_58,
               (int *)&local_res20.QuadPart,(int *)&param_5);
    iVar4 = local_4c;
    iVar3 = local_48;
  }
  FDateTime::FDateTime
            ((FDateTime *)&local_40,iVar3,iVar4,local_50,local_54,local_58,local_res20.s.LowPart,
             param_5);
  FDateTime::ToString((FDateTime *)&local_40,L"[%Y.%m.%d-%H.%M.%S:%s]",param_1);
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"[%3llu]");
LAB_1418c8502:
  if ((GPrintLogCategory == false) || (*param_3 == (FName)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_7 != (int *)0x0) {
    if (bVar1) {
      iVar4 = (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1);
    }
    else {
      iVar4 = -1;
    }
    *param_7 = iVar4;
  }
  if (bVar1) {
    ::FName::AppendString(param_3,param_1);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
  }
  if ((GPrintLogVerbosity != false) && (param_2 != Log)) {
    _Str = ::ToString(param_2);
    iVar4 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar2 = wcslen(_Str);
      iVar4 = (int)sVar2;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,_Str,iVar4);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L": ",2);
  }
  if (param_4 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_4);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,param_4,(int)sVar2);
  }
  return;
}

// FormatCastAndSerializeLine @ 1418db110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOutputDeviceHelper::FormatCastAndSerializeLine
          (FArchive *param_1,wchar_t *param_2,Type param_3,FName *param_4,double param_5,
          bool param_6,bool param_7)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  undefined1 auStackY_3b8 [32];
  TStringBuilderBase<char8_t> local_378;
  uchar local_358 [512];
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_378.Base = local_358;
  local_378.CurPos = local_358;
  iVar2 = 0;
  local_378.End = (uchar *)&local_158;
  local_378.bIsDynamic = false;
  local_378.bIsExternal = false;
  if (param_6) {
    if (param_2 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_2);
      iVar2 = (int)sVar4;
    }
    iVar3 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,iVar2);
    if (local_378.End < (TStringBuilderBase<wchar_t> *)(local_378.CurPos + iVar3)) {
      TStringBuilderBase<char8_t>::Extend(&local_378,(longlong)iVar3);
    }
    if (iVar2 != 0) {
      local_378.CurPos = UE::Core::Private::Convert(local_378.CurPos,iVar3,param_2,iVar2);
    }
  }
  else {
    local_158.Base = local_138;
    local_158.CurPos = local_138;
    local_158.End = (wchar_t *)local_38;
    local_158.bIsDynamic = false;
    local_158.bIsExternal = false;
    AppendFormatLogLine(&local_158,param_3,param_4,(wchar_t *)0x0,GPrintLogTimes,param_5,(int *)0x0)
    ;
    pwVar1 = local_158.Base;
    iVar3 = (int)((longlong)local_158.CurPos - (longlong)local_158.Base >> 1);
    iVar2 = UE::Core::Private::GetConvertedLength((uchar *)0x0,local_158.Base,iVar3);
    if (local_378.End < (TStringBuilderBase<wchar_t> *)(local_378.CurPos + iVar2)) {
      TStringBuilderBase<char8_t>::Extend(&local_378,(longlong)iVar2);
    }
    if (iVar3 != 0) {
      local_378.CurPos = UE::Core::Private::Convert(local_378.CurPos,iVar2,pwVar1,iVar3);
    }
    if (param_2 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_2);
      iVar3 = (int)sVar4;
      iVar2 = UE::Core::Private::GetConvertedLength((uchar *)0x0,param_2,iVar3);
      if (local_378.End < (TStringBuilderBase<wchar_t> *)(local_378.CurPos + iVar2)) {
        TStringBuilderBase<char8_t>::Extend(&local_378,(longlong)iVar2);
      }
      if (iVar3 != 0) {
        local_378.CurPos = UE::Core::Private::Convert(local_378.CurPos,iVar2,param_2,iVar3);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
  }
  if (param_7) {
    if (local_378.End < (TStringBuilderBase<wchar_t> *)(local_378.CurPos + 2)) {
      TStringBuilderBase<char8_t>::Extend(&local_378,2);
    }
    pvVar5 = FGenericPlatformString::Memcpy(local_378.CurPos,&::s___,2);
    local_378.CurPos = (uchar *)((longlong)pvVar5 + 2);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_378.Base,(longlong)((int)local_378.CurPos - (int)local_378.Base));
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_378);
  return;
}

// FormatLogLine @ 1418db560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FOutputDeviceHelper::FormatLogLine
          (FString *__return_storage_ptr__,Type param_1,FName *param_2,wchar_t *param_3,Type param_4
          ,double param_5,int *param_6)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStackY_498 [32];
  FString local_458;
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_448.Base = local_428;
  local_448.CurPos = local_428;
  local_448.End = (wchar_t *)local_28;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  AppendFormatLogLine(&local_448,param_1,param_2,param_3,param_4,param_5,param_6);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_458,local_448.Base,
                      (int)((longlong)local_448.CurPos - (longlong)local_448.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return __return_storage_ptr__;
}

