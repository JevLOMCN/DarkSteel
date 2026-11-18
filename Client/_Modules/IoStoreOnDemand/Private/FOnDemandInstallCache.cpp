// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 38

// FOnDemandInstallCache @ 1445a4390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandInstallCache * __thiscall
UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache
          (FOnDemandInstallCache *this,FOnDemandInstallCacheConfig *param_1,
          FOnDemandIoStore *param_2,FDiskCacheGovernor *param_3)

{
  FString *this_00;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *this_01;
  TMap<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
  *this_02;
  FScriptContainerElement *pFVar1;
  FMutex *pFVar2;
  int *piVar3;
  atomic<unsigned_char> aVar4;
  undefined1 *puVar5;
  code *pcVar6;
  double dVar7;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar8;
  bool bVar9;
  int iVar10;
  FOnDemandInstallCache *pFVar11;
  ulonglong uVar12;
  TOptional<UE::UnifiedError::FError> *pTVar13;
  FCasErrorContext *pFVar14;
  IConsoleManager *pIVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  longlong lVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint *puVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_358 [32];
  uint local_338;
  TOptional<UE::UnifiedError::FError> local_328;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_308;
  FDelegateAllocation local_300;
  int local_2f0;
  uint uStack_2ec;
  undefined1 *puStack_2e8;
  undefined4 local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0 [2];
  TMap<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
  *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c0;
  long64 local_2a0;
  FString local_298;
  FString local_288;
  TValueOrError<void,UE::UnifiedError::FError> local_278;
  TValueOrError<void,UE::UnifiedError::FError> local_260;
  undefined1 local_248 [16];
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&> local_238;
  FScriptContainerElement *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  undefined4 *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FOnDemandImmediateAnalytic local_1d8;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  FCasSnapshot local_180;
  TOptional<UE::UnifiedError::FError> local_158;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TOptional<UE::UnifiedError::FError> local_118;
  TValueOrError<void,UE::UnifiedError::FError> local_100;
  TValueOrError<void,UE::UnifiedError::FError> local_e8;
  code *local_c8 [2];
  undefined **local_b8;
  FOnDemandInstallCache *local_b0;
  undefined ***local_a0;
  TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError> local_98;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_358;
  this->IoStore = param_2;
  this_00 = &this->CacheDirectory;
  this->_padding_ = (longlong)&___7FOnDemandInstallCache_IoStore_UE__6B_;
  this->Governor = param_3;
  ::FString::FString(this_00,&param_1->RootDirectory);
  (this->Cas).RootDirectory.DataPtr = (wchar_t *)0x0;
  this_01 = &(this->Cas).Lookup;
  (this->Cas).RootDirectory.Size = 0;
  this_02 = &(this->Cas).BlockIds;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->Cas).Lookup.field_0x8 = 0;
  *(undefined8 *)&(this->Cas).Lookup.field_0x20 = 0;
  *(undefined4 *)&(this->Cas).Lookup.field_0x28 = 0;
  *(undefined4 *)&(this->Cas).Lookup.field_0x2c = 0x80;
  *(undefined4 *)&(this->Cas).Lookup.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cas).Lookup.field_0x34 = 0;
  *(undefined8 *)&(this->Cas).Lookup.field_0x40 = 0;
  *(undefined4 *)&(this->Cas).Lookup.field_0x48 = 0;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->Cas).BlockIds.field_0x8 = 0;
  *(undefined8 *)&(this->Cas).BlockIds.field_0x20 = 0;
  *(undefined4 *)&(this->Cas).BlockIds.field_0x28 = 0;
  *(undefined4 *)&(this->Cas).BlockIds.field_0x2c = 0x80;
  *(undefined4 *)&(this->Cas).BlockIds.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cas).BlockIds.field_0x34 = 0;
  *(undefined8 *)&(this->Cas).BlockIds.field_0x40 = 0;
  *(undefined4 *)&(this->Cas).BlockIds.field_0x48 = 0;
  *(undefined8 *)&(this->Cas).LastAccess = 0;
  *(undefined8 *)&(this->Cas).LastAccess.field_0x8 = 0;
  *(undefined8 *)&(this->Cas).LastAccess.field_0x20 = 0;
  *(undefined4 *)&(this->Cas).LastAccess.field_0x28 = 0;
  *(undefined4 *)&(this->Cas).LastAccess.field_0x2c = 0x80;
  *(undefined4 *)&(this->Cas).LastAccess.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cas).LastAccess.field_0x34 = 0;
  *(undefined8 *)&(this->Cas).LastAccess.field_0x40 = 0;
  *(undefined4 *)&(this->Cas).LastAccess.field_0x48 = 0;
  *(undefined8 *)&(this->Cas).ReadHandles = 0;
  *(undefined8 *)&(this->Cas).ReadHandles.field_0x8 = 0;
  *(undefined8 *)&(this->Cas).ReadHandles.field_0x20 = 0;
  *(undefined4 *)&(this->Cas).ReadHandles.field_0x28 = 0;
  *(undefined4 *)&(this->Cas).ReadHandles.field_0x2c = 0x80;
  *(undefined4 *)&(this->Cas).ReadHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cas).ReadHandles.field_0x34 = 0;
  *(undefined8 *)&(this->Cas).ReadHandles.field_0x40 = 0;
  *(undefined4 *)&(this->Cas).ReadHandles.field_0x48 = 0;
  FEventRef::FEventRef(&(this->Cas).BlockReadsDoneEvent,AutoReset);
  dVar7 = param_1->LastAccessGranularitySeconds * __real_416312d000000000;
  (this->Cas).Mutex.State = (atomic<unsigned_char>)0x0;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = dVar7 + __real_3fe0000000000000;
  auVar31 = roundpd(extraout_XMM0,auVar31,1);
  (this->Cas).LastAccessGranularityTicks = (longlong)auVar31._0_8_;
  this->CurrentBlock = (atomic<UE::IoStore::FCasBlockId>)0x0;
  (this->PendingChunks).Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChunks).Chunks.ArrayNum = 0;
  (this->PendingChunks).Chunks.ArrayMax = 0;
  (this->PendingChunks).ChunkHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChunks).ChunkHashes.ArrayNum = 0;
  (this->PendingChunks).ChunkHashes.ArrayMax = 0;
  (this->PendingChunks).TotalSize = 0;
  (this->PendingChunks).SharedMutex.State = (atomic<unsigned_int>)0x0;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  (this->PurgeDefragMutex).State = (atomic<unsigned_int>)0x0;
  this->MaxCacheSize = param_1->DiskQuota;
  this->MaxJournalSize = param_1->JournalMaxSize;
  (this->ConsoleCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleCommands).ArrayNum = 0;
  (this->ConsoleCommands).ArrayMax = 0;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (this->MaxCacheSize < 0x4000000) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 2) {
      return this;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    return this;
  }
  this->MaxCacheSize = this->MaxCacheSize - 0x2000000;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  local_228 = (this_00->Data).AllocatorInstance.Data;
  iVar10 = (this->CacheDirectory).Data.ArrayNum;
  iStack_220 = iVar10 + -1;
  if (iVar10 == 0) {
    iStack_220 = 0;
  }
  local_128._12_4_ = uStack_21c;
  local_128.Size = iStack_220;
  local_128.DataPtr = (wchar_t *)local_228;
  FCas::Initialize(&this->Cas,(TValueOrError<void,UE::UnifiedError::FError> *)&local_328,&local_128,
                   false);
  if (local_328.bIsSet != false) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,&local_328.TypedValue);
    }
    TVar8.Reference = local_328.TypedValue.ErrorDetails.Reference;
    if (local_328.bIsSet == false) {
      return this;
    }
    local_328.TypedValue.ErrorCode = 0;
    local_328.TypedValue.ModuleId = 0;
    if (local_328.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return this;
    }
    local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
    if (local_328.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return this;
    }
    (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
    return this;
  }
  ::operator/(&local_288,this_00,L"cas.snp");
  local_2a0 = -1;
  FCasSnapshot::Load(&local_98,&local_288,&local_2a0);
  uVar21 = (ulonglong)local_98.Variant.TypeIndex;
  if ((2 < uVar21) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FOnDemandInstallCache *)(*pcVar6)();
    return pFVar11;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,UE::IoStore::FCasSnapshot,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar21 + 4) == '\0') {
    if ((local_98.Variant.TypeIndex != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FOnDemandInstallCache *)(*pcVar6)();
      return pFVar11;
    }
    pFVar14 = UnifiedError::FError::
              GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
                        ((FError *)&local_98);
    if ((pFVar14 != (FCasErrorContext *)0x0) && (pFVar14->IoErrorCode == NotFound)) {
      local_158.bIsSet = false;
      TOptional<UE::UnifiedError::FError>::operator=(&local_328,&local_158);
      TValueOrError<void,UE::UnifiedError::FError>::~TValueOrError<void,UE::UnifiedError::FError>
                ((TValueOrError<void,UE::UnifiedError::FError> *)&local_158);
    }
  }
  else {
    TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::StealValue
              (&local_98,&local_180);
    uVar30 = local_180.Blocks.ArrayNum;
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      local_338 = uVar30;
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    pFVar2 = &(this->Cas).Mutex;
    LOCK();
    bVar9 = pFVar2->State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      pFVar2->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
      FMutex::LockSlow(pFVar2);
    }
    TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
               *)this_01,local_180.ChunkLocations.ArrayNum);
    pFVar1 = local_180.ChunkLocations.AllocatorInstance.Data +
             (longlong)local_180.ChunkLocations.ArrayNum * 0x14;
    for (FVar23.Data = local_180.ChunkLocations.AllocatorInstance.Data; FVar23.Data != pFVar1;
        FVar23.Data = FVar23.Data + 0x14) {
      local_210 = FVar23.Data + 0xc;
      local_218 = FVar23.Data;
      TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::THash<96>_&&,UE::IoStore::FCasLocation_&&>_>
                ((TSet<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>,FDefaultSetAllocator>
                  *)this_01,
                 (TPairInitializer<UE::THash<96>_&&,UE::IoStore::FCasLocation_&&> *)local_248,
                 (bool *)&local_218);
    }
    if ((uint)(*(int *)&(this->Cas).BlockIds.field_0x8 - *(int *)&(this->Cas).BlockIds.field_0x34) <
        uVar30) {
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar30);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_02,uVar30);
      uVar24 = 1;
      if (3 < uVar30) {
        uVar21 = (ulonglong)(((uint)((ulonglong)local_180.Blocks._8_8_ >> 1) & 0x7fffffff) + 7) * 2
                 + 1;
        lVar22 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_248._4_4_ = (undefined4)lVar22;
        uVar24 = 1 << ((byte)lVar22 & 0x1f);
      }
      iVar10 = *(int *)&(this->Cas).BlockIds.field_0x48;
      if ((iVar10 == 0) || (iVar10 < (int)uVar24)) {
        *(uint *)&(this->Cas).BlockIds.field_0x48 = uVar24;
        if (*(longlong *)&(this->Cas).BlockIds.field_0x40 != 0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&(this->Cas).BlockIds.field_0x40,0,0,4);
        }
        if (uVar24 != 0) {
          uVar25 = uVar24;
          if (uVar24 < 2) {
            if (*(longlong *)&(this->Cas).BlockIds.field_0x40 != 0) {
              uVar25 = 0;
              goto LAB_1445a4956;
            }
          }
          else {
LAB_1445a4956:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&(this->Cas).BlockIds.field_0x40,0,uVar25,4);
          }
          uVar21 = 0;
          if (0 < (int)uVar24) {
            uVar26 = (ulonglong)uVar24;
            do {
              puVar5 = *(undefined1 **)&(this->Cas).BlockIds.field_0x40;
              puVar19 = &(this->Cas).BlockIds.field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar19 = puVar5;
              }
              uVar12 = (longlong)(int)uVar24 - 1U & uVar21;
              uVar21 = uVar21 + 1;
              *(undefined4 *)(puVar19 + uVar12 * 4) = 0xffffffff;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
        if (*(int *)&(this->Cas).BlockIds.field_0x48 != 0) {
          iVar10 = *(int *)&(this->Cas).BlockIds.field_0x28;
          puStack_2e8 = &(this->Cas).BlockIds.field_0x10;
          uStack_2ec = 1;
          local_2f0 = 0;
          iStack_2dc = 0;
          iStack_2d8 = 0;
          local_2c8 = this_02;
          local_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_2e8;
          if (iVar10 != 0) {
            puVar27 = *(uint **)&(this->Cas).BlockIds.field_0x20;
            if (puVar27 == (uint *)0x0) {
              puVar27 = (uint *)puStack_2e8;
            }
            uVar24 = *puVar27;
            iStack_2d8 = 0;
            local_2f0 = 0;
            while (uVar24 == 0) {
              iStack_2d8 = iStack_2d8 + 0x20;
              lVar22 = (longlong)local_2f0;
              local_2f0 = local_2f0 + 1;
              if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2f0)
              goto LAB_1445a4a65;
              uVar24 = puVar27[lVar22 + 1];
            }
            uStack_2ec = -uVar24 & uVar24;
            uVar21 = (ulonglong)uStack_2ec * 2 + 1;
            lVar22 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_248._8_4_ = (undefined4)lVar22;
            iStack_2dc = local_248._8_4_ + -1 + iStack_2d8;
            if (iVar10 < iStack_2dc) {
LAB_1445a4a65:
              local_2e0 = 0xffffffff;
              local_2c0._padding_ = CONCAT44(uStack_2ec,local_2f0);
              local_2c0.CurrentBitIndex = iVar10;
              local_2c0.UnvisitedBitMask = 0xffffffff;
              local_2c0._28_4_ = uStack_2d4;
              local_2c0.BaseBitIndex = iStack_2d8;
              iStack_2dc = iVar10;
              goto LAB_1445a4a80;
            }
          }
          local_2e0 = 0xffffffff;
          local_2c0._padding_ = CONCAT44(uStack_2ec,local_2f0);
          local_2c0.CurrentBitIndex = iStack_2dc;
          local_2c0.UnvisitedBitMask = 0xffffffff;
          local_2c0._28_4_ = uStack_2d4;
          local_2c0.BaseBitIndex = iStack_2d8;
          iVar29 = iStack_2dc;
          if (iStack_2dc < iVar10) {
            do {
              lVar22 = *(longlong *)&local_2c8->field_0x0;
              lVar28 = (longlong)iVar29 * 0x10;
              uVar24 = *(int *)&(this->Cas).BlockIds.field_0x48 - 1U & *(uint *)(lVar28 + lVar22);
              *(uint *)(lVar28 + 0xc + lVar22) = uVar24;
              puVar5 = *(undefined1 **)&(this->Cas).BlockIds.field_0x40;
              puVar19 = &(this->Cas).BlockIds.field_0x38;
              if (puVar5 != (undefined1 *)0x0) {
                puVar19 = puVar5;
              }
              uVar21 = (longlong)*(int *)&(this->Cas).BlockIds.field_0x48 - 1U &
                       (longlong)(int)uVar24;
              *(undefined4 *)(lVar28 + 8 + lVar22) = *(undefined4 *)(puVar19 + uVar21 * 4);
              *(int *)(puVar19 + uVar21 * 4) = iVar29;
              local_2c0.UnvisitedBitMask = local_2c0.UnvisitedBitMask & ~local_2c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c0);
              iVar29 = local_2c0.CurrentBitIndex;
            } while (local_2c0.CurrentBitIndex < (local_2c0.Array)->NumBits);
          }
        }
      }
    }
LAB_1445a4a80:
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
               *)&(this->Cas).LastAccess,uVar30);
    for (FVar23.Data = local_180.Blocks.AllocatorInstance.Data;
        FVar23.Data != local_180.Blocks.AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10;
        FVar23.Data = FVar23.Data + 0x10) {
      local_200 = local_2d0;
      local_2d0[0] = 0;
      local_208 = FVar23.Data;
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                  *)this_02,
                 (TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> *)(local_248 + 0xc),
                 (bool *)&local_208);
      local_1f0 = FVar23.Data + 8;
      local_1f8 = FVar23.Data;
      TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,__int64_const_&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                  *)&(this->Cas).LastAccess,&local_238,(bool *)&local_1f8);
    }
    LOCK();
    pFVar2 = &(this->Cas).Mutex;
    aVar4 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread(&(this->Cas).Mutex);
    }
    if (local_180.ChunkLocations.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.ChunkLocations.AllocatorInstance.Data);
    }
    if (local_180.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Blocks.AllocatorInstance.Data);
    }
  }
  if ((2 < local_98.Variant.TypeIndex) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FOnDemandInstallCache *)(*pcVar6)();
    return pFVar11;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::IoStore::FCasSnapshot,TValueOrError<UE::IoStore::FCasSnapshot,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::IoStore::FCasSnapshot,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  ::operator/(&local_298,&this->CacheDirectory,L"cas.jrn");
  if (local_328.bIsSet == false) {
    local_a0 = (undefined ***)0x0;
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::`108'::<lambda_1>,0,0>
                ::_vftable_;
    local_c8[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>,void,UE::IoStore::FCasJournal::FEntry_const_&>
                  ::Call;
    local_b0 = this;
    pTVar13 = &FCasJournal::Replay(&local_278,&local_298,
                                   (TFunction<void___cdecl(UE::IoStore::FCasJournal::FEntry_const_&)>
                                    *)local_c8)->Error;
    TVar8.Reference = local_328.TypedValue.ErrorDetails.Reference;
    if (pTVar13 != &local_328) {
      if (pTVar13->bIsSet == false) {
        if (local_328.bIsSet != false) {
          local_328.TypedValue.ErrorCode = 0;
          local_328.TypedValue.ModuleId = 0;
          if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar8.Reference + 0x10))();
            if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          local_328.bIsSet = false;
        }
      }
      else {
        if ((local_328.bIsSet != false) &&
           (local_328.TypedValue.ErrorCode = 0, local_328.TypedValue.ModuleId = 0,
           local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar8.Reference + 0x10))();
          if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        UnifiedError::FError::FError(&local_328.TypedValue,&pTVar13->TypedValue);
        local_328.bIsSet = true;
      }
    }
    TVar8.Reference = local_278.Error.TypedValue.ErrorDetails.Reference;
    if ((local_278.Error.bIsSet != false) &&
       (local_278.Error.TypedValue.ErrorCode = 0, local_278.Error.TypedValue.ModuleId = 0,
       local_278.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_278.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar8.Reference + 0x10))();
      if (local_278.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_278.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_c8[0] != (code *)0x0) {
      pppuVar20 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar20 = local_a0;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    if (local_328.bIsSet != false) goto LAB_1445a4df3;
  }
  else {
LAB_1445a4df3:
    pFVar14 = UnifiedError::FError::
              GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
                        (&local_328.TypedValue);
    if ((pFVar14 != (FCasErrorContext *)0x0) && (pFVar14->IoErrorCode == NotFound)) {
      pTVar13 = &FCasJournal::Create(&local_100,&local_298)->Error;
      TOptional<UE::UnifiedError::FError>::operator=(&local_328,pTVar13);
      TValueOrError<void,UE::UnifiedError::FError>::~TValueOrError<void,UE::UnifiedError::FError>
                (&local_100);
      if (local_328.bIsSet == false) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        local_1e8 = (this->CacheDirectory).Data.AllocatorInstance.Data;
        iVar10 = (this->CacheDirectory).Data.ArrayNum;
        iStack_1e0 = iVar10 + -1;
        if (iVar10 == 0) {
          iStack_1e0 = 0;
        }
        local_138._12_4_ = uStack_1dc;
        local_138.Size = iStack_1e0;
        local_138.DataPtr = (wchar_t *)local_1e8;
        pTVar13 = &FCas::Initialize(&this->Cas,&local_e8,&local_138,true)->Error;
        TOptional<UE::UnifiedError::FError>::operator=(&local_328,pTVar13);
        TValueOrError<void,UE::UnifiedError::FError>::~TValueOrError<void,UE::UnifiedError::FError>
                  (&local_e8);
      }
    }
  }
  if (local_328.bIsSet == false) {
    pTVar13 = &InitialVerify(this,&local_260)->Error;
    TVar8.Reference = local_328.TypedValue.ErrorDetails.Reference;
    if (pTVar13 != &local_328) {
      if (pTVar13->bIsSet == false) {
        if (local_328.bIsSet != false) {
          local_328.TypedValue.ErrorCode = 0;
          local_328.TypedValue.ModuleId = 0;
          if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar8.Reference + 0x10))();
            if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          local_328.bIsSet = false;
        }
      }
      else {
        if ((local_328.bIsSet != false) &&
           (local_328.TypedValue.ErrorCode = 0, local_328.TypedValue.ModuleId = 0,
           local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar8.Reference + 0x10))();
          if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        UnifiedError::FError::FError(&local_328.TypedValue,&pTVar13->TypedValue);
        local_328.bIsSet = true;
      }
    }
    TVar8.Reference = local_260.Error.TypedValue.ErrorDetails.Reference;
    if ((local_260.Error.bIsSet != false) &&
       (local_260.Error.TypedValue.ErrorCode = 0, local_260.Error.TypedValue.ModuleId = 0,
       local_260.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_260.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar8.Reference + 0x10))();
      if (local_260.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_260.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_328.bIsSet != false) goto LAB_1445a4fbd;
  }
  else {
LAB_1445a4fbd:
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,&local_328.TypedValue);
    }
    if (local_328.bIsSet != false) {
      MakeAnalyticsEventFromResult
                (&local_1d8,L"IadStartupError",
                 (TValueOrError<void,UE::UnifiedError::FError> *)&local_328);
      SendImmediateAnalytic(&local_1d8);
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_1d8.AnalyticsArray.AllocatorInstance.Data,
                 local_1d8.AnalyticsArray.ArrayNum);
      if ((FAnalyticsEventAttribute *)local_1d8.AnalyticsArray.AllocatorInstance.Data !=
          (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_1d8.AnalyticsArray.AllocatorInstance.Data);
      }
      if (local_1d8.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.EventName.Data.AllocatorInstance.Data);
      }
    }
    pTVar13 = &InitialVerify(this,(TValueOrError<void,UE::UnifiedError::FError> *)&local_118)->Error
    ;
    TOptional<UE::UnifiedError::FError>::operator=(&local_328,pTVar13);
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_118);
    if (local_328.bIsSet != false) {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                  ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,&local_328.TypedValue);
      }
      goto LAB_1445a5227;
    }
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  pIVar15 = IConsoleManager::Get();
  local_308.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_300.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_300.DelegateSize = 0;
  pcVar6 = *(code **)((longlong)*pIVar15 + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_308,(FWriteAccessScope *)&local_1a0);
  local_188 = &local_300;
  puVar16 = Core::Private::DelegateAllocate(0x20,&local_300);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandInstallCache::RegisterConsoleCommands'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar16[3] = this;
  }
  if (local_1a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
  }
  local_338 = 0;
  uVar18 = (*pcVar6)(pIVar15,L"iostore.SimulateCriticalInstallCacheError",L"",&local_308);
  piVar3 = &(this->ConsoleCommands).ArrayMax;
  iVar10 = (this->ConsoleCommands).ArrayNum;
  if (iVar10 == *piVar3) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->ConsoleCommands).AllocatorInstance,piVar3);
  }
  (this->ConsoleCommands).ArrayNum = iVar10 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar10 * 8) = uVar18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_308,(FWriteAccessScope *)&local_1b8);
  if ((local_300.DelegateSize != 0) &&
     (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_300.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_300,0,0,0x10);
    local_300.DelegateSize = 0;
  }
  if (local_1b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
  }
  if (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_300.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_308.AccessDetector);
  FCas::Compact(&this->Cas);
LAB_1445a5227:
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  TVar8.Reference = local_328.TypedValue.ErrorDetails.Reference;
  if ((local_328.bIsSet != false) &&
     (local_328.TypedValue.ErrorCode = 0, local_328.TypedValue.ModuleId = 0,
     local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_328.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar8.Reference + 0x10))();
    if (local_328.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_328.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return this;
}

// ~FOnDemandInstallCache @ 1445a90c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::~FOnDemandInstallCache(FOnDemandInstallCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOnDemandInstallCache_IoStore_UE__6B_;
  pFVar1 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PendingChunks).ChunkHashes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FIoBuffer,int>
            ((FIoBuffer *)(this->PendingChunks).Chunks.AllocatorInstance.Data,
             (this->PendingChunks).Chunks.ArrayNum);
  pFVar1 = (this->PendingChunks).Chunks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCas::~FCas(&this->Cas);
  pFVar1 = (this->CacheDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1445ab0e0

void __thiscall
`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(void *this)

{
  FError *pFVar1;
  ulong64 uVar2;
  byte bVar3;
  atomic<unsigned_char> aVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  wchar_t *local_res8;
  ulong64 local_res10;
  FOnDemandImmediateAnalytic local_28;
  
  if ((undefined8 *)**(longlong **)this != (undefined8 *)0x0) {
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x10) == '\0') {
      uVar6 = **(undefined8 **)((longlong)this + 0x10);
    }
    else {
      uVar6 = 0;
    }
    *(undefined8 *)**(longlong **)this = uVar6;
  }
  pFVar1 = *(FError **)((longlong)this + 8);
  uVar2 = **(ulong64 **)((longlong)this + 0x10);
  local_res10 = uVar2;
  if (((char)pFVar1[1].ErrorCode == '\0') ||
     (bVar5 = UE::UnifiedError::IsCancellationError(pFVar1), !bVar5)) {
    LOCK();
    bVar5 = UE::IoStore::FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      UE::IoStore::FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(&UE::IoStore::FInstallCacheAnalytics::Mutex);
    }
    if ((char)pFVar1[1].ErrorCode != '\0') {
      UE::IoStore::InstallCacheAnalytics.DefragErrorCount =
           UE::IoStore::InstallCacheAnalytics.DefragErrorCount + 1;
    }
    UE::IoStore::InstallCacheAnalytics.DefragCount =
         UE::IoStore::InstallCacheAnalytics.DefragCount + 1;
    UE::IoStore::InstallCacheAnalytics.FragmentedBytes =
         UE::IoStore::InstallCacheAnalytics.FragmentedBytes + uVar2;
    LOCK();
    aVar4 = UE::IoStore::FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar3 = (byte)UE::IoStore::FInstallCacheAnalytics::Mutex.State & 2;
    UE::IoStore::FInstallCacheAnalytics::Mutex.State = aVar4;
    if (bVar3 != 0) {
      UE::FMutex::WakeWaitingThread(&UE::IoStore::FInstallCacheAnalytics::Mutex);
    }
    UE::IoStore::MakeAnalyticsEventFromResult
              (&local_28,L"IadCacheDefrag",(TValueOrError<void,UE::UnifiedError::FError> *)pFVar1);
    uVar7 = local_28.AnalyticsArray.ArrayNum + 1;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if (local_28.AnalyticsArray.ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar7,&local_28.AnalyticsArray.AllocatorInstance,
                 local_28.AnalyticsArray.ArrayNum,&local_28.AnalyticsArray.ArrayMax);
    }
    local_res8 = L"FragmentedBytes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (&local_28.AnalyticsArray,&local_res8,&local_res10);
    UE::IoStore::SendImmediateAnalytic(&local_28);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data,
               local_28.AnalyticsArray.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_28.AnalyticsArray.AllocatorInstance.Data);
    }
    if (local_28.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.EventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1445ac230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandInstallCache::RegisterConsoleCommands'::__l2::<lambda_1>::operator()
          (void *this)

{
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar1;
  int iVar2;
  longlong lVar3;
  uint local_res8 [2];
  undefined4 local_res10;
  undefined4 uStackX_14;
  ulong64 local_res18;
  FString local_68;
  FString local_58;
  TValueOrError<void,UE::UnifiedError::FError> local_48;
  FTransaction local_30;
  
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  ::operator/(&local_68,(FString *)(*(longlong *)this + 0x18),L"cas.jrn");
  local_30.JournalFile.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
  local_30.JournalFile.Data.ArrayNum = local_68.Data.ArrayNum;
  local_30.JournalFile.Data.ArrayMax = local_68.Data.ArrayMax;
  local_30.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Entries.ArrayNum = 0;
  local_30.Entries.ArrayMax = 0;
  local_res10 = CONCAT31(local_res10._1_3_,5);
  uStackX_14 = 1;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_30.Entries.AllocatorInstance,&local_30.Entries.ArrayMax);
  lVar3 = (longlong)iVar2;
  local_30.Entries.ArrayNum = iVar2 + 1;
  *(undefined8 *)(local_30.Entries.AllocatorInstance.Data + lVar3 * 0x18 + 8) = 0;
  *(undefined8 *)(local_30.Entries.AllocatorInstance.Data + lVar3 * 0x18 + 0x10) = 0;
  local_res18 = 0;
  local_res8[0] = 0;
  *(ulonglong *)(local_30.Entries.AllocatorInstance.Data + lVar3 * 0x18) =
       CONCAT44(uStackX_14,local_res10);
  UE::IoStore::FCasJournal::Commit(&local_48,&local_30,&local_res18,local_res8);
  if (local_48.Error.bIsSet != false) {
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      ::LexToString(&local_58,(FError *)&local_48);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    TVar1.Reference = local_48.Error.TypedValue.ErrorDetails.Reference;
    if ((local_48.Error.bIsSet != false) &&
       (local_48.Error.TypedValue.ErrorCode = 0, local_48.Error.TypedValue.ModuleId = 0,
       local_48.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_48.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar1.Reference + 0x10))();
      if (local_48.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_48.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  if (local_30.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Entries.AllocatorInstance.Data);
  }
  if (local_30.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.JournalFile.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1445aec40

void __thiscall
`UE::IoStore::FOnDemandInstallCache::FOnDemandInstallCache'::__l108::<lambda_1>::operator()
          (void *this,FEntry *param_1)

{
  EType EVar1;
  code *pcVar2;
  bool bVar3;
  FCasLocation *pFVar4;
  undefined4 local_res10 [2];
  TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&> local_res18;
  FCasLocation *local_18;
  undefined4 *local_10;
  
  EVar1 = (param_1->field0_0x0).ChunkLocation.Type;
  if (EVar1 == ChunkLocation) {
    if (((param_1->field0_0x0).CriticalError.ErrorCode != None) &&
       ((param_1->field0_0x0).ChunkLocation.CasLocation.BlockOffset != 0xffffffff)) {
      pFVar4 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
               ::FindOrAddImpl<UE::THash<96>_const_&>
                         ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                           *)(*(longlong *)this + 0x38),
                          *(uint *)((longlong)&param_1->field0_0x0 + 0xc),
                          &(param_1->field0_0x0).ChunkLocation.CasAddr);
      *pFVar4 = (param_1->field0_0x0).ChunkLocation.CasLocation;
      return;
    }
    TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
    ::Remove((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
              *)(*(longlong *)this + 0x38),&(param_1->field0_0x0).ChunkLocation.CasAddr);
  }
  else {
    if (EVar1 == BlockCreated) {
      local_18 = &(param_1->field0_0x0).ChunkLocation.CasLocation;
      LOCK();
      *(uint *)(*(longlong *)this + 400) = (local_18->BlockId).Id;
      UNLOCK();
      local_10 = local_res10;
      local_res10[0] = 0;
      TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,int_&&>_>
                ((TSet<TTuple<UE::IoStore::FCasBlockId,int>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>,FDefaultSetAllocator>
                  *)(*(longlong *)this + 0x88),&local_res18,(bool *)&local_18);
      return;
    }
    if (EVar1 == BlockDeleted) {
      TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
      ::Remove((TMapBase<UE::IoStore::FCasBlockId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,int,0>_>
                *)(*(longlong *)this + 0x88),&(param_1->field0_0x0).BlockOperation.BlockId);
      LOCK();
      if ((param_1->field0_0x0).CriticalError.ErrorCode == *(EErrorCode *)(*(longlong *)this + 400))
      {
        *(EErrorCode *)(*(longlong *)this + 400) = None;
      }
      UNLOCK();
      return;
    }
    if (((EVar1 == BlockAccess) &&
        (bVar3 = UE::IoStore::FCas::TrackAccessIf
                           ((FCas *)(*(longlong *)this + 0x28),Always,
                            (FCasBlockId)(param_1->field0_0x0).ChunkLocation.CasLocation.BlockId.Id,
                            (param_1->field0_0x0).BlockOperation.UtcTicks,false), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Cas.TrackAccessIf(ECasTrackAccessType::Always, Op.BlockId, Op.UtcTicks, bDirty)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                           ,0x765,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// operator() @ 1445aeda0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,IAsyncReadRequest *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  longlong lVar4;
  FTaskBase *this_00;
  undefined7 uStack_17;
  
  lVar3 = *(longlong *)this;
  lVar4 = *(longlong *)((longlong)this + 8);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    return;
  }
  UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
  this_00->_padding_ =
       (longlong)
       &UE::Tasks::Private::
        TExecutableTaskBase<``UE::IoStore::FOnDemandInstallCache::Resolve'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,void,void>
        ::_vftable_;
  UE::Tasks::Private::FTaskBase::Init
            (this_00,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp(2256)"
             ,Default,None,None);
  this_00[1]._padding_ = lVar3;
  this_00[1]._padding_ = lVar4;
  this_00[1]._padding_ = CONCAT71(uStack_17,param_1);
  this_00->_padding_ =
       (longlong)
       &UE::Tasks::Private::
        TExecutableTask<``UE::IoStore::FOnDemandInstallCache::Resolve'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
        ::_vftable_;
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001445aee5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)this_00->_padding_)(this_00,1);
    return;
  }
  return;
}

// AddReferencesToBlocks @ 1445b2b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::AddReferencesToBlocks
          (FOnDemandInstallCache *this,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
          *param_3,ulong64 *param_4)

{
  FSharedMutex *this_00;
  atomic<unsigned_char> aVar1;
  atomic<unsigned_int> aVar2;
  longlong lVar3;
  FCasLocation FVar4;
  code *pcVar5;
  FOnDemandInstallCache *pFVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FCasLocation *pFVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  FMutex *this_01;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  uint uVar19;
  uchar *puVar20;
  uchar *puVar21;
  uint *puVar22;
  uint uVar23;
  ForElementType<unsigned_int> FVar24;
  int iVar25;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *pTVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  int iVar29;
  uchar *puVar30;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197;
  undefined1 local_196 [6];
  FScriptContainerElement *local_190;
  uint local_188;
  uint local_180;
  TReferenceControllerBase<1> *local_178;
  FCasLocation local_170;
  FOnDemandInstallCache *local_168;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *local_160;
  uchar *local_158;
  int local_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_148;
  undefined4 local_140;
  int iStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  FScriptContainerElement *local_130;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *local_128;
  undefined4 local_120;
  int local_11c;
  undefined1 local_118 [16];
  TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
  *local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  TReferenceControllerBase<1> *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  puVar20 = (uchar *)0x0;
  local_118._8_8_ = param_4;
  *param_4 = 0;
  local_180 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_180;
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar27 = pFVar17 + uVar8 * 0x10;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_188 = 0;
  puVar30 = puVar20;
  puVar21 = puVar20;
  local_168 = this;
  local_160 = param_1;
  local_130 = pFVar27;
  local_128 = param_2;
  local_108 = param_3;
  while( true ) {
    pTVar26 = local_128;
    uVar19 = (uint)puVar20;
    local_190 = pFVar17;
    if (local_160->ArrayNum != (int)uVar8) {
      local_197 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_197);
    }
    if (pFVar17 == pFVar27) break;
    pTVar16 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar28 = (uint)puVar30;
    uVar18 = 0;
    if ((int)uVar28 < pTVar26->ArrayNum) {
      uVar18 = ~uVar28 >> 0x1f;
    }
    local_178 = pTVar16;
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar30 = (uchar *)(ulonglong)(uVar28 + 1);
    puVar20 = puVar21 + (longlong)(pTVar26->AllocatorInstance).Data;
    iVar25 = 0;
    local_158 = puVar21 + 0x20;
    puVar21 = puVar20;
    if (*(uchar **)(puVar20 + 0x10) != (uchar *)0x0) {
      puVar21 = *(uchar **)(puVar20 + 0x10);
    }
    uVar8 = 0;
    iVar29 = *(uint *)(puVar20 + 0x18) + 0x1f;
    iVar29 = (int)((iVar29 >> 0x1f & 0x1fU) + iVar29) >> 5;
    uVar18 = *(uint *)(puVar20 + 0x18) & 0x8000001f;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
    }
    uVar28 = 0xffffffff >> ((byte)(0x20 - uVar18) & 0x1f);
    if (0x1f < (int)(0x20 - uVar18)) {
      uVar28 = 0xffffffff;
    }
    uVar18 = 0xffffffff;
    if (iVar29 == 1) {
      uVar18 = uVar28;
    }
    if (0 < iVar29) {
      do {
        uVar19 = *(uint *)(puVar21 + uVar8 * 4) & uVar18;
        if (uVar18 == 0xffffffff) {
          uVar19 = *(uint *)(puVar21 + uVar8 * 4);
        }
        uVar23 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar23;
        uVar11 = (ulonglong)uVar19 - ((ulonglong)(uVar19 >> 1) & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        iVar25 = iVar25 + (uint)(byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
        uVar18 = 0xffffffff;
        if (uVar23 == iVar29 - 1U) {
          uVar18 = uVar28;
        }
        pTVar16 = local_178;
        pFVar17 = local_190;
        pFVar27 = local_130;
        uVar19 = local_188;
      } while ((int)uVar23 < iVar29);
    }
    local_188 = uVar19 + iVar25;
    puVar20 = (uchar *)(ulonglong)local_188;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    pFVar17 = pFVar17 + 0x10;
    uVar8 = (ulonglong)local_180;
    puVar21 = local_158;
  }
  if (uVar19 <= (uint)(local_98._8_4_ - local_64)) goto LAB_1445b2fe4;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar19);
  uVar18 = 1;
  if (3 < uVar19) {
    uVar8 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_120 = (undefined4)lVar14;
    uVar18 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar18 <= (int)local_50)) goto LAB_1445b2fe4;
  local_50 = uVar18;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar18 != 0) {
    uVar19 = uVar18;
    if (uVar18 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar19 = 0;
        goto LAB_1445b2e5f;
      }
    }
    else {
LAB_1445b2e5f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar19,4);
    }
    if (0 < (int)uVar18) {
      uVar11 = (ulonglong)uVar18;
      uVar8 = 0;
      do {
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar9 = uVar8 & (longlong)(int)uVar18 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_148 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_14c = 1;
    local_150 = 0;
    iStack_13c = 0;
    iStack_138 = 0;
    if (local_70 != 0) {
      FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_78;
      }
      uVar19 = *(uint *)FVar24;
      iStack_138 = 0;
      local_150 = 0;
      while (uVar19 == 0) {
        iStack_138 = iStack_138 + 0x20;
        lVar14 = (longlong)local_150;
        local_150 = local_150 + 1;
        if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_150)
        goto LAB_1445b2f5b;
        uVar19 = ((uint *)((longlong)FVar24 + 4))[lVar14];
      }
      uStack_14c = -uVar19 & uVar19;
      uVar8 = (ulonglong)uStack_14c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_11c = (int)lVar14;
      iStack_13c = iStack_138 + -1 + local_11c;
      if (local_70 < iStack_13c) {
LAB_1445b2f5b:
        iStack_13c = local_70;
      }
    }
    local_140 = 0xffffffff;
    local_e8 = (longlong *)local_98;
    local_e0._padding_ = CONCAT44(uStack_14c,local_150);
    local_e0.CurrentBitIndex = iStack_13c;
    local_e0.UnvisitedBitMask = 0xffffffff;
    local_e0._28_4_ = uStack_134;
    local_e0.BaseBitIndex = iStack_138;
    iVar25 = iStack_13c;
    local_e0.Array = pTStack_148;
    if (iStack_13c < local_70) {
      do {
        puVar22 = (uint *)((longlong)iVar25 * 0x1c + *local_e8);
        uVar19 = local_50 - 1 & *puVar22;
        puVar22[6] = uVar19;
        FVar12.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar19;
        puVar22[5] = *(uint *)(FVar12.Data + uVar8 * 4);
        *(int *)(FVar12.Data + uVar8 * 4) = iVar25;
        local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
        iVar25 = local_e0.CurrentBitIndex;
      } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
    }
  }
LAB_1445b2fe4:
  uVar19 = 0;
  lVar14 = 0;
  local_188 = local_160->ArrayNum;
  uVar8 = (ulonglong)(int)local_188;
  pFVar17 = (local_160->AllocatorInstance).Data;
  pFVar27 = pFVar17 + uVar8 * 0x10;
  local_f8 = pFVar27;
  do {
    local_178 = (TReferenceControllerBase<1> *)pFVar17;
    if (local_160->ArrayNum != (int)uVar8) {
      local_196[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_196);
    }
    if (pFVar17 == pFVar27) {
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    local_f0 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    lVar3 = *(longlong *)pFVar17;
    if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar18 = 0;
    if ((int)uVar19 < pTVar26->ArrayNum) {
      uVar18 = ~uVar19 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar19 = uVar19 + 1;
    pFVar17 = (pTVar26->AllocatorInstance).Data + lVar14;
    lVar14 = lVar14 + 0x20;
    uVar18 = 0;
    local_190 = pFVar17;
    local_180 = uVar19;
    local_100 = lVar14;
    if ((lVar3 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar30 = *(uchar **)(lVar3 + 0xd8);
    local_158 = puVar30 + (longlong)*(int *)(lVar3 + 0xe0) * 0x28;
    if (puVar30 != local_158) {
      do {
        if ((((int)uVar18 < 0) || (*(int *)(pFVar17 + 0x18) <= (int)uVar18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar27 = pFVar17;
        if (*(FScriptContainerElement **)(pFVar17 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar27 = *(FScriptContainerElement **)(pFVar17 + 0x10);
        }
        uVar19 = uVar18;
        if ((int)uVar18 < 0) {
          uVar19 = uVar18 + 0x1f;
        }
        if ((*(uint *)(pFVar27 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar18 & 0x1f) & 1) != 0) {
          TSet<FIoHash,DefaultKeyFuncs<FIoHash,0>,FDefaultSetAllocator>::Emplace<FIoHash_const_&>
                    ((TSet<FIoHash,DefaultKeyFuncs<FIoHash,0>,FDefaultSetAllocator> *)local_98,
                     (FIoHash *)local_118,(bool *)puVar30);
          uVar8 = (ulonglong)(*(int *)((THash<96> *)(puVar30 + 0x18))->Hash + 0xf) & 0xfffffff0;
          this_01 = &(local_168->Cas).Mutex;
          *(ulong64 *)local_118._8_8_ = *(ulong64 *)local_118._8_8_ + uVar8;
          uVar19 = *(uint *)puVar30;
          LOCK();
          bVar7 = this_01->State == (atomic<unsigned_char>)0x0;
          if (bVar7) {
            this_01->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar7) {
            FMutex::LockSlow(this_01);
          }
          pFVar10 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                    ::FindByHash<UE::THash<96>_>
                              ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                                *)&(local_168->Cas).Lookup,uVar19,(THash<96> *)puVar30);
          if (pFVar10 == (FCasLocation *)0x0) {
            LOCK();
            aVar1 = this_01->State;
            this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
            UNLOCK();
            if (((byte)aVar1 & 2) != 0) {
              FMutex::WakeWaitingThread(this_01);
            }
            local_170.BlockId.Id = 0;
            local_170.BlockOffset = 0xffffffff;
          }
          else {
            FVar4 = *pFVar10;
            LOCK();
            aVar1 = this_01->State;
            this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
            UNLOCK();
            local_170 = FVar4;
            if (((byte)aVar1 & 2) != 0) {
              FMutex::WakeWaitingThread(this_01);
            }
            if ((FVar4.BlockId.Id.Id != 0) && (FVar4.BlockOffset != 0xffffffff)) {
              pFVar17 = local_190;
              if (*(int *)&local_108->field_0x8 != *(int *)&local_108->field_0x34) {
                puVar15 = &local_108->field_0x38;
                if (*(undefined1 **)&local_108->field_0x40 != (undefined1 *)0x0) {
                  puVar15 = *(undefined1 **)&local_108->field_0x40;
                }
                iVar25 = *(int *)(puVar15 +
                                 (ulonglong)
                                 (*(int *)&local_108->field_0x48 - 1U & local_170.BlockId.Id) * 4);
                if (iVar25 != -1) {
                  do {
                    lVar14 = *(longlong *)local_108 + (longlong)iVar25 * 0x28;
                    if (*(uint *)(*(longlong *)local_108 + (longlong)iVar25 * 0x28) ==
                        local_170.BlockId.Id) {
                      lVar13 = lVar14 + 8;
                      if (lVar14 == 0) {
                        lVar13 = 0;
                      }
                      if (lVar13 != 0) {
                        *(longlong *)(lVar13 + 0x10) = *(longlong *)(lVar13 + 0x10) + uVar8;
                        goto LAB_1445b35aa;
                      }
                      break;
                    }
                    iVar25 = *(int *)(lVar14 + 0x20);
                  } while (iVar25 != -1);
                }
              }
              if (1 < (byte)LogIoStoreOnDemand._0_1_) {
                if ((lVar3 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((lVar3 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar19 = 0;
                if ((int)uVar18 < *(int *)(lVar3 + 0xd0)) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                ::LexToString(&local_c0,
                              (FIoChunkId *)
                              (*(longlong *)(lVar3 + 200) + (longlong)(int)uVar18 * 0xc));
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
                pFVar17 = local_190;
                if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                  pFVar17 = local_190;
                }
              }
              goto LAB_1445b35aa;
            }
          }
          pFVar6 = local_168;
          aVar2 = (local_168->PendingChunks).SharedMutex.State;
          this_00 = &(local_168->PendingChunks).SharedMutex;
          if (((uint)aVar2 & 3) == 0) {
            LOCK();
            bVar7 = aVar2 == this_00->State;
            if (bVar7) {
              this_00->State = (atomic<unsigned_int>)((int)aVar2 + 8);
            }
            UNLOCK();
            if (!bVar7) goto LAB_1445b33ee;
          }
          else {
LAB_1445b33ee:
            FSharedMutex::LockSharedSlow(this_00);
          }
          pFVar27 = (pFVar6->PendingChunks).ChunkHashes.AllocatorInstance.Data;
          pFVar17 = pFVar27 + (longlong)(pFVar6->PendingChunks).ChunkHashes.ArrayNum * 0x14;
          for (; pFVar27 != pFVar17; pFVar27 = pFVar27 + 0x14) {
            if (((*(longlong *)pFVar27 == *(longlong *)puVar30) &&
                (*(longlong *)(pFVar27 + 8) == *(longlong *)(puVar30 + 8))) &&
               (*(int *)(pFVar27 + 0x10) == *(int *)(puVar30 + 0x10))) {
              bVar7 = true;
              goto LAB_1445b3437;
            }
          }
          bVar7 = false;
LAB_1445b3437:
          LOCK();
          aVar2 = this_00->State;
          this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
          UNLOCK();
          if (((uint)aVar2 & 0xfffffffb) == 10) {
            FSharedMutex::WakeWaitingThread(this_00);
          }
          pFVar17 = local_190;
          if ((byte)LogIoStoreOnDemand._0_1_ < 2) {
            if (!bVar7) goto LAB_1445b3578;
          }
          else if (!bVar7) {
            if ((lVar3 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((lVar3 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar19 = 0;
            if ((int)uVar18 < *(int *)(lVar3 + 0xd0)) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::LexToString(&local_b0,
                          (FIoChunkId *)(*(longlong *)(lVar3 + 200) + (longlong)(int)uVar18 * 0xc));
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
LAB_1445b3578:
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4406625557953901709>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                               ,0xb73,"bChunkIsPending");
            pFVar17 = local_190;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
LAB_1445b35aa:
        puVar30 = puVar30 + 0x28;
        uVar18 = uVar18 + 1;
        lVar14 = local_100;
        pFVar27 = local_f8;
        uVar19 = local_180;
      } while (puVar30 != local_158);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    uVar8 = (ulonglong)local_188;
    pFVar17 = (FScriptContainerElement *)((longlong)local_178 + 0x10);
    pTVar26 = local_128;
  } while( true );
}

// CancelIoRequest @ 1445b67a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::CancelIoRequest
          (FOnDemandInstallCache *this,FIoRequestImpl *param_1)

{
  atomic<unsigned_char> aVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FMutex *this_00;
  
  if ((param_1 == (FIoRequestImpl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                         ,0x7ed,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this->Mutex;
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FMutex::LockSlow(this_00);
  }
  if (((param_1->BackendData != (void *)0x0) &&
      (plVar2 = *(longlong **)((longlong)param_1->BackendData + 0x10), plVar2 != (longlong *)0x0))
     && (*(char *)((longlong)plVar2 + 0x43) == '\0')) {
    *(undefined1 *)((longlong)plVar2 + 0x43) = 1;
    *(undefined1 *)(plVar2 + 8) = 1;
    if (*(char *)((longlong)plVar2 + 0x41) == '\0') {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// CompleteRequest @ 1445bc1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::CompleteRequest
          (FOnDemandInstallCache *this,FIoRequestImpl *param_1,EIoErrorCode param_2)

{
  int *piVar1;
  FMutex *this_00;
  int iVar2;
  void *pvVar3;
  BufCore *pBVar4;
  BufCore *pBVar5;
  FIoDispatcherBackendContext *this_01;
  code *pcVar6;
  byte bVar7;
  atomic<unsigned_char> aVar8;
  bool bVar9;
  FName FVar10;
  TArrayView<unsigned_int_const_,int> *pTVar11;
  FIoBuffer *pFVar12;
  longlong *plVar13;
  TMemoryView<void_const_> local_108;
  FIoChunkDecodingParams local_f8;
  TMemoryView<void> local_98;
  FIoBuffer local_88;
  FString local_80;
  FReadAccessScope local_70;
  TArrayView<unsigned_int_const_,int> local_58;
  TArrayView<unsigned_int_const_,int> local_48;
  
  plVar13 = (longlong *)0x0;
  if (param_2 == Ok) {
    if (param_1->LastBackendError != Cancelled) {
      if ((param_1->BackendData == (void *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Request.BackendData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                             ,0x670,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar3 = param_1->BackendData;
      pBVar4 = *(BufCore **)((longlong)pvVar3 + 0x48);
      *(undefined8 *)((longlong)pvVar3 + 0x48) = 0;
      if (pBVar4->DataSizeHigh != '\0' || pBVar4->DataSizeLow != 0) {
        ::FName::FName((FName *)&local_f8,L"Oodle");
        local_f8._padding_ = 0;
        local_f8._padding_ = 0;
        local_f8._padding_._0_4_ = 0x10000;
        local_f8.TotalRawSize = 0;
        local_f8.RawOffset = 0;
        local_f8.EncodedOffset = 0;
        local_f8.EncodedBlockSize.DataPtr = (uint *)0x0;
        local_f8.EncodedBlockSize._8_8_ = local_f8.EncodedBlockSize._8_8_ & 0xffffffff00000000;
        local_f8.BlockHash.DataPtr = (uint *)0x0;
        local_f8.BlockHash._8_8_ = local_f8.BlockHash._8_8_ & 0xffffffff00000000;
        FVar10 = FOnDemandChunkInfo::CompressionFormat
                           ((FOnDemandChunkInfo *)((longlong)pvVar3 + 0x20));
        local_f8._padding_ = *(longlong *)FVar10;
        if ((*(longlong *)((longlong)pvVar3 + 0x20) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_f8._padding_ = *(longlong *)((longlong)pvVar3 + 0x20);
        local_f8._padding_ = 0x20;
        local_f8._padding_._0_4_ =
             FOnDemandChunkInfo::BlockSize((FOnDemandChunkInfo *)((longlong)pvVar3 + 0x20));
        local_f8.TotalRawSize = (ulong64)*(uint *)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x14);
        local_f8.RawOffset = (param_1->Options).RequestedOffset;
        local_f8.EncodedOffset =
             (ulong64)CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)pvVar3 + 0x38),
                                                          *(undefined1 *)((longlong)pvVar3 + 0x39)),
                                                 *(undefined1 *)((longlong)pvVar3 + 0x3a)),
                                        *(undefined1 *)((longlong)pvVar3 + 0x3b)),
                               *(undefined1 *)((longlong)pvVar3 + 0x3c));
        pTVar11 = FOnDemandChunkInfo::Blocks
                            ((FOnDemandChunkInfo *)((longlong)pvVar3 + 0x20),&local_58);
        local_f8.EncodedBlockSize.DataPtr = pTVar11->DataPtr;
        local_f8.EncodedBlockSize._8_8_ = *(undefined8 *)&pTVar11->ArrayNum;
        pTVar11 = FOnDemandChunkInfo::BlockHashes
                            ((FOnDemandChunkInfo *)((longlong)pvVar3 + 0x20),&local_48);
        local_f8.BlockHash.DataPtr = pTVar11->DataPtr;
        local_f8.BlockHash._8_8_ = *(undefined8 *)&pTVar11->ArrayNum;
        FIoRequestImpl::CreateBuffer(param_1,*(ulong64 *)((longlong)pvVar3 + 0x50));
        if (((param_1->Buffer).bIsSet == false) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pBVar5 = (param_1->Buffer).TypedValue.CorePtr.Reference;
        local_108.Data = pBVar4->DataPtr;
        local_108.Size = (ulong64)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow);
        local_98.Data = pBVar5->DataPtr;
        local_98.Size = (ulong64)CONCAT14(pBVar5->DataSizeHigh,pBVar5->DataSizeLow);
        bVar9 = FIoChunkEncoding::Decode(&local_f8,&local_108,&local_98,None);
        if (!bVar9) {
          if (1 < (byte)LogIoStoreOnDemand._0_1_) {
            ::LexToString(&local_80,&param_1->ChunkId);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
          }
          param_2 = CompressionError;
        }
      }
      if (pBVar4 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(pBVar4);
        LOCK();
        piVar1 = &pBVar4->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(pBVar4);
          ::operator_delete(pBVar4,0x20);
        }
      }
      if (param_2 != Ok) goto LAB_1445bc4c7;
    }
    if (((param_1->Buffer).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pBVar4 = (param_1->Buffer).TypedValue.CorePtr.Reference;
    FIoStoreTrace::RequestCompleted
              (param_1,(ulonglong)CONCAT14(pBVar4->DataSizeHigh,pBVar4->DataSizeLow));
  }
  else {
LAB_1445bc4c7:
    if (param_1->LastBackendError != Cancelled) {
      param_1->LastBackendError = param_2;
    }
    pFVar12 = FIoBuffer::FIoBuffer(&local_88);
    if (((param_1->Buffer).bIsSet != false) &&
       (pBVar4 = (param_1->Buffer).TypedValue.CorePtr.Reference, pBVar4 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(pBVar4);
      LOCK();
      piVar1 = &pBVar4->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar4);
        ::operator_delete(pBVar4,0x20);
      }
    }
    (param_1->Buffer).TypedValue.CorePtr.Reference = (BufCore *)0x0;
    pBVar4 = (pFVar12->CorePtr).Reference;
    (param_1->Buffer).TypedValue.CorePtr.Reference = pBVar4;
    if (pBVar4 != (BufCore *)0x0) {
      LOCK();
      pBVar4->NumRefs = pBVar4->NumRefs + 1;
      UNLOCK();
    }
    (param_1->Buffer).bIsSet = true;
    pBVar4 = (pFVar12->CorePtr).Reference;
    if (pBVar4 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(pBVar4);
      LOCK();
      piVar1 = &pBVar4->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar4);
        ::operator_delete(pBVar4,0x20);
      }
    }
    FIoStoreTrace::RequestFailed(param_1);
  }
  this_00 = &this->Mutex;
  LOCK();
  bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    FMutex::LockSlow(this_00);
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail(&this->CompletedRequests,param_1);
  if (param_2 != Cancelled) {
    LOCK();
    bVar9 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar9) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar9) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if (param_2 != Ok) {
      InstallCacheAnalytics.ReadErrorCount = InstallCacheAnalytics.ReadErrorCount + 1;
    }
    InstallCacheAnalytics.ReadCount = InstallCacheAnalytics.ReadCount + 1;
    LOCK();
    aVar8 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar7 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar8;
    if (bVar7 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
  }
  LOCK();
  aVar8 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar8 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (this->BackendContext).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_70);
  if (*(int *)&(this_01->WakeUpDispatcherThreadDelegate).field_0x10 != 0) {
    plVar13 = *(longlong **)&(this_01->WakeUpDispatcherThreadDelegate).field_0x8;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  return;
}

// Defrag @ 1445c3200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445c3a26) */
/* WARNING: Removing unreachable block (ram,0x0001445c3887) */
/* WARNING: Removing unreachable block (ram,0x0001445c431e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::Defrag
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
          *param_3,ulong64 *param_4,ulong64 *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  IErrorDetails *pIVar4;
  IErrorDetails IVar5;
  long64 lVar6;
  code *pcVar7;
  ulong64 *puVar8;
  FIoBuffer FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  DWORD DVar20;
  int iVar21;
  int iVar22;
  ulong64 uVar23;
  FIoStatus *pFVar24;
  FError *pFVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  longlong lVar27;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar28;
  longlong lVar29;
  FDefragBlockReferencedChunk *pFVar30;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar31;
  FDynamicErrorDetails *this_00;
  FBlake3Hash *pFVar32;
  TOptional<UE::UnifiedError::FError> *pTVar33;
  FDateTime FVar34;
  FEntry *pFVar35;
  longlong lVar36;
  FScriptContainerElement *pFVar37;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar38;
  uint uVar39;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar40;
  ForAnyElementType FVar41;
  uint uVar42;
  FDefragBlock *pFVar43;
  ForAnyElementType FVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  ulonglong uVar47;
  void *pvVar48;
  FScriptContainerElement *pFVar49;
  FOnDemandInstallCache *pFVar50;
  ulonglong uVar51;
  FIoHash *pFVar52;
  undefined1 auStackY_988 [32];
  TOptional<UE::UnifiedError::FError> local_938;
  ForAnyElementType local_920;
  undefined8 local_918;
  <lambda_2> local_910 [8];
  TOptional<UE::UnifiedError::FError> local_908;
  FError *local_8f0;
  undefined1 local_8e8;
  undefined1 local_8e7;
  undefined1 local_8e6;
  undefined1 local_8e5;
  undefined1 local_8e4;
  EDetailFilter local_8e3 [3];
  EDetailFilter local_8e0 [8];
  TLess<void> local_8d8 [4];
  uint local_8d4;
  FIoBuffer local_8d0;
  FPendingChunks local_8c8;
  FScriptContainerElement *local_898;
  ulong64 local_890;
  ulong64 local_888;
  uint local_880;
  FOnDemandInstallCache *local_878;
  FError local_870;
  FScriptContainerElement *local_860;
  FSharedReferencer<1> local_858;
  FScriptContainerElement *local_850;
  uint local_848;
  FDefragBlock *local_840;
  FError local_838;
  FTransaction local_828;
  undefined1 local_808 [8];
  FCriticalError local_800;
  FScriptContainerElement *local_7f8;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> local_7f0;
  ulong64 **local_7e8;
  TOptional<UE::UnifiedError::FError> *local_7e0;
  ulong64 *local_7d8;
  FError local_7d0;
  void *local_7c0;
  TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> local_7b8;
  undefined1 local_7a8 [28];
  int iStack_78c;
  FDefragBlock local_788;
  FDefragBlock local_768;
  undefined1 local_748 [28];
  int iStack_72c;
  undefined1 local_728 [12];
  uint uStack_71c;
  TBitArray<FDefaultBitArrayAllocator> *local_718;
  undefined8 uStack_710;
  longlong local_708;
  int iStack_700;
  undefined4 uStack_6fc;
  undefined1 local_6f8 [12];
  uint uStack_6ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_6e8;
  undefined8 uStack_6e0;
  longlong lStack_6d8;
  int local_6d0;
  undefined4 uStack_6cc;
  uint local_6c8;
  uint local_6c4;
  uint local_6c0 [2];
  FString local_6b8;
  undefined1 local_6a8 [8];
  FString local_6a0;
  FDefragBlock *local_690;
  FScriptContainerElement *local_688;
  ulong64 local_680;
  undefined4 local_678;
  uint uStack_674;
  undefined8 uStack_670;
  undefined1 local_668;
  undefined4 uStack_667;
  undefined2 uStack_663;
  undefined1 uStack_661;
  FString local_660;
  FString local_650;
  FError local_640;
  FError local_630;
  FString local_620;
  FError local_610;
  FTransaction local_600;
  undefined1 local_5e0 [16];
  FDynamicErrorDetails *local_5d0;
  FString local_5c8;
  FError local_5b8;
  undefined1 local_5a8;
  undefined4 local_5a0;
  FCasBlockId FStack_59c;
  uint uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  TValueOrError<void,UE::UnifiedError::FError> local_588;
  FTransaction local_570;
  void *local_548;
  ulonglong uStack_540;
  longlong local_538;
  longlong lStack_530;
  int local_528;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_520;
  undefined1 local_500 [24];
  int iStack_4e8;
  undefined4 uStack_4e4;
  undefined1 local_4e0 [4];
  undefined1 local_4dc [4];
  undefined1 local_4d8 [4];
  undefined1 local_4d4 [4];
  undefined1 local_4d0 [4];
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
  ulong64 local_4c0;
  FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>
  local_4b8;
  FScriptContainerElement *local_4b0;
  undefined1 local_4a8 [8];
  FString local_4a0;
  undefined8 local_490;
  FSharedReferencer<1> local_488;
  FPendingChunks *local_480;
  undefined8 local_478;
  longlong local_470;
  FIoHash *local_468;
  undefined1 local_460 [8];
  FCasErrorContext local_458;
  FPendingChunks *local_438;
  ulong64 local_430;
  ulong64 local_428;
  TStringView<wchar_t> local_420;
  TStringView<wchar_t> local_410;
  TOptional<UE::UnifiedError::FError> local_400;
  TOptional<UE::UnifiedError::FError> local_3e8;
  TOptional<UE::UnifiedError::FError> local_3d0;
  TOptional<UE::UnifiedError::FError> local_3b8;
  TOptional<UE::UnifiedError::FError> local_3a0;
  TOptional<UE::UnifiedError::FError> local_388;
  TOptional<UE::UnifiedError::FError> local_370;
  TOptional<UE::UnifiedError::FError> local_358;
  TOptional<UE::UnifiedError::FError> local_340;
  TOptional<UE::UnifiedError::FError> local_328;
  FChunkHashMismatchErrorContext local_310;
  FIoStatus local_2d8;
  TMemoryView<void_const_> local_2c8 [2];
  FString local_2a8;
  FIoStatus local_290;
  TRangedForIterator local_280;
  TRangedForIterator local_250;
  TOptional<UE::UnifiedError::FError> local_220;
  TOptional<UE::UnifiedError::FError> local_208;
  FInstallCacheErrorContext local_1f0;
  FInstallCacheErrorContext local_1b8;
  FInstallCacheErrorContext local_180;
  FInstallCacheErrorContext local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_110;
  undefined8 local_e0 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
  local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  uint uStack_74;
  FBlake3Hash local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_988;
  if ((param_4 != (ulong64 *)0x0) && (*param_4 == 0)) {
    (__return_storage_ptr__->Error).bIsSet = false;
    return __return_storage_ptr__;
  }
  local_7e8 = &param_5;
  local_7e0 = &local_938;
  local_7d8 = &local_890;
  local_938.bIsSet = false;
  local_890 = 0;
  local_8f0 = (FError *)__return_storage_ptr__;
  local_878 = this;
  local_800 = (FCriticalError)param_1;
  local_5e0._8_8_ = param_2;
  uVar23 = Algo::
           TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_2>,TPlus<void>_>
                     (param_3,local_910[0],0,(TPlus<void>)local_910[0]);
  local_680 = uVar23;
  if (this->MaxCacheSize < uVar23) {
    ::FString::PrintfImpl
              (&local_5c8,
               L"Cache size is greater than disk quota - Cannot Defragment!, MaxCacheSize=%.2lf MiB"
              );
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    MakeInstallCacheErrorContext(this,&local_1f0,uVar23,0xbda);
    local_420.DataPtr = (wchar_t *)local_5c8.Data.AllocatorInstance.Data;
    local_420.Size = local_5c8.Data.ArrayNum + -1;
    if (local_5c8.Data.ArrayNum == 0) {
      local_420.Size = 0;
    }
    pFVar24 = FIoStatus::FIoStatus(&local_290,OutOfDiskSpace,&local_420);
    FIoStatus::operator=(&local_1f0.IoError,pFVar24);
    pFVar25 = UnifiedError::IoStoreOnDemand::InstallCacheDefragError::
              MakeError<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                        (&local_640,&local_1f0,All);
    UnifiedError::FError::FError(&local_358.TypedValue,pFVar25);
    local_358.bIsSet = true;
    TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_358);
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_358);
    TVar38.Reference = local_640.ErrorDetails.Reference;
    local_640.ErrorCode = 0;
    local_640.ModuleId = 0;
    if (local_640.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_640.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar38.Reference + 0x10))();
      if (local_640.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_640.ErrorDetails.Reference + 0x10))();
      }
    }
    FIoStatus::~FIoStatus(&local_290);
    ::operator/(&local_4a0,&this->CacheDirectory,L"cas.jrn");
    local_570.JournalFile.Data.AllocatorInstance.Data = local_4a0.Data.AllocatorInstance.Data;
    local_570.JournalFile.Data.ArrayNum = local_4a0.Data.ArrayNum;
    local_570.JournalFile.Data.ArrayMax = local_4a0.Data.ArrayMax;
    local_570.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_570.Entries.ArrayNum = 0;
    local_570.Entries.ArrayMax = 0;
    FCasJournal::FTransaction::CriticalError(&local_570,DefragOutOfDiskSpace);
    local_4c0 = 0;
    local_6c8 = 0;
    FCasJournal::Commit((TValueOrError<void,UE::UnifiedError::FError> *)&local_340,&local_570,
                        &local_4c0,&local_6c8);
    if ((local_340.bIsSet != false) && (1 < (byte)LogIoStoreOnDemand._0_1_)) {
      pFVar25 = TOptional<UE::UnifiedError::FError>::GetValue(&local_340);
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,pFVar25);
    }
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_340);
    pFVar25 = local_8f0;
    *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
    if (local_938.bIsSet != false) {
      UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
    }
    if (local_570.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Entries.AllocatorInstance.Data);
    }
    if (local_570.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.JournalFile.Data.AllocatorInstance.Data);
    }
    FIoStatus::~FIoStatus(&local_1f0.IoError);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
    `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
    TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
    if (local_938.bIsSet == false) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue.ErrorCode = 0;
    local_938.TypedValue.ModuleId = 0;
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar38.Reference + 0x10))();
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
    return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
  }
  local_4b8.Predicate.Predicate =
       (TDereferenceWrapper<UE::IoStore::FCasBlockInfo,_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::<lambda_3>_>
        )local_8d8;
  local_920.Data = (FScriptContainerElement *)0x0;
  local_918 = 0;
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::<lambda_3>_>_>
            ((TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
              *)param_3,&local_4b8);
  local_888 = 0;
  puVar1 = &param_3->field_0x10;
  if (param_4 != (ulong64 *)0x0) {
    uVar47 = 0;
    local_520._padding_._4_4_ = 1;
    bVar16 = false;
    local_520._padding_._0_4_ = 0;
    local_520.UnvisitedBitMask = 0xffffffff;
    local_520.CurrentBitIndex = 0;
    local_520.BaseBitIndex = 0;
    local_520.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&param_3->field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_520);
    }
    unique0x100021ca = CONCAT44(local_520._padding_._4_4_,(undefined4)local_520._padding_);
    uStack_710 = CONCAT44(local_520.CurrentBitIndex,local_520.UnvisitedBitMask);
    local_708 = CONCAT44(local_520._28_4_,local_520.BaseBitIndex);
    local_6d0 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
    pTStack_6e8 = local_520.Array;
    local_6f8._0_8_ = param_3;
    local_728._0_8_ = param_3;
    local_718 = local_520.Array;
    iStack_700 = local_6d0;
    uStack_6fc = uStack_6cc;
    unique0x10004988 = unique0x100021ca;
    uStack_6e0 = uStack_710;
    lStack_6d8 = local_708;
    pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_d0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&param_3->field_0x28);
    local_6f8._0_8_ = param_3;
    unique0x10001e8e = pTVar26->_padding_;
    pTStack_6e8 = pTVar26->Array;
    uStack_6e0._0_4_ = pTVar26->UnvisitedBitMask;
    uStack_6e0._4_4_ = pTVar26->CurrentBitIndex;
    lStack_6d8 = *(longlong *)&pTVar26->BaseBitIndex;
    local_280.InitialNum = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
    local_6d0 = local_280.InitialNum;
    local_280._padding_ = (longlong)param_3;
    local_280._44_4_ = uStack_6cc;
    local_280._padding_ = unique0x10001e8e;
    local_280._padding_ = (longlong)pTStack_6e8;
    local_280._padding_ = uStack_6e0;
    local_280._padding_ = lStack_6d8;
    bVar15 = TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_728,&local_280);
    uVar51 = uVar47;
    if (bVar15) {
      do {
        lVar27 = (longlong)uStack_710._4_4_;
        lVar29 = *(longlong *)local_728._0_8_;
        uVar42 = *(uint *)(lVar29 + lVar27 * 0x28);
        lVar36 = lVar29 + lVar27 * 0x28;
        if (bVar16) {
LAB_1445c38ad:
          uVar3 = *(ulonglong *)(lVar29 + 8 + lVar27 * 0x28);
          if (uVar3 < 0x1000000) {
            if (uVar3 < *(ulonglong *)(lVar36 + 0x18)) {
              bVar15 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4406625557953901533>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                  ,0xc23,"Info.RefSize <= Info.FileSize");
              if (bVar15) {
                pcVar7 = (code *)swi(3);
                pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
                return pTVar28;
              }
            }
            else {
              local_890 = local_890 + (uVar3 - *(ulonglong *)(lVar36 + 0x18));
            }
            local_888 = local_888 + *(longlong *)(lVar29 + 8 + lVar27 * 0x28);
            local_788.LastAccess = *(long64 *)(lVar29 + 0x10 + lVar27 * 0x28);
            local_788.ReferencedChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_788.ReferencedChunks.ArrayNum = 0;
            local_788.ReferencedChunks.ArrayMax = 0;
            local_788.BlockId.Id = uVar42;
            if (((local_920.Data <= &local_788) &&
                (&local_788 < (FDefragBlock *)(local_920.Data + (longlong)local_918._4_4_ * 0x20)))
               && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar15)) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
            iVar18 = (uint)local_918;
            if ((uint)local_918 == local_918._4_4_) {
              iVar18 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_920,(int *)((longlong)&local_918 + 4));
            }
            local_918 = CONCAT44(local_918._4_4_,iVar18 + 1);
            lVar36 = (longlong)iVar18 * 0x20;
            *(uint *)&local_920.Data[lVar36].field_0x0 = local_788.BlockId.Id;
            *(undefined8 *)(local_920.Data + lVar36 + 0x10) = 0;
            *(long64 *)(local_920.Data + lVar36 + 8) = local_788.LastAccess;
            *(FScriptContainerElement **)(local_920.Data + lVar36 + 0x10) =
                 local_788.ReferencedChunks.AllocatorInstance.Data;
            local_788.ReferencedChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(local_920.Data + lVar36 + 0x18) = local_788.ReferencedChunks.ArrayNum;
            *(int *)(local_920.Data + lVar36 + 0x1c) = local_788.ReferencedChunks.ArrayMax;
            local_788.ReferencedChunks.ArrayNum = 0;
            local_788.ReferencedChunks.ArrayMax = 0;
          }
        }
        else {
          uVar3 = *(ulonglong *)(lVar29 + 8 + lVar27 * 0x28);
          if (uVar3 <= *(ulonglong *)(lVar36 + 0x18)) goto LAB_1445c38ad;
          local_890 = local_890 + (uVar3 - *(ulonglong *)(lVar36 + 0x18));
          local_888 = local_888 + *(longlong *)(lVar29 + 8 + lVar27 * 0x28);
          local_768.LastAccess = *(long64 *)(lVar29 + 0x10 + lVar27 * 0x28);
          uVar47 = uVar47 + *(longlong *)(lVar29 + 8 + lVar27 * 0x28);
          uVar51 = uVar51 + *(longlong *)(lVar36 + 0x18);
          local_768.ReferencedChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_768.ReferencedChunks.ArrayNum = 0;
          local_768.ReferencedChunks.ArrayMax = 0;
          local_768.BlockId.Id = uVar42;
          if (((local_920.Data <= &local_768) &&
              (&local_768 < (FDefragBlock *)(local_920.Data + (longlong)local_918._4_4_ * 0x20))) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
          iVar18 = (uint)local_918;
          if ((uint)local_918 == local_918._4_4_) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&local_920,(int *)((longlong)&local_918 + 4));
          }
          local_918 = CONCAT44(local_918._4_4_,iVar18 + 1);
          lVar36 = (longlong)iVar18 * 0x20;
          *(uint *)&local_920.Data[lVar36].field_0x0 = local_768.BlockId.Id;
          *(undefined8 *)(local_920.Data + lVar36 + 0x10) = 0;
          *(long64 *)(local_920.Data + lVar36 + 8) = local_768.LastAccess;
          *(FScriptContainerElement **)(local_920.Data + lVar36 + 0x10) =
               local_768.ReferencedChunks.AllocatorInstance.Data;
          *(int *)(local_920.Data + lVar36 + 0x18) = local_768.ReferencedChunks.ArrayNum;
          *(int *)(local_920.Data + lVar36 + 0x1c) = local_768.ReferencedChunks.ArrayMax;
          local_768.ReferencedChunks.ArrayNum = 0;
          local_768.ReferencedChunks.ArrayMax = 0;
          local_768.ReferencedChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if ((uVar51 <= uVar47) && (*param_4 <= uVar47 - uVar51)) {
            bVar16 = true;
          }
        }
        uStack_710 = CONCAT44(uStack_710._4_4_,(uint)uStack_710 & ~uStack_71c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_728 + 8));
        bVar15 = TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_728,&local_280);
      } while (bVar15);
      uVar23 = local_680;
      param_1 = (TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *
                )local_800;
      this = local_878;
      param_2 = (TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *)
                local_5e0._8_8_;
      if (bVar16) goto LAB_1445c3a89;
    }
    ::FString::FString(&local_620,
                       L"Failed to defrag the install cache due to all data being referenced by the game"
                      );
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    MakeInstallCacheErrorContext(local_878,&local_1b8,uVar23,0xc32);
    local_410.DataPtr = (wchar_t *)local_620.Data.AllocatorInstance.Data;
    local_410.Size = local_620.Data.ArrayNum + -1;
    if (local_620.Data.ArrayNum == 0) {
      local_410.Size = 0;
    }
    pFVar24 = FIoStatus::FIoStatus(&local_2d8,OutOfDiskSpace,&local_410);
    FIoStatus::operator=(&local_1b8.IoError,pFVar24);
    FIoStatus::~FIoStatus(&local_2d8);
    pFVar25 = UnifiedError::IoStoreOnDemand::InstallCacheDefragError::
              MakeError<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                        (&local_630,&local_1b8,All);
    UnifiedError::FError::FError(&local_328.TypedValue,pFVar25);
    local_328.bIsSet = true;
    TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_328);
    pFVar25 = local_8f0;
    TValueOrError<void,UE::UnifiedError::FError>::TValueOrError<void,UE::UnifiedError::FError>
              ((TValueOrError<void,UE::UnifiedError::FError> *)local_8f0,
               (TValueOrError<void,UE::UnifiedError::FError> *)&local_938);
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_328);
    TVar38.Reference = local_630.ErrorDetails.Reference;
    local_630.ErrorCode = 0;
    local_630.ModuleId = 0;
    if (local_630.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_630.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar38.Reference + 0x10))();
      if (local_630.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_630.ErrorDetails.Reference + 0x10))();
      }
    }
    FIoStatus::~FIoStatus(&local_1b8.IoError);
    if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_620.Data.AllocatorInstance.Data);
    }
    DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
              ((FDefragBlock *)local_920.Data,(uint)local_918);
    if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
      FMemory::Free(local_920.Data);
    }
    `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
    TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
    if (local_938.bIsSet == false) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue.ErrorCode = 0;
    local_938.TypedValue.ModuleId = 0;
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar38.Reference + 0x10))();
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
    return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
  }
  local_500._0_4_ = 0;
  local_500._4_4_ = 1;
  local_500._16_4_ = 0xffffffff;
  local_500._8_8_ = puVar1;
  puVar8 = param_4;
  if (*(int *)&param_3->field_0x28 != 0) {
    unique0x10004ae0 = param_4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_500);
    puVar8 = stack0xfffffffffffffb14;
  }
  iStack_4e8 = (int)((ulonglong)puVar8 >> 0x20);
  local_500._20_4_ = SUB84(puVar8,0);
  unique0x100021ea = CONCAT44(local_500._4_4_,local_500._0_4_);
  uStack_710 = CONCAT44(local_500._20_4_,local_500._16_4_);
  local_708 = CONCAT44(uStack_4e4,iStack_4e8);
  iStack_700 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  local_718 = (TBitArray<FDefaultBitArrayAllocator> *)local_500._8_8_;
  local_728._0_8_ = param_3;
  local_6f8._0_8_ = param_3;
  pTStack_6e8 = (TBitArray<FDefaultBitArrayAllocator> *)local_500._8_8_;
  local_6d0 = iStack_700;
  uStack_6cc = uStack_6fc;
  unique0x10004980 = unique0x100021ea;
  uStack_6e0 = uStack_710;
  lStack_6d8 = local_708;
  unique0x10004ad8 = puVar8;
  pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_110,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&param_3->field_0x28);
  local_728._0_8_ = param_3;
  unique0x10001fce = pTVar26->_padding_;
  local_718 = pTVar26->Array;
  uStack_710._0_4_ = pTVar26->UnvisitedBitMask;
  uStack_710._4_4_ = pTVar26->CurrentBitIndex;
  local_708 = *(longlong *)&pTVar26->BaseBitIndex;
  local_250.InitialNum = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  iStack_700 = local_250.InitialNum;
  local_250._padding_ = (longlong)param_3;
  local_250._44_4_ = uStack_6fc;
  local_250._padding_ = unique0x10001fce;
  local_250._padding_ = (longlong)local_718;
  local_250._padding_ = uStack_710;
  local_250._padding_ = local_708;
  bVar16 = TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_6f8,&local_250);
  if (bVar16) {
    do {
      lVar29 = (longlong)uStack_6e0._4_4_;
      lVar36 = *(longlong *)local_6f8._0_8_;
      uVar47 = *(ulonglong *)(lVar36 + 8 + lVar29 * 0x28);
      uVar51 = *(ulonglong *)(lVar36 + 0x18 + lVar29 * 0x28);
      uVar42 = *(uint *)(lVar36 + lVar29 * 0x28);
      if (uVar51 < uVar47) {
        local_890 = local_890 + (uVar47 - uVar51);
        local_888 = local_888 + *(longlong *)(lVar36 + 8 + lVar29 * 0x28);
        local_7a8._8_8_ = *(long64 *)(lVar36 + 0x10 + lVar29 * 0x28);
        local_7a8._16_8_ = param_4;
        stack0xfffffffffffff870 = param_4;
        local_7a8._0_4_ = uVar42;
        if ((local_920.Data <= (FDefragBlock *)local_7a8) &&
           ((FScriptContainerElement *)local_7a8 < local_920.Data + (longlong)local_918._4_4_ * 0x20
           )) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        iVar18 = (uint)local_918;
        if ((uint)local_918 == local_918._4_4_) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_920,(int *)((longlong)&local_918 + 4));
        }
        local_918 = CONCAT44(local_918._4_4_,iVar18 + 1);
        lVar36 = (longlong)iVar18 * 0x20;
        *(undefined4 *)&local_920.Data[lVar36].field_0x0 = local_7a8._0_4_;
        *(undefined8 *)(local_920.Data + lVar36 + 0x10) = 0;
        *(undefined8 *)(local_920.Data + lVar36 + 8) = local_7a8._8_8_;
        *(undefined8 *)(local_920.Data + lVar36 + 0x10) = local_7a8._16_8_;
        local_7a8._16_8_ = param_4;
        *(undefined4 *)(local_920.Data + lVar36 + 0x18) = local_7a8._24_4_;
        *(int *)(local_920.Data + lVar36 + 0x1c) = iStack_78c;
        stack0xfffffffffffff870 = param_4;
      }
      else if (uVar47 < 0x1000000) {
        if (uVar47 < uVar51) {
          bVar16 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4406625557953901494>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                              ,0xc4a,"Info.RefSize <= Info.FileSize");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        else {
          local_890 = local_890 + (uVar47 - uVar51);
        }
        local_888 = local_888 + *(longlong *)(lVar36 + 8 + lVar29 * 0x28);
        local_748._8_8_ = *(long64 *)(lVar36 + 0x10 + lVar29 * 0x28);
        local_748._16_8_ = param_4;
        stack0xfffffffffffff8d0 = param_4;
        local_748._0_4_ = uVar42;
        if ((local_920.Data <= (FDefragBlock *)local_748) &&
           ((FScriptContainerElement *)local_748 < local_920.Data + (longlong)local_918._4_4_ * 0x20
           )) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        iVar18 = (uint)local_918;
        if ((uint)local_918 == local_918._4_4_) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_920,(int *)((longlong)&local_918 + 4));
        }
        local_918 = CONCAT44(local_918._4_4_,iVar18 + 1);
        lVar36 = (longlong)iVar18 * 0x20;
        *(undefined4 *)&local_920.Data[lVar36].field_0x0 = local_748._0_4_;
        *(undefined8 *)(local_920.Data + lVar36 + 0x10) = 0;
        *(undefined8 *)(local_920.Data + lVar36 + 8) = local_748._8_8_;
        *(undefined8 *)(local_920.Data + lVar36 + 0x10) = local_748._16_8_;
        local_748._16_8_ = param_4;
        *(undefined4 *)(local_920.Data + lVar36 + 0x18) = local_748._24_4_;
        *(int *)(local_920.Data + lVar36 + 0x1c) = iStack_72c;
        stack0xfffffffffffff8d0 = param_4;
      }
      uStack_6e0 = CONCAT44(uStack_6e0._4_4_,(uint)uStack_6e0 & ~uStack_6ec);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_6f8 + 8));
      bVar16 = TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_6f8,&local_250);
    } while (bVar16);
  }
  if ((uint)local_918 == 0) {
    if (3 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    local_400.bIsSet = false;
    TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_400);
    pFVar25 = local_8f0;
    TValueOrError<void,UE::UnifiedError::FError>::TValueOrError<void,UE::UnifiedError::FError>
              ((TValueOrError<void,UE::UnifiedError::FError> *)local_8f0,
               (TValueOrError<void,UE::UnifiedError::FError> *)&local_938);
    if (local_400.bIsSet != false) {
      UnifiedError::FError::~FError(&local_400.TypedValue);
    }
    DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
              ((FDefragBlock *)local_920.Data,(uint)local_918);
    if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
      FMemory::Free(local_920.Data);
    }
    `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
    TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
    if (local_938.bIsSet == false) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue._0_8_ = param_4;
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)param_4;
    (**(code **)((longlong)*TVar38.Reference + 0x10))();
    if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
    return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
  }
LAB_1445c3a89:
  pvVar48 = (void *)0x0;
  if (3 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  uVar42 = 0;
  LOCK();
  this->CurrentBlock = (atomic<UE::IoStore::FCasBlockId>)0x0;
  UNLOCK();
  local_880 = *(uint *)((longlong)param_1 + 8);
  uVar47 = (ulonglong)(int)local_880;
  pFVar43 = *(FDefragBlock **)param_1;
  local_688 = (FScriptContainerElement *)((longlong)pFVar43 + uVar47 * 0x10);
  local_7c0 = pvVar48;
  while( true ) {
    pFVar45 = local_688;
    local_840 = pFVar43;
    if (*(int *)((longlong)param_1 + 8) != (int)uVar47) {
      local_8e8 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_8e8);
    }
    if (pFVar43 == (FDefragBlock *)pFVar45) break;
    local_690 = *(FDefragBlock **)((longlong)pFVar43 + 8);
    lVar36 = *(longlong *)pFVar43;
    if (local_690 != (FDefragBlock *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_690)->SharedReferenceCount =
           (atomic<int>)((int)((TReferenceControllerBase<1> *)local_690)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar19 = 0;
    if ((int)uVar42 < param_2->ArrayNum) {
      uVar19 = ~uVar42 >> 0x1f;
    }
    local_470 = lVar36;
    if (uVar19 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
        return pTVar28;
      }
    }
    uVar42 = uVar42 + 1;
    pFVar45 = (param_2->AllocatorInstance).Data + (longlong)pvVar48;
    pvVar48 = (void *)((longlong)pvVar48 + 0x20);
    local_898 = pFVar45;
    local_848 = uVar42;
    local_548 = pvVar48;
    if (lVar36 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
        return pTVar28;
      }
    }
    pFVar52 = *(FIoHash **)(lVar36 + 0xd8);
    local_468 = pFVar52 + (longlong)*(int *)(lVar36 + 0xe0) * 2;
    if (pFVar52 != local_468) {
      uVar19 = 1;
      pFVar49 = (FScriptContainerElement *)0x0;
      uVar39 = 0;
      do {
        if (lVar36 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        uVar42 = 0;
        if ((int)uVar39 < *(int *)(lVar36 + 0xd0)) {
          uVar42 = ~uVar39 >> 0x1f;
        }
        if (uVar42 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        local_4b0 = pFVar49 + *(longlong *)(lVar36 + 200);
        uVar42 = uVar19 << 1 | (uint)((int)uVar19 < 0);
        pFVar49 = pFVar49 + 0xc;
        uVar46 = uVar39 + 1;
        local_8d4 = uVar42;
        local_850 = pFVar49;
        if (((int)uVar39 < 0) || (*(int *)(pFVar45 + 0x18) <= (int)uVar39)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L"");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        pFVar37 = pFVar45;
        if (*(FScriptContainerElement **)(pFVar45 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar37 = *(FScriptContainerElement **)(pFVar45 + 0x10);
        }
        if ((int)uVar39 < 0) {
          uVar39 = uVar39 + 0x1f;
        }
        uVar39 = *(uint *)(pFVar37 + (longlong)((int)uVar39 >> 5) * 4) & uVar19;
        uVar19 = uVar42;
        if (uVar39 != 0) {
          FCas::FindChunk(&local_878->Cas,(FIoHash *)local_5e0);
          uVar14 = local_5e0._4_4_;
          uVar13 = local_5e0._0_4_;
          if ((local_5e0._0_4_ != 0) && (pFVar45 = local_898, local_5e0._4_4_ != -1)) {
            iVar18 = (uint)local_918;
            uVar47 = (ulonglong)(int)(uint)local_918;
            pFVar43 = (FDefragBlock *)(local_920.Data + uVar47 * 0x20);
            FVar44.Data = local_920.Data;
            while( true ) {
              if ((int)uVar47 != iVar18) {
                local_8e7 = 0;
                `TCheckedPointerIterator<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlock,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(&local_8e7);
                uVar47 = local_918 & 0xffffffff;
              }
              pFVar45 = local_898;
              pFVar49 = local_850;
              uVar19 = local_8d4;
              if ((FDefragBlock *)FVar44.Data == pFVar43) goto LAB_1445c4575;
              if ((((FDefragBlock *)FVar44.Data)->BlockId).Id == uVar13) break;
              FVar44.Data = FVar44.Data + 0x20;
            }
            pFVar30 = AlgoImpl::
                      FindBy<TArray<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk,TSizedDefaultAllocator<32>_>_&,FIoHash,FIoHash__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>
                                (&((FDefragBlock *)FVar44.Data)->ReferencedChunks,pFVar52,
                                 (pdm_0cdd76fd)0x0);
            pFVar45 = local_898;
            pFVar49 = local_850;
            uVar19 = local_8d4;
            if (pFVar30 == (FDefragBlockReferencedChunk *)0x0) {
              local_88 = *(undefined4 *)(pFVar52->Hash + 0x10);
              local_98 = *(undefined8 *)pFVar52->Hash;
              uStack_90 = *(undefined8 *)(pFVar52->Hash + 8);
              pFVar45 = (((FDefragBlock *)FVar44.Data)->ReferencedChunks).AllocatorInstance.Data;
              local_78 = uVar14;
              uStack_7c = *(undefined4 *)(local_4b0 + 8);
              uStack_84 = (undefined4)*(undefined8 *)local_4b0;
              uStack_80 = (undefined4)((ulonglong)*(undefined8 *)local_4b0 >> 0x20);
              uStack_74 = *(int *)(pFVar52[1].Hash + 4) + 0xfU & 0xfffffff0;
              if ((pFVar45 <= (FScriptContainerElement *)&local_98) &&
                 ((FScriptContainerElement *)&local_98 <
                  pFVar45 + (longlong)(((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayMax *
                            0x28)) {
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar16) {
                  pcVar7 = (code *)swi(3);
                  pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
                  return pTVar28;
                }
              }
              iVar18 = (((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum;
              piVar2 = &(((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayMax;
              if (iVar18 == *piVar2) {
                iVar18 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x428,&(((FDefragBlock *)FVar44.Data)->ReferencedChunks).
                                           AllocatorInstance,piVar2);
              }
              lVar36 = (longlong)iVar18;
              (((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum = iVar18 + 1;
              pFVar45 = (((FDefragBlock *)FVar44.Data)->ReferencedChunks).AllocatorInstance.Data;
              *(undefined8 *)(pFVar45 + lVar36 * 0x28) = local_98;
              *(undefined8 *)(pFVar45 + lVar36 * 0x28 + 8) = uStack_90;
              *(ulonglong *)(pFVar45 + lVar36 * 0x28 + 0x10) = CONCAT44(uStack_84,local_88);
              *(ulonglong *)(pFVar45 + lVar36 * 0x28 + 0x10 + 8) = CONCAT44(uStack_7c,uStack_80);
              *(ulonglong *)(pFVar45 + lVar36 * 0x28 + 0x20) = CONCAT44(uStack_74,local_78);
              local_7c0 = (void *)((longlong)local_7c0 +
                                  ((ulonglong)(*(int *)(pFVar52[1].Hash + 4) + 0xf) & 0xfffffff0));
              pFVar45 = local_898;
              pFVar49 = local_850;
              uVar19 = local_8d4;
            }
          }
        }
LAB_1445c4575:
        pFVar52 = pFVar52 + 2;
        lVar36 = local_470;
        pFVar43 = local_840;
        pvVar48 = local_548;
        uVar42 = local_848;
        uVar39 = uVar46;
      } while (pFVar52 != local_468);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_690);
    pFVar43 = (FDefragBlock *)((longlong)pFVar43 + 0x10);
    uVar47 = (ulonglong)local_880;
    param_1 = (TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *)
              local_800;
    param_2 = (TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *)
              local_5e0._8_8_;
  }
  if ((void *)(local_888 - local_890) != local_7c0) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned___int64_&,unsigned___int64_&,unsigned___int64_&>
                ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,&local_888,&local_890,
                 (ulong64 *)&local_7c0);
    }
    bVar16 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4406625557953901428>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                        ,0xc8c,"false");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
      return pTVar28;
    }
  }
  uVar47 = (ulonglong)(int)(uint)local_918;
  local_690 = (FDefragBlock *)(local_920.Data + uVar47 * 0x20);
  local_8c8.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.Chunks.ArrayNum = 0;
  local_8c8.Chunks.ArrayMax = 0;
  local_8c8.ChunkHashes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8c8.ChunkHashes.ArrayNum = 0;
  local_8c8.ChunkHashes.ArrayMax = 0;
  local_8c8.TotalSize = 0;
  local_8c8.SharedMutex.State = (atomic<unsigned_int>)0x0;
  local_848 = (uint)local_918;
  FVar44.Data = local_920.Data;
  do {
    pFVar43 = local_690;
    local_840 = (FDefragBlock *)FVar44.Data;
    if ((uint)local_918 != (int)uVar47) {
      local_8e6 = 0;
      `TCheckedPointerIterator<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlock,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_8e6);
    }
    pFVar50 = local_878;
    if ((FDefragBlock *)FVar44.Data == pFVar43) {
      if (3 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      pFVar25 = local_8f0;
      *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
      if (local_938.bIsSet != false) {
        UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
      }
LAB_1445c6163:
      if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
      }
      DestructItems<FIoBuffer,int>
                ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,local_8c8.Chunks.ArrayNum);
      if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
      }
      DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                ((FDefragBlock *)local_920.Data,(uint)local_918);
      if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
        FMemory::Free(local_920.Data);
      }
      `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
      TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
joined_r0x0001445c5f2b:
      if (local_938.bIsSet == false) {
        return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
      }
      if (TVar38.Reference == (IErrorDetails *)0x0) {
        return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
      }
LAB_1445c61db:
      local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_938.TypedValue.ErrorCode = 0;
      local_938.TypedValue.ModuleId = 0;
      (**(code **)((longlong)*TVar38.Reference + 0x10))();
      if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
        return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
      }
      (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
      return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
    }
    if ((((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum != 0) {
      FCas::OpenRead(&local_878->Cas,
                     (TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)&local_b0,
                     (FCasBlockId)(((FDefragBlock *)FVar44.Data)->BlockId).Id);
      bVar16 = TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
               ::
               IsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType>
                         (&local_b0);
      if (bVar16) {
        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
          if (local_b0.TypeIndex != 1) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                    ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,(FError *)&local_b0);
        }
        MakeInstallCacheErrorContext(pFVar50,&local_148,local_680,0xc9a);
        if (local_b0.TypeIndex != 1) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L"");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        local_910[0] = (<lambda_2>)0x5;
        UnifiedError::FError::
        PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                  ((FError *)&local_b0,&local_148,(EDetailFilter *)local_910);
        if (local_b0.TypeIndex != 1) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L"");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        local_7f8 = (FScriptContainerElement *)local_b0._padding_;
        local_7f0.Reference = (IErrorDetails *)0x0;
        local_b0._padding_ = 0;
        if ((TReferenceControllerBase<1> *)local_b0._padding_ != (TReferenceControllerBase<1> *)0x0)
        {
          local_7f0.Reference = (IErrorDetails *)local_b0._padding_;
          (**(code **)(*(longlong *)local_b0._padding_ + 8))(local_b0._padding_,local_4c8);
          lVar36 = local_b0._padding_;
          if ((TReferenceControllerBase<1> *)local_b0._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            local_b0._padding_ = 0;
            (**(code **)(*(longlong *)lVar36 + 0x10))();
          }
        }
        TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
        ::Emplace<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
                  (&local_b0);
        UnifiedError::FError::FError(&local_3a0.TypedValue,(FError *)&local_7f8);
        local_3a0.bIsSet = true;
        TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_3a0);
        pFVar25 = local_8f0;
        TValueOrError<void,UE::UnifiedError::FError>::TValueOrError<void,UE::UnifiedError::FError>
                  ((TValueOrError<void,UE::UnifiedError::FError> *)local_8f0,
                   (TValueOrError<void,UE::UnifiedError::FError> *)&local_938);
        TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_3a0);
        TVar38.Reference = local_7f0.Reference;
        local_7f8 = (FScriptContainerElement *)0x0;
        if ((TReferenceControllerBase<1> *)local_7f0.Reference != (TReferenceControllerBase<1> *)0x0
           ) {
          local_7f0.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar38.Reference + 0x10))();
          if ((TReferenceControllerBase<1> *)local_7f0.Reference !=
              (TReferenceControllerBase<1> *)0x0) {
            (**(code **)((longlong)*local_7f0.Reference + 0x10))();
          }
        }
        FIoStatus::~FIoStatus(&local_148.IoError);
        TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::
        ~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>
                  ((TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)&local_b0);
        goto LAB_1445c6163;
      }
      if (local_b0.TypeIndex != 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
          return pTVar28;
        }
      }
      pFVar49 = (FScriptContainerElement *)local_b0._padding_;
      local_898 = (FScriptContainerElement *)local_b0._padding_;
      local_860 = (FScriptContainerElement *)local_b0._padding_;
      local_858.ReferenceController = (TReferenceControllerBase<1> *)local_b0._padding_;
      local_b0._padding_ = 0;
      local_b0._padding_ = 0;
      TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
      ::Emplace<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
                (&local_b0);
      AlgoImpl::
      IntroSortInternal<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk_const_,int,UE::Core::Private::TProjectionMemberData<unsigned_int__UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlockReferencedChunk::*>,TLess<void>_>
                ((FDefragBlockReferencedChunk *)
                 (((FDefragBlock *)FVar44.Data)->ReferencedChunks).AllocatorInstance.Data,
                 (((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum,
                 (TProjectionMemberData<unsigned_int__private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::Defrag(TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_>_const_&,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_>_const_&,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64_const_*,unsigned___int64_*)_::_2_::FDefragBlockReferencedChunk::*>
                  )0x20,local_8d8[0]);
      local_880 = (((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum;
      uVar47 = (ulonglong)(int)local_880;
      pFVar45 = (((FDefragBlock *)FVar44.Data)->ReferencedChunks).AllocatorInstance.Data;
      local_688 = pFVar45 + uVar47 * 0x28;
      while( true ) {
        pFVar37 = local_688;
        local_850 = pFVar45;
        if ((((FDefragBlock *)FVar44.Data)->ReferencedChunks).ArrayNum != (int)uVar47) {
          local_8e5 = 0;
          `TCheckedPointerIterator<`UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::FDefragBlockReferencedChunk_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_8e5);
        }
        if (pFVar45 == pFVar37) break;
        FIoBuffer::FIoBuffer(&local_8d0,(ulonglong)*(uint *)(pFVar45 + 0x24));
        local_908.bIsSet = false;
        local_8d4 = 0;
        do {
          if (pFVar49 == (FScriptContainerElement *)0x0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          cVar17 = (**(code **)(*(longlong *)pFVar49 + 0x10))
                             (pFVar49,*(undefined4 *)(pFVar45 + 0x20));
          if (cVar17 == '\0') {
            DVar20 = FWindowsPlatformMisc::GetLastError();
            ::FString::PrintfImpl(&local_6b8,L"Failed to seek to offset %u in cache block %u");
            FVar44.Data = local_6b8.Data.AllocatorInstance.Data;
            iVar18 = local_6b8.Data.ArrayNum;
            iVar22 = local_6b8.Data.ArrayMax;
            local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_6b8.Data.ArrayNum = 0;
            local_6b8.Data.ArrayMax = 0;
            TVar31 = UnifiedError::IoStoreOnDemand::CasError::GetStaticErrorDetails();
            pIVar4 = (IErrorDetails *)(TVar31.Reference)->_padding_;
            if (pIVar4 == (IErrorDetails *)0x0) {
              iVar21 = UnifiedError::IoStoreOnDemand::CasError::GetErrorCodeId();
              local_870.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_870.ErrorDetails.Reference = (IErrorDetails *)0x0;
              local_870.ErrorCode = iVar21;
            }
            else {
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_4a8);
              iVar21 = UnifiedError::IoStoreOnDemand::CasError::GetErrorCodeId();
              local_870.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_870.ErrorCode = iVar21;
              local_870.ErrorDetails.Reference = pIVar4;
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_460);
              (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
            }
            this_00 = ::operator_new(0x48);
            if (this_00 == (FDynamicErrorDetails *)0x0) {
              local_5d0 = (FDynamicErrorDetails *)0x0;
            }
            else {
              local_478 = 0;
              UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                        (this_00,(IErrorDetails *)&local_478);
              this_00->_padding_ =
                   (longlong)
                   &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
                    ::_vftable__for__UE__UnifiedError__IErrorDetails__;
              this_00[1]._padding_ = 0;
              this_00->_padding_ =
                   (longlong)
                   &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
                    ::_vftable__for__FRefCountBase__;
              this_00[1].InnerErrorDetails.Reference = (IErrorDetails *)0x0;
              *(undefined1 *)&this_00[2]._padding_ = 5;
              *(undefined4 *)&this_00[1]._padding_ = 3;
              *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = 0x17;
              *(DWORD *)&this_00[1]._padding_ = DVar20;
              if (&this_00[1]._padding_ != local_e0) {
                this_00[1]._padding_ = (longlong)FVar44.Data;
                *(int *)&this_00[1].InnerErrorDetails.Reference = iVar18;
                *(int *)((longlong)&this_00[1].InnerErrorDetails.Reference + 4) = iVar22;
                FVar44.Data = (FScriptContainerElement *)(IErrorDetails *)0x0;
              }
              *(undefined1 *)&this_00[2]._padding_ = 0xff;
              local_5d0 = this_00;
              (**(code **)(this_00->_padding_ + 8))(this_00,local_4e0);
            }
            UnifiedError::FError::PushErrorDetails(&local_870,(IErrorDetails *)&local_5d0);
            TVar38.Reference = local_870.ErrorDetails.Reference;
            uVar10 = local_870._0_8_;
            local_870.ErrorCode = 0;
            local_870.ModuleId = 0;
            TVar40.Reference = (IErrorDetails *)0x0;
            if (local_870.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_870.ErrorDetails.Reference + 8))
                        (local_870.ErrorDetails.Reference,local_4dc);
              TVar12.Reference = local_870.ErrorDetails.Reference;
              TVar40.Reference = TVar38.Reference;
              if (local_870.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                local_870.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar12.Reference + 0x10))();
              }
            }
            TVar38.Reference = local_870.ErrorDetails.Reference;
            local_870.ErrorCode = 0;
            local_870.ModuleId = 0;
            if (local_870.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_870.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_870.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_870.ErrorDetails.Reference + 0x10))();
              }
            }
            if ((IErrorDetails *)FVar44.Data != (IErrorDetails *)0x0) {
              FMemory::Free(FVar44.Data);
            }
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if ((local_908.bIsSet != false) &&
               (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
               local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            uVar11 = local_870._0_8_;
            local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_870.ErrorCode = (int)uVar10;
            local_870.ModuleId = SUB84(uVar10,4);
            local_908.TypedValue.ErrorCode = local_870.ErrorCode;
            local_908.TypedValue.ModuleId = local_870.ModuleId;
            local_870._0_8_ = uVar11;
            if (TVar40.Reference != (IErrorDetails *)0x0) {
              local_908.TypedValue.ErrorDetails.Reference = TVar40.Reference;
              (**(code **)((longlong)*TVar40.Reference + 8))(TVar40.Reference,local_4d8);
              (**(code **)((longlong)*TVar40.Reference + 0x10))(TVar40.Reference);
            }
            local_908.bIsSet = true;
            pFVar49 = local_898;
            FVar44.Data = (FScriptContainerElement *)local_840;
            pFVar45 = local_850;
            if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
              pFVar49 = local_898;
              FVar44.Data = (FScriptContainerElement *)local_840;
              pFVar45 = local_850;
            }
          }
          else {
            if (pFVar49 == (FScriptContainerElement *)0x0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L"");
              if (bVar16) {
                pcVar7 = (code *)swi(3);
                pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
                return pTVar28;
              }
            }
            cVar17 = (**(code **)(*(longlong *)pFVar49 + 0x20))
                               (pFVar49,*(longlong *)local_8d0.CorePtr.Reference,
                                (ulonglong)
                                CONCAT14(*(uchar *)((longlong)local_8d0.CorePtr.Reference + 0x18),
                                         *(uint *)((longlong)local_8d0.CorePtr.Reference + 8)));
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if (cVar17 != '\0') {
              if (local_908.bIsSet != false) {
                local_908.TypedValue.ErrorCode = 0;
                local_908.TypedValue.ModuleId = 0;
                if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                  (**(code **)((longlong)*TVar38.Reference + 0x10))();
                  if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
                  }
                }
                local_908.bIsSet = false;
              }
              goto LAB_1445c4fd2;
            }
            DVar20 = FWindowsPlatformMisc::GetLastError();
            ::FString::PrintfImpl
                      (&local_6a0,L"Failed to read %llu bytes at offset %u in cache block %u");
            local_458.ErrorMessage.Data.AllocatorInstance.Data =
                 local_6a0.Data.AllocatorInstance.Data;
            local_458.ErrorMessage.Data.ArrayNum = local_6a0.Data.ArrayNum;
            local_458.ErrorMessage.Data.ArrayMax = local_6a0.Data.ArrayMax;
            local_6a0.Data.ArrayNum = 0;
            local_6a0.Data.ArrayMax = 0;
            local_458.ErrorCode = ReadBlockFailed;
            local_458.IoErrorCode = ReadError;
            local_6a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_458.SystemErrorCode = DVar20;
            pFVar25 = UnifiedError::IoStoreOnDemand::CasError::
                      MakeError<UE::UnifiedError::IoStoreOnDemand::FCasErrorContext>
                                (&local_610,&local_458,All);
            UnifiedError::FError::FError(&local_3e8.TypedValue,pFVar25);
            TVar38.Reference = local_610.ErrorDetails.Reference;
            local_3e8.bIsSet = true;
            local_610.ErrorCode = 0;
            local_610.ModuleId = 0;
            if (local_610.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_610.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_610.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_610.ErrorDetails.Reference + 0x10))();
              }
            }
            if (local_458.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_458.ErrorMessage.Data.AllocatorInstance.Data);
            }
            TOptional<UE::UnifiedError::FError>::operator=(&local_908,&local_3e8);
            TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_3e8);
            if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
            }
          }
          local_8d4 = local_8d4 + 1;
        } while ((int)local_8d4 < 3);
        if (local_908.bIsSet != false) {
          MakeInstallCacheErrorContext(local_878,&local_180,local_680,0xcbf);
          if (local_908.bIsSet == false) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          local_8e3[0] = Default;
          UnifiedError::FError::
          PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                    (&local_908.TypedValue,&local_180,local_8e3);
          if (local_908.bIsSet == false) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               );
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          local_7d0.ErrorCode = local_908.TypedValue.ErrorCode;
          local_7d0.ModuleId = local_908.TypedValue.ModuleId;
          local_7d0.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_908.TypedValue.ErrorCode = 0;
          local_908.TypedValue.ModuleId = 0;
          if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_7d0.ErrorDetails.Reference = local_908.TypedValue.ErrorDetails.Reference;
            (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 8))
                      (local_908.TypedValue.ErrorDetails.Reference,local_4d4);
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
            }
          }
          TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
          if (local_908.bIsSet != false) {
            local_908.TypedValue.ErrorCode = 0;
            local_908.TypedValue.ModuleId = 0;
            if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            local_908.bIsSet = false;
          }
          UnifiedError::FError::FError(&local_5b8,&local_7d0);
          TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
          local_5a8 = 1;
          if ((local_938.bIsSet != false) &&
             (local_938.TypedValue.ErrorCode = 0, local_938.TypedValue.ModuleId = 0,
             local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar38.Reference + 0x10))();
            if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          TVar38.Reference = local_5b8.ErrorDetails.Reference;
          local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_938.TypedValue.ErrorCode = local_5b8.ErrorCode;
          local_938.TypedValue.ModuleId = local_5b8.ModuleId;
          if (local_5b8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_938.TypedValue.ErrorDetails.Reference = local_5b8.ErrorDetails.Reference;
            (**(code **)((longlong)*local_5b8.ErrorDetails.Reference + 8))
                      (local_5b8.ErrorDetails.Reference,local_4d0);
            IVar5 = *local_5b8.ErrorDetails.Reference;
            local_5b8.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)IVar5 + 0x10))(TVar38.Reference);
          }
          local_938.bIsSet = true;
          *(bool *)&local_8f0[1].ErrorCode = true;
          (local_8f0->ErrorDetails).Reference = (IErrorDetails *)0x0;
          (((TOptional<UE::UnifiedError::FError> *)&local_8f0->ErrorCode)->TypedValue).ErrorCode =
               local_938.TypedValue.ErrorCode;
          local_8f0->ModuleId = local_938.TypedValue.ModuleId;
          if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (local_8f0->ErrorDetails).Reference = local_938.TypedValue.ErrorDetails.Reference;
            (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 8))
                      (local_938.TypedValue.ErrorDetails.Reference,local_808);
          }
          TVar38.Reference = local_7d0.ErrorDetails.Reference;
          local_5b8.ErrorCode = 0;
          local_5b8.ModuleId = 0;
          local_7d0.ErrorCode = 0;
          local_7d0.ModuleId = 0;
          if (local_7d0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_7d0.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar38.Reference + 0x10))();
            if (local_7d0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_7d0.ErrorDetails.Reference + 0x10))();
            }
          }
          FIoStatus::~FIoStatus(&local_180.IoError);
          TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
          if ((local_908.bIsSet != false) &&
             (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
             local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar38.Reference + 0x10))();
            if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          FVar9.CorePtr.Reference = local_8d0.CorePtr.Reference;
          if (local_8d0.CorePtr.Reference != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount((BufCore *)local_8d0.CorePtr.Reference);
            LOCK();
            piVar2 = (int *)((longlong)FVar9.CorePtr.Reference + 0xc);
            iVar18 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              FIoBuffer::BufCore::~BufCore((BufCore *)FVar9.CorePtr.Reference);
              ::operator_delete((void *)FVar9.CorePtr.Reference,0x20);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_858.ReferenceController);
          if (2 < local_b0.TypeIndex) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[local_b0.TypeIndex])(&local_b0);
          if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
          }
          DestructItems<FIoBuffer,int>
                    ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,local_8c8.Chunks.ArrayNum)
          ;
          if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
          }
          DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                    ((FDefragBlock *)local_920.Data,(uint)local_918);
          if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
            FMemory::Free(local_920.Data);
          }
          `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
          if (local_938.bIsSet == false) {
            return (TValueOrError<void,UE::UnifiedError::FError> *)local_8f0;
          }
          TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
          if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
            return (TValueOrError<void,UE::UnifiedError::FError> *)local_8f0;
          }
          goto LAB_1445c4dbe;
        }
LAB_1445c4fd2:
        local_548 = *(void **)local_8d0.CorePtr.Reference;
        uStack_540 = (ulonglong)
                     CONCAT14(*(uchar *)((longlong)local_8d0.CorePtr.Reference + 0x18),
                              *(uint *)((longlong)local_8d0.CorePtr.Reference + 8));
        local_2c8[0].Data = local_548;
        local_2c8[0].Size = uStack_540;
        pFVar32 = FBlake3::HashBuffer(&local_70,local_2c8);
        pFVar50 = local_878;
        lVar36 = *(longlong *)pFVar32->Hash;
        lVar29 = *(longlong *)(pFVar32->Hash + 8);
        iVar18 = *(int *)(pFVar32->Hash + 0x10);
        local_538 = lVar36;
        lStack_530 = lVar29;
        local_528 = iVar18;
        if (((lVar36 != *(longlong *)pFVar45) || (lVar29 != *(longlong *)(pFVar45 + 8))) ||
           (iVar18 != *(int *)(pFVar45 + 0x10))) {
          if (1 < (byte)LogIoStoreOnDemand._0_1_) {
            ::LexToString(&local_2a8,(FIoChunkId *)(pFVar45 + 0x14));
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
          }
          pFVar50 = local_878;
          ::operator/(&local_650,&local_878->CacheDirectory,L"cas.jrn");
          local_600.JournalFile.Data.AllocatorInstance.Data = local_650.Data.AllocatorInstance.Data;
          local_600.JournalFile.Data.ArrayNum = local_650.Data.ArrayNum;
          local_600.JournalFile.Data.ArrayMax = local_650.Data.ArrayMax;
          local_650.Data.ArrayNum = 0;
          local_650.Data.ArrayMax = 0;
          local_650.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_600.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_600.Entries.ArrayNum = 0;
          local_600.Entries.ArrayMax = 0;
          local_800.Type = 5;
          local_800.ErrorCode = DefragHashMismatch;
          pFVar35 = TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_>::
                    AddZeroed_GetRef(&local_600.Entries);
          local_430 = 0;
          local_6c0[0] = 0;
          (pFVar35->field0_0x0).CriticalError = local_800;
          FCasJournal::Commit((TValueOrError<void,UE::UnifiedError::FError> *)&local_3d0,&local_600,
                              &local_430,local_6c0);
          if ((local_3d0.bIsSet != false) && (1 < (byte)LogIoStoreOnDemand._0_1_)) {
            Logging::Private::
            LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::UnifiedError::FError_&>
                      ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,&local_3d0.TypedValue);
          }
          TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_3d0);
          lVar6 = ((FDefragBlock *)FVar44.Data)->LastAccess;
          if (local_8c8.Chunks.ArrayNum != local_8c8.ChunkHashes.ArrayNum) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Chunks.Num() == ChunkHashes.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                ,0x692,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          if (((local_8c8.TotalSize == 0) && (local_8c8.Chunks.ArrayNum == 0)) &&
             (local_8c8.ChunkHashes.ArrayNum == 0)) {
            local_370.bIsSet = false;
          }
          else {
            local_438 = &local_8c8;
            FlushPendingChunksImpl
                      (pFVar50,(TValueOrError<void,UE::UnifiedError::FError> *)&local_370,&local_8c8
                       ,lVar6);
            ScopeExitSupport::
            TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>
            ::
            ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
                      (&local_438);
          }
          TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_370);
          TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_370);
          pFVar25 = local_8f0;
          if (local_938.bIsSet == false) {
            bVar16 = FPendingChunks::IsEmpty(&local_8c8);
            if (!bVar16) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DefragPendingChunks.IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                  ,0xcd6,L"");
              if (bVar16) {
                pcVar7 = (code *)swi(3);
                pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
                return pTVar28;
              }
            }
            local_310.ChunkId.Id._0_8_ = *(undefined8 *)(pFVar45 + 0x14);
            local_310.ChunkId.Id._8_4_ = *(undefined4 *)(pFVar45 + 0x1c);
            local_310.ExpectedHash.Hash._0_8_ = *(undefined8 *)pFVar45;
            local_310.ExpectedHash.Hash._8_8_ = *(undefined8 *)(pFVar45 + 8);
            local_310.ExpectedHash.Hash._16_4_ = *(undefined4 *)(pFVar45 + 0x10);
            local_8e0[0] = Default;
            local_310.ActualHash.Hash._0_8_ = lVar36;
            local_310.ActualHash.Hash._8_8_ = lVar29;
            local_310.ActualHash.Hash._16_4_ = iVar18;
            TVar31 = UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetStaticErrorDetails()
            ;
            pIVar4 = (IErrorDetails *)(TVar31.Reference)->_padding_;
            if (pIVar4 == (IErrorDetails *)0x0) {
              iVar18 = UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetErrorCodeId();
              local_838.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_838.ErrorDetails.Reference = (IErrorDetails *)0x0;
              local_838.ErrorCode = iVar18;
            }
            else {
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_4cc);
              iVar18 = UnifiedError::IoStoreOnDemand::InstallCacheDefragError::GetErrorCodeId();
              local_838.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_838.ErrorCode = iVar18;
              local_838.ErrorDetails.Reference = pIVar4;
              (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_6a8);
              (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
            }
            UnifiedError::FError::
            PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>
                      (&local_838,&local_310,local_8e0);
            UnifiedError::FError::FError(&local_3b8.TypedValue,&local_838);
            local_3b8.bIsSet = true;
            TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_3b8);
            pFVar25 = local_8f0;
            TValueOrError<void,UE::UnifiedError::FError>::
            TValueOrError<void,UE::UnifiedError::FError>
                      ((TValueOrError<void,UE::UnifiedError::FError> *)local_8f0,
                       (TValueOrError<void,UE::UnifiedError::FError> *)&local_938);
            TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_3b8);
            TVar38.Reference = local_838.ErrorDetails.Reference;
            local_838.ErrorCode = 0;
            local_838.ModuleId = 0;
            if (local_838.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_838.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_838.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_838.ErrorDetails.Reference + 0x10))();
              }
            }
            if (local_600.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_600.Entries.AllocatorInstance.Data);
            }
            if (local_600.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_600.JournalFile.Data.AllocatorInstance.Data);
            }
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if ((local_908.bIsSet != false) &&
               (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
               local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            FVar9.CorePtr.Reference = local_8d0.CorePtr.Reference;
            if (local_8d0.CorePtr.Reference != (BufCore *)0x0) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)local_8d0.CorePtr.Reference);
              LOCK();
              piVar2 = (int *)((longlong)FVar9.CorePtr.Reference + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)FVar9.CorePtr.Reference);
                ::operator_delete((void *)FVar9.CorePtr.Reference,0x20);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_858.ReferenceController);
            TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::
            ~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>
                      ((TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)
                       &local_b0);
          }
          else {
            *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
            UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
            if (local_600.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_600.Entries.AllocatorInstance.Data);
            }
            if (local_600.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_600.JournalFile.Data.AllocatorInstance.Data);
            }
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if ((local_908.bIsSet != false) &&
               (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
               local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            FVar9.CorePtr.Reference = local_8d0.CorePtr.Reference;
            if (local_8d0.CorePtr.Reference != (BufCore *)0x0) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)local_8d0.CorePtr.Reference);
              LOCK();
              piVar2 = (int *)((longlong)FVar9.CorePtr.Reference + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)FVar9.CorePtr.Reference);
                ::operator_delete((void *)FVar9.CorePtr.Reference,0x20);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_858.ReferenceController);
            TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
            ::
            ~TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
                      (&local_b0);
          }
          if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
          }
          DestructItems<FIoBuffer,int>
                    ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,local_8c8.Chunks.ArrayNum)
          ;
          if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
          }
          DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                    ((FDefragBlock *)local_920.Data,(uint)local_918);
          if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
            FMemory::Free(local_920.Data);
          }
          `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
          if (local_938.bIsSet == false) {
            return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
          }
LAB_1445c5e94:
          TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
          if (local_938.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
            return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
          }
          goto LAB_1445c61db;
        }
        if (local_8c8.TotalSize < 0x400001) {
LAB_1445c5119:
          if (local_8c8.Chunks.ArrayNum != local_8c8.ChunkHashes.ArrayNum) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Chunks.Num() == ChunkHashes.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                ,0x698,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
        }
        else {
          pTVar33 = &FlushPendingChunks(local_878,
                                        (TValueOrError<void,UE::UnifiedError::FError> *)&local_208,
                                        &local_8c8,((FDefragBlock *)FVar44.Data)->LastAccess)->Error
          ;
          TOptional<UE::UnifiedError::FError>::operator=(&local_938,pTVar33);
          TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_208);
          pFVar25 = local_8f0;
          if (local_938.bIsSet != false) {
            *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
            UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
            TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
            if ((local_908.bIsSet != false) &&
               (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
               local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar38.Reference + 0x10))();
              if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            FVar9.CorePtr.Reference = local_8d0.CorePtr.Reference;
            if (local_8d0.CorePtr.Reference != (BufCore *)0x0) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)local_8d0.CorePtr.Reference);
              LOCK();
              piVar2 = (int *)((longlong)FVar9.CorePtr.Reference + 0xc);
              iVar18 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)FVar9.CorePtr.Reference);
                ::operator_delete((void *)FVar9.CorePtr.Reference,0x20);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_858.ReferenceController);
            TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::
            ~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>
                      ((TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)
                       &local_b0);
            if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
            }
            DestructItems<FIoBuffer,int>
                      ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,
                       local_8c8.Chunks.ArrayNum);
            if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
            }
            DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                      ((FDefragBlock *)local_920.Data,(uint)local_918);
            if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
              FMemory::Free(local_920.Data);
            }
            `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
            if (local_938.bIsSet == false) {
              return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar25;
            }
            goto LAB_1445c5e94;
          }
          if (local_8c8.Chunks.ArrayNum != local_8c8.ChunkHashes.ArrayNum) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Chunks.Num() == ChunkHashes.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                ,0x692,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
          }
          if (((local_8c8.TotalSize != 0) || (local_8c8.Chunks.ArrayNum != 0)) ||
             (local_8c8.ChunkHashes.ArrayNum != 0)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("DefragPendingChunks.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                ,0xce7,L"");
            if (bVar16) {
              pcVar7 = (code *)swi(3);
              pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
              return pTVar28;
            }
            goto LAB_1445c5119;
          }
        }
        local_8c8.TotalSize =
             local_8c8.TotalSize +
             CONCAT14(*(uchar *)((longlong)local_8d0.CorePtr.Reference + 0x18),
                      *(uint *)((longlong)local_8d0.CorePtr.Reference + 8));
        if ((local_8c8.ChunkHashes.AllocatorInstance.Data <= pFVar45) &&
           (pFVar45 < local_8c8.ChunkHashes.AllocatorInstance.Data +
                      (longlong)local_8c8.ChunkHashes.ArrayMax * 0x14)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        iVar18 = local_8c8.ChunkHashes.ArrayNum;
        if (local_8c8.ChunkHashes.ArrayNum == local_8c8.ChunkHashes.ArrayMax) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x414,&local_8c8.ChunkHashes.AllocatorInstance,
                              &local_8c8.ChunkHashes.ArrayMax);
        }
        local_8c8.ChunkHashes.ArrayNum = iVar18 + 1;
        lVar36 = *(longlong *)(pFVar45 + 8);
        *(longlong *)(local_8c8.ChunkHashes.AllocatorInstance.Data + (longlong)iVar18 * 0x14) =
             *(longlong *)pFVar45;
        *(longlong *)(local_8c8.ChunkHashes.AllocatorInstance.Data + (longlong)iVar18 * 0x14 + 8) =
             lVar36;
        *(undefined4 *)
         (local_8c8.ChunkHashes.AllocatorInstance.Data + (longlong)iVar18 * 0x14 + 0x10) =
             *(undefined4 *)(pFVar45 + 0x10);
        if ((local_8c8.Chunks.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8d0) &&
           ((FScriptContainerElement *)&local_8d0 <
            local_8c8.Chunks.AllocatorInstance.Data + (longlong)local_8c8.Chunks.ArrayMax * 8)) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
            return pTVar28;
          }
        }
        iVar18 = local_8c8.Chunks.ArrayNum;
        if (local_8c8.Chunks.ArrayNum == local_8c8.Chunks.ArrayMax) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&local_8c8,&local_8c8.Chunks.ArrayMax);
        }
        TVar38.Reference = local_908.TypedValue.ErrorDetails.Reference;
        local_8c8.Chunks.ArrayNum = iVar18 + 1;
        *(undefined8 *)(local_8c8.Chunks.AllocatorInstance.Data + (longlong)iVar18 * 8) = 0;
        *(TRefCountPtr<FIoBuffer::BufCore> *)
         (local_8c8.Chunks.AllocatorInstance.Data + (longlong)iVar18 * 8) =
             local_8d0.CorePtr.Reference;
        local_8d0.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
        if ((local_908.bIsSet != false) &&
           (local_908.TypedValue.ErrorCode = 0, local_908.TypedValue.ModuleId = 0,
           local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_908.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar38.Reference + 0x10))();
          if (local_908.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_908.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        FVar9.CorePtr.Reference = local_8d0.CorePtr.Reference;
        if (local_8d0.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_8d0.CorePtr.Reference);
          LOCK();
          piVar2 = (int *)((longlong)FVar9.CorePtr.Reference + 0xc);
          iVar18 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar9.CorePtr.Reference);
            ::operator_delete((void *)FVar9.CorePtr.Reference,0x20);
          }
        }
        uVar47 = (ulonglong)local_880;
        pFVar45 = pFVar45 + 0x28;
      }
      local_488.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_860 = (FScriptContainerElement *)0x0;
      local_490 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_858,&local_488);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_488.ReferenceController);
      lVar6 = ((FDefragBlock *)FVar44.Data)->LastAccess;
      if (local_8c8.Chunks.ArrayNum != local_8c8.ChunkHashes.ArrayNum) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunks.Num() == ChunkHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                            ,0x692,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
          return pTVar28;
        }
      }
      if (((local_8c8.TotalSize == 0) && (local_8c8.Chunks.ArrayNum == 0)) &&
         (local_8c8.ChunkHashes.ArrayNum == 0)) {
        local_388.bIsSet = false;
      }
      else {
        local_480 = &local_8c8;
        FlushPendingChunksImpl
                  (pFVar50,(TValueOrError<void,UE::UnifiedError::FError> *)&local_388,&local_8c8,
                   lVar6);
        ScopeExitSupport::
        TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>::
        ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
                  (&local_480);
      }
      TOptional<UE::UnifiedError::FError>::operator=(&local_938,&local_388);
      TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_388);
      pFVar25 = local_8f0;
      if (local_938.bIsSet != false) {
        *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
        UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_858.ReferenceController);
        TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::
        ~TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>
                  ((TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> *)&local_b0);
        if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
        }
        DestructItems<FIoBuffer,int>
                  ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,local_8c8.Chunks.ArrayNum);
        if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
        }
        DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                  ((FDefragBlock *)local_920.Data,(uint)local_918);
        if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
          FMemory::Free(local_920.Data);
        }
        `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
        TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
        goto joined_r0x0001445c5f2b;
      }
      if (local_8c8.Chunks.ArrayNum != local_8c8.ChunkHashes.ArrayNum) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Chunks.Num() == ChunkHashes.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                            ,0x692,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
          return pTVar28;
        }
      }
      if (((local_8c8.TotalSize != 0) || (local_8c8.Chunks.ArrayNum != 0)) ||
         (local_8c8.ChunkHashes.ArrayNum != 0)) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("DefragPendingChunks.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                            ,0xcf3,L"");
        if (bVar16) {
          pcVar7 = (code *)swi(3);
          pTVar28 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar7)();
          return pTVar28;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_858.ReferenceController);
      TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
      ::
      ~TVariant<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FEmptyType>
                (&local_b0);
    }
    ::operator/(&local_660,&pFVar50->CacheDirectory,L"cas.jrn");
    local_828.JournalFile.Data.AllocatorInstance.Data = local_660.Data.AllocatorInstance.Data;
    local_828.JournalFile.Data.ArrayNum = local_660.Data.ArrayNum;
    local_828.JournalFile.Data.ArrayMax = local_660.Data.ArrayMax;
    local_660.Data.ArrayNum = 0;
    local_660.Data.ArrayMax = 0;
    local_660.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_828.Entries.ArrayNum = 0;
    local_828.Entries.ArrayMax = 0;
    local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7b8.ArrayNum = 0;
    local_7b8.ArrayMax = 0;
    pTVar33 = &FCas::DeleteBlock(&pFVar50->Cas,
                                 (TValueOrError<void,UE::UnifiedError::FError> *)&local_220,
                                 (FCasBlockId)(((FDefragBlock *)FVar44.Data)->BlockId).Id,&local_7b8
                                )->Error;
    TOptional<UE::UnifiedError::FError>::operator=(&local_938,pTVar33);
    TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_220);
    pFVar25 = local_8f0;
    if (local_938.bIsSet != false) {
      *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
      UnifiedError::FError::FError(local_8f0,&local_938.TypedValue);
      if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b8.AllocatorInstance.Data);
      }
      if (local_828.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.Entries.AllocatorInstance.Data);
      }
      if (local_828.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_828.JournalFile.Data.AllocatorInstance.Data);
      }
      goto LAB_1445c6163;
    }
    FOnDemandInstallCacheStats::OnBlockDeleted(((FDefragBlock *)FVar44.Data)->LastAccess,true);
    iVar18 = local_7b8.ArrayNum;
    uVar47 = (ulonglong)local_7b8.ArrayNum;
    pFVar45 = local_7b8.AllocatorInstance.Data + uVar47 * 0xc;
    FVar41.Data = local_7b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar47 != iVar18) {
        local_8e4 = 0;
        `TCheckedPointerIterator<UE::THash<96>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_8e4);
      }
      if (FVar41.Data == pFVar45) break;
      FStack_59c = FCasLocation::Invalid.BlockId.Id;
      uStack_598 = FCasLocation::Invalid.BlockOffset;
      uStack_58c = *(undefined4 *)(FVar41.Data + 8);
      local_5a0 = 1;
      uStack_594 = (undefined4)*(undefined8 *)FVar41.Data;
      uStack_590 = (undefined4)((ulonglong)*(undefined8 *)FVar41.Data >> 0x20);
      iVar22 = local_828.Entries.ArrayNum;
      if (local_828.Entries.ArrayNum == local_828.Entries.ArrayMax) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_828.Entries.AllocatorInstance,&local_828.Entries.ArrayMax);
      }
      FVar41.Data = FVar41.Data + 0xc;
      local_828.Entries.ArrayNum = iVar22 + 1;
      *(ulonglong *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar22 * 0x18) =
           CONCAT44(FStack_59c.Id,local_5a0);
      *(ulonglong *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar22 * 0x18 + 8) =
           CONCAT44(uStack_594,uStack_598);
      *(ulonglong *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar22 * 0x18 + 0x10) =
           CONCAT44(uStack_58c,uStack_590);
      uVar47 = local_7b8._8_8_ & 0xffffffff;
    }
    uStack_674 = (((FDefragBlock *)FVar44.Data)->BlockId).Id;
    local_678 = 3;
    FVar34 = FDateTime::UtcNow();
    local_668 = 0;
    uStack_670 = *(undefined8 *)FVar34.Ticks;
    uStack_667 = 0;
    uStack_663 = 0;
    uStack_661 = 0;
    iVar18 = local_828.Entries.ArrayNum;
    if (local_828.Entries.ArrayNum == local_828.Entries.ArrayMax) {
      iVar18 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_828.Entries.AllocatorInstance,&local_828.Entries.ArrayMax);
    }
    local_828.Entries.ArrayNum = iVar18 + 1;
    local_428 = 0;
    local_6c4 = 0;
    *(ulonglong *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar18 * 0x18) =
         CONCAT44(uStack_674,local_678);
    *(undefined8 *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar18 * 0x18 + 8) =
         uStack_670;
    *(ulonglong *)(local_828.Entries.AllocatorInstance.Data + (longlong)iVar18 * 0x18 + 0x10) =
         CONCAT17(uStack_661,CONCAT25(uStack_663,CONCAT41(uStack_667,local_668)));
    FCasJournal::Commit(&local_588,&local_828,&local_428,&local_6c4);
    TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
    if (local_588.Error.bIsSet == false) {
      if (local_938.bIsSet != false) {
        local_938.TypedValue.ErrorCode = 0;
        local_938.TypedValue.ModuleId = 0;
        if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar38.Reference + 0x10))();
          if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        local_938.bIsSet = false;
      }
    }
    else {
      if ((local_938.bIsSet != false) &&
         (local_938.TypedValue.ErrorCode = 0, local_938.TypedValue.ModuleId = 0,
         local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar38.Reference + 0x10))();
        if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
      UnifiedError::FError::FError(&local_938.TypedValue,(FError *)&local_588);
      local_938.bIsSet = true;
      if ((local_588.Error.bIsSet == false) ||
         (local_588.Error.TypedValue.ErrorCode = 0, local_588.Error.TypedValue.ModuleId = 0,
         local_588.Error.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0)) {
LAB_1445c571a:
        *(bool *)&local_8f0[1].ErrorCode = local_938.bIsSet;
        (((TOptional<UE::UnifiedError::FError> *)&local_8f0->ErrorCode)->TypedValue).ErrorCode =
             local_938.TypedValue.ErrorCode;
        local_8f0->ModuleId = local_938.TypedValue.ModuleId;
        (local_8f0->ErrorDetails).Reference = (IErrorDetails *)0x0;
        local_938.TypedValue.ErrorCode = 0;
        local_938.TypedValue.ModuleId = 0;
        if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (local_8f0->ErrorDetails).Reference = local_938.TypedValue.ErrorDetails.Reference;
          (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 8))
                    (local_938.TypedValue.ErrorDetails.Reference,local_4c4);
          TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference;
          if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar38.Reference + 0x10))();
          }
        }
        if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7b8.AllocatorInstance.Data);
        }
        if (local_828.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.Entries.AllocatorInstance.Data);
        }
        if (local_828.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.JournalFile.Data.AllocatorInstance.Data);
        }
        if (local_8c8.ChunkHashes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.ChunkHashes.AllocatorInstance.Data);
        }
        DestructItems<FIoBuffer,int>
                  ((FIoBuffer *)local_8c8.Chunks.AllocatorInstance.Data,local_8c8.Chunks.ArrayNum);
        if (local_8c8.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8c8.Chunks.AllocatorInstance.Data);
        }
        DestructItems<_UE::IoStore::FOnDemandInstallCache::Defrag_::__l2::FDefragBlock,int>
                  ((FDefragBlock *)local_920.Data,(uint)local_918);
        if ((FDefragBlock *)local_920.Data != (FDefragBlock *)0x0) {
          FMemory::Free(local_920.Data);
        }
        `UE::IoStore::FOnDemandInstallCache::Defrag'::__l2::<lambda_1>::operator()(&local_7e8);
        if ((local_938.bIsSet != false) &&
           (TVar38.Reference = local_938.TypedValue.ErrorDetails.Reference,
           local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
LAB_1445c4dbe:
          local_938.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_938.TypedValue.ErrorCode = 0;
          local_938.TypedValue.ModuleId = 0;
          (**(code **)((longlong)*TVar38.Reference + 0x10))();
          if (local_938.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_938.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        return (TValueOrError<void,UE::UnifiedError::FError> *)local_8f0;
      }
      IVar5 = *local_588.Error.TypedValue.ErrorDetails.Reference;
      local_588.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)IVar5 + 0x10))();
      if (local_938.bIsSet != false) goto LAB_1445c571a;
    }
    if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.AllocatorInstance.Data);
    }
    if (local_828.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Entries.AllocatorInstance.Data);
    }
    if (local_828.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.JournalFile.Data.AllocatorInstance.Data);
    }
    FVar44.Data = FVar44.Data + 0x20;
    uVar47 = (ulonglong)local_848;
  } while( true );
}

// DefragAll @ 1445c6430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::DefragAll
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,ulong64 *param_1)

{
  FSharedMutex *this_00;
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  int iVar3;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar4;
  bool bVar5;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c8;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_b0;
  ulong64 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  this_00 = &this->PurgeDefragMutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_int>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FSharedMutex::LockSlow(this_00);
  }
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  FCas::GetBlockInfo(&this->Cas,
                     (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                      *)local_98);
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  FOnDemandIoStore::GetReferencedContent(this->IoStore,&local_b0,&local_c0,false);
  if ((local_b0.ArrayNum != local_c0.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Containers.Num() == ChunkEntryIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                         ,0x9e6,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar2)();
    return pTVar4;
  }
  local_a0 = 0;
  AddReferencesToBlocks
            (this,&local_b0,&local_c0,
             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_98,&local_a0);
  Algo::
  TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::DefragAll_::__l2::<lambda_1>,TPlus<void>_>
            ((TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_98,local_c8,0,(TPlus<void>)local_c8);
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  Defrag(this,__return_storage_ptr__,&local_b0,&local_c0,
         (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
          *)local_98,param_1,(ulong64 *)0x0);
  DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
            ((TBitArray<FDefaultBitArrayAllocator> *)local_c0.AllocatorInstance.Data,
             local_c0.ArrayNum);
  if ((TBitArray<FDefaultBitArrayAllocator> *)local_c0.AllocatorInstance.Data !=
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_b0.AllocatorInstance.Data,
             local_b0.ArrayNum);
  if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_b0.AllocatorInstance.Data !=
      (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_int>)((int)this_00->State + -1);
  UNLOCK();
  if (((uint)aVar1 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads(this_00,(uint)aVar1);
  }
  return __return_storage_ptr__;
}

// DoesChunkExist @ 1445c89d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandInstallCache::DoesChunkExist(FOnDemandInstallCache *this,FIoChunkId *param_1)

{
  FSharedMutex *this_00;
  FScriptContainerElement *pFVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  EIoErrorCode local_res8;
  int local_resc;
  FOnDemandChunkInfo local_28;
  
  FOnDemandIoStore::GetInstalledChunkInfo(this->IoStore,&local_28,param_1,&local_res8);
  if (local_28.SharedContainer.Object == (FOnDemandContainer *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
    return false;
  }
  this_00 = &(this->PendingChunks).SharedMutex;
  aVar2 = this_00->State;
  if (((uint)aVar2 & 3) == 0) {
    LOCK();
    bVar4 = aVar2 == this_00->State;
    if (bVar4) {
      this_00->State = (atomic<unsigned_int>)((int)aVar2 + 8);
    }
    UNLOCK();
    if (bVar4) goto LAB_1445c8a23;
  }
  FSharedMutex::LockSharedSlow(this_00);
LAB_1445c8a23:
  pFVar3 = (this->PendingChunks).ChunkHashes.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->PendingChunks).ChunkHashes.ArrayNum * 0x14;
  do {
    if (pFVar3 == pFVar1) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
      UNLOCK();
      if (((uint)aVar2 & 0xfffffffb) == 10) {
        FSharedMutex::WakeWaitingThread(this_00);
      }
      FCas::FindChunk(&this->Cas,(FIoHash *)&local_res8);
      if ((local_res8 == Ok) || (local_resc == -1)) {
        bVar4 = false;
      }
      else {
LAB_1445c8ad6:
        bVar4 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
      return bVar4;
    }
    if (((*(longlong *)pFVar3 == *(longlong *)((local_28.Entry)->Hash).Hash) &&
        (*(longlong *)(pFVar3 + 8) == *(longlong *)(((local_28.Entry)->Hash).Hash + 8))) &&
       (*(int *)(pFVar3 + 0x10) == *(int *)(((local_28.Entry)->Hash).Hash + 0x10))) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
      UNLOCK();
      if (((uint)aVar2 & 0xfffffffb) == 10) {
        FSharedMutex::WakeWaitingThread(this_00);
      }
      goto LAB_1445c8ad6;
    }
    pFVar3 = pFVar3 + 0x14;
  } while( true );
}

// Flush @ 1445cdca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::Flush
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__)

{
  FPendingChunks *this_00;
  code *pcVar1;
  bool bVar2;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar3;
  FPendingChunks *local_res8;
  TValueOrError<void,UE::UnifiedError::FError> local_28;
  
  this_00 = &this->PendingChunks;
  if ((this->PendingChunks).Chunks.ArrayNum != (this->PendingChunks).ChunkHashes.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunks.Num() == ChunkHashes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x692,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((((this->PendingChunks).TotalSize == 0) && ((this->PendingChunks).Chunks.ArrayNum == 0)) &&
     ((this->PendingChunks).ChunkHashes.ArrayNum == 0)) {
    local_28.Error.bIsSet = false;
  }
  else {
    local_res8 = this_00;
    FlushPendingChunksImpl(this,&local_28,this_00,0);
    ScopeExitSupport::
    TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>::
    ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
              (&local_res8);
  }
  if (local_28.Error.bIsSet == false) {
    bVar2 = FPendingChunks::IsEmpty(this_00);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingChunks.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                         ,0xd19,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
        return pTVar3;
      }
    }
    FCas::Compact(&this->Cas);
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  else {
    (__return_storage_ptr__->Error).bIsSet = local_28.Error.bIsSet;
    UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_28);
    if ((local_28.Error.bIsSet != false) &&
       (local_28.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      (**(code **)((longlong)*local_28.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FlushLastAccess @ 1445cddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::FlushLastAccess
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__)

{
  code *pcVar1;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar4;
  FInstallCacheErrorContext *pFVar5;
  undefined1 auStackY_188 [32];
  EDetailFilter local_148 [8];
  ForAnyElementType local_140;
  undefined8 local_138;
  TValueOrError<void,UE::UnifiedError::FError> local_130;
  uint local_118 [2];
  FString local_110;
  FTransaction local_100;
  ulong64 local_e0;
  FString local_d8;
  FInstallCacheErrorContext local_c8;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FCas::GetAndClearDirtyLastAccess
            (&this->Cas,
             (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
              *)local_88);
  if (local_88._8_4_ == local_88._52_4_) {
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  else {
    ::operator/(&local_110,&this->CacheDirectory,L"cas.jrn");
    _Src.Data = local_110.Data.AllocatorInstance.Data;
    local_100.JournalFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.JournalFile.Data.ArrayMax = 0;
    local_140.Data = (FScriptContainerElement *)0x0;
    if (local_110.Data.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_110.Data.ArrayNum,0,&local_140,local_110.Data.ArrayNum,
                 (int *)((longlong)&local_138 + 4));
      memcpy(local_140.Data,_Src.Data,(longlong)local_110.Data.ArrayNum * 2);
      local_100.JournalFile.Data.AllocatorInstance.Data = local_140.Data;
      local_100.JournalFile.Data.ArrayMax = local_138._4_4_;
    }
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    local_100.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Entries.ArrayNum = 0;
    local_100.Entries.ArrayMax = 0;
    JournalLastAccess(&local_100,
                      (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
                       *)local_88);
    local_e0 = 0;
    local_118[0] = 0;
    FCasJournal::Commit(&local_130,&local_100,&local_e0,local_118);
    if (local_130.Error.bIsSet == false) {
      (__return_storage_ptr__->Error).bIsSet = false;
    }
    else {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        ::LexToString(&local_d8,(FError *)&local_130);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      if ((local_130.Error.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
        return pTVar4;
      }
      local_148[0] = Default;
      pFVar5 = MakeInstallCacheErrorContext(this,&local_c8,0,0xd30);
      UnifiedError::FError::
      PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                ((FError *)&local_130,pFVar5,local_148);
      FIoStatus::~FIoStatus(&local_c8.IoError);
      (__return_storage_ptr__->Error).bIsSet = local_130.Error.bIsSet;
      if (((local_130.Error.bIsSet != false) &&
          (UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_130),
          TVar2.Reference = local_130.Error.TypedValue.ErrorDetails.Reference,
          local_130.Error.bIsSet != false)) &&
         (local_130.Error.TypedValue.ErrorCode = 0, local_130.Error.TypedValue.ModuleId = 0,
         local_130.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_130.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar2.Reference + 0x10))();
        if (local_130.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_130.Error.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
    }
    if (local_100.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Entries.AllocatorInstance.Data);
    }
    if (local_100.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.JournalFile.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return __return_storage_ptr__;
}

// FlushPendingChunks @ 1445ce220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::FlushPendingChunks
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          FPendingChunks *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar3;
  FPendingChunks *local_res18;
  
  if ((param_1->Chunks).ArrayNum != (param_1->ChunkHashes).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunks.Num() == ChunkHashes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x692,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if (((param_1->TotalSize == 0) && ((param_1->Chunks).ArrayNum == 0)) &&
     ((param_1->ChunkHashes).ArrayNum == 0)) {
    (__return_storage_ptr__->Error).bIsSet = false;
  }
  else {
    local_res18 = param_1;
    FlushPendingChunksImpl(this,__return_storage_ptr__,param_1,param_2);
    ScopeExitSupport::
    TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>::
    ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
              (&local_res18);
  }
  return __return_storage_ptr__;
}

// FlushPendingChunksImpl @ 1445ce2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445cf65a) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          FPendingChunks *param_1,long64 param_2)

{
  atomic<unsigned_char> aVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  IErrorDetails IVar5;
  code *pcVar6;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar7;
  atomic<UE::IoStore::FCasBlockId> aVar8;
  FCas *this_00;
  ForAnyElementType FVar9;
  bool bVar10;
  char cVar11;
  FCasBlockId FVar12;
  int iVar13;
  DWORD DVar14;
  undefined4 extraout_var;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar15;
  FDateTime FVar16;
  FPlatformFileManager *this_01;
  IPlatformFile *pIVar17;
  longlong *plVar18;
  longlong lVar19;
  uchar *puVar20;
  FCasLocation *pFVar21;
  TOptional<UE::UnifiedError::FError> *pTVar22;
  uint uVar23;
  longlong lVar24;
  FInstallCacheErrorContext *this_02;
  ulong64 uVar25;
  ForAnyElementType FVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  IErrorDetails *pIVar29;
  long64 lVar30;
  FOnDemandInstallCache *this_03;
  uint uVar31;
  atomic<unsigned_char> *this_04;
  FCas *this_05;
  longlong lVar32;
  bool bVar33;
  undefined1 auStackY_498 [32];
  TOptional<UE::UnifiedError::FError> local_448;
  EDetailFilter local_430;
  EDetailFilter local_42f;
  EDetailFilter local_42e;
  EDetailFilter local_42d;
  int local_42c;
  atomic<UE::IoStore::FCasBlockId> local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  FOnDemandInstallCache *local_410;
  FTransaction local_400;
  uint local_3e0;
  uint local_3dc;
  FScriptContainerElement *local_3d8;
  TValueOrError<void,UE::UnifiedError::FError> *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  FCas *local_3a8;
  undefined4 local_3a0;
  atomic<UE::IoStore::FCasBlockId> aStack_39c;
  undefined8 uStack_398;
  undefined1 local_390;
  undefined4 uStack_38f;
  undefined2 uStack_38b;
  undefined1 uStack_389;
  longlong *local_388;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> local_380;
  char local_378;
  FString local_370;
  longlong *local_360;
  ulong64 local_358;
  FCas *local_350;
  undefined4 local_348;
  FCasBlockId FStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  int iStack_334;
  TValueOrError<void,UE::UnifiedError::FError> local_330;
  long64 local_318;
  atomic<unsigned_char> *local_308;
  FPendingChunks *local_300;
  FString *local_2f8;
  undefined1 local_2ec [4];
  undefined1 local_2e8 [4];
  undefined1 local_2e4 [4];
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  undefined1 local_2d8 [4];
  undefined1 local_2d4 [4];
  TOptional<UE::UnifiedError::FError> *local_2d0;
  longlong *local_2c8;
  FOnDemandInstallCache *local_2c0;
  longlong *local_2b8;
  int *local_2b0;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278 [2];
  TOptional<UE::UnifiedError::FError> local_258;
  TOptional<UE::UnifiedError::FError> local_240;
  FLargeMemoryWriter local_228;
  FInstallCacheErrorContext local_168;
  FInstallCacheErrorContext local_130;
  FInstallCacheErrorContext local_f8;
  FInstallCacheErrorContext local_c0;
  TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
  local_88;
  THash<96> local_70;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar31 = 0;
  local_2d0 = &local_448;
  local_2c8 = &local_3b8;
  uVar25 = 0x2000000;
  if (param_1->TotalSize < 0x2000000) {
    uVar25 = param_1->TotalSize;
  }
  local_2b8 = &local_3b0;
  local_2b0 = &local_42c;
  local_448.bIsSet = false;
  local_3b8 = 0;
  local_3b0 = 0;
  local_42c = 0;
  local_410 = this;
  local_3d0 = __return_storage_ptr__;
  local_318 = param_2;
  local_300 = param_1;
  local_2c0 = this;
  FLargeMemoryWriter::FLargeMemoryWriter(&local_228,uVar25,false,(wchar_t *)0x0);
  FVar12.Id = *(uint *)&this->CurrentBlock;
  local_3e0 = 0;
  local_428 = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id;
  if (0 < (param_1->Chunks).ArrayNum) {
    local_3a8 = &this->Cas;
    local_2f8 = &this->CacheDirectory;
    local_3c0 = 0;
    local_350 = local_3a8;
    do {
      this_05 = local_350;
      this_00 = local_3a8;
      ::operator/(&local_370,local_2f8,L"cas.jrn");
      bVar33 = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id != (atomic<UE::IoStore::FCasBlockId>)0x0;
      local_400.JournalFile.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
      local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_400.JournalFile.Data.ArrayNum = local_370.Data.ArrayNum;
      local_400.JournalFile.Data.ArrayMax = local_370.Data.ArrayMax;
      local_370.Data.ArrayNum = 0;
      local_370.Data.ArrayMax = 0;
      local_400.Entries.ArrayNum = 0;
      local_400.Entries.ArrayMax = 0;
      if ((atomic<UE::IoStore::FCasBlockId>)FVar12.Id == (atomic<UE::IoStore::FCasBlockId>)0x0) {
        FVar12 = FCas::CreateBlock(this_00);
        FVar12.Id = *(uint *)CONCAT44(extraout_var,FVar12.Id);
        local_428 = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id;
        if (((atomic<UE::IoStore::FCasBlockId>)FVar12.Id == (atomic<UE::IoStore::FCasBlockId>)0x0)
           && (bVar10 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_4406625557953901116>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                   ,0xdc4,"CurrentBlockId.IsValid()"), bVar10)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        local_3a0 = 2;
        LOCK();
        this->CurrentBlock = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id;
        UNLOCK();
        aStack_39c = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id;
        FVar16 = FDateTime::UtcNow();
        local_390 = 0;
        uStack_398 = *(undefined8 *)FVar16.Ticks;
        uStack_38f = 0;
        uStack_38b = 0;
        uStack_389 = 0;
        iVar13 = local_400.Entries.ArrayNum;
        if (local_400.Entries.ArrayNum == local_400.Entries.ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_400.Entries.AllocatorInstance,&local_400.Entries.ArrayMax
                             );
        }
        local_400.Entries.ArrayNum = iVar13 + 1;
        *(ulonglong *)(local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18) =
             CONCAT44(aStack_39c,local_3a0);
        *(undefined8 *)(local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 8) =
             uStack_398;
        *(ulonglong *)(local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 0x10) =
             CONCAT17(uStack_389,CONCAT25(uStack_38b,CONCAT41(uStack_38f,local_390)));
        this_05 = this_00;
        local_350 = this_00;
      }
      this_01 = FPlatformFileManager::Get();
      pIVar17 = FPlatformFileManager::GetPlatformFile(this_01);
      FCas::GetBlockFilename(this_05,&local_2a8,FVar12);
      FVar9.Data = local_2a8.Data.AllocatorInstance.Data;
      FVar26.Data = (FScriptContainerElement *)L"";
      if (local_2a8.Data.ArrayNum != 0) {
        FVar26.Data = local_2a8.Data.AllocatorInstance.Data;
      }
      plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x110))(pIVar17,FVar26.Data,bVar33,1);
      if (plVar18 == (longlong *)0x0) {
        DVar14 = FWindowsPlatformMisc::GetLastError();
        ::FString::PrintfImpl(&local_298,L"Failed to open CAS block \'%s\' for writing");
        UnifiedError::IoStoreOnDemand::
        MakeCasError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_>
                  ((TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>
                    *)&local_88,WriteBlockFailed,FileOpenFailed,&local_298,DVar14);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_88.TypeIndex = 0;
        local_88._padding_ = (longlong)plVar18;
      }
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
      uVar28 = (ulonglong)local_88.TypeIndex;
      if ((2 < uVar28) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TSharedPtr<IFileHandle,1>,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar28 + 4) != '\0') {
        MakeInstallCacheErrorContext(local_410,&local_c0,0,0xdcc);
        if ((local_88.TypeIndex != 1) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        local_42d = Default;
        UnifiedError::FError::
        PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                  ((FError *)&local_88,&local_c0,&local_42d);
        if ((local_88.TypeIndex != 1) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        lVar32 = local_88._padding_;
        lVar19 = local_88._padding_;
        local_88._padding_ = 0;
        pIVar29 = (IErrorDetails *)0x0;
        if (((IErrorDetails *)local_88._padding_ != (IErrorDetails *)0x0) &&
           ((**(code **)((longlong)*(IErrorDetails *)local_88._padding_ + 8))
                      (local_88._padding_,local_2e0), lVar24 = local_88._padding_,
           pIVar29 = (IErrorDetails *)lVar32,
           (IErrorDetails *)local_88._padding_ != (IErrorDetails *)0x0)) {
          local_88._padding_ = 0;
          (**(code **)((longlong)*(IErrorDetails *)lVar24 + 0x10))();
        }
        uVar28 = (ulonglong)local_88.TypeIndex;
        if ((2 < local_88.TypeIndex) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28] !=
            Core::Private::
            TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
            ::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28])(&local_88);
        }
        local_88.TypeIndex = 2;
        local_380.Reference = (IErrorDetails *)0x0;
        local_388 = (longlong *)lVar19;
        if (pIVar29 != (IErrorDetails *)0x0) {
          local_380.Reference = pIVar29;
          (**(code **)((longlong)*pIVar29 + 8))(pIVar29,local_2dc);
          (**(code **)((longlong)*pIVar29 + 0x10))();
        }
        TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
        local_378 = '\x01';
        if ((local_448.bIsSet != false) &&
           (local_448.TypedValue.ErrorCode = 0, local_448.TypedValue.ModuleId = 0,
           local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar7.Reference + 0x10))();
          if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        UnifiedError::FError::FError(&local_448.TypedValue,(FError *)&local_388);
        pTVar15 = local_3d0;
        local_448.bIsSet = true;
        (local_3d0->Error).bIsSet = true;
        (local_3d0->Error).TypedValue.ErrorCode = local_448.TypedValue.ErrorCode;
        (local_3d0->Error).TypedValue.ModuleId = local_448.TypedValue.ModuleId;
        (local_3d0->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (local_3d0->Error).TypedValue.ErrorDetails.Reference =
               local_448.TypedValue.ErrorDetails.Reference;
          (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 8))
                    (local_448.TypedValue.ErrorDetails.Reference,local_2d8);
        }
        if ((local_378 != '\0') &&
           (local_388 = (longlong *)0x0, local_380.Reference != (IErrorDetails *)0x0)) {
          IVar5 = *local_380.Reference;
          local_380.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)IVar5 + 0x10))();
        }
        FIoStatus::~FIoStatus(&local_c0.IoError);
        uVar28 = (ulonglong)local_88.TypeIndex;
        if ((2 < local_88.TypeIndex) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28] !=
            Core::Private::
            TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
            ::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28])(&local_88);
        }
        if (local_400.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Entries.AllocatorInstance.Data);
        }
        if (local_400.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.JournalFile.Data.AllocatorInstance.Data);
        }
        FLargeMemoryWriter::~FLargeMemoryWriter(&local_228);
        ScopeExitSupport::
        TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl_::__l2::<lambda_1>_>
                  (&local_2d0);
        TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
        goto joined_r0x0001445cf253;
      }
      if ((local_88.TypeIndex != 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      plVar18 = (longlong *)local_88._padding_;
      uVar28 = (ulonglong)local_88.TypeIndex;
      local_88._padding_ = 0;
      local_360 = plVar18;
      if ((2 < local_88.TypeIndex) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28] ==
          Core::Private::TDestructorCaller<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>_>::
          Destruct) {
        if ((longlong *)local_88._padding_ != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_88._padding_)(local_88._padding_,1);
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28])(&local_88);
      }
      local_88.TypeIndex = 2;
      lVar19 = (**(code **)(*plVar18 + 8))(plVar18);
      local_420.Data = (FScriptContainerElement *)0x0;
      local_418 = 0;
      uVar23 = 0;
      if ((int)uVar31 < (param_1->ChunkHashes).ArrayNum) {
        uVar23 = ~uVar31 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      local_3d8 = (param_1->ChunkHashes).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x14;
      iVar13 = (param_1->Chunks).ArrayNum;
      uVar23 = local_3e0;
      if ((int)uVar31 < iVar13) {
        do {
          lVar32 = local_228._padding_;
          if (0 < lVar19) {
            uVar23 = 0;
            if ((int)uVar31 < iVar13) {
              uVar23 = ~uVar31 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
              return pTVar15;
            }
            lVar24 = *(longlong *)((param_1->Chunks).AllocatorInstance.Data + local_3c0 * 8);
            plVar18 = local_360;
            FVar12.Id = (uint)local_428;
            uVar23 = uVar31;
            if (0x2000000 <
                (ulonglong)CONCAT14(*(undefined1 *)(lVar24 + 0x18),*(undefined4 *)(lVar24 + 8)) +
                lVar32 + lVar19) break;
          }
          uVar23 = 0;
          if ((int)uVar31 < (param_1->Chunks).ArrayNum) {
            uVar23 = ~uVar31 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar33)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
            return pTVar15;
          }
          pFVar2 = (param_1->Chunks).AllocatorInstance.Data;
          local_3c8 = local_228._padding_ + lVar19;
          if (((local_420.Data <= (FScriptContainerElement *)&local_3c8) &&
              ((FScriptContainerElement *)&local_3c8 <
               local_420.Data + (longlong)local_418._4_4_ * 8)) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar33)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
            return pTVar15;
          }
          if (local_418._0_4_ == (atomic<UE::IoStore::FCasBlockId>)local_418._4_4_) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_420,(int *)((longlong)&local_418 + 4));
            local_418 = CONCAT44(local_418._4_4_,iVar13);
          }
          lVar32 = local_3c0;
          lVar24 = (longlong)(int)local_418._0_4_;
          local_418 = CONCAT44(local_418._4_4_,(int)local_418._0_4_ + 1);
          *(longlong *)(local_420.Data + lVar24 * 8) = local_3c8;
          puVar3 = *(undefined8 **)(pFVar2 + local_3c0 * 8);
          FLargeMemoryWriter::Serialize
                    (&local_228,(void *)*puVar3,
                     (ulonglong)CONCAT14(*(undefined1 *)(puVar3 + 3),*(undefined4 *)(puVar3 + 1)));
          iVar13 = (param_1->Chunks).ArrayNum;
          local_3c0 = lVar32 + 1;
          uVar31 = uVar31 + 1;
          plVar18 = local_360;
          FVar12.Id = (uint)local_428;
          uVar23 = uVar31;
        } while ((int)uVar31 < iVar13);
      }
      local_3e0 = uVar23;
      aVar8 = local_418._0_4_;
      local_428 = local_418._0_4_;
      if (((int)local_418._0_4_ < 0) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      lVar32 = local_228._padding_;
      this_03 = local_410;
      if (0 < local_228._padding_) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        if ((0x2000000 < lVar32 + lVar19) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("CasBlockOffset + BytesToWrite <= Cas.GetMaxBlockSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                ,0xded,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        pcVar6 = *(code **)(*plVar18 + 0x30);
        puVar20 = FLargeMemoryWriter::GetData(&local_228);
        cVar11 = (*pcVar6)(plVar18,puVar20,lVar32);
        if (cVar11 == '\0') {
          DVar14 = FWindowsPlatformMisc::GetLastError();
          ::FString::PrintfImpl(local_278,L"Failed to write %lld bytes to CAS block %u");
          pTVar22 = &UnifiedError::IoStoreOnDemand::MakeCasError<void>
                               ((TValueOrError<void,UE::UnifiedError::FError> *)&local_240,
                                WriteBlockFailed,WriteError,local_278,DVar14)->Error;
          TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
          if (pTVar22 != &local_448) {
            if (pTVar22->bIsSet == false) {
              if (local_448.bIsSet != false) {
                local_448.TypedValue.ErrorCode = 0;
                local_448.TypedValue.ModuleId = 0;
                if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                  (**(code **)((longlong)*TVar7.Reference + 0x10))();
                  if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
                  }
                }
                local_448.bIsSet = false;
              }
            }
            else {
              if ((local_448.bIsSet != false) &&
                 (local_448.TypedValue.ErrorCode = 0, local_448.TypedValue.ModuleId = 0,
                 local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
                local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar7.Reference + 0x10))();
                if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
                }
              }
              UnifiedError::FError::FError(&local_448.TypedValue,&pTVar22->TypedValue);
              local_448.bIsSet = true;
            }
          }
          TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_240);
          if (local_278[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278[0].Data.AllocatorInstance.Data);
          }
          MakeInstallCacheErrorContext(local_410,&local_130,0,0xdf3);
          if ((local_448.bIsSet == false) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar33)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
            return pTVar15;
          }
          local_42f = Default;
          UnifiedError::FError::
          PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                    (&local_448.TypedValue,&local_130,&local_42f);
          pTVar15 = local_3d0;
          (local_3d0->Error).bIsSet = local_448.bIsSet;
          if (local_448.bIsSet != false) {
            (local_3d0->Error).TypedValue.ErrorCode = local_448.TypedValue.ErrorCode;
            (local_3d0->Error).TypedValue.ModuleId = local_448.TypedValue.ModuleId;
            (local_3d0->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_448.TypedValue.ErrorCode = 0;
            local_448.TypedValue.ModuleId = 0;
            if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (local_3d0->Error).TypedValue.ErrorDetails.Reference =
                   local_448.TypedValue.ErrorDetails.Reference;
              (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 8))
                        (local_448.TypedValue.ErrorDetails.Reference,local_2e8);
              TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
              if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar7.Reference + 0x10))();
              }
            }
          }
          this_02 = &local_130;
        }
        else {
          local_42c = local_42c + 1;
          local_3b8 = local_3b8 + lVar32;
          cVar11 = (**(code **)(*plVar18 + 0x38))(plVar18);
          lVar30 = local_318;
          if (cVar11 != '\0') {
            local_42c = local_42c + 1;
            if (local_318 == 0) {
              FVar16 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
              lVar30 = *FVar16.Ticks;
              bVar33 = FCas::TrackAccessIf(local_3a8,Always,FVar12,lVar30,false);
              if ((!bVar33) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Cas.TrackAccessIf(ECasTrackAccessType::Always, CurrentBlockId, Now, bDirty)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                      ,0xe0f,L""), bVar33)) {
                pcVar6 = (code *)swi(3);
                pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
                return pTVar15;
              }
LAB_1445cea7e:
              FCasJournal::FTransaction::BlockAccess(&local_400,FVar12,lVar30);
            }
            else {
              bVar33 = FCas::TrackAccessIf(local_3a8,Newer,FVar12,local_318,false);
              if (bVar33) goto LAB_1445cea7e;
            }
            if ((aVar8 != local_418._0_4_) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChunkHashes.Num() == Offsets.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                    ,0xe13,L""), bVar33)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
              return pTVar15;
            }
            if ((FVar12.Id == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CurrentBlockId.IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                    ,0xe14,L""), bVar33)) {
              pcVar6 = (code *)swi(3);
              pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
              return pTVar15;
            }
            this_03 = local_410;
            this_04 = &(local_410->Cas).Mutex.State;
            LOCK();
            bVar33 = ((FMutex *)this_04)->State == (atomic<unsigned_char>)0x0;
            if (bVar33) {
              ((FMutex *)this_04)->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            local_308 = this_04;
            if (!bVar33) {
              FMutex::LockSlow((FMutex *)this_04);
            }
            aVar8 = local_428;
            uVar31 = 0;
            lVar32 = 0;
            lVar19 = (longlong)(int)local_418._0_4_;
            if (0 < lVar19) {
              do {
                uVar23 = 0;
                if ((int)uVar31 < (int)aVar8) {
                  uVar23 = ~uVar31 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar33)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
                  return pTVar15;
                }
                local_70.Hash._0_8_ = *(undefined8 *)local_3d8;
                local_70.Hash._8_4_ = *(undefined4 *)(local_3d8 + 8);
                uVar23 = 0;
                if ((int)uVar31 < (int)local_418._0_4_) {
                  uVar23 = ~uVar31 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
                  return pTVar15;
                }
                uVar28 = *(ulonglong *)(local_420.Data + lVar32 * 8);
                if (((uVar28 != (uVar28 & 0xffffffff)) || ((longlong)uVar28 < 0)) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IntFitsIn<OutType>(In)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                        ,0xaa,
                                        L"Loss of data caused by narrowing conversion, In = %lld"),
                   bVar33)) {
                  pcVar6 = (code *)swi(3);
                  pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
                  return pTVar15;
                }
                if (*(int *)&(this_03->Cas).Lookup.field_0x8 !=
                    *(int *)&(this_03->Cas).Lookup.field_0x34) {
                  puVar4 = *(undefined1 **)&(this_03->Cas).Lookup.field_0x40;
                  puVar27 = &(this_03->Cas).Lookup.field_0x38;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar27 = puVar4;
                  }
                  iVar13 = *(int *)(puVar27 +
                                   (ulonglong)
                                   (*(int *)&(this_03->Cas).Lookup.field_0x48 - 1U &
                                   local_70.Hash._0_4_) * 4);
                  if (iVar13 != -1) {
                    do {
                      plVar18 = (longlong *)
                                ((longlong)iVar13 * 0x1c + *(longlong *)&(this_03->Cas).Lookup);
                      if ((*plVar18 == local_70.Hash._0_8_) &&
                         ((int)plVar18[1] == local_70.Hash._8_4_)) {
                        if (plVar18 != (longlong *)0x0) {
                          pFVar21 = (FCasLocation *)((longlong)plVar18 + 0xc);
                          goto LAB_1445ceca9;
                        }
                        break;
                      }
                      iVar13 = *(int *)((longlong)plVar18 + 0x14);
                    } while (iVar13 != -1);
                  }
                }
                pFVar21 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                          ::EmplaceByHash<UE::THash<96>_const_&>
                                    ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                                      *)&(this_03->Cas).Lookup,local_70.Hash._0_4_,&local_70);
LAB_1445ceca9:
                (pFVar21->BlockId).Id = FVar12.Id;
                pFVar21->BlockOffset = (uint)uVar28;
                FStack_344 = (*pFVar21).BlockId;
                uStack_340 = (*pFVar21).BlockOffset;
                iStack_334._0_1_ = local_70.Hash[8];
                iStack_334._1_1_ = local_70.Hash[9];
                iStack_334._2_1_ = local_70.Hash[10];
                iStack_334._3_1_ = local_70.Hash[0xb];
                local_348 = 1;
                uStack_33c = local_70.Hash._0_4_;
                uStack_338 = local_70.Hash._4_4_;
                iVar13 = local_400.Entries.ArrayNum;
                if (local_400.Entries.ArrayNum == local_400.Entries.ArrayMax) {
                  iVar13 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_400.Entries.AllocatorInstance,
                                      &local_400.Entries.ArrayMax);
                }
                uVar31 = uVar31 + 1;
                local_400.Entries.ArrayNum = iVar13 + 1;
                lVar32 = lVar32 + 1;
                *(ulonglong *)(local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18) =
                     CONCAT44(FStack_344.Id,local_348);
                *(ulonglong *)
                 (local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 8) =
                     CONCAT44(uStack_33c,uStack_340);
                *(ulonglong *)
                 (local_400.Entries.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 0x10) =
                     CONCAT44(iStack_334,uStack_338);
                local_3d8 = local_3d8 + 0x14;
                plVar18 = local_360;
                this_04 = local_308;
              } while (lVar32 < lVar19);
            }
            LOCK();
            aVar1 = *this_04;
            *this_04 = (atomic<unsigned_char>)((char)*this_04 + -1);
            UNLOCK();
            if (((byte)aVar1 & 2) != 0) {
              FMutex::WakeWaitingThread((FMutex *)this_04);
            }
            local_228._padding_ = 0;
            uVar31 = local_3e0;
            goto LAB_1445ced75;
          }
          DVar14 = FWindowsPlatformMisc::GetLastError();
          ::FString::PrintfImpl(&local_288,L"Failed to flush %lld bytes to CAS block %u");
          pTVar22 = &UnifiedError::IoStoreOnDemand::MakeCasError<void>
                               ((TValueOrError<void,UE::UnifiedError::FError> *)&local_258,
                                WriteBlockFailed,FileFlushFailed,&local_288,DVar14)->Error;
          TOptional<UE::UnifiedError::FError>::operator=(&local_448,pTVar22);
          TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_258);
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          MakeInstallCacheErrorContext(local_410,&local_168,0,0xdfe);
          if ((local_448.bIsSet == false) &&
             (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar33)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
            return pTVar15;
          }
          local_430 = Default;
          UnifiedError::FError::
          PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                    (&local_448.TypedValue,&local_168,&local_430);
          pTVar15 = local_3d0;
          (local_3d0->Error).bIsSet = local_448.bIsSet;
          if (local_448.bIsSet != false) {
            (local_3d0->Error).TypedValue.ErrorCode = local_448.TypedValue.ErrorCode;
            (local_3d0->Error).TypedValue.ModuleId = local_448.TypedValue.ModuleId;
            (local_3d0->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_448.TypedValue.ErrorCode = 0;
            local_448.TypedValue.ModuleId = 0;
            if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (local_3d0->Error).TypedValue.ErrorDetails.Reference =
                   local_448.TypedValue.ErrorDetails.Reference;
              (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 8))
                        (local_448.TypedValue.ErrorDetails.Reference,local_2ec);
              TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
              if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar7.Reference + 0x10))();
              }
            }
          }
          this_02 = &local_168;
        }
        FIoStatus::~FIoStatus(&this_02->IoError);
        if (local_420.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data);
        }
        (**(code **)*plVar18)(plVar18,1);
        TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
        ::
        ~TVariant<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
                  (&local_88);
        if (local_400.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Entries.AllocatorInstance.Data);
        }
        if (local_400.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.JournalFile.Data.AllocatorInstance.Data);
        }
        FLargeMemoryWriter::~FLargeMemoryWriter(&local_228);
        ScopeExitSupport::
        TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl_::__l2::<lambda_1>_>
                  (&local_2d0);
        TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
joined_r0x0001445cf253:
        if (local_448.bIsSet == false) {
          return pTVar15;
        }
        if (TVar7.Reference == (IErrorDetails *)0x0) {
          return pTVar15;
        }
        local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_448.TypedValue.ErrorCode = 0;
        local_448.TypedValue.ModuleId = 0;
        (**(code **)((longlong)*TVar7.Reference + 0x10))();
        if (local_448.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
          return pTVar15;
        }
        (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
        return pTVar15;
      }
LAB_1445ced75:
      local_358 = 0;
      local_3dc = 0;
      pTVar22 = &FCasJournal::Commit(&local_330,&local_400,&local_358,&local_3dc)->Error;
      TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
      if (pTVar22 != &local_448) {
        if (pTVar22->bIsSet == false) {
          if (local_448.bIsSet != false) {
            local_448.TypedValue.ErrorCode = 0;
            local_448.TypedValue.ModuleId = 0;
            if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar7.Reference + 0x10))();
              if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            local_448.bIsSet = false;
          }
        }
        else {
          if ((local_448.bIsSet != false) &&
             (local_448.TypedValue.ErrorCode = 0, local_448.TypedValue.ModuleId = 0,
             local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar7.Reference + 0x10))();
            if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          UnifiedError::FError::FError(&local_448.TypedValue,&pTVar22->TypedValue);
          local_448.bIsSet = true;
        }
      }
      TVar7.Reference = local_330.Error.TypedValue.ErrorDetails.Reference;
      if ((local_330.Error.bIsSet != false) &&
         (local_330.Error.TypedValue.ErrorCode = 0, local_330.Error.TypedValue.ModuleId = 0,
         local_330.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_330.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar7.Reference + 0x10))();
        if (local_330.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_330.Error.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
      param_1 = local_300;
      if (local_448.bIsSet != false) {
        MakeInstallCacheErrorContext(this_03,&local_f8,0,0xe2a);
        if ((local_448.bIsSet == false) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        local_42e = Default;
        UnifiedError::FError::
        PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                  (&local_448.TypedValue,&local_f8,&local_42e);
        pTVar15 = local_3d0;
        (local_3d0->Error).bIsSet = local_448.bIsSet;
        if (local_448.bIsSet != false) {
          (local_3d0->Error).TypedValue.ErrorCode = local_448.TypedValue.ErrorCode;
          (local_3d0->Error).TypedValue.ModuleId = local_448.TypedValue.ModuleId;
          (local_3d0->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_448.TypedValue.ErrorCode = 0;
          local_448.TypedValue.ModuleId = 0;
          if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (local_3d0->Error).TypedValue.ErrorDetails.Reference =
                 local_448.TypedValue.ErrorDetails.Reference;
            (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 8))
                      (local_448.TypedValue.ErrorDetails.Reference,local_2e4);
            TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
            if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar7.Reference + 0x10))();
            }
          }
        }
        FIoStatus::~FIoStatus(&local_f8.IoError);
        if (local_420.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data);
        }
        (**(code **)*plVar18)(plVar18,1);
        uVar28 = (ulonglong)local_88.TypeIndex;
        if ((2 < local_88.TypeIndex) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar33)) {
          pcVar6 = (code *)swi(3);
          pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
          return pTVar15;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28] !=
            Core::Private::
            TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
            ::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar28])(&local_88);
        }
        if (local_400.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Entries.AllocatorInstance.Data);
        }
        if (local_400.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.JournalFile.Data.AllocatorInstance.Data);
        }
        FLargeMemoryWriter::~FLargeMemoryWriter(&local_228);
        ScopeExitSupport::
        TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_>
        ::
        ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl_::__l2::<lambda_1>_>
                  (&local_2d0);
        TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
        goto joined_r0x0001445cf253;
      }
      local_3b0 = local_3b0 + local_358;
      local_42c = local_42c + local_3dc;
      if ((int)uVar31 < (local_300->Chunks).ArrayNum) {
        FVar12.Id = (uint)(atomic<UE::IoStore::FCasBlockId>)0x0;
      }
      local_428 = (atomic<UE::IoStore::FCasBlockId>)FVar12.Id;
      if (local_420.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.Data);
      }
      (**(code **)*plVar18)(plVar18,1);
      uVar28 = (ulonglong)local_88.TypeIndex;
      if ((2 < local_88.TypeIndex) &&
         (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar33)) {
        pcVar6 = (code *)swi(3);
        pTVar15 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar15;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28] !=
          Core::Private::
          TDestructorCaller<TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FEmptyType>
          ::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,TValueOrError<TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IFileHandle,struct_TDefaultDelete<class_IFileHandle>_>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar28])(&local_88);
      }
      if (local_400.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Entries.AllocatorInstance.Data);
      }
      if (local_400.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.JournalFile.Data.AllocatorInstance.Data);
      }
      this = local_410;
      __return_storage_ptr__ = local_3d0;
    } while ((int)uVar31 < (param_1->Chunks).ArrayNum);
  }
  (__return_storage_ptr__->Error).bIsSet = local_448.bIsSet;
  if (local_448.bIsSet != false) {
    (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_448.TypedValue.ErrorCode;
    (__return_storage_ptr__->Error).TypedValue.ModuleId = local_448.TypedValue.ModuleId;
    (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_448.TypedValue.ErrorCode = 0;
    local_448.TypedValue.ModuleId = 0;
    if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
           local_448.TypedValue.ErrorDetails.Reference;
      (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 8))
                (local_448.TypedValue.ErrorDetails.Reference,local_2d4);
      TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
      if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar7.Reference + 0x10))();
      }
    }
  }
  FLargeMemoryWriter::~FLargeMemoryWriter(&local_228);
  ScopeExitSupport::
  TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl'::__l2::<lambda_1>_>::
  ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunksImpl_::__l2::<lambda_1>_>
            (&local_2d0);
  TVar7.Reference = local_448.TypedValue.ErrorDetails.Reference;
  if ((local_448.bIsSet != false) &&
     (local_448.TypedValue.ErrorCode = 0, local_448.TypedValue.ModuleId = 0,
     local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_448.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar7.Reference + 0x10))();
    if (local_448.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_448.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetCacheUsage @ 1445d22b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandInstallCacheUsage * __thiscall
UE::IoStore::FOnDemandInstallCache::GetCacheUsage
          (FOnDemandInstallCache *this,FOnDemandInstallCacheUsage *__return_storage_ptr__)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
  *pTVar4;
  bool bVar5;
  FOnDemandInstallCacheUsage *pFVar6;
  longlong lVar7;
  byte bVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong64 uVar14;
  ulong64 uVar15;
  uint uVar16;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> local_160;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_150;
  ulong64 local_140;
  int local_138;
  FOnDemandInstallCache *local_130;
  ulong64 local_128;
  TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
  *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulong64 uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar15 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar12 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_130 = this;
  local_128 = FCas::GetBlockInfo(&this->Cas,
                                 (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                                  *)local_98);
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  FOnDemandIoStore::GetReferencedContent(this->IoStore,&local_150,&local_160,false);
  if ((local_150.ArrayNum != local_160.ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Containers.Num() == ChunkEntryIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                         ,0xd61,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FOnDemandInstallCacheUsage *)(*pcVar3)();
    return pFVar6;
  }
  local_140 = 0;
  AddReferencesToBlocks
            (this,&local_150,&local_160,
             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_98,&local_140);
  uVar11 = local_70;
  uStack_114 = 1;
  local_100 = 0;
  uStack_104 = local_100;
  if (local_70 != 0) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar16 = *puVar9;
    uVar13 = uVar15;
    uVar14 = uVar15;
    local_100 = 0;
    uVar12 = 0;
    while (uVar16 == 0) {
      iVar10 = (int)uVar13;
      local_100 = (int)uVar14 + 0x20;
      uVar14 = (ulong64)local_100;
      uVar12 = iVar10 + 1;
      uVar13 = (ulong64)uVar12;
      uStack_104 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < (int)uVar12)
      goto LAB_1445d2421;
      uVar16 = puVar9[(longlong)iVar10 + 1];
    }
    uStack_114 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_114 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_138 = (int)lVar7;
    uStack_104 = (local_100 - 1) + local_138;
    if ((int)local_70 < (int)uStack_104) {
      uStack_104 = local_70;
    }
  }
LAB_1445d2421:
  uStack_fc = local_a4;
  local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar16 = local_70 & 0xffffffe0;
  iStack_f8 = local_98._8_4_ - local_64;
  uStack_108 = 0xffffffff;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  TStack_e8._padding_ = CONCAT44(uStack_114,uVar12);
  iVar10 = (int)local_70 >> 5;
  TStack_e8._28_4_ = local_a4;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  bVar8 = (byte)local_70;
  local_120 = (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
               *)local_98;
  uStack_118 = uVar12;
  local_f0 = (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_98;
  TStack_e8.Array = local_110;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FOnDemandInstallCacheUsage *)(*pcVar3)();
    return pFVar6;
  }
  if (uVar11 != local_70) {
    puVar9 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar9 = local_78;
    }
    uVar12 = -1 << (bVar8 & 0x1f) & puVar9[iVar10];
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar10)
      goto LAB_1445d251b;
      uVar12 = puVar9[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar16;
    if ((int)local_70 < (int)uVar11) {
      uVar11 = local_70;
    }
  }
LAB_1445d251b:
  uVar13 = uVar15;
  while( true ) {
    uVar14 = uVar13;
    pTVar4 = local_f0;
    if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_e8.CurrentBitIndex == uVar11) &&
        (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (pTVar4 == (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                   *)local_98)) break;
    lVar7 = *(longlong *)pTVar4;
    uVar1 = *(ulonglong *)(lVar7 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
    uVar2 = *(ulonglong *)(lVar7 + 0x18 + (longlong)TStack_e8.CurrentBitIndex * 0x28);
    if (uVar2 < uVar1) {
      uVar15 = uVar15 + (uVar1 - uVar2);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    uVar13 = uVar1 + uVar14;
    if (uVar2 == 0) {
      uVar13 = uVar14;
    }
  }
  __return_storage_ptr__->MaxSize = local_130->MaxCacheSize;
  __return_storage_ptr__->TotalSize = local_128;
  __return_storage_ptr__->ReferencedSize = local_140;
  __return_storage_ptr__->ReferencedBlockSize = uVar14;
  __return_storage_ptr__->FragmentedChunksSize = uVar15;
  (__return_storage_ptr__->ReferencedBytesByHandle).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ReferencedBytesByHandle).ArrayNum = 0;
  (__return_storage_ptr__->ReferencedBytesByHandle).ArrayMax = 0;
  DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
            ((TBitArray<FDefaultBitArrayAllocator> *)local_160.AllocatorInstance.Data,
             local_160.ArrayNum);
  if ((TBitArray<FDefaultBitArrayAllocator> *)local_160.AllocatorInstance.Data !=
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_150.AllocatorInstance.Data,
             local_150.ArrayNum);
  if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_150.AllocatorInstance.Data !=
      (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return __return_storage_ptr__;
}

// GetCompletedIoRequests @ 1445d31c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoRequestImpl * __thiscall
UE::IoStore::FOnDemandInstallCache::GetCompletedIoRequests(FOnDemandInstallCache *this)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  void *pvVar4;
  BufCore *this_01;
  undefined8 *puVar5;
  code *pcVar6;
  FIoRequestImpl *pFVar7;
  bool bVar8;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    FMutex::LockSlow(this_00);
  }
  pFVar7 = (this->CompletedRequests).Head;
  while( true ) {
    if (pFVar7 == (FIoRequestImpl *)0x0) {
      pFVar7 = (this->CompletedRequests).Head;
      (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
      (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      return pFVar7;
    }
    pvVar4 = pFVar7->BackendData;
    pFVar7->BackendData = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      this_01 = *(BufCore **)((longlong)pvVar4 + 0x48);
      if (this_01 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(this_01);
        LOCK();
        piVar1 = &this_01->NumRefs;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore(this_01);
          ::operator_delete(this_01,0x20);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 0x28));
      puVar5 = *(undefined8 **)((longlong)pvVar4 + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)pvVar4 + 8));
      ::operator_delete(pvVar4,0x58);
    }
    if ((pFVar7 == (FIoRequestImpl *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x16,L""), bVar8)) break;
    pFVar7 = pFVar7->NextRequest;
  }
  pcVar6 = (code *)swi(3);
  pFVar7 = (FIoRequestImpl *)(*pcVar6)();
  return pFVar7;
}

// GetName @ 1445d66d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

wchar_t * __thiscall UE::IoStore::FOnDemandInstallCache::GetName(FOnDemandInstallCache *this)

{
  return L"OnDemandInstallCache";
}

// GetSizeForChunk @ 1445d79b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
UE::IoStore::FOnDemandInstallCache::GetSizeForChunk
          (FOnDemandInstallCache *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  uint uVar1;
  FIoStatus *pFVar2;
  EIoErrorCode local_res8 [2];
  FOnDemandChunkInfo local_28;
  
  local_res8[0] = UnknownChunkID;
  FOnDemandIoStore::GetInstalledChunkInfo(this->IoStore,&local_28,param_1,local_res8);
  if (local_28.SharedContainer.Object != (FOnDemandContainer *)0x0) {
    uVar1 = (local_28.Entry)->RawSize;
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(ulonglong *)(__return_storage_ptr__->Value).Pad = (ulonglong)uVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
  pFVar2 = FIoStatus::FIoStatus((FIoStatus *)&local_28,local_res8[0]);
  TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,pFVar2);
  return __return_storage_ptr__;
}

// InitialVerify @ 1445d9690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::InitialVerify
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  IErrorDetails *pIVar2;
  byte bVar3;
  atomic<unsigned_char> aVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [8];
  TValueOrError<void,UE::UnifiedError::FError> local_1c0;
  TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> local_1a8;
  TValueOrError<void,UE::UnifiedError::FError> local_198;
  FTransaction local_180;
  uint local_160 [2];
  ulong64 local_158;
  undefined4 local_150;
  FCasBlockId FStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  ulong64 local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  TValueOrError<void,UE::UnifiedError::FError> local_f0;
  FString local_d0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  FCas::Verify(&this->Cas,&local_198,&local_1a8);
  if (local_198.Error.bIsSet != false) {
    lVar11 = (longlong)local_1a8.ArrayNum;
    LOCK();
    bVar13 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar13) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar13) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    InstallCacheAnalytics.VerificationRemovedBlockCount =
         InstallCacheAnalytics.VerificationRemovedBlockCount + lVar11;
    LOCK();
    aVar4 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar3 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar4;
    if (bVar3 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
    ::operator/(&local_120,&this->CacheDirectory,L"cas.jrn");
    iVar7 = local_1a8.ArrayNum;
    uVar10 = (ulonglong)local_1a8.ArrayNum;
    local_180.JournalFile.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
    local_180.JournalFile.Data.ArrayNum = local_120.Data.ArrayNum;
    pFVar1 = local_1a8.AllocatorInstance.Data + uVar10 * 0xc;
    local_180.JournalFile.Data.ArrayMax = local_120.Data.ArrayMax;
    local_180.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Entries.ArrayNum = 0;
    local_180.Entries.ArrayMax = 0;
    FVar12.Data = local_1a8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar7) {
        `TCheckedPointerIterator<UE::THash<96>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1c8);
      }
      if (FVar12.Data == pFVar1) break;
      FStack_14c = FCasLocation::Invalid.BlockId.Id;
      uStack_148 = FCasLocation::Invalid.BlockOffset;
      uStack_13c = *(undefined4 *)(FVar12.Data + 8);
      local_150 = 1;
      uStack_144 = (undefined4)*(undefined8 *)FVar12.Data;
      uStack_140 = (undefined4)((ulonglong)*(undefined8 *)FVar12.Data >> 0x20);
      iVar6 = local_180.Entries.ArrayNum;
      if (local_180.Entries.ArrayNum == local_180.Entries.ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_180.Entries.AllocatorInstance,&local_180.Entries.ArrayMax);
      }
      FVar12.Data = FVar12.Data + 0xc;
      local_180.Entries.ArrayNum = iVar6 + 1;
      *(ulonglong *)(local_180.Entries.AllocatorInstance.Data + (longlong)iVar6 * 0x18) =
           CONCAT44(FStack_14c.Id,local_150);
      *(ulonglong *)(local_180.Entries.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 8) =
           CONCAT44(uStack_144,uStack_148);
      *(ulonglong *)(local_180.Entries.AllocatorInstance.Data + (longlong)iVar6 * 0x18 + 0x10) =
           CONCAT44(uStack_13c,uStack_140);
      uVar10 = local_1a8._8_8_ & 0xffffffff;
    }
    local_128 = 0;
    local_160[0] = 0;
    FCasJournal::Commit(&local_f0,&local_180,&local_128,local_160);
    if (local_f0.Error.bIsSet != false) {
      (__return_storage_ptr__->Error).bIsSet = local_f0.Error.bIsSet;
      UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_f0);
      if ((local_f0.Error.bIsSet != false) &&
         (local_f0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        (**(code **)((longlong)*local_f0.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
      if (local_180.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Entries.AllocatorInstance.Data);
      }
      if (local_180.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.JournalFile.Data.AllocatorInstance.Data);
      }
      TVar5.Reference = local_198.Error.TypedValue.ErrorDetails.Reference;
      FVar12.Data = local_1a8.AllocatorInstance.Data;
      if ((local_198.Error.bIsSet != false) &&
         (local_198.Error.TypedValue.ErrorCode = 0, local_198.Error.TypedValue.ModuleId = 0,
         local_198.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_198.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar5.Reference + 0x10))();
        FVar12.Data = local_1a8.AllocatorInstance.Data;
        if (local_198.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_198.Error.TypedValue.ErrorDetails.Reference + 0x10))();
          FVar12.Data = local_1a8.AllocatorInstance.Data;
        }
      }
      goto LAB_1445d9d05;
    }
    if (local_180.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Entries.AllocatorInstance.Data);
    }
    if (local_180.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.JournalFile.Data.AllocatorInstance.Data);
    }
    TVar5.Reference = local_198.Error.TypedValue.ErrorDetails.Reference;
    if ((local_198.Error.bIsSet != false) &&
       (local_198.Error.TypedValue.ErrorCode = 0, local_198.Error.TypedValue.ModuleId = 0,
       local_198.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_198.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_198.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_198.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  uVar8 = FCas::GetBlockInfo(&this->Cas,
                             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                              *)local_b8);
  if (this->MaxCacheSize < uVar8) {
    local_158 = 0;
    uVar10 = uVar8 - this->MaxCacheSize;
    if (2 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    PurgeInternal(this,&local_1c0,
                  (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                   *)local_b8,uVar10,&local_158);
    if (local_1c0.Error.bIsSet == false) {
      if (uVar10 <= local_158) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        goto LAB_1445d9d61;
      }
      ::FString::PrintfImpl
                (&local_100,
                 L"Failed to purge %.2lf MiB from install cache. Actually purged %.2lf MiB from install cache"
                );
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      TVar9 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails();
      pIVar2 = (IErrorDetails *)(TVar9.Reference)->_padding_;
      if (pIVar2 == (IErrorDetails *)0x0) {
        iVar7 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
        iVar6 = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        (__return_storage_ptr__->Error).TypedValue.ModuleId = iVar6;
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (__return_storage_ptr__->Error).TypedValue.ErrorCode = iVar7;
      }
      else {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_134);
        iVar7 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
        iVar6 = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_130);
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        (__return_storage_ptr__->Error).TypedValue.ErrorCode = iVar7;
        (__return_storage_ptr__->Error).TypedValue.ModuleId = iVar6;
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = pIVar2;
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
      (__return_storage_ptr__->Error).bIsSet = true;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    else {
      ::LexToString(&local_d0,(FError *)&local_1c0);
      ::FString::PrintfImpl
                (&local_110,L"Failed to purge %.2lf MiB from install cache reason \'%s\'");
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      (__return_storage_ptr__->Error).bIsSet = local_1c0.Error.bIsSet;
      if (local_1c0.Error.bIsSet != false) {
        (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_1c0.Error.TypedValue.ErrorCode;
        (__return_storage_ptr__->Error).TypedValue.ModuleId = local_1c0.Error.TypedValue.ModuleId;
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_1c0.Error.TypedValue.ErrorCode = 0;
        local_1c0.Error.TypedValue.ModuleId = 0;
        if (local_1c0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
               local_1c0.Error.TypedValue.ErrorDetails.Reference;
          (**(code **)((longlong)*local_1c0.Error.TypedValue.ErrorDetails.Reference + 8))();
          TVar5.Reference = local_1c0.Error.TypedValue.ErrorDetails.Reference;
          if (local_1c0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_1c0.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar5.Reference + 0x10))();
          }
        }
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      TVar5.Reference = local_1c0.Error.TypedValue.ErrorDetails.Reference;
      if ((local_1c0.Error.bIsSet != false) &&
         (local_1c0.Error.TypedValue.ErrorCode = 0, local_1c0.Error.TypedValue.ModuleId = 0,
         local_1c0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_1c0.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar5.Reference + 0x10))();
        if (local_1c0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_1c0.Error.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
    }
    local_70 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    iVar7 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_90 = 0;
    local_84 = 0;
    local_88 = 0xffffffff;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    FVar12.Data = (FScriptContainerElement *)local_b8._0_8_;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
      FVar12.Data = (FScriptContainerElement *)local_b8._0_8_;
    }
LAB_1445d9d05:
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    return __return_storage_ptr__;
  }
LAB_1445d9d61:
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  iVar7 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  (__return_storage_ptr__->Error).bIsSet = false;
  return __return_storage_ptr__;
}

// Initialize @ 1445da850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::Initialize
          (FOnDemandInstallCache *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

{
  FIoDispatcherBackendContext *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_18) {
    (this->BackendContext).Object = local_18;
    local_18 = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackendContext).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsChunkCached @ 1445ddb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandInstallCache::IsChunkCached(FOnDemandInstallCache *this,FIoHash *param_1)

{
  FSharedMutex *this_00;
  FScriptContainerElement *pFVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int local_res8;
  int local_resc;
  
  this_00 = &(this->PendingChunks).SharedMutex;
  aVar2 = this_00->State;
  if (((uint)aVar2 & 3) == 0) {
    LOCK();
    bVar4 = aVar2 == this_00->State;
    if (bVar4) {
      this_00->State = (atomic<unsigned_int>)((int)aVar2 + 8);
    }
    UNLOCK();
    if (bVar4) goto LAB_1445ddbc5;
  }
  FSharedMutex::LockSharedSlow(this_00);
LAB_1445ddbc5:
  pFVar3 = (this->PendingChunks).ChunkHashes.AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->PendingChunks).ChunkHashes.ArrayNum * 0x14;
  for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 0x14) {
    if (((*(longlong *)pFVar3 == *(longlong *)param_1->Hash) &&
        (*(longlong *)(pFVar3 + 8) == *(longlong *)(param_1->Hash + 8))) &&
       (*(int *)(pFVar3 + 0x10) == *(int *)(param_1->Hash + 0x10))) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
      UNLOCK();
      if (((uint)aVar2 & 0xfffffffb) != 10) {
        return true;
      }
      FSharedMutex::WakeWaitingThread(this_00);
      return true;
    }
  }
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
  UNLOCK();
  if (((uint)aVar2 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread(this_00);
  }
  FCas::FindChunk(&this->Cas,(FIoHash *)&local_res8);
  if ((local_res8 != 0) && (local_resc != -1)) {
    return true;
  }
  return false;
}

// MakeInstallCacheErrorContext @ 1445e1560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FInstallCacheErrorContext * __thiscall
UE::IoStore::FOnDemandInstallCache::MakeInstallCacheErrorContext
          (FOnDemandInstallCache *this,FInstallCacheErrorContext *__return_storage_ptr__,
          ulong64 param_1,uint param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  
  FIoStatus::FIoStatus(&__return_storage_ptr__->IoError,Unknown);
  __return_storage_ptr__->LineNo = 0xab;
  __return_storage_ptr__->MaxCacheSize = 0;
  __return_storage_ptr__->CacheSize = 0;
  __return_storage_ptr__->DiskTotalBytes = 0;
  __return_storage_ptr__->DiskFreeBytes = 0;
  __return_storage_ptr__->bDiskQuerySucceeded = false;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_38,(this->Cas).RootDirectory.DataPtr,
                      (int)*(undefined8 *)&(this->Cas).RootDirectory.Size);
  if (&local_48 != pFVar2) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar1 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                    (&local_48,&__return_storage_ptr__->DiskTotalBytes,
                     &__return_storage_ptr__->DiskFreeBytes);
  __return_storage_ptr__->bDiskQuerySucceeded = bVar1;
  __return_storage_ptr__->MaxCacheSize = this->MaxCacheSize;
  __return_storage_ptr__->CacheSize = param_1;
  __return_storage_ptr__->LineNo = param_2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OpenMapped @ 1445e83f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<FIoMappedRegion> * __thiscall
UE::IoStore::FOnDemandInstallCache::OpenMapped
          (FOnDemandInstallCache *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  FIoStatus *this_00;
  TIoStatusOr<FIoMappedRegion> *pTVar3;
  TStringView<wchar_t> local_28;
  FIoStatus local_18;
  
  local_28.Size = 0x3d;
  local_28.DataPtr = L"On-demand install cache does not support memory mapped files.";
  this_00 = FIoStatus::FIoStatus(&local_18,FileOpenFailed,&local_28);
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (this_00->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
  FIoStatus::~FIoStatus(this_00);
  return __return_storage_ptr__;
}

// Purge @ 1445ee0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::Purge
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,ulong64 param_1)

{
  ulong64 *puVar1;
  atomic<unsigned_int> aVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  IErrorDetails *pIVar5;
  code *pcVar6;
  atomic<unsigned_char> aVar7;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar8;
  int iVar9;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar10;
  atomic<unsigned_int> *this_00;
  ulong64 uVar11;
  longlong *plVar12;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar13;
  longlong lVar14;
  FError *pFVar15;
  FIoStatus *pFVar16;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar17;
  byte bVar18;
  uint *puVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  int iVar22;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FOnDemandInstallCache *this_01;
  uint uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStackY_2b8 [32];
  EDetailFilter local_278 [8];
  undefined1 local_270 [8];
  TValueOrError<void,UE::UnifiedError::FError> local_268;
  FError local_250;
  uint local_240;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> local_238;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_228;
  uint local_218 [2];
  FOnDemandInstallCache *local_210;
  TValueOrError<void,UE::UnifiedError::FError> *local_208;
  longlong local_200;
  ulong64 local_1f8;
  ulong64 local_1f0;
  ulong64 local_1e8;
  TValueOrError<void,UE::UnifiedError::FError> local_1e0;
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  atomic<unsigned_int> *local_1c0;
  ulong64 local_1b8;
  ulong64 local_1b0;
  ulong64 local_1a8;
  int local_1a0;
  int local_19c;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [8];
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  TStringView<wchar_t> local_128;
  FIoStatus local_110;
  FInstallCacheErrorContext local_100;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_1c0 = &(this->PurgeDefragMutex).State;
  LOCK();
  bVar29 = ((FSharedMutex *)local_1c0)->State == (atomic<unsigned_int>)0x0;
  if (bVar29) {
    ((FSharedMutex *)local_1c0)->State = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  local_210 = this;
  local_208 = __return_storage_ptr__;
  local_1b0 = param_1;
  if (!bVar29) {
    FSharedMutex::LockSlow((FSharedMutex *)local_1c0);
  }
  uVar26 = 0;
  local_7c = 0x80;
  local_a8._0_8_ = 0;
  local_78 = 0xffffffff;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  uVar24 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_1b8 = FCas::GetBlockInfo(&this->Cas,
                                 (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                                  *)local_a8);
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  FOnDemandIoStore::GetReferencedContent(this->IoStore,&local_228,&local_238,false);
  if ((local_228.ArrayNum != local_238.ArrayNum) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("Containers.Num() == ChunkEntryIndices.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                          ,0x940,L""), bVar29)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
    return pTVar13;
  }
  local_1f8 = 0;
  local_200 = 0x2bca2875f4373fff;
  AddReferencesToBlocks
            (this,&local_228,&local_238,
             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_a8,&local_1f8);
  local_168 = 0;
  uStack_16c = local_168;
  uStack_17c = 1;
  if (local_80 != 0) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uStack_17c = *puVar19;
    uVar28 = uVar26;
    uVar25 = uVar26;
    local_168 = 0;
    uVar24 = 0;
    while (uStack_17c == 0) {
      iVar22 = (int)uVar28;
      local_168 = (int)uVar25 + 0x20;
      uVar25 = (ulonglong)local_168;
      uVar24 = iVar22 + 1;
      uVar28 = (ulonglong)uVar24;
      uStack_16c = local_80;
      uStack_17c = 1;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < (int)uVar24)
      goto LAB_1445ee2a0;
      uStack_17c = puVar19[(longlong)iVar22 + 1];
    }
    uStack_17c = -uStack_17c & uStack_17c;
    uVar28 = (ulonglong)uStack_17c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1a0 = (int)lVar14;
    uStack_16c = (local_168 - 1) + local_1a0;
    if ((int)local_80 < (int)uStack_16c) {
      uStack_16c = local_80;
    }
  }
LAB_1445ee2a0:
  local_188 = (longlong *)local_a8;
  uStack_164 = local_ac;
  uVar27 = local_80 & 0xffffffe0;
  iStack_160 = local_a8._8_4_ - local_74;
  local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_170 = 0xffffffff;
  TStack_150.CurrentBitIndex = uStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,uVar24);
  iVar22 = (int)local_80 >> 5;
  bVar18 = (byte)local_80;
  local_240 = local_80;
  TStack_150._28_4_ = local_ac;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  uStack_180 = uVar24;
  local_158 = local_188;
  TStack_150.Array = local_178;
  if (((int)local_80 < 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar29)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
    return pTVar13;
  }
  uVar24 = local_240;
  if (local_240 != local_80) {
    puVar19 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar19 = local_88;
    }
    uVar24 = -1 << (bVar18 & 0x1f) & puVar19[iVar22];
    while (uVar24 == 0) {
      lVar14 = (longlong)iVar22;
      uVar27 = uVar27 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = local_80;
      if ((int)(((int)(local_80 - 1) >> 0x1f & 0x1fU) + (local_80 - 1)) >> 5 < iVar22)
      goto LAB_1445ee3d0;
      uVar24 = puVar19[lVar14 + 1];
    }
    uVar28 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_19c = (int)lVar14;
    uVar24 = (uVar27 - 1) + local_19c;
    if ((int)local_80 < (int)uVar24) {
      uVar24 = local_80;
    }
  }
LAB_1445ee3d0:
  lVar14 = 0x2bca2875f4373fff;
  uVar28 = uVar26;
  do {
    plVar12 = local_158;
    if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
      local_270[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_270);
    }
    this_00 = local_1c0;
    if (((TStack_150.CurrentBitIndex == uVar24) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar12 == (longlong *)local_a8)) {
      uVar4 = local_210->MaxCacheSize;
      LOCK();
      bVar29 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar29) {
        FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar29) {
        FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
      }
      uVar11 = local_1b8;
      uVar20 = local_1b8;
      if (local_1b8 < InstallCacheAnalytics.MaxCacheUsageSize) {
        uVar20 = InstallCacheAnalytics.MaxCacheUsageSize;
      }
      if (uVar28 < InstallCacheAnalytics.MaxReferencedBlockSize) {
        uVar28 = InstallCacheAnalytics.MaxReferencedBlockSize;
      }
      uVar21 = local_1f8;
      if (local_1f8 < InstallCacheAnalytics.MaxReferencedSize) {
        uVar21 = InstallCacheAnalytics.MaxReferencedSize;
      }
      if (uVar26 < InstallCacheAnalytics.MaxFragmentedSize) {
        uVar26 = InstallCacheAnalytics.MaxFragmentedSize;
      }
      if (InstallCacheAnalytics.OldestBlockAccess < lVar14) {
        lVar14 = InstallCacheAnalytics.OldestBlockAccess;
      }
      LOCK();
      aVar7 = FInstallCacheAnalytics::Mutex.State + -1;
      UNLOCK();
      bVar18 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
      InstallCacheAnalytics.MaxCacheSize = uVar4;
      InstallCacheAnalytics.MaxCacheUsageSize = uVar20;
      InstallCacheAnalytics.MaxReferencedBlockSize = uVar28;
      InstallCacheAnalytics.MaxReferencedSize = uVar21;
      InstallCacheAnalytics.MaxFragmentedSize = uVar26;
      InstallCacheAnalytics.OldestBlockAccess = lVar14;
      FInstallCacheAnalytics::Mutex.State = aVar7;
      if (bVar18 != 0) {
        FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
      }
      uVar26 = local_1b0 + (local_210->PendingChunks).TotalSize + uVar11;
      if (local_210->MaxCacheSize < uVar26) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        this_01 = local_210;
        local_1f0 = 0;
        uVar26 = uVar26 - local_210->MaxCacheSize;
        PurgeInternal(local_210,&local_268,
                      (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                       *)local_a8,uVar26,&local_1f0);
        uVar4 = local_1f0;
        if ((local_1f0 != 0) && (4 < (byte)LogIoStoreOnDemand._0_1_)) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        if ((2 < (byte)LogIoStoreOnDemand._0_1_) && (this_01->MaxCacheSize < uVar11 - uVar4)) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        local_1e8 = 0;
        if ((local_268.Error.bIsSet == false) && (uVar4 < uVar26)) {
          if (CVars::GIoStoreOnDemandEnableDefrag == false) {
            MakeInstallCacheErrorContext(this_01,&local_100,uVar11,0x992);
            local_128.Size = 0x30;
            local_128.DataPtr = L"Failed to purge required size from install cache";
            pFVar16 = FIoStatus::FIoStatus(&local_110,InvalidCode,&local_128);
            FIoStatus::operator=(&local_100.IoError,pFVar16);
            FIoStatus::~FIoStatus(&local_110);
            local_278[0] = All;
            TVar17 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails();
            pIVar5 = (IErrorDetails *)(TVar17.Reference)->_padding_;
            if (pIVar5 == (IErrorDetails *)0x0) {
              iVar22 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
              local_250.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_250.ErrorDetails.Reference = (IErrorDetails *)0x0;
              local_250.ErrorCode = iVar22;
            }
            else {
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_198);
              iVar22 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
              local_250.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
              local_250.ErrorDetails.Reference = pIVar5;
              local_250.ErrorCode = iVar22;
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_194);
              (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
            }
            UnifiedError::FError::
            PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
                      (&local_250,&local_100,local_278);
            TVar8.Reference = local_250.ErrorDetails.Reference;
            iVar9 = local_250.ModuleId;
            iVar22 = local_250.ErrorCode;
            local_250.ErrorCode = 0;
            local_250.ModuleId = 0;
            TVar23.Reference = (IErrorDetails *)0x0;
            if ((local_250.ErrorDetails.Reference != (IErrorDetails *)0x0) &&
               ((**(code **)((longlong)*local_250.ErrorDetails.Reference + 8))
                          (local_250.ErrorDetails.Reference,local_190),
               TVar10.Reference = local_250.ErrorDetails.Reference,
               TVar23.Reference = TVar8.Reference,
               local_250.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_250.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar10.Reference + 0x10))();
            }
            TVar8.Reference = local_268.Error.TypedValue.ErrorDetails.Reference;
            if ((local_268.Error.bIsSet != false) &&
               (local_268.Error.TypedValue.ErrorCode = 0, local_268.Error.TypedValue.ModuleId = 0,
               local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
              if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_268.Error.TypedValue.ErrorDetails.Reference + 0x10))
                          (local_268.Error.TypedValue.ErrorDetails.Reference);
              }
            }
            local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_268.Error.TypedValue.ModuleId = iVar9;
            local_268.Error.TypedValue.ErrorCode = iVar22;
            if (TVar23.Reference != (IErrorDetails *)0x0) {
              local_268.Error.TypedValue.ErrorDetails.Reference = TVar23.Reference;
              (**(code **)((longlong)*TVar23.Reference + 8))(TVar23.Reference,local_1c8);
              (**(code **)((longlong)*TVar23.Reference + 0x10))(TVar23.Reference);
            }
            TVar8.Reference = local_250.ErrorDetails.Reference;
            local_268.Error.bIsSet = true;
            local_250.ErrorCode = 0;
            local_250.ModuleId = 0;
            if (local_250.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_250.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar8.Reference + 0x10))();
              if (local_250.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_250.ErrorDetails.Reference + 0x10))();
              }
            }
            FIoStatus::~FIoStatus(&local_100.IoError);
            this_01 = local_210;
          }
          else {
            local_1a8 = uVar26 - uVar4;
            pFVar15 = (FError *)
                      Defrag(this_01,&local_1e0,&local_228,&local_238,
                             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                              *)local_a8,&local_1a8,&local_1e8);
            TVar8.Reference = local_268.Error.TypedValue.ErrorDetails.Reference;
            if (pFVar15 != (FError *)&local_268) {
              if ((char)pFVar15[1].ErrorCode == '\0') {
                if (local_268.Error.bIsSet != false) {
                  local_268.Error.TypedValue.ErrorCode = 0;
                  local_268.Error.TypedValue.ModuleId = 0;
                  if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                    (**(code **)((longlong)*TVar8.Reference + 0x10))();
                    if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                      (**(code **)((longlong)*local_268.Error.TypedValue.ErrorDetails.Reference +
                                  0x10))();
                    }
                  }
                  local_268.Error.bIsSet = false;
                }
              }
              else {
                if ((local_268.Error.bIsSet != false) &&
                   (local_268.Error.TypedValue.ErrorCode = 0,
                   local_268.Error.TypedValue.ModuleId = 0,
                   local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
                  local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                  (**(code **)((longlong)*TVar8.Reference + 0x10))();
                  if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (**(code **)((longlong)*local_268.Error.TypedValue.ErrorDetails.Reference + 0x10
                                ))();
                  }
                }
                UnifiedError::FError::FError((FError *)&local_268,pFVar15);
                local_268.Error.bIsSet = true;
              }
            }
            TVar8.Reference = local_1e0.Error.TypedValue.ErrorDetails.Reference;
            if ((local_1e0.Error.bIsSet != false) &&
               (local_1e0.Error.TypedValue.ErrorCode = 0, local_1e0.Error.TypedValue.ModuleId = 0,
               local_1e0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_1e0.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar8.Reference + 0x10))();
              if (local_1e0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_1e0.Error.TypedValue.ErrorDetails.Reference + 0x10))()
                ;
              }
            }
          }
        }
        FOnDemandInstallCacheStats::OnPurge
                  (&local_268,this_01->MaxCacheSize,uVar11 - uVar4,uVar26,local_1e8 + uVar4);
        pTVar13 = local_208;
        (local_208->Error).bIsSet = local_268.Error.bIsSet;
        if (local_268.Error.bIsSet != false) {
          (local_208->Error).TypedValue.ErrorCode = local_268.Error.TypedValue.ErrorCode;
          (local_208->Error).TypedValue.ModuleId = local_268.Error.TypedValue.ModuleId;
          (local_208->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          local_268.Error.TypedValue.ErrorCode = 0;
          local_268.Error.TypedValue.ModuleId = 0;
          if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (local_208->Error).TypedValue.ErrorDetails.Reference =
                 local_268.Error.TypedValue.ErrorDetails.Reference;
            (**(code **)((longlong)*local_268.Error.TypedValue.ErrorDetails.Reference + 8))
                      (local_268.Error.TypedValue.ErrorDetails.Reference,local_1c4);
            TVar8.Reference = local_268.Error.TypedValue.ErrorDetails.Reference;
            if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar8.Reference + 0x10))();
            }
          }
          TVar8.Reference = local_268.Error.TypedValue.ErrorDetails.Reference;
          if ((local_268.Error.bIsSet != false) &&
             (local_268.Error.TypedValue.ErrorCode = 0, local_268.Error.TypedValue.ModuleId = 0,
             local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_268.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar8.Reference + 0x10))();
            if (local_268.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_268.Error.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
        }
        DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_238.AllocatorInstance.Data,
                   local_238.ArrayNum);
        if ((TBitArray<FDefaultBitArrayAllocator> *)local_238.AllocatorInstance.Data !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                  ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_228.AllocatorInstance.Data
                   ,local_228.ArrayNum);
        if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_228.AllocatorInstance.Data !=
            (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        LOCK();
        aVar2 = *this_00;
        *this_00 = (atomic<unsigned_int>)((int)*this_00 + -1);
        UNLOCK();
      }
      else {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        pTVar13 = local_208;
        (local_208->Error).bIsSet = false;
        DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
                  ((TBitArray<FDefaultBitArrayAllocator> *)local_238.AllocatorInstance.Data,
                   local_238.ArrayNum);
        if ((TBitArray<FDefaultBitArrayAllocator> *)local_238.AllocatorInstance.Data !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          FMemory::Free(local_238.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                  ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_228.AllocatorInstance.Data
                   ,local_228.ArrayNum);
        if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_228.AllocatorInstance.Data !=
            (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
          FMemory::Free(local_228.AllocatorInstance.Data);
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        LOCK();
        aVar2 = *this_00;
        *this_00 = (atomic<unsigned_int>)((int)*this_00 + -1);
        UNLOCK();
      }
      if (((uint)aVar2 & 6) != 0) {
        FSharedMutex::WakeWaitingThreads((FSharedMutex *)this_00,(uint)aVar2);
      }
      return pTVar13;
    }
    puVar19 = (uint *)(*plVar12 + (longlong)TStack_150.CurrentBitIndex * 0x28);
    puVar1 = (ulong64 *)(puVar19 + 2);
    if (0x2000000 < *(ulonglong *)(puVar19 + 2)) {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        local_218[0] = 0x2000000;
        Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned_int>
                  ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,puVar19,puVar1,local_218);
      }
      bVar29 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4406625557953902257>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                          ,0x94f,"false");
      if (bVar29) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar13;
      }
    }
    uVar25 = *puVar1;
    uVar3 = *(ulonglong *)(puVar19 + 6);
    if (uVar3 < uVar25) {
      uVar26 = uVar26 + (uVar25 - uVar3);
    }
    else if (uVar25 < uVar3) {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,unsigned___int64_const_&,unsigned___int64_const_&>
                  ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,puVar19,
                   (ulong64 *)(puVar19 + 6),puVar1);
      }
      bVar29 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4406625557953902247>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                          ,0x959,"false");
      if (bVar29) {
        pcVar6 = (code *)swi(3);
        pTVar13 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar6)();
        return pTVar13;
      }
    }
    if (*(longlong *)(puVar19 + 6) != 0) {
      uVar28 = uVar28 + *(longlong *)(puVar19 + 2);
    }
    lVar14 = local_200;
    if (*(longlong *)(puVar19 + 4) < local_200) {
      lVar14 = *(longlong *)(puVar19 + 4);
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    local_200 = lVar14;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// PurgeAllUnreferenced @ 1445ef0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::PurgeAllUnreferenced
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,bool param_1,
          ulong64 *param_2)

{
  FSharedMutex *this_00;
  atomic<unsigned_int> aVar1;
  IErrorDetails *pIVar2;
  code *pcVar3;
  int iVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar6;
  int iVar7;
  ulong64 uVar8;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar9;
  ulong64 *puVar10;
  FError *pFVar11;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar12;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar13;
  IErrorDetails *pIVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStackY_1d8 [32];
  <lambda_1> local_198 [8];
  FError local_190;
  ulong64 local_180;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> local_178;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_168;
  undefined1 local_158 [8];
  ulong64 local_150;
  TValueOrError<void,UE::UnifiedError::FError> local_148;
  TValueOrError<void,UE::UnifiedError::FError> local_130;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [8];
  ulong64 local_108 [2];
  FInstallCacheErrorContext local_f8;
  TValueOrError<void,UE::UnifiedError::FError> local_c0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->PurgeDefragMutex;
  LOCK();
  bVar17 = this_00->State == (atomic<unsigned_int>)0x0;
  if (bVar17) {
    this_00->State = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (!bVar17) {
    FSharedMutex::LockSlow(this_00);
  }
  local_7c = 0x80;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_78 = 0xffffffff;
  uVar8 = FCas::GetBlockInfo(&this->Cas,
                             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                              *)local_a8);
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  FOnDemandIoStore::GetReferencedContent(this->IoStore,&local_168,&local_178,false);
  if ((local_168.ArrayNum != local_178.ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Containers.Num() == ChunkEntryIndices.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                          ,0x9a9,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar3)();
    return pTVar9;
  }
  local_180 = 0;
  AddReferencesToBlocks
            (this,&local_168,&local_178,
             (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_a8,&local_180);
  Algo::
  TransformAccumulate<unsigned___int64,TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>,_UE::IoStore::FOnDemandInstallCache::PurgeAllUnreferenced_::__l2::<lambda_1>,TPlus<void>_>
            ((TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
              *)local_a8,local_198[0],0,(TPlus<void>)local_198[0]);
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  puVar10 = param_2;
  if (param_2 == (ulong64 *)0x0) {
    puVar10 = &this->MaxCacheSize;
  }
  local_180 = *puVar10;
  local_150 = 0;
  PurgeInternal(this,__return_storage_ptr__,
                (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                 *)local_a8,local_180,&local_150);
  uVar15 = local_150;
  if ((local_150 != 0) && (4 < (byte)LogIoStoreOnDemand._0_1_)) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  uVar16 = uVar8 - uVar15;
  if ((2 < (byte)LogIoStoreOnDemand._0_1_) && (this->MaxCacheSize < uVar16)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  uVar8 = local_180;
  if (param_2 == (ulong64 *)0x0) {
    if (param_1) {
      pFVar11 = (FError *)
                Defrag(this,&local_130,&local_168,&local_178,
                       (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                        *)local_a8,(ulong64 *)0x0,(ulong64 *)0x0);
      if (pFVar11 != (FError *)__return_storage_ptr__) {
        bVar17 = (__return_storage_ptr__->Error).bIsSet;
        if ((char)pFVar11[1].ErrorCode == '\0') {
          if (bVar17 != false) {
            (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0;
            (__return_storage_ptr__->Error).TypedValue.ModuleId = 0;
            pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
            if (pIVar14 != (IErrorDetails *)0x0) {
              (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                   (IErrorDetails *)0x0;
              (**(code **)((longlong)*pIVar14 + 0x10))();
            }
            pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
            if (pIVar14 != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*pIVar14 + 0x10))();
            }
            (__return_storage_ptr__->Error).bIsSet = false;
          }
        }
        else {
          if (bVar17 != false) {
            (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0;
            (__return_storage_ptr__->Error).TypedValue.ModuleId = 0;
            pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
            if (pIVar14 != (IErrorDetails *)0x0) {
              (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                   (IErrorDetails *)0x0;
              (**(code **)((longlong)*pIVar14 + 0x10))();
            }
            pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
            if (pIVar14 != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*pIVar14 + 0x10))();
            }
          }
          UnifiedError::FError::FError((FError *)__return_storage_ptr__,pFVar11);
          (__return_storage_ptr__->Error).bIsSet = true;
        }
      }
      TVar5.Reference = local_130.Error.TypedValue.ErrorDetails.Reference;
      uVar8 = local_180;
      if ((local_130.Error.bIsSet != false) &&
         (local_130.Error.TypedValue.ErrorCode = 0, local_130.Error.TypedValue.ModuleId = 0,
         local_130.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_130.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar5.Reference + 0x10))();
        uVar8 = local_180;
        if (local_130.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_130.Error.TypedValue.ErrorDetails.Reference + 0x10))();
          uVar8 = local_180;
        }
      }
    }
  }
  else if (param_1) {
    local_108[0] = local_180 - uVar15;
    pFVar11 = (FError *)
              Defrag(this,&local_148,&local_168,&local_178,
                     (TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
                      *)local_a8,local_108,(ulong64 *)0x0);
    if (pFVar11 != (FError *)__return_storage_ptr__) {
      bVar17 = (__return_storage_ptr__->Error).bIsSet;
      if ((char)pFVar11[1].ErrorCode == '\0') {
        if (bVar17 != false) {
          (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0;
          (__return_storage_ptr__->Error).TypedValue.ModuleId = 0;
          pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
          if (pIVar14 != (IErrorDetails *)0x0) {
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0
            ;
            (**(code **)((longlong)*pIVar14 + 0x10))();
          }
          pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
          if (pIVar14 != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*pIVar14 + 0x10))();
          }
          (__return_storage_ptr__->Error).bIsSet = false;
        }
      }
      else {
        if (bVar17 != false) {
          (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0;
          (__return_storage_ptr__->Error).TypedValue.ModuleId = 0;
          pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
          if (pIVar14 != (IErrorDetails *)0x0) {
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0
            ;
            (**(code **)((longlong)*pIVar14 + 0x10))();
          }
          pIVar14 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
          if (pIVar14 != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*pIVar14 + 0x10))();
          }
        }
        UnifiedError::FError::FError((FError *)__return_storage_ptr__,pFVar11);
        (__return_storage_ptr__->Error).bIsSet = true;
      }
    }
    TVar5.Reference = local_148.Error.TypedValue.ErrorDetails.Reference;
    if ((local_148.Error.bIsSet != false) &&
       (local_148.Error.TypedValue.ErrorCode = 0, local_148.Error.TypedValue.ModuleId = 0,
       local_148.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_148.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_148.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_148.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  else {
    MakeInstallCacheErrorContext(this,&local_f8,0,0x9ce);
    local_198[0] = (<lambda_1>)0xff;
    TVar12 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetStaticErrorDetails();
    pIVar14 = (IErrorDetails *)(TVar12.Reference)->_padding_;
    if (pIVar14 == (IErrorDetails *)0x0) {
      iVar7 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
      local_190.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
      local_190.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_190.ErrorCode = iVar7;
    }
    else {
      (**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_158);
      iVar7 = UnifiedError::IoStoreOnDemand::InstallCachePurgeError::GetErrorCodeId();
      local_190.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
      local_190.ErrorDetails.Reference = pIVar14;
      local_190.ErrorCode = iVar7;
      (**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_118);
      (**(code **)((longlong)*pIVar14 + 0x10))(pIVar14);
    }
    UnifiedError::FError::
    PushErrorContext<UE::UnifiedError::IoStoreOnDemand::FInstallCacheErrorContext>
              (&local_190,&local_f8,(EDetailFilter *)local_198);
    TVar5.Reference = local_190.ErrorDetails.Reference;
    iVar4 = local_190.ModuleId;
    iVar7 = local_190.ErrorCode;
    local_190.ErrorCode = 0;
    local_190.ModuleId = 0;
    TVar13.Reference = (IErrorDetails *)0x0;
    if ((local_190.ErrorDetails.Reference != (IErrorDetails *)0x0) &&
       ((**(code **)((longlong)*local_190.ErrorDetails.Reference + 8))
                  (local_190.ErrorDetails.Reference,local_114),
       TVar6.Reference = local_190.ErrorDetails.Reference, TVar13.Reference = TVar5.Reference,
       local_190.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_190.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar6.Reference + 0x10))();
    }
    pIVar14 = TVar13.Reference;
    if (&local_c0 != __return_storage_ptr__) {
      if ((__return_storage_ptr__->Error).bIsSet != false) {
        (__return_storage_ptr__->Error).TypedValue.ErrorCode = 0;
        (__return_storage_ptr__->Error).TypedValue.ModuleId = 0;
        pIVar2 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
        if (pIVar2 != (IErrorDetails *)0x0) {
          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
        pIVar2 = (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference;
        if (pIVar2 != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      (__return_storage_ptr__->Error).TypedValue.ErrorCode = iVar7;
      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (__return_storage_ptr__->Error).TypedValue.ModuleId = iVar4;
      if (TVar13.Reference != (IErrorDetails *)0x0) {
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = TVar13.Reference;
        (**(code **)((longlong)*TVar13.Reference + 8))(TVar13.Reference,local_110);
        pIVar14 = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar13.Reference + 0x10))(TVar13.Reference);
      }
      (__return_storage_ptr__->Error).bIsSet = true;
    }
    if (pIVar14 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar14 + 0x10))(pIVar14);
    }
    TVar5.Reference = local_190.ErrorDetails.Reference;
    local_190.ErrorCode = 0;
    local_190.ModuleId = 0;
    if (local_190.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_190.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_190.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_190.ErrorDetails.Reference + 0x10))();
      }
    }
    FIoStatus::~FIoStatus(&local_f8.IoError);
    uVar8 = local_180;
    uVar15 = local_150;
  }
  FOnDemandInstallCacheStats::OnPurge(__return_storage_ptr__,this->MaxCacheSize,uVar16,uVar8,uVar15)
  ;
  DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
            ((TBitArray<FDefaultBitArrayAllocator> *)local_178.AllocatorInstance.Data,
             local_178.ArrayNum);
  if ((TBitArray<FDefaultBitArrayAllocator> *)local_178.AllocatorInstance.Data !=
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_168.AllocatorInstance.Data,
             local_168.ArrayNum);
  if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_168.AllocatorInstance.Data !=
      (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  bVar17 = local_a8._12_4_ != 0;
  local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  if (bVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_int>)((int)this_00->State + -1);
  UNLOCK();
  if (((uint)aVar1 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads(this_00,(uint)aVar1);
  }
  return __return_storage_ptr__;
}

// PurgeInternal @ 1445ef920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::PurgeInternal
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>
          *param_1,ulong64 param_2,ulong64 *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FCasBlockId FVar4;
  undefined4 uVar5;
  longlong lVar6;
  IErrorDetails *pIVar7;
  ulong64 *puVar8;
  int iVar9;
  FDateTime FVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ulong64 local_res18;
  ulong64 local_res20;
  TValueOrError<void,UE::UnifiedError::FError> local_e8;
  TArray<UE::THash<96>,TSizedDefaultAllocator<32>_> local_d0;
  TIterator local_c0;
  FString local_90;
  FValueComparisonClass<_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>
  local_80;
  FScriptContainerElement *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  *local_48;
  undefined2 local_40;
  
  local_80.Predicate.Predicate =
       (TDereferenceWrapper<UE::IoStore::FCasBlockInfo,_private:_class_TValueOrError<void,UE::UnifiedError::FError>___cdecl_UE::IoStore::FOnDemandInstallCache::PurgeInternal(TMap<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>_&,unsigned___int64,unsigned___int64_&)_::_2_::<lambda_1>_>
        )&local_res18;
  local_res20 = param_2;
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>_>::FValueComparisonClass<_UE::IoStore::FOnDemandInstallCache::PurgeInternal_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
              *)param_1,&local_80);
  puVar8 = param_3;
  *param_3 = 0;
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_c0,
             (TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
              *)param_1);
  uStack_60 = (uint)local_c0._padding_;
  auStack_70._8_8_ = local_c0._padding_;
  uStack_5c = local_c0._padding_._4_4_;
  auStack_70._0_8_ = CONCAT44(local_c0._padding_._4_4_,(int)local_c0._padding_);
  local_40 = 0;
  local_78 = (FScriptContainerElement *)local_c0._padding_;
  local_58 = local_c0._padding_;
  pTStack_50 = local_c0.Set;
  uVar11 = auStack_70._16_8_ >> 0x20;
  uVar13 = local_c0._padding_._4_4_;
  local_48 = (TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
              *)param_1;
  if ((int)local_c0._padding_._4_4_ < *(int *)(local_c0._padding_ + 0x18)) {
    do {
      lVar6 = *(longlong *)local_78;
      FVar4.Id = *(uint *)(lVar6 + (longlong)(int)uVar11 * 0x28);
      lVar1 = lVar6 + (longlong)(int)uVar13 * 0x28;
      if (*(longlong *)(lVar6 + 0x18 + (longlong)(int)uVar13 * 0x28) == 0) {
        ::operator/(&local_90,&this->CacheDirectory,L"cas.jrn");
        local_c0._padding_ = (longlong)local_90.Data.AllocatorInstance.Data;
        local_c0._padding_._0_4_ = local_90.Data.ArrayNum;
        local_c0._padding_._4_4_ = local_90.Data.ArrayMax;
        local_90.Data.ArrayNum = 0;
        local_90.Data.ArrayMax = 0;
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0._padding_ = 0;
        local_c0._padding_._0_4_ = 0;
        local_c0._padding_._4_4_ = 0;
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        FCas::DeleteBlock(&this->Cas,&local_e8,FVar4,&local_d0);
        if (local_e8.Error.bIsSet != false) {
          pIVar7 = (IErrorDetails *)
                   CONCAT44(local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_,
                            (uint)local_e8.Error.TypedValue.ErrorDetails.Reference);
          (__return_storage_ptr__->Error).bIsSet = local_e8.Error.bIsSet;
          (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_e8.Error.TypedValue.ErrorCode
          ;
          (__return_storage_ptr__->Error).TypedValue.ModuleId = local_e8.Error.TypedValue.ModuleId;
          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          if (pIVar7 != (IErrorDetails *)0x0) {
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = pIVar7;
            (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&param_3);
            (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
          }
          if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
          if ((void *)local_c0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          if ((FScriptContainerElement *)local_c0._padding_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          if ((char)local_40 == '\0') {
            return __return_storage_ptr__;
          }
LAB_1445efd18:
          if (local_40._1_1_ == '\0') {
            return __return_storage_ptr__;
          }
          uVar13 = *(int *)&(local_48->Elements).field_0x8 -
                   *(int *)&(local_48->Elements).field_0x34;
          if (uVar13 < 4) {
            iVar9 = 1;
          }
          else {
            uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar9 = 1 << ((byte)lVar1 & 0x1f);
          }
          if ((((int)uVar13 < 1) || (iVar9 <= local_48->HashSize)) && (local_48->HashSize <= iVar9))
          {
            return __return_storage_ptr__;
          }
          local_48->HashSize = iVar9;
          TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_48);
          return __return_storage_ptr__;
        }
        FOnDemandInstallCacheStats::OnBlockDeleted(*(long64 *)(lVar1 + 0x10),false);
        LOCK();
        if ((atomic<UE::IoStore::FCasBlockId>)FVar4.Id == this->CurrentBlock) {
          this->CurrentBlock = (atomic<UE::IoStore::FCasBlockId>)0x0;
        }
        UNLOCK();
        *puVar8 = *puVar8 + *(longlong *)(lVar1 + 8);
        TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uVar13);
        iVar9 = local_d0.ArrayNum;
        uVar11 = (ulonglong)local_d0.ArrayNum;
        local_40 = CONCAT11(local_40._1_1_,1);
        pFVar2 = local_d0.AllocatorInstance.Data + uVar11 * 0xc;
        FVar12.Data = local_d0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar9) {
            `TCheckedPointerIterator<UE::THash<96>,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&param_3);
          }
          if (FVar12.Data == pFVar2) break;
          local_e8.Error.TypedValue.ModuleId = (int)FCasLocation::Invalid.BlockId.Id;
          local_e8.Error.TypedValue.ErrorDetails.Reference._0_4_ = FCasLocation::Invalid.BlockOffset
          ;
          uVar5 = *(undefined4 *)(FVar12.Data + 8);
          local_e8.Error._20_1_ = SUB41(uVar5,0);
          local_e8.Error._21_2_ = SUB42((uint)uVar5 >> 8,0);
          local_e8.Error._23_1_ = SUB41((uint)uVar5 >> 0x18,0);
          local_e8.Error.TypedValue.ErrorCode = 1;
          local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_ =
               (undefined4)*(undefined8 *)FVar12.Data;
          local_e8.Error._16_4_ = SUB84((ulonglong)*(undefined8 *)FVar12.Data >> 0x20,0);
          if ((uint)local_c0._padding_ == local_c0._padding_._4_4_) {
            local_c0._padding_._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)&local_c0._padding_,
                            (int *)((longlong)&local_c0._padding_ + 4));
          }
          FVar12.Data = FVar12.Data + 0xc;
          puVar3 = (undefined8 *)
                   (local_c0._padding_ + (longlong)(int)(uint)local_c0._padding_ * 0x18);
          *puVar3 = CONCAT44(local_e8.Error.TypedValue.ModuleId,local_e8.Error.TypedValue.ErrorCode)
          ;
          puVar3[1] = CONCAT44(local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_,
                               (uint)local_e8.Error.TypedValue.ErrorDetails.Reference);
          *(ulonglong *)(local_c0._padding_ + (longlong)(int)(uint)local_c0._padding_ * 0x18 + 0x10)
               = CONCAT17(local_e8.Error._23_1_,
                          CONCAT25(local_e8.Error._21_2_,
                                   CONCAT14(local_e8.Error._20_1_,local_e8.Error._16_4_)));
          uVar11 = local_d0._8_8_ & 0xffffffff;
          local_c0._padding_._0_4_ = (uint)local_c0._padding_ + 1;
        }
        local_e8.Error.TypedValue.ErrorCode = 3;
        local_e8.Error.TypedValue.ModuleId = FVar4.Id;
        FVar10 = FDateTime::UtcNow();
        local_e8.Error.bIsSet = false;
        local_e8.Error._17_3_ = 0;
        local_e8.Error._20_1_ = 0;
        local_e8.Error._21_2_ = 0;
        local_e8.Error._23_1_ = 0;
        local_e8.Error.TypedValue.ErrorDetails.Reference._0_4_ = (uint)*(undefined8 *)FVar10.Ticks;
        local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_ =
             (undefined4)((ulonglong)*(undefined8 *)FVar10.Ticks >> 0x20);
        if ((uint)local_c0._padding_ == local_c0._padding_._4_4_) {
          local_c0._padding_._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)&local_c0._padding_,
                          (int *)((longlong)&local_c0._padding_ + 4));
        }
        local_res18 = 0;
        param_3._0_4_ = 0;
        puVar3 = (undefined8 *)(local_c0._padding_ + (longlong)(int)(uint)local_c0._padding_ * 0x18)
        ;
        *puVar3 = CONCAT44(local_e8.Error.TypedValue.ModuleId,local_e8.Error.TypedValue.ErrorCode);
        puVar3[1] = CONCAT44(local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_,
                             (uint)local_e8.Error.TypedValue.ErrorDetails.Reference);
        *(ulonglong *)(local_c0._padding_ + (longlong)(int)(uint)local_c0._padding_ * 0x18 + 0x10) =
             CONCAT17(local_e8.Error._23_1_,
                      CONCAT25(local_e8.Error._21_2_,
                               CONCAT14(local_e8.Error._20_1_,local_e8.Error._16_4_)));
        local_c0._padding_._0_4_ = (uint)local_c0._padding_ + 1;
        FCasJournal::Commit(&local_e8,(FTransaction *)&local_c0,&local_res18,(uint *)&param_3);
        if (local_e8.Error.bIsSet != false) {
          pIVar7 = (IErrorDetails *)
                   CONCAT44(local_e8.Error.TypedValue.ErrorDetails.Reference._4_4_,
                            (uint)local_e8.Error.TypedValue.ErrorDetails.Reference);
          (__return_storage_ptr__->Error).bIsSet = local_e8.Error.bIsSet;
          (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_e8.Error.TypedValue.ErrorCode
          ;
          (__return_storage_ptr__->Error).TypedValue.ModuleId = local_e8.Error.TypedValue.ModuleId;
          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          if (pIVar7 != (IErrorDetails *)0x0) {
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = pIVar7;
            (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&param_3);
            (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
          }
          if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
          if ((void *)local_c0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          if ((FScriptContainerElement *)local_c0._padding_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          goto LAB_1445efd18;
        }
        if (local_res20 <= *puVar8) {
          if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
          if ((void *)local_c0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          if ((FScriptContainerElement *)local_c0._padding_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_c0._padding_);
          }
          goto LAB_1445efd74;
        }
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
        }
        if ((void *)local_c0._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_c0._padding_);
        }
        if ((FScriptContainerElement *)local_c0._padding_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c0._padding_);
        }
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      if (*(int *)(auStack_70._8_8_ + 0x18) <= (int)uStack_5c) goto LAB_1445efd6e;
      uVar11 = (ulonglong)uStack_5c;
      uVar13 = uStack_5c;
    } while( true );
  }
LAB_1445efdc8:
  (__return_storage_ptr__->Error).bIsSet = false;
  return __return_storage_ptr__;
LAB_1445efd6e:
  if ((char)local_40 != '\0') {
LAB_1445efd74:
    if (local_40._1_1_ != '\0') {
      uVar13 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar9 = 1;
      }
      else {
        uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar9 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_48->HashSize < iVar9)) || (iVar9 < local_48->HashSize)) {
        local_48->HashSize = iVar9;
        TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  goto LAB_1445efdc8;
}

// PutChunk @ 1445f0320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::PutChunk
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,FIoBuffer *param_1,
          FIoHash *param_2)

{
  FSharedMutex *pFVar1;
  FPendingChunks *this_00;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar5;
  FPendingChunks *local_res8;
  TValueOrError<void,UE::UnifiedError::FError> local_38;
  
  this_00 = &this->PendingChunks;
  if (0x400000 < (this->PendingChunks).TotalSize) {
    if (((this->PendingChunks).Chunks.ArrayNum != (this->PendingChunks).ChunkHashes.ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunks.Num() == ChunkHashes.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                           ,0x692,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar3)();
      return pTVar5;
    }
    if ((((this->PendingChunks).TotalSize == 0) && ((this->PendingChunks).Chunks.ArrayNum == 0)) &&
       ((this->PendingChunks).ChunkHashes.ArrayNum == 0)) {
      local_38.Error.bIsSet = false;
    }
    else {
      local_res8 = this_00;
      FlushPendingChunksImpl(this,&local_38,this_00,0);
      ScopeExitSupport::
      TScopeGuard<`UE::IoStore::FOnDemandInstallCache::FlushPendingChunks'::__l2::<lambda_1>_>::
      ~TScopeGuard<_UE::IoStore::FOnDemandInstallCache::FlushPendingChunks_::__l2::<lambda_1>_>
                (&local_res8);
    }
    if (local_38.Error.bIsSet != false) {
      (__return_storage_ptr__->Error).bIsSet = local_38.Error.bIsSet;
      UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_38);
      if (local_38.Error.bIsSet == false) {
        return __return_storage_ptr__;
      }
      if (local_38.Error.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_38.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    bVar4 = FPendingChunks::IsEmpty(this_00);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingChunks.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                           ,0x92a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = &(this->PendingChunks).SharedMutex;
  LOCK();
  bVar4 = pFVar1->State == (atomic<unsigned_int>)0x0;
  if (bVar4) {
    pFVar1->State = (atomic<unsigned_int>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FSharedMutex::LockSlow(&(this->PendingChunks).SharedMutex);
  }
  FPendingChunks::Append(this_00,param_1,param_2);
  (__return_storage_ptr__->Error).bIsSet = false;
  LOCK();
  pFVar1 = &(this->PendingChunks).SharedMutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_int>)((int)pFVar1->State + -1);
  UNLOCK();
  if (((uint)aVar2 & 6) != 0) {
    FSharedMutex::WakeWaitingThreads(&(this->PendingChunks).SharedMutex,(uint)aVar2);
  }
  return __return_storage_ptr__;
}

// RegisterConsoleCommands @ 1445f1aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::RegisterConsoleCommands(FOnDemandInstallCache *this)

{
  int *piVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined8 uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar6 = Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::IoStore::FOnDemandInstallCache::RegisterConsoleCommands'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  uVar8 = (*pcVar2)(pIVar3,L"iostore.SimulateCriticalInstallCacheError",L"",&local_68,0);
  piVar1 = &(this->ConsoleCommands).ArrayMax;
  iVar5 = (this->ConsoleCommands).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleCommands).AllocatorInstance,piVar1);
  }
  (this->ConsoleCommands).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar5 * 8) = uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// Reset @ 1445f8a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::Reset
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  IFileManager *pIVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  FString local_58;
  TStringView<wchar_t> local_48;
  TValueOrError<void,UE::UnifiedError::FError> local_38;
  
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  pIVar4 = IFileManager::Get();
  if ((this->CacheDirectory).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->CacheDirectory).Data.AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,pwVar6,0);
  if (cVar2 == '\0') {
    DVar3 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl((FString *)&local_48,L"Failed to delete cache directory \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeCasError<void>
              (__return_storage_ptr__,InitializeFailed,DeleteError,(FString *)&local_48,DVar3);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.DataPtr;
  }
  else {
    if ((this->CacheDirectory).Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->CacheDirectory).Data.AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,pwVar6,1);
    if (cVar2 == '\0') {
      DVar3 = FWindowsPlatformMisc::GetLastError();
      ::FString::PrintfImpl((FString *)&local_48,L"Failed to create cache directory \'%s\'");
      UnifiedError::IoStoreOnDemand::MakeCasError<void>
                (__return_storage_ptr__,InitializeFailed,WriteError,(FString *)&local_48,DVar3);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.DataPtr;
    }
    else {
      local_48.DataPtr = (wchar_t *)(this->CacheDirectory).Data.AllocatorInstance.Data;
      iVar1 = (this->CacheDirectory).Data.ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      local_48.Size = iVar5;
      FCas::Initialize(&this->Cas,&local_38,&local_48,false);
      if (local_38.Error.bIsSet != false) {
        (__return_storage_ptr__->Error).bIsSet = local_38.Error.bIsSet;
        (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_38.Error.TypedValue.ErrorCode;
        (__return_storage_ptr__->Error).TypedValue.ModuleId = local_38.Error.TypedValue.ModuleId;
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        if (local_38.Error.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0) {
          return __return_storage_ptr__;
        }
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
             local_38.Error.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_38.Error.TypedValue.ErrorDetails.Reference + 8))
                  (local_38.Error.TypedValue.ErrorDetails.Reference,local_res8);
        (**(code **)((longlong)*local_38.Error.TypedValue.ErrorDetails.Reference + 0x10))
                  (local_38.Error.TypedValue.ErrorDetails.Reference);
        return __return_storage_ptr__;
      }
      ::operator/(&local_58,&this->CacheDirectory,L"cas.jrn");
      FCasJournal::Create(&local_38,&local_58);
      if (local_38.Error.bIsSet == false) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
        (__return_storage_ptr__->Error).bIsSet = false;
      }
      else {
        (__return_storage_ptr__->Error).bIsSet = local_38.Error.bIsSet;
        UnifiedError::FError::FError((FError *)__return_storage_ptr__,(FError *)&local_38);
        if ((local_38.Error.bIsSet != false) &&
           (local_38.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          (**(code **)((longlong)*local_38.Error.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Resolve @ 1445f95a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandInstallCache::Resolve(FOnDemandInstallCache *this,FIoRequestImpl *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  FSharedMutex *this_00;
  int iVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  void *pvVar9;
  BufCore *pBVar10;
  undefined8 *puVar11;
  IAsyncReadRequest *pIVar12;
  code *pcVar13;
  byte bVar14;
  atomic<unsigned_char> aVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  FDateTime FVar20;
  ulonglong uVar21;
  FTaskBase *this_01;
  FChunkRequest *pFVar22;
  FChunkRequest *pFVar23;
  IAsyncReadRequest *pIVar24;
  longlong *plVar25;
  undefined ***pppuVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ForAnyElementType FVar31;
  undefined1 auStackY_1d8 [32];
  EIoErrorCode local_1a4;
  FScriptContainerElement *local_1a0;
  uint uStack_198;
  int iStack_194;
  FCasBlockId local_190;
  uint uStack_18c;
  FOnDemandChunkInfo local_188;
  FIoOffsetAndLength local_168;
  FIoOffsetAndLength local_158;
  FString local_148;
  TSharedPtr<IAsyncReadFileHandle,1> local_138;
  FString local_128 [2];
  TArrayView<unsigned_int_const_,int> local_108;
  TSharedPtr<IAsyncReadFileHandle,1> local_f8;
  TIoStatusOr<FIoOffsetAndLength> local_e8;
  TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError> local_c8;
  code *local_a8;
  undefined **local_98;
  FOnDemandInstallCache *local_90;
  FIoRequestImpl *local_88;
  undefined ***local_80;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a4 = UnknownChunkID;
  FOnDemandIoStore::GetInstalledChunkInfo(this->IoStore,&local_188,&param_1->ChunkId,&local_1a4);
  if (local_188.SharedContainer.Object == (FOnDemandContainer *)0x0) {
    if (local_1a4 == NotInstalled) {
      CompleteRequest(this,param_1,NotInstalled);
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    goto LAB_1445fa0ba;
  }
  uVar6 = (param_1->Options).RequestedOffset;
  uVar30 = (local_188.Entry)->RawSize - uVar6;
  if ((param_1->Options).RequestedSize < uVar30) {
    uVar30 = (param_1->Options).RequestedSize;
  }
  uVar4 = (local_188.Entry)->BlockCount;
  local_1a0 = ((local_188.SharedContainer.Object)->BlockSizes).AllocatorInstance.Data +
              (ulonglong)(local_188.Entry)->BlockOffset * 4;
  if (((int)uVar4 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  iStack_194 = local_128[0].Data.ArrayMax;
  uStack_198 = uVar4;
  if ((local_188.SharedContainer.Object == (FOnDemandContainer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  local_108._12_4_ = iStack_194;
  local_108.ArrayNum = uStack_198;
  local_108.DataPtr = (uint *)local_1a0;
  FIoChunkEncoding::GetChunkRange
            (&local_e8,(ulonglong)(local_188.Entry)->RawSize,
             (local_188.SharedContainer.Object)->BlockSize,&local_108,uVar6,uVar30);
  if (local_e8.StatusValue.ErrorCode == Ok) {
    this_00 = &(this->PendingChunks).SharedMutex;
    aVar5 = this_00->State;
    if (((uint)aVar5 & 3) == 0) {
      LOCK();
      bVar17 = aVar5 == this_00->State;
      if (bVar17) {
        this_00->State = (atomic<unsigned_int>)((int)aVar5 + 8);
      }
      UNLOCK();
      if (!bVar17) goto LAB_1445f9758;
    }
    else {
LAB_1445f9758:
      FSharedMutex::LockSharedSlow(this_00);
    }
    pFVar7 = (this->PendingChunks).ChunkHashes.AllocatorInstance.Data;
    pFVar23 = (FChunkRequest *)0x0;
    for (pFVar27 = pFVar7;
        pFVar27 != pFVar7 + (longlong)(this->PendingChunks).ChunkHashes.ArrayNum * 0x14;
        pFVar27 = pFVar27 + 0x14) {
      if (((*(longlong *)pFVar27 == *(longlong *)((local_188.Entry)->Hash).Hash) &&
          (*(longlong *)(pFVar27 + 8) == *(longlong *)(((local_188.Entry)->Hash).Hash + 8))) &&
         (*(int *)(pFVar27 + 0x10) == *(int *)(((local_188.Entry)->Hash).Hash + 0x10))) {
        uVar4 = (uint)(((longlong)pFVar27 - (longlong)pFVar7) / 0x14);
        if (uVar4 != 0xffffffff) {
          uVar19 = 0;
          if ((int)uVar4 < (this->PendingChunks).Chunks.ArrayNum) {
            uVar19 = ~uVar4 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          pFVar7 = (this->PendingChunks).Chunks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            pFVar22 = ::operator_new(0x58);
            if (pFVar22 != (FChunkRequest *)0x0) {
              if (local_e8.StatusValue.ErrorCode != Ok) {
                StatusOrCrash(&local_e8.StatusValue);
              }
              FIoStatus::operator=(&local_e8.StatusValue,&FIoStatus::Unknown);
              local_168.OffsetAndLength[8] = local_e8.Value.Pad[8];
              local_168.OffsetAndLength[9] = local_e8.Value.Pad[9];
              local_f8.Object = (IAsyncReadFileHandle *)0x0;
              local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              local_168.OffsetAndLength[0] = local_e8.Value.Pad[0];
              local_168.OffsetAndLength[1] = local_e8.Value.Pad[1];
              local_168.OffsetAndLength[2] = local_e8.Value.Pad[2];
              local_168.OffsetAndLength[3] = local_e8.Value.Pad[3];
              local_168.OffsetAndLength[4] = local_e8.Value.Pad[4];
              local_168.OffsetAndLength[5] = local_e8.Value.Pad[5];
              local_168.OffsetAndLength[6] = local_e8.Value.Pad[6];
              local_168.OffsetAndLength[7] = local_e8.Value.Pad[7];
              pFVar23 = FChunkRequest::FChunkRequest
                                  (pFVar22,&local_f8,param_1,&local_188,&local_168,uVar30);
            }
            if ((param_1->BackendData != (void *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Request.BackendData == nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                    ,0x676,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            if ((pFVar23 == (FChunkRequest *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ChunkRequest != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                    ,0x677,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            param_1->BackendData = pFVar23;
            plVar25 = *(longlong **)pFVar7;
            lVar8 = *plVar25;
            uVar29 = (ulonglong)CONCAT14((char)plVar25[3],(int)plVar25[1]);
            pBVar10 = (pFVar23->EncodedChunk).CorePtr.Reference;
            uVar28 = (ulonglong)CONCAT14(pBVar10->DataSizeHigh,pBVar10->DataSizeLow);
            uVar30 = (ulonglong)
                     CONCAT41(CONCAT31(CONCAT21(CONCAT11((pFVar23->ChunkRange).OffsetAndLength[0],
                                                         (pFVar23->ChunkRange).OffsetAndLength[1]),
                                                (pFVar23->ChunkRange).OffsetAndLength[2]),
                                       (pFVar23->ChunkRange).OffsetAndLength[3]),
                              (pFVar23->ChunkRange).OffsetAndLength[4]);
            if (uVar29 < uVar30) {
              uVar30 = uVar29;
            }
            uVar21 = uVar28;
            if (uVar29 - uVar30 < uVar28) {
              uVar21 = uVar29 - uVar30;
            }
            if ((uVar21 != uVar28) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BytesToRead.GetSize() == ChunkRequest.EncodedChunk.GetSize()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                    ,0x857,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            pBVar10 = (pFVar23->EncodedChunk).CorePtr.Reference;
            memcpy(pBVar10->DataPtr,(void *)(lVar8 + uVar30),
                   (ulonglong)CONCAT14(pBVar10->DataSizeHigh,pBVar10->DataSizeLow));
            LOCK();
            aVar5 = this_00->State;
            this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
            UNLOCK();
            if (((uint)aVar5 & 0xfffffffb) == 10) {
              FSharedMutex::WakeWaitingThread(this_00);
            }
            this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                      ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                                  *)&Tasks::Private::SmallTaskAllocator);
            if (this_01 == (FTaskBase *)0x0) {
              Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
            }
            else {
              Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
              this_01->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTaskBase<`UE::IoStore::FOnDemandInstallCache::Resolve'::`33'::<lambda_1>,void,void>
                    ::_vftable_;
              Tasks::Private::FTaskBase::Init
                        (this_01,
                         L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp(2140)"
                         ,Default,None,None);
              this_01[1]._padding_ = (longlong)this;
              this_01[1]._padding_ = (longlong)param_1;
              this_01->_padding_ =
                   (longlong)
                   &Tasks::Private::
                    TExecutableTask<`UE::IoStore::FOnDemandInstallCache::Resolve'::`33'::<lambda_1>_>
                    ::_vftable_;
              Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
              LOCK();
              paVar1 = &this_01->RefCount;
              aVar5 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar5 == (atomic<unsigned_int>)0x1) {
                (**(code **)this_01->_padding_)(this_01,1);
              }
            }
            goto LAB_1445fa08e;
          }
        }
        break;
      }
    }
    LOCK();
    aVar5 = this_00->State;
    this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
    UNLOCK();
    if (((uint)aVar5 & 0xfffffffb) == 10) {
      FSharedMutex::WakeWaitingThread(this_00);
    }
    FCas::FindChunk(&this->Cas,(FIoHash *)&local_190);
    if ((local_190.Id == 0) || (uStack_18c == 0xffffffff)) {
      local_e8.StatusValue.ErrorCode = NotInstalled;
      goto LAB_1445fa07c;
    }
    FIoStoreTrace::RequestStarted(param_1,(IIoDispatcherBackend *)this);
    FVar20 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    bVar17 = FCas::TrackAccessIf(&this->Cas,Granular,local_190,*FVar20.Ticks,true);
    if (bVar17) {
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      FOnDemandIoStore::FlushLastAccess
                (this->IoStore,
                 (TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandFlushLastAccessResult)> *)
                 local_78);
      if (local_78._0_8_ != 0) {
        plVar25 = (longlong *)(local_78 + 0x10);
        if (local_50 != (longlong *)0x0) {
          plVar25 = local_50;
        }
        (**(code **)(*plVar25 + 0x10))();
      }
    }
    FCas::OpenAsyncRead(&this->Cas,&local_c8,local_190);
    uVar28 = (ulonglong)local_c8.Variant.TypeIndex;
    if ((2 < uVar28) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,TValueOrError<TUniquePtr<IAsyncReadFileHandle,TDefaultDelete<IAsyncReadFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IAsyncReadFileHandle,struct_TDefaultDelete<class_IAsyncReadFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar28 + 4) == '\0') {
      if ((local_c8.Variant.TypeIndex != 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      lVar16 = local_c8.Variant._padding_;
      lVar8 = local_c8.Variant._padding_;
      local_c8.Variant._padding_ = 0;
      local_c8.Variant._padding_ = 0;
      if ((2 < local_c8.Variant.TypeIndex) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IAsyncReadFileHandle,1>,TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IAsyncReadFileHandle,1>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_c8.Variant.TypeIndex])(&local_c8);
      local_c8.Variant.TypeIndex = 2;
      pFVar22 = ::operator_new(0x58);
      if (pFVar22 != (FChunkRequest *)0x0) {
        if (local_e8.StatusValue.ErrorCode != Ok) {
          StatusOrCrash(&local_e8.StatusValue);
        }
        FIoStatus::operator=(&local_e8.StatusValue,&FIoStatus::Unknown);
        local_138.Object = (IAsyncReadFileHandle *)lVar8;
        local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)lVar16;
        if ((TReferenceControllerBase<1> *)lVar16 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *(atomic<int> *)(lVar16 + 8) = (atomic<int>)((int)*(atomic<int> *)(lVar16 + 8) + 1);
          UNLOCK();
        }
        local_158.OffsetAndLength[8] = local_e8.Value.Pad[8];
        local_158.OffsetAndLength[9] = local_e8.Value.Pad[9];
        local_158.OffsetAndLength[0] = local_e8.Value.Pad[0];
        local_158.OffsetAndLength[1] = local_e8.Value.Pad[1];
        local_158.OffsetAndLength[2] = local_e8.Value.Pad[2];
        local_158.OffsetAndLength[3] = local_e8.Value.Pad[3];
        local_158.OffsetAndLength[4] = local_e8.Value.Pad[4];
        local_158.OffsetAndLength[5] = local_e8.Value.Pad[5];
        local_158.OffsetAndLength[6] = local_e8.Value.Pad[6];
        local_158.OffsetAndLength[7] = local_e8.Value.Pad[7];
        pFVar23 = FChunkRequest::FChunkRequest
                            (pFVar22,&local_138,param_1,&local_188,&local_158,uVar30);
      }
      if ((param_1->BackendData != (void *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Request.BackendData == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                              ,0x676,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      if ((pFVar23 == (FChunkRequest *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChunkRequest != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                              ,0x677,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      param_1->BackendData = pFVar23;
      local_98 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::IoStore::FOnDemandInstallCache::Resolve'::`2'::<lambda_2>,0,0>
                  ::_vftable_;
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::FOnDemandInstallCache::Resolve'::__l2::<lambda_2>,void,bool,IAsyncReadRequest_*>
                 ::Call;
      local_80 = (undefined ***)0x0;
      local_90 = this;
      local_88 = param_1;
      if (((FScriptContainerElement *)lVar8 == (FScriptContainerElement *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      pIVar24 = (IAsyncReadRequest *)
                (**(code **)(*(longlong *)lVar8 + 0x10))
                          (lVar8,(ulonglong)
                                 CONCAT41(CONCAT31(CONCAT21(CONCAT11((pFVar23->ChunkRange).
                                                                     OffsetAndLength[0],
                                                                     (pFVar23->ChunkRange).
                                                                     OffsetAndLength[1]),
                                                            (pFVar23->ChunkRange).OffsetAndLength[2]
                                                           ),
                                                   (pFVar23->ChunkRange).OffsetAndLength[3]),
                                          (pFVar23->ChunkRange).OffsetAndLength[4]) +
                                 (ulonglong)uStack_18c,
                           (ulonglong)
                           CONCAT41(CONCAT31(CONCAT21(CONCAT11((pFVar23->ChunkRange).OffsetAndLength
                                                               [5],(pFVar23->ChunkRange).
                                                                   OffsetAndLength[6]),
                                                      (pFVar23->ChunkRange).OffsetAndLength[7]),
                                             (pFVar23->ChunkRange).OffsetAndLength[8]),
                                    (pFVar23->ChunkRange).OffsetAndLength[9]),2);
      pIVar12 = (pFVar23->FileReadRequest).Ptr;
      if ((pIVar12 != pIVar24) &&
         ((pFVar23->FileReadRequest).Ptr = pIVar24, pIVar12 != (IAsyncReadRequest *)0x0)) {
        (*(code *)**(undefined8 **)pIVar12)(pIVar12,1);
      }
      if ((pFVar23->FileReadRequest).Ptr == (IAsyncReadRequest *)0x0) {
        FIoStoreTrace::RequestFailed(param_1);
        pvVar9 = param_1->BackendData;
        param_1->BackendData = (void *)0x0;
        CompleteRequest(this,param_1,ReadError);
        if (pvVar9 != (void *)0x0) {
          pBVar10 = *(BufCore **)((longlong)pvVar9 + 0x48);
          if (pBVar10 != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount(pBVar10);
            LOCK();
            piVar2 = &pBVar10->NumRefs;
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FIoBuffer::BufCore::~BufCore(pBVar10);
              ::operator_delete(pBVar10,0x20);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)pvVar9 + 0x28));
          puVar11 = *(undefined8 **)((longlong)pvVar9 + 0x10);
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)*puVar11)(puVar11,1);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)((longlong)pvVar9 + 8));
          ::operator_delete(pvVar9,0x58);
        }
      }
      if (local_a8 != (code *)0x0) {
        pppuVar26 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar26 = local_80;
        }
        (*(code *)(*pppuVar26)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)lVar16);
    }
    else {
      FCas::GetBlockFilename(&this->Cas,&local_148,local_190);
      FVar31.Data = local_148.Data.AllocatorInstance.Data;
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        if ((local_c8.Variant.TypeIndex != 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar17)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        FFileSystemError::GetMessage((FFileSystemError *)&local_c8,local_128);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        FVar31.Data = local_148.Data.AllocatorInstance.Data;
        if (local_128[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128[0].Data.AllocatorInstance.Data);
        }
      }
      pvVar9 = param_1->BackendData;
      param_1->BackendData = (void *)0x0;
      LOCK();
      bVar17 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
      if (bVar17) {
        FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar17) {
        FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
      }
      InstallCacheAnalytics.ReadErrorCount = InstallCacheAnalytics.ReadErrorCount + 1;
      InstallCacheAnalytics.ReadCount = InstallCacheAnalytics.ReadCount + 1;
      LOCK();
      aVar15 = FInstallCacheAnalytics::Mutex.State + -1;
      UNLOCK();
      bVar14 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
      FInstallCacheAnalytics::Mutex.State = aVar15;
      if (bVar14 != 0) {
        FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
      }
      CompleteRequest(this,param_1,FileOpenFailed);
      if (pvVar9 != (void *)0x0) {
        pBVar10 = *(BufCore **)((longlong)pvVar9 + 0x48);
        if (pBVar10 != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount(pBVar10);
          LOCK();
          piVar2 = &pBVar10->NumRefs;
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar10);
            ::operator_delete(pBVar10,0x20);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar9 + 0x28));
        puVar11 = *(undefined8 **)((longlong)pvVar9 + 0x10);
        if (puVar11 != (undefined8 *)0x0) {
          (**(code **)*puVar11)(puVar11,1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar9 + 8));
        ::operator_delete(pvVar9,0x58);
      }
      if (FVar31.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar31.Data);
      }
    }
    uVar30 = (ulonglong)local_c8.Variant.TypeIndex;
    if ((2 < local_c8.Variant.TypeIndex) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IAsyncReadFileHandle,1>,TValueOrError<TSharedPtr<IAsyncReadFileHandle,1>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IAsyncReadFileHandle,1>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30])(&local_c8);
  }
  else {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
LAB_1445fa07c:
    CompleteRequest(this,param_1,local_e8.StatusValue.ErrorCode);
  }
LAB_1445fa08e:
  bVar17 = true;
  FIoStatus::operator=(&local_e8.StatusValue,Unknown);
  FIoStatus::~FIoStatus(&local_e8.StatusValue);
LAB_1445fa0ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedContainer.SharedReferenceCount.ReferenceController);
  return bVar17;
}

// ResolveIoRequests @ 1445fc530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::ResolveIoRequests
          (FOnDemandInstallCache *this,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FIoRequestImpl *pFVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    while( true ) {
      do {
        pFVar1 = param_1->Head;
        if (pFVar1 == (FIoRequestImpl *)0x0) {
          return;
        }
        pFVar2 = pFVar1->NextRequest;
        param_1->Head = pFVar2;
        if (pFVar2 == (FIoRequestImpl *)0x0) {
          param_1->Tail = (FIoRequestImpl *)0x0;
        }
        pFVar1->NextRequest = (FIoRequestImpl *)0x0;
        bVar4 = Resolve(this,pFVar1);
      } while (bVar4);
      if (pFVar1->NextRequest != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x72,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_2->Tail != (FIoRequestImpl *)0x0) break;
      if (param_2->Head != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x7c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      param_2->Tail = pFVar1;
      param_2->Head = pFVar1;
    }
    if (param_2->Head == (FIoRequestImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x76,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->Tail->NextRequest = pFVar1;
    param_2->Tail = pFVar1;
  } while( true );
}

// Shutdown @ 144600850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandInstallCache::Shutdown(FOnDemandInstallCache *this)

{
  FMutex *this_00;
  TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_char> aVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  ForAnyElementType _Src;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar8;
  ForAnyElementType FVar9;
  IFileManager *pIVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  FString local_1c0;
  uint local_1b0 [2];
  TValueOrError<void,UE::UnifiedError::FError> local_1a8;
  TValueOrError<void,UE::UnifiedError::FError> local_190;
  FString local_178;
  FTransaction local_168;
  ulong64 local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  undefined1 local_f8 [24];
  undefined8 uStack_e0;
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_c0;
  ulonglong local_b0;
  TValueOrError<__int64,UE::UnifiedError::FError> local_a8;
  TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  FlushPendingChunksImpl(this,&local_1a8,&this->PendingChunks,0);
  FVar9.Data = (FScriptContainerElement *)0x0;
  iVar14 = 0;
  if (local_1a8.Error.bIsSet != false) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      ::LexToString(&local_130,(FError *)&local_1a8);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    TVar8.Reference = local_1a8.Error.TypedValue.ErrorDetails.Reference;
    if ((local_1a8.Error.bIsSet != false) &&
       (local_1a8.Error.TypedValue.ErrorCode = 0, local_1a8.Error.TypedValue.ModuleId = 0,
       local_1a8.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_1a8.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar8.Reference + 0x10))();
      if (local_1a8.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_1a8.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  local_88.Elements._0_8_ = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  this_00 = &(this->Cas).Mutex;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  LOCK();
  bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar15) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar15) {
    FMutex::LockSlow(this_00);
  }
  pTVar1 = &(this->Cas).LastAccess;
  if (&local_88 !=
      (TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
       *)pTVar1) {
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>_>
              (&local_88,
               (TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)pTVar1);
  }
  local_c0.InlineData[0] = '\0';
  local_c0.InlineData[1] = '\0';
  local_c0.InlineData[2] = '\0';
  local_c0.InlineData[3] = '\0';
  local_c0._padding_ = 0;
  local_b0 = 0;
  local_f8._16_8_ = 0;
  uStack_e0 = 0;
  local_f8._0_8_ = (FScriptContainerElement *)0x0;
  local_f8._8_8_ = 0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (pTVar1 != (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
                 *)local_f8) {
    TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)pTVar1,
               (TSet<TTuple<UE::IoStore::FCasBlockId,__int64>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>,FDefaultSetAllocator>
                *)local_f8);
  }
  local_b0 = local_b0 & 0xffffffff00000000;
  if (local_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c0.SecondaryData);
  }
  iVar7 = SUB84(local_f8._8_8_,4);
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
  }
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  ::operator/(&local_1c0,&this->CacheDirectory,L"cas.jrn");
  iVar7 = local_1c0.Data.ArrayNum;
  _Src.Data = local_1c0.Data.AllocatorInstance.Data;
  local_1d0.Data = (FScriptContainerElement *)0x0;
  if (local_1c0.Data.ArrayNum != 0) {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1c0.Data.ArrayNum,0,&local_1d0,local_1c0.Data.ArrayNum,
               (int *)((longlong)&local_1c8 + 4));
    memcpy(local_1d0.Data,_Src.Data,(longlong)iVar7 * 2);
    FVar9.Data = local_1d0.Data;
    iVar14 = local_1c8._4_4_;
  }
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 0;
  local_168.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Entries.ArrayNum = 0;
  local_168.Entries.ArrayMax = 0;
  local_168.JournalFile.Data.AllocatorInstance.Data = FVar9.Data;
  local_168.JournalFile.Data.ArrayMax = iVar14;
  JournalLastAccess(&local_168,
                    (TMap<UE::IoStore::FCasBlockId,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,__int64,0>_>
                     *)&local_88);
  local_148 = 0;
  local_1b0[0] = 0;
  FCasJournal::Commit(&local_190,&local_168,&local_148,local_1b0);
  if (local_190.Error.bIsSet != false) {
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      ::LexToString(&local_120,(FError *)&local_190);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    TVar8.Reference = local_190.Error.TypedValue.ErrorDetails.Reference;
    if ((local_190.Error.bIsSet != false) &&
       (local_190.Error.TypedValue.ErrorCode = 0, local_190.Error.TypedValue.ModuleId = 0,
       local_190.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_190.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar8.Reference + 0x10))();
      if (local_190.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_190.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  pIVar10 = IFileManager::Get();
  ::operator/(&local_140,&this->CacheDirectory,L"cas.jrn");
  uVar4 = this->MaxJournalSize;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar9.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  lVar11 = (**(code **)((longlong)*pIVar10 + 0x110))(pIVar10,FVar9.Data);
  if ((longlong)uVar4 < lVar11) {
    ::operator/(&local_178,&this->CacheDirectory,L"cas.snp");
    FCasSnapshot::TryCreateAndResetJournal(&local_a8,&local_178,&local_140);
    uVar12 = (ulonglong)local_a8.Variant.TypeIndex;
    if ((2 < uVar12) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<__int64,__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar12) == '\0') {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        if ((local_a8.Variant.TypeIndex != 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ::LexToString(&local_110,(FError *)&local_a8);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      if ((local_a8.Variant.TypeIndex != 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    if ((2 < local_a8.Variant.TypeIndex) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<__int64,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pFVar13 = (this->ConsoleCommands).AllocatorInstance.Data;
  iVar14 = (this->ConsoleCommands).ArrayNum;
  pFVar2 = pFVar13 + (longlong)iVar14 * 8;
  while( true ) {
    if ((this->ConsoleCommands).ArrayNum != iVar14) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1d8);
    }
    if (pFVar13 == pFVar2) break;
    uVar5 = *(undefined8 *)pFVar13;
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar5,1);
    pFVar13 = pFVar13 + 8;
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  if (local_168.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Entries.AllocatorInstance.Data);
  }
  if (local_168.JournalFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.JournalFile.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::IoStore::FCasBlockId,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// TryPinChunks @ 144608830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandInstallCache::TryPinChunks
          (FOnDemandInstallCache *this,TSharedPtr<UE::IoStore::FOnDemandContainer,1> *param_1,
          TArrayView<int_const_,int> *param_2,FOnDemandContentHandle *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FSharedMutex *this_00;
  FMutex *this_01;
  FOnDemandChunkEntry *pFVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_char> aVar4;
  atomic<unsigned_int> aVar5;
  FOnDemandContainer *pFVar6;
  FCasLocation FVar7;
  FOnDemandIoStore *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  atomic<unsigned_int> aVar12;
  uint uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FCasLocation *pFVar16;
  longlong lVar17;
  uint *puVar18;
  atomic<unsigned_int> *this_02;
  uint local_78 [2];
  FCasLocation local_70;
  uint *local_68;
  atomic<unsigned_int> *local_60;
  FOnDemandContentHandle local_58;
  FOnDemandContentHandle local_48;
  
  this_02 = &(this->PurgeDefragMutex).State;
  local_60 = this_02;
  if ((this_02 == (atomic<unsigned_int> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\SharedLock.h"
                          ,0x6c,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  aVar5 = ((FSharedMutex *)this_02)->State;
  do {
    if (((uint)aVar5 & 3) != 0) {
      iVar14 = param_2->ArrayNum;
      piVar1 = &param_4->ArrayMax;
      param_4->ArrayNum = iVar14;
      if ((iVar14 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar14,*piVar1,&param_4->AllocatorInstance,iVar14,piVar1);
        if (iVar14 != 0) {
          memcpy((param_4->AllocatorInstance).Data,param_2->DataPtr,(longlong)iVar14 << 2);
        }
      }
      FOnDemandContentHandle::~FOnDemandContentHandle(param_3);
      return false;
    }
    LOCK();
    aVar12 = ((FSharedMutex *)this_02)->State;
    bVar10 = aVar5 == aVar12;
    if (bVar10) {
      ((FSharedMutex *)this_02)->State = (atomic<unsigned_int>)((int)aVar5 + 8);
      aVar12 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar12;
  } while (!bVar10);
  puVar18 = (uint *)param_2->DataPtr;
  local_68 = puVar18 + param_2->ArrayNum;
  if (puVar18 != local_68) {
    this_00 = &(this->PendingChunks).SharedMutex;
    do {
      local_78[0] = *puVar18;
      if ((param_1->Object == (FOnDemandContainer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      lVar17 = (longlong)(int)local_78[0];
      pFVar6 = param_1->Object;
      uVar13 = 0;
      if ((int)local_78[0] < (pFVar6->ChunkEntries).ArrayNum) {
        uVar13 = ~local_78[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      pFVar2 = (pFVar6->ChunkEntries).DataPtr + lVar17;
      aVar5 = this_00->State;
      if (((uint)aVar5 & 3) == 0) {
        LOCK();
        bVar10 = aVar5 == this_00->State;
        if (bVar10) {
          this_00->State = (atomic<unsigned_int>)((int)aVar5 + 8);
        }
        UNLOCK();
        if (!bVar10) goto LAB_1446089c5;
      }
      else {
LAB_1446089c5:
        FSharedMutex::LockSharedSlow(this_00);
      }
      pFVar15 = (this->PendingChunks).ChunkHashes.AllocatorInstance.Data;
      pFVar3 = pFVar15 + (longlong)(this->PendingChunks).ChunkHashes.ArrayNum * 0x14;
      for (; pFVar15 != pFVar3; pFVar15 = pFVar15 + 0x14) {
        if (((*(longlong *)pFVar15 == *(longlong *)(pFVar2->Hash).Hash) &&
            (*(longlong *)(pFVar15 + 8) == *(longlong *)((pFVar2->Hash).Hash + 8))) &&
           (*(int *)(pFVar15 + 0x10) == *(int *)((longlong)(pFVar2->Hash).Hash + 0x10))) {
          pFVar8 = this->IoStore;
          local_58.Handle.Object = (param_3->Handle).Object;
          local_58.Handle.SharedReferenceCount.ReferenceController =
               (param_3->Handle).SharedReferenceCount.ReferenceController;
          if (local_58.Handle.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_58.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_58.Handle.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FOnDemandIoStore::AddReference(pFVar8,param_1,local_78[0],&local_58);
          LOCK();
          aVar5 = this_00->State;
          this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
          UNLOCK();
          if (((uint)aVar5 & 0xfffffffb) == 10) {
            FSharedMutex::WakeWaitingThread(this_00);
          }
          goto LAB_144608bf9;
        }
      }
      LOCK();
      aVar5 = this_00->State;
      this_00->State = (atomic<unsigned_int>)((int)this_00->State + -8);
      UNLOCK();
      if (((uint)aVar5 & 0xfffffffb) == 10) {
        FSharedMutex::WakeWaitingThread(this_00);
      }
      uVar13 = *(uint *)(pFVar2->Hash).Hash;
      this_01 = &(this->Cas).Mutex;
      LOCK();
      bVar10 = this_01->State == (atomic<unsigned_char>)0x0;
      if (bVar10) {
        this_01->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        FMutex::LockSlow(this_01);
      }
      pFVar16 = TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                ::FindByHash<UE::THash<96>_>
                          ((TMapBase<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
                            *)&(this->Cas).Lookup,uVar13,(THash<96> *)pFVar2);
      if (pFVar16 == (FCasLocation *)0x0) {
        LOCK();
        aVar4 = this_01->State;
        this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
        UNLOCK();
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(this_01);
        }
        local_70.BlockId.Id = 0;
        local_70.BlockOffset = 0xffffffff;
LAB_144608b53:
        pFVar3 = (param_4->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_78) &&
           (((FScriptContainerElement *)local_78 < pFVar3 + (longlong)param_4->ArrayMax * 4 &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        iVar14 = param_4->ArrayNum;
        if (iVar14 == param_4->ArrayMax) {
          iVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar14 + 1;
        *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_78[0];
      }
      else {
        FVar7 = *pFVar16;
        LOCK();
        aVar4 = this_01->State;
        this_01->State = (atomic<unsigned_char>)((char)this_01->State + -1);
        UNLOCK();
        local_70 = FVar7;
        if (((byte)aVar4 & 2) != 0) {
          FMutex::WakeWaitingThread(this_01);
        }
        if ((FVar7.BlockId.Id.Id == 0) || (FVar7.BlockOffset == 0xffffffff)) goto LAB_144608b53;
        pFVar8 = this->IoStore;
        local_48.Handle.Object = (param_3->Handle).Object;
        local_48.Handle.SharedReferenceCount.ReferenceController =
             (param_3->Handle).SharedReferenceCount.ReferenceController;
        if (local_48.Handle.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_48.Handle.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.Handle.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FOnDemandIoStore::AddReference(pFVar8,param_1,local_78[0],&local_48);
      }
LAB_144608bf9:
      puVar18 = puVar18 + 1;
      this_02 = local_60;
    } while (puVar18 != local_68);
  }
  LOCK();
  aVar5 = *this_02;
  *this_02 = (atomic<unsigned_int>)((int)*this_02 + -8);
  UNLOCK();
  if (((uint)aVar5 & 0xfffffffb) == 10) {
    FSharedMutex::WakeWaitingThread((FSharedMutex *)this_02);
  }
  FOnDemandContentHandle::~FOnDemandContentHandle(param_3);
  return true;
}

// UpdateLastAccess @ 14460bef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::UpdateLastAccess
          (FOnDemandInstallCache *this,TArrayView<FIoHash_const_,int> *param_1)

{
  FMutex *this_00;
  FIoHash *pFVar1;
  atomic<unsigned_char> aVar2;
  long64 lVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  FDateTime FVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  FIoHash *pFVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 auStackY_a8 [32];
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar5 = false;
  FVar7 = FDateTime::UtcNow();
  this_00 = &(this->Cas).Mutex;
                    /* WARNING: Load size is inaccurate */
  lVar3 = *FVar7.Ticks;
  LOCK();
  bVar12 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(this_00);
  }
  pFVar10 = param_1->DataPtr;
  pFVar1 = pFVar10 + param_1->ArrayNum;
  do {
    if (pFVar10 == pFVar1) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
      if (bVar5) {
        local_68._0_8_ = 0;
        local_40 = (longlong *)0x0;
        FOnDemandIoStore::FlushLastAccess
                  (this->IoStore,
                   (TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandFlushLastAccessResult)> *)
                   local_68);
        if (local_68._0_8_ != 0) {
          plVar8 = (longlong *)(local_68 + 0x10);
          if (local_40 != (longlong *)0x0) {
            plVar8 = local_40;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      return;
    }
    if (*(int *)&(this->Cas).Lookup.field_0x8 != *(int *)&(this->Cas).Lookup.field_0x34) {
      puVar4 = *(undefined1 **)&(this->Cas).Lookup.field_0x40;
      puVar9 = &(this->Cas).Lookup.field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar9 = puVar4;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Cas).Lookup.field_0x48 - 1U &
                                *(uint *)pFVar10->Hash) * 4);
      if (iVar6 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar6 * 0x1c + *(longlong *)&(this->Cas).Lookup);
          if ((*plVar8 == *(longlong *)pFVar10->Hash) &&
             ((int)plVar8[1] == *(int *)(pFVar10->Hash + 8))) {
            puVar11 = (uint *)((longlong)plVar8 + 0xc);
            if (plVar8 == (longlong *)0x0) {
              puVar11 = (uint *)0x0;
            }
            if ((puVar11 != (uint *)0x0) &&
               ((bVar12 = FCas::UnlockedTrackAccessIf
                                    (&this->Cas,Granular,*puVar11,(FCasBlockId)*puVar11,lVar3,true),
                bVar5 || (bVar12)))) {
              bVar5 = true;
            }
            break;
          }
          iVar6 = *(int *)((longlong)plVar8 + 0x14);
        } while (iVar6 != -1);
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// UpdatePriorityForIoRequest @ 14460c890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandInstallCache::UpdatePriorityForIoRequest
          (FOnDemandInstallCache *this,FIoRequestImpl *param_1)

{
  return;
}

// Verify @ 14460e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __thiscall
UE::IoStore::FOnDemandInstallCache::Verify
          (FOnDemandInstallCache *this,
          TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *pTVar2;
  int *piVar3;
  FCasLocation *pFVar4;
  FMutex *this_00;
  FIoHash *pFVar5;
  atomic<unsigned_char> aVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  TRefCountPtr<FIoBuffer::BufCore> TVar9;
  IErrorDetails *pIVar10;
  code *pcVar11;
  int iVar12;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar13;
  FCasAddrLocation *pFVar14;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *pTVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar20;
  uint *puVar21;
  FIoBuffer *pFVar22;
  FBlake3Hash *pFVar23;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar24;
  undefined1 *puVar25;
  ForAnyElementType FVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  uint *puVar30;
  FIoBuffer FVar31;
  uint uVar32;
  TSet<TTuple<UE::THash<96>,int>,TDefaultMapHashableKeyFuncs<UE::THash<96>,int,0>,FDefaultSetAllocator>
  *this_01;
  uint *puVar33;
  uint uVar34;
  FError *pFVar35;
  uint uVar36;
  ulonglong uVar37;
  uint *puVar38;
  ulonglong uVar39;
  ForAnyElementType FVar40;
  bool bVar41;
  undefined1 auStackY_3a8 [32];
  undefined1 local_348;
  undefined1 local_347;
  FIdentityFunctor local_346 [2];
  int local_344;
  int local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  int local_328;
  int local_324;
  ForAnyElementType local_320;
  undefined8 local_318;
  int local_310;
  FIoBuffer local_308;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_300;
  int local_2f0;
  FCasAddrLocation *local_2e8;
  FError local_2e0;
  FIoChunkId *local_2c8;
  longlong local_2c0;
  int local_2b8;
  uint local_2b4;
  TPairInitializer<UE::THash<96>_const_&,int_&&> local_2b0;
  longlong local_2a0;
  FError *local_298;
  undefined8 local_290;
  FDynamicErrorDetails *local_280;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  int local_248;
  int local_244;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined8 local_238;
  ulonglong local_230;
  FCasLocation *local_228;
  FIoBuffer local_220;
  FOnDemandInstallCache *local_218;
  FString local_210;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FCasAddrLocation *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  int *local_1b0;
  void *local_1a8;
  ulonglong uStack_1a0;
  FString local_198;
  FString local_188 [2];
  TMemoryView<void_const_> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  TArrayView<unsigned_char_const_,int> local_e8 [2];
  undefined4 local_bc;
  TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError> local_b8;
  FCasAddrLocation local_a0;
  TMap<UE::THash<96>,UE::IoStore::FCasLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::THash<96>,UE::IoStore::FCasLocation,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  uchar auStack_70 [4];
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  FIoHash local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_298 = (FError *)__return_storage_ptr__;
  local_218 = this;
  FOnDemandIoStore::GetContainers(this->IoStore,&local_300,InstallOnDemand);
  this_00 = &(this->Cas).Mutex;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  LOCK();
  bVar41 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar41) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar41) {
    FMutex::LockSlow(this_00);
  }
  uVar36 = *(int *)&(this->Cas).Lookup.field_0x8 - *(int *)&(this->Cas).Lookup.field_0x34;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  if (local_330._4_4_ < (int)uVar36) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar36,&local_338,(uint)local_330,(int *)((longlong)&local_330 + 4));
  }
  iVar17 = *(int *)&(this->Cas).Lookup.field_0x28;
  puVar1 = &(this->Cas).Lookup.field_0x10;
  pTVar2 = &(this->Cas).Lookup;
  iStack_80 = 0;
  local_68 = 0;
  uStack_7c = 1;
  iStack_6c = iStack_80;
  if (iVar17 != 0) {
    puVar33 = *(uint **)&(this->Cas).Lookup.field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)puVar1;
    }
    uStack_7c = *puVar33;
    local_68 = 0;
    iStack_80 = 0;
    while (uStack_7c == 0) {
      lVar19 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      uStack_7c = 1;
      iStack_6c = iVar17;
      if ((int)((iVar17 + -1 >> 0x1f & 0x1fU) + iVar17 + -1) >> 5 < iStack_80) goto LAB_14460e6fd;
      uStack_7c = puVar33[lVar19 + 1];
    }
    uStack_7c = -uStack_7c & uStack_7c;
    uVar39 = (ulonglong)uStack_7c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_248 = (int)lVar19;
    iStack_6c = local_68 + -1 + local_248;
    if (iVar17 < iStack_6c) {
      iStack_6c = iVar17;
    }
  }
LAB_14460e6fd:
  uVar36 = *(uint *)&(this->Cas).Lookup.field_0x28;
  uStack_64 = local_bc;
  iStack_60 = *(int *)&(this->Cas).Lookup.field_0x8 - *(int *)&(this->Cas).Lookup.field_0x34;
  uVar32 = uVar36 & 0xffffffe0;
  auStack_70[0] = 0xff;
  auStack_70[1] = 0xff;
  auStack_70[2] = 0xff;
  auStack_70[3] = 0xff;
  TStack_1f8._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_1f8.CurrentBitIndex = iStack_6c;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar36 >> 5;
  TStack_1f8._28_4_ = local_bc;
  TStack_1f8.BaseBitIndex = local_68;
  uStack_1d8 = CONCAT44(uStack_5c,iStack_60);
  local_200 = pTVar2;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_88 = pTVar2;
  local_78 = puVar1;
  if ((((int)uVar36 < 0) || (iVar17 < (int)uVar36)) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar41)) {
    pcVar11 = (code *)swi(3);
    pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
    return pTVar20;
  }
  uVar34 = *(uint *)&(this->Cas).Lookup.field_0x28;
  if (uVar36 != uVar34) {
    puVar25 = *(undefined1 **)&(this->Cas).Lookup.field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = puVar1;
    }
    uVar36 = -1 << ((byte)uVar36 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar29 * 4);
    while (uVar36 == 0) {
      lVar19 = (longlong)iVar29;
      uVar32 = uVar32 + 0x20;
      iVar29 = iVar29 + 1;
      uVar36 = uVar34;
      if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar29)
      goto LAB_14460e820;
      uVar36 = *(uint *)(puVar25 + lVar19 * 4 + 4);
    }
    uVar39 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_244 = (int)lVar19;
    uVar36 = local_244 + -1 + uVar32;
    if ((int)uVar34 < (int)uVar36) {
      uVar36 = uVar34;
    }
  }
LAB_14460e820:
  while( true ) {
    pTVar15 = local_200;
    if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)uStack_1d8) {
      local_347 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::THash<96>,UE::IoStore::FCasLocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_347);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar36) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar15 == pTVar2)
       ) break;
    lVar19 = *(longlong *)pTVar15;
    lVar27 = (longlong)TStack_1f8.CurrentBitIndex * 0x1c;
    local_a0.Addr.Hash._8_4_ = *(undefined4 *)(lVar27 + 8 + lVar19);
    local_a0.Addr.Hash._0_8_ = *(undefined8 *)(lVar27 + lVar19);
    uVar7 = *(undefined8 *)(lVar27 + 0xc + lVar19);
    local_a0.Location.BlockId.Id = (uint)uVar7;
    local_a0.Location.BlockOffset = (uint)((ulonglong)uVar7 >> 0x20);
    if (((local_338.Data <= &local_a0) &&
        (&local_a0 < (FCasAddrLocation *)(local_338.Data + (longlong)local_330._4_4_ * 0x14))) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar41)) {
      pcVar11 = (code *)swi(3);
      pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
      return pTVar20;
    }
    iVar17 = (uint)local_330;
    if ((uint)local_330 == local_330._4_4_) {
      iVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x414,&local_338,(int *)((longlong)&local_330 + 4));
    }
    local_330 = CONCAT44(local_330._4_4_,iVar17 + 1);
    *(undefined8 *)&local_338.Data[(longlong)iVar17 * 0x14].field_0x0 = local_a0.Addr.Hash._0_8_;
    *(ulonglong *)(local_338.Data + (longlong)iVar17 * 0x14 + 8) =
         CONCAT44(local_a0.Location.BlockId.Id,local_a0.Addr.Hash._8_4_);
    *(uint *)(local_338.Data + (longlong)iVar17 * 0x14 + 0x10) = local_a0.Location.BlockOffset;
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  }
  LOCK();
  aVar6 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar6 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  AlgoImpl::
  IntroSortInternal<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,int,FIdentityFunctor,TDereferenceWrapper<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FCasAddrLocation,TLess<void>_>_>
            ((FCasAddrLocation *)local_338.Data,(uint)local_330,local_346[0],
             (TLess<void> *)local_346);
  if (local_300.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_300.ArrayNum);
  }
  if (local_318._4_4_ < local_300.ArrayNum) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,local_300.ArrayNum,&local_320,(int)local_318,(int *)((longlong)&local_318 + 4)
              );
  }
  uVar37 = 0;
  uVar39 = uVar37;
  if (0 < local_300.ArrayNum) {
    do {
      uVar32 = (uint)uVar39;
      uVar36 = 0;
      if ((int)uVar32 < local_300.ArrayNum) {
        uVar36 = ~uVar32 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar11 = (code *)swi(3);
        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
        return pTVar20;
      }
      FVar40.Data = local_300.AllocatorInstance.Data;
      iVar17 = (int)local_318;
      if ((int)local_318 == local_318._4_4_) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_320,(int *)((longlong)&local_318 + 4));
      }
      local_318 = CONCAT44(local_318._4_4_,iVar17 + 1);
      this_01 = (TSet<TTuple<UE::THash<96>,int>,TDefaultMapHashableKeyFuncs<UE::THash<96>,int,0>,FDefaultSetAllocator>
                 *)(local_320.Data + (longlong)iVar17 * 0x50);
      DefaultConstructItems<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FChunkLookup,int>
                (this_01,1);
      if ((*(longlong *)(FVar40.Data + uVar37) == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar41)) {
        pcVar11 = (code *)swi(3);
        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
        return pTVar20;
      }
      TSet<TTuple<UE::THash<96>,int>,TDefaultMapHashableKeyFuncs<UE::THash<96>,int,0>,FDefaultSetAllocator>
      ::Reserve(this_01,*(int *)(*(longlong *)(FVar40.Data + uVar37) + 0xe0));
      if ((*(longlong *)(FVar40.Data + uVar37) == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar41)) {
        pcVar11 = (code *)swi(3);
        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
        return pTVar20;
      }
      lVar27 = *(longlong *)(*(longlong *)(FVar40.Data + uVar37) + 0xd8);
      lVar19 = lVar27 + (longlong)*(int *)(*(longlong *)(FVar40.Data + uVar37) + 0xe0) * 0x28;
      if (lVar27 != lVar19) {
        local_1b0 = &local_2b8;
        iVar17 = 0;
        do {
          local_2b8 = iVar17;
          local_1b8 = lVar27;
          TSet<TTuple<UE::THash<96>,int>,TDefaultMapHashableKeyFuncs<UE::THash<96>,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::THash<96>_const_&,int_&&>_>
                    (this_01,&local_2b0,(bool *)&local_1b8);
          lVar27 = lVar27 + 0x28;
          iVar17 = iVar17 + 1;
        } while (lVar27 != lVar19);
      }
      uVar37 = uVar37 + 0x10;
      uVar39 = (ulonglong)(uVar32 + 1);
    } while ((int)(uVar32 + 1) < local_300.ArrayNum);
  }
  iVar29 = 0;
  iVar17 = (uint)local_330;
  local_324 = (uint)local_330;
  local_344 = 0;
  local_310 = 0;
  local_340 = 0;
  local_2a0 = 0;
  FIoBuffer::FIoBuffer(&local_308,0x100000);
  if (iVar17 == 0) {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    pFVar35 = local_298;
    FVar31.CorePtr.Reference = local_308.CorePtr.Reference;
    *(bool *)&local_298[1].ErrorCode = false;
    if (local_308.CorePtr.Reference == (BufCore *)0x0) goto LAB_14460fa48;
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_308.CorePtr.Reference);
    LOCK();
    piVar3 = (int *)((longlong)FVar31.CorePtr.Reference + 0xc);
    iVar17 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  else {
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
    uVar37 = (ulonglong)(int)(uint)local_330;
    local_328 = 0;
    local_2b4 = (uint)local_330;
    local_2f0 = 1;
    local_290 = (FCasAddrLocation *)(local_338.Data + uVar37 * 0x14);
    uVar39 = uVar37;
    FVar40.Data = local_338.Data;
    iVar17 = iVar29;
    while( true ) {
      pFVar14 = local_290;
      puVar33 = (uint *)0x0;
      local_2e8 = (FCasAddrLocation *)FVar40.Data;
      if ((int)uVar37 != (int)uVar39) {
        local_348 = 0;
        `TCheckedPointerIterator<`UE::IoStore::FOnDemandInstallCache::Verify'::__l2::FCasAddrLocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_348);
      }
      iVar12 = local_310;
      if ((FCasAddrLocation *)FVar40.Data == pFVar14) break;
      pFVar4 = &((FCasAddrLocation *)FVar40.Data)->Location;
      local_228 = pFVar4;
      FCas::OpenRead(&local_218->Cas,&local_b8,(FCasBlockId)(pFVar4->BlockId).Id);
      uVar39 = (ulonglong)local_b8.Variant.TypeIndex;
      if ((2 < uVar39) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x12f,L""), bVar41)) {
        pcVar11 = (code *)swi(3);
        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
        return pTVar20;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TSharedPtr<IFileHandle,1>,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar39) == '\0') {
        puVar30 = puVar33;
        puVar21 = puVar33;
        puVar38 = puVar33;
        uVar36 = local_300.ArrayNum;
        if (0 < local_300.ArrayNum) {
          do {
            uVar34 = (uint)puVar21;
            uVar32 = 0;
            if ((int)uVar34 < (int)local_318) {
              uVar32 = ~uVar34 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar36 = local_300.ArrayNum, bVar41)) {
              pcVar11 = (code *)swi(3);
              pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
              return pTVar20;
            }
            if (*(int *)(local_320.Data + 8 + (longlong)puVar30) !=
                *(int *)(local_320.Data + 0x34 + (longlong)puVar30)) {
              pFVar8 = *(FScriptContainerElement **)(local_320.Data + 0x38 + (longlong)puVar30 + 8);
              pFVar28 = local_320.Data + 0x38 + (longlong)puVar30;
              if (pFVar8 != (FScriptContainerElement *)0x0) {
                pFVar28 = pFVar8;
              }
              iVar29 = *(int *)(pFVar28 +
                               (ulonglong)
                               (*(int *)(local_320.Data + 0x48 + (longlong)puVar30) - 1U &
                               *(uint *)(((FCasAddrLocation *)FVar40.Data)->Addr).Hash) * 4);
              if (iVar29 != -1) {
                do {
                  lVar19 = *(longlong *)(local_320.Data + (longlong)puVar30) +
                           (longlong)iVar29 * 0x18;
                  if ((*(longlong *)
                        (*(longlong *)(local_320.Data + (longlong)puVar30) + (longlong)iVar29 * 0x18
                        ) == *(longlong *)(((FCasAddrLocation *)FVar40.Data)->Addr).Hash) &&
                     (*(int *)(lVar19 + 8) ==
                      *(int *)((((FCasAddrLocation *)FVar40.Data)->Addr).Hash + 8))) {
                    puVar21 = (uint *)(lVar19 + 0xc);
                    if (lVar19 == 0) {
                      puVar21 = puVar33;
                    }
                    if (puVar21 != (uint *)0x0) {
                      uVar32 = *puVar21;
                      if (uVar32 == 0xffffffff) goto LAB_14460f6d0;
                      uVar18 = 0;
                      if ((int)uVar34 < (int)uVar36) {
                        uVar18 = ~uVar34 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      FVar26.Data = local_300.AllocatorInstance.Data;
                      lVar19 = (longlong)puVar38 * 0x10;
                      local_2c0 = lVar19;
                      if ((*(longlong *)&local_300.AllocatorInstance.Data[lVar19].field_0x0 == 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      lVar27 = *(longlong *)&FVar26.Data[lVar19].field_0x0;
                      uVar36 = 0;
                      if ((int)uVar32 < *(int *)(lVar27 + 0xd0)) {
                        uVar36 = ~uVar32 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      local_2c8 = (FIoChunkId *)
                                  (*(longlong *)(lVar27 + 200) + (longlong)(int)uVar32 * 0xc);
                      if ((*(longlong *)&FVar26.Data[lVar19].field_0x0 == 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      lVar19 = *(longlong *)&FVar26.Data[lVar19].field_0x0;
                      uVar36 = 0;
                      if ((int)uVar32 < *(int *)(lVar19 + 0xe0)) {
                        uVar36 = ~uVar32 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      pFVar5 = (FIoHash *)
                               (*(longlong *)(lVar19 + 0xd8) + (longlong)(int)uVar32 * 0x28);
                      if ((local_b8.Variant.TypeIndex != 0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Index == TypeIndex",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                              ,0x97,L""), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      lVar19 = local_b8.Variant._padding_;
                      local_2b0.Value = (int *)local_b8.Variant._padding_;
                      if ((TReferenceControllerBase<1> *)local_b8.Variant._padding_ !=
                          (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *(int *)(local_b8.Variant._padding_ + 8) =
                             (int)*(atomic<int> *)(local_b8.Variant._padding_ + 8) + 1;
                        UNLOCK();
                      }
                      uVar39 = (ulonglong)(*(int *)(pFVar5[1].Hash + 4) + 0xf) & 0xfffffff0;
                      local_2a0 = local_2a0 + uVar39;
                      local_230 = uVar39;
                      if (CONCAT14(*(uchar *)((longlong)local_308.CorePtr.Reference + 0x18),
                                   *(uint *)((longlong)local_308.CorePtr.Reference + 8)) < uVar39) {
                        pFVar22 = FIoBuffer::FIoBuffer(&local_220,uVar39);
                        FVar31.CorePtr.Reference = local_308.CorePtr.Reference;
                        if (&local_308 != pFVar22) {
                          TVar9.Reference = (pFVar22->CorePtr).Reference;
                          (pFVar22->CorePtr).Reference = (BufCore *)0x0;
                          bVar41 = local_308.CorePtr.Reference != (BufCore *)0x0;
                          local_308.CorePtr.Reference =
                               (TRefCountPtr<FIoBuffer::BufCore>)
                               (TRefCountPtr<FIoBuffer::BufCore>)TVar9.Reference;
                          if (bVar41) {
                            FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar31.CorePtr.Reference);
                            LOCK();
                            piVar3 = (int *)((longlong)FVar31.CorePtr.Reference + 0xc);
                            iVar17 = *piVar3;
                            *piVar3 = *piVar3 + -1;
                            UNLOCK();
                            if (iVar17 == 1) {
                              FIoBuffer::BufCore::~BufCore((BufCore *)FVar31.CorePtr.Reference);
                              ::operator_delete((void *)FVar31.CorePtr.Reference,0x20);
                            }
                          }
                        }
                        FVar31.CorePtr.Reference = local_220.CorePtr.Reference;
                        if (local_220.CorePtr.Reference != (BufCore *)0x0) {
                          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_220.CorePtr.Reference);
                          LOCK();
                          piVar3 = (int *)((longlong)FVar31.CorePtr.Reference + 0xc);
                          iVar17 = *piVar3;
                          *piVar3 = *piVar3 + -1;
                          UNLOCK();
                          if (iVar17 == 1) {
                            FIoBuffer::BufCore::~BufCore((BufCore *)FVar31.CorePtr.Reference);
                            ::operator_delete((void *)FVar31.CorePtr.Reference,0x20);
                          }
                        }
                      }
                      if (((longlong *)lVar19 == (longlong *)0x0) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      cVar16 = (**(code **)(*(longlong *)lVar19 + 0x10))
                                         (lVar19,(((FCasAddrLocation *)FVar40.Data)->Location).
                                                 BlockOffset);
                      if (cVar16 == '\0') {
                        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
                          ::LexToString(&local_198,pFVar5);
                          ::LexToString(&local_f8,local_2c8);
                          if ((*(longlong *)(FVar26.Data + local_2c0) == 0) &&
                             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar41)) {
                            pcVar11 = (code *)swi(3);
                            pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                            return pTVar20;
                          }
                          Logging::Private::BasicLog<2>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                          FVar26.Data = local_198.Data.AllocatorInstance.Data;
                          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                            FVar26.Data = local_198.Data.AllocatorInstance.Data;
                          }
LAB_14460f1f3:
                          FVar40.Data = (FScriptContainerElement *)local_2e8;
                          if (FVar26.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(FVar26.Data);
                            FVar40.Data = (FScriptContainerElement *)local_2e8;
                          }
                        }
                      }
                      else {
                        if (((longlong *)lVar19 == (longlong *)0x0) &&
                           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar41)) {
                          pcVar11 = (code *)swi(3);
                          pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                          return pTVar20;
                        }
                        cVar16 = (**(code **)(*(longlong *)lVar19 + 0x20))
                                           (lVar19,*(undefined8 *)local_308.CorePtr.Reference,uVar39
                                           );
                        if (cVar16 != '\0') {
                          uVar37 = (ulonglong)
                                   CONCAT14(*(uchar *)((longlong)local_308.CorePtr.Reference + 0x18)
                                            ,*(uint *)((longlong)local_308.CorePtr.Reference + 8));
                          local_1a8 = *(void **)local_308.CorePtr.Reference;
                          uStack_1a0 = uVar39;
                          if (uVar37 < uVar39) {
                            uStack_1a0 = uVar37;
                          }
                          local_168.Data = local_1a8;
                          local_168.Size = uStack_1a0;
                          pFVar23 = FBlake3::HashBuffer((FBlake3Hash *)&local_88,&local_168);
                          local_58.Hash._0_8_ = *(undefined8 *)pFVar23->Hash;
                          local_58.Hash._8_8_ = *(undefined8 *)(pFVar23->Hash + 8);
                          local_58.Hash._16_4_ = *(undefined4 *)(pFVar23->Hash + 0x10);
                          if (((local_58.Hash._0_8_ == *(longlong *)pFVar5->Hash) &&
                              (local_58.Hash._8_8_ == *(longlong *)(pFVar5->Hash + 8))) &&
                             (local_58.Hash._16_4_ == *(int *)(pFVar5->Hash + 0x10))) {
                            if (6 < (byte)LogIoStoreOnDemand._0_1_) {
                              ::LexToString(&local_148,pFVar5);
                              ::LexToString(&local_158,local_2c8);
                              if ((*(longlong *)(FVar26.Data + local_2c0) == 0) &&
                                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("IsValid()",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar41)) {
                                pcVar11 = (code *)swi(3);
                                pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)
                                          (*pcVar11)();
                                return pTVar20;
                              }
                              Logging::Private::BasicLog<7>
                                        ((FStaticBasicLogRecord *)&PTR_u_Chunk__d__d_OK__150d86038,
                                         (FLogCategoryBase *)&LogIoStoreOnDemand);
                              if (local_158.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_158.Data.AllocatorInstance.Data);
                              }
                              if (local_148.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_148.Data.AllocatorInstance.Data);
                              }
                            }
                          }
                          else {
                            if (1 < (byte)LogIoStoreOnDemand._0_1_) {
                              ::LexToString(&local_118,&local_58);
                              ::LexToString(&local_128,pFVar5);
                              ::LexToString(&local_138,local_2c8);
                              if ((*(longlong *)(FVar26.Data + local_2c0) == 0) &&
                                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("IsValid()",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar41)) {
                                pcVar11 = (code *)swi(3);
                                pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)
                                          (*pcVar11)();
                                return pTVar20;
                              }
                              Logging::Private::BasicLog<2>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                              if (local_138.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_138.Data.AllocatorInstance.Data);
                              }
                              if (local_128.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_128.Data.AllocatorInstance.Data);
                              }
                              if (local_118.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_118.Data.AllocatorInstance.Data);
                              }
                            }
                            local_344 = local_344 + 1;
                          }
                          iVar17 = local_344;
                          SharedPointerInternals::TReferenceControllerBase<1>::
                          ReleaseSharedReferenceNoInline
                                    ((TReferenceControllerBase<1> *)local_2b0.Value);
                          uVar39 = (ulonglong)local_b8.Variant.TypeIndex;
                          if ((2 < local_b8.Variant.TypeIndex) &&
                             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                                  ,0xd4,L""), bVar41)) {
                            pcVar11 = (code *)swi(3);
                            pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                            return pTVar20;
                          }
                          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                      ::__l2::Destructors)[uVar39])(&local_b8);
                          iVar29 = local_340;
                          goto LAB_14460f7df;
                        }
                        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
                          ::LexToString(&local_108,pFVar5);
                          ::LexToString(local_188,local_2c8);
                          if ((*(longlong *)(FVar26.Data + local_2c0) == 0) &&
                             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar41)) {
                            pcVar11 = (code *)swi(3);
                            pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                            return pTVar20;
                          }
                          Logging::Private::BasicLog<2>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                          FVar26.Data = local_108.Data.AllocatorInstance.Data;
                          if (local_188[0].Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_188[0].Data.AllocatorInstance.Data);
                            FVar26.Data = local_108.Data.AllocatorInstance.Data;
                          }
                          goto LAB_14460f1f3;
                        }
                      }
                      iVar29 = local_340 + 1;
                      local_340 = iVar29;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_2b0.Value)
                      ;
                      uVar39 = (ulonglong)local_b8.Variant.TypeIndex;
                      if ((2 < local_b8.Variant.TypeIndex) &&
                         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                              ,0xd4,L""), bVar41)) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
                        return pTVar20;
                      }
                      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                                  ::__l2::Destructors)[uVar39])(&local_b8);
                      local_2e8 = (FCasAddrLocation *)FVar40.Data;
                      iVar17 = local_344;
                      goto LAB_14460f7df;
                    }
                    break;
                  }
                  iVar29 = *(int *)(lVar19 + 0x10);
                } while (iVar29 != -1);
              }
            }
            puVar30 = puVar30 + 0x14;
            puVar21 = (uint *)(ulonglong)(uVar34 + 1);
            puVar38 = (uint *)((longlong)puVar38 + 1);
          } while ((int)(uVar34 + 1) < (int)uVar36);
        }
LAB_14460f6d0:
        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
          local_268.Base = (wchar_t *)0x0;
          local_268.CurPos = (wchar_t *)0x0;
          uStack_1c0 = 0xc;
          local_e8[0]._12_4_ = uStack_1bc;
          local_e8[0].ArrayNum = 0xc;
          local_268.End = (wchar_t *)0x0;
          local_268.bIsDynamic = false;
          local_268.bIsExternal = false;
          local_1c8 = (FCasAddrLocation *)FVar40.Data;
          local_e8[0].DataPtr = (uchar *)FVar40.Data;
          String::BytesToHexLower(local_e8,&local_268);
          if (local_268.End < local_268.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          *local_268.CurPos = L'\0';
          ::FString::FString(&local_210,local_268.Base);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
        }
        local_310 = local_310 + 1;
        uVar39 = (ulonglong)local_b8.Variant.TypeIndex;
        if ((2 < local_b8.Variant.TypeIndex) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar41)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
          return pTVar20;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar39])(&local_b8);
        local_2e8 = (FCasAddrLocation *)FVar40.Data;
        iVar29 = local_340;
      }
      else {
        if (1 < (byte)LogIoStoreOnDemand._0_1_) {
          if ((local_b8.Variant.TypeIndex != 1) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar41)) {
            pcVar11 = (code *)swi(3);
            pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
            return pTVar20;
          }
          Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_const_&,UE::UnifiedError::FError_&>
                    ((FLogCategoryBase *)&LogIoStoreOnDemand,&::LOG_Static,(uint *)pFVar4,
                     (FError *)&local_b8);
        }
        uVar39 = (ulonglong)local_b8.Variant.TypeIndex;
        iVar29 = iVar29 + 1;
        local_340 = iVar29;
        if ((2 < local_b8.Variant.TypeIndex) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar41)) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar11)();
          return pTVar20;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<IFileHandle,1>,TValueOrError<TSharedPtr<IFileHandle,1>,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_IFileHandle,1>,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar39])(&local_b8);
        local_2e8 = (FCasAddrLocation *)FVar40.Data;
      }
LAB_14460f7df:
      local_328 = local_328 + 1;
      FVar40.Data = (FScriptContainerElement *)(local_2e8 + 1);
      local_2f0 = local_2f0 + 1;
      uVar37 = local_330 & 0xffffffff;
      uVar39 = (ulonglong)local_2b4;
    }
    if (((iVar17 == 0) && (local_310 == 0)) && (iVar29 == 0)) {
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      *(bool *)&local_298[1].ErrorCode = false;
      pFVar35 = local_298;
    }
    else {
      ::FString::PrintfImpl
                (&local_278,L"Verify install cache failed, Corrupt=%u, Missing=%u, ReadErrors=%u");
      if ((iVar17 == 0) && (iVar29 == 0)) {
        if (2 < (byte)LogIoStoreOnDemand._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
      }
      else if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      local_290 = (FCasAddrLocation *)CONCAT44(iVar12,iVar17);
      TVar24 = UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetStaticErrorDetails()
      ;
      pIVar10 = (IErrorDetails *)(TVar24.Reference)->_padding_;
      if (pIVar10 == (IErrorDetails *)0x0) {
        iVar17 = UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetErrorCodeId();
        local_2e0.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        local_2e0.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_2e0.ErrorCode = iVar17;
      }
      else {
        (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_240);
        iVar17 = UnifiedError::IoStoreOnDemand::InstallCacheVerificationError::GetErrorCodeId();
        local_2e0.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
        local_2e0.ErrorCode = iVar17;
        local_2e0.ErrorDetails.Reference = pIVar10;
        (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_23c);
        (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
      }
      local_280 = ::operator_new(0x30);
      if (local_280 == (FDynamicErrorDetails *)0x0) {
        local_280 = (FDynamicErrorDetails *)0x0;
      }
      else {
        local_238 = 0;
        UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                  (local_280,(IErrorDetails *)&local_238);
        local_280->_padding_ =
             (longlong)
             &UnifiedError::
              TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
              _vftable__for__UE__UnifiedError__IErrorDetails__;
        local_280[1]._padding_ = (longlong)local_290;
        local_280->_padding_ =
             (longlong)
             &UnifiedError::
              TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FVerificationErrorContext>::
              _vftable__for__FRefCountBase__;
        *(int *)&local_280[1]._padding_ = iVar29;
        *(undefined1 *)((longlong)&local_280[1]._padding_ + 4) = 5;
        (**(code **)(local_280->_padding_ + 8))
                  (local_280,(undefined1 *)((longlong)&local_2b0.Key + 4));
      }
      UnifiedError::FError::PushErrorDetails(&local_2e0,(IErrorDetails *)&local_280);
      pFVar35 = local_298;
      UnifiedError::FError::FError(local_298,&local_2e0);
      TVar13.Reference = local_2e0.ErrorDetails.Reference;
      *(undefined1 *)&pFVar35[1].ErrorCode = 1;
      local_2e0.ErrorCode = 0;
      local_2e0.ModuleId = 0;
      if (local_2e0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_2e0.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar13.Reference + 0x10))();
        if (local_2e0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_2e0.ErrorDetails.Reference + 0x10))();
        }
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
    FVar31.CorePtr.Reference = local_308.CorePtr.Reference;
    if (local_308.CorePtr.Reference == (BufCore *)0x0) goto LAB_14460fa48;
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_308.CorePtr.Reference);
    LOCK();
    piVar3 = (int *)((longlong)FVar31.CorePtr.Reference + 0xc);
    iVar17 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  if (iVar17 == 1) {
    FIoBuffer::BufCore::~BufCore((BufCore *)FVar31.CorePtr.Reference);
    ::operator_delete((void *)FVar31.CorePtr.Reference,0x20);
  }
LAB_14460fa48:
  DestructItems<_UE::IoStore::FOnDemandInstallCache::Verify_::__l2::FChunkLookup,int>
            ((FChunkLookup *)local_320.Data,(int)local_318);
  if (local_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data);
  }
  if ((FCasAddrLocation *)local_338.Data != (FCasAddrLocation *)0x0) {
    FMemory::Free(local_338.Data);
  }
  DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
            ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_300.AllocatorInstance.Data,
             local_300.ArrayNum);
  if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_300.AllocatorInstance.Data !=
      (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
    FMemory::Free(local_300.AllocatorInstance.Data);
  }
  return (TValueOrError<void,UE::UnifiedError::FError> *)pFVar35;
}

