// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// DoWork @ 142a6a440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask::DoWork
          (FPakUncompressTask *this)

{
  int iVar1;
  uchar *puVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  TAlignedBytes<8,8> local_28;
  FStatNameAndInfo FStack_20;
  
  iVar1 = this->CompressedSize;
  puVar2 = this->CompressedBuffer;
  FVar5 = StatPtr_STAT_PakCache_SyncDecrypts;
  if (StatPtr_STAT_PakCache_SyncDecrypts ==
      (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_PakCache_SyncDecrypts");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_PakCache_SyncDecrypts>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_SyncDecrypts,*pFVar4,
                       L"PakCache Sync Decrypts (Uncompressed Path)","STATGROUP_PakFile",
                       "STATCAT_Advanced",L"Pak File",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar5;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.Pad[0] = '\x01';
    local_28.Pad[1] = '\0';
    local_28.Pad[2] = '\0';
    local_28.Pad[3] = '\0';
    local_28.Pad[4] = '\0';
    local_28.Pad[5] = '\0';
    local_28.Pad[6] = '\0';
    local_28.Pad[7] = '\0';
    FStack_20 = (FStatNameAndInfo)((ulonglong)FVar3 & 0xffffafffffffffff | 0xa00000000000);
    local_res8 = FVar3;
    FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_28);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  local_28.Pad = *(uchar (*) [8])&this->EncryptionKeyGuid;
  FStack_20.Index.Value = (this->EncryptionKeyGuid).C;
  FStack_20.Number = (this->EncryptionKeyGuid).D;
  DecryptData(puVar2,(longlong)iVar1 + 0xfU & 0xfffffffffffffff0,(FGuid *)&local_28);
  FCompression::UncompressMemory
            (this->CompressionFormat,this->UncompressedBuffer,(longlong)this->UncompressedSize,
             this->CompressedBuffer,(longlong)this->CompressedSize,COMPRESS_NoFlags,0);
  if (this->CopyOut != (void *)0x0) {
    memcpy(this->CopyOut,this->UncompressedBuffer + this->CopyOffset,this->CopyLength);
  }
  return;
}

