// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Complete @ 14aabfbb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Complete
          (FLoadImageRomsTask *this,CodeRunner *param_1)

{
  FRomLoadOp *pFVar1;
  short *psVar2;
  undefined4 uVar3;
  FModel *pFVar4;
  Private *pPVar5;
  Private *pPVar6;
  FModelReader *pFVar7;
  undefined1 *puVar8;
  code *pcVar9;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar10;
  FModelCacheEntry *pFVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  FSparseArrayAllocationInfo *pFVar21;
  FRomLoadOps *pFVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  uint uVar25;
  FRomLoadOp *pFVar26;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 local_128;
  undefined1 local_127 [7];
  uint local_120 [2];
  uint local_118;
  FRomLoadOps *local_110;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *local_108;
  TPairInitializer<unsigned_int_const_&,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_&&>
  local_100;
  Private *local_f0;
  FModelCacheEntry *local_e8;
  uint *local_e0;
  FImage **local_d8;
  FImage *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FInputArchive local_b8;
  undefined8 local_98;
  byte *pbStack_90;
  TSharedPtr<UE::Mutable::Private::FImage,1> local_88;
  FInputMemoryStream local_78;
  FSparseArrayAllocationInfo local_58;
  
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2295,"Mutable_FLoadImageRomsTask_Complete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x8f7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2295);
  }
  if ((param_1 == (CodeRunner *)0x0) || (param_1->System == (Private *)0x0)) {
    bVar13 = false;
  }
  else {
    if (((param_1->Model).Object == (FModel *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    pFVar4 = (param_1->Model).Object;
    pPVar5 = pFVar4->m_pD;
    local_f0 = pPVar5;
    local_e8 = FWorkingMemoryManager::FindModelCache(&param_1->System->WorkingMemoryManager,pFVar4);
    pTVar27 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
              (this->RomIndices).AllocatorInstance.Data;
    local_118 = (this->RomIndices).ArrayNum;
    uVar20 = (ulonglong)(int)local_118;
    bVar13 = false;
    local_100.Value =
         (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
         ((longlong)&pTVar27->Object + uVar20 * 4);
    while( true ) {
      pTVar10 = local_100.Value;
      local_108 = pTVar27;
      if ((this->RomIndices).ArrayNum != (int)uVar20) {
        local_128 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_128);
      }
      if (pTVar27 == pTVar10) break;
      uVar25 = *(uint *)&pTVar27->Object;
      pFVar22 = &param_1->RomLoadOps;
      iVar18 = (param_1->RomLoadOps).RomLoadOps.ArrayNum;
      pFVar26 = (FRomLoadOp *)(pFVar22->RomLoadOps).AllocatorInstance.Data;
      pFVar1 = pFVar26 + iVar18;
      local_110 = pFVar22;
      while( true ) {
        if ((pFVar22->RomLoadOps).ArrayNum != iVar18) {
          local_127[0] = 0;
          `TCheckedPointerIterator<UE::Mutable::Private::CodeRunner::FRomLoadOp,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_127);
          pFVar22 = local_110;
        }
        if (pFVar26 == pFVar1) goto LAB_14aac00a8;
        if (pFVar26->RomIndex == uVar25) break;
        pFVar26 = pFVar26 + 1;
      }
      pPVar6 = param_1->System;
      if (((pPVar6->StreamInterface).Object == (FModelReader *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar7 = (pPVar6->StreamInterface).Object;
      cVar16 = (**(code **)((longlong)*pFVar7 + 0x20))(pFVar7,pFVar26->m_streamID);
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2315,"Mutable_Unserialise",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                   ,0x90b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2315);
      }
      if (cVar16 == '\0') {
        bVar13 = true;
      }
      else {
        FInputMemoryStream::FInputMemoryStream
                  (&local_78,(void *)(pFVar26->m_streamBuffer).AllocatorInstance._padding_,
                   (longlong)(pFVar26->m_streamBuffer).ArrayNum);
        FInputArchive::FInputArchive(&local_b8,(FInputStream *)&local_78);
        FImage::StaticUnserialise(&local_88,&local_b8);
        uVar19 = 0;
        if ((int)uVar25 < (pPVar5->Program).Roms.ArrayNum) {
          uVar19 = ~uVar25 >> 0x1f;
        }
        local_120[0] = uVar25;
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        if (((*(uint *)((pPVar5->Program).Roms.AllocatorInstance.Data + (longlong)(int)uVar25 * 4) &
             0x40000000) != 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Roms[RomIndex].ResourceType == uint32(ERomDataType::Image)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                ,0x20b,L""), bVar17)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        if (*(int *)&(pPVar5->Program).ConstantImageLODsStreamed.field_0x8 !=
            *(int *)&(pPVar5->Program).ConstantImageLODsStreamed.field_0x34) {
          puVar8 = *(undefined1 **)&(pPVar5->Program).ConstantImageLODsStreamed.field_0x40;
          puVar23 = &(pPVar5->Program).ConstantImageLODsStreamed.field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar23 = puVar8;
          }
          iVar18 = *(int *)(puVar23 +
                           (ulonglong)
                           (*(int *)&(pPVar5->Program).ConstantImageLODsStreamed.field_0x48 - 1U &
                           local_120[0]) * 4);
          if (iVar18 != -1) {
            lVar28 = *(longlong *)&(pPVar5->Program).ConstantImageLODsStreamed;
            do {
              if (*(uint *)((longlong)iVar18 * 0x20 + lVar28) == local_120[0]) {
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!ConstantImageLODsStreamed.Contains(RomIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                    ,0x20c,L"");
                if (bVar17) {
                  pcVar9 = (code *)swi(3);
                  uVar14 = (*pcVar9)();
                  return (bool)uVar14;
                }
                break;
              }
              iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + lVar28);
            } while (iVar18 != -1);
          }
        }
        lVar28 = (longlong)(int)local_120[0];
        uVar25 = 0;
        if ((int)local_120[0] < (pPVar5->Program).Roms.ArrayNum) {
          uVar25 = ~local_120[0] >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        uVar25 = local_120[0];
        uVar3 = *(undefined4 *)((pPVar5->Program).Roms.AllocatorInstance.Data + lVar28 * 4);
        lVar28 = (longlong)(int)local_120[0];
        if (((int)local_120[0] < 0) ||
           (*(int *)&(pPVar5->Program).LoadedMemTrackedRoms.field_0x28 <= (int)local_120[0])) {
LAB_14aabffd7:
          pFVar21 = TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::InsertUninitialized
                              ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)
                               &(pPVar5->Program).LoadedMemTrackedRoms,&local_58,uVar25);
          local_98 = *(undefined8 *)pFVar21;
          pbStack_90 = pFVar21->Pointer;
          pbVar24 = pFVar21->Pointer;
        }
        else {
          if ((*(int *)&(pPVar5->Program).LoadedMemTrackedRoms.field_0x28 <= (int)local_120[0]) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar17)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          puVar8 = *(undefined1 **)&(pPVar5->Program).LoadedMemTrackedRoms.field_0x20;
          puVar23 = &(pPVar5->Program).LoadedMemTrackedRoms.field_0x10;
          if (puVar8 != (undefined1 *)0x0) {
            puVar23 = puVar8;
          }
          uVar19 = uVar25;
          if ((int)uVar25 < 0) {
            uVar19 = uVar25 + 0x1f;
          }
          if ((*(uint *)(puVar23 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar25 & 0x1f) & 1) == 0)
          goto LAB_14aabffd7;
          pbVar24 = (byte *)(*(longlong *)&(pPVar5->Program).LoadedMemTrackedRoms + lVar28 * 8);
          pbStack_90 = pbVar24;
        }
        FVar12.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        if (pbVar24 != (byte *)0x0) {
          *pbVar24 = (byte)((uint)uVar3 >> 0x1e) & 1;
        }
        local_c8 = local_88.Object;
        pTStack_c0 = local_88.SharedReferenceCount.ReferenceController;
        if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e0 = local_120;
        local_d8 = &local_c8;
        TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_&&>_>
                  ((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FImage_const_,1>,0>,FDefaultSetAllocator>
                    *)&(pPVar5->Program).ConstantImageLODsStreamed,&local_100,(bool *)&local_e0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar12.ReferenceController);
        local_b8._padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
        DestructItems<TSharedPtr<void,1>,int>
                  ((TSharedPtr<void,1> *)local_b8.History.AllocatorInstance.Data,
                   local_b8.History.ArrayNum);
        if ((TSharedPtr<void,1> *)local_b8.History.AllocatorInstance.Data !=
            (TSharedPtr<void,1> *)0x0) {
          FMemory::Free(local_b8.History.AllocatorInstance.Data);
        }
        local_78._padding_ = (longlong)&___7FInputStream_Private_Mutable_UE__6B_;
        pTVar27 = local_108;
      }
      FRomLoadOps::Remove(local_110,pFVar26);
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_14aac00a8:
      pTVar27 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)
                ((longlong)&pTVar27->Object + 4);
      uVar20 = (ulonglong)local_118;
    }
    if ((bVar13) && (5 < (byte)LogMutableCore._0_1_)) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
    }
    bVar13 = RunCode_ConstantResource
                       (param_1,(FScheduledOp *)&this->_padding_,(param_1->Model).Object);
    pFVar11 = local_e8;
    pPVar5 = local_f0;
    if ((bVar13) &&
       (uVar20 = (ulonglong)this->ImageIndexBegin, this->ImageIndexBegin < this->ImageIndexEnd)) {
      lVar28 = uVar20 * 4;
      do {
        uVar19 = (uint)uVar20;
        uVar25 = 0;
        if ((int)uVar19 < (pPVar5->Program).ConstantImageLODIndices.ArrayNum) {
          uVar25 = ~uVar19 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        uVar25 = *(uint *)((pPVar5->Program).ConstantImageLODIndices.AllocatorInstance.Data + lVar28
                          );
        if ((int)uVar25 < 0) {
          uVar25 = uVar25 & 0x7fffffff;
          if (((pPVar5->Program).Roms.ArrayNum <= (int)uVar25) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RomIndex < Program.Roms.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                  ,0x936,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          FWorkingMemoryManager::MarkRomUsed
                    (&param_1->System->WorkingMemoryManager,uVar25,&param_1->Model);
          if (((pFVar11->PendingOpsPerRom).ArrayNum <= (int)uVar25) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          psVar2 = (short *)((pFVar11->PendingOpsPerRom).AllocatorInstance._padding_ +
                            (ulonglong)uVar25 * 2);
          *psVar2 = *psVar2 + -1;
        }
        uVar20 = (ulonglong)(uVar19 + 1);
        lVar28 = lVar28 + 4;
      } while ((int)(uVar19 + 1) < this->ImageIndexEnd);
    }
  }
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// Prepare @ 14aae46b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare
          (FLoadImageRomsTask *this,CodeRunner *param_1,bool *param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *pTVar3;
  short *psVar4;
  atomic<bool> aVar5;
  atomic<unsigned_int> aVar6;
  Private *pPVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  Private *pPVar10;
  FModelReader *pFVar11;
  FTaskBase *pFVar12;
  code *pcVar13;
  CodeRunner *pCVar14;
  FLoadImageRomsTask *pFVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  FModelCacheEntry *pFVar20;
  FRomLoadOp *pFVar21;
  FTaskBase *pFVar22;
  undefined8 *puVar23;
  undefined ***pppuVar24;
  uint uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStackY_128 [32];
  uint local_d8;
  uint local_d4;
  undefined1 local_d0 [8];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> local_c8;
  FTaskBase *local_b8;
  CodeRunner *local_b0;
  FModelCacheEntry *local_a8;
  FLoadImageRomsTask *local_a0;
  ulonglong local_98;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *local_90;
  bool *local_88;
  code *local_78;
  undefined **local_68;
  FTaskBase *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((param_1 != (CodeRunner *)0x0) && (param_1->System != (Private *)0x0)) {
    bVar31 = -1 < CpuChannel->Enabled;
    local_b0 = param_1;
    local_a0 = this;
    local_88 = param_2;
    if (bVar31) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2203,"Mutable_FLoadImageRomsTask_Prepare",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                 ,0x89b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2203);
    }
    *param_2 = false;
    pTVar3 = &param_1->Model;
    local_90 = pTVar3;
    if ((pTVar3->Object == (FModel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    pPVar7 = pTVar3->Object->m_pD;
    pFVar20 = FWorkingMemoryManager::FindModelCache
                        (&param_1->System->WorkingMemoryManager,pTVar3->Object);
    uVar29 = this->ImageIndexEnd - this->ImageIndexBegin;
    if ((int)uVar29 < 0) {
      uVar29 = 0;
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    local_a8 = pFVar20;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if (0 < (int)uVar29) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar29,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    }
    local_d4 = this->ImageIndexBegin;
    uVar30 = (ulonglong)(int)local_d4;
    uVar16 = uVar30;
    if ((int)local_d4 < local_a0->ImageIndexEnd) {
      do {
        local_98 = uVar16;
        uVar16 = local_98;
        pFVar15 = local_a0;
        uVar25 = (uint)uVar30;
        uVar29 = 0;
        if ((int)uVar25 < (pPVar7->Program).ConstantImageLODIndices.ArrayNum) {
          uVar29 = ~uVar25 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar25 = local_d4, bVar17)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        uVar29 = *(uint *)((pPVar7->Program).ConstantImageLODIndices.AllocatorInstance.Data +
                          uVar16 * 4);
        if ((int)uVar29 < 0) {
          local_d8 = uVar29 & 0x7fffffff;
          if (((pPVar7->Program).Roms.ArrayNum <= (int)local_d8) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RomIndex < Program.Roms.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                  ,0x8b1,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          lVar27 = (longlong)(int)local_d8;
          uVar29 = 0;
          if ((int)local_d8 < (pFVar20->PendingOpsPerRom).ArrayNum) {
            uVar29 = ~local_d8 >> 0x1f;
          }
          if ((uVar29 == 0) &&
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
          uVar29 = local_d8;
          psVar4 = (short *)((pFVar20->PendingOpsPerRom).AllocatorInstance._padding_ + lVar27 * 2);
          *psVar4 = *psVar4 + 1;
          uVar25 = 0;
          if ((int)local_d8 < (pPVar7->Program).Roms.ArrayNum) {
            uVar25 = ~local_d8 >> 0x1f;
          }
          if ((uVar25 == 0) &&
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
          uVar25 = *(uint *)((pPVar7->Program).Roms.AllocatorInstance.Data +
                            (longlong)(int)uVar29 * 4) >> 0x1e & 1;
          if (uVar25 == 0) {
            if (*(int *)&(pPVar7->Program).ConstantImageLODsStreamed.field_0x8 !=
                *(int *)&(pPVar7->Program).ConstantImageLODsStreamed.field_0x34) {
              puVar8 = *(undefined1 **)&(pPVar7->Program).ConstantImageLODsStreamed.field_0x40;
              puVar26 = &(pPVar7->Program).ConstantImageLODsStreamed.field_0x38;
              if (puVar8 != (undefined1 *)0x0) {
                puVar26 = puVar8;
              }
              iVar19 = *(int *)(puVar26 +
                               (ulonglong)
                               (*(int *)&(pPVar7->Program).ConstantImageLODsStreamed.field_0x48 - 1U
                               & uVar29) * 4);
              if (iVar19 != -1) {
                lVar27 = *(longlong *)&(pPVar7->Program).ConstantImageLODsStreamed;
                do {
                  if (*(uint *)((longlong)iVar19 * 0x20 + lVar27) == uVar29) goto LAB_14aae4a4b;
                  iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + lVar27);
                } while (iVar19 != -1);
              }
            }
LAB_14aae4a49:
            iVar19 = -1;
LAB_14aae4a4b:
            uVar25 = local_d4;
            if (iVar19 != -1) goto LAB_14aae4edb;
          }
          else {
            if (uVar25 == 1) {
              if (*(int *)&(pPVar7->Program).ConstantMeshesStreamed.field_0x8 !=
                  *(int *)&(pPVar7->Program).ConstantMeshesStreamed.field_0x34) {
                puVar8 = *(undefined1 **)&(pPVar7->Program).ConstantMeshesStreamed.field_0x40;
                puVar26 = &(pPVar7->Program).ConstantMeshesStreamed.field_0x38;
                if (puVar8 != (undefined1 *)0x0) {
                  puVar26 = puVar8;
                }
                iVar19 = *(int *)(puVar26 +
                                 (ulonglong)
                                 (*(int *)&(pPVar7->Program).ConstantMeshesStreamed.field_0x48 - 1U
                                 & uVar29) * 4);
                if (iVar19 != -1) {
                  lVar27 = *(longlong *)&(pPVar7->Program).ConstantMeshesStreamed;
                  do {
                    if (*(uint *)((longlong)iVar19 * 0x20 + lVar27) == uVar29) goto LAB_14aae4a4b;
                    iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + lVar27);
                  } while (iVar19 != -1);
                }
              }
              goto LAB_14aae4a49;
            }
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                ,0x1cf,L"");
            if (bVar17) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
          }
          pFVar9 = (pFVar15->RomIndices).AllocatorInstance.Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               pFVar9 + (longlong)(pFVar15->RomIndices).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          iVar19 = (pFVar15->RomIndices).ArrayNum;
          piVar1 = &(pFVar15->RomIndices).ArrayMax;
          if (iVar19 == *piVar1) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar15->RomIndices).AllocatorInstance,piVar1);
          }
          uVar29 = local_d8;
          (pFVar15->RomIndices).ArrayNum = iVar19 + 1;
          *(uint *)((pFVar15->RomIndices).AllocatorInstance.Data + (longlong)iVar19 * 4) = local_d8;
          iVar19 = (param_1->RomLoadOps).RomLoadOps.ArrayNum;
          pFVar28 = (param_1->RomLoadOps).RomLoadOps.AllocatorInstance.Data;
          pFVar9 = pFVar28 + (longlong)iVar19 * 0x28;
          while( true ) {
            if ((param_1->RomLoadOps).RomLoadOps.ArrayNum != iVar19) {
              local_d0[0] = 0;
              `TCheckedPointerIterator<UE::Mutable::Private::CodeRunner::FRomLoadOp,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_d0);
            }
            if (pFVar28 == pFVar9) {
              pFVar21 = FRomLoadOps::Create(&param_1->RomLoadOps,local_d8);
              pCVar14 = local_b0;
              if (((local_b0->System->StreamInterface).Object == (FModelReader *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Runner->System->StreamInterface",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                      ,0x8c7,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              lVar27 = (longlong)(int)local_d8;
              uVar29 = 0;
              if ((int)local_d8 < (pPVar7->Program).Roms.ArrayNum) {
                uVar29 = ~local_d8 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              uVar29 = *(uint *)((pPVar7->Program).Roms.AllocatorInstance.Data + lVar27 * 4) &
                       0x3fffffff;
              if ((uVar29 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RomSize > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                      ,0x8ca,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              FWorkingMemoryManager::MarkRomUsed
                        (&pCVar14->System->WorkingMemoryManager,local_d8,&pCVar14->Model);
              FWorkingMemoryManager::EnsureBudgetBelow
                        (&pCVar14->System->WorkingMemoryManager,(ulonglong)uVar29);
              TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>_>
              ::SetNumUninitialized(&pFVar21->m_streamBuffer,uVar29,Default);
              local_b8 = (FTaskBase *)
                         Tasks::Private::FTaskEventBase::Create(L"FLoadImageRomsTaskRom");
              if (((local_c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
                  ((FScriptContainerElement *)&local_b8 <
                   local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              iVar19 = local_c8.ArrayNum;
              if (local_c8.ArrayNum == local_c8.ArrayMax) {
                iVar19 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
              }
              local_c8.ArrayNum = iVar19 + 1;
              *(undefined8 *)(local_c8.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
              *(FTaskBase **)(local_c8.AllocatorInstance.Data + (longlong)iVar19 * 8) = local_b8;
              if (local_b8 != (FTaskBase *)0x0) {
                LOCK();
                local_b8->RefCount = (atomic<unsigned_int>)((int)local_b8->RefCount + 1);
                UNLOCK();
              }
              pFVar22 = (pFVar21->Event).Pimpl.Reference;
              if (pFVar22 != local_b8) {
                (pFVar21->Event).Pimpl.Reference = local_b8;
                if (local_b8 != (FTaskBase *)0x0) {
                  LOCK();
                  local_b8->RefCount = (atomic<unsigned_int>)((int)local_b8->RefCount + 1);
                  UNLOCK();
                }
                if (pFVar22 != (FTaskBase *)0x0) {
                  LOCK();
                  paVar2 = &pFVar22->RefCount;
                  aVar6 = *paVar2;
                  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
                  UNLOCK();
                  if (aVar6 == (atomic<unsigned_int>)0x1) {
                    (**(code **)pFVar22->_padding_)(pFVar22,1);
                  }
                }
              }
              uVar29 = local_d8;
              if (local_b8 != (FTaskBase *)0x0) {
                LOCK();
                local_b8->RefCount = (atomic<unsigned_int>)((int)local_b8->RefCount + 1);
                UNLOCK();
              }
              local_60 = local_b8;
              local_50 = (undefined ***)0x0;
              pPVar10 = local_b0->System;
              local_68 = &Core::Private::Function::
                          TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::`7'::<lambda_1>,0,0>
                          ::_vftable_;
              local_78 = Core::Private::Function::
                         TFunctionRefCaller<`UE::Mutable::Private::CodeRunner::FLoadImageRomsTask::Prepare'::__l7::<lambda_1>,void,bool>
                         ::Call;
              if (((pPVar10->StreamInterface).Object == (FModelReader *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              pFVar11 = (pPVar10->StreamInterface).Object;
              iVar19 = (**(code **)((longlong)*pFVar11 + 0x10))(pFVar11,local_90->Object,uVar29);
              pFVar21->m_streamID = iVar19;
              if (-1 < iVar19) {
                if (local_78 != (code *)0x0) {
                  pppuVar24 = &local_68;
                  if (local_50 != (undefined ***)0x0) {
                    pppuVar24 = local_50;
                  }
                  (*(code *)(*pppuVar24)[2])();
                }
                pFVar20 = local_a8;
                param_1 = local_b0;
                uVar25 = local_d4;
                if (local_b8 != (FTaskBase *)0x0) {
                  LOCK();
                  paVar2 = &local_b8->RefCount;
                  aVar6 = *paVar2;
                  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
                  UNLOCK();
                  if (aVar6 == (atomic<unsigned_int>)0x1) {
                    (**(code **)local_b8->_padding_)(local_b8,1);
                    pFVar20 = local_a8;
                    param_1 = local_b0;
                    uVar25 = local_d4;
                  }
                }
                goto LAB_14aae4edb;
              }
              *local_88 = true;
              if (local_78 != (code *)0x0) {
                pppuVar24 = &local_68;
                if (local_50 != (undefined ***)0x0) {
                  pppuVar24 = local_50;
                }
                (*(code *)(*pppuVar24)[2])();
              }
              if (local_b8 == (FTaskBase *)0x0) goto LAB_14aae4fe6;
              LOCK();
              paVar2 = &local_b8->RefCount;
              aVar6 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_14aae4fe6;
              puVar23 = (undefined8 *)local_b8->_padding_;
              pFVar22 = local_b8;
              goto LAB_14aae4fdf;
            }
            if (*(uint *)pFVar28 == uVar29) break;
            pFVar28 = pFVar28 + 0x28;
          }
          pFVar28 = pFVar28 + 0x20;
          if (((local_c8.AllocatorInstance.Data <= pFVar28) &&
              (pFVar28 < local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          iVar19 = local_c8.ArrayNum;
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
          }
          local_c8.ArrayNum = iVar19 + 1;
          *(undefined8 *)(local_c8.AllocatorInstance.Data + (longlong)iVar19 * 8) = 0;
          lVar27 = *(longlong *)pFVar28;
          *(longlong *)(local_c8.AllocatorInstance.Data + (longlong)iVar19 * 8) = lVar27;
          pFVar20 = local_a8;
          param_1 = local_b0;
          uVar25 = local_d4;
          if (lVar27 != 0) {
            LOCK();
            *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
            UNLOCK();
          }
        }
LAB_14aae4edb:
        local_d4 = uVar25 + 1;
        uVar30 = (ulonglong)local_d4;
        local_98 = local_98 + 1;
        uVar16 = local_98;
      } while ((int)local_d4 < local_a0->ImageIndexEnd);
    }
    pFVar22 = (FTaskBase *)Tasks::Private::FTaskEventBase::Create(L"FLoadImageRomsTask");
    Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>,0>
              (pFVar22,&local_c8,true);
    if ((pFVar22 != (FTaskBase *)0x0) && ((pFVar22->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
      LOCK();
      aVar5 = pFVar22->TaskTriggered;
      pFVar22->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar5 == (atomic<bool>)0x0) {
        LOCK();
        pFVar22->RefCount = (atomic<unsigned_int>)((int)pFVar22->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar22,0xd8);
      }
    }
    pFVar12 = (FTaskBase *)local_a0->_padding_;
    if (pFVar12 != pFVar22) {
      local_a0->_padding_ = (longlong)pFVar22;
      if (pFVar22 != (FTaskBase *)0x0) {
        LOCK();
        pFVar22->RefCount = (atomic<unsigned_int>)((int)pFVar22->RefCount + 1);
        UNLOCK();
      }
      if (pFVar12 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar12->RefCount;
        aVar6 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar6 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar12->_padding_)(pFVar12,1);
        }
      }
    }
    if (pFVar22 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar22->RefCount;
      aVar6 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar6 == (atomic<unsigned_int>)0x1) {
        puVar23 = (undefined8 *)pFVar22->_padding_;
LAB_14aae4fdf:
        (*(code *)*puVar23)(pFVar22,1);
      }
    }
LAB_14aae4fe6:
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return false;
}

