// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 33

// StaticStruct @ 1461015b0

UScriptStruct * __cdecl FMovieSceneEntitySystemGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph,(UObject *)pUVar1,
                         L"MovieSceneEntitySystemGraph");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEntitySystemGraph.OuterSingleton;
}

// ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_> @ 146108330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_2,
          UMovieSceneEntitySystemLinker *param_3,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> **ppTVar2;
  ESystemPhase EVar3;
  ushort uVar4;
  longlong lVar5;
  FName FVar6;
  undefined1 *puVar7;
  FSystemTaskPrerequisites *pFVar8;
  code *pcVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UMovieSceneEntitySystemLinker *pUVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar21;
  ulonglong uVar22;
  TReferenceControllerBase<1> *pTVar23;
  ForElementType<unsigned_short> FVar24;
  ForElementType<unsigned_short> FVar25;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar26;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar27;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar28;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  FNameEntryId FVar33;
  uint uVar34;
  ulonglong uVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar36;
  EEntityThreadingModel EVar37;
  uint uVar38;
  FName FVar39;
  TReferenceControllerBase<1> *pTVar40;
  longlong lVar41;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  ESystemPhase local_1c6;
  char local_1c5;
  uint local_1c4;
  undefined2 local_1c0 [2];
  undefined2 local_1bc [2];
  ForElementType<unsigned_short> local_1b8;
  longlong local_1b0;
  FName local_1a8;
  FMovieSceneEntitySystemGraph *local_1a0;
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  ELockdownState local_188;
  FColor_u_0 local_184;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> local_180;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_178;
  TReferenceControllerBase<1> *local_168;
  FSharedReferencer<1> FStack_160;
  FName local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  FSystemSubsequentTasks local_138;
  UMovieSceneEntitySystemLinker *local_108;
  TReferenceControllerBase<1> *local_100;
  FMovieSceneEntitySystemGraph *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  FName local_e0;
  FSystemTaskPrerequisites local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c6 = param_1;
  local_1b8 = (ForElementType<unsigned_short>)param_2;
  local_1a0 = this;
  local_108 = param_3;
  local_1c5 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  bVar15 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar15) &&
     ((UE::MovieScene::GThreadedEvaluationAllocationThreshold <=
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x34 ||
      (UE::MovieScene::GThreadedEvaluationEntityThreshold <=
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x34)))) {
    EVar37 = TaskGraph;
  }
  else {
    EVar37 = NoThreading;
  }
  (param_3->EntityManager).ThreadingModel = EVar37;
  UE::MovieScene::FSystemSubsequentTasks::FSystemSubsequentTasks(&local_138,this,param_4,EVar37);
  pTVar12 = _UNK_150651568;
  pTVar11 = ___xmm_00000000000000000000000000000010;
  iVar30 = param_2->ArrayNum;
  local_188 = (param_3->EntityManager).LockdownState;
  local_d8.AllTasks.ArrayNum = 0;
  local_d8.Prereqs.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  local_d8.Prereqs.ArrayNum = 0;
  local_d8.Prereqs.ArrayMax = 4;
  local_d8.AllTasks.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_d8.AllTasks.ArrayMax = 4;
  local_1c4 = 0;
  if (0 < iVar30) {
    local_1b0 = 0;
    do {
      lVar41 = local_1b0;
      uVar22 = 0;
      uVar38 = 0;
      uVar32 = uVar38;
      if ((int)local_1c4 < iVar30) {
        uVar32 = ~local_1c4 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<unsigned_short>)param_2;
      if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
          (ForElementType<unsigned_short>)0x0) {
        FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
      }
      uVar4 = *(ushort *)((longlong)FVar24 + lVar41 * 2);
      lVar41 = (ulonglong)uVar4 * 0x28;
      FVar39 = *(FName *)(lVar41 + 0x20 + *(longlong *)&(this->Nodes).Array);
      local_1a8 = FVar39;
      UE::MovieScene::FSystemSubsequentTasks::ResetNode(&local_138,uVar4);
      lVar5 = *(longlong *)&(this->Nodes).Array;
      FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                (lVar41 + lVar5);
      local_100 = *(TReferenceControllerBase<1> **)(lVar41 + 8 + lVar5);
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar26 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = FVar27;
      }
      local_180 = FVar27;
      UMovieSceneEntitySystem::Run
                ((UMovieSceneEntitySystem *)FVar39,(FSystemTaskPrerequisites *)FVar26,&local_138);
      pUVar13 = local_108;
      if (((local_188 != Locked) && (local_108->AutoLinkMode == Enabled)) &&
         ((local_108->LastSystemLinkVersion == 0 ||
          (local_108->LastSystemLinkVersion <
           (local_108->EntityManager).StructureMutationSystemSerialNumber)))) {
        UMovieSceneEntitySystem::LinkRelevantSystems(local_108);
        pUVar13->LastSystemLinkVersion = (pUVar13->EntityManager).SystemSerialNumber;
      }
      if (this->SerialNumber != this->PreviousSerialNumber) {
        local_198.Data = (FScriptContainerElement *)0x0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
        }
        uVar32 = local_1c4 + 1;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        if (((FVar24 == (ForElementType<unsigned_short>)0x0) && (uVar32 != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x2d3,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_190 = uVar32;
        if (uVar32 == 0) {
          local_18c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar32,0,&local_198,uVar32,&local_18c);
          memcpy(local_198.Data,(void *)FVar24,(longlong)(int)uVar32 * 2);
        }
        UpdateCache(local_1a0);
        local_1c4 = 0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
        }
        local_1b0 = 0;
        uVar35 = uVar22;
        if (0 < (longlong)*(int *)((longlong)param_2 + 0x10)) {
          do {
            uVar32 = (uint)uVar35;
            if (*(ushort *)((longlong)FVar24 + local_1b0 * 2) == uVar4) {
              lVar41 = local_1b0;
              if (uVar32 == 0xffffffff) goto LAB_146108654;
              goto LAB_14610869e;
            }
            local_1c4 = uVar32 + 1;
            uVar35 = (ulonglong)local_1c4;
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < *(int *)((longlong)param_2 + 0x10));
        }
        uVar32 = 0xffffffff;
        local_1c4 = 0xffffffff;
        local_1b0 = -1;
LAB_146108654:
        lVar41 = local_1b0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                            ,0x1d2,
                            L"System has removed itself while being Run. This is not supported.");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_14610869e:
        FVar24 = local_1b8;
        uVar35 = uVar22;
        if (0 < (int)uVar32) {
          do {
            uVar34 = (uint)uVar22;
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            if (local_198.Data != local_198.Data + (longlong)(int)local_190 * 2) {
              FVar19.Data = local_198.Data;
              do {
                if (*(short *)FVar19.Data == *(short *)((longlong)FVar25 + uVar35 * 2))
                goto LAB_146108810;
                FVar19.Data = FVar19.Data + 2;
              } while (FVar19.Data != local_198.Data + (longlong)(int)local_190 * 2);
            }
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            local_1c0[0] = *(undefined2 *)((longlong)FVar25 + uVar35 * 2);
            uVar17 = uVar38;
            if ((int)uVar32 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar32 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            local_1bc[0] = *(undefined2 *)((longlong)FVar25 + lVar41 * 2);
            local_f8 = local_1a0;
            local_f0 = local_1c0;
            local_e8 = local_1bc;
            `FMovieSceneEntitySystemGraph::
            ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>'
            ::__l32::<lambda_1>::operator()(&local_f8);
LAB_146108810:
            uVar22 = (ulonglong)(uVar34 + 1);
            uVar35 = uVar35 + 1;
            FVar27 = local_180;
          } while ((int)(uVar34 + 1) < (int)uVar32);
        }
        FVar39 = local_1a8;
        param_2 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *
                  )local_1b8;
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
          FVar39 = local_1a8;
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
        }
      }
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                  ((longlong)FVar27 + 0x40);
        if (*(int *)((longlong)FVar27 + 0x4c) < 0) {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
          if (*(int *)((longlong)FVar27 + 0x4c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                 *)FVar27,0,(int *)((longlong)FVar27 + 0x4c));
          }
        }
        else {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
        }
        pFVar36 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)FVar27 + 0x70);
        pFVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar27 + 0x50);
        if (*(int *)((longlong)FVar27 + 0x7c) < 0) {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
          if (*(int *)((longlong)FVar27 + 0x7c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,0,pFVar28,0,(int *)((longlong)FVar27 + 0x7c));
          }
        }
        else {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
        }
      }
      if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
          local_138.Subsequents.Object !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
             local_138.Subsequents.Object ==
             (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((longlong)local_138.Subsequents.Object + 0x48) != 0) {
          FVar21 = StatPtr_MovieSceneEval_SystemDependencyCost;
          if (StatPtr_MovieSceneEval_SystemDependencyCost ==
              (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
            pFVar20 = ::FName::FName(&local_e0,"MovieSceneEval_SystemDependencyCost");
            FVar21 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_MovieSceneEval_SystemDependencyCost,*pFVar20,
                                L"System Dependency Cost","STATGROUP_MovieSceneECS",
                                "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,
                                ST_int64,true,false,MCR_Invalid);
          }
          FVar6 = *(FName *)FVar21;
          bVar15 = false;
          bVar10 = false;
          local_148.ComparisonIndex.Value = 0;
          local_148.Number = 0;
          bVar14 = false;
          bVar16 = false;
          FVar33 = FVar6.ComparisonIndex.Value;
          uVar32 = FVar6.Number;
          if ((FVar33.Value == 0) && (uVar32 == 0)) {
LAB_146108a72:
            bVar10 = bVar16;
            bVar15 = bVar14;
            bVar14 = false;
            local_1a8 = local_148;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_184.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
              bVar15 = false;
              bVar10 = true;
              bVar14 = false;
              bVar16 = true;
              if (-1 < CpuChannel->Enabled) {
                local_158.ComparisonIndex.Value = FVar33.Value;
                local_158.Number = uVar32;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_158,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                           ,0x1ef);
                bVar15 = true;
                bVar10 = true;
                bVar14 = true;
                bVar16 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_146108a72;
            local_1a8 = FVar6;
            local_150 = FVar33.Value;
            uStack_14c = uVar32;
            local_148 = FVar6;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            bVar14 = true;
          }
          local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.ArrayNum = 0;
          local_178.ArrayMax = 0;
          UMovieSceneEntitySystem::GetSubsequentSystems
                    (*(ushort *)((longlong)FVar39 + 0x36),&local_178);
          iVar30 = local_178.ArrayNum;
          FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                   ((longlong)local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 2);
          FVar19.Data = local_178.AllocatorInstance.Data;
          local_180 = FVar27;
          while( true ) {
            if (local_178.ArrayNum != iVar30) {
              local_1c7 = 0;
              `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1c7);
            }
            FVar39 = local_1a8;
            if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)FVar19.Data
                == FVar27) break;
            if (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x8 ==
                *(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x34) {
LAB_146108cd8:
              FVar19.Data = FVar19.Data + 2;
            }
            else {
              puVar7 = *(undefined1 **)&(local_1a0->GlobalToLocalNodeIDs).field_0x40;
              puVar31 = &(local_1a0->GlobalToLocalNodeIDs).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar31 = puVar7;
              }
              iVar18 = *(int *)(puVar31 +
                               ((ulonglong)
                                (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x48 - 1) &
                               (ulonglong)*(ushort *)FVar19.Data) * 4);
              if (iVar18 == -1) goto LAB_146108cd8;
              do {
                lVar41 = *(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc;
                if (*(ushort *)
                     (*(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc) ==
                    *(ushort *)FVar19.Data) {
                  pTVar23 = (TReferenceControllerBase<1> *)(lVar41 + 2);
                  if (lVar41 == 0) {
                    pTVar23 = (TReferenceControllerBase<1> *)0x0;
                  }
                  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
                    uVar22 = (ulonglong)(ushort)pTVar23->_padding_;
                    lVar41 = *(longlong *)&(local_1a0->Nodes).Array;
                    ppTVar2 = (TReferenceControllerBase<1> **)(lVar41 + uVar22 * 0x28);
                    EVar3 = *(ESystemPhase *)(*(longlong *)(lVar41 + 0x20 + uVar22 * 0x28) + 0x32);
                    if (((local_1c6 & EVar3) != None) ||
                       (((local_1c5 == '\0' && (local_1c6 == Evaluation)) &&
                        ((EVar3 & Scheduling) != None)))) {
                      if (*ppTVar2 == (TReferenceControllerBase<1> *)0x0) {
                        pTVar23 = ::operator_new(0x90);
                        if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
                          pTVar40 = (TReferenceControllerBase<1> *)&DAT_00000010;
                          local_168 = pTVar11;
                          FStack_160.ReferenceController = pTVar12;
                          pTVar23 = (TReferenceControllerBase<1> *)0x0;
                        }
                        else {
                          pTVar23->SharedReferenceCount = (atomic<int>)0x1;
                          pTVar40 = pTVar23 + 1;
                          pTVar23->WeakReferenceCount = (atomic<int>)0x1;
                          pTVar23->_padding_ =
                               (longlong)
                               &
                               ___7__TIntrusiveReferenceController_UFSystemTaskPrerequisites_MovieScene_UE___00_SharedPointerInternals__6B_
                          ;
                          pTVar23[5]._padding_ = 0;
                          pTVar23[5].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[5].WeakReferenceCount = (atomic<int>)0x4;
                          pTVar23[8]._padding_ = 0;
                          pTVar23[8].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[8].WeakReferenceCount = (atomic<int>)0x4;
                          if ((pTVar40 == (TReferenceControllerBase<1> *)0x0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InObject != nullptr",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar16)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          LOCK();
                          pTVar23->SharedReferenceCount =
                               (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
                          UNLOCK();
                          FStack_160.ReferenceController = pTVar23;
                          local_168 = pTVar40;
                        }
                        if (ppTVar2 != &local_168) {
                          *ppTVar2 = pTVar40;
                          local_168 = (TReferenceControllerBase<1> *)0x0;
                          SharedPointerInternals::FSharedReferencer<1>::operator=
                                    ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_160);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(FStack_160.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar23);
                        if ((*ppTVar2 == (TReferenceControllerBase<1> *)0x0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar16)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      pFVar8 = (FSystemTaskPrerequisites *)*ppTVar2;
                      if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           local_138.Subsequents.Object ==
                           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           0x0) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("IsValid()",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar16)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      UE::MovieScene::FSystemTaskPrerequisites::Consume
                                (pFVar8,local_138.Subsequents.Object);
                      FVar27 = local_180;
                    }
                  }
                  goto LAB_146108cd8;
                }
                iVar18 = *(int *)(lVar41 + 4);
              } while (iVar18 != -1);
              FVar19.Data = FVar19.Data + 2;
            }
          }
          if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
               local_138.Subsequents.Object ==
               (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = local_138.Subsequents.Object;
          piVar1 = (int *)((longlong)local_138.Subsequents.Object + 0x4c);
          FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                    ((longlong)local_138.Subsequents.Object + 0x40);
          if (*(int *)((longlong)local_138.Subsequents.Object + 0x4c) < 0) {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
            if (*(int *)((longlong)pFVar8 + 0x4c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                        (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                   *)pFVar8,0,piVar1);
            }
          }
          else {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
          }
          pFVar28 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)pFVar8 + 0x70);
          pFVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)pFVar8 + 0x50);
          if (*(int *)((longlong)pFVar8 + 0x7c) < 0) {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
            if (*(int *)((longlong)pFVar8 + 0x7c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,0,pFVar36,0,(int *)((longlong)pFVar8 + 0x7c));
            }
          }
          else {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
          }
          if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
              local_178.AllocatorInstance.Data !=
              (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
            FMemory::Free(local_178.AllocatorInstance.Data);
          }
          if (bVar10) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
          if (bVar14) {
            FThreadStats::AddMessage(FVar39,CycleScopeEnd);
            param_2 = (TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                       *)local_1b8;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      local_1c4 = local_1c4 + 1;
      iVar30 = *(int *)((longlong)param_2 + 0x10);
      local_1b0 = local_1b0 + 1;
      this = local_1a0;
    } while ((int)local_1c4 < iVar30);
  }
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d8.AllTasks;
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_d8.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_d8.AllTasks.ArrayNum);
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_d8.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar27 = local_d8.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar27,local_d8.Prereqs.ArrayNum);
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_d8.Prereqs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.Subsequents.SharedReferenceCount.ReferenceController);
  return;
}

// ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 146108f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_2,
          UMovieSceneEntitySystemLinker *param_3,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> **ppTVar2;
  ESystemPhase EVar3;
  ushort uVar4;
  longlong lVar5;
  FName FVar6;
  undefined1 *puVar7;
  FSystemTaskPrerequisites *pFVar8;
  code *pcVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UMovieSceneEntitySystemLinker *pUVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar21;
  ulonglong uVar22;
  TReferenceControllerBase<1> *pTVar23;
  ForElementType<unsigned_short> FVar24;
  ForElementType<unsigned_short> FVar25;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar26;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar27;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar28;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  FNameEntryId FVar33;
  uint uVar34;
  ulonglong uVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar36;
  EEntityThreadingModel EVar37;
  uint uVar38;
  FName FVar39;
  TReferenceControllerBase<1> *pTVar40;
  longlong lVar41;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  ESystemPhase local_1c6;
  char local_1c5;
  uint local_1c4;
  undefined2 local_1c0 [2];
  undefined2 local_1bc [2];
  ForElementType<unsigned_short> local_1b8;
  longlong local_1b0;
  FName local_1a8;
  FMovieSceneEntitySystemGraph *local_1a0;
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  ELockdownState local_188;
  FColor_u_0 local_184;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> local_180;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_178;
  TReferenceControllerBase<1> *local_168;
  FSharedReferencer<1> FStack_160;
  FName local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  FSystemSubsequentTasks local_138;
  UMovieSceneEntitySystemLinker *local_108;
  TReferenceControllerBase<1> *local_100;
  FMovieSceneEntitySystemGraph *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  FName local_e0;
  FSystemTaskPrerequisites local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c6 = param_1;
  local_1b8 = (ForElementType<unsigned_short>)param_2;
  local_1a0 = this;
  local_108 = param_3;
  local_1c5 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  bVar15 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar15) &&
     ((UE::MovieScene::GThreadedEvaluationAllocationThreshold <=
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x34 ||
      (UE::MovieScene::GThreadedEvaluationEntityThreshold <=
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x34)))) {
    EVar37 = TaskGraph;
  }
  else {
    EVar37 = NoThreading;
  }
  (param_3->EntityManager).ThreadingModel = EVar37;
  UE::MovieScene::FSystemSubsequentTasks::FSystemSubsequentTasks(&local_138,this,param_4,EVar37);
  pTVar12 = _UNK_150651568;
  pTVar11 = ___xmm_00000000000000000000000000000010;
  iVar30 = param_2->ArrayNum;
  local_188 = (param_3->EntityManager).LockdownState;
  local_d8.AllTasks.ArrayNum = 0;
  local_d8.Prereqs.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  local_d8.Prereqs.ArrayNum = 0;
  local_d8.Prereqs.ArrayMax = 4;
  local_d8.AllTasks.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_d8.AllTasks.ArrayMax = 4;
  local_1c4 = 0;
  if (0 < iVar30) {
    local_1b0 = 0;
    do {
      lVar41 = local_1b0;
      uVar22 = 0;
      uVar38 = 0;
      uVar32 = uVar38;
      if ((int)local_1c4 < iVar30) {
        uVar32 = ~local_1c4 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<unsigned_short>)param_2;
      if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
          (ForElementType<unsigned_short>)0x0) {
        FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
      }
      uVar4 = *(ushort *)((longlong)FVar24 + lVar41 * 2);
      lVar41 = (ulonglong)uVar4 * 0x28;
      FVar39 = *(FName *)(lVar41 + 0x20 + *(longlong *)&(this->Nodes).Array);
      local_1a8 = FVar39;
      UE::MovieScene::FSystemSubsequentTasks::ResetNode(&local_138,uVar4);
      lVar5 = *(longlong *)&(this->Nodes).Array;
      FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                (lVar41 + lVar5);
      local_100 = *(TReferenceControllerBase<1> **)(lVar41 + 8 + lVar5);
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar26 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = FVar27;
      }
      local_180 = FVar27;
      UMovieSceneEntitySystem::Run
                ((UMovieSceneEntitySystem *)FVar39,(FSystemTaskPrerequisites *)FVar26,&local_138);
      pUVar13 = local_108;
      if (((local_188 != Locked) && (local_108->AutoLinkMode == Enabled)) &&
         ((local_108->LastSystemLinkVersion == 0 ||
          (local_108->LastSystemLinkVersion <
           (local_108->EntityManager).StructureMutationSystemSerialNumber)))) {
        UMovieSceneEntitySystem::LinkRelevantSystems(local_108);
        pUVar13->LastSystemLinkVersion = (pUVar13->EntityManager).SystemSerialNumber;
      }
      if (this->SerialNumber != this->PreviousSerialNumber) {
        local_198.Data = (FScriptContainerElement *)0x0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
        }
        uVar32 = local_1c4 + 1;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        if (((FVar24 == (ForElementType<unsigned_short>)0x0) && (uVar32 != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x2d3,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_190 = uVar32;
        if (uVar32 == 0) {
          local_18c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar32,0,&local_198,uVar32,&local_18c);
          memcpy(local_198.Data,(void *)FVar24,(longlong)(int)uVar32 * 2);
        }
        UpdateCache(local_1a0);
        local_1c4 = 0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 8) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 8);
        }
        local_1b0 = 0;
        uVar35 = uVar22;
        if (0 < (longlong)*(int *)((longlong)param_2 + 0x10)) {
          do {
            uVar32 = (uint)uVar35;
            if (*(ushort *)((longlong)FVar24 + local_1b0 * 2) == uVar4) {
              lVar41 = local_1b0;
              if (uVar32 == 0xffffffff) goto LAB_146109224;
              goto LAB_14610926e;
            }
            local_1c4 = uVar32 + 1;
            uVar35 = (ulonglong)local_1c4;
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < *(int *)((longlong)param_2 + 0x10));
        }
        uVar32 = 0xffffffff;
        local_1c4 = 0xffffffff;
        local_1b0 = -1;
LAB_146109224:
        lVar41 = local_1b0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                            ,0x1d2,
                            L"System has removed itself while being Run. This is not supported.");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_14610926e:
        FVar24 = local_1b8;
        uVar35 = uVar22;
        if (0 < (int)uVar32) {
          do {
            uVar34 = (uint)uVar22;
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            if (local_198.Data != local_198.Data + (longlong)(int)local_190 * 2) {
              FVar19.Data = local_198.Data;
              do {
                if (*(short *)FVar19.Data == *(short *)((longlong)FVar25 + uVar35 * 2))
                goto LAB_1461093e0;
                FVar19.Data = FVar19.Data + 2;
              } while (FVar19.Data != local_198.Data + (longlong)(int)local_190 * 2);
            }
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            local_1c0[0] = *(undefined2 *)((longlong)FVar25 + uVar35 * 2);
            uVar17 = uVar38;
            if ((int)uVar32 < *(int *)((longlong)FVar24 + 0x10)) {
              uVar17 = ~uVar32 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 8) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 8);
            }
            local_1bc[0] = *(undefined2 *)((longlong)FVar25 + lVar41 * 2);
            local_f8 = local_1a0;
            local_f0 = local_1c0;
            local_e8 = local_1bc;
            `FMovieSceneEntitySystemGraph::
            ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'
            ::__l32::<lambda_1>::operator()(&local_f8);
LAB_1461093e0:
            uVar22 = (ulonglong)(uVar34 + 1);
            uVar35 = uVar35 + 1;
            FVar27 = local_180;
          } while ((int)(uVar34 + 1) < (int)uVar32);
        }
        FVar39 = local_1a8;
        param_2 = (TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
                  )local_1b8;
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
          FVar39 = local_1a8;
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
        }
      }
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                  ((longlong)FVar27 + 0x40);
        if (*(int *)((longlong)FVar27 + 0x4c) < 0) {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
          if (*(int *)((longlong)FVar27 + 0x4c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                 *)FVar27,0,(int *)((longlong)FVar27 + 0x4c));
          }
        }
        else {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
        }
        pFVar36 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)FVar27 + 0x70);
        pFVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar27 + 0x50);
        if (*(int *)((longlong)FVar27 + 0x7c) < 0) {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
          if (*(int *)((longlong)FVar27 + 0x7c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,0,pFVar28,0,(int *)((longlong)FVar27 + 0x7c));
          }
        }
        else {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
        }
      }
      if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
          local_138.Subsequents.Object !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
             local_138.Subsequents.Object ==
             (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((longlong)local_138.Subsequents.Object + 0x48) != 0) {
          FVar21 = StatPtr_MovieSceneEval_SystemDependencyCost;
          if (StatPtr_MovieSceneEval_SystemDependencyCost ==
              (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
            pFVar20 = ::FName::FName(&local_e0,"MovieSceneEval_SystemDependencyCost");
            FVar21 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_MovieSceneEval_SystemDependencyCost,*pFVar20,
                                L"System Dependency Cost","STATGROUP_MovieSceneECS",
                                "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,
                                ST_int64,true,false,MCR_Invalid);
          }
          FVar6 = *(FName *)FVar21;
          bVar15 = false;
          bVar10 = false;
          local_148.ComparisonIndex.Value = 0;
          local_148.Number = 0;
          bVar14 = false;
          bVar16 = false;
          FVar33 = FVar6.ComparisonIndex.Value;
          uVar32 = FVar6.Number;
          if ((FVar33.Value == 0) && (uVar32 == 0)) {
LAB_146109642:
            bVar10 = bVar16;
            bVar15 = bVar14;
            bVar14 = false;
            local_1a8 = local_148;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_184.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
              bVar15 = false;
              bVar10 = true;
              bVar14 = false;
              bVar16 = true;
              if (-1 < CpuChannel->Enabled) {
                local_158.ComparisonIndex.Value = FVar33.Value;
                local_158.Number = uVar32;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_158,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                           ,0x1ef);
                bVar15 = true;
                bVar10 = true;
                bVar14 = true;
                bVar16 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_146109642;
            local_1a8 = FVar6;
            local_150 = FVar33.Value;
            uStack_14c = uVar32;
            local_148 = FVar6;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            bVar14 = true;
          }
          local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.ArrayNum = 0;
          local_178.ArrayMax = 0;
          UMovieSceneEntitySystem::GetSubsequentSystems
                    (*(ushort *)((longlong)FVar39 + 0x36),&local_178);
          iVar30 = local_178.ArrayNum;
          FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                   ((longlong)local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 2);
          FVar19.Data = local_178.AllocatorInstance.Data;
          local_180 = FVar27;
          while( true ) {
            if (local_178.ArrayNum != iVar30) {
              local_1c7 = 0;
              `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1c7);
            }
            FVar39 = local_1a8;
            if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)FVar19.Data
                == FVar27) break;
            if (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x8 ==
                *(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x34) {
LAB_1461098a8:
              FVar19.Data = FVar19.Data + 2;
            }
            else {
              puVar7 = *(undefined1 **)&(local_1a0->GlobalToLocalNodeIDs).field_0x40;
              puVar31 = &(local_1a0->GlobalToLocalNodeIDs).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar31 = puVar7;
              }
              iVar18 = *(int *)(puVar31 +
                               ((ulonglong)
                                (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x48 - 1) &
                               (ulonglong)*(ushort *)FVar19.Data) * 4);
              if (iVar18 == -1) goto LAB_1461098a8;
              do {
                lVar41 = *(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc;
                if (*(ushort *)
                     (*(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc) ==
                    *(ushort *)FVar19.Data) {
                  pTVar23 = (TReferenceControllerBase<1> *)(lVar41 + 2);
                  if (lVar41 == 0) {
                    pTVar23 = (TReferenceControllerBase<1> *)0x0;
                  }
                  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
                    uVar22 = (ulonglong)(ushort)pTVar23->_padding_;
                    lVar41 = *(longlong *)&(local_1a0->Nodes).Array;
                    ppTVar2 = (TReferenceControllerBase<1> **)(lVar41 + uVar22 * 0x28);
                    EVar3 = *(ESystemPhase *)(*(longlong *)(lVar41 + 0x20 + uVar22 * 0x28) + 0x32);
                    if (((local_1c6 & EVar3) != None) ||
                       (((local_1c5 == '\0' && (local_1c6 == Evaluation)) &&
                        ((EVar3 & Scheduling) != None)))) {
                      if (*ppTVar2 == (TReferenceControllerBase<1> *)0x0) {
                        pTVar23 = ::operator_new(0x90);
                        if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
                          pTVar40 = (TReferenceControllerBase<1> *)&DAT_00000010;
                          local_168 = pTVar11;
                          FStack_160.ReferenceController = pTVar12;
                          pTVar23 = (TReferenceControllerBase<1> *)0x0;
                        }
                        else {
                          pTVar23->SharedReferenceCount = (atomic<int>)0x1;
                          pTVar40 = pTVar23 + 1;
                          pTVar23->WeakReferenceCount = (atomic<int>)0x1;
                          pTVar23->_padding_ =
                               (longlong)
                               &
                               ___7__TIntrusiveReferenceController_UFSystemTaskPrerequisites_MovieScene_UE___00_SharedPointerInternals__6B_
                          ;
                          pTVar23[5]._padding_ = 0;
                          pTVar23[5].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[5].WeakReferenceCount = (atomic<int>)0x4;
                          pTVar23[8]._padding_ = 0;
                          pTVar23[8].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[8].WeakReferenceCount = (atomic<int>)0x4;
                          if ((pTVar40 == (TReferenceControllerBase<1> *)0x0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InObject != nullptr",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar16)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          LOCK();
                          pTVar23->SharedReferenceCount =
                               (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
                          UNLOCK();
                          FStack_160.ReferenceController = pTVar23;
                          local_168 = pTVar40;
                        }
                        if (ppTVar2 != &local_168) {
                          *ppTVar2 = pTVar40;
                          local_168 = (TReferenceControllerBase<1> *)0x0;
                          SharedPointerInternals::FSharedReferencer<1>::operator=
                                    ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_160);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(FStack_160.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar23);
                        if ((*ppTVar2 == (TReferenceControllerBase<1> *)0x0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar16)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      pFVar8 = (FSystemTaskPrerequisites *)*ppTVar2;
                      if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           local_138.Subsequents.Object ==
                           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           0x0) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("IsValid()",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar16)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      UE::MovieScene::FSystemTaskPrerequisites::Consume
                                (pFVar8,local_138.Subsequents.Object);
                      FVar27 = local_180;
                    }
                  }
                  goto LAB_1461098a8;
                }
                iVar18 = *(int *)(lVar41 + 4);
              } while (iVar18 != -1);
              FVar19.Data = FVar19.Data + 2;
            }
          }
          if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
               local_138.Subsequents.Object ==
               (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = local_138.Subsequents.Object;
          piVar1 = (int *)((longlong)local_138.Subsequents.Object + 0x4c);
          FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                    ((longlong)local_138.Subsequents.Object + 0x40);
          if (*(int *)((longlong)local_138.Subsequents.Object + 0x4c) < 0) {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
            if (*(int *)((longlong)pFVar8 + 0x4c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                        (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                   *)pFVar8,0,piVar1);
            }
          }
          else {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
          }
          pFVar28 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)pFVar8 + 0x70);
          pFVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)pFVar8 + 0x50);
          if (*(int *)((longlong)pFVar8 + 0x7c) < 0) {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
            if (*(int *)((longlong)pFVar8 + 0x7c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,0,pFVar36,0,(int *)((longlong)pFVar8 + 0x7c));
            }
          }
          else {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
          }
          if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
              local_178.AllocatorInstance.Data !=
              (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
            FMemory::Free(local_178.AllocatorInstance.Data);
          }
          if (bVar10) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
          if (bVar14) {
            FThreadStats::AddMessage(FVar39,CycleScopeEnd);
            param_2 = (TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)local_1b8;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      local_1c4 = local_1c4 + 1;
      iVar30 = *(int *)((longlong)param_2 + 0x10);
      local_1b0 = local_1b0 + 1;
      this = local_1a0;
    } while ((int)local_1c4 < iVar30);
  }
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d8.AllTasks;
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_d8.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_d8.AllTasks.ArrayNum);
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_d8.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar27 = local_d8.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar27,local_d8.Prereqs.ArrayNum);
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_d8.Prereqs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.Subsequents.SharedReferenceCount.ReferenceController);
  return;
}

// ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 146109ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2,
          UMovieSceneEntitySystemLinker *param_3,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> **ppTVar2;
  ESystemPhase EVar3;
  ushort uVar4;
  longlong lVar5;
  FName FVar6;
  undefined1 *puVar7;
  FSystemTaskPrerequisites *pFVar8;
  code *pcVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UMovieSceneEntitySystemLinker *pUVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar21;
  ulonglong uVar22;
  TReferenceControllerBase<1> *pTVar23;
  ForElementType<unsigned_short> FVar24;
  ForElementType<unsigned_short> FVar25;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar26;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar27;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar28;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  FNameEntryId FVar33;
  uint uVar34;
  ulonglong uVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar36;
  EEntityThreadingModel EVar37;
  uint uVar38;
  FName FVar39;
  TReferenceControllerBase<1> *pTVar40;
  longlong lVar41;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  ESystemPhase local_1c6;
  char local_1c5;
  uint local_1c4;
  undefined2 local_1c0 [2];
  undefined2 local_1bc [2];
  ForElementType<unsigned_short> local_1b8;
  longlong local_1b0;
  FName local_1a8;
  FMovieSceneEntitySystemGraph *local_1a0;
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  ELockdownState local_188;
  FColor_u_0 local_184;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> local_180;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_178;
  TReferenceControllerBase<1> *local_168;
  FSharedReferencer<1> FStack_160;
  FName local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  FSystemSubsequentTasks local_138;
  UMovieSceneEntitySystemLinker *local_108;
  TReferenceControllerBase<1> *local_100;
  FMovieSceneEntitySystemGraph *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  FName local_e0;
  FSystemTaskPrerequisites local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c6 = param_1;
  local_1b8 = (ForElementType<unsigned_short>)param_2;
  local_1a0 = this;
  local_108 = param_3;
  local_1c5 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  bVar15 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar15) &&
     ((UE::MovieScene::GThreadedEvaluationAllocationThreshold <=
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x34 ||
      (UE::MovieScene::GThreadedEvaluationEntityThreshold <=
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x34)))) {
    EVar37 = TaskGraph;
  }
  else {
    EVar37 = NoThreading;
  }
  (param_3->EntityManager).ThreadingModel = EVar37;
  UE::MovieScene::FSystemSubsequentTasks::FSystemSubsequentTasks(&local_138,this,param_4,EVar37);
  pTVar12 = _UNK_150651568;
  pTVar11 = ___xmm_00000000000000000000000000000010;
  iVar30 = param_2->ArrayNum;
  local_188 = (param_3->EntityManager).LockdownState;
  local_d8.AllTasks.ArrayNum = 0;
  local_d8.Prereqs.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  local_d8.Prereqs.ArrayNum = 0;
  local_d8.Prereqs.ArrayMax = 4;
  local_d8.AllTasks.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_d8.AllTasks.ArrayMax = 4;
  local_1c4 = 0;
  if (0 < iVar30) {
    local_1b0 = 0;
    do {
      lVar41 = local_1b0;
      uVar22 = 0;
      uVar38 = 0;
      uVar32 = uVar38;
      if ((int)local_1c4 < iVar30) {
        uVar32 = ~local_1c4 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<unsigned_short>)param_2;
      if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10) !=
          (ForElementType<unsigned_short>)0x0) {
        FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10);
      }
      uVar4 = *(ushort *)((longlong)FVar24 + lVar41 * 2);
      lVar41 = (ulonglong)uVar4 * 0x28;
      FVar39 = *(FName *)(lVar41 + 0x20 + *(longlong *)&(this->Nodes).Array);
      local_1a8 = FVar39;
      UE::MovieScene::FSystemSubsequentTasks::ResetNode(&local_138,uVar4);
      lVar5 = *(longlong *)&(this->Nodes).Array;
      FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                (lVar41 + lVar5);
      local_100 = *(TReferenceControllerBase<1> **)(lVar41 + 8 + lVar5);
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar26 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = FVar27;
      }
      local_180 = FVar27;
      UMovieSceneEntitySystem::Run
                ((UMovieSceneEntitySystem *)FVar39,(FSystemTaskPrerequisites *)FVar26,&local_138);
      pUVar13 = local_108;
      if (((local_188 != Locked) && (local_108->AutoLinkMode == Enabled)) &&
         ((local_108->LastSystemLinkVersion == 0 ||
          (local_108->LastSystemLinkVersion <
           (local_108->EntityManager).StructureMutationSystemSerialNumber)))) {
        UMovieSceneEntitySystem::LinkRelevantSystems(local_108);
        pUVar13->LastSystemLinkVersion = (pUVar13->EntityManager).SystemSerialNumber;
      }
      if (this->SerialNumber != this->PreviousSerialNumber) {
        local_198.Data = (FScriptContainerElement *)0x0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10);
        }
        uVar32 = local_1c4 + 1;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        if (((FVar24 == (ForElementType<unsigned_short>)0x0) && (uVar32 != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x2d3,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_190 = uVar32;
        if (uVar32 == 0) {
          local_18c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar32,0,&local_198,uVar32,&local_18c);
          memcpy(local_198.Data,(void *)FVar24,(longlong)(int)uVar32 * 2);
        }
        UpdateCache(local_1a0);
        local_1c4 = 0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x10);
        }
        local_1b0 = 0;
        uVar35 = uVar22;
        if (0 < (longlong)*(int *)((longlong)param_2 + 0x18)) {
          do {
            uVar32 = (uint)uVar35;
            if (*(ushort *)((longlong)FVar24 + local_1b0 * 2) == uVar4) {
              lVar41 = local_1b0;
              if (uVar32 == 0xffffffff) goto LAB_146109df4;
              goto LAB_146109e3e;
            }
            local_1c4 = uVar32 + 1;
            uVar35 = (ulonglong)local_1c4;
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < *(int *)((longlong)param_2 + 0x18));
        }
        uVar32 = 0xffffffff;
        local_1c4 = 0xffffffff;
        local_1b0 = -1;
LAB_146109df4:
        lVar41 = local_1b0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                            ,0x1d2,
                            L"System has removed itself while being Run. This is not supported.");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_146109e3e:
        FVar24 = local_1b8;
        uVar35 = uVar22;
        if (0 < (int)uVar32) {
          do {
            uVar34 = (uint)uVar22;
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x18)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10);
            }
            if (local_198.Data != local_198.Data + (longlong)(int)local_190 * 2) {
              FVar19.Data = local_198.Data;
              do {
                if (*(short *)FVar19.Data == *(short *)((longlong)FVar25 + uVar35 * 2))
                goto LAB_146109fb0;
                FVar19.Data = FVar19.Data + 2;
              } while (FVar19.Data != local_198.Data + (longlong)(int)local_190 * 2);
            }
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x18)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10);
            }
            local_1c0[0] = *(undefined2 *)((longlong)FVar25 + uVar35 * 2);
            uVar17 = uVar38;
            if ((int)uVar32 < *(int *)((longlong)FVar24 + 0x18)) {
              uVar17 = ~uVar32 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x10);
            }
            local_1bc[0] = *(undefined2 *)((longlong)FVar25 + lVar41 * 2);
            local_f8 = local_1a0;
            local_f0 = local_1c0;
            local_e8 = local_1bc;
            `FMovieSceneEntitySystemGraph::
            ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'
            ::__l32::<lambda_1>::operator()(&local_f8);
LAB_146109fb0:
            uVar22 = (ulonglong)(uVar34 + 1);
            uVar35 = uVar35 + 1;
            FVar27 = local_180;
          } while ((int)(uVar34 + 1) < (int)uVar32);
        }
        FVar39 = local_1a8;
        param_2 = (TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
                  )local_1b8;
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
          FVar39 = local_1a8;
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
        }
      }
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                  ((longlong)FVar27 + 0x40);
        if (*(int *)((longlong)FVar27 + 0x4c) < 0) {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
          if (*(int *)((longlong)FVar27 + 0x4c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                 *)FVar27,0,(int *)((longlong)FVar27 + 0x4c));
          }
        }
        else {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
        }
        pFVar36 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)FVar27 + 0x70);
        pFVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar27 + 0x50);
        if (*(int *)((longlong)FVar27 + 0x7c) < 0) {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
          if (*(int *)((longlong)FVar27 + 0x7c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,0,pFVar28,0,(int *)((longlong)FVar27 + 0x7c));
          }
        }
        else {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
        }
      }
      if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
          local_138.Subsequents.Object !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
             local_138.Subsequents.Object ==
             (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((longlong)local_138.Subsequents.Object + 0x48) != 0) {
          FVar21 = StatPtr_MovieSceneEval_SystemDependencyCost;
          if (StatPtr_MovieSceneEval_SystemDependencyCost ==
              (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
            pFVar20 = ::FName::FName(&local_e0,"MovieSceneEval_SystemDependencyCost");
            FVar21 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_MovieSceneEval_SystemDependencyCost,*pFVar20,
                                L"System Dependency Cost","STATGROUP_MovieSceneECS",
                                "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,
                                ST_int64,true,false,MCR_Invalid);
          }
          FVar6 = *(FName *)FVar21;
          bVar15 = false;
          bVar10 = false;
          local_148.ComparisonIndex.Value = 0;
          local_148.Number = 0;
          bVar14 = false;
          bVar16 = false;
          FVar33 = FVar6.ComparisonIndex.Value;
          uVar32 = FVar6.Number;
          if ((FVar33.Value == 0) && (uVar32 == 0)) {
LAB_14610a212:
            bVar10 = bVar16;
            bVar15 = bVar14;
            bVar14 = false;
            local_1a8 = local_148;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_184.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
              bVar15 = false;
              bVar10 = true;
              bVar14 = false;
              bVar16 = true;
              if (-1 < CpuChannel->Enabled) {
                local_158.ComparisonIndex.Value = FVar33.Value;
                local_158.Number = uVar32;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_158,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                           ,0x1ef);
                bVar15 = true;
                bVar10 = true;
                bVar14 = true;
                bVar16 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_14610a212;
            local_1a8 = FVar6;
            local_150 = FVar33.Value;
            uStack_14c = uVar32;
            local_148 = FVar6;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            bVar14 = true;
          }
          local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.ArrayNum = 0;
          local_178.ArrayMax = 0;
          UMovieSceneEntitySystem::GetSubsequentSystems
                    (*(ushort *)((longlong)FVar39 + 0x36),&local_178);
          iVar30 = local_178.ArrayNum;
          FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                   ((longlong)local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 2);
          FVar19.Data = local_178.AllocatorInstance.Data;
          local_180 = FVar27;
          while( true ) {
            if (local_178.ArrayNum != iVar30) {
              local_1c7 = 0;
              `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1c7);
            }
            FVar39 = local_1a8;
            if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)FVar19.Data
                == FVar27) break;
            if (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x8 ==
                *(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x34) {
LAB_14610a478:
              FVar19.Data = FVar19.Data + 2;
            }
            else {
              puVar7 = *(undefined1 **)&(local_1a0->GlobalToLocalNodeIDs).field_0x40;
              puVar31 = &(local_1a0->GlobalToLocalNodeIDs).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar31 = puVar7;
              }
              iVar18 = *(int *)(puVar31 +
                               ((ulonglong)
                                (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x48 - 1) &
                               (ulonglong)*(ushort *)FVar19.Data) * 4);
              if (iVar18 == -1) goto LAB_14610a478;
              do {
                lVar41 = *(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc;
                if (*(ushort *)
                     (*(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc) ==
                    *(ushort *)FVar19.Data) {
                  pTVar23 = (TReferenceControllerBase<1> *)(lVar41 + 2);
                  if (lVar41 == 0) {
                    pTVar23 = (TReferenceControllerBase<1> *)0x0;
                  }
                  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
                    uVar22 = (ulonglong)(ushort)pTVar23->_padding_;
                    lVar41 = *(longlong *)&(local_1a0->Nodes).Array;
                    ppTVar2 = (TReferenceControllerBase<1> **)(lVar41 + uVar22 * 0x28);
                    EVar3 = *(ESystemPhase *)(*(longlong *)(lVar41 + 0x20 + uVar22 * 0x28) + 0x32);
                    if (((local_1c6 & EVar3) != None) ||
                       (((local_1c5 == '\0' && (local_1c6 == Evaluation)) &&
                        ((EVar3 & Scheduling) != None)))) {
                      if (*ppTVar2 == (TReferenceControllerBase<1> *)0x0) {
                        pTVar23 = ::operator_new(0x90);
                        if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
                          pTVar40 = (TReferenceControllerBase<1> *)&DAT_00000010;
                          local_168 = pTVar11;
                          FStack_160.ReferenceController = pTVar12;
                          pTVar23 = (TReferenceControllerBase<1> *)0x0;
                        }
                        else {
                          pTVar23->SharedReferenceCount = (atomic<int>)0x1;
                          pTVar40 = pTVar23 + 1;
                          pTVar23->WeakReferenceCount = (atomic<int>)0x1;
                          pTVar23->_padding_ =
                               (longlong)
                               &
                               ___7__TIntrusiveReferenceController_UFSystemTaskPrerequisites_MovieScene_UE___00_SharedPointerInternals__6B_
                          ;
                          pTVar23[5]._padding_ = 0;
                          pTVar23[5].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[5].WeakReferenceCount = (atomic<int>)0x4;
                          pTVar23[8]._padding_ = 0;
                          pTVar23[8].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[8].WeakReferenceCount = (atomic<int>)0x4;
                          if ((pTVar40 == (TReferenceControllerBase<1> *)0x0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InObject != nullptr",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar16)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          LOCK();
                          pTVar23->SharedReferenceCount =
                               (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
                          UNLOCK();
                          FStack_160.ReferenceController = pTVar23;
                          local_168 = pTVar40;
                        }
                        if (ppTVar2 != &local_168) {
                          *ppTVar2 = pTVar40;
                          local_168 = (TReferenceControllerBase<1> *)0x0;
                          SharedPointerInternals::FSharedReferencer<1>::operator=
                                    ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_160);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(FStack_160.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar23);
                        if ((*ppTVar2 == (TReferenceControllerBase<1> *)0x0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar16)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      pFVar8 = (FSystemTaskPrerequisites *)*ppTVar2;
                      if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           local_138.Subsequents.Object ==
                           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           0x0) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("IsValid()",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar16)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      UE::MovieScene::FSystemTaskPrerequisites::Consume
                                (pFVar8,local_138.Subsequents.Object);
                      FVar27 = local_180;
                    }
                  }
                  goto LAB_14610a478;
                }
                iVar18 = *(int *)(lVar41 + 4);
              } while (iVar18 != -1);
              FVar19.Data = FVar19.Data + 2;
            }
          }
          if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
               local_138.Subsequents.Object ==
               (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = local_138.Subsequents.Object;
          piVar1 = (int *)((longlong)local_138.Subsequents.Object + 0x4c);
          FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                    ((longlong)local_138.Subsequents.Object + 0x40);
          if (*(int *)((longlong)local_138.Subsequents.Object + 0x4c) < 0) {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
            if (*(int *)((longlong)pFVar8 + 0x4c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                        (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                   *)pFVar8,0,piVar1);
            }
          }
          else {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
          }
          pFVar28 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)pFVar8 + 0x70);
          pFVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)pFVar8 + 0x50);
          if (*(int *)((longlong)pFVar8 + 0x7c) < 0) {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
            if (*(int *)((longlong)pFVar8 + 0x7c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,0,pFVar36,0,(int *)((longlong)pFVar8 + 0x7c));
            }
          }
          else {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
          }
          if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
              local_178.AllocatorInstance.Data !=
              (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
            FMemory::Free(local_178.AllocatorInstance.Data);
          }
          if (bVar10) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
          if (bVar14) {
            FThreadStats::AddMessage(FVar39,CycleScopeEnd);
            param_2 = (TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                       *)local_1b8;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      local_1c4 = local_1c4 + 1;
      iVar30 = *(int *)((longlong)param_2 + 0x18);
      local_1b0 = local_1b0 + 1;
      this = local_1a0;
    } while ((int)local_1c4 < iVar30);
  }
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d8.AllTasks;
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_d8.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_d8.AllTasks.ArrayNum);
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_d8.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar27 = local_d8.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar27,local_d8.Prereqs.ArrayNum);
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_d8.Prereqs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.Subsequents.SharedReferenceCount.ReferenceController);
  return;
}

// ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 14610a6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          UMovieSceneEntitySystemLinker *param_3,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> **ppTVar2;
  ESystemPhase EVar3;
  ushort uVar4;
  longlong lVar5;
  FName FVar6;
  undefined1 *puVar7;
  FSystemTaskPrerequisites *pFVar8;
  code *pcVar9;
  bool bVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UMovieSceneEntitySystemLinker *pUVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost> FVar21;
  ulonglong uVar22;
  TReferenceControllerBase<1> *pTVar23;
  ForElementType<unsigned_short> FVar24;
  ForElementType<unsigned_short> FVar25;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar26;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar27;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar28;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  FNameEntryId FVar33;
  uint uVar34;
  ulonglong uVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *pFVar36;
  EEntityThreadingModel EVar37;
  uint uVar38;
  FName FVar39;
  TReferenceControllerBase<1> *pTVar40;
  longlong lVar41;
  undefined1 auStackY_228 [32];
  undefined1 local_1c7;
  ESystemPhase local_1c6;
  char local_1c5;
  uint local_1c4;
  undefined2 local_1c0 [2];
  undefined2 local_1bc [2];
  ForElementType<unsigned_short> local_1b8;
  longlong local_1b0;
  FName local_1a8;
  FMovieSceneEntitySystemGraph *local_1a0;
  ForAnyElementType local_198;
  uint local_190;
  int local_18c;
  ELockdownState local_188;
  FColor_u_0 local_184;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> local_180;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_178;
  TReferenceControllerBase<1> *local_168;
  FSharedReferencer<1> FStack_160;
  FName local_158;
  uint local_150;
  uint uStack_14c;
  FName local_148;
  FSystemSubsequentTasks local_138;
  UMovieSceneEntitySystemLinker *local_108;
  TReferenceControllerBase<1> *local_100;
  FMovieSceneEntitySystemGraph *local_f8;
  undefined2 *local_f0;
  undefined2 *local_e8;
  FName local_e0;
  FSystemTaskPrerequisites local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c6 = param_1;
  local_1b8 = (ForElementType<unsigned_short>)param_2;
  local_1a0 = this;
  local_108 = param_3;
  local_1c5 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  bVar15 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar15) &&
     ((UE::MovieScene::GThreadedEvaluationAllocationThreshold <=
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityAllocations.field_0x34 ||
      (UE::MovieScene::GThreadedEvaluationEntityThreshold <=
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x8 -
       *(int *)&(param_3->EntityManager).EntityLocations.field_0x34)))) {
    EVar37 = TaskGraph;
  }
  else {
    EVar37 = NoThreading;
  }
  (param_3->EntityManager).ThreadingModel = EVar37;
  UE::MovieScene::FSystemSubsequentTasks::FSystemSubsequentTasks(&local_138,this,param_4,EVar37);
  pTVar12 = _UNK_150651568;
  pTVar11 = ___xmm_00000000000000000000000000000010;
  iVar30 = param_2->ArrayNum;
  local_188 = (param_3->EntityManager).LockdownState;
  local_d8.AllTasks.ArrayNum = 0;
  local_d8.Prereqs.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
  local_d8.Prereqs.ArrayNum = 0;
  local_d8.Prereqs.ArrayMax = 4;
  local_d8.AllTasks.AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_d8.AllTasks.ArrayMax = 4;
  local_1c4 = 0;
  if (0 < iVar30) {
    local_1b0 = 0;
    do {
      lVar41 = local_1b0;
      uVar22 = 0;
      uVar38 = 0;
      uVar32 = uVar38;
      if ((int)local_1c4 < iVar30) {
        uVar32 = ~local_1c4 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<unsigned_short>)param_2;
      if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20) !=
          (ForElementType<unsigned_short>)0x0) {
        FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20);
      }
      uVar4 = *(ushort *)((longlong)FVar24 + lVar41 * 2);
      lVar41 = (ulonglong)uVar4 * 0x28;
      FVar39 = *(FName *)(lVar41 + 0x20 + *(longlong *)&(this->Nodes).Array);
      local_1a8 = FVar39;
      UE::MovieScene::FSystemSubsequentTasks::ResetNode(&local_138,uVar4);
      lVar5 = *(longlong *)&(this->Nodes).Array;
      FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                (lVar41 + lVar5);
      local_100 = *(TReferenceControllerBase<1> **)(lVar41 + 8 + lVar5);
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar26 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = FVar27;
      }
      local_180 = FVar27;
      UMovieSceneEntitySystem::Run
                ((UMovieSceneEntitySystem *)FVar39,(FSystemTaskPrerequisites *)FVar26,&local_138);
      pUVar13 = local_108;
      if (((local_188 != Locked) && (local_108->AutoLinkMode == Enabled)) &&
         ((local_108->LastSystemLinkVersion == 0 ||
          (local_108->LastSystemLinkVersion <
           (local_108->EntityManager).StructureMutationSystemSerialNumber)))) {
        UMovieSceneEntitySystem::LinkRelevantSystems(local_108);
        pUVar13->LastSystemLinkVersion = (pUVar13->EntityManager).SystemSerialNumber;
      }
      if (this->SerialNumber != this->PreviousSerialNumber) {
        local_198.Data = (FScriptContainerElement *)0x0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20);
        }
        uVar32 = local_1c4 + 1;
        if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
        }
        if (((FVar24 == (ForElementType<unsigned_short>)0x0) && (uVar32 != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x2d3,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_190 = uVar32;
        if (uVar32 == 0) {
          local_18c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar32,0,&local_198,uVar32,&local_18c);
          memcpy(local_198.Data,(void *)FVar24,(longlong)(int)uVar32 * 2);
        }
        UpdateCache(local_1a0);
        local_1c4 = 0;
        FVar24 = (ForElementType<unsigned_short>)param_2;
        if (*(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20) !=
            (ForElementType<unsigned_short>)0x0) {
          FVar24 = *(ForElementType<unsigned_short> *)((longlong)param_2 + 0x20);
        }
        local_1b0 = 0;
        uVar35 = uVar22;
        if (0 < (longlong)*(int *)((longlong)param_2 + 0x28)) {
          do {
            uVar32 = (uint)uVar35;
            if (*(ushort *)((longlong)FVar24 + local_1b0 * 2) == uVar4) {
              lVar41 = local_1b0;
              if (uVar32 == 0xffffffff) goto LAB_14610a9c4;
              goto LAB_14610aa0e;
            }
            local_1c4 = uVar32 + 1;
            uVar35 = (ulonglong)local_1c4;
            local_1b0 = local_1b0 + 1;
          } while (local_1b0 < *(int *)((longlong)param_2 + 0x28));
        }
        uVar32 = 0xffffffff;
        local_1c4 = 0xffffffff;
        local_1b0 = -1;
LAB_14610a9c4:
        lVar41 = local_1b0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                            ,0x1d2,
                            L"System has removed itself while being Run. This is not supported.");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_14610aa0e:
        FVar24 = local_1b8;
        uVar35 = uVar22;
        if (0 < (int)uVar32) {
          do {
            uVar34 = (uint)uVar22;
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x28)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20);
            }
            if (local_198.Data != local_198.Data + (longlong)(int)local_190 * 2) {
              FVar19.Data = local_198.Data;
              do {
                if (*(short *)FVar19.Data == *(short *)((longlong)FVar25 + uVar35 * 2))
                goto LAB_14610ab80;
                FVar19.Data = FVar19.Data + 2;
              } while (FVar19.Data != local_198.Data + (longlong)(int)local_190 * 2);
            }
            uVar17 = uVar38;
            if ((int)uVar34 < *(int *)((longlong)FVar24 + 0x28)) {
              uVar17 = ~uVar34 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20);
            }
            local_1c0[0] = *(undefined2 *)((longlong)FVar25 + uVar35 * 2);
            uVar17 = uVar38;
            if ((int)uVar32 < *(int *)((longlong)FVar24 + 0x28)) {
              uVar17 = ~uVar32 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar25 = FVar24;
            if (*(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20) !=
                (ForElementType<unsigned_short>)0x0) {
              FVar25 = *(ForElementType<unsigned_short> *)((longlong)FVar24 + 0x20);
            }
            local_1bc[0] = *(undefined2 *)((longlong)FVar25 + lVar41 * 2);
            local_f8 = local_1a0;
            local_f0 = local_1c0;
            local_e8 = local_1bc;
            `FMovieSceneEntitySystemGraph::
            ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'
            ::__l32::<lambda_1>::operator()(&local_f8);
LAB_14610ab80:
            uVar22 = (ulonglong)(uVar34 + 1);
            uVar35 = uVar35 + 1;
            FVar27 = local_180;
          } while ((int)(uVar34 + 1) < (int)uVar32);
        }
        FVar39 = local_1a8;
        param_2 = (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *)local_1b8;
        if (local_198.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data);
          FVar39 = local_1a8;
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
        }
      }
      if (FVar27 != (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        FVar26 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                  ((longlong)FVar27 + 0x40);
        if (*(int *)((longlong)FVar27 + 0x4c) < 0) {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
          if (*(int *)((longlong)FVar27 + 0x4c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                      (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                 *)FVar27,0,(int *)((longlong)FVar27 + 0x4c));
          }
        }
        else {
          if (FVar26 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0
             ) {
            FVar26 = FVar27;
          }
          DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                    ((FPrerequisite *)FVar26,*(int *)((longlong)FVar27 + 0x48));
          *(undefined4 *)((longlong)FVar27 + 0x48) = 0;
        }
        pFVar36 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)FVar27 + 0x70);
        pFVar28 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar27 + 0x50);
        if (*(int *)((longlong)FVar27 + 0x7c) < 0) {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
          if (*(int *)((longlong)FVar27 + 0x7c) != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,0,pFVar28,0,(int *)((longlong)FVar27 + 0x7c));
          }
        }
        else {
          if (pFVar36 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
            pFVar36 = pFVar28;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)pFVar36,*(int *)((longlong)FVar27 + 0x78));
          *(undefined4 *)((longlong)FVar27 + 0x78) = 0;
        }
      }
      if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
          local_138.Subsequents.Object !=
          (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
        if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
             local_138.Subsequents.Object ==
             (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((longlong)local_138.Subsequents.Object + 0x48) != 0) {
          FVar21 = StatPtr_MovieSceneEval_SystemDependencyCost;
          if (StatPtr_MovieSceneEval_SystemDependencyCost ==
              (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)0x0) {
            pFVar20 = ::FName::FName(&local_e0,"MovieSceneEval_SystemDependencyCost");
            FVar21 = (FThreadSafeStaticStat<FStat_MovieSceneEval_SystemDependencyCost>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_MovieSceneEval_SystemDependencyCost,*pFVar20,
                                L"System Dependency Cost","STATGROUP_MovieSceneECS",
                                "STATCAT_Advanced",L"Movie Scene Evaluation Systems",true,true,
                                ST_int64,true,false,MCR_Invalid);
          }
          FVar6 = *(FName *)FVar21;
          bVar15 = false;
          bVar10 = false;
          local_148.ComparisonIndex.Value = 0;
          local_148.Number = 0;
          bVar14 = false;
          bVar16 = false;
          FVar33 = FVar6.ComparisonIndex.Value;
          uVar32 = FVar6.Number;
          if ((FVar33.Value == 0) && (uVar32 == 0)) {
LAB_14610ade2:
            bVar10 = bVar16;
            bVar15 = bVar14;
            bVar14 = false;
            local_1a8 = local_148;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_184.Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
              bVar15 = false;
              bVar10 = true;
              bVar14 = false;
              bVar16 = true;
              if (-1 < CpuChannel->Enabled) {
                local_158.ComparisonIndex.Value = FVar33.Value;
                local_158.Number = uVar32;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_158,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                           ,0x1ef);
                bVar15 = true;
                bVar10 = true;
                bVar14 = true;
                bVar16 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_14610ade2;
            local_1a8 = FVar6;
            local_150 = FVar33.Value;
            uStack_14c = uVar32;
            local_148 = FVar6;
            FThreadStats::AddMessage(FVar6,CycleScopeStart);
            bVar14 = true;
          }
          local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_178.ArrayNum = 0;
          local_178.ArrayMax = 0;
          UMovieSceneEntitySystem::GetSubsequentSystems
                    (*(ushort *)((longlong)FVar39 + 0x36),&local_178);
          iVar30 = local_178.ArrayNum;
          FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                   ((longlong)local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 2);
          FVar19.Data = local_178.AllocatorInstance.Data;
          local_180 = FVar27;
          while( true ) {
            if (local_178.ArrayNum != iVar30) {
              local_1c7 = 0;
              `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1c7);
            }
            FVar39 = local_1a8;
            if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)FVar19.Data
                == FVar27) break;
            if (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x8 ==
                *(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x34) {
LAB_14610b048:
              FVar19.Data = FVar19.Data + 2;
            }
            else {
              puVar7 = *(undefined1 **)&(local_1a0->GlobalToLocalNodeIDs).field_0x40;
              puVar31 = &(local_1a0->GlobalToLocalNodeIDs).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar31 = puVar7;
              }
              iVar18 = *(int *)(puVar31 +
                               ((ulonglong)
                                (*(int *)&(local_1a0->GlobalToLocalNodeIDs).field_0x48 - 1) &
                               (ulonglong)*(ushort *)FVar19.Data) * 4);
              if (iVar18 == -1) goto LAB_14610b048;
              do {
                lVar41 = *(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc;
                if (*(ushort *)
                     (*(longlong *)&local_1a0->GlobalToLocalNodeIDs + (longlong)iVar18 * 0xc) ==
                    *(ushort *)FVar19.Data) {
                  pTVar23 = (TReferenceControllerBase<1> *)(lVar41 + 2);
                  if (lVar41 == 0) {
                    pTVar23 = (TReferenceControllerBase<1> *)0x0;
                  }
                  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
                    uVar22 = (ulonglong)(ushort)pTVar23->_padding_;
                    lVar41 = *(longlong *)&(local_1a0->Nodes).Array;
                    ppTVar2 = (TReferenceControllerBase<1> **)(lVar41 + uVar22 * 0x28);
                    EVar3 = *(ESystemPhase *)(*(longlong *)(lVar41 + 0x20 + uVar22 * 0x28) + 0x32);
                    if (((local_1c6 & EVar3) != None) ||
                       (((local_1c5 == '\0' && (local_1c6 == Evaluation)) &&
                        ((EVar3 & Scheduling) != None)))) {
                      if (*ppTVar2 == (TReferenceControllerBase<1> *)0x0) {
                        pTVar23 = ::operator_new(0x90);
                        if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
                          pTVar40 = (TReferenceControllerBase<1> *)&DAT_00000010;
                          local_168 = pTVar11;
                          FStack_160.ReferenceController = pTVar12;
                          pTVar23 = (TReferenceControllerBase<1> *)0x0;
                        }
                        else {
                          pTVar23->SharedReferenceCount = (atomic<int>)0x1;
                          pTVar40 = pTVar23 + 1;
                          pTVar23->WeakReferenceCount = (atomic<int>)0x1;
                          pTVar23->_padding_ =
                               (longlong)
                               &
                               ___7__TIntrusiveReferenceController_UFSystemTaskPrerequisites_MovieScene_UE___00_SharedPointerInternals__6B_
                          ;
                          pTVar23[5]._padding_ = 0;
                          pTVar23[5].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[5].WeakReferenceCount = (atomic<int>)0x4;
                          pTVar23[8]._padding_ = 0;
                          pTVar23[8].SharedReferenceCount = (atomic<int>)0x0;
                          pTVar23[8].WeakReferenceCount = (atomic<int>)0x4;
                          if ((pTVar40 == (TReferenceControllerBase<1> *)0x0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InObject != nullptr",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x246,L""), bVar16)) {
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          LOCK();
                          pTVar23->SharedReferenceCount =
                               (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
                          UNLOCK();
                          FStack_160.ReferenceController = pTVar23;
                          local_168 = pTVar40;
                        }
                        if (ppTVar2 != &local_168) {
                          *ppTVar2 = pTVar40;
                          local_168 = (TReferenceControllerBase<1> *)0x0;
                          SharedPointerInternals::FSharedReferencer<1>::operator=
                                    ((FSharedReferencer<1> *)(ppTVar2 + 1),&FStack_160);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(FStack_160.ReferenceController);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar23);
                        if ((*ppTVar2 == (TReferenceControllerBase<1> *)0x0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar16)) {
                          pcVar9 = (code *)swi(3);
                          (*pcVar9)();
                          return;
                        }
                      }
                      pFVar8 = (FSystemTaskPrerequisites *)*ppTVar2;
                      if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           local_138.Subsequents.Object ==
                           (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                           0x0) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("IsValid()",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x44d,L""), bVar16)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      UE::MovieScene::FSystemTaskPrerequisites::Consume
                                (pFVar8,local_138.Subsequents.Object);
                      FVar27 = local_180;
                    }
                  }
                  goto LAB_14610b048;
                }
                iVar18 = *(int *)(lVar41 + 4);
              } while (iVar18 != -1);
              FVar19.Data = FVar19.Data + 2;
            }
          }
          if (((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
               local_138.Subsequents.Object ==
               (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = local_138.Subsequents.Object;
          piVar1 = (int *)((longlong)local_138.Subsequents.Object + 0x4c);
          FVar27 = *(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *)
                    ((longlong)local_138.Subsequents.Object + 0x40);
          if (*(int *)((longlong)local_138.Subsequents.Object + 0x4c) < 0) {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
            if (*(int *)((longlong)pFVar8 + 0x4c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
                        (0x10,8,0,(ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>
                                   *)pFVar8,0,piVar1);
            }
          }
          else {
            if (FVar27 == (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                          0x0) {
              FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
                       local_138.Subsequents.Object;
            }
            DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
                      ((FPrerequisite *)FVar27,
                       *(int *)((longlong)local_138.Subsequents.Object + 0x48));
            *(undefined4 *)((longlong)pFVar8 + 0x48) = 0;
          }
          pFVar28 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> **)((longlong)pFVar8 + 0x70);
          pFVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)pFVar8 + 0x50);
          if (*(int *)((longlong)pFVar8 + 0x7c) < 0) {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
            if (*(int *)((longlong)pFVar8 + 0x7c) != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,0,pFVar36,0,(int *)((longlong)pFVar8 + 0x7c));
            }
          }
          else {
            if (pFVar28 == (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)0x0) {
              pFVar28 = pFVar36;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)pFVar28,*(int *)((longlong)pFVar8 + 0x78));
            *(undefined4 *)((longlong)pFVar8 + 0x78) = 0;
          }
          if ((ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)
              local_178.AllocatorInstance.Data !=
              (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
            FMemory::Free(local_178.AllocatorInstance.Data);
          }
          if (bVar10) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar15) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          param_2 = (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)local_1b8;
          if (bVar14) {
            FThreadStats::AddMessage(FVar39,CycleScopeEnd);
            param_2 = (TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                       *)local_1b8;
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
      local_1c4 = local_1c4 + 1;
      iVar30 = *(int *)((longlong)param_2 + 0x28);
      local_1b0 = local_1b0 + 1;
      this = local_1a0;
    } while ((int)local_1c4 < iVar30);
  }
  FVar29 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_d8.AllTasks;
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar29 = local_d8.AllTasks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar29,local_d8.AllTasks.ArrayNum);
  if (local_d8.AllTasks.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_d8.AllTasks.AllocatorInstance.SecondaryData);
  }
  FVar27 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_d8;
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FVar27 = local_d8.Prereqs.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
            ((FPrerequisite *)FVar27,local_d8.Prereqs.ArrayNum);
  if (local_d8.Prereqs.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
    FMemory::Free((void *)local_d8.Prereqs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.Subsequents.SharedReferenceCount.ReferenceController);
  return;
}

// FMovieSceneEntitySystemGraph @ 1461195b0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemGraph * __thiscall
FMovieSceneEntitySystemGraph::FMovieSceneEntitySystemGraph
          (FMovieSceneEntitySystemGraph *this,FMovieSceneEntitySystemGraph *param_1)

{
  ForElementType<unsigned_short> FVar1;
  ForElementType<unsigned_int> FVar2;
  
  (this->SpawnPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  if ((param_1->SpawnPhase).AllocatorInstance.SecondaryData == (ForElementType<unsigned_short>)0x0)
  {
    *(undefined8 *)(this->SpawnPhase).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->SpawnPhase).AllocatorInstance.InlineData;
  }
  (this->SpawnPhase).AllocatorInstance.SecondaryData =
       (param_1->SpawnPhase).AllocatorInstance.SecondaryData;
  (param_1->SpawnPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->SpawnPhase).ArrayNum = (param_1->SpawnPhase).ArrayNum;
  (this->SpawnPhase).ArrayMax = (param_1->SpawnPhase).ArrayMax;
  (param_1->SpawnPhase).ArrayNum = 0;
  (param_1->SpawnPhase).ArrayMax = 4;
  (this->InstantiationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  if ((param_1->InstantiationPhase).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_short>)0x0) {
    memmove(&this->InstantiationPhase,&param_1->InstantiationPhase,0x10);
  }
  FVar1 = (this->InstantiationPhase).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->InstantiationPhase).AllocatorInstance.SecondaryData =
       (param_1->InstantiationPhase).AllocatorInstance.SecondaryData;
  (param_1->InstantiationPhase).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_short>)0x0;
  (this->InstantiationPhase).ArrayNum = (param_1->InstantiationPhase).ArrayNum;
  (this->InstantiationPhase).ArrayMax = (param_1->InstantiationPhase).ArrayMax;
  (param_1->InstantiationPhase).ArrayNum = 0;
  (param_1->InstantiationPhase).ArrayMax = 8;
  (this->SchedulingPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  if ((param_1->SchedulingPhase).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_short>)0x0) {
    memmove(&this->SchedulingPhase,&param_1->SchedulingPhase,0x20);
  }
  FVar1 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->SchedulingPhase).AllocatorInstance.SecondaryData =
       (param_1->SchedulingPhase).AllocatorInstance.SecondaryData;
  (param_1->SchedulingPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->SchedulingPhase).ArrayNum = (param_1->SchedulingPhase).ArrayNum;
  (this->SchedulingPhase).ArrayMax = (param_1->SchedulingPhase).ArrayMax;
  (param_1->SchedulingPhase).ArrayNum = 0;
  (param_1->SchedulingPhase).ArrayMax = 0x10;
  (this->EvaluationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  if ((param_1->EvaluationPhase).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_short>)0x0) {
    memmove(&this->EvaluationPhase,&param_1->EvaluationPhase,0x20);
  }
  FVar1 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->EvaluationPhase).AllocatorInstance.SecondaryData =
       (param_1->EvaluationPhase).AllocatorInstance.SecondaryData;
  (param_1->EvaluationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->EvaluationPhase).ArrayNum = (param_1->EvaluationPhase).ArrayNum;
  (this->EvaluationPhase).ArrayMax = (param_1->EvaluationPhase).ArrayMax;
  (param_1->EvaluationPhase).ArrayNum = 0;
  (param_1->EvaluationPhase).ArrayMax = 0x10;
  (this->FinalizationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  if ((param_1->FinalizationPhase).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_short>)0x0) {
    *(undefined4 *)(this->FinalizationPhase).AllocatorInstance.InlineData =
         *(undefined4 *)(param_1->FinalizationPhase).AllocatorInstance.InlineData;
  }
  (this->FinalizationPhase).AllocatorInstance.SecondaryData =
       (param_1->FinalizationPhase).AllocatorInstance.SecondaryData;
  (param_1->FinalizationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0
  ;
  (this->FinalizationPhase).ArrayNum = (param_1->FinalizationPhase).ArrayNum;
  (this->FinalizationPhase).ArrayMax = (param_1->FinalizationPhase).ArrayMax;
  (param_1->FinalizationPhase).ArrayNum = 0;
  (param_1->FinalizationPhase).ArrayMax = 2;
  (this->TaskScheduler).Ptr = (param_1->TaskScheduler).Ptr;
  (param_1->TaskScheduler).Ptr = (FEntitySystemScheduler *)0x0;
  *(undefined8 *)&(this->Nodes).Array = 0;
  *(undefined8 *)&(this->Nodes).Array.field_0x8 = 0;
  *(undefined8 *)&(this->Nodes).Array.field_0x20 = 0;
  *(undefined4 *)&(this->Nodes).Array.field_0x28 = 0;
  *(undefined4 *)&(this->Nodes).Array.field_0x2c = 0x80;
  *(undefined4 *)&(this->Nodes).Array.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Nodes).Array.field_0x34 = 0;
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
  Move<TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>_>
            (&(this->Nodes).Array,&(param_1->Nodes).Array);
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x0 = 0;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x20 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x28 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x34 = 0;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x40 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x48 = 0;
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->GlobalToLocalNodeIDs,
             (TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
              *)&param_1->GlobalToLocalNodeIDs);
  (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->ReferenceGraph,&param_1->ReferenceGraph,0x10);
  }
  FVar2 = (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData =
       (param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData;
  (param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ReferenceGraph).Nodes.NumBits = (param_1->ReferenceGraph).Nodes.NumBits;
  (this->ReferenceGraph).Nodes.MaxBits = (param_1->ReferenceGraph).Nodes.MaxBits;
  (param_1->ReferenceGraph).Nodes.NumBits = 0;
  (param_1->ReferenceGraph).Nodes.MaxBits = 0;
  (this->ReferenceGraph).SortedEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceGraph).SortedEdges.AllocatorInstance.Data =
       (param_1->ReferenceGraph).SortedEdges.AllocatorInstance.Data;
  (param_1->ReferenceGraph).SortedEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceGraph).SortedEdges.ArrayNum = (param_1->ReferenceGraph).SortedEdges.ArrayNum;
  (this->ReferenceGraph).SortedEdges.ArrayMax = (param_1->ReferenceGraph).SortedEdges.ArrayMax;
  (param_1->ReferenceGraph).SortedEdges.ArrayNum = 0;
  (param_1->ReferenceGraph).SortedEdges.ArrayMax = 0;
  (this->ReferenceGraph).bHasDanglingEdges = (param_1->ReferenceGraph).bHasDanglingEdges;
  this->SchedulerSerialNumber = param_1->SchedulerSerialNumber;
  this->SerialNumber = param_1->SerialNumber;
  this->PreviousSerialNumber = param_1->PreviousSerialNumber;
  this->ReentrancyGuard = param_1->ReentrancyGuard;
  return this;
}

// FMovieSceneEntitySystemGraph @ 1461198d0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemGraph * __thiscall
FMovieSceneEntitySystemGraph::FMovieSceneEntitySystemGraph(FMovieSceneEntitySystemGraph *this)

{
  (this->SpawnPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->SpawnPhase).ArrayNum = 0;
  (this->SpawnPhase).ArrayMax = 4;
  (this->InstantiationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->InstantiationPhase).ArrayNum = 0;
  (this->InstantiationPhase).ArrayMax = 8;
  (this->SchedulingPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->SchedulingPhase).ArrayNum = 0;
  (this->SchedulingPhase).ArrayMax = 0x10;
  (this->EvaluationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->EvaluationPhase).ArrayNum = 0;
  (this->EvaluationPhase).ArrayMax = 0x10;
  (this->FinalizationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  (this->FinalizationPhase).ArrayNum = 0;
  (this->FinalizationPhase).ArrayMax = 2;
  (this->TaskScheduler).Ptr = (FEntitySystemScheduler *)0x0;
  *(undefined8 *)&(this->Nodes).Array = 0;
  *(undefined8 *)&(this->Nodes).Array.field_0x8 = 0;
  *(undefined8 *)&(this->Nodes).Array.field_0x20 = 0;
  *(undefined4 *)&(this->Nodes).Array.field_0x28 = 0;
  *(undefined4 *)&(this->Nodes).Array.field_0x2c = 0x80;
  *(undefined4 *)&(this->Nodes).Array.field_0x34 = 0;
  *(undefined4 *)&(this->Nodes).Array.field_0x30 = 0xffffffff;
  *(undefined8 *)&this->GlobalToLocalNodeIDs = 0;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x8 = 0;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x20 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x28 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x34 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GlobalToLocalNodeIDs).field_0x40 = 0;
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x48 = 0;
  (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ReferenceGraph).Nodes.NumBits = 0;
  (this->ReferenceGraph).Nodes.MaxBits = 0x80;
  (this->ReferenceGraph).SortedEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceGraph).SortedEdges.ArrayNum = 0;
  (this->ReferenceGraph).SortedEdges.ArrayMax = 0;
  (this->ReferenceGraph).bHasDanglingEdges = false;
  this->SchedulerSerialNumber = 0;
  this->SerialNumber = 0;
  this->PreviousSerialNumber = 0;
  this->ReentrancyGuard = 0;
  return this;
}

// ~FMovieSceneEntitySystemGraph @ 14611dd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::~FMovieSceneEntitySystemGraph(FMovieSceneEntitySystemGraph *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  void *pvVar3;
  FEntitySystemScheduler *this_00;
  ForElementType<unsigned_short> FVar4;
  
  pFVar1 = (this->ReferenceGraph).SortedEdges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  *(undefined4 *)&(this->GlobalToLocalNodeIDs).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GlobalToLocalNodeIDs).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_short,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GlobalToLocalNodeIDs);
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>(&(this->Nodes).Array)
  ;
  this_00 = (this->TaskScheduler).Ptr;
  if (this_00 != (FEntitySystemScheduler *)0x0) {
    UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(this_00);
    ::operator_delete(this_00,0x1c0,0x40);
  }
  FVar4 = (this->FinalizationPhase).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->InstantiationPhase).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  FVar4 = (this->SpawnPhase).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  return;
}

// operator= @ 14611eec0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntitySystemGraph * __thiscall
FMovieSceneEntitySystemGraph::operator=
          (FMovieSceneEntitySystemGraph *this,FMovieSceneEntitySystemGraph *param_1)

{
  TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_> *pTVar1;
  TUniquePtr<UE::MovieScene::FEntitySystemScheduler,TDefaultDelete<UE::MovieScene::FEntitySystemScheduler>_>
  *pTVar2;
  TUniquePtr<UE::MovieScene::FEntitySystemScheduler,TDefaultDelete<UE::MovieScene::FEntitySystemScheduler>_>
  *pTVar3;
  TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<unsigned_short> FVar5;
  FEntitySystemScheduler *this_00;
  ForElementType<unsigned_int> FVar6;
  FScriptContainerElement *pFVar7;
  
  if (this != param_1) {
    if ((param_1->SpawnPhase).AllocatorInstance.SecondaryData == (ForElementType<unsigned_short>)0x0
       ) {
      *(undefined8 *)(this->SpawnPhase).AllocatorInstance.InlineData =
           *(undefined8 *)(param_1->SpawnPhase).AllocatorInstance.InlineData;
    }
    FVar5 = (this->SpawnPhase).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->SpawnPhase).AllocatorInstance.SecondaryData =
         (param_1->SpawnPhase).AllocatorInstance.SecondaryData;
    (param_1->SpawnPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
    (this->SpawnPhase).ArrayNum = (param_1->SpawnPhase).ArrayNum;
    (this->SpawnPhase).ArrayMax = (param_1->SpawnPhase).ArrayMax;
    (param_1->SpawnPhase).ArrayNum = 0;
    (param_1->SpawnPhase).ArrayMax = 4;
  }
  if (&this->InstantiationPhase != &param_1->InstantiationPhase) {
    if ((param_1->InstantiationPhase).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_short>)0x0) {
      memmove(&this->InstantiationPhase,&param_1->InstantiationPhase,0x10);
    }
    FVar5 = (this->InstantiationPhase).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->InstantiationPhase).AllocatorInstance.SecondaryData =
         (param_1->InstantiationPhase).AllocatorInstance.SecondaryData;
    (param_1->InstantiationPhase).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_short>)0x0;
    (this->InstantiationPhase).ArrayNum = (param_1->InstantiationPhase).ArrayNum;
    (this->InstantiationPhase).ArrayMax = (param_1->InstantiationPhase).ArrayMax;
    (param_1->InstantiationPhase).ArrayNum = 0;
    (param_1->InstantiationPhase).ArrayMax = 8;
  }
  if (&this->SchedulingPhase != &param_1->SchedulingPhase) {
    if ((param_1->SchedulingPhase).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_short>)0x0) {
      memmove(&this->SchedulingPhase,&param_1->SchedulingPhase,0x20);
    }
    FVar5 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->SchedulingPhase).AllocatorInstance.SecondaryData =
         (param_1->SchedulingPhase).AllocatorInstance.SecondaryData;
    (param_1->SchedulingPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0
    ;
    (this->SchedulingPhase).ArrayNum = (param_1->SchedulingPhase).ArrayNum;
    (this->SchedulingPhase).ArrayMax = (param_1->SchedulingPhase).ArrayMax;
    (param_1->SchedulingPhase).ArrayNum = 0;
    (param_1->SchedulingPhase).ArrayMax = 0x10;
  }
  if (&this->EvaluationPhase != &param_1->EvaluationPhase) {
    if ((param_1->EvaluationPhase).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_short>)0x0) {
      memmove(&this->EvaluationPhase,&param_1->EvaluationPhase,0x20);
    }
    FVar5 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->EvaluationPhase).AllocatorInstance.SecondaryData =
         (param_1->EvaluationPhase).AllocatorInstance.SecondaryData;
    (param_1->EvaluationPhase).AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0
    ;
    (this->EvaluationPhase).ArrayNum = (param_1->EvaluationPhase).ArrayNum;
    (this->EvaluationPhase).ArrayMax = (param_1->EvaluationPhase).ArrayMax;
    (param_1->EvaluationPhase).ArrayNum = 0;
    (param_1->EvaluationPhase).ArrayMax = 0x10;
  }
  if (&this->FinalizationPhase != &param_1->FinalizationPhase) {
    if ((param_1->FinalizationPhase).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_short>)0x0) {
      *(undefined4 *)(this->FinalizationPhase).AllocatorInstance.InlineData =
           *(undefined4 *)(param_1->FinalizationPhase).AllocatorInstance.InlineData;
    }
    FVar5 = (this->FinalizationPhase).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<unsigned_short>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    (this->FinalizationPhase).AllocatorInstance.SecondaryData =
         (param_1->FinalizationPhase).AllocatorInstance.SecondaryData;
    (param_1->FinalizationPhase).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_short>)0x0;
    (this->FinalizationPhase).ArrayNum = (param_1->FinalizationPhase).ArrayNum;
    (this->FinalizationPhase).ArrayMax = (param_1->FinalizationPhase).ArrayMax;
    (param_1->FinalizationPhase).ArrayNum = 0;
    (param_1->FinalizationPhase).ArrayMax = 2;
  }
  pTVar2 = &param_1->TaskScheduler;
  pTVar3 = &this->TaskScheduler;
  if (pTVar3 != pTVar2) {
    this_00 = pTVar3->Ptr;
    pTVar3->Ptr = pTVar2->Ptr;
    pTVar2->Ptr = (FEntitySystemScheduler *)0x0;
    if (this_00 != (FEntitySystemScheduler *)0x0) {
      UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(this_00);
      ::operator_delete(this_00,0x1c0,0x40);
    }
  }
  if (&this->Nodes != &param_1->Nodes) {
    TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
    Move<TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>_>
              (&(this->Nodes).Array,&(param_1->Nodes).Array);
  }
  if (&this->GlobalToLocalNodeIDs != &param_1->GlobalToLocalNodeIDs) {
    TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->GlobalToLocalNodeIDs,
               (TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                *)&param_1->GlobalToLocalNodeIDs);
  }
  if (&this->ReferenceGraph != &param_1->ReferenceGraph) {
    if ((param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(&this->ReferenceGraph,&param_1->ReferenceGraph,0x10);
    }
    FVar6 = (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    (this->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData =
         (param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData;
    (param_1->ReferenceGraph).Nodes.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (this->ReferenceGraph).Nodes.NumBits = (param_1->ReferenceGraph).Nodes.NumBits;
    (this->ReferenceGraph).Nodes.MaxBits = (param_1->ReferenceGraph).Nodes.MaxBits;
    (param_1->ReferenceGraph).Nodes.NumBits = 0;
    (param_1->ReferenceGraph).Nodes.MaxBits = 0;
  }
  pTVar4 = &(param_1->ReferenceGraph).SortedEdges;
  pTVar1 = &(this->ReferenceGraph).SortedEdges;
  if (pTVar1 != pTVar4) {
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ReferenceGraph).SortedEdges.ArrayNum = (param_1->ReferenceGraph).SortedEdges.ArrayNum;
    (this->ReferenceGraph).SortedEdges.ArrayMax = (param_1->ReferenceGraph).SortedEdges.ArrayMax;
    (param_1->ReferenceGraph).SortedEdges.ArrayNum = 0;
    (param_1->ReferenceGraph).SortedEdges.ArrayMax = 0;
  }
  (this->ReferenceGraph).bHasDanglingEdges = (param_1->ReferenceGraph).bHasDanglingEdges;
  this->SchedulerSerialNumber = param_1->SchedulerSerialNumber;
  this->SerialNumber = param_1->SerialNumber;
  this->PreviousSerialNumber = param_1->PreviousSerialNumber;
  this->ReentrancyGuard = param_1->ReentrancyGuard;
  return this;
}

// AddReference @ 146123210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::AddReference
          (FMovieSceneEntitySystemGraph *this,UMovieSceneEntitySystem *param_1,
          UMovieSceneEntitySystem *param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = param_1->GraphID;
  uVar2 = param_2->GraphID;
  if ((uVar1 == 0xffff) || (uVar2 == 0xffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromID != TNumericLimits<uint16>::Max() && ToID != TNumericLimits<uint16>::Max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                       ,0x39,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UE::MovieScene::FDirectedGraph::MakeEdge(&this->ReferenceGraph,uVar1,uVar2);
  return;
}

// AddSystem @ 146123910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::AddSystem
          (FMovieSceneEntitySystemGraph *this,UMovieSceneEntitySystem *param_1)

{
  FMovieSceneEntitySystemGraphNodes *this_00;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ushort local_res8 [4];
  ushort local_res10 [8];
  FSparseArrayAllocationInfo local_38;
  ushort *local_28;
  ushort *local_20;
  
  if ((this->ReentrancyGuard != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReentrancyGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,0x21,L"Attempting to add a system to the graph recursively."), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this->Nodes;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneEntitySystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar6 = *(int *)&(this->Nodes).Array.field_0x34;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this_00,(int *)&(this->Nodes).Array.field_0x8,
                       (int *)&(this->Nodes).Array.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Nodes).Array.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Nodes).Array.field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this_00->Array;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Nodes).Array.field_0x30 = iVar1;
    *(int *)&(this->Nodes).Array.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<40,8,FDefaultSparseArrayAllocator> *)this_00,&local_38,iVar5);
  if (local_38.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(UMovieSceneEntitySystem **)((longlong)local_38.Pointer + 0x20) = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UMovieSceneEntitySystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_38.Index < 0) || (0xfffe < local_38.Index)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewIndex >= 0 && NewIndex < TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,0x26,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8[0] = (ushort)local_38.Index;
  UE::MovieScene::FDirectedGraph::AllocateNode(&this->ReferenceGraph,local_res8[0]);
  param_1->GraphID = local_res8[0];
  if (*(int *)&(this->GlobalToLocalNodeIDs).field_0x8 !=
      *(int *)&(this->GlobalToLocalNodeIDs).field_0x34) {
    puVar7 = *(undefined1 **)&(this->GlobalToLocalNodeIDs).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->GlobalToLocalNodeIDs).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->GlobalToLocalNodeIDs).field_0x48 - 1) &
                              (ulonglong)param_1->GlobalDependencyGraphID) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->GlobalToLocalNodeIDs).field_0x0;
      do {
        if (*(ushort *)(lVar2 + (longlong)iVar6 * 0xc) == param_1->GlobalDependencyGraphID) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GlobalToLocalNodeIDs.Contains(InSystem->GetGlobalDependencyGraphID())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                             ,0x2e,L"Got more than one instance of a given system class");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0xc);
      } while (iVar6 != -1);
    }
  }
  local_res10[0] = param_1->GlobalDependencyGraphID;
  local_28 = local_res10;
  local_20 = local_res8;
  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_short_&&,unsigned_short_const_&>_>
            ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->GlobalToLocalNodeIDs,
             (TPairInitializer<unsigned_short_&&,unsigned_short_const_&> *)(local_res10 + 4),
             (bool *)&local_28);
  this->SerialNumber = this->SerialNumber + 1;
  return;
}

// DebugPrint @ 14612aae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieSceneEntitySystemGraph::DebugPrint(FMovieSceneEntitySystemGraph *this)

{
  FOutputDeviceRedirector *pFVar1;
  FString local_28;
  FString local_18;
  
  pFVar1 = GetGlobalLogSingleton();
  FOutputDevice::Log((FOutputDevice *)pFVar1,
                     L"Printing debug graph for Entity System Graph (in standard graphviz syntax):")
  ;
  pFVar1 = GetGlobalLogSingleton();
  ToString(this,&local_18);
  ::FString::PrintfImpl
            (&local_28,
             L"----------------------------------------------------------------------------------\n%s\n----------------------------------------------------------------------------------\n"
            );
  FOutputDevice::Log((FOutputDevice *)pFVar1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ExecutePhase @ 14612fe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::ExecutePhase
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          UMovieSceneEntitySystemLinker *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  undefined1 local_res10 [8];
  
  UpdateCache(this);
  if (param_1 == Spawn) {
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
              (this,Spawn,&this->SpawnPhase,param_2,param_3);
  }
  else if (param_1 == Instantiation) {
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
              (this,Instantiation,&this->InstantiationPhase,param_2,param_3);
  }
  else if (param_1 == Evaluation) {
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
              (this,Evaluation,&this->EvaluationPhase,param_2,param_3);
  }
  else if (param_1 == Finalization) {
    ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
              (this,Finalization,&this->FinalizationPhase,param_2,param_3);
  }
  else {
    `FMovieSceneEntitySystemGraph::ExecutePhase'::__l4::<lambda_1>::operator()(local_res10);
  }
  return;
}

// FindSystemOfType @ 146132240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystem * __thiscall
FMovieSceneEntitySystemGraph::FindSystemOfType
          (FMovieSceneEntitySystemGraph *this,TSubclassOf<UMovieSceneEntitySystem> param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UMovieSceneEntitySystem *pUVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  lVar10 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar10 != 0) && (pUVar7 = UMovieSceneEntitySystem::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar3 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      local_res18 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_1461322a2;
    }
  }
  local_res18 = 0;
LAB_1461322a2:
  local_88 = 0;
  iVar3 = *(int *)&(this->Nodes).Array.field_0x28;
  puVar2 = &(this->Nodes).Array.field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Nodes).Array.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar12 = *puVar14;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146132349;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_84 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_146132349:
      iStack_74 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Nodes).Array.field_0x28;
  local_40 = *(int *)&(this->Nodes).Array.field_0x8 - *(int *)&(this->Nodes).Array.field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar11 = (int)uVar12 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar15 = uVar12 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar8 = (UMovieSceneEntitySystem *)(*pcVar5)();
    return pUVar8;
  }
  lVar10 = local_res18;
  uVar4 = *(uint *)&(this->Nodes).Array.field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Nodes).Array.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_146132430;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_146132430:
  while( true ) {
    if (*(int *)&(this->Nodes).Array.field_0x8 - *(int *)&(this->Nodes).Array.field_0x34 != local_40
       ) {
      `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar12) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar8 = *(UMovieSceneEntitySystem **)
              (*(longlong *)&(this->Nodes).Array + 0x20 + (longlong)local_60.CurrentBitIndex * 0x28)
    ;
    if (pUVar8->_padding_ == lVar10) {
      return pUVar8;
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return (UMovieSceneEntitySystem *)0x0;
}

// GetGraphID @ 14613b190

/* WARNING: Enum "Type": Some values do not have unique names */

ushort __cdecl FMovieSceneEntitySystemGraph::GetGraphID(UMovieSceneEntitySystem *param_1)

{
  return param_1->GraphID;
}

// GetSystems @ 14613cd30

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneEntitySystem_*,TSizedDefaultAllocator<32>_> * __thiscall
FMovieSceneEntitySystemGraph::GetSystems
          (FMovieSceneEntitySystemGraph *this,
          TArray<UMovieSceneEntitySystem_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMovieSceneEntitySystemGraphNodes *pFVar5;
  bool bVar6;
  int iVar7;
  TArray<UMovieSceneEntitySystem_*,TSizedDefaultAllocator<32>_> *pTVar8;
  byte bVar9;
  longlong lVar10;
  FMovieSceneEntitySystemGraphNodes *pFVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined8 local_b8;
  ForElementType<unsigned_int> local_b0;
  FMovieSceneEntitySystemGraphNodes *local_a8;
  int local_a0;
  uint uStack_9c;
  undefined1 *puStack_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FMovieSceneEntitySystemGraphNodes *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  uStack_9c = 1;
  pFVar11 = &this->Nodes;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b0 = (ForElementType<unsigned_int>)&(this->Nodes).Array.field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar7 = *(int *)&(this->Nodes).Array.field_0x28;
  local_a0 = 0;
  iStack_8c = 0;
  iStack_88 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->Nodes).Array.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_b0;
    }
    uVar16 = *puVar14;
    iStack_88 = 0;
    local_a0 = 0;
    while (uVar16 == 0) {
      lVar10 = (longlong)local_a0;
      iStack_88 = iStack_88 + 0x20;
      local_a0 = local_a0 + 1;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0) goto LAB_14613cdfa;
      uVar16 = (puVar14 + 1)[lVar10];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_8c = local_res18 + -1 + iStack_88;
    if (iVar7 < iStack_8c) {
LAB_14613cdfa:
      iStack_8c = iVar7;
    }
  }
  local_90 = 0xffffffff;
  local_res10 = *(uint *)&(this->Nodes).Array.field_0x28;
  local_58 = *(int *)&(this->Nodes).Array.field_0x8 - *(int *)&(this->Nodes).Array.field_0x34;
  local_78._padding_ = CONCAT44(uStack_9c,local_a0);
  bVar9 = (byte)local_res10;
  local_78.CurrentBitIndex = iStack_8c;
  local_78.UnvisitedBitMask = 0xffffffff;
  local_78._28_4_ = uStack_84;
  local_78.BaseBitIndex = iStack_88;
  iVar15 = (int)local_res10 >> 5;
  uVar16 = local_res10 & 0xffffffe0;
  local_a8 = pFVar11;
  puStack_98 = (undefined1 *)local_b0;
  local_80 = pFVar11;
  local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b0;
  if ((((int)local_res10 < 0) || (iVar7 < (int)local_res10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UMovieSceneEntitySystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar5 = local_a8;
  uVar2 = *(int *)((longlong)local_b0 + 0x18);
  uVar12 = local_res10;
  if (local_res10 != uVar2) {
    FVar13 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_b0;
    }
    uVar12 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      local_res10 = uVar2;
      uVar12 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14613cf00;
      uVar12 = *(uint *)((undefined1 *)((longlong)FVar13 + 4) + lVar10 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    local_res10 = local_res20 + -1 + uVar16;
    uVar12 = local_res10;
    if ((int)uVar2 < (int)local_res10) {
      local_res10 = uVar2;
      uVar12 = uVar2;
    }
  }
LAB_14613cf00:
  while( true ) {
    if (*(int *)&(pFVar11->Array).field_0x8 - *(int *)&(pFVar11->Array).field_0x34 != local_58) {
      local_res8[0] = 0;
      `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_78.CurrentBitIndex == uVar12) &&
        ((ForElementType<unsigned_int>)local_78.Array == local_b0)) && (pFVar11 == pFVar5)) break;
    local_b8 = *(undefined8 *)
                (*(longlong *)&pFVar11->Array + 0x20 + (longlong)local_78.CurrentBitIndex * 0x28);
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<UMovieSceneEntitySystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == __return_storage_ptr__->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_b8;
    local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
    pFVar11 = local_80;
  }
  return __return_storage_ptr__;
}

// IteratePhase @ 1461419c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::IteratePhase
          (FMovieSceneEntitySystemGraph *this,ESystemPhase param_1,
          TFunctionRef<void___cdecl(UMovieSceneEntitySystem_*)> *param_2)

{
  ForElementType<unsigned_short> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  ForElementType<unsigned_short> local_28;
  
  UpdateCache(this);
  if (param_1 == Spawn) {
    FVar1 = (this->SpawnPhase).AllocatorInstance.SecondaryData;
    iVar4 = (this->SpawnPhase).ArrayNum;
    local_28 = (ForElementType<unsigned_short>)this;
    if (FVar1 != (ForElementType<unsigned_short>)0x0) {
      local_28 = FVar1;
    }
  }
  else if (param_1 == Instantiation) {
    local_28 = (this->InstantiationPhase).AllocatorInstance.SecondaryData;
    iVar4 = (this->InstantiationPhase).ArrayNum;
    if (local_28 == (ForElementType<unsigned_short>)0x0) {
      local_28 = (ForElementType<unsigned_short>)&this->InstantiationPhase;
    }
  }
  else if (param_1 == Scheduling) {
    local_28 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
    iVar4 = (this->SchedulingPhase).ArrayNum;
    if (local_28 == (ForElementType<unsigned_short>)0x0) {
      local_28 = (ForElementType<unsigned_short>)&this->SchedulingPhase;
    }
  }
  else if (param_1 == Evaluation) {
    local_28 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
    iVar4 = (this->EvaluationPhase).ArrayNum;
    if (local_28 == (ForElementType<unsigned_short>)0x0) {
      local_28 = (ForElementType<unsigned_short>)&this->EvaluationPhase;
    }
  }
  else {
    if (param_1 != Finalization) {
      `FMovieSceneEntitySystemGraph::IteratePhase'::__l4::<lambda_1>::operator()(local_res10);
      return;
    }
    local_28 = (this->FinalizationPhase).AllocatorInstance.SecondaryData;
    iVar4 = (this->FinalizationPhase).ArrayNum;
    if (local_28 == (ForElementType<unsigned_short>)0x0) {
      local_28 = (ForElementType<unsigned_short>)&this->FinalizationPhase;
    }
  }
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar1 = (ForElementType<unsigned_short>)((longlong)local_28 + (longlong)iVar4 * 2);
  for (; local_28 != FVar1; local_28 = (ForElementType<unsigned_short>)((longlong)local_28 + 2)) {
    local_res20 = *(undefined8 *)
                   (*(longlong *)&(this->Nodes).Array + 0x20 + (ulonglong)*(ushort *)local_28 * 0x28
                   );
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
  }
  return;
}

// NumInPhase @ 146145970

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMovieSceneEntitySystemGraph::NumInPhase(FMovieSceneEntitySystemGraph *this,ESystemPhase param_1)

{
  undefined1 local_res10 [24];
  
  if (param_1 == Spawn) {
    return (this->SpawnPhase).ArrayNum;
  }
  if (param_1 == Instantiation) {
    return (this->InstantiationPhase).ArrayNum;
  }
  if (param_1 == Evaluation) {
    return (this->EvaluationPhase).ArrayNum;
  }
  if (param_1 != Finalization) {
    `FMovieSceneEntitySystemGraph::NumInPhase'::__l4::<lambda_1>::operator()(local_res10);
    return 0;
  }
  return (this->FinalizationPhase).ArrayNum;
}

// ReconstructTaskSchedule @ 14614baa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::ReconstructTaskSchedule
          (FMovieSceneEntitySystemGraph *this,FEntityManager *param_1)

{
  TUniquePtr<UE::MovieScene::FEntitySystemScheduler,TDefaultDelete<UE::MovieScene::FEntitySystemScheduler>_>
  *pTVar1;
  ulong64 *puVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  ForElementType<unsigned_short> FVar5;
  UMovieSceneEntitySystem *pUVar6;
  undefined1 *puVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FEntitySystemScheduler *pFVar13;
  FEntitySystemScheduler *pFVar14;
  ForElementType<unsigned_short> FVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  ForAnyElementType FVar18;
  FEntitySystemScheduler *pFVar19;
  ushort uVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  longlong local_58;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_50;
  
  bVar10 = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
  if (!bVar10) {
    return;
  }
  UpdateCache(this);
  pTVar1 = &this->TaskScheduler;
  pFVar19 = (FEntitySystemScheduler *)0x0;
  if (pTVar1->Ptr == (FEntitySystemScheduler *)0x0) {
    pFVar13 = ::operator_new(0x1c0,0x40);
    pFVar14 = pFVar19;
    if (pFVar13 != (FEntitySystemScheduler *)0x0) {
      pFVar14 = UE::MovieScene::FEntitySystemScheduler::FEntitySystemScheduler(pFVar13,param_1);
    }
    if (pTVar1 == (TUniquePtr<UE::MovieScene::FEntitySystemScheduler,TDefaultDelete<UE::MovieScene::FEntitySystemScheduler>_>
                   *)&local_58) {
      if (pFVar14 == (FEntitySystemScheduler *)0x0) goto LAB_14614bb54;
      UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(pFVar14);
    }
    else {
      pFVar13 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar14;
      if (pFVar13 == (FEntitySystemScheduler *)0x0) goto LAB_14614bb54;
      UE::MovieScene::FEntitySystemScheduler::~FEntitySystemScheduler(pFVar13);
      pFVar14 = pFVar13;
    }
    ::operator_delete(pFVar14,0x1c0,0x40);
  }
LAB_14614bb54:
  UE::MovieScene::FEntitySystemScheduler::BeginConstruction(pTVar1->Ptr);
  pFVar14 = pFVar19;
  if (0 < (this->SchedulingPhase).ArrayNum) {
    do {
      uVar21 = (uint)pFVar14;
      uVar11 = 0;
      if ((int)uVar21 < (this->SchedulingPhase).ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar5 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_short>)&this->SchedulingPhase;
      if (FVar5 != (ForElementType<unsigned_short>)0x0) {
        FVar15 = FVar5;
      }
      uVar20 = *(ushort *)((longlong)&(pFVar19->Tasks).AllocatorInstance.Data + (longlong)FVar15);
      local_res20 = (ulonglong)uVar20;
      pUVar6 = *(UMovieSceneEntitySystem **)
                (*(longlong *)&(this->Nodes).Array + 0x20 + local_res20 * 0x28);
      UE::MovieScene::FEntitySystemScheduler::BeginSystem(pTVar1->Ptr,uVar20);
      pFVar14 = pTVar1->Ptr;
      if (pUVar6->bSystemIsEnabled != false) {
        if (((pUVar6->Linker).field0_0x0.DebugPtr == (UMovieSceneEntitySystemLinker *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Linker != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystem.cpp"
                                ,0x2e8,L"Attempting to evaluate a system that has been unlinked!"),
           bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar10 = UE::MovieScene::FSystemFilter::CheckSystem
                           (&((pUVar6->Linker).field0_0x0.DebugPtr)->SystemFilter,pUVar6);
        if (bVar10) {
          puVar2 = &(((pUVar6->Linker).field0_0x0.DebugPtr)->EntityManager).SystemSerialNumber;
          *puVar2 = *puVar2 + 1;
          (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6,pFVar14);
        }
      }
      bVar10 = UE::MovieScene::FEntitySystemScheduler::HasAnyTasksToPropagateDownstream(pTVar1->Ptr)
      ;
      if (bVar10) {
        local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_50.ArrayNum = 0;
        local_50.ArrayMax = 0;
        UMovieSceneEntitySystem::GetSubsequentSystems(pUVar6->GlobalDependencyGraphID,&local_50);
        iVar9 = local_50.ArrayNum;
        pFVar3 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 2;
        FVar18.Data = local_50.AllocatorInstance.Data;
        while( true ) {
          if (local_50.ArrayNum != iVar9) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (FVar18.Data == pFVar3) break;
          if (*(int *)&(this->GlobalToLocalNodeIDs).field_0x8 ==
              *(int *)&(this->GlobalToLocalNodeIDs).field_0x34) {
LAB_14614bd4d:
            FVar18.Data = FVar18.Data + 2;
          }
          else {
            puVar7 = *(undefined1 **)&(this->GlobalToLocalNodeIDs).field_0x40;
            puVar16 = &(this->GlobalToLocalNodeIDs).field_0x38;
            if (puVar7 != (undefined1 *)0x0) {
              puVar16 = puVar7;
            }
            iVar12 = *(int *)(puVar16 +
                             ((ulonglong)(*(int *)&(this->GlobalToLocalNodeIDs).field_0x48 - 1) &
                             (ulonglong)*(ushort *)FVar18.Data) * 4);
            if (iVar12 == -1) goto LAB_14614bd4d;
            do {
              lVar4 = *(longlong *)&this->GlobalToLocalNodeIDs + (longlong)iVar12 * 0xc;
              if (*(ushort *)(*(longlong *)&this->GlobalToLocalNodeIDs + (longlong)iVar12 * 0xc) ==
                  *(ushort *)FVar18.Data) {
                puVar17 = (ushort *)(lVar4 + 2);
                if (lVar4 == 0) {
                  puVar17 = (ushort *)0x0;
                }
                if (puVar17 != (ushort *)0x0) {
                  UE::MovieScene::FEntitySystemScheduler::PropagatePrerequisite
                            (pTVar1->Ptr,*puVar17);
                }
                goto LAB_14614bd4d;
              }
              iVar12 = *(int *)(lVar4 + 4);
            } while (iVar12 != -1);
            FVar18.Data = FVar18.Data + 2;
          }
        }
        uVar20 = (ushort)local_res20;
        if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.AllocatorInstance.Data);
        }
      }
      UE::MovieScene::FEntitySystemScheduler::EndSystem(pTVar1->Ptr,uVar20);
      pFVar19 = (FEntitySystemScheduler *)((longlong)&(pFVar19->Tasks).AllocatorInstance.Data + 2);
      pFVar14 = (FEntitySystemScheduler *)(ulonglong)(uVar21 + 1);
    } while ((int)(uVar21 + 1) < (this->SchedulingPhase).ArrayNum);
  }
  UE::MovieScene::FEntitySystemScheduler::EndConstruction(pTVar1->Ptr);
  this->SchedulerSerialNumber = param_1->SystemSerialNumber;
  return;
}

// RemoveIrrelevantSystems @ 14614fe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FMovieSceneEntitySystemGraph::RemoveIrrelevantSystems
          (FMovieSceneEntitySystemGraph *this,UMovieSceneEntitySystemLinker *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  UMovieSceneEntitySystem *pUVar6;
  UMovieSceneEntitySystemLinker *pUVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  FComponentMask *pFVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> FVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *pTVar23;
  uint uVar24;
  int iVar25;
  uint *puVar26;
  FMovieSceneEntitySystemGraph *pFVar27;
  uint uVar28;
  undefined1 auStack_148 [32];
  int local_128;
  undefined1 local_124 [4];
  ushort local_120 [4];
  ushort local_118 [4];
  ForElementType<unsigned_int> local_110;
  FMovieSceneEntitySystemGraph *local_108;
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *local_100;
  int local_f8;
  uint uStack_f4;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  int local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  FDirectedGraph *local_98;
  FBreadthFirstSearch local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_108 = this;
  if ((this->ReentrancyGuard != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReentrancyGuard == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                          ,0x61,L"Attempting to remove a system from the graph recursively."),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  this->ReentrancyGuard = this->ReentrancyGuard + 1;
  if ((this->PreviousSerialNumber != this->SerialNumber) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousSerialNumber == SerialNumber",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                          ,100,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  local_98 = &this->ReferenceGraph;
  local_128 = 0;
  UE::MovieScene::FDirectedGraph::FBreadthFirstSearch::FBreadthFirstSearch(&local_88,local_98);
  pTVar23 = &(this->Nodes).Array;
  local_f8 = 0;
  iVar12 = *(int *)&(this->Nodes).Array.field_0x28;
  local_110 = (ForElementType<unsigned_int>)&(this->Nodes).Array.field_0x10;
  uStack_f4 = 1;
  iStack_e4 = 0;
  iStack_e0 = 0;
  if (iVar12 != 0) {
    puVar26 = *(uint **)&(this->Nodes).Array.field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_110;
    }
    uVar24 = *puVar26;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar24 == 0) {
      iStack_e0 = iStack_e0 + 0x20;
      lVar19 = (longlong)local_f8;
      local_f8 = local_f8 + 1;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < local_f8) goto LAB_14614ffc0;
      uVar24 = (puVar26 + 1)[lVar19];
    }
    uStack_f4 = ~(uVar24 - 1) & uVar24;
    uVar20 = (ulonglong)uStack_f4 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_a8 = (int)lVar19;
    iStack_e4 = local_a8 + -1 + iStack_e0;
    if (iVar12 < iStack_e4) {
LAB_14614ffc0:
      iStack_e4 = iVar12;
    }
  }
  local_e8 = 0xffffffff;
  uVar24 = *(uint *)&(this->Nodes).Array.field_0x28;
  local_b0 = *(int *)&(this->Nodes).Array.field_0x8 - *(int *)&(this->Nodes).Array.field_0x34;
  local_d0._padding_ = CONCAT44(uStack_f4,local_f8);
  local_d0.CurrentBitIndex = iStack_e4;
  local_d0.UnvisitedBitMask = 0xffffffff;
  local_d0._28_4_ = uStack_dc;
  local_d0.BaseBitIndex = iStack_e0;
  iVar25 = (int)uVar24 >> 5;
  uVar28 = uVar24 & 0xffffffe0;
  local_100 = pTVar23;
  puStack_f0 = (undefined1 *)local_110;
  local_d8 = pTVar23;
  local_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar24 < 0) || (iVar12 < (int)uVar24)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  FVar16 = local_110;
  uVar22 = *(int *)((longlong)local_110 + 0x18);
  if (uVar24 != uVar22) {
    FVar15 = local_110;
    if (*(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = *(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10);
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar25 * 4);
    while (uVar24 == 0) {
      lVar19 = (longlong)iVar25;
      uVar28 = uVar28 + 0x20;
      iVar25 = iVar25 + 1;
      uVar24 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_1461500c0;
      uVar24 = *(uint *)((undefined1 *)((longlong)FVar15 + 4) + lVar19 * 4);
    }
    uVar20 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_a4 = (int)lVar19;
    uVar24 = local_a4 + -1 + uVar28;
    if ((int)uVar22 < (int)uVar24) {
      uVar24 = uVar22;
    }
  }
LAB_1461500c0:
  do {
    if (*(int *)&pTVar23->field_0x8 - *(int *)&pTVar23->field_0x34 != local_b0) {
      local_124[0] = 0;
      `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_124);
    }
    lVar19 = (longlong)local_d0.CurrentBitIndex;
    if (((local_d0.CurrentBitIndex == uVar24) &&
        ((ForElementType<unsigned_int>)local_d0.Array == FVar16)) && (pTVar23 == local_100)) {
      iVar12 = *(int *)&(local_108->Nodes).Array.field_0x8;
      pFVar27 = local_108;
      if (local_88.Visited.NumBits < iVar12) goto LAB_146150240;
      FVar16 = (ForElementType<unsigned_int>)&local_88.Visited;
      if (local_88.Visited.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_88.Visited.AllocatorInstance.SecondaryData;
      }
      uVar20 = 0;
      FVar15 = FVar16;
      if (local_88.Visited.NumBits + 0x1fU >> 5 != 0) break;
      iVar25 = 0;
      goto LAB_1461505be;
    }
    lVar4 = *(longlong *)pTVar23;
    uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x20 + lVar19 * 0x28) + 0x34);
    if ((local_88.Visited.NumBits <= (int)(uint)uVar2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      iVar12 = (*pcVar8)();
      return iVar12;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_88.Visited;
    if (local_88.Visited.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_88.Visited.AllocatorInstance.SecondaryData;
    }
    if ((*(uint *)((longlong)FVar15 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
      plVar5 = *(longlong **)(lVar4 + lVar19 * 0x28 + 0x20);
      uVar3 = *(ushort *)(plVar5 + 6);
      if (uVar3 == 0xffff) {
LAB_146150191:
        cVar11 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
        if (cVar11 == '\0') goto LAB_1461501b0;
      }
      else {
        pFVar14 = UE::MovieScene::FEntityManager::GetAccumulatedMask(&param_1->EntityManager);
        if (((pFVar14->Bits).NumBits <= (int)(uint)uVar3) ||
           ((*(uint *)(pFVar14->Bits).AllocatorInstance.InlineData[uVar3 >> 5].Pad >> (uVar3 & 0x1f)
            & 1) == 0)) goto LAB_146150191;
      }
      UE::MovieScene::FDirectedGraph::FBreadthFirstSearch::Search(&local_88,uVar2);
    }
LAB_1461501b0:
    local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
    pTVar23 = local_d8;
  } while( true );
LAB_146150204:
  iVar25 = local_128;
  if (*(int *)FVar15 != -1) {
    uVar24 = ~*(uint *)((longlong)FVar16 + uVar20 * 4);
    local_a0 = 0;
    if (uVar24 != 0) {
      for (; (uVar24 >> local_a0 & 1) == 0; local_a0 = local_a0 + 1) {
      }
    }
    iVar17 = 0x20;
    if (uVar24 != 0) {
      iVar17 = local_a0;
    }
    iVar17 = iVar17 + (int)uVar20 * 0x20;
    if ((iVar17 < local_88.Visited.NumBits) && (iVar17 != -1)) {
LAB_146150240:
      uVar24 = 0;
      pTVar23 = local_100;
      if (iVar12 < 1) {
        iVar25 = 0;
      }
      else {
        do {
          if ((((int)uVar24 < 0) || (*(int *)&(pFVar27->Nodes).Array.field_0x28 <= (int)uVar24)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            iVar12 = (*pcVar8)();
            return iVar12;
          }
          puVar18 = *(undefined1 **)&(pFVar27->Nodes).Array.field_0x20;
          puVar21 = &(pFVar27->Nodes).Array.field_0x10;
          if (puVar18 != (undefined1 *)0x0) {
            puVar21 = puVar18;
          }
          uVar28 = uVar24;
          if ((int)uVar24 < 0) {
            uVar28 = uVar24 + 0x1f;
          }
          uVar22 = 1 << ((byte)uVar24 & 0x1f);
          lVar19 = (longlong)((int)uVar28 >> 5) * 4;
          if ((*(uint *)(puVar21 + lVar19) & uVar22) != 0) {
            if ((((int)uVar24 < 0) || (local_88.Visited.NumBits <= (int)uVar24)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              iVar12 = (*pcVar8)();
              return iVar12;
            }
            FVar16 = (ForElementType<unsigned_int>)&local_88.Visited;
            if (local_88.Visited.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar16 = local_88.Visited.AllocatorInstance.SecondaryData;
            }
            if ((*(uint *)(lVar19 + (longlong)FVar16) & uVar22) == 0) {
              uVar28 = uVar24 & 0xffff;
              UE::MovieScene::FDirectedGraph::RemoveNode(local_98,(ushort)uVar24);
              pUVar6 = *(UMovieSceneEntitySystem **)
                        (*(longlong *)pTVar23 + 0x20 + (ulonglong)uVar28 * 0x28);
              TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
              DestroyElements(pTVar23,uVar28,1);
              FVar16 = local_110;
              lVar19 = *(longlong *)pTVar23;
              bVar9 = (byte)uVar28 & 0x1f;
              uVar22 = 1 << bVar9 | 1U >> 0x20 - bVar9;
              if ((*(int *)((longlong)local_110 + 0x18) <= (int)uVar28) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                iVar12 = (*pcVar8)();
                return iVar12;
              }
              FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
              if (FVar15 != (ForElementType<unsigned_int>)0x0) {
                FVar16 = FVar15;
              }
              if (((*(uint *)((longlong)FVar16 + (ulonglong)(uVar28 >> 5) * 4) & uVar22) == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("AllocationFlags[Index]",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                      ,0xc5,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                iVar12 = (*pcVar8)();
                return iVar12;
              }
              pTVar23 = local_100;
              if (*(int *)&(local_108->Nodes).Array.field_0x34 != 0) {
                *(uint *)(lVar19 + (longlong)*(int *)&(local_108->Nodes).Array.field_0x30 * 0x28) =
                     uVar28;
              }
              puVar1 = (undefined4 *)(lVar19 + (longlong)(int)uVar28 * 0x28);
              *puVar1 = 0xffffffff;
              if (*(int *)&local_100->field_0x34 < 1) {
                uVar13 = 0xffffffff;
              }
              else {
                uVar13 = *(undefined4 *)&local_100->field_0x30;
              }
              puVar1[1] = uVar13;
              *(int *)&local_100->field_0x34 = *(int *)&local_100->field_0x34 + 1;
              *(uint *)&local_100->field_0x30 = uVar28;
              if ((*(int *)&local_100->field_0x28 <= (int)uVar28) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                iVar12 = (*pcVar8)();
                return iVar12;
              }
              pFVar27 = local_108;
              puVar18 = &pTVar23->field_0x10;
              if (*(undefined1 **)&pTVar23->field_0x20 != (undefined1 *)0x0) {
                puVar18 = *(undefined1 **)&pTVar23->field_0x20;
              }
              *(uint *)(puVar18 + (ulonglong)(uVar28 >> 5) * 4) =
                   *(uint *)(puVar18 + (ulonglong)(uVar28 >> 5) * 4) & ~uVar22;
              local_120[0] = pUVar6->GlobalDependencyGraphID;
              pUVar6->GraphID = 0xffff;
              if (*(int *)&(local_108->GlobalToLocalNodeIDs).field_0x8 !=
                  *(int *)&(local_108->GlobalToLocalNodeIDs).field_0x34) {
                TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_short>
                          ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                            *)&local_108->GlobalToLocalNodeIDs,(uint)local_120[0],local_120);
              }
              if (pUVar6->GraphID != 0xffff) {
                pUVar7 = (pUVar6->Linker).field0_0x0.DebugPtr;
                if (((pUVar7->SystemGraph).ReentrancyGuard != 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ReentrancyGuard == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                                        ,0x4a,
                                        L"Attempting to remove a system from the graph recursively."
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  iVar12 = (*pcVar8)();
                  return iVar12;
                }
                puVar26 = &(pUVar7->SystemGraph).ReentrancyGuard;
                *puVar26 = *puVar26 + 1;
                uVar2 = pUVar6->GraphID;
                if ((uVar2 == 0xffff) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NodeID != TNumericLimits<uint16>::Max()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                                        ,0x4f,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  iVar12 = (*pcVar8)();
                  return iVar12;
                }
                UE::MovieScene::FDirectedGraph::RemoveNode
                          (&(pUVar7->SystemGraph).ReferenceGraph,uVar2);
                TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
                RemoveAt(&(pUVar7->SystemGraph).Nodes.Array,(uint)uVar2,1);
                local_118[0] = pUVar6->GlobalDependencyGraphID;
                pUVar6->GraphID = 0xffff;
                if (*(int *)&(pUVar7->SystemGraph).GlobalToLocalNodeIDs.field_0x8 !=
                    *(int *)&(pUVar7->SystemGraph).GlobalToLocalNodeIDs.field_0x34) {
                  TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                  ::RemoveImpl<unsigned_short>
                            ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                              *)&(pUVar7->SystemGraph).GlobalToLocalNodeIDs,(uint)local_118[0],
                             local_118);
                }
                puVar26 = &(pUVar7->SystemGraph).SerialNumber;
                *puVar26 = *puVar26 + 1;
                puVar26 = &(pUVar7->SystemGraph).ReentrancyGuard;
                *puVar26 = *puVar26 - 1;
                UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges
                          (&(pUVar7->SystemGraph).ReferenceGraph);
                pTVar23 = local_100;
              }
              (**(code **)(pUVar6->_padding_ + 0x2c8))(pUVar6);
              UMovieSceneEntitySystemLinker::SystemUnlinked
                        ((pUVar6->Linker).field0_0x0.DebugPtr,pUVar6);
              (pUVar6->Linker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
              local_128 = local_128 + 1;
            }
          }
          iVar25 = local_128;
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < *(int *)&(pFVar27->Nodes).Array.field_0x8);
        if (0 < local_128) {
          pFVar27->SerialNumber = pFVar27->SerialNumber + 1;
          UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges(&pFVar27->ReferenceGraph);
        }
      }
    }
LAB_1461505be:
    pFVar27->ReentrancyGuard = pFVar27->ReentrancyGuard - 1;
    if (local_88.Visited.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.Visited.AllocatorInstance.SecondaryData);
    }
    if (local_88.Nodes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Nodes.AllocatorInstance.Data);
    }
    return iVar25;
  }
  uVar24 = (int)uVar20 + 1;
  uVar20 = (ulonglong)uVar24;
  FVar15 = (ForElementType<unsigned_int>)((longlong)FVar15 + 4);
  if ((int)(local_88.Visited.NumBits + 0x1fU >> 5) <= (int)uVar24) goto LAB_1461505be;
  goto LAB_146150204;
}

// RemoveReference @ 146150700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::RemoveReference
          (FMovieSceneEntitySystemGraph *this,UMovieSceneEntitySystem *param_1,
          UMovieSceneEntitySystem *param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  TLess<void> TVar4;
  bool bVar5;
  int iVar6;
  FDirectionalEdge local_res8 [2];
  
  uVar1 = param_1->GraphID;
  uVar2 = param_2->GraphID;
  if ((uVar1 == 0xffff) || (uVar2 == 0xffff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromID != TNumericLimits<uint16>::Max() && ToID != TNumericLimits<uint16>::Max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                       ,0x43,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8[0].FromNode._0_1_ = SUB21(uVar1,0);
  TVar4 = local_res8[0].FromNode._0_1_;
  local_res8[0].FromNode = uVar1;
  local_res8[0].ToNode = uVar2;
  iVar6 = Algo::
          BinarySearch<TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>,UE::MovieScene::FDirectedGraph::FDirectionalEdge,TLess<void>_>
                    (&(this->ReferenceGraph).SortedEdges,local_res8,TVar4);
  if (iVar6 != -1) {
    TArray<UE::MovieScene::FDirectedGraph::FDirectionalEdge,TSizedDefaultAllocator<32>_>::RemoveAt
              (&(this->ReferenceGraph).SortedEdges,iVar6,No);
  }
  return;
}

// RemoveSystem @ 1461507a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::RemoveSystem
          (FMovieSceneEntitySystemGraph *this,UMovieSceneEntitySystem *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  ushort local_res8 [4];
  
  if (this->ReentrancyGuard != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReentrancyGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                       ,0x4a,L"Attempting to remove a system from the graph recursively.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->ReentrancyGuard = this->ReentrancyGuard + 1;
  uVar1 = param_1->GraphID;
  if (uVar1 == 0xffff) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeID != TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::MovieScene::FDirectedGraph::RemoveNode(&this->ReferenceGraph,uVar1);
  TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::RemoveAt
            (&(this->Nodes).Array,(uint)uVar1,1);
  local_res8[0] = param_1->GlobalDependencyGraphID;
  param_1->GraphID = 0xffff;
  if (*(int *)&(this->GlobalToLocalNodeIDs).field_0x8 !=
      *(int *)&(this->GlobalToLocalNodeIDs).field_0x34) {
    TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_short>
              ((TSet<TTuple<unsigned_short,unsigned_short>,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>,FDefaultSetAllocator>
                *)&this->GlobalToLocalNodeIDs,(uint)local_res8[0],local_res8);
  }
  this->SerialNumber = this->SerialNumber + 1;
  this->ReentrancyGuard = this->ReentrancyGuard - 1;
  UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges(&this->ReferenceGraph);
  return;
}

// ScheduleTasks @ 146153330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneEntitySystemGraph::ScheduleTasks
          (FMovieSceneEntitySystemGraph *this,FEntityManager *param_1)

{
  if ((this->TaskScheduler).Ptr != (FEntitySystemScheduler *)0x0) {
    param_1->SystemSerialNumber = param_1->SystemSerialNumber + 1;
    if ((this->SchedulerSerialNumber == 0) ||
       (this->SchedulerSerialNumber < param_1->StructureMutationSystemSerialNumber)) {
      ReconstructTaskSchedule(this,param_1);
    }
    UE::MovieScene::FEntitySystemScheduler::ExecuteTasks((this->TaskScheduler).Ptr);
    return;
  }
  return;
}

// Shutdown @ 146154d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieSceneEntitySystemGraph::Shutdown(FMovieSceneEntitySystemGraph *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneEntitySystemGraph *pFVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_1e8 [32];
  FMovieSceneEntitySystemGraph local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if ((this->ReentrancyGuard != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReentrancyGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,599,L"Attempting to shutdown the system graph while it is in use."), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->ReentrancyGuard = this->ReentrancyGuard + 1;
  uVar9 = 0;
  if (0 < *(int *)&(this->Nodes).Array.field_0x8) {
    uVar11 = 1;
    uVar10 = uVar9;
    do {
      iVar8 = (int)uVar9;
      if (((iVar8 < 0) || (*(int *)&(this->Nodes).Array.field_0x28 <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar1 = *(undefined1 **)&(this->Nodes).Array.field_0x20;
      puVar7 = &(this->Nodes).Array.field_0x10;
      if (puVar1 != (undefined1 *)0x0) {
        puVar7 = puVar1;
      }
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      if ((*(uint *)(puVar7 + (longlong)(iVar5 >> 5) * 4) & uVar11) != 0) {
        lVar2 = *(longlong *)(*(longlong *)&(this->Nodes).Array + 0x20 + uVar10);
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined2 *)(lVar2 + 0x34) = 0xffff;
      }
      uVar9 = (ulonglong)(iVar8 + 1U);
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar10 = uVar10 + 0x28;
    } while ((int)(iVar8 + 1U) < *(int *)&(this->Nodes).Array.field_0x8);
  }
  this->ReentrancyGuard = this->ReentrancyGuard - 1;
  pFVar6 = FMovieSceneEntitySystemGraph(&local_1c8);
  operator=(this,pFVar6);
  ~FMovieSceneEntitySystemGraph(&local_1c8);
  return;
}

// ToString @ 146156960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FMovieSceneEntitySystemGraph::ToString
          (FMovieSceneEntitySystemGraph *this,FString *__return_storage_ptr__)

{
  uint *puVar1;
  FDirectionalEdge *pFVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  byte bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  FString *pFVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  ulong64 uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  FString *pFVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FDirectionalEdge *pFVar23;
  longlong lVar25;
  int iVar26;
  undefined1 *puVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStack_b48 [32];
  wchar_t *local_b28;
  longlong local_b20;
  uint local_b18;
  undefined1 *local_b10;
  FScriptContainerElement *local_b08;
  FMovieSceneEntitySystemGraph *local_b00;
  FString local_af8;
  FString local_ae8;
  int local_ad8;
  int local_ad4;
  FName local_ad0;
  FName local_ac8;
  FName local_ac0;
  FName local_ab8;
  FName local_ab0;
  FString *local_aa8;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  TArrayView<UE::MovieScene::FDirectedGraph::FDirectionalEdge_const_,int> local_a20;
  FString local_a10;
  FString local_a00;
  TBitArray<FDefaultBitArrayAllocator> *local_9e8;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  TArrayView<TBitArray<FDefaultBitArrayAllocator>_const_,int> local_9d8;
  TBitArray<FDefaultBitArrayAllocator> local_9c8;
  FDiscoverCyclicEdges local_9a8;
  TStringBuilderBase<wchar_t> local_928;
  wchar_t local_908 [1024];
  TBitArray<FDefaultBitArrayAllocator> local_108;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  ulonglong uVar24;
  
  local_48.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_b48);
  local_928.Base = local_908;
  local_928.CurPos = local_908;
  local_928.End = (wchar_t *)&local_108;
  local_928.bIsDynamic = false;
  local_928.bIsExternal = false;
  local_b00 = this;
  local_aa8 = __return_storage_ptr__;
  pvVar12 = FGenericPlatformString::Memcpy
                      (local_908,L"\ndigraph FMovieSceneEntitySystemGraph {\n",0x50);
  local_928.CurPos = (wchar_t *)((longlong)pvVar12 + 0x50);
  if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar12 + 0x90U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_928,0x20);
  }
  pvVar12 = FGenericPlatformString::Memcpy
                      (local_928.CurPos,L"\tnode [shape=record,height=.1];\n",0x40);
  local_928.CurPos = (wchar_t *)((longlong)pvVar12 + 0x40);
  ::FString::FString(&local_88,L"\tsubgraph cluster_flow_0 { label=\"Spawn\"; color=\"#0e868c\";\n")
  ;
  ::FString::FString(&local_78,
                     L"\tsubgraph cluster_flow_1 { label=\"Instantiation\"; color=\"#96c74c\";\n");
  ::FString::FString(&local_68,
                     L"\tsubgraph cluster_flow_2 { label=\"Evaluation\"; color=\"#6dc74c\";\n");
  ::FString::FString(&local_58,
                     L"\tsubgraph cluster_flow_3 { label=\"Finalization\"; color=\"#aa42f5\";\n");
  ::FString::FString(&local_ae8,
                     L"\tsubgraph cluster_references { label=\"Explicit Reference Graph (connections imply ownership)\"; color=\"#bfc74c\";\n"
                    );
  iVar28 = 0;
  local_108.MaxBits = 0x80;
  local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.NumBits = 0;
  local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.NumBits = 0;
  local_e8.MaxBits = 0x80;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_a8.MaxBits = 0x80;
  local_9c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_9c8.NumBits = 0;
  local_9c8.MaxBits = 0x80;
  if (0 < *(int *)&(this->Nodes).Array.field_0x8) {
    puVar17 = &(this->Nodes).Array.field_0x10;
    local_b10 = puVar17;
    do {
      if (((iVar28 < 0) || (*(int *)(puVar17 + 0x18) <= iVar28)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar5)();
        return pFVar13;
      }
      puVar27 = puVar17;
      if (*(undefined1 **)(puVar17 + 0x10) != (undefined1 *)0x0) {
        puVar27 = *(undefined1 **)(puVar17 + 0x10);
      }
      local_b08 = (FScriptContainerElement *)
                  (longlong)((int)(iVar28 + (iVar28 >> 0x1f & 0x1fU)) >> 5);
      local_b18 = 1 << ((byte)iVar28 & 0x1f);
      if ((*(uint *)(puVar27 + (longlong)local_b08 * 4) & local_b18) != 0) {
        lVar25 = *(longlong *)(*(longlong *)&(this->Nodes).Array + 0x20 + (longlong)iVar28 * 0x28);
        bVar3 = *(byte *)(lVar25 + 0x32);
        uVar4 = *(ushort *)(lVar25 + 0x36);
        bVar6 = (byte)uVar4;
        if ((bVar3 & 2) != 0) {
          local_ad0 = *(FName *)(lVar25 + 0x18);
          ::FName::ToString(&local_ad0,&local_a90);
          ::FString::PrintfImpl(&local_aa0,L"\t\tflow_node%d_0[label=\"%s\"];\n");
          iVar26 = local_aa0.Data.ArrayNum + -1;
          if (local_aa0.Data.ArrayNum == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_88,(wchar_t *)local_aa0.Data.AllocatorInstance.Data,iVar26);
          if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
          }
          if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a90.Data.AllocatorInstance.Data);
          }
          iVar26 = ((uint)uVar4 - local_108.NumBits) + 1;
          if (0 < iVar26) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_108,iVar26);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_108,iVar9,iVar26,false);
          }
          if ((local_108.NumBits <= (int)(uint)uVar4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_108;
          if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_108.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
        }
        if ((bVar3 & 4) != 0) {
          local_ac8 = *(FName *)(lVar25 + 0x18);
          ::FName::ToString(&local_ac8,&local_a70);
          ::FString::PrintfImpl(&local_a80,L"\t\tflow_node%d_1[label=\"%s\"];\n");
          iVar26 = local_a80.Data.ArrayNum + -1;
          if (local_a80.Data.ArrayNum == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_78,(wchar_t *)local_a80.Data.AllocatorInstance.Data,iVar26);
          if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a80.Data.AllocatorInstance.Data);
          }
          if (local_a70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a70.Data.AllocatorInstance.Data);
          }
          iVar26 = ((uint)uVar4 - local_e8.NumBits) + 1;
          if (0 < iVar26) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_e8,iVar26);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_e8,iVar9,iVar26,false);
          }
          if ((local_e8.NumBits <= (int)(uint)uVar4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_e8;
          if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_e8.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
        }
        if ((bVar3 & 0x18) != 0) {
          local_ac0 = *(FName *)(lVar25 + 0x18);
          ::FName::ToString(&local_ac0,&local_a50);
          ::FString::PrintfImpl(&local_a60,L"\t\tflow_node%d_2[label=\"%s\"];\n");
          iVar26 = local_a60.Data.ArrayNum + -1;
          if (local_a60.Data.ArrayNum == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_68,(wchar_t *)local_a60.Data.AllocatorInstance.Data,iVar26);
          if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a60.Data.AllocatorInstance.Data);
          }
          if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a50.Data.AllocatorInstance.Data);
          }
          iVar26 = ((uint)uVar4 - local_c8.NumBits) + 1;
          if (0 < iVar26) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_c8,iVar26);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_c8,iVar9,iVar26,false);
          }
          if ((local_c8.NumBits <= (int)(uint)uVar4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_c8;
          if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_c8.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
        }
        if ((bVar3 & 0x20) != 0) {
          local_ab8 = *(FName *)(lVar25 + 0x18);
          ::FName::ToString(&local_ab8,&local_a30);
          ::FString::PrintfImpl(&local_a40,L"\t\tflow_node%d_3[label=\"%s\"];\n");
          iVar26 = local_a40.Data.ArrayNum + -1;
          if (local_a40.Data.ArrayNum == 0) {
            iVar26 = 0;
          }
          ::FString::AppendChars(&local_58,(wchar_t *)local_a40.Data.AllocatorInstance.Data,iVar26);
          if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a40.Data.AllocatorInstance.Data);
          }
          if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a30.Data.AllocatorInstance.Data);
          }
          iVar26 = ((uint)uVar4 - local_a8.NumBits) + 1;
          if (0 < iVar26) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_a8,iVar26);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_a8,iVar9,iVar26,false);
          }
          if ((local_a8.NumBits <= (int)(uint)uVar4) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_a8;
          if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_a8.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (ulonglong)(uVar4 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (bVar6 & 0x1f);
        }
        this = local_b00;
        UE::MovieScene::FDirectedGraph::GetEdgesFrom
                  (&local_b00->ReferenceGraph,&local_a20,(ushort)iVar28);
        iVar26 = local_a20.ArrayNum;
        puVar17 = local_b10;
        if (0 < iVar26) {
          iVar9 = (iVar28 - local_9c8.NumBits) + 1;
          if (0 < iVar9) {
            iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_9c8,iVar9);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_9c8,iVar10,iVar9,false);
          }
          if (((iVar28 < 0) || (local_9c8.NumBits <= iVar28)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FVar15 = (ForElementType<unsigned_int>)&local_9c8;
          if (local_9c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_9c8.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar15 + (longlong)local_b08 * 4);
          *puVar1 = *puVar1 | local_b18;
          pFVar2 = local_a20.DataPtr + iVar26;
          puVar17 = local_b10;
          for (pFVar23 = local_a20.DataPtr; local_b10 = puVar17, pFVar23 != pFVar2;
              pFVar23 = pFVar23 + 1) {
            uVar4 = pFVar23->ToNode;
            iVar26 = ((uint)uVar4 - local_9c8.NumBits) + 1;
            if (0 < iVar26) {
              iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_9c8,iVar26);
              TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_9c8,iVar9,iVar26,false);
            }
            if ((local_9c8.NumBits <= (int)(uint)uVar4) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              pFVar13 = (FString *)(*pcVar5)();
              return pFVar13;
            }
            FVar15 = (ForElementType<unsigned_int>)&local_9c8;
            if (local_9c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_9c8.AllocatorInstance.SecondaryData;
            }
            puVar1 = (uint *)((longlong)FVar15 + (ulonglong)(uVar4 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
            puVar17 = local_b10;
          }
        }
      }
      iVar28 = iVar28 + 1;
    } while (iVar28 < *(int *)&(this->Nodes).Array.field_0x8);
  }
  uVar18 = 0;
  uVar11 = 1;
  uVar29 = 0xffffffff;
  uVar14 = uVar18;
  uVar20 = uVar18;
  uVar24 = uVar18;
  if (local_9c8.NumBits != 0) {
    FVar15 = (ForElementType<unsigned_int>)&local_9c8;
    if (local_9c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_9c8.AllocatorInstance.SecondaryData;
    }
    uVar22 = *(uint *)FVar15;
    while (uVar22 == 0) {
      iVar28 = (int)uVar24;
      uVar20 = (ulonglong)((int)uVar20 + 0x20);
      uVar22 = iVar28 + 1;
      uVar24 = (ulonglong)uVar22;
      if ((int)((local_9c8.NumBits - 1U) + ((int)(local_9c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uVar22) {
        uVar14 = (ulonglong)(uint)local_9c8.NumBits;
        goto LAB_146157224;
      }
      uVar22 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar28 * 4);
    }
    uVar11 = -uVar22 & uVar22;
    uVar14 = (ulonglong)uVar11 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_ad8 = (int)lVar25;
    uVar22 = (int)uVar20 + -1 + local_ad8;
    uVar14 = (ulonglong)uVar22;
    if (local_9c8.NumBits < (int)uVar22) {
      uVar14 = (ulonglong)(uint)local_9c8.NumBits;
    }
  }
LAB_146157224:
  iVar28 = 0;
  if ((int)uVar14 < local_9c8.NumBits) {
    do {
      local_ab0 = *(FName *)(*(longlong *)
                              (*(longlong *)&(this->Nodes).Array + 0x20 +
                              (longlong)(int)uVar14 * 0x28) + 0x18);
      ::FName::ToString(&local_ab0,&local_a00);
      ::FString::PrintfImpl(&local_a10,L"\t\treference_node%d[label=\"%s\"];\n");
      iVar26 = local_a10.Data.ArrayNum + -1;
      if (local_a10.Data.ArrayNum == 0) {
        iVar26 = iVar28;
      }
      ::FString::AppendChars(&local_ae8,(wchar_t *)local_a10.Data.AllocatorInstance.Data,iVar26);
      if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a10.Data.AllocatorInstance.Data);
      }
      if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a00.Data.AllocatorInstance.Data);
      }
      uVar29 = uVar29 & ~uVar11;
      FVar15 = (ForElementType<unsigned_int>)&local_9c8;
      if (local_9c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_9c8.AllocatorInstance.SecondaryData;
      }
      uVar22 = uVar29 & *(uint *)((longlong)FVar15 + (longlong)(int)uVar24 * 4);
      while (uVar22 == 0) {
        iVar26 = (int)uVar24;
        uVar20 = (ulonglong)((int)uVar20 + 0x20);
        uVar22 = iVar26 + 1;
        uVar24 = (ulonglong)uVar22;
        if ((int)((local_9c8.NumBits - 1U) + ((int)(local_9c8.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)uVar22) {
          uVar14 = (ulonglong)(uint)local_9c8.NumBits;
          goto LAB_146157344;
        }
        uVar29 = 0xffffffff;
        uVar22 = *(uint *)((uchar *)((longlong)FVar15 + 4) + (longlong)iVar26 * 4);
      }
      uVar11 = -uVar22 & uVar22;
      uVar14 = (ulonglong)uVar11 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_ad4 = (int)lVar25;
      uVar22 = (int)uVar20 + -1 + local_ad4;
      uVar14 = (ulonglong)uVar22;
      if (local_9c8.NumBits < (int)uVar22) {
        uVar14 = (ulonglong)(uint)local_9c8.NumBits;
      }
LAB_146157344:
    } while ((int)uVar14 < local_9c8.NumBits);
  }
  pFVar13 = &local_88;
  do {
    iVar26 = (pFVar13->Data).ArrayNum;
    pFVar21 = (pFVar13->Data).AllocatorInstance.Data;
    iVar9 = iVar26 + -1;
    if (iVar26 == 0) {
      iVar9 = iVar28;
    }
    uVar16 = (ulong64)iVar9;
    if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)(local_928.CurPos + uVar16)) {
      TStringBuilderBase<wchar_t>::Extend(&local_928,uVar16);
    }
    if (iVar9 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,pFVar21,uVar16 * 2);
      local_928.CurPos = (wchar_t *)((longlong)pvVar12 + uVar16 * 2);
    }
    if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)(local_928.CurPos + 3)) {
      TStringBuilderBase<wchar_t>::Extend(&local_928,3);
    }
    pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,L"\t}\n",6);
    FVar7.Data = local_ae8.Data.AllocatorInstance.Data;
    pFVar13 = pFVar13 + 1;
    local_928.CurPos = (wchar_t *)((longlong)pvVar12 + 6);
  } while (pFVar13 != &local_48);
  iVar26 = local_ae8.Data.ArrayNum + -1;
  if (local_ae8.Data.ArrayNum == 0) {
    iVar26 = iVar28;
  }
  uVar16 = (ulong64)iVar26;
  if (local_928.End <
      (TBitArray<FDefaultBitArrayAllocator> *)((wchar_t *)((longlong)pvVar12 + 6) + uVar16)) {
    TStringBuilderBase<wchar_t>::Extend(&local_928,uVar16);
  }
  if (iVar26 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,FVar7.Data,uVar16 * 2);
    local_928.CurPos = (wchar_t *)((longlong)pvVar12 + uVar16 * 2);
  }
  if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)(local_928.CurPos + 3)) {
    TStringBuilderBase<wchar_t>::Extend(&local_928,3);
  }
  pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,L"\t}\n",6);
  local_928.CurPos = (wchar_t *)((longlong)pvVar12 + 6);
  local_9e8 = &local_108;
  uStack_9e0 = 4;
  local_9d8._12_4_ = uStack_9dc;
  local_9d8.ArrayNum = 4;
  local_9d8.DataPtr = local_9e8;
  UE::MovieScene::FSystemDependencyGraph::PrintFilteredFlowGraph
            (&UE::MovieScene::GlobalDependencyGraph,&local_9d8,&local_928);
  UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::FDiscoverCyclicEdges
            (&local_9a8,&this->ReferenceGraph);
  UE::MovieScene::FDirectedGraph::FDiscoverCyclicEdges::Search(&local_9a8);
  if (((this->ReferenceGraph).bHasDanglingEdges != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasDanglingEdges",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemDirectedGraph.cpp"
                         ,0x11c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FString *)(*pcVar5)();
    return pFVar13;
  }
  iVar28 = (this->ReferenceGraph).SortedEdges.ArrayNum;
  pFVar21 = (this->ReferenceGraph).SortedEdges.AllocatorInstance.Data;
  if ((iVar28 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FString *)(*pcVar5)();
    return pFVar13;
  }
  uVar20 = uVar18;
  if (0 < iVar28) {
    do {
      if (((int)uVar18 < 0) &&
         (local_b28 = (wchar_t *)uVar20, local_b20 = (longlong)iVar28,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar5)();
        return pFVar13;
      }
      local_b18 = *(uint *)pFVar21;
      uVar29 = (uint)(uVar18 & 0xffff);
      if ((int)uVar29 < local_9a8.CyclicEdges.NumBits) {
        FVar15 = (ForElementType<unsigned_int>)&local_9a8;
        if (local_9a8.CyclicEdges.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_9a8.CyclicEdges.AllocatorInstance.SecondaryData;
        }
        iVar26 = 1;
        if ((*(uint *)((longlong)FVar15 + ((uVar18 & 0xffff) >> 5) * 4) >> (uVar29 & 0x1f) & 1) == 0
           ) goto LAB_146157600;
      }
      else {
LAB_146157600:
        iVar26 = 0;
      }
      local_b28 = L"#3992ad";
      if (iVar26 != 0) {
        local_b28 = L"#FF0000";
      }
      ::FString::PrintfImpl(&local_af8,L"\treference_node%d -> reference_node%d [color=\"%s\"];\n");
      local_b08 = local_af8.Data.AllocatorInstance.Data;
      iVar26 = local_af8.Data.ArrayNum + -1;
      if (local_af8.Data.ArrayNum == 0) {
        iVar26 = 0;
      }
      uVar16 = (ulong64)iVar26;
      if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)(local_928.CurPos + uVar16)) {
        TStringBuilderBase<wchar_t>::Extend(&local_928,uVar16);
      }
      if (iVar26 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,local_b08,uVar16 * 2);
        local_928.CurPos = (wchar_t *)((longlong)pvVar12 + uVar16 * 2);
      }
      if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_af8.Data.AllocatorInstance.Data);
      }
      uVar29 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar29;
      pFVar21 = pFVar21 + 4;
      uVar20 = uVar20 + 1;
    } while ((int)uVar29 < iVar28);
  }
  lVar25 = 4;
  if (local_9a8.EdgeChain.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_9a8.EdgeChain.AllocatorInstance.SecondaryData);
  }
  if (local_9a8.VisitedEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_9a8.VisitedEdges.AllocatorInstance.SecondaryData);
  }
  if (local_9a8.CyclicEdges.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_9a8.CyclicEdges.AllocatorInstance.SecondaryData);
  }
  if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)(local_928.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_928,1);
  }
  pvVar12 = FGenericPlatformString::Memcpy(local_928.CurPos,L"}",2);
  local_928.CurPos = (wchar_t *)((longlong)pvVar12 + 2);
  if (local_928.End < (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar12 + 4U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_928,1);
  }
  pFVar13 = local_aa8;
  *local_928.CurPos = L'\0';
  ::FString::FString(local_aa8,local_928.Base);
  if (local_9c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_9c8.AllocatorInstance.SecondaryData);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
  }
  if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
  }
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  pFVar19 = &local_48;
  do {
    pFVar21 = pFVar19[-1].Data.AllocatorInstance.Data;
    pFVar19 = pFVar19 + -1;
    lVar25 = lVar25 + -1;
    if (pFVar21 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar21);
    }
  } while (lVar25 != 0);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_928);
  return pFVar13;
}

// UpdateCache @ 14615e590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieSceneEntitySystemGraph::UpdateCache(FMovieSceneEntitySystemGraph *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  ForElementType<unsigned_int> FVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ForElementType<unsigned_short> FVar12;
  longlong lVar13;
  ForElementType<unsigned_short> FVar14;
  FMovieSceneEntitySystemGraphNodes *pFVar15;
  int iVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  uint uVar21;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ushort local_e8 [4];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_e0;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  int local_c0;
  uint uStack_bc;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  ForElementType<unsigned_int> local_a0;
  FMovieSceneEntitySystemGraphNodes *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68;
  FString local_60 [2];
  
  if (this->PreviousSerialNumber != this->SerialNumber) {
    UE::MovieScene::FDirectedGraph::CleanUpDanglingEdges(&this->ReferenceGraph);
    bVar9 = UE::MovieScene::FDirectedGraph::IsCyclic(&this->ReferenceGraph);
    if (bVar9) {
      ToString(this,local_60);
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReferenceGraph.IsCyclic()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntitySystemGraphs.cpp"
                         ,0xa7,
                         L"Cycle detected in system reference graph.\n----------------------------------------------------------------------------------\n%s\n----------------------------------------------------------------------------------\n"
                        );
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    piVar1 = &(this->SpawnPhase).ArrayMax;
    (this->SpawnPhase).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                (2,2,0,(ForElementType<unsigned_short> *)this,0,piVar1);
    }
    piVar1 = &(this->InstantiationPhase).ArrayMax;
    (this->InstantiationPhase).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                (2,2,0,&(this->InstantiationPhase).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->SchedulingPhase).ArrayMax;
    (this->SchedulingPhase).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                (2,2,0,&(this->SchedulingPhase).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->EvaluationPhase).ArrayMax;
    (this->EvaluationPhase).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                (2,2,0,&(this->EvaluationPhase).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->FinalizationPhase).ArrayMax;
    (this->FinalizationPhase).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                (2,2,0,&(this->FinalizationPhase).AllocatorInstance,0,piVar1);
    }
    puStack_b8 = &(this->Nodes).Array.field_0x10;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    iVar5 = *(int *)&(this->Nodes).Array.field_0x28;
    local_c0 = 0;
    uStack_bc = 1;
    iStack_ac = 0;
    iStack_a8 = 0;
    if (iVar5 != 0) {
      puVar20 = *(uint **)&(this->Nodes).Array.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puStack_b8;
      }
      uVar17 = *puVar20;
      iStack_a8 = 0;
      local_c0 = 0;
      while (uVar17 == 0) {
        iStack_a8 = iStack_a8 + 0x20;
        lVar13 = (longlong)local_c0;
        local_c0 = local_c0 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c0) goto LAB_14615e7c9;
        uVar17 = (puVar20 + 1)[lVar13];
      }
      uStack_bc = -uVar17 & uVar17;
      uVar11 = (ulonglong)uStack_bc * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      iStack_ac = local_res20 + -1 + iStack_a8;
      if (iVar5 < iStack_ac) {
LAB_14615e7c9:
        iStack_ac = iVar5;
      }
    }
    local_b0 = 0xffffffff;
    uVar17 = *(uint *)&(this->Nodes).Array.field_0x28;
    pFVar15 = &this->Nodes;
    local_70 = *(int *)&(this->Nodes).Array.field_0x8 - *(int *)&(this->Nodes).Array.field_0x34;
    local_90._padding_ = CONCAT44(uStack_bc,local_c0);
    iVar16 = (int)uVar17 >> 5;
    local_90.CurrentBitIndex = iStack_ac;
    local_90.UnvisitedBitMask = 0xffffffff;
    local_90._28_4_ = uStack_a4;
    local_90.BaseBitIndex = iStack_a8;
    uVar21 = uVar17 & 0xffffffe0;
    local_a0 = (ForElementType<unsigned_int>)puStack_b8;
    local_98 = pFVar15;
    local_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_b8;
    if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar8 = local_a0;
    uVar6 = *(int *)((longlong)local_a0 + 0x18);
    if (uVar17 != uVar6) {
      FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_a0 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_a0 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_a0;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar16 * 4);
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar17 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14615e8bf;
        uVar17 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar13 * 4);
      }
      uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_68 = (int)lVar13;
      uVar17 = local_68 + -1 + uVar21;
      if ((int)uVar6 < (int)uVar17) {
        uVar17 = uVar6;
      }
    }
LAB_14615e8bf:
    while( true ) {
      if (*(int *)&(pFVar15->Array).field_0x8 - *(int *)&(pFVar15->Array).field_0x34 != local_70) {
        local_res8[0] = '\0';
        `TSparseArray<FMovieSceneEntitySystemGraphNode,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((local_90.CurrentBitIndex == uVar17) &&
          ((ForElementType<unsigned_int>)local_90.Array == FVar8)) && (pFVar15 == &this->Nodes))
      break;
      local_e8[0] = *(ushort *)
                     (*(longlong *)
                       (*(longlong *)&pFVar15->Array + 0x20 +
                       (longlong)local_90.CurrentBitIndex * 0x28) + 0x36);
      if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 <
           local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_e0.ArrayNum == local_e0.ArrayMax) {
        local_e0.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
      }
      lVar13 = (longlong)local_e0.ArrayNum;
      local_e0.ArrayNum = local_e0.ArrayNum + 1;
      *(ushort *)(local_e0.AllocatorInstance.Data + lVar13 * 2) = local_e8[0];
      local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
      pFVar15 = local_98;
    }
    UE::MovieScene::FSystemDependencyGraph::SortByFlowOrder
              (&UE::MovieScene::GlobalDependencyGraph,&local_e0);
    iVar5 = local_e0.ArrayNum;
    uVar11 = (ulonglong)local_e0.ArrayNum;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    pFVar2 = local_e0.AllocatorInstance.Data + uVar11 * 2;
    FVar18.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar11 != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar18.Data == pFVar2) break;
      pFVar10 = (FScriptContainerElement *)
                TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                ::FindChecked((TMapBase<unsigned_short,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,unsigned_short,0>_>
                               *)&this->GlobalToLocalNodeIDs,*(ushort *)FVar18.Data);
      if (((local_d0.Data <= pFVar10) && (pFVar10 < local_d0.Data + (longlong)local_c8._4_4_ * 2))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar16 = (int)local_c8;
      if ((int)local_c8 == local_c8._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      FVar18.Data = FVar18.Data + 2;
      local_c8 = CONCAT44(local_c8._4_4_,iVar16 + 1);
      *(ushort *)(local_d0.Data + (longlong)iVar16 * 2) = *(ushort *)pFVar10;
      uVar11 = (ulonglong)(uint)local_e0.ArrayNum;
    }
    local_res8[0] = UE::MovieScene::FEntitySystemScheduler::IsCustomSchedulingEnabled();
    iVar5 = (int)local_c8;
    pFVar2 = local_d0.Data + (longlong)(int)local_c8 * 2;
    FVar18.Data = local_d0.Data;
    while( true ) {
      if ((int)local_c8 != iVar5) {
        `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar18.Data == pFVar2) break;
      uVar4 = *(ushort *)FVar18.Data;
      bVar3 = *(byte *)(*(longlong *)
                         (*(longlong *)&(this->Nodes).Array + 0x20 + (ulonglong)uVar4 * 0x28) + 0x32
                       );
      if ((bVar3 & 2) != 0) {
        iVar16 = (this->SpawnPhase).ArrayNum;
        if (iVar16 == (this->SpawnPhase).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                             (0x202,(ForElementType<unsigned_short> *)this,
                              &(this->SpawnPhase).ArrayMax);
        }
        (this->SpawnPhase).ArrayNum = iVar16 + 1;
        FVar14 = (this->SpawnPhase).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_short>)this;
        if (FVar14 != (ForElementType<unsigned_short>)0x0) {
          FVar12 = FVar14;
        }
        *(ushort *)((longlong)FVar12 + (longlong)iVar16 * 2) = uVar4;
      }
      if ((bVar3 & 4) != 0) {
        iVar16 = (this->InstantiationPhase).ArrayNum;
        if (iVar16 == (this->InstantiationPhase).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                             (0x202,&(this->InstantiationPhase).AllocatorInstance,
                              &(this->InstantiationPhase).ArrayMax);
        }
        (this->InstantiationPhase).ArrayNum = iVar16 + 1;
        FVar14 = (this->InstantiationPhase).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_short>)&this->InstantiationPhase;
        if (FVar14 != (ForElementType<unsigned_short>)0x0) {
          FVar12 = FVar14;
        }
        *(ushort *)((longlong)FVar12 + (longlong)iVar16 * 2) = uVar4;
      }
      if ((bVar3 & 8) != 0) {
        if (local_res8[0] == '\0') {
          iVar16 = (this->EvaluationPhase).ArrayNum;
          if (iVar16 == (this->EvaluationPhase).ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                               (0x202,&(this->EvaluationPhase).AllocatorInstance,
                                &(this->EvaluationPhase).ArrayMax);
          }
          (this->EvaluationPhase).ArrayNum = iVar16 + 1;
          FVar14 = (ForElementType<unsigned_short>)&this->EvaluationPhase;
          FVar12 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
        }
        else {
          iVar16 = (this->SchedulingPhase).ArrayNum;
          if (iVar16 == (this->SchedulingPhase).ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                               (0x202,&(this->SchedulingPhase).AllocatorInstance,
                                &(this->SchedulingPhase).ArrayMax);
          }
          FVar14 = (ForElementType<unsigned_short>)&this->SchedulingPhase;
          (this->SchedulingPhase).ArrayNum = iVar16 + 1;
          FVar12 = (this->SchedulingPhase).AllocatorInstance.SecondaryData;
        }
        if (FVar12 != (ForElementType<unsigned_short>)0x0) {
          FVar14 = FVar12;
        }
        *(ushort *)((longlong)FVar14 + (longlong)iVar16 * 2) = uVar4;
      }
      if ((bVar3 & 0x10) != 0) {
        iVar16 = (this->EvaluationPhase).ArrayNum;
        if (iVar16 == (this->EvaluationPhase).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                             (0x202,&(this->EvaluationPhase).AllocatorInstance,
                              &(this->EvaluationPhase).ArrayMax);
        }
        (this->EvaluationPhase).ArrayNum = iVar16 + 1;
        FVar14 = (this->EvaluationPhase).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_short>)&this->EvaluationPhase;
        if (FVar14 != (ForElementType<unsigned_short>)0x0) {
          FVar12 = FVar14;
        }
        *(ushort *)((longlong)FVar12 + (longlong)iVar16 * 2) = uVar4;
      }
      if ((bVar3 & 0x20) != 0) {
        iVar16 = (this->FinalizationPhase).ArrayNum;
        if (iVar16 == (this->FinalizationPhase).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_short>_>
                             (0x202,&(this->FinalizationPhase).AllocatorInstance,
                              &(this->FinalizationPhase).ArrayMax);
        }
        (this->FinalizationPhase).ArrayNum = iVar16 + 1;
        FVar14 = (this->FinalizationPhase).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<unsigned_short>)&this->FinalizationPhase;
        if (FVar14 != (ForElementType<unsigned_short>)0x0) {
          FVar12 = FVar14;
        }
        *(ushort *)((longlong)FVar12 + (longlong)iVar16 * 2) = uVar4;
      }
      FVar18.Data = FVar18.Data + 2;
    }
    this->PreviousSerialNumber = this->SerialNumber;
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1504e3ff0

bool __thiscall
`FMovieSceneEntitySystemGraph::ExecutePhase'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8548540753763107207>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107207>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4030

bool __thiscall
`FMovieSceneEntitySystemGraph::IteratePhase'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8548540753763107223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107223>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4070

bool __thiscall `FMovieSceneEntitySystemGraph::NumInPhase'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8548540753763107193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107193>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4380

bool __thiscall
`FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>'::
__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8548540753763107296>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)
                              (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                              (ulonglong)**(ushort **)((longlong)this + 0x10) * 0x28) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] =
         *(FName *)(*(longlong *)
                     (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                     (ulonglong)**(ushort **)((longlong)this + 8) * 0x28) + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107296>,
                       &`public:___cdecl_`private:_void___cdecl_FMovieSceneEntitySystemGraph::ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>(UE::MovieScene::ESystemPhase,TArray<unsigned_short,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'::`32'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e4466;
    }
  }
  bVar4 = false;
LAB_1504e4466:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504e44c0

bool __thiscall
`FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'::
__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8548540753763107296>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)
                              (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                              (ulonglong)**(ushort **)((longlong)this + 0x10) * 0x28) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] =
         *(FName *)(*(longlong *)
                     (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                     (ulonglong)**(ushort **)((longlong)this + 8) * 0x28) + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107296>,
                       &`public:___cdecl_`private:_void___cdecl_FMovieSceneEntitySystemGraph::ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>(UE::MovieScene::ESystemPhase,TArray<unsigned_short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'::`32'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e45a6;
    }
  }
  bVar4 = false;
LAB_1504e45a6:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504e4600

bool __thiscall
`FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>'::
__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8548540753763107296>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)
                              (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                              (ulonglong)**(ushort **)((longlong)this + 0x10) * 0x28) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] =
         *(FName *)(*(longlong *)
                     (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                     (ulonglong)**(ushort **)((longlong)this + 8) * 0x28) + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107296>,
                       &`public:___cdecl_`private:_void___cdecl_FMovieSceneEntitySystemGraph::ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>(UE::MovieScene::ESystemPhase,TArray<unsigned_short,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'::`32'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e46e6;
    }
  }
  bVar4 = false;
LAB_1504e46e6:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504e4740

bool __thiscall
`FMovieSceneEntitySystemGraph::
ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'::
__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8548540753763107296>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)
                              (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                              (ulonglong)**(ushort **)((longlong)this + 0x10) * 0x28) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] =
         *(FName *)(*(longlong *)
                     (*(longlong *)(*(longlong *)this + 0xb8) + 0x20 +
                     (ulonglong)**(ushort **)((longlong)this + 8) * 0x28) + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8548540753763107296>,
                       &`public:___cdecl_`private:_void___cdecl_FMovieSceneEntitySystemGraph::ExecutePhase<TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>(UE::MovieScene::ESystemPhase,TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'::`32'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e4826;
    }
  }
  bVar4 = false;
LAB_1504e4826:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

