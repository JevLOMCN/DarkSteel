// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 4

// Exit @ 14311d650

void __thiscall FMultichannelTcpReceiver::Exit(FMultichannelTcpReceiver *this)

{
  return;
}

// Init @ 14311e0f0

bool __thiscall FMultichannelTcpReceiver::Init(FMultichannelTcpReceiver *this)

{
  return true;
}

// Run @ 14311eff0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMultichannelTcpReceiver::Run(FMultichannelTcpReceiver *this)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  byte bVar4;
  uint local_res8 [2];
  uint local_res10 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_128;
  FSimpleAbstractSocket local_118;
  FSocket *local_110;
  undefined1 local_108 [8];
  FFastPathLoadBuffer *pFStack_100;
  uchar *local_f8;
  uchar *puStack_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long64 lStack_d0;
  FPackageFileVersion local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FCustomVersionContainer *pFStack_b0;
  FCustomPropertyListNode *local_a8;
  FArchiveSavePackageData *pFStack_a0;
  FProperty *local_98;
  FArchiveSerializedPropertyChain *pFStack_90;
  undefined8 local_88;
  FArchiveState *pFStack_80;
  undefined8 local_78;
  void *pvStack_70;
  undefined8 local_68;
  FReadAccessScope local_58;
  
  local_108 = (undefined1  [8])0x0;
  pFStack_100 = (FFastPathLoadBuffer *)0x0;
  local_f8 = (uchar *)0x0;
  puStack_f0 = (uchar *)0x0;
  local_e8 = (uchar *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8.FileVersionUE4 = 0;
  local_c8.FileVersionUE5 = 0;
  uStack_c0 = 0;
  local_b8._0_2_ = 0;
  local_b8._2_2_ = 0;
  local_b8._4_4_ = 0;
  pFStack_b0 = (FCustomVersionContainer *)0x0;
  local_a8 = (FCustomPropertyListNode *)0x0;
  pFStack_a0 = (FArchiveSavePackageData *)0x0;
  local_98 = (FProperty *)0x0;
  pFStack_90 = (FArchiveSerializedPropertyChain *)0x0;
  local_88 = 0;
  pFStack_80 = (FArchiveState *)0x0;
  FArchiveState::FArchiveState((FArchiveState *)local_108);
  local_78 = 0;
  pvStack_70 = (void *)0x0;
  local_108 = (undefined1  [8])&___7FArrayReader__6B_;
  local_68 = 0;
  FArchiveState::SetIsLoading((FArchiveState *)local_108,true);
  (**(code **)((longlong)local_108 + 0x108))(local_108,0);
  local_118 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket_FSocket__6B_;
  local_110 = this->Socket;
  bVar2 = FNFSMessageHeader::ReceivePayload((FArrayReader *)local_108,&local_118);
  if (bVar2) {
    do {
      if (pFStack_100->EndFastPathLoadBuffer <
          (uint *)((longlong)pFStack_100->StartFastPathLoadBuffer + 4)) {
        if ((uStack_e0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_108 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_108,local_res8,4);
          }
          else {
            (**(code **)((longlong)local_108 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_108,local_res8);
        }
      }
      else {
        local_res8[0] = *(uint *)pFStack_100->StartFastPathLoadBuffer;
        pFStack_100->StartFastPathLoadBuffer = pFStack_100->StartFastPathLoadBuffer + 4;
      }
      if (local_res8[0] != 0xa692339f) {
        if (1 < (byte)LogMultichannelTCP._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_virtual_unsigned_int___cdecl_FMultichannelTcpReceiver::Run(void)___ptr64'
                      ::__l11::LOG_Static,(FLogCategoryBase *)&LogMultichannelTCP);
        }
        break;
      }
      if (pFStack_100->EndFastPathLoadBuffer <
          (uint *)((longlong)pFStack_100->StartFastPathLoadBuffer + 4)) {
        if ((uStack_e0 & 0x10000) == 0) {
          if (*(code **)((longlong)local_108 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_108,local_res10,4);
          }
          else {
            (**(code **)((longlong)local_108 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_108,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)pFStack_100->StartFastPathLoadBuffer;
        pFStack_100->StartFastPathLoadBuffer = pFStack_100->StartFastPathLoadBuffer + 4;
      }
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                ((FArchive *)local_108,&local_128);
      uVar1 = local_res10[0];
      bVar4 = uStack_e0._2_1_ & 1;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReceiveDelegate,
                 &local_58);
      plVar3 = (longlong *)0x0;
      if (*(int *)&(this->ReceiveDelegate).field_0x10 != 0) {
        plVar3 = *(longlong **)&(this->ReceiveDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,&local_128,uVar1,bVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      LOCK();
      this->BytesReceived = this->BytesReceived + local_128.ArrayNum;
      UNLOCK();
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      FArchive::~FArchive((FArchive *)local_108);
      local_108 = (undefined1  [8])0x0;
      pFStack_100 = (FFastPathLoadBuffer *)0x0;
      local_f8 = (uchar *)0x0;
      puStack_f0 = (uchar *)0x0;
      local_e8 = (uchar *)0x0;
      uStack_e0 = 0;
      local_d8 = 0;
      lStack_d0 = 0;
      local_c8.FileVersionUE4 = 0;
      local_c8.FileVersionUE5 = 0;
      uStack_c0 = 0;
      local_b8._0_2_ = 0;
      local_b8._2_2_ = 0;
      local_b8._4_4_ = 0;
      pFStack_b0 = (FCustomVersionContainer *)0x0;
      local_a8 = (FCustomPropertyListNode *)0x0;
      pFStack_a0 = (FArchiveSavePackageData *)0x0;
      local_98 = (FProperty *)0x0;
      pFStack_90 = (FArchiveSerializedPropertyChain *)0x0;
      local_88 = 0;
      pFStack_80 = (FArchiveState *)0x0;
      FArchiveState::FArchiveState((FArchiveState *)local_108);
      local_68 = 0;
      local_78 = 0;
      pvStack_70 = (void *)0x0;
      local_108 = (undefined1  [8])&___7FArrayReader__6B_;
      FArchiveState::SetIsLoading((FArchiveState *)local_108,true);
      (**(code **)((longlong)local_108 + 0x108))(local_108,0);
      local_118 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket_FSocket__6B_;
      local_110 = this->Socket;
      bVar2 = FNFSMessageHeader::ReceivePayload((FArrayReader *)local_108,&local_118);
      local_118 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket__6B_;
    } while (bVar2);
  }
  if (pvStack_70 != (void *)0x0) {
    FMemory::Free(pvStack_70);
  }
  FArchive::~FArchive((FArchive *)local_108);
  return 0;
}

// Stop @ 1431200e0

void __thiscall FMultichannelTcpReceiver::Stop(FMultichannelTcpReceiver *this)

{
  return;
}

