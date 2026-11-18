// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 5

// ~FMultichannelTcpSender @ 14311bf40

void __thiscall FMultichannelTcpSender::~FMultichannelTcpSender(FMultichannelTcpSender *this)

{
  FRunnableThread *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FMultichannelTcpSender__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OkToSendDelegate);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendBuffersCriticalSection);
  *(undefined4 *)&(this->SendBuffers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SendBuffers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SendBuffers);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Exit @ 14311d660

void __thiscall FMultichannelTcpSender::Exit(FMultichannelTcpSender *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  TMap<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  lpCriticalSection = &this->SendBuffersCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar5 = &this->SendBuffers;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)pTVar5);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
              *)pTVar5;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      puVar1 = *(undefined8 **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        ::operator_delete(puVar1,0x10);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014311d7be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Init @ 14311e100

bool __thiscall FMultichannelTcpSender::Init(FMultichannelTcpSender *this)

{
  return true;
}

// Run @ 14311f300

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FMultichannelTcpSender::Run(FMultichannelTcpSender *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FScopedEvent *this_00;
  FScopedEvent *this_01;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ForAnyElementType *pFVar11;
  TMap<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1c8;
  FName local_1b8;
  longlong *local_1a8;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *local_178;
  undefined2 local_170;
  FSimpleAbstractSocket local_168;
  FSocket *local_160;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_158;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b0;
  FReadAccessScope local_98;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  lpCriticalSection = &this->SendBuffersCriticalSection;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_res8[0] = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  do {
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_res8[0] = 0;
    pFVar11 = (ForAnyElementType *)0x0;
    pTVar12 = &this->SendBuffers;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_80,
               (TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                *)pTVar12);
    local_170 = 0;
    stack0xfffffffffffffe68 = local_80._16_16_;
    local_1a8 = (longlong *)local_80._0_8_;
    auStack_1a0._0_8_ = local_80._8_8_;
    local_188 = local_60;
    pTStack_180 = pTStack_58;
    uVar8 = local_80._24_8_ >> 0x20;
    uVar6 = local_80._28_4_;
    local_178 = (TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                 *)pTVar12;
    if ((int)uVar6 < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        plVar9 = local_1a8;
        if ((*(int *)(*(longlong *)(*local_1a8 + 8 + (longlong)(int)uVar8 * 0x18) + 8) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("It.Value()->Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSender.h"
                               ,0x87,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
        if ((pFVar11 == (ForAnyElementType *)0x0) ||
           (*(uint *)(*plVar9 + (longlong)(int)uVar6 * 0x18) < local_res8[0])) {
          local_res8[0] = *(uint *)((longlong)(int)uVar6 * 0x18 + *plVar9);
          pFVar11 = *(ForAnyElementType **)((longlong)(int)uVar6 * 0x18 + 8 + *plVar9);
        }
        uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
        uVar8 = (ulonglong)uStack_18c;
        uVar6 = uStack_18c;
      } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
      if (((char)local_170 != '\0') && (local_170._1_1_ != '\0')) {
        uVar6 = *(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34
        ;
        if (uVar6 < 4) {
          iVar7 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          local_res20 = (undefined4)lVar1;
          iVar7 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar6) && (local_178->HashSize < iVar7)) || (iVar7 < local_178->HashSize)) {
          local_178->HashSize = iVar7;
          TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
          ::Rehash(local_178);
        }
      }
      if (pFVar11 == (ForAnyElementType *)0x0) goto LAB_14311f6c4;
      uVar6 = *(uint *)&pFVar11[1].Data;
      if (((int)uVar6 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Num > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSender.h"
                             ,0x93,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      uVar3 = local_res8[0];
      uVar10 = 0x1fff8;
      if ((int)uVar6 < 0x1fff8) {
        uVar10 = uVar6;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OkToSendDelegate,
                 &local_98);
      if (*(int *)&(this->OkToSendDelegate).field_0x10 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->OkToSendDelegate).field_0x8;
      }
      cVar5 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar10,uVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      if (cVar5 != '\0') {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar10,&local_1c8.AllocatorInstance,&local_1c8.ArrayNum,&local_1c8.ArrayMax);
        memcpy(local_1c8.AllocatorInstance.Data,pFVar11->Data,(longlong)(int)uVar10);
        if ((int)uVar10 < (int)uVar6) {
          uVar6 = 0;
          if ((int)uVar10 <= *(int *)&pFVar11[1].Data) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
          if (uVar10 != 0) {
            iVar7 = *(int *)&pFVar11[1].Data - uVar10;
            if (iVar7 != 0) {
              memmove(pFVar11->Data,pFVar11->Data + (int)uVar10,(longlong)iVar7);
            }
            iVar7 = *(int *)&pFVar11[1].Data - uVar10;
            *(int *)&pFVar11[1].Data = iVar7;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,pFVar11,iVar7,(int *)((longlong)&pFVar11[1].Data + 4));
          }
        }
        else {
          if (pFVar11->Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11->Data);
          }
          ::operator_delete(pFVar11,0x10);
          local_res18[0] = local_res8[0];
          if (*(int *)&(this->SendBuffers).field_0x8 != *(int *)&(this->SendBuffers).field_0x34) {
            TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
            ::RemoveImpl<unsigned_int>
                      ((TSet<TTuple<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_*,0>,FDefaultSetAllocator>
                        *)&this->SendBuffers,local_res8[0],local_res18);
          }
        }
        if ((local_1c8.ArrayNum == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Data.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\MultichannelTcpSender.h"
                               ,0xa7,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
      }
      this_01 = (FScopedEvent *)0x0;
    }
    else {
LAB_14311f6c4:
      this_01 = (FScopedEvent *)0x0;
      this_00 = ::operator_new(8);
      if (this_00 != (FScopedEvent *)0x0) {
        this_01 = FScopedEvent::FScopedEvent(this_00);
      }
      this->EventToRestart = this_01;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_1c8.ArrayNum != 0) {
      local_1b8.ComparisonIndex.Value = 0;
      local_1b8.Number = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      local_158._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_158);
      local_158._padding_ = 0;
      local_158._padding_ =
           (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_158.Bytes = &local_b0;
      local_158.ArchiveName = local_1b8;
      FArchiveState::SetIsSaving((FArchiveState *)&local_158,true);
      (**(code **)(local_158._padding_ + 0x108))(&local_158,0);
      local_158._padding_ = (longlong)&___7FBufferArchive__6B_;
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ArrayNum = 0;
      local_b0.ArrayMax = 0;
      local_res10[0] = 0xa692339f;
      if (*(uint **)(local_158._padding_ + 8) < *(uint **)local_158._padding_ + 1) {
        if ((local_158._padding_ & 0x10000U) == 0) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_158,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_158,local_res10);
        }
      }
      else {
        local_res10[0] = **(uint **)local_158._padding_;
        *(longlong *)local_158._padding_ = *(longlong *)local_158._padding_ + 4;
      }
      if (*(uint **)(local_158._padding_ + 8) < *(uint **)local_158._padding_ + 1) {
        if ((local_158._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_158._padding_ + 0x188) ==
              TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_158,local_res8,4);
          }
          else {
            (**(code **)(local_158._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_158,local_res8);
        }
      }
      else {
        local_res8[0] = **(uint **)local_158._padding_;
        *(longlong *)local_158._padding_ = *(longlong *)local_158._padding_ + 4;
      }
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                ((FArchive *)&local_158,&local_1c8);
      local_160 = this->Socket;
      local_168 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket_FSocket__6B_;
      bVar4 = FNFSMessageHeader::WrapAndSendPayload(&local_b0,&local_168);
      local_168 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket__6B_;
      if (!bVar4) {
        if (1 < (byte)LogMultichannelTCP._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_virtual_unsigned_int___cdecl_FMultichannelTcpSender::Run(void)___ptr64'
                      ::__l51::LOG_Static,(FLogCategoryBase *)&LogMultichannelTCP);
        }
        if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
        }
        FArchive::~FArchive((FArchive *)&local_158);
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        return 0;
      }
      LOCK();
      this->BytesSent = this->BytesSent + local_1c8.ArrayNum;
      UNLOCK();
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_158);
    }
    if (this_01 != (FScopedEvent *)0x0) {
      FScopedEvent::~FScopedEvent(this_01);
      ::operator_delete(this_01,8);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  } while( true );
}

// Stop @ 1431200f0

void __thiscall FMultichannelTcpSender::Stop(FMultichannelTcpSender *this)

{
  return;
}

