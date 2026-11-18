// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 42

// <lambda_invoker_cdecl> @ 14197de80

void __cdecl
`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  int iVar1;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar2;
  
  if (param_2) {
    iVar1 = 0;
    if (param_1 != (char *)0x0) {
      sVar2 = strlen(param_1);
      iVar1 = (int)sVar2;
    }
    if (iVar1 + -7 < iVar1) {
      iVar1 = iVar1 + -7;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    if (*(ulonglong *)((longlong)param_3 + 0x10) <
        (ulonglong)(*(longlong *)((longlong)param_3 + 8) + (longlong)iVar4 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(param_3,(longlong)iVar4);
    }
    if (iVar4 != 0) {
      pwVar3 = FGenericPlatformString::Convert<char,wchar_t>
                         (*(wchar_t **)((longlong)param_3 + 8),iVar4,param_1,iVar4);
      *(wchar_t **)((longlong)param_3 + 8) = pwVar3;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_3,L",",1);
  }
  return;
}

// DisableChannel<unsigned_int> @ 14197e630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::DisableChannel<unsigned_int>
          (FTraceAuxiliaryImpl *this,uint param_1,FLogCategoryBase *param_2,FString *param_3)

{
  uint uVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  FChannel *this_00;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  FString local_100;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = UE::Trace::FindChannel(param_1);
  if (this_00 == (FChannel *)0x0) {
    if (param_3 != (FString *)0x0) {
      ::FString::PrintfImpl(&local_100,L"%u");
      ::FString::AppendfImpl(param_3,L"Unknown channel %s");
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    local_e8.Base = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    uVar1 = (this_00->Name).Len;
    pcVar2 = (this_00->Name).Ptr;
    if (local_48 < local_c8 + (int)uVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)(int)uVar1);
    }
    if (uVar1 != 0) {
      local_e8.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_e8.CurPos,uVar1,pcVar2,uVar1);
    }
    if ((this->bReadOnlyChannelsFrozen == false) || ((this_00->Args).bReadOnly == false)) {
      local_108 = (wchar_t *)0x0;
      bVar5 = UE::Trace::FChannel::Toggle(this_00,false,&local_108);
      pwVar3 = local_108;
      if (local_108 != (wchar_t *)0x0) {
        if (param_3 == (FString *)0x0) {
          if ((Error < param_2->CompileTimeVerbosity) && (Error < param_2->Verbosity)) {
            if (local_e8.End < local_e8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            }
            *local_e8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<3>
                      (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                        ::__l32::LOG_Static,param_2);
          }
        }
        else {
          sVar4 = wcslen(local_108);
          ::FString::AppendChars(param_3,pwVar3,(int)sVar4);
        }
      }
      if ((5 < (byte)LogTrace._0_1_) && (!bVar5)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<6>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l43::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
    else {
      if ((Fatal < param_2->CompileTimeVerbosity) && (Fatal < param_2->Verbosity)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l13::LOG_Static,param_2);
      }
      bVar5 = (bool)((byte)((uint)this_00->Enabled >> 0x1f) ^ 1);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  return bVar5;
}

// DisableChannel<wchar_t_const_*> @ 14197e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::DisableChannel<wchar_t_const_*>
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2,FString *param_3)

{
  uint uVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  FChannel *this_00;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  FString local_100;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = UE::Trace::FindChannel(param_1);
  if (this_00 == (FChannel *)0x0) {
    if (param_3 != (FString *)0x0) {
      ::FString::FString(&local_100,param_1);
      ::FString::AppendfImpl(param_3,L"Unknown channel %s");
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    local_e8.Base = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    uVar1 = (this_00->Name).Len;
    pcVar2 = (this_00->Name).Ptr;
    if (local_48 < local_c8 + (int)uVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)(int)uVar1);
    }
    if (uVar1 != 0) {
      local_e8.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_e8.CurPos,uVar1,pcVar2,uVar1);
    }
    if ((this->bReadOnlyChannelsFrozen == false) || ((this_00->Args).bReadOnly == false)) {
      local_108 = (wchar_t *)0x0;
      bVar5 = UE::Trace::FChannel::Toggle(this_00,false,&local_108);
      pwVar3 = local_108;
      if (local_108 != (wchar_t *)0x0) {
        if (param_3 == (FString *)0x0) {
          if ((Error < param_2->CompileTimeVerbosity) && (Error < param_2->Verbosity)) {
            if (local_e8.End < local_e8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            }
            *local_e8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<3>
                      (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                        ::__l32::LOG_Static,param_2);
          }
        }
        else {
          sVar4 = wcslen(local_108);
          ::FString::AppendChars(param_3,pwVar3,(int)sVar4);
        }
      }
      if ((5 < (byte)LogTrace._0_1_) && (!bVar5)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<6>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l43::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
    else {
      if ((Fatal < param_2->CompileTimeVerbosity) && (Fatal < param_2->Verbosity)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::DisableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l13::LOG_Static,param_2);
      }
      bVar5 = (bool)((byte)((uint)this_00->Enabled >> 0x1f) ^ 1);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  return bVar5;
}

// EnableChannel<unsigned_int> @ 1419800e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::EnableChannel<unsigned_int>
          (FTraceAuxiliaryImpl *this,uint param_1,FLogCategoryBase *param_2,FString *param_3)

{
  uint uVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  FChannel *this_00;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  FString local_100;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = UE::Trace::FindChannel(param_1);
  if (this_00 == (FChannel *)0x0) {
    if (param_3 != (FString *)0x0) {
      ::FString::PrintfImpl(&local_100,L"%u");
      ::FString::AppendfImpl(param_3,L"Unknown channel %s");
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    local_e8.Base = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    uVar1 = (this_00->Name).Len;
    pcVar2 = (this_00->Name).Ptr;
    if (local_48 < local_c8 + (int)uVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)(int)uVar1);
    }
    if (uVar1 != 0) {
      local_e8.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_e8.CurPos,uVar1,pcVar2,uVar1);
    }
    if ((this->bReadOnlyChannelsFrozen == false) || ((this_00->Args).bReadOnly == false)) {
      local_108 = (wchar_t *)0x0;
      bVar5 = UE::Trace::FChannel::Toggle(this_00,true,&local_108);
      pwVar3 = local_108;
      if (local_108 != (wchar_t *)0x0) {
        if (param_3 == (FString *)0x0) {
          if ((Error < param_2->CompileTimeVerbosity) && (Error < param_2->Verbosity)) {
            if (local_e8.End < local_e8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            }
            *local_e8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<3>
                      (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                        ::__l32::LOG_Static,param_2);
          }
        }
        else {
          sVar4 = wcslen(local_108);
          ::FString::AppendChars(param_3,pwVar3,(int)sVar4);
        }
      }
      if ((5 < (byte)LogTrace._0_1_) && (bVar5)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<6>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l43::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
    else {
      if ((Fatal < param_2->CompileTimeVerbosity) && (Fatal < param_2->Verbosity)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<unsigned_int>(unsigned_int,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l13::LOG_Static,param_2);
      }
      bVar5 = (bool)((byte)((uint)this_00->Enabled >> 0x1f) ^ 1);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  return bVar5;
}

// EnableChannel<wchar_t_const_*> @ 141980350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2,FString *param_3)

{
  uint uVar1;
  char *pcVar2;
  wchar_t *pwVar3;
  FChannel *this_00;
  size_t sVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  FString local_100;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_128;
  this_00 = UE::Trace::FindChannel(param_1);
  if (this_00 == (FChannel *)0x0) {
    if (param_3 != (FString *)0x0) {
      ::FString::FString(&local_100,param_1);
      ::FString::AppendfImpl(param_3,L"Unknown channel %s");
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    local_e8.Base = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    uVar1 = (this_00->Name).Len;
    pcVar2 = (this_00->Name).Ptr;
    if (local_48 < local_c8 + (int)uVar1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)(int)uVar1);
    }
    if (uVar1 != 0) {
      local_e8.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_e8.CurPos,uVar1,pcVar2,uVar1);
    }
    if ((this->bReadOnlyChannelsFrozen == false) || ((this_00->Args).bReadOnly == false)) {
      local_108 = (wchar_t *)0x0;
      bVar5 = UE::Trace::FChannel::Toggle(this_00,true,&local_108);
      pwVar3 = local_108;
      if (local_108 != (wchar_t *)0x0) {
        if (param_3 == (FString *)0x0) {
          if ((Error < param_2->CompileTimeVerbosity) && (Error < param_2->Verbosity)) {
            if (local_e8.End < local_e8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
            }
            *local_e8.CurPos = L'\0';
            UE::Logging::Private::BasicLog<3>
                      (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                        ::__l32::LOG_Static,param_2);
          }
        }
        else {
          sVar4 = wcslen(local_108);
          ::FString::AppendChars(param_3,pwVar3,(int)sVar4);
        }
      }
      if ((5 < (byte)LogTrace._0_1_) && (bVar5)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<6>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l43::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
    }
    else {
      if ((Fatal < param_2->CompileTimeVerbosity) && (Fatal < param_2->Verbosity)) {
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FTraceAuxiliaryImpl::EnableChannel<wchar_t_const*___ptr64>(wchar_t_const*___ptr64,FLogCategoryBase_const&___ptr64,FString*___ptr64)___ptr64'
                    ::__l13::LOG_Static,param_2);
      }
      bVar5 = (bool)((byte)((uint)this_00->Enabled >> 0x1f) ^ 1);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
  return bVar5;
}

// ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&> @ 141983170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTraceAuxiliaryImpl::
ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&>
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,bool param_2,pmf_54149989 *param_3,
          FLogCategoryLogTrace *param_4)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  ulonglong uVar4;
  FTraceAuxiliaryImpl *pFVar5;
  int iVar6;
  ulonglong uVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198;
  undefined1 local_197 [7];
  FString *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  ulonglong local_178;
  FTraceAuxiliaryImpl *local_170;
  FTraceAuxiliaryImpl *local_168 [2];
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 **local_130;
  undefined1 *local_128;
  undefined8 **local_120;
  FString **local_118;
  undefined1 *local_110;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  undefined2 local_e8 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (param_1 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                       ,0x1ae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_180 = (undefined8 *)0x0;
  iStack_150 = 0;
  local_178 = 0;
  local_190 = (FString *)0x0;
  local_188 = 0;
  local_158 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    iStack_150 = (int)sVar3;
  }
  local_f8._12_4_ = uStack_14c;
  local_f8.Size = iStack_150;
  local_128 = local_1a8;
  local_120 = &local_180;
  uStack_140 = 1;
  local_118 = &local_190;
  local_1a0[0] = 0;
  local_110 = local_1a0;
  local_130 = &local_128;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`ParseTokens'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call;
  local_148 = L",";
  local_108._12_4_ = uStack_13c;
  local_108.Size = 1;
  local_108.DataPtr = L",";
  local_f8.DataPtr = local_158;
  local_1a8[0] = param_2;
  UE::String::ParseTokens
            (&local_f8,&local_108,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_138,
             None);
  uVar4 = (ulonglong)(int)local_178;
  puVar12 = local_180 + uVar4 * 2;
  local_170 = (FTraceAuxiliaryImpl *)CONCAT44(local_170._4_4_,(int)local_178);
  uVar7 = uVar4;
  puVar9 = local_180;
  while( true ) {
    if ((int)uVar4 != (int)uVar7) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_198);
    }
    if (puVar9 == puVar12) {
      iVar6 = (int)local_188;
      pFVar10 = local_190 + (int)local_188;
      pFVar8 = local_190;
      while( true ) {
        if ((int)local_188 != iVar6) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_197);
        }
        if (pFVar8 == pFVar10) break;
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        local_170 = this;
        pFVar5 = UE::Core::Private::
                 DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>(&local_170);
        (*(code *)*param_3)(pFVar5,pwVar11,param_4);
        pFVar8 = pFVar8 + 1;
      }
      DestructItems<FString,int>(local_190,(int)local_188);
      if (local_190 != (FString *)0x0) {
        FMemory::Free(local_190);
      }
      if (local_180 != (undefined8 *)0x0) {
        FMemory::Free(local_180);
      }
      return;
    }
    iVar6 = 0x4f;
    if (*(int *)(puVar9 + 1) < 0x4f) {
      iVar6 = *(int *)(puVar9 + 1);
    }
    uVar7 = (longlong)iVar6 * 2;
    if (0 < iVar6) {
      memcpy(local_e8,(void *)*puVar9,uVar7);
    }
    if (0x9f < uVar7) break;
    local_e8[iVar6] = 0;
    local_168[0] = this;
    pFVar5 = UE::Core::Private::DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>
                       (local_168);
    (*(code *)*param_3)(pFVar5,local_e8,param_4);
    uVar4 = local_178 & 0xffffffff;
    puVar9 = puVar9 + 2;
    uVar7 = (ulonglong)local_170 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}

// ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t> @ 141983410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTraceAuxiliaryImpl::
ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,bool param_2,pmf_41f21a49 *param_3,
          FLogCategoryLogTrace *param_4,void **param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  size_t sVar4;
  ulonglong uVar5;
  FTraceAuxiliaryImpl *pFVar6;
  int iVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FString *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  ulonglong local_188;
  FTraceAuxiliaryImpl *local_180;
  FTraceAuxiliaryImpl *local_178;
  void **local_170;
  FLogCategoryLogTrace *local_168;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 **local_130;
  undefined1 *local_128;
  undefined8 **local_120;
  FString **local_118;
  undefined1 *local_110;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  undefined2 local_e8 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_168 = param_4;
  local_170 = param_5;
  if (param_1 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                       ,0x1ae,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_190 = (undefined8 *)0x0;
  iStack_150 = 0;
  local_188 = 0;
  local_1a0 = (FString *)0x0;
  local_198 = 0;
  local_158 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iStack_150 = (int)sVar4;
  }
  local_f8._12_4_ = uStack_14c;
  local_f8.Size = iStack_150;
  local_128 = local_1b8;
  local_120 = &local_190;
  uStack_140 = 1;
  local_118 = &local_1a0;
  local_1b0[0] = 0;
  local_110 = local_1b0;
  local_130 = &local_128;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`ParseTokens'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call;
  local_148 = L",";
  local_108._12_4_ = uStack_13c;
  local_108.Size = 1;
  local_108.DataPtr = L",";
  local_f8.DataPtr = local_158;
  local_1b8[0] = param_2;
  UE::String::ParseTokens
            (&local_f8,&local_108,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_138,
             None);
  iVar2 = (int)local_188;
  uVar5 = (ulonglong)(int)local_188;
  puVar12 = local_190 + uVar5 * 2;
  puVar9 = local_190;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1a8);
    }
    if (puVar9 == puVar12) {
      iVar2 = (int)local_198;
      pFVar10 = local_1a0 + (int)local_198;
      pFVar8 = local_1a0;
      while( true ) {
        if ((int)local_198 != iVar2) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (pFVar8 == pFVar10) break;
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        local_178 = this;
        pFVar6 = UE::Core::Private::
                 DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>(&local_178);
        (*(code *)*param_3)(pFVar6,pwVar11,local_168,*(undefined8 *)local_170);
        pFVar8 = pFVar8 + 1;
      }
      DestructItems<FString,int>(local_1a0,(int)local_198);
      if (local_1a0 != (FString *)0x0) {
        FMemory::Free(local_1a0);
      }
      if (local_190 != (undefined8 *)0x0) {
        FMemory::Free(local_190);
      }
      return;
    }
    iVar7 = 0x4f;
    if (*(int *)(puVar9 + 1) < 0x4f) {
      iVar7 = *(int *)(puVar9 + 1);
    }
    uVar5 = (longlong)iVar7 * 2;
    if (0 < iVar7) {
      memcpy(local_e8,(void *)*puVar9,uVar5);
    }
    if (0x9f < uVar5) break;
    local_e8[iVar7] = 0;
    local_180 = this;
    pFVar6 = UE::Core::Private::DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>
                       (&local_180);
    (*(code *)*param_3)(pFVar6,local_e8,local_168,*(undefined8 *)local_170);
    uVar5 = local_188 & 0xffffffff;
    puVar9 = puVar9 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}

// ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t> @ 1419836d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::
ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,bool param_2,pmf_41f21a49 *param_3,
          FLogCategoryBase *param_4,void **param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  size_t sVar4;
  ulonglong uVar5;
  FTraceAuxiliaryImpl *pFVar6;
  int iVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  FString *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  ulonglong local_188;
  FTraceAuxiliaryImpl *local_180;
  FTraceAuxiliaryImpl *local_178;
  void **local_170;
  FLogCategoryBase *local_168;
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 **local_130;
  undefined1 *local_128;
  undefined8 **local_120;
  FString **local_118;
  undefined1 *local_110;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  undefined2 local_e8 [80];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_168 = param_4;
  local_170 = param_5;
  if (param_1 == (wchar_t *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                       ,0x1ae,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_190 = (undefined8 *)0x0;
  iStack_150 = 0;
  local_188 = 0;
  local_1a0 = (FString *)0x0;
  local_198 = 0;
  local_158 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    iStack_150 = (int)sVar4;
  }
  local_f8._12_4_ = uStack_14c;
  local_f8.Size = iStack_150;
  local_128 = local_1b8;
  local_120 = &local_190;
  uStack_140 = 1;
  local_118 = &local_1a0;
  local_1b0[0] = 0;
  local_110 = local_1b0;
  local_130 = &local_128;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`ParseTokens'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::Call;
  local_148 = L",";
  local_108._12_4_ = uStack_13c;
  local_108.Size = 1;
  local_108.DataPtr = L",";
  local_f8.DataPtr = local_158;
  local_1b8[0] = param_2;
  UE::String::ParseTokens
            (&local_f8,&local_108,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_138,
             None);
  iVar2 = (int)local_188;
  uVar5 = (ulonglong)(int)local_188;
  puVar12 = local_190 + uVar5 * 2;
  puVar9 = local_190;
  while( true ) {
    if ((int)uVar5 != iVar2) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1a8);
    }
    if (puVar9 == puVar12) {
      iVar2 = (int)local_198;
      pFVar10 = local_1a0 + (int)local_198;
      pFVar8 = local_1a0;
      while( true ) {
        if ((int)local_198 != iVar2) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (pFVar8 == pFVar10) break;
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        local_178 = this;
        pFVar6 = UE::Core::Private::
                 DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>(&local_178);
        (*(code *)*param_3)(pFVar6,pwVar11,local_168,*(undefined8 *)local_170);
        pFVar8 = pFVar8 + 1;
      }
      DestructItems<FString,int>(local_1a0,(int)local_198);
      if (local_1a0 != (FString *)0x0) {
        FMemory::Free(local_1a0);
      }
      if (local_190 != (undefined8 *)0x0) {
        FMemory::Free(local_190);
      }
      return;
    }
    iVar7 = 0x4f;
    if (*(int *)(puVar9 + 1) < 0x4f) {
      iVar7 = *(int *)(puVar9 + 1);
    }
    uVar5 = (longlong)iVar7 * 2;
    if (0 < iVar7) {
      memcpy(local_e8,(void *)*puVar9,uVar5);
    }
    if (0x9f < uVar5) break;
    local_e8[iVar7] = 0;
    local_180 = this;
    pFVar6 = UE::Core::Private::DereferenceIfNecessary<FTraceAuxiliaryImpl,FTraceAuxiliaryImpl_*>
                       (&local_180);
    (*(code *)*param_3)(pFVar6,local_e8,local_168,*(undefined8 *)local_170);
    uVar5 = local_188 & 0xffffffff;
    puVar9 = puVar9 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}

// AddCommandlineChannel @ 14198a5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::AddCommandlineChannel
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2)

{
  undefined1 *puVar1;
  wchar_t wVar2;
  FTraceAuxiliaryImpl *pFVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  FTraceAuxiliaryImpl *pFVar8;
  wchar_t *pwVar9;
  TPairInitializer<unsigned_int_const_&,FTraceAuxiliaryImpl::FChannelEntry_&&> local_res8;
  FChannelEntry **local_48;
  void **local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_res8.Key._0_4_ = 0x1505;
  wVar2 = *param_1;
  pwVar9 = param_1;
  while (wVar2 != L'\0') {
    pwVar9 = pwVar9 + 1;
    local_res8.Key._0_4_ = (uint)local_res8.Key * 0x21 + ((ushort)wVar2 | 0x20);
    wVar2 = *pwVar9;
  }
  local_res8.Value._0_4_ = (uint)local_res8.Key;
  iVar6 = TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<unsigned_int>
                    ((TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)this,(uint)local_res8.Key,(uint *)&local_res8);
  if (iVar6 != -1) {
    pFVar3 = *(FTraceAuxiliaryImpl **)&(this->CommandlineChannels).field_0x1400;
    pFVar8 = this;
    if (pFVar3 != (FTraceAuxiliaryImpl *)0x0) {
      pFVar8 = pFVar3;
    }
    puVar1 = &(pFVar8->CommandlineChannels).field_0x0 + (longlong)iVar6 * 0x28;
    puVar7 = puVar1 + 8;
    if (puVar1 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 != (undefined1 *)0x0) {
      return;
    }
  }
  local_48 = &local_res8.Value;
  local_38 = (void *)0x0;
  local_40 = &local_38;
  local_30 = 0;
  local_28 = 0;
  TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FTraceAuxiliaryImpl::FChannelEntry_&&>_>
            ((TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)this,&local_res8,(bool *)&local_48);
  uVar4 = (uint)local_res8.Key;
  pFVar3 = *(FTraceAuxiliaryImpl **)&(this->CommandlineChannels).field_0x1400;
  pFVar8 = this;
  if (pFVar3 != (FTraceAuxiliaryImpl *)0x0) {
    pFVar8 = pFVar3;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  ::FString::operator=
            ((FString *)(&(pFVar8->CommandlineChannels).field_0x8 + (longlong)(int)uVar4 * 0x28),
             param_1);
  bVar5 = UE::Trace::IsTracing();
  if ((bVar5) && ((&(pFVar8->CommandlineChannels).field_0x18)[(longlong)(int)uVar4 * 0x28] == '\0'))
  {
    if (*(int *)(&(pFVar8->CommandlineChannels).field_0x10 + (longlong)(int)uVar4 * 0x28) == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = *(wchar_t **)(&(pFVar8->CommandlineChannels).field_0x8 + (longlong)(int)uVar4 * 0x28)
      ;
    }
    bVar5 = EnableChannel<wchar_t_const_*>(this,pwVar9,param_2,(FString *)0x0);
    (&(pFVar8->CommandlineChannels).field_0x18)[(longlong)(int)uVar4 * 0x28] = bVar5;
  }
  return;
}

// AddCommandlineChannels @ 14198a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::AddCommandlineChannels(FTraceAuxiliaryImpl *this,wchar_t *param_1)

{
  pmf_54149989 local_res18 [2];
  
  local_res18[0] = (pmf_54149989)AddCommandlineChannel;
  ForEachChannel<void_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&),FLogCategoryLogTrace_&>
            (this,param_1,true,local_res18,&LogTrace);
  return;
}

// Connect @ 14198f400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::Connect
          (FTraceAuxiliaryImpl *this,EConnectionType param_1,wchar_t *param_2,
          FLogCategoryBase *param_3,ushort param_4)

{
  FCurrentTraceTarget *pFVar1;
  EConnectionType EVar2;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  bool local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  int local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  bVar4 = UE::Trace::IsTracing();
  if (bVar4) {
    if ((Error < param_3->CompileTimeVerbosity) && (Error < param_3->Verbosity)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
    }
    return true;
  }
  if (param_1 == Network) {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId599,"FTraceAux_SendToHost",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,599);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId599);
    }
    iVar14 = 0;
    local_88.DataPtr = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar7 = wcslen(param_2);
      iVar14 = (int)sVar7;
    }
    local_88.Size = iVar14;
    local_78.DataPtr = (wchar_t *)((ulonglong)local_78.DataPtr._4_4_ << 0x20);
    iVar6 = UE::String::FindFirstChar(&local_88,L':',CaseSensitive);
    if (iVar6 != -1) {
      iVar10 = (iVar14 - iVar6) + -1;
      iVar13 = iVar14;
      if (iVar10 < iVar14) {
        iVar13 = iVar10;
      }
      iVar10 = 0;
      if (0 < iVar13) {
        iVar10 = iVar13;
      }
      local_78.DataPtr = (wchar_t *)_wtoi64(param_2 + ((longlong)iVar14 - (longlong)iVar10));
      iVar13 = iVar14;
      if (iVar6 < iVar14) {
        iVar13 = iVar6;
      }
      iVar14 = 0;
      if (0 < iVar13) {
        iVar14 = iVar13;
      }
      local_88.Size = iVar14;
      local_88.DataPtr = param_2;
    }
    pFVar8 = ::FString::ConstructFromPtrSize((FString *)&local_48,param_2,iVar14);
    local_58 = 0;
    local_88.DataPtr = (wchar_t *)0x0;
    if (&local_38 != pFVar8) {
      local_88.DataPtr = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58 = (pFVar8->Data).ArrayNum;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    pwVar3 = local_88.DataPtr;
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    pFVar9 = (FScriptContainerElement *)pwVar3;
    if (local_58 == 0) {
      pFVar9 = (FScriptContainerElement *)local_88.DataPtr;
    }
    pFVar11 = (FScriptContainerElement *)L"";
    if (local_58 != 0) {
      pFVar11 = (FScriptContainerElement *)pwVar3;
    }
    local_88.DataPtr = (wchar_t *)pFVar9;
    bVar5 = UE::Trace::SendTo((wchar_t *)pFVar11,(uint)local_78.DataPtr,param_4);
    if (bVar5) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
      (this->CurrentTraceTarget).TraceType = Network;
      ::FString::operator=(&(this->CurrentTraceTarget).TraceDest,param_2);
      pFVar9 = (FScriptContainerElement *)&this->CurrentTargetLock;
      ReleaseSRWLockExclusive((PSRWLOCK)pFVar9);
      if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
      local_98 = true;
      if ((Warning < param_3->CompileTimeVerbosity) && (Warning < param_3->Verbosity)) {
        AcquireSRWLockShared((PSRWLOCK)pFVar9);
        local_58 = (this->CurrentTraceTarget).TraceDest.Data.ArrayNum;
        local_78.DataPtr =
             (wchar_t *)(this->CurrentTraceTarget).TraceDest.Data.AllocatorInstance.Data;
        local_88.DataPtr = (wchar_t *)0x0;
        local_88.Size = local_58;
        if (local_58 == 0) {
          local_88.Size = 0;
          local_88._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58,0,(ForAnyElementType *)&local_88,local_58,
                     (int *)&local_88.field_0xc);
          memcpy(local_88.DataPtr,local_78.DataPtr,(longlong)local_58 * 2);
        }
        ReleaseSRWLockShared((PSRWLOCK)pFVar9);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,param_3);
        if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.DataPtr);
        }
      }
    }
    else {
      if ((Error < param_3->CompileTimeVerbosity) && (Error < param_3->Verbosity)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
      }
      if ((FScriptContainerElement *)pwVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pwVar3);
      }
      pFVar9 = (FScriptContainerElement *)&this->CurrentTargetLock;
      local_78.DataPtr = (wchar_t *)pFVar9;
      if ((param_3->CompileTimeVerbosity < Error) || (param_3->Verbosity < Error)) {
        local_98 = false;
      }
      else {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,param_3);
        local_98 = false;
        pFVar9 = (FScriptContainerElement *)local_78.DataPtr;
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_14198fa13;
  }
  if (param_1 != File) {
    if (param_1 != None) {
      if (param_3->CompileTimeVerbosity < Error) {
        return false;
      }
      if (param_3->Verbosity < Error) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Unknown_trace_c_1506c5378,param_3);
      return false;
    }
    if (param_3->CompileTimeVerbosity < Log) {
      return false;
    }
    if (param_3->Verbosity < Log) {
      return false;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_3);
    return false;
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId612,"FTraceAux_WriteToFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x264);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId612);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar5 = FinalizeFilePath(this,param_2,&local_68,param_3);
  if (bVar5) {
    iVar14 = 0;
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar12.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar5 = UE::Trace::WriteTo((wchar_t *)FVar12.Data,param_4);
    if (!bVar5) {
      if (param_2 != (wchar_t *)0x0) {
        sVar7 = wcslen(param_2);
        iVar14 = (int)sVar7;
      }
      local_88.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      local_78.Size = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        local_78.Size = 0;
      }
      local_48.Size = iVar14;
      local_88.Size = local_78.Size;
      local_78.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
      local_78._12_4_ = local_88._12_4_;
      local_48.DataPtr = param_2;
      bVar5 = FPathViews::Equals(&local_78,&local_48);
      if (Error < param_3->CompileTimeVerbosity) {
        if (bVar5) {
          if (Error < param_3->Verbosity) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
          }
        }
        else if (Error < param_3->Verbosity) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
        }
      }
      goto LAB_14198f891;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    (this->CurrentTraceTarget).TraceType = File;
    pFVar1 = &this->CurrentTraceTarget;
    if (pFVar1 != (FCurrentTraceTarget *)&local_68) {
      pFVar9 = (pFVar1->TraceDest).Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pFVar1->TraceDest).Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->CurrentTraceTarget).TraceDest.Data.ArrayNum = local_68.Data.ArrayNum;
      (this->CurrentTraceTarget).TraceDest.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_98 = true;
    if ((Warning < param_3->CompileTimeVerbosity) && (Warning < param_3->Verbosity)) {
      AcquireSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
      iVar14 = (this->CurrentTraceTarget).TraceDest.Data.ArrayNum;
      local_78.DataPtr = (wchar_t *)(this->CurrentTraceTarget).TraceDest.Data.AllocatorInstance.Data
      ;
      local_88.DataPtr = (wchar_t *)0x0;
      local_88.Size = iVar14;
      if (iVar14 == 0) {
        local_88.Size = 0;
        local_88._12_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar14,0,(ForAnyElementType *)&local_88,iVar14,(int *)&local_88.field_0xc);
        memcpy(local_88.DataPtr,local_78.DataPtr,(longlong)iVar14 * 2);
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,param_3);
      if ((FScriptContainerElement *)local_88.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.DataPtr);
      }
    }
  }
  else {
LAB_14198f891:
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_98 = false;
    if ((Fatal < param_3->CompileTimeVerbosity) && (Fatal < param_3->Verbosity)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,param_3);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar9 = (FScriptContainerElement *)&this->CurrentTargetLock;
LAB_14198fa13:
  if (local_98 != false) {
    local_78.DataPtr = (wchar_t *)0x0;
    local_78.Size = 0;
    local_78._12_4_ = 0;
    AcquireSRWLockShared((PSRWLOCK)pFVar9);
    iVar6 = (this->CurrentTraceTarget).TraceDest.Data.ArrayNum;
    EVar2 = (this->CurrentTraceTarget).TraceType;
    iVar14 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar14 = 0;
    }
    ::FString::AssignRange
              ((FString *)&local_78,
               (wchar_t *)(this->CurrentTraceTarget).TraceDest.Data.AllocatorInstance.Data,iVar14);
    ReleaseSRWLockShared((PSRWLOCK)pFVar9);
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&FTraceAuxiliary::OnTraceStarted,EVar2,(FString *)&local_78);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId643,"FTraceAux_OnTraceStarted",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x283);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId643);
      TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&FTraceAuxiliary::OnTraceStarted,EVar2,(FString *)&local_78);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_78.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
  }
  return local_98;
}

// ConnectRelay @ 14198fb50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::ConnectRelay
          (FTraceAuxiliaryImpl *this,ulong64 param_1,
          _func___cdecl_bool_ulong64_void_ptr_uint *param_2,_func___cdecl_void_ulong64 *param_3,
          ushort param_4)

{
  bool bVar1;
  int iVar2;
  FString local_18;
  
  bVar1 = UE::Trace::IsTracing();
  if (bVar1) {
    if (2 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
    bVar1 = true;
  }
  else {
    bVar1 = UE::Trace::RelayTo(param_1,param_2,param_3,param_4);
    if (bVar1) {
      if (3 < (byte)LogTrace._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
      }
      ::FString::PrintfImpl(&local_18,L"Relay endpoint (Handle: 0x%llx)");
      AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
      (this->CurrentTraceTarget).TraceType = Relay;
      iVar2 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      ::FString::AssignRange
                (&(this->CurrentTraceTarget).TraceDest,
                 (wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
      if (CpuChannel->Enabled < 0) {
        TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
        ::Broadcast(&FTraceAuxiliary::OnTraceStarted,Relay,&local_18);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId673,"FTraceAux_OnTraceStarted",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                   ,0x2a1);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId673);
        TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
        ::Broadcast(&FTraceAuxiliary::OnTraceStarted,Relay,&local_18);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else if (1 < (byte)LogTrace._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTrace);
    }
  }
  return bVar1;
}

// DisableChannels @ 1419915e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::DisableChannels
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2)

{
  undefined1 auStackY_188 [32];
  pmf_41f21a49 local_158;
  pmf_41f21a49 local_150;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == (wchar_t *)0x0) {
    local_148.Base = local_128;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    local_148.CurPos = local_128;
    local_148.End = (wchar_t *)local_28;
    UE::Trace::EnumerateChannels
              (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>,&local_148);
    local_158 = (pmf_41f21a49)DisableChannel<wchar_t_const_*>;
    local_150 = (pmf_41f21a49)0x0;
    if (local_148.End < local_148.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = L'\0';
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (this,local_148.Base,true,&local_158,param_2,(void **)&local_150);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  }
  else {
    local_150 = (pmf_41f21a49)DisableChannel<wchar_t_const_*>;
    local_158 = (pmf_41f21a49)0x0;
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (this,param_1,true,&local_150,param_2,(void **)&local_158);
  }
  return;
}

// DisableChannels @ 141991700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::DisableChannels
          (FTraceAuxiliaryImpl *this,TArrayView<unsigned_int_const_,int> *param_1,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint local_res10 [2];
  FString local_38;
  uint *local_28;
  FString *local_20;
  
  puVar2 = param_1->DataPtr;
  puVar1 = puVar2 + param_1->ArrayNum;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_res10[0] = *puVar2;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    DisableChannel<unsigned_int>(this,local_res10[0],(FLogCategoryBase *)&LogTrace,&local_38);
    if ((param_2 !=
         (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *)0x0) && (1 < local_38.Data.ArrayNum)) {
      local_28 = local_res10;
      local_20 = &local_38;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_const_&>_>
                ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *)param_2,
                 (TPairInitializer<unsigned_int_const_&,FString_const_&> *)&stack0x00000020,
                 (bool *)&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableChannels @ 141992ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::EnableChannels
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2)

{
  undefined8 local_res10 [2];
  pmf_41f21a49 local_res20;
  
  if (param_1 != (wchar_t *)0x0) {
    local_res10[0] = 0;
    local_res20 = (pmf_41f21a49)EnableChannel<wchar_t_const_*>;
    ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryBase_const_&,std::nullptr_t>
              (this,param_1,true,&local_res20,param_2,(void **)local_res10);
  }
  return;
}

// EnableChannels @ 141992f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::EnableChannels
          (FTraceAuxiliaryImpl *this,TArrayView<unsigned_int_const_,int> *param_1,
          TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint local_res10 [2];
  FString local_38;
  uint *local_28;
  FString *local_20;
  
  puVar2 = param_1->DataPtr;
  puVar1 = puVar2 + param_1->ArrayNum;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_res10[0] = *puVar2;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    EnableChannel<unsigned_int>(this,local_res10[0],(FLogCategoryBase *)&LogTrace,&local_38);
    if ((param_2 !=
         (TMap<unsigned_int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>_>
          *)0x0) && (1 < local_38.Data.ArrayNum)) {
      local_28 = local_res10;
      local_20 = &local_38;
      TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FString_const_&>_>
                ((TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
                  *)param_2,
                 (TPairInitializer<unsigned_int_const_&,FString_const_&> *)&stack0x00000020,
                 (bool *)&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableCommandlineChannels @ 141992ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceAuxiliaryImpl::EnableCommandlineChannels(FTraceAuxiliaryImpl *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FTraceAuxiliaryImpl *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  FTraceAuxiliaryImpl *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_5c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> TStack_50;
  undefined8 uStack_30;
  
  bVar6 = FForkProcessHelper::IsForkRequested();
  if ((!bVar6) || (bVar6 = FForkProcessHelper::IsForkedChildProcess(), bVar6)) {
    iVar14 = 0;
    iVar16 = 0;
    uVar7 = 1;
    puVar1 = &(this->CommandlineChannels).field_0x1410;
    iVar3 = *(int *)&(this->CommandlineChannels).field_0x1428;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->CommandlineChannels).field_0x1420;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar13 = *puVar17;
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1419930be;
        uVar13 = puVar17[lVar9 + 1];
      }
      uVar7 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = local_res18 + -1 + iVar16;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_1419930be:
    uVar13 = *(uint *)&(this->CommandlineChannels).field_0x1428;
    uVar12 = uVar13 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar7,iVar14);
    TStack_50.CurrentBitIndex = iVar8;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_50._28_4_ = iVar8;
    TStack_50.BaseBitIndex = iVar16;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(this->CommandlineChannels).field_0x1408 -
                         *(int *)&(this->CommandlineChannels).field_0x1434);
    TStack_50.Array = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(this->CommandlineChannels).field_0x1428;
    if (uVar13 != uVar7) {
      puVar15 = *(undefined1 **)&(this->CommandlineChannels).field_0x1420;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar9 = (longlong)iVar14;
        uVar12 = uVar12 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1419931d0;
        uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar13 = (int)lVar9 + -1 + uVar12;
      if ((int)uVar7 < (int)uVar13) {
        uVar13 = uVar7;
      }
    }
LAB_1419931d0:
    while( true ) {
      if (*(int *)&(this->CommandlineChannels).field_0x1408 -
          *(int *)&(this->CommandlineChannels).field_0x1434 != (int)uStack_30) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      lVar9 = (longlong)TStack_50.CurrentBitIndex;
      if ((TStack_50.CurrentBitIndex == uVar13) &&
         (TStack_50.Array ==
          (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) break;
      pFVar4 = *(FTraceAuxiliaryImpl **)&(this->CommandlineChannels).field_0x1400;
      pFVar11 = this;
      if (pFVar4 != (FTraceAuxiliaryImpl *)0x0) {
        pFVar11 = pFVar4;
      }
      if ((&(pFVar11->CommandlineChannels).field_0x18)[lVar9 * 0x28] == '\0') {
        if (*(int *)(&(pFVar11->CommandlineChannels).field_0x10 + lVar9 * 0x28) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(&(pFVar11->CommandlineChannels).field_0x8 + lVar9 * 0x28);
        }
        bVar6 = EnableChannel<wchar_t_const_*>
                          (this,pwVar10,(FLogCategoryBase *)&LogTrace,(FString *)0x0);
        (&(pFVar11->CommandlineChannels).field_0x18)[lVar9 * 0x28] = bVar6;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

// EnableCommandlineChannelsPostInitialize @ 141993290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTraceAuxiliaryImpl::EnableCommandlineChannelsPostInitialize(FTraceAuxiliaryImpl *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FTraceAuxiliaryImpl *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  FTraceAuxiliaryImpl *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> TStack_50;
  undefined8 uStack_30;
  
  iVar14 = 0;
  puVar1 = &(this->CommandlineChannels).field_0x1410;
  iVar3 = *(int *)&(this->CommandlineChannels).field_0x1428;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->CommandlineChannels).field_0x1420;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14199332d;
      uVar13 = puVar17[lVar9 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14199332d:
  uVar13 = *(uint *)&(this->CommandlineChannels).field_0x1428;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar14);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->CommandlineChannels).field_0x1408 -
                       *(int *)&(this->CommandlineChannels).field_0x1434);
  TStack_50.Array = (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->CommandlineChannels).field_0x1428;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->CommandlineChannels).field_0x1420;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_141993430;
      uVar13 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_141993430:
  while( true ) {
    if (*(int *)&(this->CommandlineChannels).field_0x1408 -
        *(int *)&(this->CommandlineChannels).field_0x1434 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_50.CurrentBitIndex;
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)puVar1)) break;
    pFVar4 = *(FTraceAuxiliaryImpl **)&(this->CommandlineChannels).field_0x1400;
    pFVar11 = this;
    if (pFVar4 != (FTraceAuxiliaryImpl *)0x0) {
      pFVar11 = pFVar4;
    }
    if (*(int *)(&(pFVar11->CommandlineChannels).field_0x10 + lVar9 * 0x28) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(&(pFVar11->CommandlineChannels).field_0x8 + lVar9 * 0x28);
    }
    bVar6 = EnableChannel<wchar_t_const_*>
                      (this,pwVar10,(FLogCategoryBase *)&LogTrace,(FString *)0x0);
    (&(pFVar11->CommandlineChannels).field_0x18)[lVar9 * 0x28] = bVar6;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::FindFirstSetBit
              (&TStack_50);
  }
  return;
}

// FinalizeFilePath @ 141993c00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::FinalizeFilePath
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FString *param_2,FLogCategoryBase *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  FString *pFVar11;
  TStringView<wchar_t> *pTVar12;
  IFileManager *pIVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FDateTime local_res10;
  FString local_1d8;
  FString local_1c8;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FDateTime local_158 [2];
  wchar_t *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  wchar_t *local_f8;
  int local_f0;
  TStringView<wchar_t> local_e8;
  wchar_t *local_d8;
  undefined4 local_d0;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int local_b0;
  FString local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  iVar9 = 0;
  iVar8 = iVar9;
  local_148 = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    iVar8 = (int)sVar10;
  }
  iStack_140 = iVar8;
  if (iVar8 == 0) {
    FDateTime::Now();
    pFVar11 = FDateTime::ToString(&local_res10,&local_a8,L"%Y%m%d_%H%M%S_");
    ::FString::AppendfImpl(pFVar11,L"%06llX.utrace");
    local_1a8.Data = (FScriptContainerElement *)0x0;
    local_1a0 = (pFVar11->Data).ArrayNum;
    lVar15 = (longlong)local_1a0;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_1a0 == 0) {
      local_19c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1a0,0,&local_1a8,local_1a0,&local_19c);
      memcpy(local_1a8.Data,pFVar1,lVar15 * 2);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_1a0 != 0) {
      FVar14.Data = local_1a8.Data;
    }
    bVar5 = FinalizeFilePath(this,(wchar_t *)FVar14.Data,param_2,param_3);
    FVar14.Data = local_1a8.Data;
    goto LAB_14199428e;
  }
  local_98._12_4_ = uStack_13c;
  local_98.Size = iVar8;
  local_98.DataPtr = local_148;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  bVar5 = FPathViews::IsRelativePath(&local_98);
  if (bVar5) {
    pFVar11 = FPaths::ProfilingDir(&local_88);
    local_108.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    iVar8 = (pFVar11->Data).ArrayNum;
    local_108.Size = iVar8 + -1;
    if (iVar8 == 0) {
      local_108.Size = iVar9;
    }
    local_f0 = iVar9;
    local_f8 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar10 = wcslen(param_1);
      local_f0 = (int)sVar10;
    }
    FPaths::CombineInternal(&local_198,&local_108,2);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    local_1d8.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
    local_1d8.Data.ArrayNum = local_198.Data.ArrayNum;
    local_1d8.Data.ArrayMax = local_198.Data.ArrayMax;
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((iVar8 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    bVar5 = FPathViews::IsSeparator(*param_1);
    if ((!bVar5) || ((1 < iVar8 && (bVar5 = FPathViews::IsSeparator(param_1[1]), bVar5)))) {
      ::FString::operator=(&local_1d8,param_1);
    }
    else {
      pFVar11 = FPaths::ProfilingDir(&local_78);
      local_e8.DataPtr = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      iVar8 = (pFVar11->Data).ArrayNum;
      local_e8.Size = iVar8 + -1;
      if (iVar8 == 0) {
        local_e8.Size = iVar9;
      }
      local_d8 = param_1;
      sVar10 = wcslen(param_1);
      local_d0 = (undefined4)sVar10;
      FPaths::CombineInternal(&local_188,&local_e8,2);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      local_1d8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
      uVar3._0_4_ = local_188.Data.ArrayNum;
      uVar3._4_4_ = local_188.Data.ArrayMax;
      local_1d8.Data.ArrayNum = local_188.Data.ArrayNum;
      local_1d8.Data.ArrayMax = local_188.Data.ArrayMax;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        local_1d8.Data._8_8_ = uVar3;
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  local_138.DataPtr = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
  local_138.Size = local_1d8.Data.ArrayNum + -1;
  if (local_1d8.Data.ArrayNum == 0) {
    local_138.Size = iVar9;
  }
  pTVar12 = FPathViews::GetCleanFilename(&local_48,&local_138);
  if (pTVar12->Size == 0) {
    FDateTime::Now();
    pFVar11 = FDateTime::ToString(local_158,&local_68,L"%Y%m%d_%H%M%S_");
    ::FString::AppendfImpl(pFVar11,L"%06llX.utrace");
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0 = (pFVar11->Data).ArrayNum;
    lVar15 = (longlong)local_1b0;
    pFVar1 = (pFVar11->Data).AllocatorInstance.Data;
    if (local_1b0 == 0) {
      local_1ac = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b0,0,&local_1b8,local_1b0,&local_1ac);
      memcpy(local_1b8.Data,pFVar1,lVar15 * 2);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_c8.DataPtr = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
    local_c8.Size = local_1d8.Data.ArrayNum + -1;
    if (local_1d8.Data.ArrayNum == 0) {
      local_c8.Size = iVar9;
    }
    local_b8 = local_1b8.Data;
    local_b0 = local_1b0 + -1;
    if (local_1b0 == 0) {
      local_b0 = iVar9;
    }
    FPaths::CombineInternal(&local_178,&local_c8,2);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    uVar3 = local_178.Data._8_8_;
    iVar8 = local_178.Data.ArrayNum;
    local_1d8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    uVar4 = local_178.Data._8_8_;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = (int)uVar3;
    local_178.Data.ArrayMax = SUB84(uVar3,4);
    local_1d8.Data.ArrayNum = local_178.Data.ArrayNum;
    local_1d8.Data.ArrayMax = local_178.Data.ArrayMax;
    local_178.Data._8_8_ = uVar4;
    if (local_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data);
      goto LAB_141994072;
    }
  }
  else {
LAB_141994072:
    iVar8 = local_1d8.Data.ArrayNum;
  }
  local_128.DataPtr = (wchar_t *)local_1d8.Data.AllocatorInstance.Data;
  local_128.Size = iVar8 + -1;
  if (iVar8 == 0) {
    local_128.Size = iVar9;
  }
  pTVar12 = FPathViews::GetExtension(&local_38,&local_128,false);
  iVar8 = (int)*(undefined8 *)&pTVar12->Size;
  if (iVar8 == 0) {
LAB_1419940ce:
    ::FString::FString(&local_118,L".utrace");
    pFVar11 = FPaths::SetExtension(&local_58,&local_1d8,&local_118);
    if (&local_1d8 != pFVar11) {
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      local_1d8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_1d8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar9 = FGenericPlatformStricmp::Strnicmp(pTVar12->DataPtr,L"utrace",(longlong)iVar8);
    if ((iVar9 != 0) || (L"utrace"[iVar8] != L'\0')) goto LAB_1419940ce;
  }
  pIVar13 = IFileManager::Get();
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar13 + 0x108))(pIVar13,&local_1c8,FVar14.Data);
  FPaths::GetPath(&local_168,&local_1c8);
  bVar5 = FPaths::IsDrive(&local_168);
  if (bVar5) {
LAB_1419941e1:
    if (this->bTruncateFile == false) {
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_1c8.Data.ArrayNum != 0) {
        FVar14.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      cVar7 = (**(code **)((longlong)*pIVar13 + 0x50))(pIVar13,FVar14.Data);
      if (cVar7 != '\0') {
        if ((Error < param_3->CompileTimeVerbosity) && (Error < param_3->Verbosity)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
        }
        goto LAB_14199422d;
      }
    }
    if (param_2 != &local_1c8) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_1c8.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_1c8.Data.ArrayMax;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    bVar5 = true;
  }
  else {
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar14.Data = local_168.Data.AllocatorInstance.Data;
    }
    cVar7 = (**(code **)((longlong)*pIVar13 + 0x60))(pIVar13,FVar14.Data,1);
    if (cVar7 != '\0') goto LAB_1419941e1;
    if ((param_3->CompileTimeVerbosity < Warning) || (param_3->Verbosity < Warning)) {
LAB_14199422d:
      bVar5 = false;
    }
    else {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_3);
      bVar5 = false;
    }
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
  }
LAB_14199428e:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return bVar5;
}

// FrameBasedUpdate @ 1419944c0

void __cdecl FTraceAuxiliaryImpl::FrameBasedUpdate(void)

{
  if (CpuChannel->Enabled < 0) {
    UE::Trace::Update();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId902,"FTraceAux_Trace_Update",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
             ,0x386);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId902);
  UE::Trace::Update();
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// FreezeReadOnlyChannels @ 1419946d0

void __thiscall FTraceAuxiliaryImpl::FreezeReadOnlyChannels(FTraceAuxiliaryImpl *this)

{
  this->bReadOnlyChannelsFrozen = true;
  return;
}

// GetActiveChannelsString @ 141994820

void __thiscall
FTraceAuxiliaryImpl::GetActiveChannelsString
          (FTraceAuxiliaryImpl *this,TStringBuilderBase<wchar_t> *param_1)

{
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,param_1);
  return;
}

// GetConnectionType @ 141994fc0

EConnectionType __thiscall FTraceAuxiliaryImpl::GetConnectionType(FTraceAuxiliaryImpl *this)

{
  EConnectionType EVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
  EVar1 = (this->CurrentTraceTarget).TraceType;
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
  return EVar1;
}

// GetDest @ 141995250

FString * __thiscall
FTraceAuxiliaryImpl::GetDest(FTraceAuxiliaryImpl *this,FString *__return_storage_ptr__)

{
  AcquireSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
  ::FString::FString(__return_storage_ptr__,&(this->CurrentTraceTarget).TraceDest);
  ReleaseSRWLockShared((PSRWLOCK)&this->CurrentTargetLock);
  return __return_storage_ptr__;
}

// HasCommandlineChannels @ 141995e60

bool __thiscall FTraceAuxiliaryImpl::HasCommandlineChannels(FTraceAuxiliaryImpl *this)

{
  return *(int *)&(this->CommandlineChannels).field_0x1408 !=
         *(int *)&(this->CommandlineChannels).field_0x1434;
}

// HashChannelName @ 141995ea0

uint __cdecl FTraceAuxiliaryImpl::HashChannelName(wchar_t *param_1)

{
  wchar_t wVar1;
  uint uVar2;
  
  uVar2 = 0x1505;
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    uVar2 = uVar2 * 0x21 + ((ushort)wVar1 | 0x20);
    wVar1 = *param_1;
  }
  return uVar2;
}

// IsConnected @ 1419a0b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTraceAuxiliaryImpl::IsConnected(FTraceAuxiliaryImpl *this,FGuid *param_1,FGuid *param_2)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  uint auStack_30 [2];
  uint local_28 [2];
  uint auStack_20 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  bVar1 = UE::Trace::IsTracingTo((uint (*) [4])local_38,(uint (*) [4])local_28);
  if (bVar1) {
    param_1->A = local_38[0];
    param_1->B = local_38[1];
    param_1->C = auStack_30[0];
    param_1->D = auStack_30[1];
    param_2->A = local_28[0];
    param_2->B = local_28[1];
    param_2->C = auStack_20[0];
    param_2->D = auStack_20[1];
  }
  return bVar1;
}

// IsConnected @ 1419a0b70

bool __thiscall FTraceAuxiliaryImpl::IsConnected(FTraceAuxiliaryImpl *this)

{
  if ((UE::Trace::Private::GDataHandle == 0) && (UE::Trace::Private::GPendingDataHandle == 0)) {
    return false;
  }
  return true;
}

// IsParentProcessAndPreFork @ 1419a0ba0

bool __thiscall FTraceAuxiliaryImpl::IsParentProcessAndPreFork(FTraceAuxiliaryImpl *this)

{
  bool bVar1;
  
  bVar1 = FForkProcessHelper::IsForkRequested();
  if (bVar1) {
    bVar1 = FForkProcessHelper::IsForkedChildProcess();
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// IsPaused @ 1419a0bf0

bool __thiscall FTraceAuxiliaryImpl::IsPaused(FTraceAuxiliaryImpl *this)

{
  return 1 < (this->PausedPreset).Data.ArrayNum;
}

// PauseChannels @ 1419a66a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceAuxiliaryImpl::PauseChannels(FTraceAuxiliaryImpl *this)

{
  wchar_t *pwVar1;
  undefined1 auStackY_178 [32];
  undefined8 local_148;
  pmf_41f21a49 local_140;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  UE::Trace::EnumerateChannels
            (`FTraceAuxiliaryImpl::GetActiveChannelsString'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&local_138);
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  ::FString::operator=(&this->PausedPreset,local_138.Base);
  local_148 = 0;
  local_140 = (pmf_41f21a49)DisableChannel<wchar_t_const_*>;
  if ((this->PausedPreset).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(this->PausedPreset).Data.AllocatorInstance.Data;
  }
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (this,pwVar1,true,&local_140,&LogTrace,(void **)&local_148);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// RegisterEndFrameCallbacks @ 1419a70e0

void __thiscall FTraceAuxiliaryImpl::RegisterEndFrameCallbacks(FTraceAuxiliaryImpl *this)

{
  FDelegateHandle FVar1;
  undefined1 local_res10 [24];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_res10);
                    /* WARNING: Load size is inaccurate */
  GEndFrameDelegateHandle.ID = *FVar1.ID;
  return;
}

// ResetCommandlineChannels @ 1419a8b00

void __thiscall FTraceAuxiliaryImpl::ResetCommandlineChannels(FTraceAuxiliaryImpl *this)

{
  undefined1 *puVar1;
  
  if (*(int *)&(this->CommandlineChannels).field_0x1408 !=
      *(int *)&(this->CommandlineChannels).field_0x1434) {
    TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::UnhashElements((TSet<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry,0>,TInlineSetAllocator<128,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)this);
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FTraceAuxiliaryImpl::FChannelEntry>_>,TInlineSparseArrayAllocator<128,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                       *)this,0,*(int *)&(this->CommandlineChannels).field_0x1408);
    puVar1 = &(this->CommandlineChannels).field_0x140c;
    *(undefined4 *)&(this->CommandlineChannels).field_0x1408 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>_>
                (0x28,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>_>
                           *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->CommandlineChannels).field_0x1434 = 0;
    *(undefined4 *)&(this->CommandlineChannels).field_0x1428 = 0;
    *(undefined4 *)&(this->CommandlineChannels).field_0x1430 = 0xffffffff;
  }
  return;
}

// ResumeChannels @ 1419a8e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTraceAuxiliaryImpl::ResumeChannels(FTraceAuxiliaryImpl *this)

{
  wchar_t *pwVar1;
  undefined8 local_res8;
  pmf_41f21a49 local_res10 [3];
  
  local_res8 = 0;
  local_res10[0] = (pmf_41f21a49)EnableChannel<wchar_t_const_*>;
  if ((this->PausedPreset).Data.ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(this->PausedPreset).Data.AllocatorInstance.Data;
  }
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (this,pwVar1,false,local_res10,&LogTrace,(void **)&local_res8);
  ::FString::Empty(&this->PausedPreset);
  return;
}

// SendSnapshot @ 1419a9190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::SendSnapshot
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,uint param_2,FLogCategoryBase *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  bool bVar3;
  LARGE_INTEGER local_res10;
  FString local_28 [2];
  
  QueryPerformanceCounter(&local_res10);
  pwVar2 = L"localhost";
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
  }
  if ((Display < param_3->CompileTimeVerbosity) && (Display < param_3->Verbosity)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_3);
  }
  bVar1 = UE::Trace::SendSnapshotTo(pwVar2,param_2);
  if (bVar1) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId982,"FTraceAux_OnSnapshotSaved",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x3d6);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId982);
    }
    ::FString::FString(local_28,pwVar2);
    TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
    ::Broadcast(&FTraceAuxiliary::OnSnapshotSaved,Network,local_28);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    if ((Warning < param_3->CompileTimeVerbosity) && (Warning < param_3->Verbosity)) {
      QueryPerformanceCounter(&local_res10);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,param_3);
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else if ((Fatal < param_3->CompileTimeVerbosity) && (Fatal < param_3->Verbosity)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,param_3);
  }
  return bVar1;
}

// SendToHost @ 1419a9310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::SendToHost
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2,ushort param_3)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  longlong lVar4;
  FString *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar11;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  pFVar9 = (FScriptContainerElement *)0x0;
  uVar10 = 0;
  uVar8 = 0;
  local_48.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    uVar10 = (uint)sVar3;
  }
  local_48.Size = uVar10;
  uVar2 = UE::String::FindFirstChar(&local_48,L':',CaseSensitive);
  uVar11 = uVar8;
  if (uVar2 != 0xffffffff) {
    uVar6 = (uVar10 - uVar2) - 1;
    uVar11 = uVar10;
    if ((int)uVar6 < (int)uVar10) {
      uVar11 = uVar6;
    }
    uVar6 = uVar8;
    if (0 < (int)uVar11) {
      uVar6 = uVar11;
    }
    lVar4 = _wtoi64(param_1 + ((longlong)(int)uVar10 - (longlong)(int)uVar6));
    uVar6 = uVar10;
    if ((int)uVar2 < (int)uVar10) {
      uVar6 = uVar2;
    }
    uVar10 = 0;
    uVar11 = (uint)lVar4;
    if (0 < (int)uVar6) {
      uVar10 = uVar6;
    }
  }
  pFVar5 = ::FString::ConstructFromPtrSize((FString *)&local_48,param_1,uVar10);
  if (&local_38 != pFVar5) {
    pFVar9 = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar8 = (pFVar5->Data).ArrayNum;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_48.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pFVar7 = (FScriptContainerElement *)L"";
  if (uVar8 != 0) {
    pFVar7 = pFVar9;
  }
  bVar1 = UE::Trace::SendTo((wchar_t *)pFVar7,uVar11,param_3);
  if (bVar1) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    (this->CurrentTraceTarget).TraceType = Network;
    ::FString::operator=(&(this->CurrentTraceTarget).TraceDest,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    bVar1 = true;
  }
  else {
    if ((Error < param_2->CompileTimeVerbosity) && (Error < param_2->Verbosity)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_2);
    }
    bVar1 = false;
  }
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return bVar1;
}

// SetTruncateFile @ 1419ab5d0

void __thiscall FTraceAuxiliaryImpl::SetTruncateFile(FTraceAuxiliaryImpl *this,bool param_1)

{
  this->bTruncateFile = param_1;
  return;
}

// StartEndFrameUpdate @ 1419abda0

void __thiscall FTraceAuxiliaryImpl::StartEndFrameUpdate(FTraceAuxiliaryImpl *this)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnEndFrame,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  (this->EndFrameUpdateHandle).ID = *FVar1.ID;
  return;
}

// StartWorkerThread @ 1419ac0e0

void __thiscall FTraceAuxiliaryImpl::StartWorkerThread(FTraceAuxiliaryImpl *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong64 *puVar6;
  ForAnyElementType *this_00;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  bVar3 = FForkProcessHelper::IsForkedChildProcess();
  if ((!bVar3) || (bVar4 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar3 = false, bVar4))
  {
    bVar3 = true;
  }
  if ((GWorkerThreadConfig == OnDemand) && (bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((this->bWorkerThreadStarted == false) && (bVar3)) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1049,"FTraceAux_StartWorkerThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x419);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1049);
    }
    uVar1 = (this->EndFrameUpdateHandle).ID;
    if (uVar1 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnEndFrame,(FWriteAccessScope *)&local_38);
      uVar7 = 0;
      if (0 < (int)FCoreDelegates::OnEndFrame._16_4_) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar7 < (int)FCoreDelegates::OnEndFrame._16_4_) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = (ForAnyElementType *)(FCoreDelegates::OnEndFrame._8_8_ + lVar8);
          if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
             && (puVar6 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
                *puVar6 == uVar1)) {
            if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_00->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10)
              ;
              *(undefined4 *)&this_00[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreDelegates::OnEndFrame,false);
            break;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar7 < (int)FCoreDelegates::OnEndFrame._16_4_);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    UE::Trace::StartWorkerThread();
    this->bWorkerThreadStarted = true;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// Stop @ 1419ac420

bool __thiscall FTraceAuxiliaryImpl::Stop(FTraceAuxiliaryImpl *this)

{
  EConnectionType EVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString local_28;
  
  bVar3 = FForkProcessHelper::IsForkRequested();
  if ((bVar3) && (bVar3 = FForkProcessHelper::IsForkedChildProcess(), !bVar3)) {
    return false;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId691,"FTraceAux_Stop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
               ,0x2b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId691);
  }
  bVar4 = UE::Trace::Stop();
  if (bVar4) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::Empty(&this->PausedPreset);
    AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    EVar1 = (this->CurrentTraceTarget).TraceType;
    (this->CurrentTraceTarget).TraceType = None;
    iVar2 = (this->CurrentTraceTarget).TraceDest.Data.ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    ::FString::AssignRange
              (&local_28,(wchar_t *)(this->CurrentTraceTarget).TraceDest.Data.AllocatorInstance.Data
               ,iVar5);
    ::FString::Reset(&(this->CurrentTraceTarget).TraceDest,0);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
    if (CpuChannel->Enabled < 0) {
      TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&FTraceAuxiliary::OnTraceStopped,EVar1,&local_28);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId710,"FTraceAux_OnTraceStopped",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                 ,0x2c6);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId710);
      TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&FTraceAuxiliary::OnTraceStopped,EVar1,&local_28);
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar4 = true;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = false;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// WriteSnapshot @ 1419b1680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::WriteSnapshot
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2)

{
  bool bVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  LARGE_INTEGER local_res20;
  FString local_28 [2];
  
  QueryPerformanceCounter(&local_res20);
  local_28[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].Data.ArrayNum = 0;
  local_28[0].Data.ArrayMax = 0;
  bVar1 = FinalizeFilePath(this,param_1,local_28,param_2);
  if (bVar1) {
    if ((Display < param_2->CompileTimeVerbosity) && (Display < param_2->Verbosity)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,param_2);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28[0].Data.ArrayNum != 0) {
      FVar2.Data = local_28[0].Data.AllocatorInstance.Data;
    }
    bVar1 = UE::Trace::WriteSnapshotTo((wchar_t *)FVar2.Data);
    if (bVar1) {
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId953,"FTraceAux_OnSnapshotSaved",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\TraceAuxiliary.cpp"
                   ,0x3b9);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId953);
      }
      TMulticastDelegate<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
      ::Broadcast(&FTraceAuxiliary::OnSnapshotSaved,File,local_28);
      if ((Warning < param_2->CompileTimeVerbosity) && (Warning < param_2->Verbosity)) {
        FWindowsPlatformTime::Seconds();
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,param_2);
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else if ((Fatal < param_2->CompileTimeVerbosity) && (Fatal < param_2->Verbosity)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,param_2);
    }
  }
  else {
    bVar1 = false;
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// WriteToFile @ 1419b1840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTraceAuxiliaryImpl::WriteToFile
          (FTraceAuxiliaryImpl *this,wchar_t *param_1,FLogCategoryBase *param_2,ushort param_3)

{
  FCurrentTraceTarget *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  size_t sVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar3 = FinalizeFilePath(this,param_1,&local_48,param_2);
  if (bVar3) {
    iVar6 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar3 = UE::Trace::WriteTo((wchar_t *)FVar5.Data,param_3);
    if (bVar3) {
      AcquireSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
      (this->CurrentTraceTarget).TraceType = File;
      pFVar1 = &this->CurrentTraceTarget;
      if (pFVar1 != (FCurrentTraceTarget *)&local_48) {
        pFVar2 = (pFVar1->TraceDest).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->TraceDest).Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (this->CurrentTraceTarget).TraceDest.Data.ArrayNum = local_48.Data.ArrayNum;
        (this->CurrentTraceTarget).TraceDest.Data.ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->CurrentTargetLock);
      bVar3 = true;
      goto LAB_1419b1933;
    }
    if (param_1 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_1);
      iVar6 = (int)sVar4;
    }
    local_38._12_4_ = local_28._12_4_;
    local_38.Size = iVar6;
    local_28.Size = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_28.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
    local_38.DataPtr = param_1;
    bVar3 = FPathViews::Equals(&local_28,&local_38);
    if (Error < param_2->CompileTimeVerbosity) {
      if (bVar3) {
        if (Error < param_2->Verbosity) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_2);
        }
      }
      else if (Error < param_2->Verbosity) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,param_2);
      }
    }
  }
  bVar3 = false;
LAB_1419b1933:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

