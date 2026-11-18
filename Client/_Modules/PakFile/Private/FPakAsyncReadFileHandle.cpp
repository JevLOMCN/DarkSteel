// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 12

// FPakAsyncReadFileHandle @ 142a52780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FPakAsyncReadFileHandle * __thiscall
FPakAsyncReadFileHandle::FPakAsyncReadFileHandle
          (FPakAsyncReadFileHandle *this,FPakEntry *param_1,TRefCountPtr<FPakFile> *param_2,
          wchar_t *param_3)

{
  int *piVar1;
  FName FVar2;
  FPakFile *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPakAsyncReadFileHandle *pFVar16;
  long64 lVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  longlong *plVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uint uVar23;
  long64 lVar24;
  undefined1 auStackY_118 [32];
  FName local_b8;
  wchar_t *local_b0;
  FStatMessage local_a8;
  FName local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this->_padding_ = (longlong)&___7IAsyncReadFileHandle__6B_;
  FVar15 = StatPtr_STAT_AsyncFileHandles;
  local_b0 = param_3;
  if (StatPtr_STAT_AsyncFileHandles == (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)0x0) {
    pFVar14 = ::FName::FName(local_98,"STAT_AsyncFileHandles");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileHandles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileHandles,*pFVar14,
                        L"Num Async File Handles","STATGROUP_Memory","STATCAT_Advanced",L"Memory",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar15;
  local_b8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_a8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_a8.StatData.Pad[0] = '\x01';
    local_a8.StatData.Pad[1] = '\0';
    local_a8.StatData.Pad[2] = '\0';
    local_a8.StatData.Pad[3] = '\0';
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_b8 = FVar2;
    local_a8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_a8);
    FStatsTrace::Add(&local_b8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  this->_padding_ = (longlong)&___7FPakAsyncReadFileHandle__6B_;
  this->PakFile = param_2->Reference->PakFilenameName;
  (this->ActualPakFile).Reference = (FPakFile *)0x0;
  pFVar3 = param_2->Reference;
  (this->ActualPakFile).Reference = pFVar3;
  if (pFVar3 != (FPakFile *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  this->PakFileSize = param_2->Reference->CachedTotalSize;
  FPakEntry::FPakEntry(&this->FileEntry,param_1);
  *(undefined8 *)&(this->LiveRequests).Elements = 0;
  piVar1 = &(this->Blocks).ArrayNum;
  *(undefined8 *)&(this->LiveRequests).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LiveRequests).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LiveRequests).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LiveRequests).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LiveRequests).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LiveRequests).Elements.field_0x34 = 0;
  (this->LiveRequests).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LiveRequests).HashSize = 0;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->Blocks).ArrayMax = 0;
  *(undefined8 *)&this->ReadCallbackFunction = 0;
  *(undefined8 *)&(this->ReadCallbackFunction).field_0x28 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->CompressionMethod).Number = 0;
  lVar19 = 0x30;
  this->CompressedChunkOffset = 0;
  this->NumLiveRawRequests = 0;
  (this->CompressionMethod).ComparisonIndex = 0;
  pFVar3 = param_2->Reference;
  uVar12 = (pFVar3->Info).EncryptionKeyGuid.B;
  uVar23 = (pFVar3->Info).EncryptionKeyGuid.C;
  uVar8 = (pFVar3->Info).EncryptionKeyGuid.D;
  (this->EncryptionKeyGuid).A = (pFVar3->Info).EncryptionKeyGuid.A;
  (this->EncryptionKeyGuid).B = uVar12;
  (this->EncryptionKeyGuid).C = uVar23;
  (this->EncryptionKeyGuid).D = uVar8;
  *(undefined8 *)&this->OutstandingCancelMapBlock = 0;
  *(undefined8 *)&(this->OutstandingCancelMapBlock).field_0x8 = 0;
  *(undefined8 *)&(this->OutstandingCancelMapBlock).field_0x20 = 0;
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x28 = 0;
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x34 = 0;
  *(undefined8 *)&(this->OutstandingCancelMapBlock).field_0x40 = 0;
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x48 = 0;
  iVar11 = (param_2->Reference->Info).Version;
  if ((2 < iVar11) && (lVar19 = 0x35, (this->FileEntry).CompressionMethodIndex != 0)) {
    lVar19 = (longlong)(this->FileEntry).CompressionBlocks.ArrayNum * 0x10 + 0x39;
  }
  uVar12 = (this->FileEntry).CompressionMethodIndex;
  lVar24 = (this->FileEntry).UncompressedSize;
  this->UncompressedFileSize = lVar24;
  lVar22 = lVar19 + 8;
  if (1 < iVar11) {
    lVar22 = lVar19;
  }
  this->OffsetInPak = lVar22 + (this->FileEntry).Offset;
  pFVar3 = param_2->Reference;
  uVar23 = 0;
  if ((int)uVar12 < (pFVar3->Info).CompressionMethods.ArrayNum) {
    uVar23 = ~uVar12 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
    return pFVar16;
  }
  pvVar9 = ThreadLocalStoragePointer;
  this->CompressionMethod =
       *(FName *)((pFVar3->Info).CompressionMethods.AllocatorInstance.Data +
                 (longlong)(int)uVar12 * 8);
  if ((*(int *)(*(longlong *)((longlong)pvVar9 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar18 = FCommandLine::Get();
    GPakCache_ForcePakProcessedReads = FParse::Param(pwVar18,L"ForcePakProcessReads");
    bInitialValue = GPakCache_ForcePakProcessedReads;
    _Init_thread_footer(&::_TSS0);
  }
  if (GPakCache_ForcePakProcessedReads == false) {
LAB_142a52be7:
    if (this->CompressionMethod == (FName)0x0) goto LAB_142a52d96;
  }
  else if (this->CompressionMethod == (FName)0x0) {
    if (this->UncompressedFileSize != 0) {
      if (((this->FileEntry).CompressionBlocks.ArrayNum != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FileEntry.CompressionBlocks.Num() == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xcd3,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
        return pFVar16;
      }
      lVar19 = 0;
      this->CompressionMethod = GPakFakeCompression;
      (this->FileEntry).CompressionBlockSize = 0x10000;
      if (0 < this->UncompressedFileSize) {
        do {
          iVar11 = (this->FileEntry).CompressionBlocks.ArrayNum;
          if (iVar11 == (this->FileEntry).CompressionBlocks.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->FileEntry).CompressionBlocks.AllocatorInstance,
                                &(this->FileEntry).CompressionBlocks.ArrayMax);
          }
          (this->FileEntry).CompressionBlocks.ArrayNum = iVar11 + 1;
          pFVar21 = (this->FileEntry).CompressionBlocks.AllocatorInstance.Data +
                    (longlong)iVar11 * 0x10;
          *(longlong *)pFVar21 = 0;
          *(longlong *)(pFVar21 + 8) = 0;
          if ((param_2->Reference->Info).Version < 5) {
            lVar17 = 0;
          }
          else {
            lVar17 = (this->FileEntry).Offset;
          }
          lVar22 = (this->OffsetInPak - lVar17) + lVar19;
          *(longlong *)pFVar21 = lVar22;
          lVar22 = (ulonglong)(this->FileEntry).CompressionBlockSize + lVar22;
          *(longlong *)(pFVar21 + 8) = lVar22;
          lVar19 = lVar19 + (ulonglong)(this->FileEntry).CompressionBlockSize;
          lVar4 = this->UncompressedFileSize;
          if (lVar4 < lVar19) {
            *(longlong *)(pFVar21 + 8) = (lVar4 - lVar19) + lVar22;
            break;
          }
        } while (lVar19 < lVar4);
      }
    }
    goto LAB_142a52be7;
  }
  if (this->UncompressedFileSize != 0) {
    if (((this->FileEntry).CompressionBlocks.ArrayNum == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileEntry.CompressionBlocks.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xce7,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
      return pFVar16;
    }
    if (((this->FileEntry).CompressionBlocks.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
      return pFVar16;
    }
    iVar11 = (this->FileEntry).CompressionBlocks.ArrayNum;
    pFVar21 = (this->FileEntry).CompressionBlocks.AllocatorInstance.Data;
    uVar23 = iVar11 - 1;
    uVar12 = 0;
    if ((int)uVar23 < iVar11) {
      uVar12 = ~uVar23 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
      return pFVar16;
    }
    lVar24 = *(longlong *)
              ((this->FileEntry).CompressionBlocks.AllocatorInstance.Data +
              (longlong)(this->FileEntry).CompressionBlocks.ArrayNum * 0x10 + -8) -
             *(longlong *)pFVar21;
    if ((lVar24 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompressedFileSize >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xce9,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
      return pFVar16;
    }
    lVar19 = (longlong)(int)(this->FileEntry).CompressionBlockSize;
    if (((this->UncompressedFileSize + -1 + lVar19) / lVar19 !=
         (longlong)(this->FileEntry).CompressionBlocks.ArrayNum) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(UncompressedFileSize + CompressionBlockSize - 1) / CompressionBlockSize == FileEntry.CompressionBlocks.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xceb,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
      return pFVar16;
    }
    iVar11 = (this->FileEntry).CompressionBlocks.ArrayNum;
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar11,&(this->Blocks).AllocatorInstance,piVar1,&(this->Blocks).ArrayMax
                       );
    memset((this->Blocks).AllocatorInstance.Data + (longlong)iVar13 * 8,0,(longlong)iVar11 << 3);
    if ((param_2->Reference->Info).Version < 5) {
      lVar17 = 0;
    }
    else {
      lVar17 = (this->FileEntry).Offset;
    }
    this->CompressedChunkOffset = lVar17;
  }
LAB_142a52d96:
  if (6 < (byte)LogPakFile._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:___cdecl_FPakAsyncReadFileHandle::FPakAsyncReadFileHandle(FPakEntry_const*___ptr64,TRefCountPtr<FPakFile>_const&___ptr64,wchar_t_const*___ptr64)___ptr64'
                ::__l42::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  if ((((this->PakFileSize < 1) || (this->PakFileSize < this->OffsetInPak + lVar24)) ||
      (this->OffsetInPak < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PakFileSize > 0 && OffsetInPak + CompressedFileSize <= PakFileSize && OffsetInPak >= 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xcf0,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pFVar16 = (FPakAsyncReadFileHandle *)(*pcVar5)();
    return pFVar16;
  }
  local_88 = *(longlong *)&this->ReadCallbackFunction;
  uVar7 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x8;
  local_78 = *(longlong *)&(this->ReadCallbackFunction).field_0x10;
  uStack_70 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x18;
  uVar6 = *(undefined8 *)&(this->ReadCallbackFunction).field_0x20;
  plStack_60 = *(longlong **)&(this->ReadCallbackFunction).field_0x28;
  *(code **)&this->ReadCallbackFunction =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPakAsyncReadFileHandle::FPakAsyncReadFileHandle'::__l2::<lambda_1>,void,bool,IAsyncReadRequest_*>
       ::Call;
  *(undefined8 *)&(this->ReadCallbackFunction).field_0x8 = uStack_80;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x10 = 0x5098ba40;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x14 = 1;
  *(FPakAsyncReadFileHandle **)&(this->ReadCallbackFunction).field_0x18 = this;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x28 = 0;
  *(undefined4 *)&(this->ReadCallbackFunction).field_0x2c = 0;
  local_68 = uVar6;
  if (local_88 != 0) {
    plVar20 = &local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar20 = plStack_60;
    }
    uStack_80 = uVar7;
    (**(code **)(*plVar20 + 0x10))();
  }
  return this;
}

// ~FPakAsyncReadFileHandle @ 142a56670

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPakAsyncReadFileHandle::~FPakAsyncReadFileHandle(FPakAsyncReadFileHandle *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  int iVar3;
  FCachedAsyncBlock *pFVar4;
  FBaseGraphTask *pFVar5;
  void *pvVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  FPakFile *pFVar10;
  code *pcVar11;
  longlong lVar12;
  bool bVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  this->_padding_ = (longlong)&___7FPakAsyncReadFileHandle__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((0 < *(int *)&(this->LiveRequests).Elements.field_0x8 -
           *(int *)&(this->LiveRequests).Elements.field_0x34) || (0 < this->NumLiveRawRequests)) {
    UE::Logging::Private::BasicFatalLog
              (&`public:_virtual___cdecl_FPakAsyncReadFileHandle::~FPakAsyncReadFileHandle(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogPakFile);
  }
  if (*(int *)&(this->LiveRequests).Elements.field_0x8 !=
      *(int *)&(this->LiveRequests).Elements.field_0x34) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!LiveRequests.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                        ,0xcff,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (this->NumLiveRawRequests != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!NumLiveRawRequests",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                        ,0xd00,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar15 = (this->Blocks).AllocatorInstance.Data;
  iVar3 = (this->Blocks).ArrayNum;
  pFVar8 = pFVar15 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Blocks).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedAsyncBlock_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar8) break;
    pFVar4 = *(FCachedAsyncBlock **)pFVar15;
    if (pFVar4 != (FCachedAsyncBlock *)0x0) {
      if (pFVar4->RefCount != 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block->RefCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd05,L"");
        if (bVar13) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      ClearBlock(this,pFVar4,true);
      pFVar5 = (pFVar4->CPUWorkGraphEvent).Reference;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar5->field_0x30;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
      ::operator_delete(pFVar4,0x38);
    }
    pFVar15 = pFVar15 + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined4 *)&(this->OutstandingCancelMapBlock).field_0x48 = 0;
  pvVar6 = *(void **)&(this->OutstandingCancelMapBlock).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutstandingCancelMapBlock);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if (*(longlong *)&this->ReadCallbackFunction != 0) {
    plVar7 = *(longlong **)&(this->ReadCallbackFunction).field_0x28;
    plVar14 = (longlong *)&(this->ReadCallbackFunction).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar14 = plVar7;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  pFVar8 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  (this->LiveRequests).HashSize = 0;
  FVar9 = (this->LiveRequests).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<FPakProcessedReadRequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPakProcessedReadRequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LiveRequests).Elements);
  pFVar8 = (this->FileEntry).CompressionBlocks.AllocatorInstance.Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  pFVar10 = (this->ActualPakFile).Reference;
  if (pFVar10 != (FPakFile *)0x0) {
    plVar7 = &pFVar10->_padding_;
    LOCK();
    lVar12 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar7 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)(pFVar10,1);
    }
  }
  IAsyncReadFileHandle::~IAsyncReadFileHandle((IAsyncReadFileHandle *)this);
  return;
}

// ClearBlock @ 142a63280

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::ClearBlock
          (FPakAsyncReadFileHandle *this,FCachedAsyncBlock *param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  uchar auVar11 [8];
  FName local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  
  if ((param_1->RawRequest != (FPakReadRequest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Block.RawRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xe41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_1->RawRequest = (FPakReadRequest *)0x0;
  pFVar3 = (param_1->CPUWorkGraphEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (param_1->CPUWorkGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  if (param_1->Raw != (uchar *)0x0) {
    if ((param_2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bForDestructorShouldAlreadyBeClear",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xe47,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMemory::Free(param_1->Raw);
    param_1->Raw = (uchar *)0x0;
    if ((param_1->RawSize < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.RawSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xe4b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    auVar11 = (uchar  [8])(longlong)param_1->RawSize;
    if (auVar11 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_70,"STAT_AsyncFileMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar7,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar8;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_60.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res20 = FVar4;
        local_60.StatData.Pad = auVar11;
        local_60.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_60);
        FStatsTrace::Add(&local_res20,-(longlong)auVar11);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  param_1->RawSize = 0;
  if (param_1->Processed != (uchar *)0x0) {
    if ((param_2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("bForDestructorShouldAlreadyBeClear == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xe51,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMemory::Free(param_1->Processed);
    param_1->Processed = (uchar *)0x0;
    if ((param_1->ProcessedSize < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.ProcessedSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xe54,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    auVar11 = (uchar  [8])(longlong)param_1->ProcessedSize;
    if (auVar11 != (uchar  [8])0x0) {
      FVar8 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar7 = ::FName::FName(&local_68,"STAT_AsyncFileMemory");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar7,
                           L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                           L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar8;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar9 == (FThreadStats *)0x0) {
          pFVar10 = FThreadStatsPool::Get();
          pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
        }
        local_50.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_78 = FVar4;
        local_50.StatData.Pad = auVar11;
        local_50.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar9,&local_50);
        FStatsTrace::Add(&local_78,-(longlong)auVar11);
        if (pFVar9->ScopeCount == 0) {
          FThreadStats::Flush(pFVar9,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar9,false,false);
        }
      }
    }
  }
  param_1->ProcessedSize = 0;
  param_1->bInFlight = false;
  param_1->bCPUWorkIsComplete = false;
  return;
}

// DoProcessing @ 142a681a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::DoProcessing(FPakAsyncReadFileHandle *this,FCachedAsyncBlock *param_1)

{
  FThreadSafeCounter *pFVar1;
  ForElementType<FPakProcessedReadRequest_*> FVar2;
  ulonglong uVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FCachedAsyncBlock_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *pTVar5;
  TMap<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>_>
  *this_00;
  FPakReadRequest *pFVar6;
  undefined1 *puVar7;
  FPakProcessedReadRequest *pFVar8;
  FBaseGraphTask *pFVar9;
  code *pcVar10;
  FPakAsyncReadFileHandle *pFVar11;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_PakCache_CompressedDecrypts> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar24;
  FName FVar25;
  uchar *_Buf1;
  FPakProcessedReadRequest **ppFVar26;
  longlong lVar27;
  ForElementType<FSetElementId> FVar28;
  undefined1 *puVar29;
  ForElementType<FSetElementId> FVar30;
  uchar *_Buf2;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint *puVar34;
  FNameEntryId FVar35;
  uchar auVar36 [8];
  ForElementType<FPakProcessedReadRequest_*> FVar37;
  undefined1 auStackY_2a8 [32];
  undefined1 local_227;
  undefined1 local_226 [6];
  FPakAsyncReadFileHandle *local_220;
  FName local_218;
  uint local_210;
  uint local_208;
  uint uStack_204;
  FPakProcessedReadRequest *local_200;
  int local_1f8;
  uint local_1f4;
  int local_1f0;
  TArray<FCachedAsyncBlock_*,TSizedDefaultAllocator<32>_> *local_1e8;
  LPCRITICAL_SECTION local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FName local_1a8;
  FScriptContainerElement *local_1a0;
  FName local_198;
  FCachedAsyncBlock *local_190;
  int local_188;
  int local_184;
  FName local_180;
  FStatMessage local_178;
  FStatMessage local_168;
  FStatMessage local_158;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined1 *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FName local_e8;
  FName local_e0;
  FGuid local_d8;
  FString local_c8;
  FString local_b8;
  FGuid local_a8;
  FName local_98 [4];
  undefined4 local_74;
  ForElementType<FPakProcessedReadRequest_*> local_70;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_220 = this;
  if ((param_1->Processed != (uchar *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Block.Processed",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xd89,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar32 = 0;
  uVar31 = 0;
  FVar25.ComparisonIndex.Value = 0;
  FVar25.Number = 0;
  if (param_1->Raw == (uchar *)0x0) {
    if ((param_1->ProcessedSize != 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block.ProcessedSize == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xe07,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    if (((param_1->RawSize == 0) || (param_1->Processed != (uchar *)0x0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block.Raw && Block.RawSize && !Block.Processed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd8d,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    bVar13 = false;
    if ((GPakCache_ForceDecompressionFails != 0) &&
       (uVar15 = rand(), (float)(uVar15 & 0x7fff) * __real_38000100 < __real_3a83126f)) {
      uVar15 = param_1->RawSize - 1;
      uVar16 = FMath::RandRange(0,uVar15);
      if ((int)uVar16 < (int)uVar15) {
        uVar15 = uVar16;
      }
      uVar16 = uVar31;
      if (0 < (int)uVar15) {
        uVar16 = uVar15;
      }
      uVar17 = FMath::RandRange(0,0xff);
      uVar15 = 0xff;
      if ((int)uVar17 < 0xff) {
        uVar15 = uVar17;
      }
      uVar17 = uVar32;
      if (0 < (int)uVar15) {
        uVar17 = uVar15 & 0xff;
      }
      if (param_1->Raw[(int)uVar16] != (uchar)uVar17) {
        if (1 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        bVar13 = true;
        param_1->Raw[(int)uVar16] = (uchar)uVar17;
      }
    }
    if (((this->FileEntry).Flags & 1) != 0) {
      FVar21 = StatPtr_STAT_PakCache_CompressedDecrypts;
      if (StatPtr_STAT_PakCache_CompressedDecrypts ==
          (FThreadSafeStaticStat<FStat_STAT_PakCache_CompressedDecrypts>)0x0) {
        pFVar20 = ::FName::FName(local_98,"STAT_PakCache_CompressedDecrypts");
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_PakCache_CompressedDecrypts>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PakCache_CompressedDecrypts,
                            *pFVar20,L"PakCache Async Decrypts (Compressed Path)",
                            "STATGROUP_PakFile","STATCAT_Advanced",L"Pak File",true,false,ST_int64,
                            false,false,MCR_Invalid);
      }
      FVar25 = *(FName *)FVar21;
      local_218 = FVar25;
      if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        local_178.NameAndInfo.Number = FVar25.Number & 0xffffafff | 0xa000;
        local_178.StatData.Pad[0] = '\x01';
        local_178.StatData.Pad[1] = '\0';
        local_178.StatData.Pad[2] = '\0';
        local_178.StatData.Pad[3] = '\0';
        local_178.StatData.Pad[4] = '\0';
        local_178.StatData.Pad[5] = '\0';
        local_178.StatData.Pad[6] = '\0';
        local_178.StatData.Pad[7] = '\0';
        local_180 = FVar25;
        local_178.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar22,&local_178);
        FStatsTrace::Add(&local_180,1);
        if (pFVar22->ScopeCount == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
        }
      }
      if (((param_1->RawSize & 0xf) != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsAligned(Block.RawSize, FAES::AESBlockSize)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xda2,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_d8.A = (this->EncryptionKeyGuid).A;
      local_d8.B = (this->EncryptionKeyGuid).B;
      local_d8.C = (this->EncryptionKeyGuid).C;
      local_d8.D = (this->EncryptionKeyGuid).D;
      DecryptData(param_1->Raw,(longlong)param_1->RawSize,&local_d8);
    }
    if ((param_1->ProcessedSize < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block.ProcessedSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xda6,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    auVar36 = (uchar  [8])(longlong)param_1->ProcessedSize;
    if (auVar36 != (uchar  [8])0x0) {
      FVar24 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar20 = ::FName::FName(&local_e8,"STAT_AsyncFileMemory");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar20,
                            L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                            L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar25 = *(FName *)FVar24;
      local_218 = FVar25;
      if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        local_168.NameAndInfo.Number = FVar25.Number & 0xffffafff | 0xa000;
        local_1a8 = FVar25;
        local_168.StatData.Pad = auVar36;
        local_168.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar22,&local_168);
        FStatsTrace::Add(&local_1a8,(long64)auVar36);
        if (pFVar22->ScopeCount == 0) {
          FThreadStats::Flush(pFVar22,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
        }
      }
    }
    FVar25 = (FName)FMemory::Malloc((longlong)param_1->ProcessedSize,0);
    this = local_220;
    local_218 = FVar25;
    if (((local_220->FileEntry).Flags & 1) == 0) {
      if ((param_1->DecompressionRawSize != param_1->RawSize) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Block.DecompressionRawSize == Block.RawSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xdaf,L""), bVar14)) goto code_r0x000142a68677;
    }
    else if (((param_1->DecompressionRawSize + 0xfU & 0xfffffff0) != param_1->RawSize) &&
            (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Align(Block.DecompressionRawSize, FAES::AESBlockSize) == Block.RawSize"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                 ,0xdab,L""), bVar14)) {
code_r0x000142a68677:
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar20 = &this->CompressionMethod;
    if (*pFVar20 == GPakFakeCompression) {
      if (bVar13) goto LAB_142a686ef;
      if ((param_1->ProcessedSize != param_1->DecompressionRawSize) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Block.ProcessedSize == Block.DecompressionRawSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xdc2,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      memcpy((void *)FVar25,param_1->Raw,(longlong)param_1->ProcessedSize);
    }
    else {
      bVar14 = FCompression::UncompressMemory
                         (*pFVar20,(void *)FVar25,(longlong)param_1->ProcessedSize,param_1->Raw,
                          (longlong)param_1->DecompressionRawSize,COMPRESS_NoFlags,0);
      if (bVar13) {
        if ((bVar14) && (1 < (byte)LogPakFile._0_1_)) {
          UE::Logging::Private::BasicLog<2>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l111::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
      }
      else if (bVar14) goto LAB_142a68af1;
LAB_142a686ef:
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      iVar18 = 0x20;
      if (param_1->DecompressionRawSize < 0x20) {
        iVar18 = param_1->DecompressionRawSize;
      }
      BytesToHex(param_1->Raw,iVar18,&local_1d8);
      if (1 < (byte)LogPakFile._0_1_) {
        local_1e8 = (TArray<FCachedAsyncBlock_*,TSizedDefaultAllocator<32>_> *)param_1->Raw;
        local_1a0 = (FScriptContainerElement *)L"";
        if (local_1d8.Data.ArrayNum != 0) {
          local_1a0 = local_1d8.Data.AllocatorInstance.Data;
        }
        local_1e0 = (LPCRITICAL_SECTION)param_1->Processed;
        local_210 = (this->FileEntry).Flags & 1;
        local_1f8 = param_1->BlockIndex;
        local_1f4 = (*FCrc::MemCrc32Func)(local_1e8,param_1->DecompressionRawSize,0);
        local_1f0 = param_1->DecompressionRawSize;
        local_208 = param_1->ProcessedSize;
        ::FName::ToString(pFVar20,&local_b8);
        ::FName::ToString(&local_220->PakFile,&local_c8);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                    ::F::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        this = local_220;
        FVar25 = local_218;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          this = local_220;
          FVar25 = local_218;
        }
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      _Buf1 = FMemory::Malloc((longlong)param_1->RawSize,0);
      lpCriticalSection = &this->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_142a695f1;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_1->RawRequest == (FPakReadRequest *)0x0) {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                    ::__l152::LOG_Static,(FLogCategoryBase *)&LogPakFile);
      }
      FPakReadRequest::PanicSyncRead(param_1->RawRequest,_Buf1);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (((this->FileEntry).Flags & 1) != 0) {
        local_a8.A = (this->EncryptionKeyGuid).A;
        local_a8.B = (this->EncryptionKeyGuid).B;
        local_a8.C = (this->EncryptionKeyGuid).C;
        local_a8.D = (this->EncryptionKeyGuid).D;
        DecryptData(_Buf1,(longlong)param_1->RawSize,&local_a8);
      }
      _Buf2 = param_1->Raw;
      iVar18 = memcmp(_Buf1,_Buf2,(longlong)param_1->DecompressionRawSize);
      if (iVar18 != 0) {
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l180::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          _Buf2 = param_1->Raw;
        }
        uVar15 = 0;
        if (0 < param_1->DecompressionRawSize) {
          lVar27 = (longlong)_Buf1 - (longlong)_Buf2;
          uVar15 = uVar32;
          do {
            if (_Buf2[lVar27] != *_Buf2) goto LAB_142a6895b;
            uVar15 = uVar15 + 1;
            _Buf2 = _Buf2 + 1;
          } while ((int)uVar15 < param_1->DecompressionRawSize);
        }
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                    ::__l203::LOG_Static,(FLogCategoryBase *)&LogPakFile);
LAB_142a6895b:
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l225::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        iVar19 = param_1->DecompressionRawSize - uVar15;
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        iVar18 = 0x40;
        if (iVar19 < 0x40) {
          iVar18 = iVar19;
        }
        BytesToHex(param_1->Raw + (int)uVar15,iVar18,&local_1b8);
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l243::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        iVar19 = param_1->DecompressionRawSize - uVar15;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        iVar18 = 0x40;
        if (iVar19 < 0x40) {
          iVar18 = iVar19;
        }
        BytesToHex(_Buf1 + (int)uVar15,iVar18,&local_1c8);
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l261::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        this = local_220;
        FVar25 = local_218;
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          this = local_220;
          FVar25 = local_218;
        }
      }
      bVar13 = FCompression::UncompressMemory
                         (this->CompressionMethod,(void *)FVar25,(longlong)param_1->ProcessedSize,
                          _Buf1,(longlong)param_1->DecompressionRawSize,COMPRESS_NoFlags,0);
      if (bVar13) {
        if (2 < (byte)LogPakFile._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                      ::__l302::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        }
        FMemory::Free(_Buf1);
      }
      else {
        UE::Logging::Private::BasicFatalLog
                  (&`public:_void___cdecl_FPakAsyncReadFileHandle::DoProcessing(FCachedAsyncBlock*___ptr64)___ptr64'
                    ::__l282::LOG_Static,(FLogCategoryBase *)&LogPakFile);
        FMemory::Free(_Buf1);
      }
    }
LAB_142a68af1:
    FMemory::Free(param_1->Raw);
    param_1->Raw = (uchar *)0x0;
    if ((param_1->RawSize < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block.RawSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xe01,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    auVar36 = (uchar  [8])(longlong)param_1->RawSize;
    if (auVar36 != (uchar  [8])0x0) {
      FVar24 = StatPtr_STAT_AsyncFileMemory;
      if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0) {
        pFVar20 = ::FName::FName(&local_e0,"STAT_AsyncFileMemory");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar20,
                            L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                            L"Memory",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar25 = *(FName *)FVar24;
      FVar35 = FVar25.ComparisonIndex.Value;
      uVar15 = FVar25.Number;
      this = local_220;
      local_208 = FVar35.Value;
      uStack_204 = uVar15;
      if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar22 == (FThreadStats *)0x0) {
          pFVar23 = FThreadStatsPool::Get();
          pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
        }
        local_158.NameAndInfo.Number = uVar15 & 0xffffbfff | 0xb000;
        local_198 = FVar25;
        local_158.StatData.Pad = auVar36;
        local_158.NameAndInfo.Index.Value = FVar35.Value;
        FThreadStats::AddStatMessage(pFVar22,&local_158);
        FStatsTrace::Add(&local_198,-(longlong)auVar36);
        if (pFVar22->ScopeCount == 0) {
          FThreadStats::Flush(pFVar22,false,false);
          param_1->RawSize = 0;
          this = local_220;
          FVar25 = local_218;
          goto LAB_142a68cad;
        }
        this = local_220;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar22,false,false);
          this = local_220;
        }
      }
    }
    param_1->RawSize = 0;
    FVar25 = local_218;
  }
LAB_142a68cad:
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_1e0 = lpCriticalSection_00;
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection_00);
    if ((param_1->Processed != (uchar *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Block.Processed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xe0c,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar6 = param_1->RawRequest;
    param_1->Processed = (uchar *)FVar25;
    if (pFVar6 != (FPakReadRequest *)0x0) {
      if (pFVar6->field_0x41 == '\0') {
        (**(code **)(*(longlong *)pFVar6 + 0x10))(pFVar6,0);
      }
      pFVar6 = param_1->RawRequest;
      if (pFVar6 != (FPakReadRequest *)0x0) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
      param_1->RawRequest = (FPakReadRequest *)0x0;
      this->NumLiveRawRequests = this->NumLiveRawRequests + -1;
    }
    uVar15 = param_1->BlockIndex;
    pTVar4 = &this->Blocks;
    iVar18 = (this->Blocks).ArrayNum;
    local_1e8 = pTVar4;
    if (param_1->RefCount < 1) {
      if ((int)uVar15 < iVar18) {
        uVar32 = ~uVar15 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((param_1 ==
            *(FCachedAsyncBlock **)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar15 * 8))
          || (param_1->bCancelledBlock == false)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("&Block != Blocks[Block.BlockIndex] && Block.bCancelledBlock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xe2b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = &this->OutstandingCancelMapBlock;
      uVar32 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
      uVar32 = uVar32 >> 0x10 ^ uVar32;
      if (*(int *)&(this->OutstandingCancelMapBlock).field_0x8 !=
          *(int *)&(this->OutstandingCancelMapBlock).field_0x34) {
        puVar29 = *(undefined1 **)&(this->OutstandingCancelMapBlock).field_0x40;
        if (puVar29 == (undefined1 *)0x0) {
          puVar29 = &(this->OutstandingCancelMapBlock).field_0x38;
        }
        iVar18 = *(int *)(puVar29 +
                         (ulonglong)
                         (*(int *)&(this->OutstandingCancelMapBlock).field_0x48 - 1U & uVar32) * 4);
        if (iVar18 != -1) {
          do {
            if (*(FCachedAsyncBlock **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar18 * 0x18)
                == param_1) goto LAB_142a693cb;
            iVar18 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar18 * 0x18);
          } while (iVar18 != -1);
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutstandingCancelMapBlock.Contains(&Block)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xe2f,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_142a693cb:
      ppFVar26 = TMapBase<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>_>
                 ::FindChecked((TMapBase<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>_>
                                *)this_00,param_1);
      pFVar8 = *ppFVar26;
      local_190 = param_1;
      if (*(int *)&(this->OutstandingCancelMapBlock).field_0x8 !=
          *(int *)&(this->OutstandingCancelMapBlock).field_0x34) {
        TSet<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FCachedAsyncBlock_const_*>
                  ((TSet<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
                    *)this_00,uVar32,&local_190);
      }
      pFVar11 = local_220;
      pTVar5 = &local_220->LiveRequests;
      uVar31 = ((uint)((ulonglong)pFVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar8 >> 4)) *
               -0x7a143595;
      uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
      if (*(int *)&(local_220->LiveRequests).Elements.field_0x8 !=
          *(int *)&(local_220->LiveRequests).Elements.field_0x34) {
        FVar30 = (local_220->LiveRequests).Hash.SecondaryData;
        if (FVar30 == (ForElementType<FSetElementId>)0x0) {
          FVar30 = (ForElementType<FSetElementId>)&(local_220->LiveRequests).Hash;
        }
        iVar18 = *(int *)((longlong)FVar30 +
                         (ulonglong)
                         ((local_220->LiveRequests).HashSize - 1U & (uVar31 >> 0x10 ^ uVar31)) * 4);
        if (iVar18 != -1) {
          lVar27 = *(longlong *)&pTVar5->Elements;
          do {
            if (*(FPakProcessedReadRequest **)(lVar27 + (longlong)iVar18 * 0x10) == pFVar8)
            goto LAB_142a6949a;
            iVar18 = *(int *)(lVar27 + 8 + (longlong)iVar18 * 0x10);
          } while (iVar18 != -1);
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("LiveRequests.Contains(Owner)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xe32,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_142a6949a:
      if (*(int *)&(pFVar8->MyCanceledBlocks).Elements.field_0x8 !=
          *(int *)&(pFVar8->MyCanceledBlocks).Elements.field_0x34) {
        FVar30 = (pFVar8->MyCanceledBlocks).Hash.SecondaryData;
        if (FVar30 == (ForElementType<FSetElementId>)0x0) {
          FVar30 = (ForElementType<FSetElementId>)&(pFVar8->MyCanceledBlocks).Hash;
        }
        iVar18 = *(int *)((longlong)FVar30 +
                         (ulonglong)((pFVar8->MyCanceledBlocks).HashSize - 1U & uVar32) * 4);
        if (iVar18 != -1) {
          lVar27 = *(longlong *)&(pFVar8->MyCanceledBlocks).Elements;
          do {
            if (*(FCachedAsyncBlock **)(lVar27 + (longlong)iVar18 * 0x10) == param_1)
            goto LAB_142a6951a;
            iVar18 = *(int *)(lVar27 + 8 + (longlong)iVar18 * 0x10);
          } while (iVar18 != -1);
        }
      }
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("MyCanceledBlocks.Contains(BlockPtr)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xbc8,L"");
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_142a6951a:
      TSet<FCachedAsyncBlock_*,DefaultKeyFuncs<FCachedAsyncBlock_*,0>,FDefaultSetAllocator>::Remove
                (&pFVar8->MyCanceledBlocks,param_1);
      if (*(int *)&(pFVar8->MyCanceledBlocks).Elements.field_0x8 ==
          *(int *)&(pFVar8->MyCanceledBlocks).Elements.field_0x34) {
        EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
        pFVar8->bRequestOutstanding = false;
        if (pFVar8->WaitEvent != (FEvent *)0x0) {
          (**(code **)(pFVar8->WaitEvent->_padding_ + 0x10))();
        }
        IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)pFVar8);
        pFVar8->field_0x41 = 1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
        TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
        ::Remove(pTVar5,pFVar8);
      }
      ClearBlock(pFVar11,param_1,false);
      pFVar9 = (param_1->CPUWorkGraphEvent).Reference;
      if (pFVar9 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar29 = &pFVar9->field_0x30;
        iVar18 = *(int *)puVar29;
        *(int *)puVar29 = *(int *)puVar29 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
        }
      }
      ::operator_delete(param_1,0x38);
    }
    else {
      uVar16 = 0;
      if ((int)uVar15 < iVar18) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((param_1 !=
            *(FCachedAsyncBlock **)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar15 * 8))
          || (param_1->bCancelledBlock != false)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("&Block == Blocks[Block.BlockIndex] && !Block.bCancelledBlock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xe17,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar29 = &(this->LiveRequests).Elements.field_0x10;
      local_70.SecondaryData = (ForElementType<FPakProcessedReadRequest_*>)0x0;
      local_48 = 0;
      pTVar5 = &this->LiveRequests;
      local_44 = 4;
      uStack_13c = 1;
      uVar15 = *(uint *)&(this->LiveRequests).Elements.field_0x28;
      uStack_12c = uVar32;
      if (uVar15 != 0) {
        puVar34 = *(uint **)&(this->LiveRequests).Elements.field_0x20;
        if (puVar34 == (uint *)0x0) {
          puVar34 = (uint *)puVar29;
        }
        uVar16 = *puVar34;
        uVar31 = uVar32;
        while (uVar16 == 0) {
          lVar27 = (longlong)(int)uVar31;
          uVar32 = uVar32 + 0x20;
          uVar31 = uVar31 + 1;
          uStack_12c = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31)
          goto LAB_142a68e61;
          uVar16 = puVar34[lVar27 + 1];
        }
        uStack_13c = -uVar16 & uVar16;
        uVar3 = (ulonglong)uStack_13c * 2 + 1;
        lVar27 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_188 = (int)lVar27;
        uStack_12c = local_188 + -1 + uVar32;
        if ((int)uVar15 < (int)uStack_12c) {
          uStack_12c = uVar15;
        }
      }
LAB_142a68e61:
      uStack_124 = local_74;
      iStack_120 = *(int *)&(this->LiveRequests).Elements.field_0x8 -
                   *(int *)&(this->LiveRequests).Elements.field_0x34;
      uVar16 = *(uint *)&(this->LiveRequests).Elements.field_0x28;
      uVar17 = uVar16 & 0xffffffe0;
      TStack_110._padding_ = CONCAT44(uStack_13c,uVar31);
      local_210 = -1 << ((byte)uVar16 & 0x1f);
      uStack_130 = 0xffffffff;
      TStack_110.CurrentBitIndex = uStack_12c;
      TStack_110.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar16 >> 5;
      TStack_110._28_4_ = local_74;
      TStack_110.BaseBitIndex = uVar32;
      uStack_f0 = CONCAT44(uStack_11c,iStack_120);
      local_148 = pTVar5;
      uStack_140 = uVar31;
      local_138 = puVar29;
      local_128 = uVar32;
      local_118 = pTVar5;
      TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
      if ((((int)uVar16 < 0) || ((int)uVar15 < (int)uVar16)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar4 = local_1e8;
      uVar32 = *(uint *)&(this->LiveRequests).Elements.field_0x28;
      if (uVar16 != uVar32) {
        puVar7 = *(undefined1 **)&(this->LiveRequests).Elements.field_0x20;
        puVar33 = puVar29;
        if (puVar7 != (undefined1 *)0x0) {
          puVar33 = puVar7;
        }
        uVar31 = local_210 & *(uint *)(puVar33 + (longlong)iVar18 * 4);
        while (uVar31 == 0) {
          lVar27 = (longlong)iVar18;
          uVar17 = uVar17 + 0x20;
          iVar18 = iVar18 + 1;
          uVar16 = uVar32;
          if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_142a68fa0;
          uVar31 = *(uint *)(puVar33 + lVar27 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        local_184 = (int)lVar27;
        uVar16 = local_184 + -1 + uVar17;
        if ((int)uVar32 < (int)uVar16) {
          uVar16 = uVar32;
        }
      }
LAB_142a68fa0:
      while( true ) {
        pTVar12 = local_118;
        if (*(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34 !=
            (int)uStack_f0) {
          local_227 = 0;
          `TSparseArray<TSparseSetElement<FPakProcessedReadRequest_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_227);
        }
        iVar18 = local_48;
        pFVar11 = local_220;
        if (((TStack_110.CurrentBitIndex == uVar16) &&
            (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
           (pTVar12 == pTVar5)) break;
        local_200 = *(FPakProcessedReadRequest **)
                     (*(longlong *)&pTVar12->Elements + (longlong)TStack_110.CurrentBitIndex * 0x10)
        ;
        bVar13 = FPakProcessedReadRequest::CheckCompletion
                           (local_200,&local_220->FileEntry,param_1->BlockIndex,pTVar4);
        if (bVar13) {
          FVar37 = (ForElementType<FPakProcessedReadRequest_*>)&local_70;
          if (local_70.SecondaryData != (ForElementType<FPakProcessedReadRequest_*>)0x0) {
            FVar37 = local_70.SecondaryData;
          }
          if ((ulonglong)FVar37 <= &local_200) {
            FVar37 = (ForElementType<FPakProcessedReadRequest_*>)&local_70;
            if (local_70.SecondaryData != (ForElementType<FPakProcessedReadRequest_*>)0x0) {
              FVar37 = local_70.SecondaryData;
            }
            if ((&local_200 <
                 (FPakProcessedReadRequest **)((longlong)FVar37 + (longlong)local_44 * 8)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (local_48 == local_44) {
            local_48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPakProcessedReadRequest_*>_>
                                 (0x808,&local_70,&local_44);
          }
          lVar27 = (longlong)local_48;
          FVar37 = (ForElementType<FPakProcessedReadRequest_*>)&local_70;
          if (local_70.SecondaryData != (ForElementType<FPakProcessedReadRequest_*>)0x0) {
            FVar37 = local_70.SecondaryData;
          }
          local_48 = local_48 + 1;
          *(FPakProcessedReadRequest **)((longlong)FVar37 + lVar27 * 8) = local_200;
        }
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      }
      FVar37 = (ForElementType<FPakProcessedReadRequest_*>)&local_70;
      if (local_70.SecondaryData != (ForElementType<FPakProcessedReadRequest_*>)0x0) {
        FVar37 = local_70.SecondaryData;
      }
      FVar2 = (ForElementType<FPakProcessedReadRequest_*>)
              ((longlong)FVar37 + (longlong)local_48 * 8);
      while( true ) {
        if (local_48 != iVar18) {
          local_226[0] = 0;
          `TCheckedPointerIterator<FPakProcessedReadRequest_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_226);
        }
        lpCriticalSection_00 = local_1e0;
        if (FVar37 == FVar2) break;
        pFVar8 = *(FPakProcessedReadRequest **)FVar37;
        uVar32 = ((uint)((ulonglong)pFVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar8 >> 4)) *
                 -0x7a143595;
        uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
        if (*(int *)&(pFVar11->LiveRequests).Elements.field_0x8 ==
            *(int *)&(this->LiveRequests).Elements.field_0x34) {
LAB_142a6928d:
          FVar37 = (ForElementType<FPakProcessedReadRequest_*>)((longlong)FVar37 + 8);
        }
        else {
          FVar30 = (this->LiveRequests).Hash.SecondaryData;
          FVar28 = (ForElementType<FSetElementId>)&(this->LiveRequests).Hash;
          if (FVar30 != (ForElementType<FSetElementId>)0x0) {
            FVar28 = FVar30;
          }
          iVar19 = *(int *)((longlong)FVar28 +
                           (ulonglong)
                           ((this->LiveRequests).HashSize - 1U & (uVar32 >> 0x10 ^ uVar32)) * 4);
          if (iVar19 == -1) goto LAB_142a6928d;
          do {
            if (*(FPakProcessedReadRequest **)
                 (*(longlong *)&pTVar5->Elements + (longlong)iVar19 * 0x10) == pFVar8) {
              LOCK();
              pFVar1 = &pFVar8->CompleteRace;
              iVar19 = pFVar1->Counter;
              pFVar1->Counter = pFVar1->Counter + 1;
              UNLOCK();
              if (iVar19 == 0) {
                if ((pFVar8->bRequestOutstanding == false) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("bRequestOutstanding",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                        ,0xbb5,L""), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if ((pFVar8->field_0x43 == '\0') &&
                   ((pFVar8->PriorityAndFlags & AIOP_FLAG_PRECACHE) == AIOP_MIN)) {
                  FPakProcessedReadRequest::GatherResults(pFVar8);
                }
                IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)pFVar8);
                EnterCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
                pFVar8->bRequestOutstanding = false;
                if (pFVar8->WaitEvent != (FEvent *)0x0) {
                  (**(code **)(pFVar8->WaitEvent->_padding_ + 0x10))();
                }
                pFVar8->field_0x41 = 1;
                LeaveCriticalSection((LPCRITICAL_SECTION)&FPakReadRequestEvent);
              }
              goto LAB_142a6928d;
            }
            iVar19 = *(int *)(*(longlong *)&pTVar5->Elements + 8 + (longlong)iVar19 * 0x10);
          } while (iVar19 != -1);
          FVar37 = (ForElementType<FPakProcessedReadRequest_*>)((longlong)FVar37 + 8);
        }
      }
      param_1->bCPUWorkIsComplete = true;
      if (local_70.SecondaryData != (ForElementType<FPakProcessedReadRequest_*>)0x0) {
        FMemory::Free((void *)local_70.SecondaryData);
      }
    }
    LeaveCriticalSection(lpCriticalSection_00);
    return;
  }
LAB_142a695f1:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GatherResults @ 142a71b00

/* WARNING: Enum "EVersion": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::GatherResults
          (FPakAsyncReadFileHandle *this,uchar *param_1,long64 param_2,long64 param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  size_t sVar11;
  size_t sVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  size_t _Size;
  longlong lVar17;
  
  uVar7 = param_2 / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
  iVar4 = (int)uVar7;
  uVar16 = (ulonglong)iVar4;
  if ((uVar7 != uVar16) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar8 = (param_3 + -1 + param_2) / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
  iVar5 = (int)lVar8;
  if ((lVar8 != iVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((((iVar4 < 0) || (iVar1 = (this->Blocks).ArrayNum, iVar1 <= iVar4)) || (iVar5 < 0)) ||
      ((iVar1 <= iVar5 || (iVar5 < iVar4)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstBlock >= 0 && FirstBlock < Blocks.Num() && LastBlock >= 0 && LastBlock < Blocks.Num() && FirstBlock <= LastBlock"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xeb0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    if ((longlong)iVar5 < (longlong)uVar16) {
      return;
    }
    uVar15 = (uint)uVar7;
    uVar13 = ~uVar15 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar15 < (this->Blocks).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) == 0) {
      puVar9 = ::operator_new(0x38);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 6) = 0xffffffff;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(undefined2 *)((longlong)puVar9 + 0x34) = 0;
        *(undefined1 *)((longlong)puVar9 + 0x36) = 0;
      }
      uVar6 = 0;
      if ((int)uVar15 < (this->Blocks).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 **)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) = puVar9;
      uVar6 = 0;
      if ((int)uVar15 < (this->Blocks).ArrayNum) {
        uVar6 = uVar13;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) + 0x30) = uVar15;
    }
    uVar6 = 0;
    if ((int)uVar15 < (this->Blocks).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = *(longlong *)((this->Blocks).AllocatorInstance.Data + uVar16 * 8);
    if ((((*(int *)(lVar8 + 0x2c) < 1) || (*(longlong *)(lVar8 + 0x10) == 0)) ||
        (*(int *)(lVar8 + 0x28) == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.RefCount > 0 && Block.Processed && Block.ProcessedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xeb5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    sVar12 = (size_t)*(int *)(lVar8 + 0x28);
    lVar10 = (ulonglong)(this->FileEntry).CompressionBlockSize * (longlong)(int)uVar15 - param_2;
    lVar17 = 0;
    if (-1 < lVar10) {
      lVar17 = lVar10;
    }
    lVar14 = -lVar10;
    if (-1 < lVar10) {
      lVar14 = 0;
    }
    sVar11 = param_3 - lVar17;
    if ((longlong)(sVar12 + lVar17) <= param_3) {
      sVar11 = sVar12;
    }
    _Size = sVar12 - lVar14;
    if ((longlong)(sVar11 + lVar14) <= (longlong)sVar12) {
      _Size = sVar11;
    }
    if (((((longlong)_Size < 1) || (lVar17 < 0)) || (param_3 < (longlong)(_Size + lVar17))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CopySize > 0 && DestOffset >= 0 && DestOffset + CopySize <= BytesToRead"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xec9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((lVar14 < 0) || ((longlong)*(int *)(lVar8 + 0x28) < (longlong)(lVar14 + _Size))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcOffset >= 0 && SrcOffset + CopySize <= Block.ProcessedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xeca,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    memcpy(param_1 + lVar17,(void *)(*(longlong *)(lVar8 + 0x10) + lVar14),_Size);
    if ((*(int *)(lVar8 + 0x2c) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.RefCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xecd,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar7 = (ulonglong)(uVar15 + 1);
    uVar16 = uVar16 + 1;
  } while( true );
}

// GetBlock @ 142a72410

/* WARNING: Enum "EVersion": Some values do not have unique names */

FCachedAsyncBlock * __thiscall
FPakAsyncReadFileHandle::GetBlock(FPakAsyncReadFileHandle *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCachedAsyncBlock *pFVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  puVar6 = (undefined8 *)0x0;
  uVar8 = 0;
  lVar7 = (longlong)param_1;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar3 = uVar8;
  if (param_1 < (this->Blocks).ArrayNum) {
    uVar3 = uVar9;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCachedAsyncBlock *)(*pcVar1)();
    return pFVar4;
  }
  if (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) == 0) {
    puVar5 = ::operator_new(0x38);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0xffffffff;
      *(undefined2 *)((longlong)puVar5 + 0x34) = 0;
      *(undefined1 *)((longlong)puVar5 + 0x36) = 0;
      puVar6 = puVar5;
    }
    uVar3 = uVar8;
    if (param_1 < (this->Blocks).ArrayNum) {
      uVar3 = uVar9;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCachedAsyncBlock *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined8 **)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) = puVar6;
    uVar3 = 0;
    if (param_1 < (this->Blocks).ArrayNum) {
      uVar3 = uVar9;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCachedAsyncBlock *)(*pcVar1)();
      return pFVar4;
    }
    *(int *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar7 * 8) + 0x30) = param_1;
  }
  if (param_1 < (this->Blocks).ArrayNum) {
    uVar8 = uVar9;
  }
  if ((uVar8 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCachedAsyncBlock *)(*pcVar1)();
    return pFVar4;
  }
  return *(FCachedAsyncBlock **)((this->Blocks).AllocatorInstance.Data + lVar7 * 8);
}

// HandleCanceledRequest @ 142a7a1b0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::HandleCanceledRequest
          (FPakAsyncReadFileHandle *this,
          TSet<FCachedAsyncBlock_*,DefaultKeyFuncs<FCachedAsyncBlock_*,0>,FDefaultSetAllocator>
          *param_1,FPakProcessedReadRequest *param_2,long64 param_3,long64 param_4,bool *param_5)

{
  int *piVar1;
  int iVar2;
  FCachedAsyncBlock *pFVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FPakReadRequest *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  ForElementType<FSetElementId> FVar16;
  undefined1 *puVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *this_00;
  FPakProcessedReadRequest *local_res18;
  undefined1 local_78 [8];
  FCachedAsyncBlock *local_70;
  FCachedAsyncBlock *local_68;
  LPCRITICAL_SECTION local_60;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *local_58;
  FCachedAsyncBlock **local_50;
  FPakProcessedReadRequest **local_48;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_res18 = param_2;
  local_60 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if ((*param_5 != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasCancelledRef",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xe86,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = &this->LiveRequests;
  *param_5 = true;
  uVar15 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res18 >> 4)) *
           -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  local_58 = this_00;
  if (*(int *)&(this->LiveRequests).Elements.field_0x8 !=
      *(int *)&(this->LiveRequests).Elements.field_0x34) {
    FVar16 = (this->LiveRequests).Hash.SecondaryData;
    if (FVar16 == (ForElementType<FSetElementId>)0x0) {
      FVar16 = (ForElementType<FSetElementId>)&(this->LiveRequests).Hash;
    }
    iVar9 = *(int *)((longlong)FVar16 +
                    (ulonglong)((this->LiveRequests).HashSize - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4)
    ;
    if (iVar9 != -1) {
      do {
        if (*(FPakProcessedReadRequest **)(*(longlong *)&this_00->Elements + (longlong)iVar9 * 0x10)
            == local_res18) goto LAB_142a7a2e4;
        iVar9 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("LiveRequests.Contains(Req)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                     ,0xe88,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_142a7a2e4:
  uVar12 = param_3 / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
  iVar9 = (int)uVar12;
  uVar22 = (ulonglong)iVar9;
  if ((uVar12 != uVar22) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar13 = (param_4 + -1 + param_3) / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
  iVar10 = (int)lVar13;
  lVar19 = (longlong)iVar10;
  if ((lVar13 != lVar19) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((((iVar9 < 0) || (iVar2 = (this->Blocks).ArrayNum, iVar2 <= iVar9)) || (iVar10 < 0)) ||
      ((iVar2 <= iVar10 || (iVar10 < iVar9)))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstBlock >= 0 && FirstBlock < Blocks.Num() && LastBlock >= 0 && LastBlock < Blocks.Num() && FirstBlock <= LastBlock"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xe8b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((longlong)uVar22 <= lVar19) {
    lVar13 = uVar22 * 8;
    do {
      puVar21 = (undefined8 *)0x0;
      uVar20 = (uint)uVar12;
      uVar18 = ~uVar20 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar20 < (this->Blocks).ArrayNum) {
        uVar15 = uVar18;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = 0;
      if (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar13) == 0) {
        puVar14 = ::operator_new(0x38);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[5] = 0;
          *(undefined4 *)(puVar14 + 6) = 0xffffffff;
          *(undefined2 *)((longlong)puVar14 + 0x34) = 0;
          *(undefined1 *)((longlong)puVar14 + 0x36) = 0;
          puVar21 = puVar14;
        }
        uVar11 = 0;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 **)((this->Blocks).AllocatorInstance.Data + uVar22 * 8) = puVar21;
        uVar11 = uVar15;
        if ((int)uVar20 < (this->Blocks).ArrayNum) {
          uVar11 = uVar18;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + uVar22 * 8) + 0x30) = uVar20
        ;
      }
      uVar11 = uVar15;
      if ((int)uVar20 < (this->Blocks).ArrayNum) {
        uVar11 = uVar18;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = *(FCachedAsyncBlock **)((this->Blocks).AllocatorInstance.Data + uVar22 * 8);
      if ((pFVar3->RefCount < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Block.RefCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xe90,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      piVar1 = &pFVar3->RefCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if ((pFVar3->bInFlight == false) || (pFVar3->bCPUWorkIsComplete != false)) {
          ClearBlock(this,pFVar3,false);
        }
        else {
          local_70 = pFVar3;
          TSet<FCachedAsyncBlock_*,DefaultKeyFuncs<FCachedAsyncBlock_*,0>,FDefaultSetAllocator>::
          Emplace<FCachedAsyncBlock_*>(param_1,(FCachedAsyncBlock **)local_78,(bool *)&local_70);
          if ((int)uVar20 < (this->Blocks).ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined8 *)((this->Blocks).AllocatorInstance.Data + uVar22 * 8) = 0;
          uVar15 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
                   -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          if (*(int *)&(this->OutstandingCancelMapBlock).field_0x8 !=
              *(int *)&(this->OutstandingCancelMapBlock).field_0x34) {
            puVar4 = *(undefined1 **)&(this->OutstandingCancelMapBlock).field_0x40;
            puVar17 = &(this->OutstandingCancelMapBlock).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar17 = puVar4;
            }
            iVar9 = *(int *)(puVar17 +
                            (ulonglong)
                            (*(int *)&(this->OutstandingCancelMapBlock).field_0x48 - 1U &
                            (uVar15 >> 0x10 ^ uVar15)) * 4);
            if (iVar9 != -1) {
              lVar5 = *(longlong *)&(this->OutstandingCancelMapBlock).field_0x0;
              do {
                if (*(FCachedAsyncBlock **)(lVar5 + (longlong)iVar9 * 0x18) == pFVar3) {
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!OutstandingCancelMapBlock.Contains(&Block)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                     ,0xe97,L"");
                  if (bVar8) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  break;
                }
                iVar9 = *(int *)(lVar5 + 0x10 + (longlong)iVar9 * 0x18);
              } while (iVar9 != -1);
            }
          }
          local_50 = &local_68;
          local_48 = &local_res18;
          local_68 = pFVar3;
          TSet<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FCachedAsyncBlock_*_&&,FPakProcessedReadRequest_*_const_&>_>
                    ((TSet<TTuple<FCachedAsyncBlock_*,FPakProcessedReadRequest_*>,TDefaultMapHashableKeyFuncs<FCachedAsyncBlock_*,FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
                      *)&this->OutstandingCancelMapBlock,
                     (TPairInitializer<FCachedAsyncBlock_*_&&,FPakProcessedReadRequest_*_const_&> *)
                     (local_78 + 4),(bool *)&local_50);
          pFVar3->bCancelledBlock = true;
          pFVar6 = pFVar3->RawRequest;
          if (pFVar6->field_0x43 == '\0') {
            pFVar6->field_0x43 = 1;
            pFVar6->field_0x40 = 1;
            if (pFVar6->field_0x41 == '\0') {
              (**(code **)(*(longlong *)pFVar6 + 0x18))();
            }
          }
        }
      }
      uVar12 = (ulonglong)(uVar20 + 1);
      uVar22 = uVar22 + 1;
      lVar13 = lVar13 + 8;
      lpCriticalSection = local_60;
      this_00 = local_58;
    } while ((longlong)uVar22 <= lVar19);
  }
  if (*(int *)&(param_1->Elements).field_0x8 == *(int *)&(param_1->Elements).field_0x34) {
    TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
    ::Remove(this_00,local_res18);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// RawReadCallback @ 142a8f370

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::RawReadCallback
          (FPakAsyncReadFileHandle *this,bool param_1,IAsyncReadRequest *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  FName FVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uchar *puVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TRefCountPtr<FBaseGraphTask> TVar11;
  uint uVar12;
  int iVar13;
  FBaseGraphTask *pFVar14;
  FPakFile *pFVar15;
  FName local_res20;
  FConstructor local_50;
  undefined1 local_48 [24];
  uint local_30;
  uint local_2c;
  
  puVar2 = &param_2[1].Callback.field_0x20;
  if (((param_2[1].field_0x46 == '\0') || (*(longlong *)puVar2 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInternalRequest && BlockPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xaa8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = *(longlong **)puVar2;
  if ((((((IAsyncReadRequest *)*plVar3 != param_2) &&
        (((IAsyncReadRequest *)*plVar3 != (IAsyncReadRequest *)0x0 || ((int)plVar3[4] == 0)))) ||
       (plVar3[2] != 0)) || (plVar3[1] != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Block.RawRequest == Request || (!Block.RawRequest && Block.RawSize)) && !Block.Processed && !Block.Raw"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xd65,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar8 = IAsyncReadRequest::GetReadResults(param_2);
  plVar3[1] = (longlong)puVar8;
  if (*(char *)((longlong)plVar3 + 0x36) == '\0') {
    if (puVar8 != (uchar *)0x0) {
      pFVar15 = (FPakFile *)(longlong)(int)plVar3[4];
      if (pFVar15 != (FPakFile *)0x0) {
        FVar10 = StatPtr_STAT_AsyncFileMemory;
        if (StatPtr_STAT_AsyncFileMemory == (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)0x0)
        {
          pFVar9 = ::FName::FName((FName *)(local_48 + 8),"STAT_AsyncFileMemory");
          FVar10 = (FThreadSafeStaticStat<FStat_STAT_AsyncFileMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncFileMemory,*pFVar9,
                              L"Async File Handle Memory","STATGROUP_Memory","STATCAT_Advanced",
                              L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar4 = *(FName *)FVar10;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_2c = FVar4.Number & 0xffffafff | 0xa000;
          local_res20 = FVar4;
          local_48._16_8_ = pFVar15;
          local_30 = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,(FStatMessage *)(local_48 + 0x10));
          FStatsTrace::Add(&local_res20,(long64)pFVar15);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      uVar12 = (this->FileEntry).CompressionBlockSize;
      *(uint *)(plVar3 + 5) = uVar12;
      if ((int)plVar3[6] == (this->Blocks).ArrayNum + -1) {
        iVar13 = (int)((this->FileEntry).UncompressedSize %
                      (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize);
        *(int *)(plVar3 + 5) = iVar13;
        if (iVar13 == 0) {
          uVar12 = (this->FileEntry).CompressionBlockSize;
          *(uint *)(plVar3 + 5) = uVar12;
          goto LAB_142a8f5ea;
        }
LAB_142a8f5ee:
        if (*(char *)((longlong)plVar3 + 0x35) == '\0') goto LAB_142a8f688;
      }
      else {
LAB_142a8f5ea:
        if (uVar12 != 0) goto LAB_142a8f5ee;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Block.ProcessedSize && !Block.bCPUWorkIsComplete",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                         ,0xd82,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_142a8f688;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Block.bCancelledBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xd6b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((void *)plVar3[1] != (void *)0x0) {
    FMemory::Free((void *)plVar3[1]);
    plVar3[1] = 0;
    if (((int)plVar3[4] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.RawSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xd70,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(plVar3 + 4) = 0;
  }
LAB_142a8f688:
  local_50.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  TVar11 = TGraphTask<FAsyncIOCPUWorkTask>::FConstructor::
           ConstructAndDispatchWhenReady<FPakAsyncReadFileHandle_&,FCachedAsyncBlock_*>
                     (&local_50,(FPakAsyncReadFileHandle *)local_48,(FCachedAsyncBlock **)this);
  pFVar14 = (FBaseGraphTask *)(plVar3 + 3);
  if (pFVar14 != TVar11.Reference) {
    puVar5 = *(undefined8 **)pFVar14;
    *(longlong *)pFVar14 = *(longlong *)TVar11.Reference;
    *(undefined8 *)TVar11.Reference = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if ((undefined8 *)local_48._0_8_ != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_48._0_8_ + 0x30);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar13 == 1) && ((undefined8 *)local_48._0_8_ != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)local_48._0_8_)(local_48._0_8_,1);
    }
  }
  return;
}

// ReadRequest @ 142a91be0

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FPakAsyncReadFileHandle::ReadRequest
          (FPakAsyncReadFileHandle *this,long64 param_1,long64 param_2,
          EAsyncIOPriorityAndFlags param_3,
          TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_4,uchar *param_5)

{
  long64 *plVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  long64 lVar5;
  long64 lVar6;
  code *pcVar7;
  undefined8 uVar8;
  EAsyncIOPriorityAndFlags EVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  IAsyncReadRequest *pIVar14;
  FPakProcessedReadRequest *this_00;
  FPakReadRequest *this_01;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  ForElementType<FSetElementId> FVar19;
  undefined8 *puVar20;
  byte bVar21;
  char cVar22;
  uint uVar23;
  FLLMScope local_res8 [2];
  ulonglong local_res10;
  FPakProcessedReadRequest *local_res18;
  EAsyncIOPriorityAndFlags local_res20;
  FPakProcessedReadRequest *local_68;
  FPakFile *local_60;
  FMemScope local_58 [3];
  
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
                    ::__l2::LLMScope_Name3346,L"FileSystem/PakFile");
    _Init_thread_footer(&`public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
             ::__l2::LLMScope_Name3346,false,None,Default,true);
  FMemScope::FMemScope
            (local_58,&`public:_virtual_class_IAsyncReadRequest*___ptr64___cdecl_FPakAsyncReadFileHandle::ReadRequest(__int64,__int64,EAsyncIOPriorityAndFlags,TFunction<void___cdecl(bool,IAsyncReadRequest*___ptr64)>*___ptr64,unsigned_char*___ptr64)___ptr64'
                       ::__l2::LLMScope_Name3346,true);
  if (param_2 == 0x7fffffffffffffff) {
    param_2 = this->UncompressedFileSize - param_1;
  }
  if (((this->UncompressedFileSize < param_2 + param_1) || (param_1 < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Offset + BytesToRead <= UncompressedFileSize && Offset >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                          ,0xd18,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
    return pIVar14;
  }
  if (this->CompressionMethod == (FName)0x0) {
    plVar1 = &this->PakFileSize;
    if ((*plVar1 < this->OffsetInPak + param_1 + param_2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Offset + BytesToRead + OffsetInPak <= PakFileSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd1b,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    if (((this->Blocks).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Blocks.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd1c,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    if (((this->FileEntry).Flags & 1) == 0) {
      this_01 = ::operator_new(0xa0);
      if (this_01 != (FPakReadRequest *)0x0) {
        this_00 = (FPakProcessedReadRequest *)
                  FPakReadRequest::FPakReadRequest
                            (this_01,(this->ActualPakFile).Reference,this->PakFile,*plVar1,param_4,
                             this->OffsetInPak + param_1,param_2,param_3,param_5,false,
                             (FCachedAsyncBlock *)0x0);
        goto LAB_142a924a3;
      }
    }
    else {
      this_00 = ::operator_new(0xc0);
      if (this_00 != (FPakProcessedReadRequest *)0x0) {
        local_res10 = *plVar1;
        lVar3 = this->OffsetInPak;
        FVar4 = this->PakFile;
        local_60 = (this->ActualPakFile).Reference;
        IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this_00,param_4,false,param_5);
        EVar9 = local_res20;
        this_00->Offset = -1;
        lVar16 = lVar3 + param_1;
        this_00->BytesToRead = 0;
        *(undefined4 *)&this_00->WaitEvent = 0;
        *(longlong *)&this_00->CompleteRace = lVar16;
        *(longlong *)&(this_00->MyCanceledBlocks).Elements.field_0x20 = lVar16;
        *(undefined ***)this_00 = &FPakEncryptedReadRequest::_vftable__for__IAsyncReadRequest__;
        this_00->Owner =
             (FPakAsyncReadFileHandle *)&FPakEncryptedReadRequest::_vftable__for__IPakRequestor__;
        *(undefined8 *)&(this_00->MyCanceledBlocks).Elements = 0;
        *(undefined8 *)&(this_00->MyCanceledBlocks).Elements.field_0x8 = 0;
        this_00->bRequestOutstanding = (bool)(char)param_2;
        this_00->bHasCancelled = (bool)(char)((ulonglong)param_2 >> 8);
        this_00->bHasCompleted = (bool)(char)((ulonglong)param_2 >> 0x10);
        *(int5 *)&this_00->field_0x73 = (int5)((ulonglong)param_2 >> 0x18);
        *(uint *)&(this_00->MyCanceledBlocks).Elements.field_0x10 = FVar4.ComparisonIndex.Value;
        *(uint *)&(this_00->MyCanceledBlocks).Elements.field_0x14 = FVar4.Number;
        *(EAsyncIOPriorityAndFlags *)&(this_00->MyCanceledBlocks).Elements.field_0x18 = local_res20;
        *(undefined2 *)&(this_00->MyCanceledBlocks).Elements.field_0x1c = 0x101;
        (this_00->MyCanceledBlocks).Elements.field_0x1e = 0;
        *(long64 *)&(this_00->MyCanceledBlocks).Elements.field_0x28 = param_2;
        uVar18 = (this->EncryptionKeyGuid).A;
        uVar12 = (this->EncryptionKeyGuid).B;
        uVar8._0_4_ = (this->EncryptionKeyGuid).C;
        uVar8._4_4_ = (this->EncryptionKeyGuid).D;
        *(ulonglong *)&this_00->CompleteRace = (param_1 & 0xfffffffffffffff0U) + lVar3;
        *(ulonglong *)&this_00->bRequestOutstanding =
             (param_1 + 0xf + param_2 & 0xfffffffffffffff0U) - (param_1 & 0xfffffffffffffff0U);
        *(uint *)&(this_00->MyCanceledBlocks).Elements.field_0x30 = uVar18;
        *(uint *)&(this_00->MyCanceledBlocks).Elements.field_0x34 = uVar12;
        (this_00->MyCanceledBlocks).Hash.InlineData[0] = (char)(undefined4)uVar8;
        (this_00->MyCanceledBlocks).Hash.InlineData[1] = (char)((ulonglong)uVar8 >> 8);
        (this_00->MyCanceledBlocks).Hash.InlineData[2] = (char)((ulonglong)uVar8 >> 0x10);
        (this_00->MyCanceledBlocks).Hash.InlineData[3] = (char)((ulonglong)uVar8 >> 0x18);
        (this_00->MyCanceledBlocks).Hash._padding_ = (int)((ulonglong)uVar8 >> 0x20);
        if ((PakPrecacherSingleton == (FPakPrecacher *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PakPrecacherSingleton",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                ,0x33f,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
          return pIVar14;
        }
        lVar5._0_1_ = this_00->bRequestOutstanding;
        lVar5._1_1_ = this_00->bHasCancelled;
        lVar5._2_1_ = this_00->bHasCompleted;
        lVar5._3_5_ = *(undefined5 *)&this_00->field_0x73;
        lVar6._0_4_ = this_00->CompleteRace;
        lVar6._4_4_ = this_00->PriorityAndFlags;
        bVar10 = FPakPrecacher::QueueRequest
                           (PakPrecacherSingleton,(IPakRequestor *)&this_00->Owner,local_60,FVar4,
                            local_res10,lVar6,lVar5,EVar9);
        if (!bVar10) {
          (this_00->MyCanceledBlocks).Elements.field_0x1c = 0;
          IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)this_00);
          this_00->field_0x41 = 1;
        }
        goto LAB_142a924a3;
      }
    }
    this_00 = (FPakProcessedReadRequest *)0x0;
  }
  else {
    local_res10 = local_res10 & 0xffffffffffffff00;
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    if (((this->Blocks).ArrayNum == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Blocks.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd2d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    uVar15 = param_1 / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
    iVar13 = (int)uVar15;
    if ((uVar15 != (longlong)iVar13) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar10
       )) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    lVar16 = (param_1 + -1 + param_2) / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
    iVar11 = (int)lVar16;
    if ((lVar16 != iVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar10
       )) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    if (((((iVar13 < 0) || (iVar2 = (this->Blocks).ArrayNum, iVar2 <= iVar13)) || (iVar11 < 0)) ||
        ((iVar2 <= iVar11 || (iVar11 < iVar13)))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstBlock >= 0 && FirstBlock < Blocks.Num() && LastBlock >= 0 && LastBlock < Blocks.Num() && FirstBlock <= LastBlock"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                            ,0xd31,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
      return pIVar14;
    }
    this_00 = ::operator_new(0xd0);
    if (this_00 == (FPakProcessedReadRequest *)0x0) {
      this_00 = (FPakProcessedReadRequest *)0x0;
    }
    else {
      IAsyncReadRequest::IAsyncReadRequest((IAsyncReadRequest *)this_00,param_4,false,param_5);
      this_00->Offset = param_1;
      this_00->BytesToRead = param_2;
      *(undefined ***)this_00 = &___7FPakProcessedReadRequest__6B_;
      this_00->Owner = this;
      this_00->WaitEvent = (FEvent *)0x0;
      (this_00->CompleteRace).Counter = 0;
      this_00->PriorityAndFlags = local_res20;
      *(undefined8 *)&(this_00->MyCanceledBlocks).Elements = 0;
      *(undefined8 *)&(this_00->MyCanceledBlocks).Elements.field_0x8 = 0;
      *(undefined8 *)&(this_00->MyCanceledBlocks).Elements.field_0x20 = 0;
      this_00->bRequestOutstanding = true;
      this_00->bHasCancelled = false;
      this_00->bHasCompleted = false;
      *(undefined4 *)&(this_00->MyCanceledBlocks).Elements.field_0x28 = 0;
      *(undefined4 *)&(this_00->MyCanceledBlocks).Elements.field_0x2c = 0x80;
      *(undefined4 *)&(this_00->MyCanceledBlocks).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_00->MyCanceledBlocks).Elements.field_0x34 = 0;
      (this_00->MyCanceledBlocks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      (this_00->MyCanceledBlocks).HashSize = 0;
      if (((this_00->Offset < 0) || (this_00->BytesToRead < 1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Offset >= 0 && BytesToRead > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xb6c,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
        return pIVar14;
      }
      if ((((this_00->PriorityAndFlags & AIOP_FLAG_PRECACHE) != AIOP_MIN) &&
          (this_00->field_0x45 != '\0')) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("( PriorityAndFlags & AIOP_FLAG_PRECACHE ) == 0 || !bUserSuppliedMemory"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                              ,0xb6d,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
        return pIVar14;
      }
    }
    uVar18 = (uint)local_res10;
    cVar22 = (char)local_res10;
    for (lVar16 = (longlong)iVar13; local_68 = this_00, lVar16 <= iVar11; lVar16 = lVar16 + 1) {
      bVar21 = (byte)uVar18;
      uVar23 = (uint)uVar15;
      uVar12 = 0;
      uVar18 = uVar12;
      if ((int)uVar23 < (this->Blocks).ArrayNum) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
        return pIVar14;
      }
      if (*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar16 * 8) == 0) {
        puVar17 = ::operator_new(0x38);
        puVar20 = (undefined8 *)0x0;
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 0;
          puVar17[5] = 0;
          *(undefined4 *)(puVar17 + 6) = 0xffffffff;
          *(undefined2 *)((longlong)puVar17 + 0x34) = 0;
          *(undefined1 *)((longlong)puVar17 + 0x36) = 0;
          puVar20 = puVar17;
        }
        uVar18 = uVar12;
        if ((int)uVar23 < (this->Blocks).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
          return pIVar14;
        }
        *(undefined8 **)((this->Blocks).AllocatorInstance.Data + lVar16 * 8) = puVar20;
        uVar18 = uVar12;
        if ((int)uVar23 < (this->Blocks).ArrayNum) {
          uVar18 = ~uVar23 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
          return pIVar14;
        }
        *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + lVar16 * 8) + 0x30) = uVar23
        ;
      }
      if ((int)uVar23 < (this->Blocks).ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
        return pIVar14;
      }
      lVar3 = *(longlong *)((this->Blocks).AllocatorInstance.Data + lVar16 * 8);
      iVar13 = *(int *)(lVar3 + 0x2c) + 1;
      *(int *)(lVar3 + 0x2c) = iVar13;
      if (*(char *)(lVar3 + 0x34) == '\0') {
        if ((iVar13 != 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Block.RefCount == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                ,0xd3b,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
          return pIVar14;
        }
        StartBlock(this,uVar23,local_res20);
        bVar21 = 1;
      }
      uVar18 = (uint)bVar21;
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        uVar18 = 1;
      }
      cVar22 = (char)uVar18;
      uVar15 = (ulonglong)(uVar23 + 1);
      this_00 = local_68;
    }
    uVar18 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
             -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    if (*(int *)&(this->LiveRequests).Elements.field_0x8 !=
        *(int *)&(this->LiveRequests).Elements.field_0x34) {
      FVar19 = (this->LiveRequests).Hash.SecondaryData;
      if (FVar19 == (ForElementType<FSetElementId>)0x0) {
        FVar19 = (ForElementType<FSetElementId>)&(this->LiveRequests).Hash;
      }
      iVar13 = *(int *)((longlong)FVar19 +
                       (ulonglong)((this->LiveRequests).HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) *
                       4);
      if (iVar13 != -1) {
        lVar16 = *(longlong *)&(this->LiveRequests).Elements;
        do {
          if (*(FPakProcessedReadRequest **)(lVar16 + (longlong)iVar13 * 0x10) == this_00) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!LiveRequests.Contains(Result)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                                ,0xd44,L"");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              pIVar14 = (IAsyncReadRequest *)(*pcVar7)();
              return pIVar14;
            }
            break;
          }
          iVar13 = *(int *)(lVar16 + 8 + (longlong)iVar13 * 0x10);
        } while (iVar13 != -1);
      }
    }
    TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
    ::Emplace<FPakProcessedReadRequest_*_const_&>
              (&this->LiveRequests,&local_res18,(bool *)&local_68);
    if (cVar22 == '\0') {
      FPakProcessedReadRequest::RequestIsComplete(this_00);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  }
LAB_142a924a3:
  FMemScope::~FMemScope(local_58);
  FLLMScope::~FLLMScope(local_res8);
  return (IAsyncReadRequest *)this_00;
}

// RemoveRequest @ 142a98010

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::RemoveRequest
          (FPakAsyncReadFileHandle *this,FPakProcessedReadRequest *param_1,long64 param_2,
          long64 param_3,bool *param_4)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
  *this_00;
  int iVar2;
  FCachedAsyncBlock *pFVar3;
  FPakReadRequest *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->LiveRequests;
  uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  iVar7 = *(int *)&(this->LiveRequests).Elements.field_0x8;
  iVar8 = *(int *)&(this->LiveRequests).Elements.field_0x34;
  if (*param_4 == false) {
    if (iVar7 != iVar8) {
      FVar13 = (this->LiveRequests).Hash.SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&(this->LiveRequests).Hash;
      }
      iVar7 = *(int *)((longlong)FVar13 +
                      (ulonglong)((this->LiveRequests).HashSize - 1U & uVar12) * 4);
      if (iVar7 != -1) {
        do {
          if (*(FPakProcessedReadRequest **)
               (*(longlong *)&this_00->Elements + (longlong)iVar7 * 0x10) == param_1)
          goto LAB_142a9817a;
          iVar7 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LiveRequests.Contains(Req)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xe65,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_142a9817a:
    TSet<FPakProcessedReadRequest_*,DefaultKeyFuncs<FPakProcessedReadRequest_*,0>,FDefaultSetAllocator>
    ::Remove(this_00,param_1);
    uVar9 = param_2 / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
    iVar7 = (int)uVar9;
    uVar16 = (ulonglong)iVar7;
    if ((uVar9 != uVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = (param_3 + -1 + param_2) / (longlong)(ulonglong)(this->FileEntry).CompressionBlockSize;
    iVar8 = (int)lVar10;
    lVar18 = (longlong)iVar8;
    if ((lVar10 != lVar18) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((((iVar7 < 0) || (iVar2 = (this->Blocks).ArrayNum, iVar2 <= iVar7)) || (iVar8 < 0)) ||
        ((iVar2 <= iVar8 || (iVar8 < iVar7)))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FirstBlock >= 0 && FirstBlock < Blocks.Num() && LastBlock >= 0 && LastBlock < Blocks.Num() && FirstBlock <= LastBlock"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                           ,0xe69,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((longlong)uVar16 <= lVar18) {
      do {
        uVar14 = (uint)uVar9;
        uVar17 = ~uVar14 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar14 < (this->Blocks).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) == 0) {
          puVar11 = ::operator_new(0x38);
          puVar15 = (undefined8 *)0x0;
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[5] = 0;
            *(undefined4 *)(puVar11 + 6) = 0xffffffff;
            *(undefined2 *)((longlong)puVar11 + 0x34) = 0;
            *(undefined1 *)((longlong)puVar11 + 0x36) = 0;
            puVar15 = puVar11;
          }
          uVar12 = 0;
          if ((int)uVar14 < (this->Blocks).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 **)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) = puVar15;
          uVar12 = 0;
          if ((int)uVar14 < (this->Blocks).ArrayNum) {
            uVar12 = uVar17;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(*(longlong *)((this->Blocks).AllocatorInstance.Data + uVar16 * 8) + 0x30) =
               uVar14;
        }
        uVar12 = 0;
        if ((int)uVar14 < (this->Blocks).ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FCachedAsyncBlock **)((this->Blocks).AllocatorInstance.Data + uVar16 * 8);
        if ((pFVar3->RefCount < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Block.RefCount > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                               ,0xe6e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar1 = &pFVar3->RefCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          if ((pFVar3->bInFlight != false) && (pFVar3->bCPUWorkIsComplete == false)) {
            UE::Logging::Private::BasicFatalLog
                      (&`public:_void___cdecl_FPakAsyncReadFileHandle::RemoveRequest(FPakProcessedReadRequest*___ptr64,__int64,__int64,bool_const&___ptr64)___ptr64'
                        ::__l39::LOG_Static,(FLogCategoryBase *)&LogPakFile);
          }
          pFVar4 = pFVar3->RawRequest;
          if (pFVar4 != (FPakReadRequest *)0x0) {
            if (pFVar4->field_0x43 == '\0') {
              pFVar4->field_0x43 = 1;
              pFVar4->field_0x40 = 1;
              if (pFVar4->field_0x41 == '\0') {
                (**(code **)(*(longlong *)pFVar4 + 0x18))();
              }
            }
            pFVar4 = pFVar3->RawRequest;
            if (pFVar4->field_0x41 == '\0') {
              (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4,0);
            }
            pFVar4 = pFVar3->RawRequest;
            if (pFVar4 != (FPakReadRequest *)0x0) {
              (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
            }
            pFVar3->RawRequest = (FPakReadRequest *)0x0;
            this->NumLiveRawRequests = this->NumLiveRawRequests + -1;
          }
          ClearBlock(this,pFVar3,false);
        }
        uVar9 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 <= lVar18);
    }
  }
  else if (iVar7 != iVar8) {
    FVar13 = (this->LiveRequests).Hash.SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&(this->LiveRequests).Hash;
    }
    iVar7 = *(int *)((longlong)FVar13 + (ulonglong)((this->LiveRequests).HashSize - 1U & uVar12) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(FPakProcessedReadRequest **)(*(longlong *)&this_00->Elements + (longlong)iVar7 * 0x10)
            == param_1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!LiveRequests.Contains(Req)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                             ,0xe61,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this_00->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a984fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SizeRequest @ 142aa0a00

/* WARNING: Enum "EVersion": Some values do not have unique names */

IAsyncReadRequest * __thiscall
FPakAsyncReadFileHandle::SizeRequest
          (FPakAsyncReadFileHandle *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1)

{
  IAsyncReadRequest_u_8 IVar1;
  IAsyncReadRequest *this_00;
  
  this_00 = ::operator_new(0x50);
  if (this_00 != (IAsyncReadRequest *)0x0) {
    IVar1 = (IAsyncReadRequest_u_8)this->UncompressedFileSize;
    IAsyncReadRequest::IAsyncReadRequest(this_00,param_1,true,(uchar *)0x0);
    this_00->field8_0x8 = IVar1;
    *(undefined ***)this_00 = &___7FPakSizeRequest__6B_;
    IAsyncReadRequest::SetDataComplete(this_00);
    this_00->bCompleteAndCallbackCalled = true;
    return this_00;
  }
  return (IAsyncReadRequest *)0x0;
}

// StartBlock @ 142aa0e90

/* WARNING: Enum "EVersion": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FPakAsyncReadFileHandle::StartBlock
          (FPakAsyncReadFileHandle *this,int param_1,EAsyncIOPriorityAndFlags param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCachedAsyncBlock *pFVar5;
  FPakReadRequest *pFVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  pFVar5 = GetBlock(this,param_1);
  pFVar5->bInFlight = true;
  if ((((pFVar5->RawRequest != (FPakReadRequest *)0x0) || (pFVar5->Processed != (uchar *)0x0)) ||
      (pFVar5->Raw != (uchar *)0x0)) ||
     ((((pFVar5->CPUWorkGraphEvent).Reference != (FBaseGraphTask *)0x0 ||
       (pFVar5->ProcessedSize != 0)) ||
      ((pFVar5->RawSize != 0 || (pFVar5->bCPUWorkIsComplete != false)))))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Block.RawRequest && !Block.Processed && !Block.Raw && !Block.CPUWorkGraphEvent.GetReference() && !Block.ProcessedSize && !Block.RawSize && !Block.bCPUWorkIsComplete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IPlatformFilePak.cpp"
                       ,0xd53,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->FileEntry).CompressionBlocks.ArrayNum) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FileEntry).CompressionBlocks.AllocatorInstance.Data;
  lVar9 = (longlong)param_1 * 0x10;
  uVar4 = 0;
  if (param_1 < (this->FileEntry).CompressionBlocks.ArrayNum) {
    uVar4 = uVar10;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar8 = *(longlong *)((this->FileEntry).CompressionBlocks.AllocatorInstance.Data + lVar9 + 8) -
          *(longlong *)(pFVar1 + lVar9);
  iVar7 = (int)lVar8;
  if (lVar8 != iVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5->RawSize = iVar7;
  pFVar5->DecompressionRawSize = iVar7;
  if (((this->FileEntry).Flags & 1) != 0) {
    pFVar5->RawSize = iVar7 + 0xfU & 0xfffffff0;
  }
  this->NumLiveRawRequests = this->NumLiveRawRequests + 1;
  pFVar6 = ::operator_new(0xa0);
  if (pFVar6 == (FPakReadRequest *)0x0) {
    pFVar5->RawRequest = (FPakReadRequest *)0x0;
  }
  else {
    iVar7 = pFVar5->RawSize;
    uVar4 = 0;
    if (param_1 < (this->FileEntry).CompressionBlocks.ArrayNum) {
      uVar4 = uVar10;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar6 = FPakReadRequest::FPakReadRequest
                       (pFVar6,(this->ActualPakFile).Reference,this->PakFile,this->PakFileSize,
                        &this->ReadCallbackFunction,
                        *(longlong *)
                         ((this->FileEntry).CompressionBlocks.AllocatorInstance.Data + lVar9) +
                        this->CompressedChunkOffset,(longlong)iVar7,param_2,(uchar *)0x0,true,pFVar5
                       );
    pFVar5->RawRequest = pFVar6;
  }
  return;
}

