// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 4

// FWinHttpSession @ 14314ebf0

/* WARNING: Enum "Type": Some values do not have unique names */

FWinHttpSession * __thiscall
FWinHttpSession::FWinHttpSession(FWinHttpSession *this,uint param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  void *pvVar1;
  int iVar2;
  DWORD DVar3;
  FUserAgentImpl *SRWLock;
  void *pvVar4;
  FHttpModule *pFVar5;
  ForAnyElementType FVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_res8 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_48 [16];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this->bForceSecureConnections = param_2;
  (this->SessionHandle).Handle = (void *)0x0;
  SRWLock = FUserAgentImpl::Get();
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (SRWLock->CachedUserAgent).Data.ArrayNum;
  lVar8 = (longlong)local_30;
  _Src = (SRWLock->CachedUserAgent).Data.AllocatorInstance.Data;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar8 * 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_30 != 0) {
    FVar6.Data = local_38.Data;
  }
  pvVar4 = (void *)WinHttpOpen(FVar6.Data,4,0,0,0x10000000);
  pvVar1 = (this->SessionHandle).Handle;
  if (pvVar1 != pvVar4) {
    if (this != (FWinHttpSession *)local_48) {
      (this->SessionHandle).Handle = pvVar4;
      pvVar4 = pvVar1;
    }
    if (pvVar4 != (void *)0x0) {
      iVar2 = WinHttpCloseHandle();
      if (iVar2 == 0) {
        DVar3 = GetLastError();
        if (DVar3 == 8) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
LAB_14314ed4f:
            UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogWinHttp);
          }
        }
        else if (DVar3 == 0x2ee4) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
            goto LAB_14314ed4f;
          }
        }
        else if (DVar3 == 0x2eec) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
            goto LAB_14314ed4f;
          }
        }
        else if (1 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
      }
    }
  }
  pvVar1 = (this->SessionHandle).Handle;
  if (pvVar1 == (void *)0x0) {
    DVar3 = GetLastError();
    if (DVar3 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
      pFVar7 = &::LOG_Static;
    }
    else {
      if (DVar3 != 0x2ee4) {
        if (1 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        }
        goto LAB_14314f199;
      }
      if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
      pFVar7 = &::LOG_Static;
    }
  }
  else {
    local_res18[0] = param_1;
    iVar2 = WinHttpSetOption(pvVar1,0x54,local_res18,4);
    if (iVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 < 0x2eea) {
        if (DVar3 == 0x2ee9) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
LAB_14314eedb:
            UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogWinHttp);
          }
        }
        else if (DVar3 == 8) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
            goto LAB_14314eedb;
          }
        }
        else if (DVar3 == 0x57) {
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
            goto LAB_14314eedb;
          }
        }
        else {
          if (DVar3 != 0x2ee4) goto LAB_14314ee86;
          if (1 < (byte)LogWinHttp._0_1_) {
            pFVar7 = &::LOG_Static;
            goto LAB_14314eedb;
          }
        }
      }
      else if (DVar3 == 0x2eeb) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_14314eedb;
        }
      }
      else if (DVar3 == 0x2ef2) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_14314eedb;
        }
      }
      else if (DVar3 == 0x2ef3) {
        if (1 < (byte)LogWinHttp._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_14314eedb;
        }
      }
      else {
LAB_14314ee86:
        if (1 < (byte)LogWinHttp._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_WinHttpSetOptio_150a5da78,
                     (FLogCategoryBase *)&LogWinHttp);
        }
      }
      if (this == (FWinHttpSession *)(local_48 + 8)) goto LAB_14314f199;
      pvVar1 = (this->SessionHandle).Handle;
      (this->SessionHandle).Handle = (void *)0x0;
      if (pvVar1 == (void *)0x0) goto LAB_14314f199;
      iVar2 = WinHttpCloseHandle();
      if (iVar2 != 0) goto LAB_14314f199;
      DVar3 = GetLastError();
      if (DVar3 == 8) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else if (DVar3 == 0x2ee4) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else {
        if (DVar3 != 0x2eec) {
          if (1 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          goto LAB_14314f199;
        }
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
    }
    else {
      local_res8[0] = 1;
      iVar2 = WinHttpSetOption((this->SessionHandle).Handle,0x85,local_res8,4);
      if (iVar2 == 0) {
        if (5 < (byte)LogWinHttp._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_14314efec;
        }
      }
      else if (5 < (byte)LogWinHttp._0_1_) {
        pFVar7 = &::LOG_Static;
LAB_14314efec:
        UE::Logging::Private::BasicLog<6>(pFVar7,(FLogCategoryBase *)&LogWinHttp);
      }
      local_res20[0] = 3;
      iVar2 = WinHttpSetOption((this->SessionHandle).Handle,0x76,local_res20,4);
      if (iVar2 == 0) {
        if (5 < (byte)LogWinHttp._0_1_) {
          pFVar7 = &::LOG_Static;
          goto LAB_14314f045;
        }
      }
      else if (5 < (byte)LogWinHttp._0_1_) {
        pFVar7 = &::LOG_Static;
LAB_14314f045:
        UE::Logging::Private::BasicLog<6>(pFVar7,(FLogCategoryBase *)&LogWinHttp);
      }
      pFVar5 = FHttpModule::Get();
      fVar10 = pFVar5->HttpActivityTimeout;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      auVar11._0_8_ = (double)(fVar10 * __real_4b189680 + __real_3f000000);
      auVar11._8_8_ = 0;
      auVar11 = roundpd(auVar11,auVar11,1);
      fVar10 = pFVar5->HttpConnectionTimeout;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      iVar9 = (int)((double)(longlong)auVar11._0_8_ * __real_3f1a36e2eb1c432d);
      auVar12._0_8_ = (double)(fVar10 * __real_4b189680 + __real_3f000000);
      auVar12._8_8_ = 0;
      auVar11 = roundpd(auVar12,auVar12,1);
      iVar2 = (int)((double)(longlong)auVar11._0_8_ * __real_3f1a36e2eb1c432d);
      iVar2 = WinHttpSetTimeouts((this->SessionHandle).Handle,iVar2,iVar2,iVar9,iVar9);
      if (iVar2 != 0) goto LAB_14314f199;
      DVar3 = GetLastError();
      if (DVar3 == 8) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else if (DVar3 == 0x57) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else if (DVar3 == 0x2ee4) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else if (DVar3 == 0x2ef2) {
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
      else {
        if (DVar3 != 0x2ef3) {
          if (1 < (byte)LogWinHttp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
          }
          goto LAB_14314f199;
        }
        if ((byte)LogWinHttp._0_1_ < 2) goto LAB_14314f199;
        pFVar7 = &::LOG_Static;
      }
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&LogWinHttp);
LAB_14314f199:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return this;
}

// AreOnlySecureConnectionsAllowed @ 143155510

bool __thiscall FWinHttpSession::AreOnlySecureConnectionsAllowed(FWinHttpSession *this)

{
  return this->bForceSecureConnections;
}

// Get @ 143160bd0

void * __thiscall FWinHttpSession::Get(FWinHttpSession *this)

{
  return (this->SessionHandle).Handle;
}

// IsValid @ 14316cf60

bool __thiscall FWinHttpSession::IsValid(FWinHttpSession *this)

{
  return (this->SessionHandle).Handle != (void *)0x0;
}

