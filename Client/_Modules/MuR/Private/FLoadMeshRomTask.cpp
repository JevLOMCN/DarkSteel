// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// Complete @ 14aac02a0

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Complete
          (FLoadMeshRomTask *this,CodeRunner *param_1)

{
  FRomLoadOp *pFVar1;
  ForElementType<int> FVar2;
  short *psVar3;
  undefined4 uVar4;
  FModel *pFVar5;
  Private *pPVar6;
  Private *pPVar7;
  FModelReader *pFVar8;
  undefined1 *puVar9;
  code *pcVar10;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar11;
  FModelCacheEntry *pFVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  char cVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FSparseArrayAllocationInfo *pFVar23;
  ulonglong uVar24;
  FRomLoadOps *pFVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  ForElementType<int> FVar28;
  FRomLoadOp *pFVar29;
  ForElementType<int> FVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126 [6];
  uint local_120 [2];
  uint local_118;
  FRomLoadOps *local_110;
  ForElementType<int> local_108;
  ForElementType<int> local_100;
  TPairInitializer<unsigned_int_const_&,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_&&>
  local_f8;
  Private *local_e8;
  FModelCacheEntry *local_e0;
  uint *local_d8;
  FMesh **local_d0;
  FMesh *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FInputArchive local_b8;
  undefined8 local_98;
  byte *pbStack_90;
  TSharedPtr<UE::Mutable::Private::FMesh,1> local_88;
  FInputMemoryStream local_78;
  FSparseArrayAllocationInfo local_58;
  
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2126,"Mutable_FLoadMeshRomTask_Complete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x84e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2126);
  }
  if ((param_1 == (CodeRunner *)0x0) || (param_1->System == (Private *)0x0)) {
    bVar14 = false;
  }
  else {
    if (((param_1->Model).Object == (FModel *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      uVar15 = (*pcVar10)();
      return (bool)uVar15;
    }
    pFVar5 = (param_1->Model).Object;
    pPVar6 = pFVar5->m_pD;
    local_e8 = pPVar6;
    local_e0 = FWorkingMemoryManager::FindModelCache(&param_1->System->WorkingMemoryManager,pFVar5);
    FVar30 = (this->RomIndices).AllocatorInstance.SecondaryData;
    local_100 = (ForElementType<int>)&this->RomIndices;
    local_118 = (this->RomIndices).ArrayNum;
    uVar24 = (ulonglong)(int)local_118;
    bVar14 = false;
    if (FVar30 == (ForElementType<int>)0x0) {
      FVar30 = local_100;
    }
    local_f8.Value =
         (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)((longlong)FVar30 + uVar24 * 4);
    while( true ) {
      pTVar11 = local_f8.Value;
      FVar28 = local_100;
      local_108 = FVar30;
      if (*(int *)((longlong)local_100 + 0x18) != (uint)uVar24) {
        local_128 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_128);
      }
      if (FVar30 == (ForElementType<int>)pTVar11) break;
      uVar20 = *(uint *)FVar30;
      pFVar25 = &param_1->RomLoadOps;
      iVar19 = (param_1->RomLoadOps).RomLoadOps.ArrayNum;
      pFVar29 = (FRomLoadOp *)(pFVar25->RomLoadOps).AllocatorInstance.Data;
      pFVar1 = pFVar29 + iVar19;
      local_110 = pFVar25;
      while( true ) {
        if ((pFVar25->RomLoadOps).ArrayNum != iVar19) {
          local_127 = 0;
          `TCheckedPointerIterator<UE::Mutable::Private::CodeRunner::FRomLoadOp,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_127);
          pFVar25 = local_110;
        }
        if (pFVar29 == pFVar1) goto LAB_14aac07a6;
        if (pFVar29->RomIndex == uVar20) break;
        pFVar29 = pFVar29 + 1;
      }
      pPVar7 = param_1->System;
      if (((pPVar7->StreamInterface).Object == (FModelReader *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        uVar15 = (*pcVar10)();
        return (bool)uVar15;
      }
      pFVar8 = (pPVar7->StreamInterface).Object;
      cVar17 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8,pFVar29->m_streamID);
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2144,"Mutable_Unserialise",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                   ,0x860);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2144);
      }
      if (cVar17 == '\0') {
        bVar14 = true;
      }
      else {
        FInputMemoryStream::FInputMemoryStream
                  (&local_78,(void *)(pFVar29->m_streamBuffer).AllocatorInstance._padding_,
                   (longlong)(pFVar29->m_streamBuffer).ArrayNum);
        FInputArchive::FInputArchive(&local_b8,(FInputStream *)&local_78);
        FMesh::StaticUnserialise(&local_88,&local_b8);
        uVar21 = 0;
        if ((int)uVar20 < (pPVar6->Program).Roms.ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        local_120[0] = uVar20;
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        if (((*(uint *)((pPVar6->Program).Roms.AllocatorInstance.Data + (longlong)(int)uVar20 * 4) &
             0x40000000) == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Roms[RomIndex].ResourceType == uint32(ERomDataType::Mesh)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                ,0x202,L""), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        if (*(int *)&(pPVar6->Program).ConstantMeshesStreamed.field_0x8 !=
            *(int *)&(pPVar6->Program).ConstantMeshesStreamed.field_0x34) {
          puVar9 = *(undefined1 **)&(pPVar6->Program).ConstantMeshesStreamed.field_0x40;
          puVar26 = &(pPVar6->Program).ConstantMeshesStreamed.field_0x38;
          if (puVar9 != (undefined1 *)0x0) {
            puVar26 = puVar9;
          }
          iVar19 = *(int *)(puVar26 +
                           (ulonglong)
                           (*(int *)&(pPVar6->Program).ConstantMeshesStreamed.field_0x48 - 1U &
                           local_120[0]) * 4);
          if (iVar19 != -1) {
            lVar31 = *(longlong *)&(pPVar6->Program).ConstantMeshesStreamed;
            do {
              if (*(uint *)((longlong)iVar19 * 0x20 + lVar31) == local_120[0]) {
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!ConstantMeshesStreamed.Contains(RomIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                                    ,0x203,L"");
                if (bVar18) {
                  pcVar10 = (code *)swi(3);
                  uVar15 = (*pcVar10)();
                  return (bool)uVar15;
                }
                break;
              }
              iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + lVar31);
            } while (iVar19 != -1);
          }
        }
        lVar31 = (longlong)(int)local_120[0];
        uVar20 = 0;
        if ((int)local_120[0] < (pPVar6->Program).Roms.ArrayNum) {
          uVar20 = ~local_120[0] >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        uVar20 = local_120[0];
        uVar4 = *(undefined4 *)((pPVar6->Program).Roms.AllocatorInstance.Data + lVar31 * 4);
        lVar31 = (longlong)(int)local_120[0];
        if (((int)local_120[0] < 0) ||
           (*(int *)&(pPVar6->Program).LoadedMemTrackedRoms.field_0x28 <= (int)local_120[0])) {
LAB_14aac06d7:
          pFVar23 = TSparseArrayBase<1,1,FDefaultSparseArrayAllocator>::InsertUninitialized
                              ((TSparseArrayBase<1,1,FDefaultSparseArrayAllocator> *)
                               &(pPVar6->Program).LoadedMemTrackedRoms,&local_58,uVar20);
          local_98 = *(undefined8 *)pFVar23;
          pbStack_90 = pFVar23->Pointer;
          pbVar27 = pFVar23->Pointer;
        }
        else {
          if ((*(int *)&(pPVar6->Program).LoadedMemTrackedRoms.field_0x28 <= (int)local_120[0]) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return (bool)uVar15;
          }
          puVar9 = *(undefined1 **)&(pPVar6->Program).LoadedMemTrackedRoms.field_0x20;
          puVar26 = &(pPVar6->Program).LoadedMemTrackedRoms.field_0x10;
          if (puVar9 != (undefined1 *)0x0) {
            puVar26 = puVar9;
          }
          uVar21 = uVar20;
          if ((int)uVar20 < 0) {
            uVar21 = uVar20 + 0x1f;
          }
          if ((*(uint *)(puVar26 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar20 & 0x1f) & 1) == 0)
          goto LAB_14aac06d7;
          pbVar27 = (byte *)(*(longlong *)&(pPVar6->Program).LoadedMemTrackedRoms + lVar31 * 8);
          pbStack_90 = pbVar27;
        }
        FVar13.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
        if (pbVar27 != (byte *)0x0) {
          *pbVar27 = (byte)((uint)uVar4 >> 0x1e) & 1;
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
        local_d8 = local_120;
        local_d0 = &local_c8;
        TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<unsigned_int_const_&,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_&&>_>
                  ((TSet<TTuple<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<UE::Mutable::Private::FMesh_const_,1>,0>,FDefaultSetAllocator>
                    *)&(pPVar6->Program).ConstantMeshesStreamed,&local_f8,(bool *)&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar13.ReferenceController);
        local_b8._padding_ = (longlong)&___7FInputArchive_Private_Mutable_UE__6B_;
        DestructItems<TSharedPtr<void,1>,int>
                  ((TSharedPtr<void,1> *)local_b8.History.AllocatorInstance.Data,
                   local_b8.History.ArrayNum);
        if ((TSharedPtr<void,1> *)local_b8.History.AllocatorInstance.Data !=
            (TSharedPtr<void,1> *)0x0) {
          FMemory::Free(local_b8.History.AllocatorInstance.Data);
        }
        local_78._padding_ = (longlong)&___7FInputStream_Private_Mutable_UE__6B_;
        FVar30 = local_108;
      }
      FRomLoadOps::Remove(local_110,pFVar29);
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_14aac07a6:
      FVar30 = (ForElementType<int>)((longlong)FVar30 + 4);
      uVar24 = (ulonglong)local_118;
    }
    if ((bVar14) && (5 < (byte)LogMutableCore._0_1_)) {
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMutableCore);
    }
    bVar14 = RunCode_ConstantResource
                       (param_1,(FScheduledOp *)&this->_padding_,(param_1->Model).Object);
    pFVar12 = local_e0;
    pPVar6 = local_e8;
    if (bVar14) {
      FVar30 = (this->RomIndices).AllocatorInstance.SecondaryData;
      uVar20 = *(int *)((longlong)FVar28 + 0x18);
      if (FVar30 == (ForElementType<int>)0x0) {
        FVar30 = FVar28;
      }
      FVar2 = (ForElementType<int>)((longlong)FVar30 + (longlong)(int)uVar20 * 4);
      while( true ) {
        if (*(int *)((longlong)FVar28 + 0x18) != uVar20) {
          local_126[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_126);
        }
        if (FVar30 == FVar2) break;
        uVar21 = *(uint *)FVar30;
        if (((pPVar6->Program).Roms.ArrayNum <= (int)uVar21) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("RomIndex < Program.Roms.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                ,0x881,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        FWorkingMemoryManager::MarkRomUsed
                  (&param_1->System->WorkingMemoryManager,uVar21,&param_1->Model);
        uVar22 = 0;
        if ((int)uVar21 < (pFVar12->PendingOpsPerRom).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        psVar3 = (short *)((pFVar12->PendingOpsPerRom).AllocatorInstance._padding_ +
                          (longlong)(int)uVar21 * 2);
        *psVar3 = *psVar3 + -1;
        FVar30 = (ForElementType<int>)((longlong)FVar30 + 4);
        FVar28 = local_100;
      }
    }
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

// Prepare @ 14aae5050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare
          (FLoadMeshRomTask *this,CodeRunner *param_1,bool *param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  short *psVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<int> *pFVar5;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *pTVar6;
  atomic<bool> aVar7;
  atomic<unsigned_int> aVar8;
  EMeshContentFlags EVar9;
  Private *pPVar10;
  undefined1 *puVar11;
  Private *pPVar12;
  FModelReader *pFVar13;
  code *pcVar14;
  undefined4 uVar15;
  CodeRunner *pCVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  ForElementType<int> FVar20;
  FRomLoadOp *pFVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined ***pppuVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint uVar28;
  ForElementType<int> FVar29;
  FScriptContainerElement *pFVar30;
  code **ppcVar31;
  ForElementType<int> FVar32;
  bool bVar33;
  undefined1 auStack_178 [32];
  ForElementType<int> local_158;
  ForElementType<int> local_150;
  code **local_148;
  longlong local_140;
  undefined8 local_138;
  ForElementType<int> local_128;
  CodeRunner *local_110;
  FLoadMeshRomTask *local_108;
  ForElementType<int> local_100;
  uint local_f8;
  FModelCacheEntry *local_f0;
  ForElementType<int> local_e8;
  bool *local_e0;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> *local_d8;
  ForElementType<int> local_d0;
  uint local_b8;
  uint local_b4;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b0;
  code *local_78 [2];
  undefined **local_68;
  ForElementType<int> local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar33 = -1 < CpuChannel->Enabled;
  local_110 = param_1;
  local_108 = this;
  local_e0 = param_2;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1986,"Mutable_FLoadMeshRomTask_Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
               ,0x7c2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1986);
  }
  if ((param_1 != (CodeRunner *)0x0) && (param_1->System != (Private *)0x0)) {
    pTVar6 = &param_1->Model;
    *local_e0 = false;
    local_d8 = pTVar6;
    if ((pTVar6->Object == (FModel *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar14 = (code *)swi(3);
      uVar18 = (*pcVar14)();
      return (bool)uVar18;
    }
    pPVar10 = pTVar6->Object->m_pD;
    local_f0 = FWorkingMemoryManager::FindModelCache
                         (&param_1->System->WorkingMemoryManager,pTVar6->Object);
    local_b0.AllocatorInstance.SecondaryData = (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 4;
    local_d0.SecondaryData = (ForElementType<int>)0x0;
    local_b8 = 0;
    local_b4 = 4;
    local_128.InlineData[0] = '\0';
    local_128.InlineData[1] = '\0';
    local_128.InlineData[2] = '\0';
    local_128.InlineData[3] = '\0';
    if (((this->ExecutionContentFlags & GeometryData) != None) &&
       ((this->RomContentFlags & GeometryData) != None)) {
      if ((&local_d0 <= &local_128) && (&local_128 < &local_d0.SecondaryData)) {
        local_138 = 4;
        local_150 = (ForElementType<int>)&local_d0;
        local_140 = 0;
        local_148 = (code **)&DAT_00000004;
        local_158 = (ForElementType<int>)&local_128;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar14 = (code *)swi(3);
          uVar18 = (*pcVar14)();
          return (bool)uVar18;
        }
        if (local_b8 == local_b4) {
          local_b8 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_d0,(int *)&local_b4);
        }
      }
      lVar23 = (longlong)(int)local_b8;
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      local_b8 = local_b8 + 1;
      *(undefined4 *)((longlong)FVar29 + lVar23 * 4) = local_128.InlineData._0_4_;
    }
    local_128.InlineData._0_4_ = local_128.InlineData._0_4_ + (this->RomContentFlags & 1);
    if (((this->ExecutionContentFlags & PoseData) != None) &&
       ((this->RomContentFlags & PoseData) != None)) {
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      if ((ulonglong)FVar29 <= &local_128) {
        FVar29 = (ForElementType<int>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
          FVar29 = local_d0.SecondaryData;
        }
        if (&local_128 < (ForElementType<int> *)((longlong)FVar29 + (longlong)(int)local_b4 * 4)) {
          local_140 = (longlong)(int)local_b8;
          local_138 = 4;
          local_158 = (ForElementType<int>)&local_128;
          local_150 = (ForElementType<int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
            local_150 = local_d0.SecondaryData;
          }
          local_148 = (code **)(longlong)(int)local_b4;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
        }
      }
      if (local_b8 == local_b4) {
        local_b8 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_d0,(int *)&local_b4);
      }
      lVar23 = (longlong)(int)local_b8;
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      local_b8 = local_b8 + 1;
      *(undefined4 *)((longlong)FVar29 + lVar23 * 4) = local_128.InlineData._0_4_;
    }
    local_128.InlineData._0_4_ = local_128.InlineData._0_4_ + (this->RomContentFlags >> 1 & 1);
    if (((this->ExecutionContentFlags & PhysicsData) != None) &&
       ((this->RomContentFlags & PhysicsData) != None)) {
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      if ((ulonglong)FVar29 <= &local_128) {
        FVar29 = (ForElementType<int>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
          FVar29 = local_d0.SecondaryData;
        }
        if (&local_128 < (ForElementType<int> *)((longlong)FVar29 + (longlong)(int)local_b4 * 4)) {
          local_140 = (longlong)(int)local_b8;
          local_138 = 4;
          local_158 = (ForElementType<int>)&local_128;
          local_150 = (ForElementType<int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
            local_150 = local_d0.SecondaryData;
          }
          local_148 = (code **)(longlong)(int)local_b4;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
        }
      }
      if (local_b8 == local_b4) {
        local_b8 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_d0,(int *)&local_b4);
      }
      lVar23 = (longlong)(int)local_b8;
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      local_b8 = local_b8 + 1;
      *(undefined4 *)((longlong)FVar29 + lVar23 * 4) = local_128.InlineData._0_4_;
    }
    local_128.InlineData._0_4_ = local_128.InlineData._0_4_ + (this->RomContentFlags >> 2 & 1);
    if (((this->ExecutionContentFlags & LastFlag) != None) &&
       ((this->RomContentFlags & LastFlag) != None)) {
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      if ((ulonglong)FVar29 <= &local_128) {
        FVar29 = (ForElementType<int>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
          FVar29 = local_d0.SecondaryData;
        }
        if (&local_128 < (ForElementType<int> *)((longlong)FVar29 + (longlong)(int)local_b4 * 4)) {
          local_140 = (longlong)(int)local_b8;
          local_138 = 4;
          local_158 = (ForElementType<int>)&local_128;
          local_150 = (ForElementType<int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
            local_150 = local_d0.SecondaryData;
          }
          local_148 = (code **)(longlong)(int)local_b4;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
        }
      }
      if (local_b8 == local_b4) {
        local_b8 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_d0,(int *)&local_b4);
      }
      lVar23 = (longlong)(int)local_b8;
      FVar29 = (ForElementType<int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
        FVar29 = local_d0.SecondaryData;
      }
      local_b8 = local_b8 + 1;
      *(undefined4 *)((longlong)FVar29 + lVar23 * 4) = local_128.InlineData._0_4_;
    }
    EVar9 = this->RomContentFlags;
    local_128.InlineData._0_4_ = local_128.InlineData._0_4_ + (EVar9 >> 3 & 1);
    uVar24 = (ulonglong)EVar9 - ((ulonglong)(EVar9 >> 1) & 0x5555555555555555);
    uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
    if ((local_128.InlineData._0_4_ !=
         (uint)(byte)(((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("RomContentIndex == FMath::CountBits((uint64)RomContentFlags)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                            ,0x7f6,L""), bVar17)) {
      pcVar14 = (code *)swi(3);
      uVar18 = (*pcVar14)();
      return (bool)uVar18;
    }
    uVar24 = (ulonglong)(int)local_b8;
    local_f8 = local_b8;
    FVar29 = (ForElementType<int>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
      FVar29 = local_d0.SecondaryData;
    }
    local_100 = (ForElementType<int>)((longlong)FVar29 + uVar24 * 4);
    FVar32 = local_100;
    while( true ) {
      local_e8 = FVar29;
      if (local_b8 != (uint)uVar24) {
        local_128.InlineData[8] = '\0';
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_128.InlineData + 8);
      }
      if (FVar29 == FVar32) break;
      uVar28 = *(int *)FVar29 + this->FirstIndex;
      iVar19 = (pPVar10->Program).ConstantMeshContentIndices.ArrayNum;
      uVar26 = 0;
      if ((int)uVar28 < iVar19) {
        uVar26 = ~uVar28 >> 0x1f;
      }
      if (uVar26 == 0) {
        local_158 = (ForElementType<int>)(longlong)(int)uVar28;
        local_150 = (ForElementType<int>)(longlong)iVar19;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar14 = (code *)swi(3);
          uVar18 = (*pcVar14)();
          return (bool)uVar18;
        }
      }
      uVar26 = *(uint *)((pPVar10->Program).ConstantMeshContentIndices.AllocatorInstance.Data +
                        (longlong)(int)uVar28 * 4);
      if ((int)uVar26 < 0) {
        local_128.InlineData._4_4_ = uVar26 & 0x7fffffff;
        if (((pPVar10->Program).Roms.ArrayNum <= (int)local_128.InlineData._4_4_) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("RomIndex < Program.Roms.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                ,0x805,L""), bVar17)) {
          pcVar14 = (code *)swi(3);
          uVar18 = (*pcVar14)();
          return (bool)uVar18;
        }
        FVar29 = (ForElementType<int>)(longlong)(int)local_128.InlineData._4_4_;
        iVar19 = (local_f0->PendingOpsPerRom).ArrayNum;
        uVar26 = 0;
        if ((int)local_128.InlineData._4_4_ < iVar19) {
          uVar26 = (uint)~local_128.InlineData._4_4_ >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (local_158 = FVar29, local_150 = (ForElementType<int>)(longlong)iVar19,
           bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar17)) {
          pcVar14 = (code *)swi(3);
          uVar18 = (*pcVar14)();
          return (bool)uVar18;
        }
        uVar15 = local_128.InlineData._4_4_;
        psVar3 = (short *)((local_f0->PendingOpsPerRom).AllocatorInstance._padding_ +
                          (longlong)FVar29 * 2);
        *psVar3 = *psVar3 + 1;
        iVar19 = (pPVar10->Program).Roms.ArrayNum;
        uVar26 = 0;
        if ((int)local_128.InlineData._4_4_ < iVar19) {
          uVar26 = (uint)~local_128.InlineData._4_4_ >> 0x1f;
        }
        if (uVar26 == 0) {
          local_158 = (ForElementType<int>)(longlong)(int)local_128.InlineData._4_4_;
          local_150 = (ForElementType<int>)(longlong)iVar19;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
        }
        uVar26 = *(uint *)((pPVar10->Program).Roms.AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 4) >> 0x1e & 1;
        if (uVar26 == 0) {
          if (*(int *)&(pPVar10->Program).ConstantImageLODsStreamed.field_0x8 !=
              *(int *)&(pPVar10->Program).ConstantImageLODsStreamed.field_0x34) {
            puVar11 = *(undefined1 **)&(pPVar10->Program).ConstantImageLODsStreamed.field_0x40;
            puVar27 = &(pPVar10->Program).ConstantImageLODsStreamed.field_0x38;
            if (puVar11 != (undefined1 *)0x0) {
              puVar27 = puVar11;
            }
            iVar19 = *(int *)(puVar27 +
                             (ulonglong)
                             (*(int *)&(pPVar10->Program).ConstantImageLODsStreamed.field_0x48 - 1U
                             & uVar15) * 4);
            if (iVar19 != -1) {
              lVar23 = *(longlong *)&(pPVar10->Program).ConstantImageLODsStreamed;
              do {
                if (*(uint *)((longlong)iVar19 * 0x20 + lVar23) == uVar15) goto LAB_14aae584b;
                iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + lVar23);
              } while (iVar19 != -1);
            }
          }
LAB_14aae5849:
          iVar19 = -1;
LAB_14aae584b:
          if (iVar19 != -1) goto LAB_14aae5d7a;
        }
        else {
          if (uVar26 == 1) {
            if (*(int *)&(pPVar10->Program).ConstantMeshesStreamed.field_0x8 !=
                *(int *)&(pPVar10->Program).ConstantMeshesStreamed.field_0x34) {
              puVar11 = *(undefined1 **)&(pPVar10->Program).ConstantMeshesStreamed.field_0x40;
              puVar27 = &(pPVar10->Program).ConstantMeshesStreamed.field_0x38;
              if (puVar11 != (undefined1 *)0x0) {
                puVar27 = puVar11;
              }
              iVar19 = *(int *)(puVar27 +
                               (ulonglong)
                               (*(int *)&(pPVar10->Program).ConstantMeshesStreamed.field_0x48 - 1U &
                               uVar15) * 4);
              if (iVar19 != -1) {
                lVar23 = *(longlong *)&(pPVar10->Program).ConstantMeshesStreamed;
                do {
                  if (*(uint *)((longlong)iVar19 * 0x20 + lVar23) == uVar15) goto LAB_14aae584b;
                  iVar19 = *(int *)((longlong)iVar19 * 0x20 + 0x18 + lVar23);
                } while (iVar19 != -1);
              }
            }
            goto LAB_14aae5849;
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\ModelPrivate.h"
                              ,0x1cf,L"");
          if (bVar17) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
        }
        FVar32 = (this->RomIndices).AllocatorInstance.SecondaryData;
        FVar29 = (ForElementType<int>)&this->RomIndices;
        FVar20 = FVar29;
        if (FVar32 != (ForElementType<int>)0x0) {
          FVar20 = FVar32;
        }
        if ((ulonglong)FVar20 <= (longlong)local_128.InlineData + 4U) {
          ppcVar31 = (code **)(longlong)(this->RomIndices).ArrayMax;
          FVar20 = FVar29;
          if (FVar32 != (ForElementType<int>)0x0) {
            FVar20 = FVar32;
          }
          if (local_128.InlineData + 4 < (int *)((longlong)FVar20 + (longlong)ppcVar31 * 4)) {
            local_140 = (longlong)(this->RomIndices).ArrayNum;
            local_138 = 4;
            local_150 = FVar29;
            if (FVar32 != (ForElementType<int>)0x0) {
              local_150 = FVar32;
            }
            local_158 = (ForElementType<int>)((longlong)local_128.InlineData + 4);
            local_148 = ppcVar31;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar17) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
          }
        }
        iVar19 = (this->RomIndices).ArrayNum;
        piVar1 = &(this->RomIndices).ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,(ForElementType<int> *)FVar29,piVar1);
        }
        uVar15 = local_128.InlineData._4_4_;
        (this->RomIndices).ArrayNum = iVar19 + 1;
        FVar32 = (this->RomIndices).AllocatorInstance.SecondaryData;
        if (FVar32 != (ForElementType<int>)0x0) {
          FVar29 = FVar32;
        }
        *(undefined4 *)((longlong)FVar29 + (longlong)iVar19 * 4) = local_128.InlineData._4_4_;
        iVar19 = (param_1->RomLoadOps).RomLoadOps.ArrayNum;
        pFVar30 = (param_1->RomLoadOps).RomLoadOps.AllocatorInstance.Data;
        pFVar4 = pFVar30 + (longlong)iVar19 * 0x28;
        while( true ) {
          if ((param_1->RomLoadOps).RomLoadOps.ArrayNum != iVar19) {
            local_128.InlineData[9] = '\0';
            `TCheckedPointerIterator<UE::Mutable::Private::CodeRunner::FRomLoadOp,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_128.InlineData + 9);
          }
          if (pFVar30 == pFVar4) {
            pFVar21 = FRomLoadOps::Create(&param_1->RomLoadOps,local_128.InlineData._4_4_);
            pCVar16 = local_110;
            if (((local_110->System->StreamInterface).Object == (FModelReader *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Runner->System->StreamInterface",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                    ,0x81d,L""), bVar17)) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
            FVar29 = (ForElementType<int>)(longlong)(int)local_128.InlineData._4_4_;
            iVar19 = (pPVar10->Program).Roms.ArrayNum;
            uVar26 = 0;
            if ((int)local_128.InlineData._4_4_ < iVar19) {
              uVar26 = (uint)~local_128.InlineData._4_4_ >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (local_158 = FVar29, local_150 = (ForElementType<int>)(longlong)iVar19,
               bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
            uVar26 = *(uint *)((pPVar10->Program).Roms.AllocatorInstance.Data + (longlong)FVar29 * 4
                              ) & 0x3fffffff;
            if ((uVar26 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RomSize > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\CodeRunnerTasked.cpp"
                                    ,0x820,L""), bVar17)) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
            FWorkingMemoryManager::MarkRomUsed
                      (&pCVar16->System->WorkingMemoryManager,local_128.InlineData._4_4_,
                       &pCVar16->Model);
            FVar32._4_4_ = 0;
            FVar32._0_4_ = uVar26;
            FWorkingMemoryManager::EnsureBudgetBelow
                      (&pCVar16->System->WorkingMemoryManager,(ulonglong)uVar26);
            TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FStreamingMemoryCounter>_>
            ::SetNumUninitialized(&pFVar21->m_streamBuffer,uVar26,Default);
            local_128.SecondaryData =
                 (ForElementType<int>)
                 Tasks::Private::FTaskEventBase::Create(L"FLoadMeshRomsTaskRom");
            FVar29 = (ForElementType<int>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
              FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar29 <= &local_128.SecondaryData) {
              FVar29 = (ForElementType<int>)&local_b0;
              if (local_b0.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
                FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
              }
              if (&local_128.SecondaryData <
                  (longlong *)((longlong)FVar29 + (longlong)local_b0.ArrayMax * 8)) {
                local_140 = (longlong)local_b0.ArrayNum;
                local_138 = 8;
                local_158 = (ForElementType<int>)&local_128.SecondaryData;
                local_150 = (ForElementType<int>)&local_b0;
                if (local_b0.AllocatorInstance.SecondaryData !=
                    (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
                  local_150 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
                }
                local_148 = (code **)(longlong)local_b0.ArrayMax;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar17) {
                  pcVar14 = (code *)swi(3);
                  uVar18 = (*pcVar14)();
                  return (bool)uVar18;
                }
              }
            }
            if (local_b0.ArrayNum == local_b0.ArrayMax) {
              local_b0.ArrayNum =
                   Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                             (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
            }
            FVar29 = (ForElementType<int>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
              FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
            }
            pFVar5 = (ForElementType<int> *)((longlong)FVar29 + (longlong)local_b0.ArrayNum * 8);
            local_b0.ArrayNum = local_b0.ArrayNum + 1;
            *pFVar5 = (ForElementType<int>)0x0;
            *pFVar5 = local_128.SecondaryData;
            if (local_128.SecondaryData != (ForElementType<int>)0x0) {
              LOCK();
              *(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) =
                   (atomic<unsigned_int>)
                   ((int)*(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) + 1);
              UNLOCK();
            }
            FVar29 = (ForElementType<int>)(pFVar21->Event).Pimpl.Reference;
            if (FVar29 != local_128.SecondaryData) {
              (pFVar21->Event).Pimpl.Reference = (FTaskBase *)local_128.SecondaryData;
              if (local_128.SecondaryData != (ForElementType<int>)0x0) {
                LOCK();
                *(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) =
                     (atomic<unsigned_int>)
                     ((int)*(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) + 1);
                UNLOCK();
              }
              if (FVar29 != (ForElementType<int>)0x0) {
                LOCK();
                paVar2 = (atomic<unsigned_int> *)((longlong)FVar29 + 0x30);
                aVar8 = *paVar2;
                *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar8 == (atomic<unsigned_int>)0x1) {
                  (*(code *)**(undefined8 **)FVar29)(FVar29,1);
                }
              }
            }
            uVar15 = local_128.InlineData._4_4_;
            if (local_128.SecondaryData != (ForElementType<int>)0x0) {
              LOCK();
              *(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) =
                   (atomic<unsigned_int>)
                   ((int)*(atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30) + 1);
              UNLOCK();
            }
            local_60 = local_128.SecondaryData;
            local_50 = (undefined ***)0x0;
            pPVar12 = local_110->System;
            local_68 = &Core::Private::Function::
                        TFunction_OwnedObject<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::`28'::<lambda_1>,0,0>
                        ::_vftable_;
            local_78[0] = Core::Private::Function::
                          TFunctionRefCaller<`UE::Mutable::Private::CodeRunner::FLoadMeshRomTask::Prepare'::__l28::<lambda_1>,void,bool>
                          ::Call;
            if (((pPVar12->StreamInterface).Object == (FModelReader *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
            pFVar13 = (pPVar12->StreamInterface).Object;
            local_150._0_1_ = 7;
            local_158 = FVar32;
            local_148 = local_78;
            iVar19 = (**(code **)((longlong)*pFVar13 + 0x10))
                               (pFVar13,local_d8->Object,uVar15,
                                (pFVar21->m_streamBuffer).AllocatorInstance._padding_);
            pFVar21->m_streamID = iVar19;
            if (-1 < iVar19) {
              if (local_78[0] != (code *)0x0) {
                pppuVar25 = &local_68;
                if (local_50 != (undefined ***)0x0) {
                  pppuVar25 = local_50;
                }
                (*(code *)(*pppuVar25)[2])();
              }
              param_1 = local_110;
              this = local_108;
              FVar32 = local_100;
              if (local_128.SecondaryData != (ForElementType<int>)0x0) {
                LOCK();
                paVar2 = (atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30);
                aVar8 = *paVar2;
                *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
                UNLOCK();
                if (aVar8 == (atomic<unsigned_int>)0x1) {
                  (*(code *)**(undefined8 **)local_128.SecondaryData)(local_128.SecondaryData,1);
                  param_1 = local_110;
                  this = local_108;
                  FVar32 = local_100;
                }
              }
              goto LAB_14aae5d7a;
            }
            *local_e0 = true;
            if (local_78[0] != (code *)0x0) {
              pppuVar25 = &local_68;
              if (local_50 != (undefined ***)0x0) {
                pppuVar25 = local_50;
              }
              (*(code *)(*pppuVar25)[2])();
            }
            if (local_128.SecondaryData == (ForElementType<int>)0x0) goto LAB_14aae5e71;
            LOCK();
            paVar2 = (atomic<unsigned_int> *)((longlong)local_128.SecondaryData + 0x30);
            aVar8 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar8 != (atomic<unsigned_int>)0x1) goto LAB_14aae5e71;
            puVar22 = *(undefined8 **)local_128.SecondaryData;
            FVar29 = local_128.SecondaryData;
            goto LAB_14aae5e6a;
          }
          if (*(uint *)pFVar30 == uVar15) break;
          pFVar30 = pFVar30 + 0x28;
        }
        FVar32 = (ForElementType<int>)((longlong)pFVar30 + 0x20);
        FVar29 = (ForElementType<int>)&local_b0;
        if (local_b0.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
          FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar29 <= (ulonglong)FVar32) {
          FVar29 = (ForElementType<int>)&local_b0;
          if (local_b0.AllocatorInstance.SecondaryData !=
              (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
            FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar32 < (ulonglong)((longlong)FVar29 + (longlong)local_b0.ArrayMax * 8)) {
            local_140 = (longlong)local_b0.ArrayNum;
            local_138 = 8;
            local_150 = (ForElementType<int>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
              local_150 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
            }
            local_158 = FVar32;
            local_148 = (code **)(longlong)local_b0.ArrayMax;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar17) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
          }
        }
        iVar19 = local_b0.ArrayNum;
        if (local_b0.ArrayNum == local_b0.ArrayMax) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Tasks::Private::FTaskHandle>_>
                             (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
        }
        local_b0.ArrayNum = iVar19 + 1;
        FVar29 = (ForElementType<int>)&local_b0;
        if (local_b0.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
          FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
        }
        *(longlong *)((longlong)FVar29 + (longlong)iVar19 * 8) = 0;
        lVar23 = *(longlong *)FVar32;
        *(longlong *)((longlong)FVar29 + (longlong)iVar19 * 8) = lVar23;
        param_1 = local_110;
        this = local_108;
        FVar32 = local_100;
        if (lVar23 == 0) goto LAB_14aae5d7a;
        LOCK();
        *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
        UNLOCK();
        uVar24 = (ulonglong)local_f8;
        FVar29 = (ForElementType<int>)((longlong)local_e8 + 4);
      }
      else {
LAB_14aae5d7a:
        uVar24 = (ulonglong)local_f8;
        FVar29 = (ForElementType<int>)((longlong)local_e8 + 4);
      }
    }
    FVar29 = (ForElementType<int>)Tasks::Private::FTaskEventBase::Create(L"FLoadMeshRomsTask");
    Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<UE::Tasks::Private::FTaskHandle,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
              ((FTaskBase *)FVar29,&local_b0,true);
    if ((FVar29 != (ForElementType<int>)0x0) &&
       (((atomic<bool> *)((longlong)FVar29 + 0xd0))->field_0x0 == '\0')) {
      LOCK();
      aVar7 = *(atomic<bool> *)((longlong)FVar29 + 0x45);
      *(atomic<bool> *)((longlong)FVar29 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar7 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar29 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar29 + 0x30) + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar29,0xd8);
      }
    }
    FVar32 = (ForElementType<int>)this->_padding_;
    if (FVar32 != FVar29) {
      this->_padding_ = (longlong)FVar29;
      if (FVar29 != (ForElementType<int>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar29 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar29 + 0x30) + 1);
        UNLOCK();
      }
      if (FVar32 != (ForElementType<int>)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)FVar32 + 0x30);
        aVar8 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar8 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)FVar32)(FVar32,1);
        }
      }
    }
    if (FVar29 != (ForElementType<int>)0x0) {
      LOCK();
      paVar2 = (atomic<unsigned_int> *)((longlong)FVar29 + 0x30);
      aVar8 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar8 == (atomic<unsigned_int>)0x1) {
        puVar22 = *(undefined8 **)FVar29;
LAB_14aae5e6a:
        (*(code *)*puVar22)(FVar29,1);
      }
    }
LAB_14aae5e71:
    if (local_d0.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_d0.SecondaryData);
    }
    FVar29 = (ForElementType<int>)&local_b0;
    if (local_b0.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FVar29 = (ForElementType<int>)local_b0.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)FVar29,local_b0.ArrayNum);
    if (local_b0.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Tasks::Private::FTaskHandle>)0x0) {
      FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return false;
}

