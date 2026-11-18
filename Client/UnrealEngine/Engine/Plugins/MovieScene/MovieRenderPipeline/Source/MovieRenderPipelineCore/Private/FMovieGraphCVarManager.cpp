// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 13

// ~FMovieGraphCVarManager @ 14dcb2130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::~FMovieGraphCVarManager
          (FMovieGraphCVarManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->EndConsoleCommands).AllocatorInstance.Data,
             (this->EndConsoleCommands).ArrayNum);
  pFVar1 = (this->EndConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StartConsoleCommands).AllocatorInstance.Data,
             (this->StartConsoleCommands).ArrayNum);
  pFVar1 = (this->StartConsoleCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousConsoleVariableValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::MovieGraph::Private::FMovieGraphCVarManager::FMovieGraphCVarOverride,int>
            ((FMovieGraphCVarOverride *)(this->CVars).AllocatorInstance.Data,(this->CVars).ArrayNum)
  ;
  pFVar1 = (this->CVars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddCVar @ 14dcb8a50

/* WARNING: Removing unreachable block (ram,0x00014dcb8bb5) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddCVar
          (FMovieGraphCVarManager *this,FString *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FString local_38;
  float local_28;
  
  pFVar7 = (this->CVars).AllocatorInstance.Data;
  pFVar3 = pFVar7 + (longlong)(this->CVars).ArrayNum * 0x18;
  while( true ) {
    if (pFVar7 == pFVar3) {
      ::FString::FString(&local_38,param_1);
      pFVar3 = (this->CVars).AllocatorInstance.Data;
      local_28 = param_2;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->CVars).ArrayMax * 0x18))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar5 = (this->CVars).ArrayNum;
      piVar1 = &(this->CVars).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)this,piVar1);
      }
      (this->CVars).ArrayNum = iVar5 + 1;
      pFVar3 = (this->CVars).AllocatorInstance.Data;
      lVar6 = (longlong)iVar5;
      *(undefined8 *)(pFVar3 + lVar6 * 0x18) = 0;
      *(FScriptContainerElement **)(pFVar3 + lVar6 * 0x18) = local_38.Data.AllocatorInstance.Data;
      *(int *)(pFVar3 + lVar6 * 0x18 + 8) = local_38.Data.ArrayNum;
      *(int *)(pFVar3 + lVar6 * 0x18 + 0xc) = local_38.Data.ArrayMax;
      *(float *)(pFVar3 + lVar6 * 0x18 + 0x10) = local_28;
      return;
    }
    iVar5 = *(int *)(pFVar7 + 8);
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar5 == iVar2) {
      if (iVar5 < 2) break;
      iVar5 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar7,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar5 == 0;
    }
    else {
      bVar8 = iVar5 + iVar2 == 1;
    }
    if (bVar8) break;
    pFVar7 = pFVar7 + 0x18;
  }
  *(float *)(pFVar7 + 0x10) = param_2;
  return;
}

// AddEndConsoleCommands @ 14dcb9330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddEndConsoleCommands
          (FMovieGraphCVarManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->EndConsoleCommands,param_1);
  return;
}

// AddEvaluatedGraph @ 14dcb9340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddEvaluatedGraph
          (FMovieGraphCVarManager *this,UMovieGraphEvaluatedConfig *param_1)

{
  TTuple<FString,float> *pTVar1;
  UObject *pUVar2;
  UMovieGraphApplyCVarPresetNode *this_00;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  FMovieGraphEvaluatedBranchConfig *this_01;
  UClass *pUVar9;
  FObjectPtr_u_0 *this_02;
  TTuple<FString,FString> *pTVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  TTuple<FString,FString> *pTVar15;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  float local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  FName local_a0;
  TTuple<FString,FString> *local_98;
  undefined8 local_90;
  TArray<TTuple<FString,float>,TSizedDefaultAllocator<32>_> local_88;
  TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> local_78;
  FString local_68 [3];
  
  this_01 = TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
            ::Find((TMapBase<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
                    *)&param_1->BranchConfigMapping,UMovieGraphNode::GlobalsPinName);
  if (this_01 != (FMovieGraphEvaluatedBranchConfig *)0x0) {
    FMovieGraphEvaluatedBranchConfig::GetNodes(this_01,&local_78);
    fVar5 = __real_3f800000;
    uVar13 = local_78.ArrayNum - 1;
    if (-1 < (int)uVar13) {
      lVar14 = (longlong)(int)uVar13;
      lVar12 = lVar14 * 8;
      do {
        uVar8 = 0;
        if ((int)uVar13 < local_78.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        local_b0 = lVar14;
        local_a8 = lVar12;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_02 = (FObjectPtr_u_0 *)(local_78.AllocatorInstance.Data + lVar12);
        if (this_02->Handle != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_UMovieGraphSetCVarValueNode_NoRegister();
          bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar9);
          if ((bVar7) && (pUVar2 = this_02->Handle, pUVar2 != (UObject *)0x0)) {
            AddCVar(this,(FString *)&pUVar2[4].field_0x18,*(float *)(pUVar2 + 5));
          }
          else if (this_02->Handle != (UObject *)0x0) {
            pUVar9 = UMovieGraphApplyCVarPresetNode::StaticClass();
            bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar9);
            if ((bVar7) &&
               (this_00 = (UMovieGraphApplyCVarPresetNode *)this_02->Handle,
               this_00 != (UMovieGraphApplyCVarPresetNode *)0x0)) {
              if ((*(longlong *)&this_00->ConsoleVariablePreset == 0) ||
                 (plVar3 = *(longlong **)&(this_00->ConsoleVariablePreset).field_0x8,
                 plVar3 == (longlong *)0x0)) {
                if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                  Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                }
              }
              else {
                local_98 = (TTuple<FString,FString> *)0x0;
                local_90 = 0;
                (**(code **)(*plVar3 + 0x10))(plVar3,1,&local_98);
                iVar6 = (int)local_90;
                pTVar15 = local_98 + (int)local_90;
                pTVar10 = local_98;
                while( true ) {
                  if ((int)local_90 != iVar6) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_res18);
                  }
                  if (pTVar10 == pTVar15) break;
                  local_b8[0] = 0.0;
                  local_res10[0] = false;
                  bVar7 = FDefaultValueHelper::ParseFloat((FString *)&pTVar10->field_0x10,local_b8);
                  if (bVar7) {
                    AddCVar(this,(FString *)pTVar10,local_b8[0]);
                    pTVar10 = pTVar10 + 1;
                  }
                  else {
                    bVar7 = FDefaultValueHelper::ParseBool
                                      ((FString *)&pTVar10->field_0x10,local_res10);
                    if (bVar7) {
                      if (local_res10[0] == false) {
                        AddCVar(this,(FString *)pTVar10,0.0);
                        pTVar10 = pTVar10 + 1;
                      }
                      else {
                        AddCVar(this,(FString *)pTVar10,fVar5);
                        pTVar10 = pTVar10 + 1;
                      }
                    }
                    else {
                      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
                        local_a0 = *(FName *)(*(longlong *)&this_00->ConsoleVariablePreset + 0x18);
                        ::FName::ToString(&local_a0,local_68);
                        Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                        if (local_68[0].Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
                        }
                      }
                      pTVar10 = pTVar10 + 1;
                    }
                  }
                }
                DestructItems<TTuple<FString,FString>,int>(local_98,(int)local_90);
                lVar12 = local_a8;
                lVar14 = local_b0;
                if (local_98 != (TTuple<FString,FString> *)0x0) {
                  FMemory::Free(local_98);
                  lVar12 = local_a8;
                  lVar14 = local_b0;
                }
              }
              UMovieGraphApplyCVarPresetNode::GetConsoleVariableOverrides(this_00,&local_88);
              iVar6 = local_88.ArrayNum;
              pTVar1 = (TTuple<FString,float> *)
                       (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x18);
              FVar11.Data = local_88.AllocatorInstance.Data;
              while( true ) {
                if (local_88.ArrayNum != iVar6) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<TTuple<FString,float>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                if ((TTuple<FString,float> *)FVar11.Data == pTVar1) break;
                AddCVar(this,(FString *)FVar11.Data,
                        *(float *)&((TTuple<FString,float> *)FVar11.Data)->field_0x10);
                FVar11.Data = FVar11.Data + 0x18;
              }
              DestructItems<TTuple<FString,float>,int>
                        ((TTuple<FString,float> *)local_88.AllocatorInstance.Data,local_88.ArrayNum)
              ;
              if ((TTuple<FString,float> *)local_88.AllocatorInstance.Data !=
                  (TTuple<FString,float> *)0x0) {
                FMemory::Free(local_88.AllocatorInstance.Data);
              }
            }
            else if (this_02->Handle != (UObject *)0x0) {
              pUVar9 = Z_Construct_UClass_UMovieGraphSetStartEndConsoleCommandsNode_NoRegister();
              bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar9);
              if ((bVar7) && (pUVar2 = this_02->Handle, pUVar2 != (UObject *)0x0)) {
                TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                          (&this->StartConsoleCommands,
                           (TArray<FString,TSizedDefaultAllocator<32>_> *)
                           (*(longlong *)&pUVar2[4].field_0x18 + 0x30));
                TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                          (&this->EndConsoleCommands,
                           (TArray<FString,TSizedDefaultAllocator<32>_> *)
                           (*(longlong *)&pUVar2[4].field_0x18 + 0x40));
              }
            }
          }
        }
        lVar14 = lVar14 + -1;
        lVar12 = lVar12 + -8;
        uVar13 = uVar13 - 1;
        local_b0 = lVar14;
        local_a8 = lVar12;
      } while (-1 < (int)uVar13);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  return;
}

// AddPreset @ 14dcb9c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddPreset
          (FMovieGraphCVarManager *this,
          TScriptInterface<IMovieSceneConsoleVariableTrackInterface> *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  TTuple<FString,FString> *pTVar5;
  TTuple<FString,FString> *pTVar6;
  bool local_res10 [8];
  float local_res18 [2];
  FName local_res20;
  TTuple<FString,FString> *local_58;
  undefined8 local_50;
  FString local_48 [2];
  
  if ((*(longlong *)param_1 == 0) ||
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 == (longlong *)0x0)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    local_58 = (TTuple<FString,FString> *)0x0;
    local_50 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,1,&local_58);
    fVar2 = __real_3f800000;
    iVar3 = (int)local_50;
    pTVar6 = local_58 + (int)local_50;
    pTVar5 = local_58;
    while( true ) {
      if ((int)local_50 != iVar3) {
        `TCheckedPointerIterator<TTuple<FString,FString>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pTVar5 == pTVar6) break;
      local_res18[0] = 0.0;
      local_res10[0] = false;
      bVar4 = FDefaultValueHelper::ParseFloat((FString *)&pTVar5->field_0x10,local_res18);
      if (bVar4) {
        AddCVar(this,(FString *)pTVar5,local_res18[0]);
        pTVar5 = pTVar5 + 1;
      }
      else {
        bVar4 = FDefaultValueHelper::ParseBool((FString *)&pTVar5->field_0x10,local_res10);
        if (bVar4) {
          if (local_res10[0] == false) {
            AddCVar(this,(FString *)pTVar5,0.0);
            pTVar5 = pTVar5 + 1;
          }
          else {
            AddCVar(this,(FString *)pTVar5,fVar2);
            pTVar5 = pTVar5 + 1;
          }
        }
        else {
          if (2 < (byte)LogMovieRenderPipeline._0_1_) {
            local_res20 = *(FName *)(*(longlong *)param_1 + 0x18);
            ::FName::ToString(&local_res20,local_48);
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
            ;
            if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
            }
          }
          pTVar5 = pTVar5 + 1;
        }
      }
    }
    DestructItems<TTuple<FString,FString>,int>(local_58,(int)local_50);
    if (local_58 != (TTuple<FString,FString> *)0x0) {
      FMemory::Free(local_58);
      return;
    }
  }
  return;
}

// AddShot @ 14dcba5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddShot
          (FMovieGraphCVarManager *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UMoviePipelineExecutorShot *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  pUVar4 = (param_1->field0_0x0).DebugPtr;
  if (pUVar4 != (UMoviePipelineExecutorShot *)0x0) {
    pUVar5 = Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar4,pUVar5);
    if (pUVar6 != (UObject *)0x0) {
      iVar3 = *(int *)&pUVar6[5].field_0x18;
      piVar7 = *(int **)&pUVar6[5].field_0x10;
      piVar1 = piVar7 + (longlong)iVar3 * 6;
      while( true ) {
        if (*(int *)&pUVar6[5].field_0x18 != iVar3) {
          `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (piVar7 == piVar1) break;
        if (*(char *)(piVar7 + 5) != '\0') {
          AddCVar(this,(FString *)piVar7,
                  *(float *)&(((FString *)(piVar7 + 4))->Data).AllocatorInstance.Data);
        }
        piVar7 = piVar7 + 6;
      }
    }
    pUVar4 = (param_1->field0_0x0).DebugPtr;
    iVar3 = (pUVar4->ConsoleVariableOverrides).ArrayNum;
    pFVar8 = (pUVar4->ConsoleVariableOverrides).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)iVar3 * 0x18;
    while( true ) {
      if ((pUVar4->ConsoleVariableOverrides).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMoviePipelineConsoleVariableEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar2) break;
      if (pFVar8[0x14] != (FScriptContainerElement)0x0) {
        AddCVar(this,(FString *)pFVar8,*(float *)&pFVar8[0x10].field_0x0);
      }
      pFVar8 = pFVar8 + 0x18;
    }
  }
  return;
}

// AddStartConsoleCommands @ 14dcba6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::AddStartConsoleCommands
          (FMovieGraphCVarManager *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->StartConsoleCommands,param_1);
  return;
}

// ApplyAllCVars @ 14dcba830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::ApplyAllCVars(FMovieGraphCVarManager *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  IConsoleVariable *pIVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong local_res8;
  FString local_48 [2];
  
  piVar1 = &(this->PreviousConsoleVariableValues).ArrayMax;
  (this->PreviousConsoleVariableValues).ArrayNum = 0;
  piVar2 = &(this->PreviousConsoleVariableValues).ArrayNum;
  if ((this->PreviousConsoleVariableValues).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreviousConsoleVariableValues).AllocatorInstance,0,piVar1);
  }
  uVar11 = (this->CVars).ArrayNum;
  iVar6 = *piVar2;
  if (iVar6 < (int)uVar11) {
    iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar11 - iVar6,&(this->PreviousConsoleVariableValues).AllocatorInstance,
                       piVar2,piVar1);
    memset((this->PreviousConsoleVariableValues).AllocatorInstance.Data + (longlong)iVar5 * 4,0,
           (longlong)(int)(uVar11 - iVar6) << 2);
  }
  else {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if ((int)uVar11 < iVar6) {
      uVar12 = iVar6 - uVar11;
      if (((int)(uVar12 | uVar11) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar12 != 0) {
        pFVar9 = (this->PreviousConsoleVariableValues).AllocatorInstance.Data +
                 (longlong)(int)uVar11 * 4;
        iVar6 = (*piVar2 - uVar11) - uVar12;
        if (iVar6 != 0) {
          memmove(pFVar9,pFVar9 + (longlong)(int)uVar12 * 4,(longlong)iVar6 << 2);
        }
        *piVar2 = *piVar2 - uVar12;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->PreviousConsoleVariableValues).AllocatorInstance,*piVar2,piVar1);
      }
    }
  }
  iVar6 = (this->CVars).ArrayNum;
  uVar11 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    local_res8 = 0;
    do {
      uVar13 = ~uVar11 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar11 < iVar6) {
        uVar12 = uVar13;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (this->CVars).AllocatorInstance.Data + local_res8;
      ::FString::TrimStartAndEnd((FString *)pFVar9,local_48);
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48[0].Data.ArrayNum != 0) {
        FVar8.Data = local_48[0].Data.AllocatorInstance.Data;
      }
      pIVar7 = (IConsoleVariable *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,FVar8.Data,1);
      if (pIVar7 == (IConsoleVariable *)0x0) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      else {
        uVar14 = (**(code **)(*(longlong *)pIVar7 + 0xd0))();
        uVar12 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar12 = uVar13;
        }
        if ((uVar12 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((this->PreviousConsoleVariableValues).AllocatorInstance.Data + lVar10 * 4) =
             uVar14;
        ApplyCVar(pIVar7,*(float *)&pFVar9[0x10].field_0x0);
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          uVar12 = 0;
          if ((int)uVar11 < *piVar2) {
            uVar12 = uVar13;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
      iVar6 = (this->CVars).ArrayNum;
      local_res8 = local_res8 + 0x18;
      lVar10 = lVar10 + 1;
    } while ((int)uVar11 < iVar6);
  }
  return;
}

// ApplyCVar @ 14dcbac00

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UE::MovieGraph::Private::FMovieGraphCVarManager::ApplyCVar(IConsoleVariable *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ForAnyElementType FVar7;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  FString local_80;
  uint local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if ((param_1 == (IConsoleVariable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphCVarManager.cpp"
                         ,0xd6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x40))();
    if (cVar4 == '\0') {
      local_48 = 0;
      local_40 = 0;
      local_4c = 1;
      local_38 = 0x2000000;
      local_3c = 0xf000000;
      local_50 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
      local_50 = local_50 & 0xff000000;
      ::FString::PrintfImpl(&local_80,L"%g");
      lVar1 = *(longlong *)param_1;
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar7.Data = local_80.Data.AllocatorInstance.Data;
      }
      uVar5 = (**(code **)(lVar1 + 0xa8))(param_1,local_8c,&local_50);
      (**(code **)(lVar1 + 0xb0))(param_1,FVar7.Data,uVar5);
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_60 = 0;
      local_6c = 1;
      local_58 = 0x2000000;
      local_5c = 0xf000000;
      local_68 = 0;
      local_70 = (**(code **)(*(longlong *)param_1 + 0x18))();
      lVar1 = *(longlong *)param_1;
      local_70 = local_70 & 0xff000000;
      uVar5 = (**(code **)(lVar1 + 0xa8))(param_1,local_98,&local_70);
      puVar6 = &u_0;
      if (param_2 != 0.0) {
        puVar6 = &u_1;
      }
      (**(code **)(lVar1 + 0xb0))(param_1,puVar6,uVar5);
    }
  }
  else {
    IConsoleVariable::SetWithCurrentPriority<int>
              (param_1,(int)param_2,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  return;
}

// RevertAllCVars @ 14dce2160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::RevertAllCVars(FMovieGraphCVarManager *this)

{
  int *piVar1;
  FMovieGraphCVarOverride *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IConsoleVariable *pIVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FString local_38;
  
  iVar7 = (this->CVars).ArrayNum;
  uVar10 = 0;
  uVar12 = uVar10;
  uVar13 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < iVar7) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::TrimStartAndEnd
                ((FString *)((this->CVars).AllocatorInstance.Data + uVar12),&local_38);
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      pIVar6 = (IConsoleVariable *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,FVar8.Data);
      if (pIVar6 == (IConsoleVariable *)0x0) {
        if (2 < (byte)LogMovieRenderPipeline._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      else {
        uVar5 = 0;
        if ((int)uVar9 < (this->PreviousConsoleVariableValues).ArrayNum) {
          uVar5 = uVar11;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ApplyCVar(pIVar6,*(float *)((this->PreviousConsoleVariableValues).AllocatorInstance.Data +
                                   uVar13 * 4));
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          uVar5 = 0;
          if ((int)uVar9 < (this->PreviousConsoleVariableValues).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar7 = (this->CVars).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x18;
      uVar13 = uVar13 + 1;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  piVar1 = &(this->CVars).ArrayMax;
  pFVar2 = (FMovieGraphCVarOverride *)(this->CVars).AllocatorInstance.Data;
  if (*piVar1 < 0) {
    DestructItems<UE::MovieGraph::Private::FMovieGraphCVarManager::FMovieGraphCVarOverride,int>
              (pFVar2,iVar7);
    (this->CVars).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<UE::MovieGraph::Private::FMovieGraphCVarManager::FMovieGraphCVarOverride,int>
              (pFVar2,iVar7);
    (this->CVars).ArrayNum = 0;
  }
  (this->PreviousConsoleVariableValues).ArrayNum = 0;
  if ((this->PreviousConsoleVariableValues).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreviousConsoleVariableValues).AllocatorInstance,0,
               &(this->PreviousConsoleVariableValues).ArrayMax);
  }
  return;
}

// RunEndConsoleCommands @ 14dce2480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::RunEndConsoleCommands(FMovieGraphCVarManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EndConsoleCommands).ArrayNum;
  pFVar2 = (this->EndConsoleCommands).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->EndConsoleCommands).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar2 == pFVar3) break;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    UKismetSystemLibrary::ExecuteConsoleCommand
              ((UObject *)this->WorldContext,(FString *)pFVar2,(APlayerController *)0x0);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// RunStartConsoleCommands @ 14dce2530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::RunStartConsoleCommands
          (FMovieGraphCVarManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->StartConsoleCommands).ArrayNum;
  pFVar2 = (this->StartConsoleCommands).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->StartConsoleCommands).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar2 == pFVar3) break;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    UKismetSystemLibrary::ExecuteConsoleCommand
              ((UObject *)this->WorldContext,(FString *)pFVar2,(APlayerController *)0x0);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// SetWorld @ 14dce3410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieGraph::Private::FMovieGraphCVarManager::SetWorld
          (FMovieGraphCVarManager *this,UWorld *param_1)

{
  this->WorldContext = param_1;
  return;
}

