// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SSL
// Functions: 12

// AddCertificateToRootCertificateArray @ 143146490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSslCertificateManager::AddCertificateToRootCertificateArray
          (FSslCertificateManager *this,x509_st *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  x509_st *pxVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  x509_st *local_res10;
  bool local_res18 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res18[0] = true;
  local_res10 = param_1;
  FConfigCacheIni::GetBool(GConfig,L"SSL",L"bValidateRootCertificates",local_res18,&GEngineIni);
  if (local_res18[0] != false) {
    uVar7 = X509_getm_notBefore(local_res10);
    uVar8 = X509_getm_notAfter(local_res10);
    iVar6 = X509_cmp_current_time(uVar8);
    if (iVar6 < 0) {
      if (4 < (byte)LogSsl._0_1_) {
        ::`anonymous_namespace'::GetCertificateName(&local_58,local_res10);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      X509_free(local_res10);
      return;
    }
    iVar6 = X509_cmp_current_time(uVar7);
    if (0 < iVar6) {
      if (4 < (byte)LogSsl._0_1_) {
        ::`anonymous_namespace'::GetCertificateName(&local_48,local_res10);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      X509_free(local_res10);
      return;
    }
  }
  pxVar4 = local_res10;
  pFVar9 = (this->RootCertificateArray).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->RootCertificateArray).ArrayNum * 8;
  for (; pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
    iVar6 = X509_cmp(*(undefined8 *)pFVar9,pxVar4);
    if (iVar6 == 0) {
      if (6 < (byte)LogSsl._0_1_) {
        ::`anonymous_namespace'::GetCertificateName(&local_38,local_res10);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      X509_free(local_res10);
      return;
    }
  }
  if (5 < (byte)LogSsl._0_1_) {
    ::`anonymous_namespace'::GetCertificateName(&local_28,local_res10);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (this->RootCertificateArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RootCertificateArray).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->RootCertificateArray).ArrayNum;
  piVar1 = &(this->RootCertificateArray).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RootCertificateArray).AllocatorInstance,piVar1);
  }
  (this->RootCertificateArray).ArrayNum = iVar6 + 1;
  *(x509_st **)((this->RootCertificateArray).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10;
  return;
}

// AddCertificatesToSslContext @ 143146770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSslCertificateManager::AddCertificatesToSslContext
          (FSslCertificateManager *this,ssl_ctx_st *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  FString local_18;
  
  uVar5 = SSL_CTX_get_cert_store(param_1);
  uVar6 = 0;
  if (0 < (this->RootCertificateArray).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->RootCertificateArray).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = X509_STORE_add_cert(uVar5,*(undefined8 *)
                                         ((this->RootCertificateArray).AllocatorInstance.Data +
                                         lVar7));
      if ((iVar4 == 0) && (4 < (byte)LogSsl._0_1_)) {
        GetSslErrorString(&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->RootCertificateArray).ArrayNum);
  }
  return;
}

// AddPEMFileToRootCertificateArray @ 143146870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSslCertificateManager::AddPEMFileToRootCertificateArray
          (FSslCertificateManager *this,FString *param_1)

{
  IFileManager *pIVar1;
  longlong *plVar2;
  longlong lVar3;
  char *_Str;
  char *_Str_00;
  char *_Str_01;
  undefined8 uVar4;
  x509_st *pxVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  _Str = (char *)0x0;
  pIVar1 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,pwVar6,0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
    _Str = operator_new__(lVar3 + 1);
    operator_delete__((void *)0x0);
    (**(code **)(*plVar2 + 0x188))(plVar2,_Str,lVar3);
    _Str[lVar3] = '\0';
    (**(code **)*plVar2)(plVar2,1);
    if ((0 < lVar3) && (_Str != (char *)0x0)) {
      _Str_00 = strstr(_Str,"-----BEGIN CERTIFICATE-----");
      while (_Str_00 != (char *)0x0) {
        _Str_01 = strstr(_Str_00,"-----END CERTIFICATE-----");
        if (_Str_01 != (char *)0x0) {
          uVar4 = BIO_new_mem_buf(_Str_00,((int)_Str_01 - (int)_Str_00) + 0x1a);
          pxVar5 = (x509_st *)PEM_read_bio_X509(uVar4,0,0,0);
          if (pxVar5 == (x509_st *)0x0) {
            if (4 < (byte)LogSsl._0_1_) {
              GetSslErrorString(&local_18);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
              if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_18.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            AddCertificateToRootCertificateArray(this,pxVar5);
          }
          BIO_free(uVar4);
        }
        _Str_00 = strstr(_Str_01,"-----BEGIN CERTIFICATE-----");
      }
    }
  }
  operator_delete__(_Str);
  return;
}

// BuildRootCertificateArray @ 143146a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSslCertificateManager::BuildRootCertificateArray(FSslCertificateManager *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  IFileManager *pIVar4;
  longlong *plVar5;
  char *_Str;
  char *_Str_00;
  char *_Str_01;
  undefined8 uVar6;
  x509_st *pxVar7;
  void *pvVar8;
  int iVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_38.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_218);
  _Str = (char *)0x0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"SSL",L"OverrideCertificateBundlePath",&local_1a8,&GEngineIni);
  if (bVar2) {
    iVar9 = local_1a8.Data.ArrayNum + -1;
    if (local_1a8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if ((0 < iVar9) && (bVar2 = FPaths::FileExists(&local_1a8), bVar2)) {
      iVar9 = local_1a8.Data.ArrayNum + -1;
      if (local_1a8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange(&local_1d8,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar9);
    }
  }
  if (local_1d8.Data.ArrayNum < 2) {
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_188,"Windows",7,Yes);
    ::FString::PrintfImpl(&local_198,L"Certificates/%s/cacert.pem");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    pFVar3 = FPaths::ProjectContentDir(&local_1c8);
    ::FString::ConcatFF(&local_68,pFVar3,&local_198);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar3 = FPaths::ProjectContentDir(&local_1c8);
    ::FString::ConcatFC(&local_58,pFVar3,L"Certificates/cacert.pem");
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar3 = FPaths::EngineContentDir(&local_1c8);
    ::FString::ConcatFC(&local_48,pFVar3,L"Certificates/ThirdParty/cacert.pem");
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar3 = &local_68;
    do {
      bVar2 = FPaths::FileExists(pFVar3);
      if (bVar2) {
        if (&local_1d8 != pFVar3) {
          iVar9 = (pFVar3->Data).ArrayNum;
          pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
          local_1d8.Data.ArrayNum = iVar9;
          if ((iVar9 == 0) && (local_1d8.Data.ArrayMax == 0)) {
            local_1d8.Data.ArrayNum = 0;
            local_1d8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,local_1d8.Data.ArrayMax,(ForAnyElementType *)&local_1d8,iVar9,
                       &local_1d8.Data.ArrayMax);
            if (iVar9 != 0) {
              memcpy(local_1d8.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar9 * 2);
            }
          }
        }
        break;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != &local_38);
    pFVar3 = &local_38;
    lVar11 = 3;
    do {
      pFVar1 = pFVar3[-1].Data.AllocatorInstance.Data;
      pFVar3 = pFVar3 + -1;
      lVar11 = lVar11 + -1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    } while (lVar11 != 0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (1 < local_1d8.Data.ArrayNum) {
    pIVar4 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar10.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,FVar10.Data,0);
    if (plVar5 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar5 + 0x30))(plVar5);
      _Str = operator_new__(lVar11 + 1);
      operator_delete__((void *)0x0);
      (**(code **)(*plVar5 + 0x188))(plVar5,_Str,lVar11);
      _Str[lVar11] = '\0';
      (**(code **)*plVar5)(plVar5,1);
      if ((0 < lVar11) && (_Str != (char *)0x0)) {
        _Str_00 = strstr(_Str,"-----BEGIN CERTIFICATE-----");
        while (_Str_00 != (char *)0x0) {
          _Str_01 = strstr(_Str_00,"-----END CERTIFICATE-----");
          if (_Str_01 != (char *)0x0) {
            uVar6 = BIO_new_mem_buf(_Str_00,((int)_Str_01 - (int)_Str_00) + 0x1a);
            pxVar7 = (x509_st *)PEM_read_bio_X509(uVar6,0,0,0);
            if (pxVar7 == (x509_st *)0x0) {
              if (4 < (byte)LogSsl._0_1_) {
                GetSslErrorString(&local_1c8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
                if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              AddCertificateToRootCertificateArray(this,pxVar7);
            }
            BIO_free(uVar6);
          }
          _Str_00 = strstr(_Str_01,"-----BEGIN CERTIFICATE-----");
        }
      }
    }
    operator_delete__(_Str);
  }
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"SSL",L"DebuggingCertificatePath",&local_1b8,&GEngineIni);
  if (bVar2) {
    iVar9 = local_1b8.Data.ArrayNum + -1;
    if (local_1b8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if ((0 < iVar9) && (bVar2 = FPaths::FileExists(&local_1b8), bVar2)) {
      pIVar4 = IFileManager::Get();
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar10.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,FVar10.Data,0);
      lVar11 = (**(code **)(*plVar5 + 0x30))(plVar5);
      pvVar8 = operator_new__(lVar11 + 1);
      (**(code **)(*plVar5 + 0x188))(plVar5,pvVar8,lVar11);
      *(undefined1 *)((longlong)pvVar8 + lVar11) = 0;
      uVar6 = BIO_new_mem_buf(pvVar8,0xffffffff);
      pxVar7 = (x509_st *)PEM_read_bio_X509(uVar6,0,0,0);
      if (pxVar7 == (x509_st *)0x0) {
        if (2 < (byte)LogSsl._0_1_) {
          GetSslErrorString(&local_1c8);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        AddCertificateToRootCertificateArray(this,pxVar7);
      }
      BIO_free(uVar6);
      operator_delete__(pvVar8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return;
}

// ClearAllPinnedPublicKeys @ 143147200

void __thiscall FSslCertificateManager::ClearAllPinnedPublicKeys(FSslCertificateManager *this)

{
  int *piVar1;
  
  DestructItems<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
              *)(this->PinnedPublicKeys).AllocatorInstance.Data,(this->PinnedPublicKeys).ArrayNum);
  piVar1 = &(this->PinnedPublicKeys).ArrayMax;
  (this->PinnedPublicKeys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->PinnedPublicKeys).AllocatorInstance,0,piVar1);
  }
  return;
}

// EmptyRootCertificateArray @ 1431476b0

void __thiscall FSslCertificateManager::EmptyRootCertificateArray(FSslCertificateManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->RootCertificateArray).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->RootCertificateArray).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      X509_free(*(undefined8 *)((this->RootCertificateArray).AllocatorInstance.Data + lVar5));
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->RootCertificateArray).ArrayNum);
  }
  (this->RootCertificateArray).ArrayNum = 0;
  if ((this->RootCertificateArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RootCertificateArray).AllocatorInstance,0,
               &(this->RootCertificateArray).ArrayMax);
  }
  return;
}

// HasCertificatesAvailable @ 1431479e0

bool __thiscall FSslCertificateManager::HasCertificatesAvailable(FSslCertificateManager *this)

{
  return 0 < (this->RootCertificateArray).ArrayNum;
}

// HasPinnedPublicKeys @ 1431479f0

bool __thiscall FSslCertificateManager::HasPinnedPublicKeys(FSslCertificateManager *this)

{
  return 0 < (this->PinnedPublicKeys).ArrayNum;
}

// IsDomainPinned @ 143147b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FSslCertificateManager::IsDomainPinned(FSslCertificateManager *this,FString *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  FString local_28;
  
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_28.Data.ArrayNum;
  pFVar8 = (param_1->Data).AllocatorInstance.Data;
  bVar10 = false;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar8,lVar7 * 2);
  }
  iVar5 = ::FString::Find(param_1,L":",1,IgnoreCase,FromEnd,-1);
  if (-1 < iVar5) {
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::RemoveAt(&local_28,iVar5,iVar6 - iVar5,Default);
  }
  iVar5 = (this->PinnedPublicKeys).ArrayNum;
  pFVar8 = (this->PinnedPublicKeys).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar5 * 0x20;
  do {
    if ((this->PinnedPublicKeys).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) goto LAB_143147cdc;
    iVar6 = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      iVar6 = 0;
    }
    if ((iVar6 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pwVar1 = *(wchar_t **)pFVar8;
    if (*pwVar1 == L'.') {
      iVar6 = *(int *)(pFVar8 + 8) + -1;
      if (*(int *)(pFVar8 + 8) == 0) {
        iVar6 = 0;
        pwVar1 = L"";
      }
      bVar3 = ::FString::EndsWith(&local_28,pwVar1,iVar6,IgnoreCase);
      if (bVar3) {
LAB_143147cd9:
        bVar10 = true;
LAB_143147cdc:
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        return bVar10;
      }
    }
    if (local_28.Data.ArrayNum == *(int *)(pFVar8 + 8)) {
      if (local_28.Data.ArrayNum < 2) goto LAB_143147cd9;
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_28.Data.AllocatorInstance.Data,*(wchar_t **)pFVar8);
      bVar3 = iVar6 == 0;
    }
    else {
      bVar3 = *(int *)(pFVar8 + 8) + local_28.Data.ArrayNum == 1;
    }
    if (bVar3) goto LAB_143147cd9;
    pFVar8 = pFVar8 + 0x20;
  } while( true );
}

// SetPinnedPublicKeys @ 143147da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSslCertificateManager::SetPinnedPublicKeys
          (FSslCertificateManager *this,FString *param_1,FString *param_2)

{
  TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  TTypeCompatibleBytes<unsigned_char> *pTVar1;
  ForElementType<unsigned_char> *_Dst;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  size_t _Size;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_d8 [32];
  undefined1 local_88 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  <lambda_1> local_70;
  ForElementType<unsigned_char> local_68;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar6 = (param_1->Data).ArrayNum;
  uVar14 = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    if ((param_2->Data).ArrayNum < 2) {
      local_70.Domain = param_1;
      TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAll<_FSslCertificateManager::SetPinnedPublicKeys_::__l8::<lambda_1>_>
                (&this->PinnedPublicKeys,&local_70);
    }
    else {
      if (0 < (this->PinnedPublicKeys).ArrayNum) {
        this_00 = &this->PinnedPublicKeys;
        uVar16 = uVar14;
        do {
          uVar7 = (uint)uVar14;
          uVar8 = 0;
          if ((int)uVar7 < (this->PinnedPublicKeys).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (param_1->Data).ArrayNum;
          pFVar11 = (this_00->AllocatorInstance).Data + uVar16;
          iVar9 = *(int *)(pFVar11 + 8);
          if (iVar9 == iVar6) {
            if (1 < iVar9) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)&pFVar11->field_0x0,
                                 (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar5 = iVar6 == 0;
              goto LAB_143147eb7;
            }
LAB_143147f16:
            if (uVar7 != 0xffffffff) goto LAB_143147f61;
            break;
          }
          bVar5 = iVar9 + iVar6 == 1;
LAB_143147eb7:
          if (bVar5) goto LAB_143147f16;
          bVar5 = DomainLessThan(param_1,(FString *)pFVar11);
          if (bVar5) {
            TArray<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
            ::InsertUninitializedImpl(this_00,uVar7,1);
            pFVar11 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x20;
            ::FString::FString((FString *)pFVar11,param_1);
            *(undefined8 *)&pFVar11[0x10].field_0x0 = 0;
            *(undefined8 *)(pFVar11 + 0x18) = 0;
            goto LAB_143147f16;
          }
          uVar14 = (ulonglong)(uVar7 + 1);
          uVar16 = uVar16 + 0x20;
        } while ((int)(uVar7 + 1) < (this->PinnedPublicKeys).ArrayNum);
      }
      uVar7 = (this->PinnedPublicKeys).ArrayNum;
      if (uVar7 == (this->PinnedPublicKeys).ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->PinnedPublicKeys).AllocatorInstance,
                           &(this->PinnedPublicKeys).ArrayMax);
      }
      (this->PinnedPublicKeys).ArrayNum = uVar7 + 1;
      pFVar11 = (this->PinnedPublicKeys).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      ::FString::FString((FString *)pFVar11,param_1);
      *(undefined8 *)(pFVar11 + 0x10) = 0;
      *(undefined8 *)(pFVar11 + 0x18) = 0;
LAB_143147f61:
      uVar8 = 0;
      if ((int)uVar7 < (this->PinnedPublicKeys).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->PinnedPublicKeys).AllocatorInstance.Data;
      iVar6 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x1c);
      pFVar11 = pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x1c;
      *(undefined4 *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x18) = 0;
      if (iVar6 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,0,(ForAnyElementType *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10),0,
                   (int *)pFVar11);
      }
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      ::FString::ParseIntoArray(param_2,&local_80,L";",true);
      iVar6 = local_80.ArrayNum;
      pFVar15 = local_80.AllocatorInstance.Data + (longlong)local_80.ArrayNum * 0x10;
      FVar12.Data = local_80.AllocatorInstance.Data;
      while( true ) {
        if (local_80.ArrayNum != iVar6) {
          local_88[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_88);
        }
        if (FVar12.Data == pFVar15) break;
        uVar8 = FBase64::GetDecodedDataSize((FString *)FVar12.Data);
        if (uVar8 == 0x20) {
          uVar13 = 0;
          local_48 = 0;
          local_44 = uVar8;
          UE::Core::Private::ReallocGrow<0,TFixedAllocator<32>::ForElementType<unsigned_char>_>
                    (1,1,0x20,&local_68,&local_48,(int *)&local_44);
          if (*(int *)(FVar12.Data + 8) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)FVar12.Data;
            uVar13 = *(int *)(FVar12.Data + 8) - 1;
          }
          bVar5 = FBase64::Decode<wchar_t>(pwVar10,uVar13,(uchar *)&local_68,Standard);
          if (!bVar5) goto LAB_143148191;
          if (((*(ForElementType<unsigned_char> **)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10) <=
                &local_68) &&
              (&local_68 <
               (ForElementType<unsigned_char> *)
               ((longlong)
                *(ForElementType<unsigned_char> **)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10) +
               (longlong)*(int *)pFVar11 * 0x28))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x18);
          if (iVar9 == *(int *)pFVar11) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x428,(ForAnyElementType *)
                                     (pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10),(int *)pFVar11);
          }
          _Size = (size_t)local_48;
          *(int *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x18) = iVar9 + 1;
          lVar3 = *(longlong *)(pFVar2 + (longlong)(int)uVar7 * 0x20 + 0x10);
          *(int *)(lVar3 + 0x20 + (longlong)iVar9 * 0x28) = local_48;
          _Dst = (ForElementType<unsigned_char> *)(lVar3 + (longlong)iVar9 * 0x28);
          pTVar1 = _Dst[1].InlineData + 4;
          if (local_48 != 0) {
            UE::Core::Private::ReallocForCopy<0,TFixedAllocator<32>::ForElementType<unsigned_char>_>
                      (1,1,local_48,0,_Dst,local_48,(int *)pTVar1);
            memcpy(_Dst,&local_68,_Size);
            goto LAB_143148191;
          }
          pTVar1->Pad[0] = ' ';
          pTVar1[1] = (uchar  [1])0x0;
          pTVar1[2] = (uchar  [1])0x0;
          pTVar1[3] = (uchar  [1])0x0;
          FVar12.Data = FVar12.Data + 0x10;
        }
        else {
LAB_143148191:
          FVar12.Data = FVar12.Data + 0x10;
        }
      }
      DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// VerifySslCertificates @ 1431484f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSslCertificateManager::VerifySslCertificates
          (FSslCertificateManager *this,
          TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  void *pvVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  void *_Buf1;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *local_res20;
  undefined1 local_58 [8];
  FString local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar9 = FCommandLine::Get();
    bPinningDisabled = FParse::Param(pwVar9,L"DisableSSLCertificatePinning");
    _Init_thread_footer(&::_TSS0);
  }
  if (bPinningDisabled != false) {
    return true;
  }
  iVar2 = (this->PinnedPublicKeys).ArrayNum;
  pFVar10 = (this->PinnedPublicKeys).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar2 * 0x20;
  do {
    if ((this->PinnedPublicKeys).ArrayNum != iVar2) {
      local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffffffffff00);
      `TCheckedPointerIterator<TTuple<FString,TArray<TArray<unsigned_char,TFixedAllocator<32>_>,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (pFVar10 == pFVar11) goto LAB_143148775;
    iVar7 = *(int *)(pFVar10 + 8) + -1;
    if (*(int *)(pFVar10 + 8) == 0) {
      iVar7 = 0;
    }
    if ((iVar7 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pwVar9 = *(wchar_t **)pFVar10;
    if (*pwVar9 == L'.') {
      iVar7 = *(int *)(pFVar10 + 8) + -1;
      if (*(int *)(pFVar10 + 8) == 0) {
        iVar7 = 0;
        pwVar9 = L"";
      }
      bVar5 = ::FString::EndsWith(param_2,pwVar9,iVar7,IgnoreCase);
      if (bVar5) {
LAB_14314863d:
        if (pFVar10 + 0x10 != (FScriptContainerElement *)0x0) {
          iVar2 = param_1->ArrayNum;
          pFVar11 = (param_1->AllocatorInstance).Data;
          local_res20 = pFVar11 + (longlong)iVar2 * 0x28;
          while( true ) {
            pFVar4 = local_res20;
            if (param_1->ArrayNum != iVar2) {
              `TCheckedPointerIterator<TArray<unsigned_char,TFixedAllocator<32>_>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_58);
            }
            if (pFVar11 == pFVar4) break;
            if (6 < (byte)LogSsl._0_1_) {
              FBase64::Encode(&local_50,(uchar *)pFVar11,*(uint *)(pFVar11 + 0x20),Standard);
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
              if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_50.Data.AllocatorInstance.Data);
              }
            }
            _Buf1 = *(void **)(pFVar10 + 0x10);
            pvVar1 = (void *)((longlong)_Buf1 + (longlong)*(int *)(pFVar10 + 0x18) * 0x28);
            if (_Buf1 != pvVar1) {
              iVar7 = *(int *)(pFVar11 + 0x20);
              do {
                iVar8 = *(int *)((longlong)_Buf1 + 0x20);
                if ((iVar8 == iVar7) &&
                   ((iVar8 == 0 || (iVar8 = memcmp(_Buf1,pFVar11,(longlong)iVar8), iVar8 == 0)))) {
                  if (5 < (byte)LogSsl._0_1_) {
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
                  }
                  return true;
                }
                _Buf1 = (void *)((longlong)_Buf1 + 0x28);
              } while (_Buf1 != pvVar1);
            }
            pFVar11 = pFVar11 + 0x28;
          }
          return false;
        }
LAB_143148775:
        if ((byte)LogSsl._0_1_ < 6) {
          return true;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSsl);
        return true;
      }
    }
    iVar7 = (param_2->Data).ArrayNum;
    if (iVar7 == *(int *)(pFVar10 + 8)) {
      if (iVar7 < 2) goto LAB_14314863d;
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->Data).AllocatorInstance.Data,*(wchar_t **)pFVar10);
      bVar5 = iVar7 == 0;
    }
    else {
      bVar5 = iVar7 + *(int *)(pFVar10 + 8) == 1;
    }
    if (bVar5) goto LAB_14314863d;
    pFVar10 = pFVar10 + 0x20;
  } while( true );
}

// VerifySslCertificates @ 143148810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FSslCertificateManager::VerifySslCertificates
          (FSslCertificateManager *this,x509_store_ctx_st *param_1,FString *param_2)

{
  FScriptContainerElement *_Dst;
  undefined8 *puVar1;
  TArray<unsigned_char,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  x509_st *pxVar12;
  undefined8 uVar13;
  FString *pFVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  ForElementType<unsigned_char> FVar17;
  longlong *plVar18;
  size_t sVar19;
  uint uVar20;
  undefined1 auStackY_b58 [32];
  ForAnyElementType local_b08;
  undefined8 local_b00;
  ForAnyElementType local_af8;
  undefined8 local_af0;
  ForAnyElementType local_ae8;
  int local_ae0 [4];
  x509_store_ctx_st *local_ad0;
  FString local_ac8;
  undefined8 local_ab8;
  FString *local_ab0;
  FScriptContainerElement *local_aa8;
  FSslCertificateManager *local_aa0;
  FString local_a98;
  FCertInfo local_a88;
  ForElementType<unsigned_char> local_a08;
  int local_9e8 [4];
  undefined1 local_9d8 [112];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_968;
  char local_848 [2048];
  ulonglong local_48;
  
  pTVar2 = &local_a88.Thumbprint;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b58;
  local_ad0 = param_1;
  local_ab0 = param_2;
  local_aa0 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar16 = FCommandLine::Get();
    bPinningDisabled = FParse::Param(pwVar16,L"DisableSSLCertificatePinning");
    _Init_thread_footer(&::_TSS0);
  }
  if (bPinningDisabled != false) {
    return true;
  }
  uVar11 = X509_STORE_CTX_get0_chain(local_ad0);
  local_ab8 = uVar11;
  iVar9 = OPENSSL_sk_num(uVar11);
  if (iVar9 < 1) {
    return false;
  }
  local_af8.Data = (FScriptContainerElement *)0x0;
  local_af0 = 0;
  local_b08.Data = (FScriptContainerElement *)0x0;
  local_b00 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  if (((FSslCertificateDelegates::VerifySslCertificates._48_4_ == 0) ||
      (FSslCertificateDelegates::VerifySslCertificates._40_8_ == 0)) ||
     (cVar5 = (**(code **)(*(longlong *)FSslCertificateDelegates::VerifySslCertificates._40_8_ +
                          0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  plVar18 = (longlong *)0x0;
  do {
    pxVar12 = (x509_st *)OPENSSL_sk_value(uVar11,plVar18);
    uVar13 = X509_get_X509_PUBKEY(pxVar12);
    iVar10 = i2d_X509_PUBKEY(uVar13,0);
    if (0 < iVar10) {
      local_ae8.Data = (FScriptContainerElement *)0x0;
      local_ae0[0] = 0;
      local_ae0[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar10,&local_ae8,local_ae0,local_ae0 + 1);
      local_aa8 = local_ae8.Data;
      uVar11 = X509_get_X509_PUBKEY(pxVar12);
      i2d_X509_PUBKEY(uVar11,&local_aa8);
      local_9e8[0] = 0;
      local_9e8[1] = 0x20;
      UE::Core::Private::ReallocGrow<0,TFixedAllocator<32>::ForElementType<unsigned_char>_>
                (1,1,0x20,&local_a08,local_9e8,local_9e8 + 1);
      SHA256_Init(local_9d8);
      SHA256_Update(local_9d8,local_ae8.Data,(longlong)local_ae0[0]);
      SHA256_Final(&local_a08,local_9d8);
      if (((local_af8.Data <= (FScriptContainerElement *)&local_a08) &&
          ((FScriptContainerElement *)&local_a08 < local_af8.Data + (longlong)local_af0._4_4_ * 0x28
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      iVar10 = (int)local_af0;
      if ((int)local_af0 == local_af0._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x428,&local_af8,(int *)((longlong)&local_af0 + 4));
      }
      sVar19 = (size_t)local_9e8[0];
      local_af0 = CONCAT44(local_af0._4_4_,iVar10 + 1);
      *(int *)(local_af8.Data + (longlong)iVar10 * 0x28 + 0x20) = local_9e8[0];
      _Dst = local_af8.Data + (longlong)iVar10 * 0x28;
      if (local_9e8[0] == 0) {
        *(int *)(_Dst + 0x24) = 0x20;
      }
      else {
        UE::Core::Private::ReallocForCopy<0,TFixedAllocator<32>::ForElementType<unsigned_char>_>
                  (1,1,local_9e8[0],0,(ForElementType<unsigned_char> *)_Dst,local_9e8[0],
                   (int *)(_Dst + 0x24));
        memcpy(_Dst,&local_a08,sVar19);
      }
      iVar10 = local_9e8[0];
      if (bVar4) {
        sVar19 = (size_t)local_9e8[0];
        local_a88.KeyDigest.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
        local_a88.KeyDigest.ArrayMax = 0x20;
        local_a88.Thumbprint.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
        local_a88.Thumbprint.ArrayNum = 0;
        local_a88.Thumbprint.ArrayMax = 0x14;
        local_a88.Issuer.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a88.Issuer.Data.ArrayNum = 0;
        local_a88.Issuer.Data.ArrayMax = 0;
        local_a88.Subject.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a88.Subject.Data.ArrayNum = 0;
        local_a88.Subject.Data.ArrayMax = 0;
        local_a88.KeyDigest.ArrayNum = local_9e8[0];
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                  (1,1,local_9e8[0],0x20,(ForElementType<unsigned_char> *)&local_a88,local_9e8[0],
                   &local_a88.KeyDigest.ArrayMax);
        FVar17 = (ForElementType<unsigned_char>)&local_a88;
        if (local_a88.KeyDigest.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_char>)0x0) {
          FVar17 = local_a88.KeyDigest.AllocatorInstance.SecondaryData;
        }
        if (iVar10 != 0) {
          memcpy((void *)FVar17,&local_a08,sVar19);
        }
        uVar11 = X509_get_issuer_name(pxVar12);
        X509_NAME_oneline(uVar11,local_848,0x800);
        local_968._padding_ = 0;
        sVar19 = strlen(local_848);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_968,local_848,(int)sVar19,Yes);
        ::FString::FString(&local_ac8,local_968.Ptr);
        if ((void *)local_968._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_968._padding_);
        }
        if (local_a88.Issuer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Issuer.Data.AllocatorInstance.Data);
        }
        local_a88.Issuer.Data.AllocatorInstance.Data = local_ac8.Data.AllocatorInstance.Data;
        local_a88.Issuer.Data.ArrayNum = local_ac8.Data.ArrayNum;
        local_a88.Issuer.Data.ArrayMax = local_ac8.Data.ArrayMax;
        local_ac8.Data.ArrayNum = 0;
        local_ac8.Data.ArrayMax = 0;
        local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar14 = ::`anonymous_namespace'::GetCertificateName(&local_a98,pxVar12);
        if (&local_a88.Subject != pFVar14) {
          if (local_a88.Subject.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a88.Subject.Data.AllocatorInstance.Data);
          }
          local_a88.Subject.Data.AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
          (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a88.Subject.Data.ArrayNum = (pFVar14->Data).ArrayNum;
          local_a88.Subject.Data.ArrayMax = (pFVar14->Data).ArrayMax;
          (pFVar14->Data).ArrayNum = 0;
          (pFVar14->Data).ArrayMax = 0;
        }
        if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a98.Data.AllocatorInstance.Data);
        }
        lVar15 = EVP_get_digestbyname("sha1");
        if (lVar15 != 0) {
          local_ae0[2] = 0;
          iVar10 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<20,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                             (1,1,0x14,&pTVar2->AllocatorInstance,&local_a88.Thumbprint.ArrayNum,
                              &local_a88.Thumbprint.ArrayMax);
          FVar17 = (ForElementType<unsigned_char>)pTVar2;
          if (local_a88.Thumbprint.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_char>)0x0) {
            FVar17 = local_a88.Thumbprint.AllocatorInstance.SecondaryData;
          }
          puVar1 = (undefined8 *)((longlong)iVar10 + (longlong)FVar17);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)((longlong)iVar10 + 0x10 + (longlong)FVar17) = 0;
          FVar17 = (ForElementType<unsigned_char>)pTVar2;
          if (local_a88.Thumbprint.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_char>)0x0) {
            FVar17 = local_a88.Thumbprint.AllocatorInstance.SecondaryData;
          }
          X509_digest(pxVar12,lVar15,FVar17,local_ae0 + 2);
        }
        if (((local_b08.Data <= &local_a88) &&
            (&local_a88 < (FCertInfo *)(local_b08.Data + (longlong)local_b00._4_4_ * 0x78))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        iVar10 = (int)local_b00;
        if ((int)local_b00 == local_b00._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&local_b08,(int *)((longlong)&local_b00 + 4));
        }
        local_b00 = CONCAT44(local_b00._4_4_,iVar10 + 1);
        FSslCertificateDelegates::FCertInfo::FCertInfo
                  ((FCertInfo *)(local_b08.Data + (longlong)iVar10 * 0x78),&local_a88);
        if (local_a88.Subject.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Subject.Data.AllocatorInstance.Data);
        }
        if (local_a88.Issuer.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a88.Issuer.Data.AllocatorInstance.Data);
        }
        if (local_a88.Thumbprint.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_char>)0x0) {
          FMemory::Free((void *)local_a88.Thumbprint.AllocatorInstance.SecondaryData);
        }
        if (local_a88.KeyDigest.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_char>)0x0) {
          FMemory::Free((void *)local_a88.KeyDigest.AllocatorInstance.SecondaryData);
        }
      }
      uVar11 = local_ab8;
      if (local_ae8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae8.Data);
        uVar11 = local_ab8;
      }
    }
    uVar20 = (int)plVar18 + 1;
    plVar18 = (longlong *)(ulonglong)uVar20;
  } while ((int)uVar20 < iVar9);
  cVar5 = '\0';
  EnterCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
  if (((FSslCertificateDelegates::VerifySslCertificates._48_4_ == 0) ||
      (FSslCertificateDelegates::VerifySslCertificates._40_8_ == 0)) ||
     (cVar8 = (**(code **)(*(longlong *)FSslCertificateDelegates::VerifySslCertificates._40_8_ +
                          0x38))(), cVar8 == '\0')) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
    pFVar14 = local_ab0;
LAB_143148e92:
    cVar5 = (**(code **)(local_aa0->_padding_ + 0x38))(local_aa0,&local_af8,pFVar14);
    if (cVar5 != '\0') goto LAB_143148eb9;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
    EnterCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
    pFVar14 = local_ab0;
    plVar18 = (longlong *)0x0;
    if (FSslCertificateDelegates::VerifySslCertificates._48_4_ != 0) {
      plVar18 = (longlong *)FSslCertificateDelegates::VerifySslCertificates._40_8_;
    }
    cVar8 = (**(code **)(*plVar18 + 0x60))(plVar18,local_ab0,&local_b08);
    LeaveCriticalSection((LPCRITICAL_SECTION)&FSslCertificateDelegates::VerifySslCertificates);
    if (cVar8 != '\0') goto LAB_143148e92;
  }
  X509_STORE_CTX_set_error(local_ad0,0x1b);
LAB_143148eb9:
  DestructItems<FSslCertificateDelegates::FCertInfo,int>((FCertInfo *)local_b08.Data,(int)local_b00)
  ;
  if ((FCertInfo *)local_b08.Data != (FCertInfo *)0x0) {
    FMemory::Free(local_b08.Data);
  }
  if (local_af8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data);
  }
  return (bool)cVar5;
}

