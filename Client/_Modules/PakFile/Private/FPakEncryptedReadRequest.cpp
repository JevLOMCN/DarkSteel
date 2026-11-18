// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// RequestIsComplete @ 142a98fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FPakEncryptedReadRequest::RequestIsComplete(FPakEncryptedReadRequest *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  uchar auVar3 [8];
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FPakEncryptedReadRequest *pFVar7;
  FPakEncryptedReadRequest *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_PakCache_UncompressedDecrypts> FVar13;
  FPakEncryptedReadRequest *pFVar14;
  FPakEncryptedReadRequest *pFVar15;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FGuid local_58;
  FGuid local_48;
  
  if ((this->field_0x4c == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequestOutstanding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xb0a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this[-1].field_0xbb == '\0') &&
     ((this->field_0x4e != '\0' || ((*(uint *)&this->field_0x48 & 0x100) == 0)))) {
    puVar1 = &this->field_0x58;
    if ((*(longlong *)&this->field_0x50 != *(longlong *)&this->field_0x20) ||
       (pFVar7 = (FPakEncryptedReadRequest *)0x0,
       *(longlong *)puVar1 != *(longlong *)&this->field_0x28)) {
      pFVar7 = FMemory::Malloc(*(ulong64 *)&this->field_0x28,0);
    }
    pFVar8 = *(FPakEncryptedReadRequest **)&this[-1].field_0x80;
    if (this[-1].field_0xbd == '\0') {
      if ((pFVar8 != (FPakEncryptedReadRequest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Memory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xb18,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = FMemory::Malloc(*(ulong64 *)puVar1,0);
      lVar2 = *(longlong *)puVar1;
      if (lVar2 != 0) {
        FVar10 = StatPtr_STAT_AsyncFileMemory;
        if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0)
        {
          pFVar9 = ::FName::FName(&local_res20,"STAT_AsyncFileMemory");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar9,
                              L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                              L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar10,Add,lVar2,false);
      }
    }
    else if ((pFVar8 == (FPakEncryptedReadRequest *)0x0) &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("DestBuffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                ,0xb1e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PakPrecacherSingleton",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0x33f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = pFVar8;
    if (pFVar7 != (FPakEncryptedReadRequest *)0x0) {
      pFVar15 = pFVar7;
    }
    pFVar14 = this;
    if (this == (FPakEncryptedReadRequest *)&DAT_00000048) {
      pFVar14 = (FPakEncryptedReadRequest *)0x0;
    }
    bVar6 = FPakPrecacher::GetCompletedRequest
                      (PakPrecacherSingleton,(IPakRequestor *)pFVar14,(uchar *)pFVar15);
    if (bVar6) {
      *(FPakEncryptedReadRequest **)&this[-1].field_0x80 = pFVar8;
      if ((pFVar8 == (FPakEncryptedReadRequest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Memory",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xb34,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar13 = StatPtr_STAT_PakCache_UncompressedDecrypts;
      if (StatPtr_STAT_PakCache_UncompressedDecrypts ==
          (FThreadSafeStaticStat<FStat_STAT_PakCache_UncompressedDecrypts>)0x0) {
        pFVar9 = ::FName::FName(&local_80,"STAT_PakCache_UncompressedDecrypts");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_PakCache_UncompressedDecrypts>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_UncompressedDecrypts
                            ,*pFVar9,L"PakCache Async Decrypts (Uncompressed Path)",
                            "STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",true,false,ST_int64,
                            false,false,MCR_Invalid);
      }
      FVar4 = *(FName *)FVar13;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_68.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_68.StatData.Pad[0] = '\x01';
        local_68.StatData.Pad[1] = '\0';
        local_68.StatData.Pad[2] = '\0';
        local_68.StatData.Pad[3] = '\0';
        local_68.StatData.Pad[4] = '\0';
        local_68.StatData.Pad[5] = '\0';
        local_68.StatData.Pad[6] = '\0';
        local_68.StatData.Pad[7] = '\0';
        local_res18 = FVar4;
        local_68.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_68);
        FStatsTrace::Add(&local_res18,1);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
      if (pFVar7 == (FPakEncryptedReadRequest *)0x0) {
        if (((this->field_0x58 & 0xf) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsAligned(OriginalSize, FAES::AESBlockSize)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0xb40,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_48.A = *(uint *)&this->field_0x60;
        local_48.B = *(uint *)&this->field_0x64;
        local_48.C = *(uint *)&this->field_0x68;
        local_48.D = *(uint *)&this->field_0x6c;
        DecryptData(*(uchar **)&this[-1].field_0x80,*(ulong64 *)&this->field_0x58,&local_48);
      }
      else {
        if (((this->field_0x28 & 0xf) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsAligned(BytesToRead, FAES::AESBlockSize)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0xb39,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_58.A = *(uint *)&this->field_0x60;
        local_58.B = *(uint *)&this->field_0x64;
        local_58.C = *(uint *)&this->field_0x68;
        local_58.D = *(uint *)&this->field_0x6c;
        DecryptData((uchar *)pFVar7,*(ulong64 *)&this->field_0x28,&local_58);
        memcpy(*(void **)&this[-1].field_0x80,
               (void *)((*(longlong *)&this->field_0x50 - *(longlong *)&this->field_0x20) +
                       (longlong)pFVar7),*(size_t *)&this->field_0x58);
        FMemory::Free(pFVar7);
      }
    }
    else {
      if ((this[-1].field_0xbb == '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bCanceled",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xb23,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (this[-1].field_0xbd == '\0') {
        if (((*(longlong *)&this[-1].field_0x80 != 0) || (pFVar8 == (FPakEncryptedReadRequest *)0x0)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!Memory && DestBuffer",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                     ,0xb26,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FMemory::Free(pFVar8);
        auVar3 = *(uchar (*) [8])&this->field_0x58;
        if (auVar3 != (uchar  [8])0x0) {
          FVar10 = StatPtr_STAT_AsyncFileMemory;
          if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0
             ) {
            pFVar9 = ::FName::FName(&local_88,"STAT_AsyncFileMemory");
            FVar10 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar9,
                                L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                                L"Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar4 = *(FName *)FVar10;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar11 == (FThreadStats *)0x0) {
              pFVar12 = FThreadStatsPool::Get();
              pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
            }
            local_78.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_res10 = FVar4;
            local_78.StatData.Pad = auVar3;
            local_78.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar11,&local_78);
            FStatsTrace::Add(&local_res10,-(longlong)auVar3);
            if (pFVar11->ScopeCount == 0) {
              FThreadStats::Flush(pFVar11,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar11,false,false);
            }
          }
        }
      }
      if (pFVar7 != (FPakEncryptedReadRequest *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
  }
  IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)&this[-1].field_0x78);
  EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  this->field_0x4c = 0;
  if (*(longlong **)&this->field_0x30 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x30 + 0x10))();
  }
  this[-1].field_0xb9 = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a99670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
  return;
}

