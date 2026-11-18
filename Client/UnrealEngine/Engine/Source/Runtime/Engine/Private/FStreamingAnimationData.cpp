// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FStreamingAnimationData @ 1473d7ab0

FStreamingAnimationData * __thiscall
FStreamingAnimationData::FStreamingAnimationData(FStreamingAnimationData *this)

{
  this->StreamableAnim = (UAnimStreamable *)0x0;
  (this->LoadedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedChunks).ArrayNum = 0;
  (this->LoadedChunks).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LoadedChunksCritcalSection,4000);
  (this->LoadedChunkIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedChunkIndices).ArrayNum = 0;
  (this->LoadedChunkIndices).ArrayMax = 0;
  (this->RequestedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestedChunks).ArrayNum = 0;
  (this->RequestedChunks).ArrayMax = 0;
  (this->LoadFailedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadFailedChunks).ArrayNum = 0;
  (this->LoadFailedChunks).ArrayMax = 0;
  this->AnimationStreamingManager = (FAnimationStreamingManager *)0x0;
  ResetRequestedChunks(this);
  return this;
}

// ~FStreamingAnimationData @ 1473dae10

void __thiscall FStreamingAnimationData::~FStreamingAnimationData(FStreamingAnimationData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LoadFailedChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RequestedChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedChunkIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadedChunksCritcalSection);
  DestructItems<FLoadedAnimationChunk,int>
            ((FLoadedAnimationChunk *)(this->LoadedChunks).AllocatorInstance.Data,
             (this->LoadedChunks).ArrayNum);
  pFVar1 = (this->LoadedChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddNewLoadedChunk @ 1473e13d0

FLoadedAnimationChunk * __thiscall
FStreamingAnimationData::AddNewLoadedChunk
          (FStreamingAnimationData *this,uint param_1,FCompressedAnimSequence *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FLoadedAnimationChunk,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FLoadedAnimationChunk *pFVar9;
  longlong lVar10;
  
  lpCriticalSection = &this->LoadedChunksCritcalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar3 = (this->LoadedChunks).ArrayNum;
  pTVar1 = &this->LoadedChunks;
  piVar2 = &(this->LoadedChunks).ArrayMax;
  uVar7 = uVar3;
  if (uVar3 == *piVar2) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
    (this->LoadedChunks).ArrayNum = uVar7;
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->LoadedChunks).ArrayNum = uVar7 + 1;
  DefaultConstructItems<FLoadedAnimationChunk,int>(pFVar4 + (longlong)(int)uVar7 * 0x20,1);
  uVar8 = ~uVar3 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar3 < (this->LoadedChunks).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLoadedAnimationChunk *)(*pcVar5)();
    return pFVar9;
  }
  lVar10 = (longlong)(int)uVar3 * 0x20;
  LOCK();
  *(FCompressedAnimSequence **)((pTVar1->AllocatorInstance).Data + lVar10) = param_2;
  UNLOCK();
  uVar7 = 0;
  if ((int)uVar3 < (this->LoadedChunks).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLoadedAnimationChunk *)(*pcVar5)();
    return pFVar9;
  }
  (pTVar1->AllocatorInstance).Data[lVar10 + 0x1c] = (FScriptContainerElement)0x0;
  uVar7 = 0;
  if ((int)uVar3 < (this->LoadedChunks).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLoadedAnimationChunk *)(*pcVar5)();
    return pFVar9;
  }
  *(uint *)((this->LoadedChunks).AllocatorInstance.Data + lVar10 + 0x18) = param_1;
  uVar7 = 0;
  if ((int)uVar3 < (this->LoadedChunks).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FLoadedAnimationChunk *)(*pcVar5)();
    return pFVar9;
  }
  pFVar4 = (this->LoadedChunks).AllocatorInstance.Data;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (FLoadedAnimationChunk *)(pFVar4 + (longlong)(int)uVar3 * 0x20);
}

// BeginPendingRequests @ 1473e29e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FStreamingAnimationData::BeginPendingRequests
          (FStreamingAnimationData *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  int iVar2;
  int iVar3;
  UAnimStreamable *pUVar4;
  FCompressedAnimSequence *pFVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FLoadedAnimationChunk *pFVar11;
  code *pcVar12;
  FString *pFVar13;
  long64 lVar14;
  long64 lVar15;
  TEventRef<unsigned_int> TVar16;
  IBulkDataIORequest *pIVar17;
  FWriteBuffer *pFVar18;
  ulonglong uVar19;
  code **ppcVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint uVar25;
  FBulkData *this_00;
  FScriptContainerElement *pFVar26;
  wchar_t *pwVar27;
  undefined1 auStack_198 [32];
  double local_178;
  long64 local_170;
  long64 local_168;
  FScriptContainerElement *local_160;
  undefined1 local_158;
  undefined1 local_157 [3];
  uint local_154;
  uint local_14c;
  FScriptContainerElement *local_148;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_140;
  FLoadedAnimationChunk *local_138;
  undefined8 local_130;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_128;
  LARGE_INTEGER local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FStreamingAnimationData *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  code *local_b8;
  FName local_b0;
  FString local_a8;
  undefined4 *local_98;
  longlong local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  pFVar26 = (param_2->AllocatorInstance).Data;
  local_14c = param_2->ArrayNum;
  uVar19 = (ulonglong)(int)local_14c;
  local_154 = 0;
  local_148 = pFVar26 + uVar19 * 4;
  local_140 = param_2;
  local_128 = param_1;
  do {
    while( true ) {
      pFVar23 = local_148;
      if (local_140->ArrayNum != (int)uVar19) {
        local_158 = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_158);
      }
      dVar8 = __real_4170000000000000;
      if (pFVar26 == pFVar23) {
        local_14c = local_128->ArrayNum;
        uVar19 = (ulonglong)(int)local_14c;
        pFVar23 = (local_128->AllocatorInstance).Data;
        pFVar26 = pFVar23 + uVar19 * 4;
        local_148 = pFVar26;
        while( true ) {
          local_140 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pFVar23;
          if (local_128->ArrayNum != (int)uVar19) {
            local_157[0] = 0;
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_157);
          }
          if (pFVar23 == pFVar26) {
            return;
          }
          uVar22 = *(uint *)pFVar23;
          pUVar4 = this->StreamableAnim;
          iVar2 = (pUVar4->RunningAnimPlatformData).Chunks.ArrayNum;
          uVar10 = 0;
          if ((int)uVar22 < iVar2) {
            uVar10 = ~uVar22 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (local_178 = (double)(longlong)(int)uVar22, local_170 = (longlong)iVar2,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) break;
          pFVar23 = (pUVar4->RunningAnimPlatformData).Chunks.AllocatorInstance.Data;
          lVar24 = (longlong)(int)uVar22 * 0x40;
          pFVar5 = *(FCompressedAnimSequence **)(pFVar23 + lVar24 + 0x10);
          pFVar11 = AddNewLoadedChunk(this,uVar22,pFVar5);
          local_138 = pFVar11;
          if (pFVar5 == (FCompressedAnimSequence *)0x0) {
            if (pFVar11->CompressedAnimData != (TAtomic<FCompressedAnimSequence_*>)0x0) {
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            if (pFVar11->IORequest != (IBulkDataIORequest *)0x0) {
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            this_00 = (FBulkData *)(pFVar23 + lVar24 + 0x18);
            pcVar12 = (code *)FBulkData::GetBulkDataSize(this_00);
            QueryPerformanceCounter(&local_120);
            dVar7 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
            pFVar11->RequestStart = dVar7;
            if (2 < (byte)LogAnimation._0_1_) {
              local_118 = (FName)this->StreamableAnim->_padding_;
              ::FName::ToString(&local_118,&local_f8);
              local_178 = dVar7;
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
            }
            local_88[0] = (code *)0x0;
            local_60 = (code **)0x0;
            local_c8 = this;
            uStack_c0 = uVar22;
            local_b8 = pcVar12;
            local_60 = FMemory::Malloc(0x20,8);
            *local_60 = (code *)&UE::Core::Private::Function::
                                 TFunction_OwnedObject<`FStreamingAnimationData::BeginPendingRequests'::`26'::<lambda_1>,0,1>
                                 ::_vftable_;
            local_60[1] = (code *)local_c8;
            local_60[2] = (code *)CONCAT44(uStack_bc,uStack_c0);
            local_60[3] = local_b8;
            if (local_60 + 1 != (code **)0x0) {
              local_88[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`FStreamingAnimationData::BeginPendingRequests'::__l26::<lambda_1>,void,bool,IBulkDataIORequest_*>
                            ::Call;
            }
            if (2 < (byte)LogAnimation._0_1_) {
              pFVar13 = FBulkData::GetDebugName(this_00,&local_a8);
              if ((pFVar13->Data).ArrayNum == 0) {
                pwVar27 = L"";
              }
              else {
                pwVar27 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
              }
              lVar14 = FBulkData::GetBulkDataSize(this_00);
              lVar15 = FBulkData::GetBulkDataOffsetInFile((FBulkData *)(pFVar23 + lVar24 + 0x18));
              fVar1 = *(float *)(pFVar23 + lVar24 + 4);
              local_110 = (FName)this->StreamableAnim->_padding_;
              ::FName::ToString(&local_110,&local_e8);
              local_178 = (double)fVar1;
              local_170 = lVar15;
              local_168 = lVar14;
              local_160 = (FScriptContainerElement *)pwVar27;
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              pFVar11 = local_138;
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                pFVar11 = local_138;
              }
            }
            if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
              TVar16 = (TEventRef<unsigned_int>)&local_130;
              local_130 = 0;
              uVar22 = local_154;
            }
            else {
              uVar22 = local_154 | 1;
              local_108 = (FName)this->StreamableAnim->_padding_;
              local_154 = uVar22;
              ::FName::ToString(&local_108,&local_d8);
              FVar21.Data = (FScriptContainerElement *)L"";
              if (local_d8.Data.ArrayNum != 0) {
                FVar21.Data = local_d8.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_100,(wchar_t *)FVar21.Data);
              TVar16 = FStringTrace::GetNameRef(&local_b0);
            }
            uVar6 = *(undefined8 *)TVar16;
            if (((uVar22 & 1) != 0) &&
               (local_154 = uVar22 & 0xfffffffe,
               local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            bVar9 = false;
            if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
              UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                        ((TLogScope<0> *)&local_98);
              bVar9 = true;
              *local_98 = (int)uVar6;
              *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
            }
            pIVar17 = FBulkData::CreateStreamingRequest
                                ((FBulkData *)(pFVar23 + lVar24 + 0x18),AIOP_CriticalPath,
                                 (TFunction<void___cdecl(bool,IBulkDataIORequest_*)> *)local_88,
                                 (uchar *)0x0);
            pFVar11->IORequest = pIVar17;
            if ((pIVar17 == (IBulkDataIORequest *)0x0) && (1 < (byte)LogAnimation._0_1_)) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            }
            if (bVar9) {
              lVar24 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar24 + 0x9d48) == '\0') {
                __dyn_tls_on_demand_init();
              }
              pFVar18 = *(FWriteBuffer **)(lVar24 + 0x20);
              if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
                pFVar18 = UE::Trace::Private::Writer_NextBuffer();
              }
              *pFVar18->Cursor = '\n';
              pFVar18->Cursor = pFVar18->Cursor + 1;
              pFVar18->Committed = pFVar18->Cursor;
            }
            pFVar26 = local_148;
            if (local_88[0] != (code *)0x0) {
              ppcVar20 = local_88 + 2;
              if (local_60 != (code **)0x0) {
                ppcVar20 = local_60;
              }
              (**(code **)(*ppcVar20 + 0x10))();
              pFVar26 = local_148;
            }
          }
          uVar19 = (ulonglong)local_14c;
          pFVar23 = (FScriptContainerElement *)((longlong)local_140 + 4);
        }
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar2 = *(int *)pFVar26;
      uVar22 = 0;
      if (0 < (this->LoadedChunks).ArrayNum) break;
LAB_1473e2be8:
      pFVar26 = pFVar26 + 4;
      uVar19 = (ulonglong)local_14c;
    }
    lVar24 = 0;
    do {
      if ((iVar2 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                             ,0xbb,L""), bVar9)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar3 = (this->LoadedChunks).ArrayNum;
      uVar25 = ~uVar22 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar22 < iVar3) {
        uVar10 = uVar25;
      }
      if (uVar10 == 0) {
        local_178 = (double)(longlong)(int)uVar22;
        local_170 = (longlong)iVar3;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (*(int *)((this->LoadedChunks).AllocatorInstance.Data + lVar24 + 0x18) == iVar2) {
        iVar2 = (this->LoadedChunks).ArrayNum;
        uVar10 = 0;
        if ((int)uVar22 < iVar2) {
          uVar10 = uVar25;
        }
        if (uVar10 == 0) {
          local_178 = (double)(longlong)(int)uVar22;
          local_170 = (longlong)iVar2;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        FreeLoadedChunk(this,(FLoadedAnimationChunk *)
                             ((this->LoadedChunks).AllocatorInstance.Data +
                             (longlong)(int)uVar22 * 0x20));
        lpCriticalSection = &this->LoadedChunksCritcalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar2 = (this->LoadedChunks).ArrayNum;
        uVar10 = 0;
        if ((int)uVar22 < iVar2) {
          uVar10 = uVar25;
        }
        if ((uVar10 == 0) &&
           (local_178 = (double)(longlong)(int)uVar22, local_170 = (longlong)iVar2,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        TArray<FLoadedAnimationChunk,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->LoadedChunks,uVar22);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        goto LAB_1473e2be8;
      }
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 0x20;
    } while ((int)uVar22 < (this->LoadedChunks).ArrayNum);
    pFVar26 = pFVar26 + 4;
    uVar19 = (ulonglong)local_14c;
  } while( true );
}

// BlockTillAllRequestsFinished @ 1473ee310

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingAnimationData::BlockTillAllRequestsFinished(FStreamingAnimationData *this,float param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  char cVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingAnimationData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FStreamingAnimData_BlockTillAllRequestsFinished>
  FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  FScriptContainerElement *pFVar17;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FStreamingAnimData_BlockTillAllRequestsFinished ==
          (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingAnimationData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FStreamingAnimData_BlockTillAllRequestsFinished>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res18.s,
                                 "FStreamingAnimData_BlockTillAllRequestsFinished");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_FStreamingAnimData_BlockTillAllRequestsFinished,*pFVar10,
                   L"FStreamingAnimData_BlockTillAllRequestsFinished","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_FStreamingAnimData_BlockTillAllRequestsFinished;
  if (StatPtr_FStreamingAnimData_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingAnimationData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FStreamingAnimData_BlockTillAllRequestsFinished>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res20,"FStreamingAnimData_BlockTillAllRequestsFinished");
    FVar11 = (FThreadSafeStaticStat<_public:_bool___cdecl_FStreamingAnimationData::BlockTillAllRequestsFinished(float)_::_2_::FStat_FStreamingAnimData_BlockTillAllRequestsFinished>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FStreamingAnimData_BlockTillAllRequestsFinished,*pFVar10,
                          L"FStreamingAnimData_BlockTillAllRequestsFinished","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar13.Value;
        local_res18.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                   ,0xf0);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1473ee4a3;
    }
  }
  bVar6 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_1473ee4a3:
  if (param_1 == 0.0) {
    iVar1 = (this->LoadedChunks).ArrayNum;
    pFVar17 = (this->LoadedChunks).AllocatorInstance.Data;
    pFVar15 = pFVar17 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->LoadedChunks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar17 == pFVar15) break;
      plVar2 = *(longlong **)(pFVar17 + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
        puVar3 = *(undefined8 **)(pFVar17 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        *(undefined8 *)(pFVar17 + 8) = 0;
      }
      pFVar17 = pFVar17 + 0x20;
    }
  }
  else {
    QueryPerformanceCounter(&local_res18);
    fVar8 = __real_3a83126f;
    iVar1 = (this->LoadedChunks).ArrayNum;
    pFVar17 = (this->LoadedChunks).AllocatorInstance.Data;
    pFVar15 = pFVar17 + (longlong)iVar1 * 0x20;
    dVar4 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
            FGenericPlatformTime::SecondsPerCycle;
    while( true ) {
      if ((this->LoadedChunks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar17 == pFVar15) break;
      if (*(longlong *)(pFVar17 + 8) != 0) {
        QueryPerformanceCounter(&local_res18);
        if (fVar8 <= (float)((dVar4 + (double)param_1) -
                            (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
                            FGenericPlatformTime::SecondsPerCycle)) {
          cVar9 = (**(code **)(**(longlong **)(pFVar17 + 8) + 0x10))();
          if (cVar9 != '\0') {
            plVar2 = *(longlong **)(pFVar17 + 8);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x10))(plVar2,0);
              puVar3 = *(undefined8 **)(pFVar17 + 8);
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
              }
              *(undefined8 *)(pFVar17 + 8) = 0;
            }
            goto LAB_1473ee5f4;
          }
        }
        bVar16 = false;
        goto LAB_1473ee605;
      }
LAB_1473ee5f4:
      pFVar17 = pFVar17 + 0x20;
    }
  }
  bVar16 = true;
LAB_1473ee605:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return bVar16;
}

// FreeLoadedChunk @ 1473fdc60

void __thiscall
FStreamingAnimationData::FreeLoadedChunk
          (FStreamingAnimationData *this,FLoadedAnimationChunk *param_1)

{
  IBulkDataIORequest *pIVar1;
  TAtomic<FCompressedAnimSequence_*> TVar2;
  undefined8 *puVar3;
  
  if (param_1->IORequest != (IBulkDataIORequest *)0x0) {
    (**(code **)((longlong)*param_1->IORequest + 0x28))();
    (**(code **)((longlong)*param_1->IORequest + 0x10))(param_1->IORequest,0);
    pIVar1 = param_1->IORequest;
    if (pIVar1 != (IBulkDataIORequest *)0x0) {
      (**(code **)*pIVar1)(pIVar1,1);
    }
    param_1->IORequest = (IBulkDataIORequest *)0x0;
  }
  if ((param_1->bOwnsCompressedData != false) &&
     (TVar2 = param_1->CompressedAnimData, TVar2 != (TAtomic<FCompressedAnimSequence_*>)0x0)) {
    puVar3 = *(undefined8 **)((longlong)TVar2 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (*(void **)((longlong)TVar2 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)TVar2 + 0x50));
    }
    TMaybeMappedAllocator<0>::ForAnyElementType::Reset
              ((ForAnyElementType *)((longlong)TVar2 + 0x30));
    if (*(void **)((longlong)TVar2 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)TVar2 + 0x20));
    }
    if (*(void **)((longlong)TVar2 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)TVar2 + 0x10));
    }
    if (*(void **)TVar2 != (void *)0x0) {
      FMemory::Free(*(void **)TVar2);
    }
    ::operator_delete((void *)TVar2,0x80);
  }
  LOCK();
  param_1->CompressedAnimData = (TAtomic<FCompressedAnimSequence_*>)0x0;
  UNLOCK();
  param_1->bOwnsCompressedData = false;
  param_1->Index = 0;
  return;
}

// FreeResources @ 1473fdd40

void __thiscall FStreamingAnimationData::FreeResources(FStreamingAnimationData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLoadedAnimationChunk *pFVar5;
  FLoadedAnimationChunk *pFVar6;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  do {
    BlockTillAllRequestsFinished(this,0.0);
    bVar3 = UpdateStreamingStatus(this);
    if (!bVar3) break;
    if (1 < uVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pass < 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                         ,0x3c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
  iVar1 = (this->LoadedChunks).ArrayNum;
  pFVar5 = (FLoadedAnimationChunk *)(this->LoadedChunks).AllocatorInstance.Data;
  pFVar6 = pFVar5 + iVar1;
  while( true ) {
    if ((this->LoadedChunks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    FreeLoadedChunk(this,pFVar5);
    pFVar5 = pFVar5 + 1;
  }
  return;
}

// GetMemorySize @ 147402ac0

ulong64 __thiscall FStreamingAnimationData::GetMemorySize(FStreamingAnimationData *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->LoadedChunks).ArrayNum;
  uVar7 = 0;
  pFVar6 = (this->LoadedChunks).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->LoadedChunks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLoadedAnimationChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar8) break;
    if ((*(longlong *)pFVar6 != 0) && (pFVar6[0x1c] != (FScriptContainerElement)0x0)) {
      lVar5 = *(longlong *)pFVar6;
      iVar2 = *(int *)(lVar5 + 0x2c);
      iVar3 = *(int *)(lVar5 + 0xc);
      iVar4 = *(int *)(lVar5 + 0x5c);
      lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x60) + 0x20))();
      uVar7 = uVar7 + 0x80 + lVar5 + (longlong)iVar3 * 4 + (longlong)iVar2 * 0xc + (longlong)iVar4;
    }
    pFVar6 = pFVar6 + 0x20;
  }
  return uVar7;
}

// HasPendingRequests @ 147405ef0

bool __thiscall
FStreamingAnimationData::HasPendingRequests
          (FStreamingAnimationData *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pFVar6 = (this->RequestedChunks).AllocatorInstance.Data;
  iVar3 = (this->RequestedChunks).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar3 * 4;
  do {
    if ((this->RequestedChunks).ArrayNum != iVar3) {
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) {
      pFVar6 = (this->LoadedChunkIndices).AllocatorInstance.Data;
      iVar3 = (this->LoadedChunkIndices).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar3 * 4;
      do {
        if ((this->LoadedChunkIndices).ArrayNum != iVar3) {
          `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar6 == pFVar1) {
          if ((param_1->ArrayNum < 1) && (param_2->ArrayNum < 1)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          return bVar4;
        }
        pFVar5 = (this->RequestedChunks).AllocatorInstance.Data;
        local_res8[0] = *(uint *)pFVar6;
        pFVar2 = pFVar5 + (longlong)(this->RequestedChunks).ArrayNum * 4;
        for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 4) {
          if (*(uint *)pFVar5 == local_res8[0]) goto LAB_14740601a;
        }
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
                  (param_2,local_res8);
LAB_14740601a:
        pFVar6 = pFVar6 + 4;
      } while( true );
    }
    pFVar5 = (this->LoadedChunkIndices).AllocatorInstance.Data;
    local_res8[0] = *(uint *)pFVar6;
    pFVar2 = pFVar5 + (longlong)(this->LoadedChunkIndices).ArrayNum * 4;
    for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 4) {
      if (*(uint *)pFVar5 == local_res8[0]) goto LAB_147405fba;
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
              (param_1,local_res8);
LAB_147405fba:
    pFVar6 = pFVar6 + 4;
  } while( true );
}

// Initialize @ 147406b90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStreamingAnimationData::Initialize
          (FStreamingAnimationData *this,UAnimStreamable *param_1,
          FAnimationStreamingManager *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 local_28 [2];
  FString local_20;
  
  if ((param_1 == (UAnimStreamable *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStreamableAnim && InStreamableAnim->HasRunningPlatformData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                         ,0x47,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((param_1->RunningAnimPlatformData).Chunks.ArrayNum == 0) {
    if (1 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_20,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = false;
  }
  else {
    iVar6 = (this->LoadedChunks).ArrayNum;
    this->StreamableAnim = param_1;
    this->AnimationStreamingManager = param_2;
    if ((iVar6 != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadedChunks.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                           ,0x55,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((this->LoadedChunkIndices).ArrayNum != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoadedChunkIndices.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationStreaming.cpp"
                           ,0x56,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (((param_1->RunningAnimPlatformData).Chunks.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    AddNewLoadedChunk(this,0,*(FCompressedAnimSequence **)
                              ((param_1->RunningAnimPlatformData).Chunks.AllocatorInstance.Data +
                              0x10));
    pFVar2 = (this->LoadedChunkIndices).AllocatorInstance.Data;
    local_28[0] = 0;
    if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar2 + (longlong)(this->LoadedChunkIndices).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    iVar6 = (this->LoadedChunkIndices).ArrayNum;
    piVar1 = &(this->LoadedChunkIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->LoadedChunkIndices).AllocatorInstance,piVar1);
    }
    (this->LoadedChunkIndices).ArrayNum = iVar6 + 1;
    *(undefined4 *)((this->LoadedChunkIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
         local_28[0];
    bVar4 = true;
  }
  return bVar4;
}

// ResetRequestedChunks @ 14740f560

void __thiscall FStreamingAnimationData::ResetRequestedChunks(FStreamingAnimationData *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  pTVar1 = &this->RequestedChunks;
  piVar2 = &(this->RequestedChunks).ArrayMax;
  (this->RequestedChunks).ArrayNum = 0;
  if ((this->RequestedChunks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = 0;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar2 * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RequestedChunks).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->RequestedChunks).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// UpdateStreamingStatus @ 14741b7d0

bool __thiscall FStreamingAnimationData::UpdateStreamingStatus(FStreamingAnimationData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FLoadedAnimationChunk *pFVar19;
  uint *puVar20;
  int iVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  uint *local_res20;
  longlong local_80;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_70;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  if (this->StreamableAnim == (UAnimStreamable *)0x0) {
    return false;
  }
  local_res10 = 0;
  if (0 < (this->LoadedChunks).ArrayNum) {
    local_80 = 0;
    do {
      uVar18 = local_res10;
      uVar13 = ~local_res10 >> 0x1f;
      uVar9 = 0;
      if ((int)local_res10 < (this->LoadedChunks).ArrayNum) {
        uVar9 = uVar13;
      }
      local_res18 = uVar13;
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar14 = (this->LoadFailedChunks).AllocatorInstance.Data;
      pFVar19 = (FLoadedAnimationChunk *)((this->LoadedChunks).AllocatorInstance.Data + local_80);
      pFVar12 = pFVar14 + (longlong)(this->LoadFailedChunks).ArrayNum * 4;
      if (pFVar14 != pFVar12) {
        local_res20 = &pFVar19->Index;
LAB_14741b8e3:
        if (*(uint *)pFVar14 != pFVar19->Index) goto code_r0x00014741b8e7;
        pFVar12 = (this->LoadedChunkIndices).AllocatorInstance.Data;
        if (((pFVar12 <= local_res20) &&
            (local_res20 < pFVar12 + (longlong)(this->LoadedChunkIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar16 = (this->LoadedChunkIndices).ArrayNum;
        lVar10 = (longlong)iVar16;
        if (iVar16 != 0) {
          pFVar12 = (this->LoadedChunkIndices).AllocatorInstance.Data;
          iVar21 = 0;
          lVar11 = 0;
          bVar6 = *(uint *)pFVar12 != *local_res20;
          puVar20 = local_res20;
          iVar16 = 0;
          do {
            lVar11 = lVar11 + 1;
            iVar17 = iVar16 + 1;
            if (lVar11 < lVar10) {
              do {
                if (bVar6 != (*(uint *)(pFVar12 + lVar11 * 4) != *puVar20)) break;
                iVar17 = iVar17 + 1;
                lVar11 = lVar11 + 1;
              } while (lVar11 < lVar10);
            }
            if (bVar6 != false) {
              if (iVar21 != iVar16) {
                memmove(pFVar12 + (longlong)iVar21 * 4,pFVar12 + (longlong)iVar16 * 4,
                        (longlong)(iVar17 - iVar16) << 2);
                puVar20 = local_res20;
              }
              iVar21 = iVar21 + (iVar17 - iVar16);
            }
            bVar6 = (bool)(bVar6 ^ 1);
            iVar16 = iVar17;
          } while (lVar11 < lVar10);
          (this->LoadedChunkIndices).ArrayNum = iVar21;
          uVar13 = local_res18;
          uVar18 = local_res10;
        }
        FreeLoadedChunk(this,pFVar19);
        lpCriticalSection = &this->LoadedChunksCritcalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar9 = 0;
        if ((int)uVar18 < (this->LoadedChunks).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TArray<FLoadedAnimationChunk,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->LoadedChunks,uVar18);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
LAB_14741ba8e:
      local_res10 = uVar18 + 1;
      local_80 = local_80 + 0x20;
    } while ((int)local_res10 < (this->LoadedChunks).ArrayNum);
  }
  (this->LoadFailedChunks).ArrayNum = 0;
  if ((this->LoadFailedChunks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LoadFailedChunks).AllocatorInstance,0,
               &(this->LoadFailedChunks).ArrayMax);
  }
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar15 = false;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  bVar6 = HasPendingRequests(this,local_60,&local_70);
  if (bVar6) {
    iVar16 = (this->LoadedChunks).ArrayNum;
    pFVar12 = (this->LoadedChunks).AllocatorInstance.Data;
    pFVar14 = pFVar12 + (longlong)iVar16 * 0x20;
    while( true ) {
      if ((this->LoadedChunks).ArrayNum != iVar16) {
        `TCheckedPointerIterator<FLoadedAnimationChunk,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar14) break;
      if (*(longlong **)(pFVar12 + 8) != (longlong *)0x0) {
        cVar8 = (**(code **)(**(longlong **)(pFVar12 + 8) + 8))();
        bVar15 = (bool)(bVar15 | cVar8 == '\0');
        if ((cVar8 != '\0') && (plVar3 = *(longlong **)(pFVar12 + 8), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
          puVar4 = *(undefined8 **)(pFVar12 + 8);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          *(undefined8 *)(pFVar12 + 8) = 0;
        }
      }
      pFVar12 = pFVar12 + 0x20;
    }
    pTVar1 = &this->LoadedChunkIndices;
    if (pTVar1 != &this->RequestedChunks) {
      iVar16 = (this->RequestedChunks).ArrayNum;
      piVar2 = &(this->LoadedChunkIndices).ArrayMax;
      pFVar12 = (this->RequestedChunks).AllocatorInstance.Data;
      (this->LoadedChunkIndices).ArrayNum = iVar16;
      if ((iVar16 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar16,*piVar2,&pTVar1->AllocatorInstance,iVar16,piVar2);
        if (iVar16 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar12,(longlong)iVar16 << 2);
        }
      }
    }
    BeginPendingRequests(this,local_60,&local_70);
  }
  ResetRequestedChunks(this);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].AllocatorInstance.Data);
  }
  return bVar15;
code_r0x00014741b8e7:
  pFVar14 = pFVar14 + 4;
  if (pFVar14 == pFVar12) goto LAB_14741ba8e;
  goto LAB_14741b8e3;
}

