// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 9

// CreateHttpThread @ 14315b370

/* WARNING: Enum "Type": Some values do not have unique names */

FHttpThreadBase * __thiscall FCurlHttpManager::CreateHttpThread(FCurlHttpManager *this)

{
  FEventLoopHttpThread *this_00;
  FLegacyHttpThread *this_01;
  
  if (this->field_0x328 == '\0') {
    if (4 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    this_01 = ::operator_new(0x138);
    if (this_01 != (FLegacyHttpThread *)0x0) {
      FLegacyHttpThread::FLegacyHttpThread(this_01);
      this_01->_padding_ = (longlong)&FCurlHttpThread::_vftable__for__FRunnable__;
      this_01->_padding_ = (longlong)&FCurlHttpThread::_vftable__for__FSingleThreadRunnable__;
      this_01[1]._padding_ = 0;
      this_01[1]._padding_ = 0;
      this_01[1]._padding_ = 0;
      *(undefined4 *)&this_01[1]._padding_ = 0;
      *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0x80;
      *(undefined4 *)&this_01[1]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this_01[1]._padding_ + 4) = 0;
      this_01[1]._padding_ = 0;
      *(undefined4 *)&this_01[1]._padding_ = 0;
      return (FHttpThreadBase *)this_01;
    }
  }
  else {
    if (4 < (byte)LogInit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    this_00 = ::operator_new(0x6a0);
    if (this_00 != (FEventLoopHttpThread *)0x0) {
      FEventLoopHttpThread::FEventLoopHttpThread(this_00);
      this_00->_padding_ = (longlong)&FCurlMultiPollEventLoopHttpThread::_vftable__for__FRunnable__;
      this_00->_padding_ =
           (longlong)&FCurlMultiPollEventLoopHttpThread::_vftable__for__FSingleThreadRunnable__;
      *(undefined1 *)&this_00[10]._padding_ = 0;
      this_00[10]._padding_ = 0;
      this_00[10]._padding_ = 0;
      this_00[10]._padding_ = 0;
      *(undefined4 *)&this_00[10]._padding_ = 0;
      *(undefined4 *)((longlong)&this_00[10]._padding_ + 4) = 0x80;
      *(undefined4 *)&this_00[10]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&this_00[10]._padding_ + 4) = 0;
      this_00[10]._padding_ = 0;
      *(undefined4 *)&this_00[10]._padding_ = 0;
      return (FHttpThreadBase *)this_00;
    }
  }
  return (FHttpThreadBase *)0x0;
}

// InitCurl @ 14316b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCurlHttpManager::InitCurl(void)

{
  uint uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FName *pFVar9;
  FModuleManager *this;
  IModuleInterface *pIVar10;
  longlong lVar11;
  size_t sVar12;
  char *pcVar13;
  FHttpModule *pFVar14;
  uchar *_Str;
  wchar_t *pwVar15;
  ISocketSubsystem *pIVar16;
  longlong *plVar17;
  FString *pFVar18;
  uint uVar19;
  undefined1 auStackY_a88 [32];
  bool local_a58;
  bool local_a57 [3];
  int local_a54;
  int local_a50;
  int local_a4c;
  FString local_a48;
  FName local_a38;
  FName local_a30;
  undefined1 local_a28 [8];
  TReferenceControllerBase<1> *local_a20;
  FString local_a18;
  FScriptContainerElement local_a08 [256];
  ForAnyElementType local_908;
  FScriptContainerElement *local_900;
  int local_8f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_8e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_7c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_588;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_468;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_348;
  wchar_t local_228;
  undefined1 local_226 [510];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a88;
  bVar5 = false;
  bVar4 = false;
  local_a4c = 0;
  if (GMultiHandle != (void *)0x0) {
    if ((byte)LogInit._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    return;
  }
  pFVar9 = ::FName::FName(&local_a38,"SSL");
  FVar2 = *pFVar9;
  this = FModuleManager::Get();
  pIVar10 = FModuleManager::LoadModuleChecked(this,FVar2);
  if ((pIVar10[2] == (IModuleInterface)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SslManagerPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                         ,0x32,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar7 = (**(code **)(*(longlong *)pIVar10[2] + 8))();
  LibCryptoMemHooks::bMemoryHooksSet = true;
  iVar8 = curl_global_init_mem
                    (3 - (uint)(cVar7 != '\0'),::`anonymous_namespace'::CurlMalloc,
                     ::`anonymous_namespace'::CurlFree,::`anonymous_namespace'::CurlRealloc);
  if (iVar8 == 0) {
    lVar11 = curl_version_info(0xb);
    if (lVar11 != 0) {
      if (4 < (byte)LogInit._0_1_) {
        pcVar13 = *(char **)(lVar11 + 8);
        local_8e8._padding_ = 0;
        if (pcVar13 == (char *)0x0) {
          local_8e8.Ptr = (wchar_t *)0x0;
          local_8e8.StringLength = 0;
        }
        else {
          sVar12 = strlen(pcVar13);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_8e8,pcVar13,(int)sVar12,Yes);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if ((void *)local_8e8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_8e8._padding_);
        }
        if (4 < (byte)LogInit._0_1_) {
          pcVar13 = *(char **)(lVar11 + 0x18);
          local_7c8._padding_ = 0;
          if (pcVar13 == (char *)0x0) {
            local_7c8.Ptr = (wchar_t *)0x0;
            local_7c8.StringLength = 0;
          }
          else {
            sVar12 = strlen(pcVar13);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_7c8,pcVar13,(int)sVar12,Yes);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
          if ((void *)local_7c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_7c8._padding_);
          }
        }
      }
      if ((*(byte *)(lVar11 + 0x20) & 4) == 0) {
        if (4 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        }
      }
      else if (4 < (byte)LogInit._0_1_) {
        pcVar13 = *(char **)(lVar11 + 0x28);
        local_6a8._padding_ = 0;
        if (pcVar13 == (char *)0x0) {
          local_6a8.Ptr = (wchar_t *)0x0;
          local_6a8.StringLength = 0;
        }
        else {
          sVar12 = strlen(pcVar13);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_6a8,pcVar13,(int)sVar12,Yes);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if ((void *)local_6a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_6a8._padding_);
        }
      }
      if ((*(byte *)(lVar11 + 0x20) & 8) == 0) {
LAB_14316b433:
        if (4 < (byte)LogInit._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u____other_featur_150a529c0,
                     (FLogCategoryBase *)&LogInit);
        }
      }
      else if (4 < (byte)LogInit._0_1_) {
        pcVar13 = *(char **)(lVar11 + 0x38);
        local_588._padding_ = 0;
        if (pcVar13 == (char *)0x0) {
          local_588.Ptr = (wchar_t *)0x0;
          local_588.StringLength = 0;
        }
        else {
          sVar12 = strlen(pcVar13);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_588,pcVar13,(int)sVar12,Yes);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
        if ((void *)local_588._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_588._padding_);
        }
        goto LAB_14316b433;
      }
      if (((*(byte *)(lVar11 + 0x20) & 4) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(byte *)(lVar11 + 0x20) & 8) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(byte *)(lVar11 + 0x20) & 0x40) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(byte *)(lVar11 + 0x20) & 1) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(byte *)(lVar11 + 0x20) & 0x80) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(uint *)(lVar11 + 0x20) & 0x200) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(uint *)(lVar11 + 0x20) & 0x400) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(uint *)(lVar11 + 0x20) & 0x1000) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(uint *)(lVar11 + 0x20) & 0x4000) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      if (((*(uint *)(lVar11 + 0x20) & 0x10000) != 0) && (4 < (byte)LogInit._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
    }
    GMultiHandle = (void *)curl_multi_init();
    if (GMultiHandle == (void *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    local_a54 = 0;
    bVar6 = FConfigCacheIni::GetInt
                      (GConfig,L"HTTP.Curl",L"MaxTotalConnections",&local_a54,&GEngineIni);
    if ((((bVar6) && (0 < local_a54)) && (iVar8 = curl_multi_setopt(GMultiHandle,0xd), iVar8 != 0))
       && (2 < (byte)LogInit._0_1_)) {
      pcVar13 = (char *)curl_multi_strerror(iVar8);
      local_468._padding_ = 0;
      if (pcVar13 == (char *)0x0) {
        local_468.StringLength = 0;
        local_468.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar12 = strlen(pcVar13);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_468,pcVar13,(int)sVar12,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if ((void *)local_468._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_468._padding_);
      }
    }
    local_a50 = 0;
    bVar6 = FConfigCacheIni::GetInt(GConfig,L"HTTP.Curl",L"MaxConnects",&local_a50,&GEngineIni);
    if (((bVar6) && (-1 < local_a50)) &&
       ((iVar8 = curl_multi_setopt(GMultiHandle,6), iVar8 != 0 && (2 < (byte)LogInit._0_1_)))) {
      pcVar13 = (char *)curl_multi_strerror(iVar8);
      local_348._padding_ = 0;
      if (pcVar13 == (char *)0x0) {
        local_348.StringLength = 0;
        local_348.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar12 = strlen(pcVar13);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_348,pcVar13,(int)sVar12,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      if ((void *)local_348._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_348._padding_);
      }
    }
    GShareHandle = (void *)curl_share_init();
    if (GShareHandle == (void *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    else {
      curl_share_setopt(GShareHandle,1,2);
      curl_share_setopt(GShareHandle,1,3);
      curl_share_setopt(GShareHandle,1,4);
    }
  }
  else {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if ((pIVar10[1] == (IModuleInterface)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CertificateManagerPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                         ,0x2c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CurlRequestOptions.bVerifyPeer = (bool)(**(code **)(*(longlong *)pIVar10[1] + 0x10))();
  local_a58 = true;
  bVar6 = FConfigCacheIni::GetBool
                    (GConfig,L"/Script/Engine.NetworkSettings",L"n.VerifyPeer",&local_a58,
                     &GEngineIni);
  if (bVar6) {
    CurlRequestOptions.bVerifyPeer = local_a58;
  }
  local_a57[0] = true;
  bVar6 = FConfigCacheIni::GetBool(GConfig,L"HTTP",L"AcceptCompressedContent",local_a57,&GEngineIni)
  ;
  if (bVar6) {
    CurlRequestOptions.bAcceptCompressedContent = local_a57[0];
  }
  local_a4c = 0;
  bVar6 = FConfigCacheIni::GetInt(GConfig,L"HTTP.Curl",L"BufferSize",&local_a4c,&GEngineIni);
  if ((bVar6) && (0 < local_a4c)) {
    CurlRequestOptions.BufferSize = local_a4c;
  }
  FConfigCacheIni::GetBool
            (GConfig,L"HTTP.Curl",L"bAllowSeekFunction",&CurlRequestOptions.bAllowSeekFunction,
             &GEngineIni);
  pFVar14 = FHttpModule::Get();
  CurlRequestOptions.MaxHostConnections = pFVar14->HttpMaxConnectionsPerServer;
  if (CurlRequestOptions.MaxHostConnections < 1) {
    CurlRequestOptions.MaxHostConnections = 0;
  }
  else {
    iVar8 = curl_multi_setopt(GMultiHandle);
    if (iVar8 != 0) {
      _Str = (uchar *)curl_multi_strerror(iVar8);
      local_908.Data = (FScriptContainerElement *)0x0;
      if (_Str == (uchar *)0x0) {
        local_8f8 = 0;
        local_900 = (FScriptContainerElement *)0x0;
      }
      else {
        sVar12 = strlen((char *)_Str);
        local_8f8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar12);
        uVar1 = local_8f8 + 1;
        uVar19 = uVar1;
        if (uVar1 < 0x81) {
          if (local_908.Data != (FScriptContainerElement *)0x0) {
            uVar19 = 0;
            goto LAB_14316ba06;
          }
        }
        else {
LAB_14316ba06:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_908,0,uVar19,2);
        }
        local_900 = local_a08;
        if (local_908.Data != (FScriptContainerElement *)0x0) {
          local_900 = local_908.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_900,uVar1,_Str,(int)sVar12 + 1);
      }
      if (2 < (byte)LogInit._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      CurlRequestOptions.MaxHostConnections = 0;
      if (local_908.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.Data);
      }
    }
  }
  local_228 = L'\0';
  memset(local_226,0,0x1fe);
  pwVar15 = FCommandLine::Get();
  bVar6 = FParse::Value(pwVar15,L"MULTIHOMEHTTP=",&local_228,0x100,true,(wchar_t **)0x0);
  if (!bVar6) goto LAB_14316bbf6;
  pFVar9 = ::FName::FName(&local_a30,L"WINDOWS");
  pIVar16 = ISocketSubsystem::Get(pFVar9);
  if (pIVar16 == (ISocketSubsystem *)0x0) {
LAB_14316bb64:
    bVar6 = false;
  }
  else {
    pcVar3 = *(code **)(pIVar16->_padding_ + 0x58);
    ::FString::FString(&local_a48,&local_228);
    bVar5 = true;
    bVar4 = true;
    plVar17 = (longlong *)(*pcVar3)(pIVar16,local_a28,&local_a48);
    if (*plVar17 == 0) goto LAB_14316bb64;
    bVar6 = true;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a20);
  }
  if ((bVar5) && (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pFVar18 = ::FString::FString(&local_a18,&local_228);
    if (pFVar18 != &CurlRequestOptions.LocalHostAddr) {
      if (CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data);
      }
      CurlRequestOptions.LocalHostAddr.Data.AllocatorInstance.Data =
           (pFVar18->Data).AllocatorInstance.Data;
      (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      CurlRequestOptions.LocalHostAddr.Data.ArrayNum = (pFVar18->Data).ArrayNum;
      CurlRequestOptions.LocalHostAddr.Data.ArrayMax = (pFVar18->Data).ArrayMax;
      (pFVar18->Data).ArrayNum = 0;
      (pFVar18->Data).ArrayMax = 0;
    }
    if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a18.Data.AllocatorInstance.Data);
    }
  }
LAB_14316bbf6:
  FCurlRequestOptions::Log(&CurlRequestOptions);
  return;
}

// IsInit @ 14316c920

bool __cdecl FCurlHttpManager::IsInit(void)

{
  return GMultiHandle != (void *)0x0;
}

// OnAfterFork @ 143170be0

void __thiscall FCurlHttpManager::OnAfterFork(FCurlHttpManager *this)

{
  bool bVar1;
  
  InitCurl();
  bVar1 = FForkProcessHelper::IsForkedChildProcess();
  if (bVar1) {
    bVar1 = FForkProcessHelper::SupportsMultithreadingPostFork();
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143170c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  return;
}

// OnBeforeFork @ 143170db0

void __thiscall FCurlHttpManager::OnBeforeFork(FCurlHttpManager *this)

{
  FHttpManager::Flush((FHttpManager *)this,Default);
  (**(code **)(**(longlong **)&this->field_0x28 + 0x38))();
  ShutdownCurl();
  return;
}

// OnEndFramePostFork @ 143171210

void __thiscall FCurlHttpManager::OnEndFramePostFork(FCurlHttpManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FForkProcessHelper::SupportsMultithreadingPostFork();
  if (!bVar2) {
    return;
  }
  bVar2 = FForkProcessHelper::IsForkedMultithreadInstance();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FForkProcessHelper::IsForkedMultithreadInstance()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Private\\Curl\\CurlHttpManager.cpp"
                       ,0x18b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014317125d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x28 + 0x30))();
  return;
}

// ShutdownCurl @ 143182a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FCurlHttpManager::ShutdownCurl(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FModuleManager *this;
  IModuleInterface *pIVar6;
  FName local_res8 [4];
  
  if (GShareHandle != (void *)0x0) {
    iVar4 = curl_share_cleanup();
    if ((2 < (byte)LogHttp._0_1_) && (iVar4 != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    GShareHandle = (void *)0x0;
  }
  if (GMultiHandle != (void *)0x0) {
    iVar4 = curl_multi_cleanup();
    if ((2 < (byte)LogHttp._0_1_) && (iVar4 != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    GMultiHandle = (void *)0x0;
  }
  curl_global_cleanup();
  if (LibCryptoMemHooks::bMemoryHooksSet != false) {
    LibCryptoMemHooks::bMemoryHooksSet = false;
    LibCryptoMemHooks::ChainedMalloc = (_func___cdecl_void_ptr_ulong64_char_ptr_int *)0x0;
    LibCryptoMemHooks::ChainedRealloc = (_func___cdecl_void_ptr_void_ptr_ulong64_char_ptr_int *)0x0;
    LibCryptoMemHooks::ChainedFree = (_func___cdecl_void_void_ptr_char_ptr_int *)0x0;
  }
  pFVar5 = ::FName::FName(local_res8,"SSL");
  FVar1 = *pFVar5;
  this = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this,FVar1);
  if (pIVar6[2] == (IModuleInterface)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SslManagerPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143182b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar6[2] + 0x10))();
  return;
}

// SupportsDynamicProxy @ 143186090

bool __thiscall FCurlHttpManager::SupportsDynamicProxy(FCurlHttpManager *this)

{
  return true;
}

// UpdateConfigs @ 14318a3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpManager::UpdateConfigs(FCurlHttpManager *this)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint local_res10 [2];
  FString local_38;
  FString local_28;
  
  FHttpManager::UpdateConfigs((FHttpManager *)this);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
  bVar1 = FConfigCacheIni::GetBool
                    (GConfig,L"HTTP",L"AcceptCompressedContent",(bool *)local_res10,&GEngineIni);
  pwVar4 = L"true";
  bVar2 = CurlRequestOptions.bAcceptCompressedContent;
  if (((bVar1) && (CurlRequestOptions.bAcceptCompressedContent != local_res10[0]._0_1_)) &&
     (bVar2 = local_res10[0]._0_1_, 4 < (byte)LogHttp._0_1_)) {
    pwVar3 = L"true";
    if (local_res10[0]._0_1_ == false) {
      pwVar3 = L"false";
    }
    ::FString::FString(&local_28,pwVar3);
    pwVar3 = L"true";
    if (CurlRequestOptions.bAcceptCompressedContent == false) {
      pwVar3 = L"false";
    }
    ::FString::FString(&local_38,pwVar3);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bVar2 = local_res10[0]._0_1_;
  }
  CurlRequestOptions.bAcceptCompressedContent = bVar2;
  local_res10[0] = 0;
  bVar2 = FConfigCacheIni::GetInt(GConfig,L"HTTP.Curl",L"BufferSize",(int *)local_res10,&GEngineIni)
  ;
  if (((bVar2) && (0 < (int)local_res10[0])) && (CurlRequestOptions.BufferSize != local_res10[0])) {
    if (4 < (byte)LogHttp._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    CurlRequestOptions.BufferSize = local_res10[0];
  }
  local_res10[0] = local_res10[0] & 0xffffff00;
  bVar1 = FConfigCacheIni::GetBool
                    (GConfig,L"HTTP.Curl",L"bAllowSeekFunction",(bool *)local_res10,&GEngineIni);
  bVar2 = CurlRequestOptions.bAllowSeekFunction;
  if (((bVar1) && (CurlRequestOptions.bAllowSeekFunction != local_res10[0]._0_1_)) &&
     (bVar2 = local_res10[0]._0_1_, 4 < (byte)LogHttp._0_1_)) {
    pwVar3 = L"true";
    if (local_res10[0]._0_1_ == false) {
      pwVar3 = L"false";
    }
    ::FString::FString(&local_38,pwVar3);
    if (CurlRequestOptions.bAllowSeekFunction == false) {
      pwVar4 = L"false";
    }
    ::FString::FString(&local_28,pwVar4);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = local_res10[0]._0_1_;
  }
  CurlRequestOptions.bAllowSeekFunction = bVar2;
  return;
}

