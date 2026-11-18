// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Serialize @ 142a9def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakReaderPolicy<FPakSimpleEncryption>::Serialize
          (FPakReaderPolicy<FPakSimpleEncryption> *this,long64 param_1,void *param_2,long64 param_3)

{
  FPakFile *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  longlong *plVar13;
  uint uVar14;
  size_t _Size;
  ulonglong uVar15;
  undefined1 auStackY_178 [32];
  FName local_118;
  FName local_110;
  FArchive *local_108;
  FPakFile *local_100;
  FName local_f8;
  FStatMessage local_f0;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FGuid local_a8;
  FGuid local_98;
  FGuid local_88;
  uchar local_78 [16];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = this->PakFile;
  uVar5._0_4_ = (pFVar1->Info).EncryptionKeyGuid.A;
  uVar5._4_4_ = (pFVar1->Info).EncryptionKeyGuid.B;
  uVar6._0_4_ = (pFVar1->Info).EncryptionKeyGuid.C;
  uVar6._4_4_ = (pFVar1->Info).EncryptionKeyGuid.D;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->AcquirePakReader);
  pcVar2 = *(code **)&this->AcquirePakReader;
  plVar3 = *(longlong **)&(this->AcquirePakReader).field_0x28;
  plVar13 = (longlong *)&(this->AcquirePakReader).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar13 = plVar3;
  }
  uVar8 = (**(code **)(*plVar13 + 8))();
  (*pcVar2)(&local_108,uVar8);
  if ((param_1 + 0xfU & 0xfffffffffffffff0) == param_1) {
    (**(code **)(*(longlong *)local_108 + 0x1b8))(local_108,this->OffsetToFile + param_1);
  }
  else {
    local_110 = (FName)(param_1 - (param_1 & 0xfffffffffffffff0U));
    _Size = param_3;
    if ((longlong)(0x10U - (longlong)local_110) < param_3) {
      _Size = 0x10U - (longlong)local_110;
    }
    (**(code **)(*(longlong *)local_108 + 0x1b8))
              (local_108,this->OffsetToFile + (param_1 & 0xfffffffffffffff0U));
    (**(code **)(*(longlong *)local_108 + 0x188))(local_108,local_78);
    FVar10 = StatPtr_STAT_PakCache_SyncDecrypts;
    if (StatPtr_STAT_PakCache_SyncDecrypts ==
        (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)0x0) {
      pFVar9 = ::FName::FName(&local_c0,"STAT_PakCache_SyncDecrypts");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SyncDecrypts,*pFVar9,
                          L"PakCache Sync Decrypts (Uncompressed Path)","STATGROUP_PakFile",
                          "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid
                         );
    }
    FVar4 = *(FName *)FVar10;
    local_118 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_f0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_f0.StatData.Pad[0] = '\x01';
      local_f0.StatData.Pad[1] = '\0';
      local_f0.StatData.Pad[2] = '\0';
      local_f0.StatData.Pad[3] = '\0';
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_118 = FVar4;
      local_f0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_f0);
      FStatsTrace::Add(&local_118,1);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    local_a8._0_8_ = uVar5;
    local_a8._8_8_ = uVar6;
    DecryptData(local_78,0x10,&local_a8);
    memcpy(param_2,local_78 + (longlong)local_110,_Size);
    param_2 = (void *)((longlong)param_2 + _Size);
    param_3 = param_3 - _Size;
    if (((param_3 != 0) &&
        (uVar14 = (uint)((longlong)(_Size + param_1) >> 0x3f) & 0xf,
        ((int)(_Size + param_1) + uVar14 & 0xf) != uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Length == 0 || DesiredPosition % Alignment == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Public\\IPlatformFilePak.h"
                           ,0x6be,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar15 = param_3 & 0xfffffffffffffff0;
  (**(code **)(*(longlong *)local_108 + 0x188))(local_108,param_2);
  FVar10 = StatPtr_STAT_PakCache_SyncDecrypts;
  if (StatPtr_STAT_PakCache_SyncDecrypts ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)0x0) {
    pFVar9 = ::FName::FName(&local_b8,"STAT_PakCache_SyncDecrypts");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SyncDecrypts,*pFVar9,
                        L"PakCache Sync Decrypts (Uncompressed Path)","STATGROUP_PakFile",
                        "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar10;
  local_118 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_e0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
    local_e0.StatData.Pad[0] = '\x01';
    local_e0.StatData.Pad[1] = '\0';
    local_e0.StatData.Pad[2] = '\0';
    local_e0.StatData.Pad[3] = '\0';
    local_e0.StatData.Pad[4] = '\0';
    local_e0.StatData.Pad[5] = '\0';
    local_e0.StatData.Pad[6] = '\0';
    local_e0.StatData.Pad[7] = '\0';
    local_110 = FVar4;
    local_e0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_e0);
    FStatsTrace::Add(&local_110,1);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  local_98._0_8_ = uVar5;
  local_98._8_8_ = uVar6;
  DecryptData(param_2,uVar15,&local_98);
  if (0 < (longlong)(param_3 - uVar15)) {
    (**(code **)(*(longlong *)local_108 + 0x188))(local_108,local_78);
    FVar10 = StatPtr_STAT_PakCache_SyncDecrypts;
    if (StatPtr_STAT_PakCache_SyncDecrypts ==
        (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)0x0) {
      pFVar9 = ::FName::FName(&local_b0,"STAT_PakCache_SyncDecrypts");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SyncDecrypts,*pFVar9,
                          L"PakCache Sync Decrypts (Uncompressed Path)","STATGROUP_PakFile",
                          "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid
                         );
    }
    FVar4 = *(FName *)FVar10;
    local_118 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      local_d0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_d0.StatData.Pad[0] = '\x01';
      local_d0.StatData.Pad[1] = '\0';
      local_d0.StatData.Pad[2] = '\0';
      local_d0.StatData.Pad[3] = '\0';
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_f8 = FVar4;
      local_d0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar11,&local_d0);
      FStatsTrace::Add(&local_f8,1);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
    local_88._0_8_ = uVar5;
    local_88._8_8_ = uVar6;
    DecryptData(local_78,0x10,&local_88);
    memcpy((uchar *)((longlong)param_2 + uVar15),local_78,param_3 - uVar15);
  }
  if (local_108 != (FArchive *)0x0) {
    FPakFile::ReturnSharedReader(local_100,local_108);
  }
  return;
}

