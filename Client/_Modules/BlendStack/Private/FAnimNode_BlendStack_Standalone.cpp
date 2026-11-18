// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 30

// StaticStruct @ 14a85ba20

UScriptStruct * __cdecl FAnimNode_BlendStack_Standalone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone,(UObject *)pUVar1
                         ,L"AnimNode_BlendStack_Standalone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.OuterSingleton;
}

// Evaluate_AnyThread @ 14a85bf10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_BlendStack_Standalone::Evaluate_AnyThread
          (FAnimNode_BlendStack_Standalone *this,FPoseContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_BlendStack_Evaluate_AnyThread>
  FVar9;
  UObject *pUVar10;
  FString *pFVar11;
  UAnimationAsset *pUVar12;
  int iVar13;
  FName FVar14;
  int iVar15;
  FBlendStackAnimPlayer *this_00;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  FColor_u_0 local_res20 [2];
  longlong local_258;
  FString local_250;
  FName local_240;
  FString local_238;
  FName local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FAnimNode_BlendStack_Standalone *local_1a8;
  undefined1 *local_1a0;
  FPoseContext *local_198;
  longlong local_190;
  undefined4 local_188;
  undefined1 local_178 [88];
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_120;
  bool local_e0;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendStack_Standalone::Evaluate_AnyThread");
  uVar18 = 0;
  uVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BlendStack_Evaluate_AnyThread ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_BlendStack_Evaluate_AnyThread>
         )0x0) {
      pFVar8 = ::FName::FName(&local_d8,"STAT_BlendStack_Evaluate_AnyThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendStack_Evaluate_AnyThread,*pFVar8,
                 L"STAT_BlendStack_Evaluate_AnyThread","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_BlendStack_Evaluate_AnyThread;
  if (StatPtr_STAT_BlendStack_Evaluate_AnyThread ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_BlendStack_Evaluate_AnyThread>
       )0x0) {
    pFVar8 = ::FName::FName(&local_d0,"STAT_BlendStack_Evaluate_AnyThread");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::Evaluate_AnyThread(FPoseContext_&)_::_2_::FStat_STAT_BlendStack_Evaluate_AnyThread>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendStack_Evaluate_AnyThread,
                         *pFVar8,L"STAT_BlendStack_Evaluate_AnyThread","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar3 = false;
  bVar2 = false;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  bVar6 = false;
  bVar4 = false;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_14a85c0b9:
    bVar3 = bVar6;
    bVar2 = bVar4;
    bVar4 = false;
    FVar14 = local_228;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar2 = true;
      bVar6 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_240.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                   ,0x24a);
        bVar3 = true;
        bVar2 = true;
        bVar6 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14a85c0b9;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar4 = true;
  }
  FAnimNode_Base::Evaluate_AnyThread((FAnimNode_Base *)this,param_1);
  bVar6 = UE::BlendStack::GVarAnimBlendStackEnable;
  if (-1 < AnimationChannel->Enabled) {
    pUVar10 = (UObject *)(**(code **)(this->_padding_ + 0xa0))(this);
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Asset",pUVar10);
    if (0 < (this->AnimPlayers).ArrayNum) {
      local_258 = 0;
      do {
        uVar7 = uVar17;
        if ((int)uVar18 < (this->AnimPlayers).ArrayNum) {
          uVar7 = ~uVar18 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(float *)((this->AnimPlayers).AllocatorInstance.Data + local_258 + 0x390) <= 0.0) {
          pFVar11 = ::FString::FString(&local_c8,"]");
          local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.Data.ArrayNum = 0;
          local_238.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_238,uVar18);
          ::FString::FString(&local_1b8,"[");
          ::FString::ConcatFF(&local_1c8,&local_1b8,&local_238);
          ::FString::ConcatFF(&local_250,&local_1c8,pFVar11);
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_b8,"Asset");
          ::FString::ConcatFF(&local_1d8,pFVar11,&local_250);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_a8,"ElapsedTime");
          ::FString::ConcatFF(&local_1e8,pFVar11,&local_250);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_98,"CurrentBlendInTime");
          ::FString::ConcatFF(&local_1f8,pFVar11,&local_250);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_88,"TotalBlendInTime");
          ::FString::ConcatFF(&local_208,pFVar11,&local_250);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_78,"TimeToActivation");
          ::FString::ConcatFF(&local_218,pFVar11,&local_250);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          pFVar11 = ::FString::FString(&local_68,"Mirror");
          ::FString::ConcatFF(local_58,pFVar11,&local_250);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          uVar7 = 0;
          if ((int)uVar18 < (this->AnimPlayers).ArrayNum) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = (FBlendStackAnimPlayer *)
                    ((this->AnimPlayers).AllocatorInstance.Data + local_258);
          pUVar12 = FBlendStackAnimPlayer::GetAnimationAsset(this_00);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1d8.Data.ArrayNum != 0) {
            FVar16.Data = local_1d8.Data.AllocatorInstance.Data;
          }
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     (wchar_t *)FVar16.Data,(UObject *)pUVar12);
          fVar19 = FBlendStackAnimPlayer::GetAccumulatedTime(this_00);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1e8.Data.ArrayNum != 0) {
            FVar16.Data = local_1e8.Data.AllocatorInstance.Data;
          }
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     (wchar_t *)FVar16.Data,fVar19);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_1f8.Data.ArrayNum != 0) {
            FVar16.Data = local_1f8.Data.AllocatorInstance.Data;
          }
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     (wchar_t *)FVar16.Data,this_00->CurrentBlendInTime);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_208.Data.ArrayNum != 0) {
            FVar16.Data = local_208.Data.AllocatorInstance.Data;
          }
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     (wchar_t *)FVar16.Data,this_00->TotalBlendInTime);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_218.Data.ArrayNum != 0) {
            FVar16.Data = local_218.Data.AllocatorInstance.Data;
          }
          FAnimTrace::OutputAnimNodeValue
                    ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
                     (wchar_t *)FVar16.Data,this_00->TimeToActivation);
          if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
        }
        local_258 = local_258 + 0x3a0;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (this->AnimPlayers).ArrayNum);
    }
  }
  iVar15 = (this->AnimPlayers).ArrayNum;
  if (0 < iVar15) {
    if ((iVar15 != 1) && (bVar6 != false)) {
      bVar6 = EvaluateSample(this,param_1,iVar15 + -1);
      if (!bVar6) {
        if (1 < (byte)LogBlendStack._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
        }
        if (param_1->bExpectsAdditivePose == false) {
          FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                    ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                     *(FBoneContainer **)&(param_1->Pose).field_0x10);
        }
        else {
          FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
        }
      }
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_178,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_e0 = param_1->bExpectsAdditivePose != false;
      local_178._32_8_ = 0;
      local_178._40_8_ = 0;
      local_178._48_8_ = 0;
      local_178._56_8_ = 0;
      local_178._64_8_ = 0;
      local_178[0x48] = 0;
      local_178._80_8_ = 0;
      TStack_120.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_120.UniqueTypedBoneIndices.ArrayNum = 0;
      TStack_120.UniqueTypedBoneIndices.ArrayMax = 0;
      TStack_120.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_120.AttributeIdentifiers.ArrayNum = 0;
      TStack_120.AttributeIdentifiers.ArrayMax = 0;
      TStack_120.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_120.Values.ArrayNum = 0;
      TStack_120.Values.ArrayMax = 0;
      TStack_120.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_120.UniqueTypes.ArrayNum = 0;
      TStack_120.UniqueTypes.ArrayMax = 0;
      FPoseContext::InitializeImpl
                ((FPoseContext *)local_178,(FAnimInstanceProxy *)param_1->_padding_);
      local_178._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
      local_1a0 = local_178;
      iVar15 = iVar15 + -2;
      local_178._24_4_ = (undefined4)param_1->_padding_;
      local_190 = *(longlong *)&(param_1->Pose).field_0x10;
      iVar13 = this->MaxActiveBlends;
      local_188 = *(undefined4 *)(local_190 + 8);
      local_1a8 = this;
      local_198 = param_1;
      if (iVar13 <= iVar15) {
        do {
          `FAnimNode_BlendStack_Standalone::Evaluate_AnyThread'::__l22::<lambda_1>::operator()
                    (&local_1a8,iVar15);
          PopLastAnimPlayer(this);
          iVar13 = this->MaxActiveBlends;
          iVar15 = iVar15 + -1;
        } while (iVar13 <= iVar15);
      }
      if (iVar15 == iVar13 + -1) {
        if (((this->AnimPlayers).ArrayNum != iVar13 + 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AnimPlayers.Num() == MaxActiveBlends + 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                               ,0x2af,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar13 = (this->AnimPlayers).ArrayNum;
        uVar18 = iVar13 - 1;
        if (this->bStoreBlendedPose == false) {
          uVar7 = uVar17;
          if ((int)uVar18 < iVar13) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          fVar20 = __real_3f800000 - this->MaxBlendInTimeToOverrideAnimation;
          fVar19 = FBlendStackAnimPlayer::GetBlendInPercentage
                             ((FBlendStackAnimPlayer *)
                              ((this->AnimPlayers).AllocatorInstance.Data +
                              (longlong)((this->AnimPlayers).ArrayNum + -1) * 0x3a0));
          if ((fVar19 < fVar20) && (2 < (byte)LogBlendStack._0_1_)) {
            iVar13 = (this->AnimPlayers).ArrayNum;
            uVar18 = iVar13 - 1;
            if ((int)uVar18 < iVar13) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FBlendStackAnimPlayer::GetBlendInPercentage
                      ((FBlendStackAnimPlayer *)
                       ((this->AnimPlayers).AllocatorInstance.Data +
                       (longlong)((this->AnimPlayers).ArrayNum + -1) * 0x3a0));
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
          }
        }
        else {
          uVar17 = 0;
          if ((int)uVar18 < iVar13) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FBlendStackAnimPlayer::StorePoseContext
                    ((FBlendStackAnimPlayer *)
                     ((this->AnimPlayers).AllocatorInstance.Data +
                     (longlong)((this->AnimPlayers).ArrayNum + -1) * 0x3a0),param_1);
        }
      }
      for (; -1 < iVar15; iVar15 = iVar15 + -1) {
        `FAnimNode_BlendStack_Standalone::Evaluate_AnyThread'::__l22::<lambda_1>::operator()
                  (&local_1a8,iVar15);
      }
      UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
      ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&TStack_120);
      goto LAB_14a85c862;
    }
    bVar6 = EvaluateSample(this,param_1,0);
    if (bVar6) goto LAB_14a85c862;
  }
  if (param_1->bExpectsAdditivePose == false) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
LAB_14a85c862:
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14a85c970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_BlendStack_Standalone::Initialize_AnyThread
          (FAnimNode_BlendStack_Standalone *this,FAnimationInitializeContext *param_1)

{
  TArray<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar15;
  undefined1 local_res8 [8];
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_48;
  FSharedReferencer<1> FStack_40;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *local_38;
  FSharedReferencer<1> FStack_30;
  
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  if (this->bShouldFilterNotifies != false) {
    FStack_40.ReferenceController = ::operator_new(0x20);
    pTVar10 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
              &DAT_00000010;
    if (FStack_40.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_48 = ___xmm_00000000000000000000000000000010;
      pTVar15 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)&DAT_00000010;
      FStack_40.ReferenceController = _UNK_150651568;
      pTVar12 = pTVar13;
    }
    else {
      (FStack_40.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar15 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)(FStack_40.ReferenceController + 1);
      (FStack_40.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_40.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_VFName__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      FStack_40.ReferenceController[1]._padding_ = 0;
      FStack_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_40.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if (pTVar15 ==
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0)
      {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      (FStack_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar12 = FStack_40.ReferenceController;
      local_48 = pTVar15;
    }
    if (&this->NotifiesFiredLastTick !=
        (TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *)&local_48) {
      (this->NotifiesFiredLastTick).Object = (TArray<FName,TSizedDefaultAllocator<32>_> *)pTVar15;
      local_48 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NotifiesFiredLastTick).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    FStack_30.ReferenceController = ::operator_new(0x60);
    if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      FStack_30.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                 *)(FStack_30.ReferenceController + 1);
      (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_30.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TMap_VFName__MVFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFName__M_0A______00_SharedPointerInternals__6B_
      ;
      FStack_30.ReferenceController[2]._padding_ = 0;
      FStack_30.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1]._padding_ = 0;
      FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[3]._padding_ = 0;
      FStack_30.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_30.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&FStack_30.ReferenceController[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&FStack_30.ReferenceController[4]._padding_ + 4) = 0;
      FStack_30.ReferenceController[5]._padding_ = 0;
      if (pTVar10 ==
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0)
      {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      LOCK();
      (FStack_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar13 = FStack_30.ReferenceController;
      local_38 = pTVar10;
    }
    if (&this->NotifyRecencyMap !=
        (TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
         *)&local_38) {
      (this->NotifyRecencyMap).Object = pTVar10;
      local_38 = (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NotifyRecencyMap).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  (**(code **)(this->_padding_ + 0x148))(this);
  uVar4 = (this->PerSampleGraphPoseLinks).ArrayNum;
  if (uVar4 != 0) {
    pTVar1 = &this->SampleGraphExecutionHelpers;
    iVar8 = (this->SampleGraphExecutionHelpers).ArrayNum;
    piVar2 = &(this->SampleGraphExecutionHelpers).ArrayNum;
    if (iVar8 < (int)uVar4) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar4 - iVar8,&pTVar1->AllocatorInstance,piVar2,
                         &(this->SampleGraphExecutionHelpers).ArrayMax);
      DefaultConstructItems<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x18,uVar4 - iVar8);
    }
    else {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)uVar4 < iVar8) {
        uVar11 = iVar8 - uVar4;
        if ((int)(uVar11 | uVar4) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x18;
          iVar8 = (*piVar2 - uVar11) - uVar4;
          if (iVar8 != 0) {
            memmove(pFVar9,pFVar9 + (longlong)(int)uVar11 * 0x18,(longlong)iVar8 * 0x18);
          }
          *piVar2 = *piVar2 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&pTVar1->AllocatorInstance,*piVar2,
                     &(this->SampleGraphExecutionHelpers).ArrayMax);
        }
      }
    }
    iVar8 = *piVar2;
    pFVar14 = (pTVar1->AllocatorInstance).Data;
    pFVar9 = pFVar14 + 0x12;
    pFVar3 = pFVar14 + (longlong)iVar8 * 0x18;
    while( true ) {
      if (*piVar2 != iVar8) {
        `TCheckedPointerIterator<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar3) break;
      pFVar14 = pFVar14 + 0x18;
      *(undefined4 *)(pFVar9 + -2) = 0xffff;
      *(undefined8 *)(pFVar9 + -10) = 0xffffffffffffffff;
      pFVar9 = pFVar9 + 0x18;
    }
  }
  return;
}

// CacheBones_AnyThread @ 14a85cd00

void __thiscall
FAnimNode_BlendStack_Standalone::CacheBones_AnyThread
          (FAnimNode_BlendStack_Standalone *this,FAnimationCacheBonesContext *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)(this->AnimPlayers).ArrayNum;
  uVar6 = 0;
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->AnimPlayers).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->AnimPlayers).AllocatorInstance.Data;
      bVar3 = IsSampleGraphAvailableForPlayer(this,uVar6);
      if (bVar3) {
        uVar4 = *(uint *)(pFVar1 + lVar8 + 0x374);
        uVar5 = 0;
        if ((int)uVar4 < (this->SampleGraphExecutionHelpers).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->SampleGraphExecutionHelpers).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar4 < (this->PerSampleGraphPoseLinks).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::ConditionalCacheBones
                  ((FBlendStack_SampleGraphExecutionHelper *)(pFVar1 + (longlong)(int)uVar4 * 0x18),
                   (FAnimationBaseContext *)param_1,
                   (FPoseLink *)
                   ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data +
                   (longlong)(int)uVar4 * 0x10));
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x3a0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// GatherDebugData @ 14a85cea0

void __thiscall
FAnimNode_BlendStack_Standalone::GatherDebugData
          (FAnimNode_BlendStack_Standalone *this,FNodeDebugData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPackage *pUVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FBlendStackAnimPlayer *this_00;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone,(UObject *)pUVar5
                         ,L"AnimNode_BlendStack_Standalone");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendStack_Standalone.
                       OuterSingleton)->_padding_;
  ::FName::ToString(&local_res10,&local_88);
  ::FString::PrintfImpl(&local_78,L"%s<W:%.1f%%> %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_68,L"%s");
  FNodeDebugData::AddDebugItem(param_1,&local_68,false);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  uVar6 = 0;
  if (0 < (this->AnimPlayers).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->AnimPlayers).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FBlendStackAnimPlayer *)((this->AnimPlayers).AllocatorInstance.Data + lVar8);
      FBlendStackAnimPlayer::GetAnimationName(this_00,local_48);
      (**(code **)((this_00->MirrorNode)._padding_ + 0xb0))();
      ::FString::PrintfImpl(&local_58,L"%d) t:%.2f/%.2f a:%.2f m:%d %s");
      FNodeDebugData::AddDebugItem(param_1,&local_58,false);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x3a0;
    } while ((int)uVar6 < (this->AnimPlayers).ArrayNum);
  }
  iVar1 = (this->AnimPlayers).ArrayNum;
  pFVar7 = (this->AnimPlayers).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x3a0;
  while( true ) {
    if ((this->AnimPlayers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FBlendStackAnimPlayer,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    (**(code **)(*(longlong *)(pFVar7 + 0x148) + 0x28))(pFVar7 + 0x148,param_1);
    pFVar7 = pFVar7 + 0x3a0;
  }
  return;
}

// Reset @ 14a85d150

void __thiscall FAnimNode_BlendStack_Standalone::Reset(FAnimNode_BlendStack_Standalone *this)

{
  int *piVar1;
  int iVar2;
  FBlendStackAnimPlayer *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar7 = this->MaxActiveBlends + 2;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar1 = &(this->AnimPlayers).ArrayMax;
  if (*piVar1 < (int)uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3a0,8,uVar7,&(this->AnimPlayers).AllocatorInstance,(this->AnimPlayers).ArrayNum,
               piVar1);
  }
  pFVar3 = (FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data;
  iVar2 = (this->AnimPlayers).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FBlendStackAnimPlayer,int>(pFVar3,iVar2);
    (this->AnimPlayers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3a0,8,0,&(this->AnimPlayers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FBlendStackAnimPlayer,int>(pFVar3,iVar2);
    (this->AnimPlayers).ArrayNum = 0;
  }
  if (this->bShouldFilterNotifies != false) {
    if ((this->NotifiesFiredLastTick).Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar4 = (this->NotifiesFiredLastTick).Object;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
    if ((this->NotifyRecencyMap).Object ==
        (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)(this->NotifyRecencyMap).Object);
  }
  return;
}

// GetAnimAsset @ 14a85d2c0

UAnimationAsset * __thiscall
FAnimNode_BlendStack_Standalone::GetAnimAsset(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UAnimationAsset *pUVar4;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 == 0) {
    return (UAnimationAsset *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UAnimationAsset *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = FBlendStackAnimPlayer::GetAnimationAsset
                     ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data);
  return pUVar4;
}

// GetAccumulatedTime @ 14a85d330

float __thiscall
FAnimNode_BlendStack_Standalone::GetAccumulatedTime(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 == 0) {
    return 0.0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  fVar4 = FBlendStackAnimPlayer::GetAccumulatedTime
                    ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data);
  return fVar4;
}

// UpdateAssetPlayer @ 14a85d3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_BlendStack_Standalone::UpdateAssetPlayer
          (FAnimNode_BlendStack_Standalone *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  double dVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *pTVar4;
  code *pcVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_BlendStack_UpdateAssetPlayer>
  FVar20;
  UObject *pUVar21;
  longlong lVar22;
  float *pfVar23;
  TReferenceControllerBase<1> *pTVar24;
  ulonglong uVar25;
  FAnimationUpdateContext *pFVar26;
  FName FVar27;
  FName *pFVar28;
  FBlendStackAnimPlayer *this_01;
  float fVar29;
  float fVar30;
  byte local_res18;
  undefined1 local_res20 [8];
  uint local_248;
  int local_244;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  FName local_238;
  FName local_230;
  FName local_228;
  longlong *local_218;
  undefined1 auStack_210 [16];
  uint uStack_200;
  uint uStack_1fc;
  longlong local_1f8;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  *pTStack_1f0;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  *local_1e8;
  undefined2 local_1e0;
  undefined4 local_1d8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_1d0;
  FScopedGraphMessage local_1c0;
  FName local_1b0;
  FName local_1a8;
  TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> local_1a0;
  FAnimationUpdateContext local_188;
  undefined1 local_158 [32];
  longlong local_138;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
  *pTStack_130;
  FAnimationUpdateContext local_128;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_BlendStack_UpdateAssetPlayer ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_BlendStack_UpdateAssetPlayer>
         )0x0) {
      pFVar19 = ::FName::FName(&local_1b0,"STAT_BlendStack_UpdateAssetPlayer");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendStack_UpdateAssetPlayer,*pFVar19,
                 L"STAT_BlendStack_UpdateAssetPlayer","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_BlendStack_UpdateAssetPlayer;
  if (StatPtr_STAT_BlendStack_UpdateAssetPlayer ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_BlendStack_UpdateAssetPlayer>
       )0x0) {
    pFVar19 = ::FName::FName(&local_1a8,"STAT_BlendStack_UpdateAssetPlayer");
    FVar20 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_BlendStack_Standalone::UpdateAssetPlayer(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_BlendStack_UpdateAssetPlayer>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlendStack_UpdateAssetPlayer,
                          *pFVar19,L"STAT_BlendStack_UpdateAssetPlayer","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar20;
  bVar10 = false;
  bVar9 = false;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_230.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                   ,0x2eb);
        bVar10 = true;
        bVar9 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_238 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar14 = true;
      goto LAB_14a85d55c;
    }
  }
  bVar10 = bVar15;
  bVar9 = bVar14;
  bVar14 = false;
  local_238 = local_228;
  FVar27 = local_228;
LAB_14a85d55c:
  if (this->bShouldFilterNotifies != false) {
    pUVar21 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
    lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x180))(pUVar21);
    if (lVar22 != 0) {
      dVar2 = *(double *)(lVar22 + 0x8f8);
      if (((this->NotifiesFiredLastTick).Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0)
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (this->NotifiesFiredLastTick).Object;
      pFVar28 = (FName *)(pTVar3->AllocatorInstance).Data;
      iVar17 = pTVar3->ArrayNum;
      pFVar19 = pFVar28 + iVar17;
      while( true ) {
        if (pTVar3->ArrayNum != iVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        FVar27 = local_238;
        if (pFVar28 == pFVar19) break;
        fVar1 = this->NotifyRecencyTimeOut;
        if (((this->NotifyRecencyMap).Object ==
             (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             0x0) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar27 = *pFVar28;
        this_00 = (this->NotifyRecencyMap).Object;
        uVar16 = ::GetTypeHash(FVar27.ComparisonIndex.Value);
        pfVar23 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                  ::FindOrAddImpl<FName_const_&>
                            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                              *)this_00,uVar16 + FVar27.Number,pFVar28);
        pFVar28 = pFVar28 + 1;
        *pfVar23 = (float)((double)fVar1 + dVar2);
      }
      if (((this->NotifiesFiredLastTick).Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0)
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (this->NotifiesFiredLastTick).Object;
      pTVar3->ArrayNum = 0;
      if (pTVar3->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
      }
      if (((this->NotifyRecencyMap).Object ==
           (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0
          ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar4 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)(this->NotifyRecencyMap).Object;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      TIterator::TIterator((TIterator *)local_158,pTVar4);
      local_1e0 = 0;
      stack0xfffffffffffffdf8 = local_158._16_16_;
      local_218 = (longlong *)local_158._0_8_;
      auStack_210._0_8_ = local_158._8_8_;
      local_1f8 = local_138;
      pTStack_1f0 = pTStack_130;
      uVar25 = local_158._24_8_ >> 0x20;
      uVar16 = local_158._28_4_;
      local_1e8 = pTVar4;
      if ((int)uVar16 < *(int *)(local_158._16_8_ + 0x18)) {
        do {
          if ((double)*(float *)(*local_218 + 8 + (longlong)(int)uVar25 * 0x14) <= dVar2) {
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_1f0,uVar16);
            local_1e0 = CONCAT11(local_1e0._1_1_,1);
          }
          uStack_200 = uStack_200 & ~auStack_210._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_210);
          uVar25 = (ulonglong)uStack_1fc;
          uVar16 = uStack_1fc;
        } while ((int)uStack_1fc < *(int *)(auStack_210._8_8_ + 0x18));
        if (((char)local_1e0 != '\0') && (local_1e0._1_1_ != '\0')) {
          uVar16 = *(int *)&(local_1e8->Elements).field_0x8 -
                   *(int *)&(local_1e8->Elements).field_0x34;
          iVar17 = 1;
          if (3 < uVar16) {
            uVar25 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_1d8 = (undefined4)lVar22;
            iVar17 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((0 < (int)uVar16) && (local_1e8->HashSize < iVar17)) ||
             (iVar17 < local_1e8->HashSize)) {
            local_1e8->HashSize = iVar17;
            TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
            ::Rehash(local_1e8);
          }
        }
      }
    }
  }
  UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope>::
  TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope><TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_&,TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>_&>
            (&local_1a0,this->bShouldFilterNotifies,(FAnimationBaseContext *)param_1,
             &this->NotifiesFiredLastTick,&this->NotifyRecencyMap);
  pTVar13 = _UNK_150651568;
  pTVar12 = ___xmm_00000000000000000000000000000010;
  fVar11 = __real_3f800000;
  fVar1 = __real_38d1b717;
  local_244 = (this->AnimPlayers).ArrayNum;
  local_248 = 0;
  local_res18 = 1;
  fVar30 = __real_3f800000;
  if (0 < local_244) {
    do {
      uVar16 = local_248;
      uVar18 = 0;
      if ((int)local_248 < (this->AnimPlayers).ArrayNum) {
        uVar18 = ~local_248 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = (FBlendStackAnimPlayer *)
                ((this->AnimPlayers).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x3a0);
      fVar29 = fVar11;
      if (local_248 != local_244 - 1U) {
        fVar29 = FBlendStackAnimPlayer::GetBlendInPercentage(this_01);
        fVar29 = FAlphaBlend::AlphaToBlendOption(fVar29,this_01->BlendOption,(UCurveFloat *)0x0);
      }
      uVar6 = param_1->RootMotionWeightModifier;
      fStack_d0 = param_1->DeltaTime;
      uStack_cc = *(undefined4 *)&param_1->field_0x2c;
      local_23c = (this_01->DebugColor).field0_0x0;
      lVar22 = param_1->_padding_;
      lVar7 = param_1->_padding_;
      uVar25 = param_1->_padding_;
      lVar8 = param_1->_padding_;
      fStack_d4 = (float)uVar6;
      local_d8 = fVar29 * fVar30 * param_1->CurrentWeight;
      UE::Anim::FScopedGraphMessage::FScopedGraphMessage
                (&local_1c0,(FAnimationBaseContext *)param_1);
      pTVar24 = ::operator_new(0x28);
      if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
        pTVar24 = (TReferenceControllerBase<1> *)0x0;
        local_1d0.Object = (IGraphMessage *)pTVar12;
        local_1d0.SharedReferenceCount.ReferenceController = pTVar13;
        FVar27 = UE::Anim::FAnimBlendDebugScope::TypeName;
      }
      else {
        pTVar24->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFAnimBlendDebugScope_Anim_UE___00_SharedPointerInternals__6B_
        ;
        pTVar24->SharedReferenceCount = (atomic<int>)0x1;
        pTVar24->WeakReferenceCount = (atomic<int>)0x1;
        UE::Anim::FAnimBlendDebugScope::FAnimBlendDebugScope
                  ((FAnimBlendDebugScope *)(pTVar24 + 1),(FAnimationBaseContext *)param_1,
                   (int *)&local_248,&local_244,(FColor *)&local_23c._s_0);
        if ((pTVar24 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar27 = UE::Anim::FAnimBlendDebugScope::TypeName;
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
        local_1d0.Object = (IGraphMessage *)(pTVar24 + 1);
        local_1d0.SharedReferenceCount.ReferenceController = pTVar24;
      }
      UE::Anim::FScopedGraphMessage::PushMessage
                (&local_1c0,(FAnimationBaseContext *)param_1,&local_1d0,FVar27);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
      if (((local_res18 == 0) || ((char)param_1->_padding_ == '\0')) ||
         (0.0 < this_01->TimeToActivation)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      this_01->bIsActive = bVar15;
      if (bVar15 == false) {
        local_188._padding_ = uVar25 & 0xffffffffffffff00;
        pFVar26 = &local_188;
        local_188.CurrentWeight = local_d8;
        local_188.RootMotionWeightModifier = fStack_d4;
        local_188.DeltaTime = fStack_d0;
        local_188._44_4_ = uStack_cc;
        local_188._padding_ = lVar22;
        local_188._padding_ = lVar7;
        local_188._padding_ = lVar8;
      }
      else {
        pFVar26 = &local_128;
        local_128.CurrentWeight = local_d8;
        local_128.RootMotionWeightModifier = fStack_d4;
        local_128.DeltaTime = fStack_d0;
        local_128._44_4_ = uStack_cc;
        local_128._padding_ = lVar22;
        local_128._padding_ = lVar7;
        local_128._padding_ = uVar25;
        local_128._padding_ = lVar8;
      }
      UpdateSample(this,pFVar26,local_248);
      local_res18 = local_res18 & (bVar15 ^ 1U);
      UE::Anim::FScopedGraphMessage::PopMessage(&local_1c0);
      local_248 = local_248 + 1;
      fVar30 = fVar30 * (fVar11 - fVar29);
      FVar27 = local_238;
    } while ((fVar1 <= fVar30) && ((int)local_248 < local_244));
  }
  uVar16 = local_248;
  if ((int)local_248 < 1) {
    uVar16 = 1;
  }
  iVar17 = (this->AnimPlayers).ArrayNum;
  while ((int)uVar16 < iVar17) {
    PopLastAnimPlayer(this);
    iVar17 = (this->AnimPlayers).ArrayNum;
  }
  if (local_1a0.bCondition != false) {
    UE::Anim::FScopedGraphMessage::PopMessage((FScopedGraphMessage *)&local_1a0);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// GetCurrentAssetTime @ 14a85dc80

float __thiscall
FAnimNode_BlendStack_Standalone::GetCurrentAssetTime(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 == 0) {
    return 0.0;
  }
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  pFVar2 = (this->AnimPlayers).AllocatorInstance.Data;
  lVar5 = (**(code **)(*(longlong *)(pFVar2 + 0x20) + 0x148))(pFVar2 + 0x20);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85dd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(*(longlong *)(pFVar2 + 0x20) + 0xc0))(pFVar2 + 0x20);
    return fVar6;
  }
  lVar5 = (**(code **)(*(longlong *)(pFVar2 + 0xb8) + 0x148))(pFVar2 + 0xb8);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85dd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(*(longlong *)(pFVar2 + 0xb8) + 0xc0))(pFVar2 + 0xb8);
    return fVar6;
  }
  return 0.0;
}

// GetCurrentAssetLength @ 14a85dd60

float __thiscall
FAnimNode_BlendStack_Standalone::GetCurrentAssetLength(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 == 0) {
    return 0.0;
  }
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  pFVar2 = (this->AnimPlayers).AllocatorInstance.Data;
  lVar5 = (**(code **)(*(longlong *)(pFVar2 + 0x20) + 0x148))(pFVar2 + 0x20);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85dde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(*(longlong *)(pFVar2 + 0x20) + 0xb8))(pFVar2 + 0x20);
    return fVar6;
  }
  lVar5 = (**(code **)(*(longlong *)(pFVar2 + 0xb8) + 0x148))(pFVar2 + 0xb8);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a85de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(*(longlong *)(pFVar2 + 0xb8) + 0xb8))(pFVar2 + 0xb8);
    return fVar6;
  }
  return 0.0;
}

// FAnimNode_BlendStack_Standalone @ 14a8611e0

FAnimNode_BlendStack_Standalone * __thiscall
FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone
          (FAnimNode_BlendStack_Standalone *this)

{
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_BlendStack_Standalone__6B_;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->SampleGraphExecutionHelpers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleGraphExecutionHelpers).ArrayNum = 0;
  (this->SampleGraphExecutionHelpers).ArrayMax = 0;
  (this->PerSampleGraphPoseLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSampleGraphPoseLinks).ArrayNum = 0;
  (this->PerSampleGraphPoseLinks).ArrayMax = 0;
  this->CurrentSamplePoseLink = -1;
  (this->AnimPlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimPlayers).ArrayNum = 0;
  (this->AnimPlayers).ArrayMax = 0;
  this->bShouldFilterNotifies = false;
  (this->StitchDatabase).field0_0x0.DebugPtr = (UObject *)0x0;
  this->StitchBlendTime = 0.1;
  this->StitchBlendMaxCost = 100.0;
  this->MaxActiveBlends = 4;
  this->bStoreBlendedPose = true;
  (this->NotifiesFiredLastTick).Object = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
  (this->NotifiesFiredLastTick).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NotifyRecencyMap).Object =
       (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0;
  (this->NotifyRecencyMap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->NotifyRecencyTimeOut = 0.2;
  this->MaxBlendInTimeToOverrideAnimation = 0.0;
  this->PlayerDepthBlendInTimeMultiplier = 1.0;
  return this;
}

// ~FAnimNode_BlendStack_Standalone @ 14a8625e0

void __thiscall
FAnimNode_BlendStack_Standalone::~FAnimNode_BlendStack_Standalone
          (FAnimNode_BlendStack_Standalone *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotifyRecencyMap).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NotifiesFiredLastTick).SharedReferenceCount.ReferenceController);
  DestructItems<FBlendStackAnimPlayer,int>
            ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data,
             (this->AnimPlayers).ArrayNum);
  pFVar1 = (this->AnimPlayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerSampleGraphPoseLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampleGraphExecutionHelpers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14a862a20

FAnimNode_BlendStack_Standalone * __thiscall
FAnimNode_BlendStack_Standalone::operator=
          (FAnimNode_BlendStack_Standalone *this,FAnimNode_BlendStack_Standalone *param_1)

{
  TArray<UE::BlendStack::FBlendStack_SampleGraphExecutionHelper,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<FPoseLink,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBlendStackAnimPlayer,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FBlendStackAnimPlayer *pFVar7;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *pTVar11;
  longlong lVar12;
  TReferenceControllerBase<1> *pTVar13;
  
  this->_padding_ = param_1->_padding_;
  pTVar1 = &this->SampleGraphExecutionHelpers;
  lVar12 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar12;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if (pTVar1 != &param_1->SampleGraphExecutionHelpers) {
    iVar5 = (param_1->SampleGraphExecutionHelpers).ArrayNum;
    piVar2 = &(this->SampleGraphExecutionHelpers).ArrayMax;
    pFVar6 = (param_1->SampleGraphExecutionHelpers).AllocatorInstance.Data;
    (this->SampleGraphExecutionHelpers).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
      }
    }
  }
  pTVar3 = &this->PerSampleGraphPoseLinks;
  if (pTVar3 != &param_1->PerSampleGraphPoseLinks) {
    iVar5 = (param_1->PerSampleGraphPoseLinks).ArrayNum;
    piVar2 = &(this->PerSampleGraphPoseLinks).ArrayMax;
    pFVar6 = (param_1->PerSampleGraphPoseLinks).AllocatorInstance.Data;
    (this->PerSampleGraphPoseLinks).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,*piVar2,&pTVar3->AllocatorInstance,iVar5,piVar2);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 4);
      }
    }
  }
  pTVar4 = &this->AnimPlayers;
  this->CurrentSamplePoseLink = param_1->CurrentSamplePoseLink;
  if (pTVar4 != &param_1->AnimPlayers) {
    DestructItems<FBlendStackAnimPlayer,int>
              ((FBlendStackAnimPlayer *)(pTVar4->AllocatorInstance).Data,
               (this->AnimPlayers).ArrayNum);
    iVar5 = (param_1->AnimPlayers).ArrayNum;
    piVar2 = &(this->AnimPlayers).ArrayMax;
    pFVar7 = (FBlendStackAnimPlayer *)(param_1->AnimPlayers).AllocatorInstance.Data;
    (this->AnimPlayers).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3a0,8,iVar5,*piVar2,&pTVar4->AllocatorInstance,iVar5,piVar2);
      ConstructItems<FBlendStackAnimPlayer,FBlendStackAnimPlayer,int>
                ((pTVar4->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  this->bShouldFilterNotifies = param_1->bShouldFilterNotifies;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->StitchDatabase).field0_0x0.DebugPtr, pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  (this->StitchDatabase).field0_0x0 = (param_1->StitchDatabase).field0_0x0;
  this->StitchBlendTime = param_1->StitchBlendTime;
  this->StitchBlendMaxCost = param_1->StitchBlendMaxCost;
  this->MaxActiveBlends = param_1->MaxActiveBlends;
  this->bStoreBlendedPose = param_1->bStoreBlendedPose;
  pTVar9 = (param_1->NotifiesFiredLastTick).SharedReferenceCount.ReferenceController;
  pTVar10 = (param_1->NotifiesFiredLastTick).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->NotifiesFiredLastTick).SharedReferenceCount.ReferenceController;
  (this->NotifiesFiredLastTick).Object = pTVar10;
  (this->NotifiesFiredLastTick).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar9 = (param_1->NotifyRecencyMap).SharedReferenceCount.ReferenceController;
  pTVar11 = (param_1->NotifyRecencyMap).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->NotifyRecencyMap).SharedReferenceCount.ReferenceController;
  (this->NotifyRecencyMap).Object = pTVar11;
  (this->NotifyRecencyMap).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  this->NotifyRecencyTimeOut = param_1->NotifyRecencyTimeOut;
  this->MaxBlendInTimeToOverrideAnimation = param_1->MaxBlendInTimeToOverrideAnimation;
  this->PlayerDepthBlendInTimeMultiplier = param_1->PlayerDepthBlendInTimeMultiplier;
  return this;
}

// operator() @ 14a863490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
`FAnimNode_BlendStack_Standalone::Evaluate_AnyThread'::__l22::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FBoneContainer *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FBlendStackAnimPlayer *pFVar10;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  FBoneContainer *local_b8;
  float *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  float *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  FAnimationPoseData local_68;
  FAnimationPoseData local_50;
  ulonglong local_38;
  
  puVar12 = auStack_f8;
  local_38 = __security_cookie.value ^ (ulonglong)&local_c8;
  lVar15 = (longlong)param_1;
  FAnimationPoseData::FAnimationPoseData(&local_50,*(FPoseContext **)((longlong)this + 0x10));
  FAnimationPoseData::FAnimationPoseData(&local_68,*(FPoseContext **)((longlong)this + 8));
  bVar5 = FAnimNode_BlendStack_Standalone::EvaluateSample
                    (*(FAnimNode_BlendStack_Standalone **)this,
                     *(FPoseContext **)((longlong)this + 8),param_1);
  puVar13 = auStack_f8;
  if (bVar5) {
    lVar8 = *(longlong *)this;
    pfVar14 = (float *)0x0;
    uVar17 = (uint)~param_1 >> 0x1f;
    iVar1 = *(int *)(lVar8 + 0x68);
    uVar6 = 0;
    if (param_1 < iVar1) {
      uVar6 = uVar17;
    }
    if ((uVar6 == 0) &&
       (local_d8 = lVar15, local_d0 = (longlong)iVar1,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar16 = lVar15 * 0x3a0;
    uVar6 = 0;
    local_c0 = lVar16;
    if (*(int *)(*(longlong *)(lVar8 + 0x60) + 0x380 + lVar16) < 1) {
      lVar8 = *(longlong *)this;
      iVar1 = *(int *)(lVar8 + 0x68);
      if (param_1 < iVar1) {
        uVar6 = uVar17;
      }
      if ((uVar6 == 0) &&
         (local_d8 = lVar15, local_d0 = (longlong)iVar1,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (FBlendStackAnimPlayer *)(*(longlong *)(lVar8 + 0x60) + lVar16);
      fVar18 = FBlendStackAnimPlayer::GetBlendInPercentage(pFVar10);
      fVar18 = FAlphaBlend::AlphaToBlendOption(fVar18,pFVar10->BlendOption,(UCurveFloat *)0x0);
      FAnimNode_BlendStack_Standalone::BlendWithPose(&local_50,&local_68,__real_3f800000 - fVar18);
      puVar13 = auStack_f8;
    }
    else {
      iVar1 = *(int *)((longlong)this + 0x20);
      lVar8 = (longlong)iVar1 * 4;
      if (lVar8 != 0) {
        uVar9 = lVar8 + 0x1e;
        if (uVar9 <= lVar8 + 0xfU) {
          uVar9 = 0xffffffffffffff0;
        }
        puVar12 = auStack_f8 + -(uVar9 & 0xfffffffffffffff0);
        pfVar14 = (float *)((longlong)&local_c0 + -(uVar9 & 0xfffffffffffffff0));
      }
      local_a8 = pfVar14;
      iStack_a0 = iVar1;
      if (iVar1 < 0) {
        *(undefined8 *)(puVar12 + -8) = 0x14a8635e4;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_b8 = *(FBoneContainer **)((longlong)this + 0x18);
      local_c8 = *(longlong *)this;
      uVar7 = uVar6;
      if (param_1 < *(int *)(local_c8 + 0x68)) {
        uVar7 = uVar17;
      }
      if (uVar7 == 0) {
        *(longlong *)(puVar12 + 0x28) = (longlong)*(int *)(local_c8 + 0x68);
        *(longlong *)(puVar12 + 0x20) = lVar15;
        *(undefined8 *)(puVar12 + -8) = 0x14a863633;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar8 = *(longlong *)this;
      local_c8 = *(longlong *)(local_c8 + 0x60);
      iVar2 = *(int *)(lVar8 + 0x68);
      if (param_1 < iVar2) {
        uVar6 = uVar17;
      }
      if (uVar6 == 0) {
        *(longlong *)(puVar12 + 0x28) = (longlong)iVar2;
        *(longlong *)(puVar12 + 0x20) = lVar15;
        *(undefined8 *)(puVar12 + -8) = 0x14a863680;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar4 = local_b8;
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = iStack_a0;
      pTVar11 = (TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>
                 *)(local_c8 + 0x378 + local_c0);
      local_88.DataPtr = local_a8;
      pFVar10 = (FBlendStackAnimPlayer *)(local_c0 + *(longlong *)(lVar8 + 0x60));
      *(undefined8 *)(puVar12 + -8) = 0x14a8636b2;
      GetBlendInWeightsCompactPose(pFVar10,pTVar11,&local_88,pFVar4);
      local_78._12_4_ = uStack_8c;
      local_78.ArrayNum = iVar1;
      local_98 = pfVar14;
      iStack_90 = iVar1;
      local_78.DataPtr = pfVar14;
      *(undefined8 *)(puVar12 + -8) = 0x14a8636d4;
      FAnimNode_BlendStack_Standalone::BlendWithPosePerBone(&local_50,&local_68,&local_78);
      puVar13 = puVar12;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x14a86375d;
  return;
}

// BlendTo @ 14a863a20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_BlendStack_Standalone::BlendTo
          (FAnimNode_BlendStack_Standalone *this,FAnimationUpdateContext *param_1,
          UAnimationAsset *param_2,float param_3,bool param_4,bool param_5,UMirrorDataTable *param_6
          ,float param_7,UBlendProfile *param_8,EAlphaBlendOption param_9,bool param_10,
          FName param_11,TVector<double> *param_12,float param_13,float param_14,FName param_15,
          Type param_16,EAnimSyncMethod param_17,bool param_18)

{
  float fVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  IPoseSearchProvider *pIVar7;
  longlong lVar8;
  undefined8 *puVar9;
  UClass *pUVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FName local_1b8 [2];
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TObjectPtr<UObject>_u_0 local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  UAnimationAsset *local_108;
  float local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  float local_e0;
  FName local_d8;
  float local_d0;
  float local_cc;
  bool local_c7;
  float local_c4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  
  pUVar3 = (this->StitchDatabase).field0_0x0.DebugPtr;
  local_a8 = (TObjectPtr<UObject>_u_0 *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
  if (pUVar3 == (UObject *)0x0) goto LAB_14a864009;
  if (this->MaxActiveBlends < 1) {
    local_a8 = (TObjectPtr<UObject>_u_0 *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
    if ((byte)LogBlendStack._0_1_ < 2) goto LAB_14a864009;
    local_150.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_150.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_150,&local_1a8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    local_198.Data.AllocatorInstance.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  else {
    pIVar7 = UE::Anim::IPoseSearchProvider::Get();
    if (pIVar7 == (IPoseSearchProvider *)0x0) {
      local_a8 = (TObjectPtr<UObject>_u_0 *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
      if ((byte)LogBlendStack._0_1_ < 2) goto LAB_14a864009;
      pUVar3 = (this->StitchDatabase).field0_0x0.DebugPtr;
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_178,L"None");
      }
      else {
        local_158.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_158.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_158,&local_178);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
      local_198.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    }
    else {
      local_138 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uStack_130 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_168 = (this->StitchDatabase).field0_0x0;
      local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_148 = (**(code **)(this->_padding_ + 0xa0))(this);
      local_140 = (**(code **)(this->_padding_ + 0xa8))(this);
      if ((this->AnimPlayers).ArrayNum == 0) {
        local_13c = 0;
      }
      else {
        if (((this->AnimPlayers).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_13c = (**(code **)(*(longlong *)((this->AnimPlayers).AllocatorInstance.Data + 0x148) +
                                0xb0))();
      }
      if ((this->AnimPlayers).ArrayNum == 0) {
        puVar9 = (undefined8 *)&local_98;
        uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar12 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uStack_94 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uStack_8c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        if (((this->AnimPlayers).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->AnimPlayers).AllocatorInstance.Data;
        lVar8 = (**(code **)(*(longlong *)(pFVar4 + 0xb8) + 0x148))(pFVar4 + 0xb8);
        if (lVar8 == 0) {
          uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar12 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          local_120._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_120._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uStack_114 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          (**(code **)(*(longlong *)(pFVar4 + 0xb8) + 0x150))(pFVar4 + 0xb8,&local_120);
          uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar12 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        puVar9 = &local_120;
      }
      local_138 = *puVar9;
      uStack_130 = puVar9[1];
      local_1a8.Data.ArrayNum = 1;
      local_128 = (double)puVar9[2];
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_168;
      local_e0 = param_7;
      local_fc = 0;
      local_e8 = CONCAT44(uVar12,uVar11);
      uStack_a0 = 1;
      iStack_9c = local_1a8.Data.ArrayMax;
      local_108 = param_2;
      local_100 = param_3 + param_7;
      local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_f4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_ec = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_a8 = (TObjectPtr<UObject>_u_0 *)local_1a8.Data.AllocatorInstance.Data;
      (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_d8,param_1,&local_a8,&local_148,&local_108)
      ;
      local_1b8[0] = local_d8;
      if (local_d8 != (FName)0x0) {
        pUVar10 = Z_Construct_UClass_UAnimationAsset_NoRegister();
        iVar2 = (int)pUVar10->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)((longlong)local_d8 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)local_d8 + 0x10) + 0x30) + (longlong)iVar2 * 8)
            == &pUVar10->_padding_)) {
          if (local_cc <= this->StitchBlendMaxCost) {
            InternalBlendTo(this,param_1,(UAnimationAsset *)local_1b8[0],local_d0,false,local_c7,
                            param_6,this->StitchBlendTime,param_8,param_9,param_10,param_11,param_12
                            ,local_c4,param_14,param_15,param_16,param_17,param_18);
            fVar1 = this->StitchBlendTime;
            InternalBlendTo(this,param_1,param_2,(param_3 + param_7) - fVar1,param_4,param_5,param_6
                            ,fVar1,param_8,param_9,param_10,param_11,param_12,param_13,
                            (param_7 - fVar1) + param_14,param_15,param_16,param_17,param_18);
            return;
          }
          if ((byte)LogBlendStack._0_1_ < 4) goto LAB_14a864009;
          pUVar3 = (this->StitchDatabase).field0_0x0.DebugPtr;
          if (pUVar3 == (UObject *)0x0) {
            ::FString::FString(&local_198,L"None");
          }
          else {
            local_1b8[0].ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
            local_1b8[0].Number = *(uint *)&pUVar3->field_0x1c;
            ::FName::ToString(local_1b8,&local_198);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
          goto LAB_14a863fff;
        }
      }
      if ((byte)LogBlendStack._0_1_ < 2) goto LAB_14a864009;
      pUVar3 = (this->StitchDatabase).field0_0x0.DebugPtr;
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_188,L"None");
      }
      else {
        local_160.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_160.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_160,&local_188);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
      local_198.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
    }
  }
LAB_14a863fff:
  if ((TObjectPtr<UObject>_u_0 *)local_198.Data.AllocatorInstance.Data !=
      (TObjectPtr<UObject>_u_0 *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
LAB_14a864009:
  InternalBlendTo(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  param_10,param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  return;
}

// BlendWithPose @ 14a8644a0

void __cdecl
FAnimNode_BlendStack_Standalone::BlendWithPose
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,float param_3)

{
  undefined1 *puVar1;
  double *pdVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  bool bVar24;
  FCompactPose *this;
  FBlendedCurve *pFVar25;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this_00;
  FCompactPose *pFVar26;
  FBlendedCurve *pFVar27;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *pTVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float local_res18 [2];
  int local_res20 [2];
  float local_218;
  float local_214;
  TArray<int,TSizedDefaultAllocator<32>_> *local_208;
  undefined8 local_200;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_1f8;
  undefined8 local_1f0;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_1e8
  ;
  undefined8 local_1e0;
  void *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  FBlendedCurve *local_1c0;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_1b8;
  int *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  float *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TArrayView<int_const_,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_158;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_148;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> local_108 [3];
  uint uVar43;
  
  this = FAnimationPoseData::GetPose(param_1);
  pFVar25 = FAnimationPoseData::GetCurve(param_1);
  local_1c0 = pFVar25;
  this_00 = (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
            FAnimationPoseData::GetAttributes(param_1);
  local_1b8 = this_00;
  pFVar26 = FAnimationPoseData::GetPose(param_2);
  fVar23 = __real_3f800000;
  uVar29 = 0;
  uVar4 = *(uint *)&this->field_0x8;
  fVar50 = __real_3f800000 - param_3;
  if (uVar4 != 0) {
    lVar30 = 0;
    dVar19 = (double)fVar50;
    dVar20 = (double)fVar50;
    dVar16 = (double)param_3;
    dVar17 = (double)param_3;
    dVar21 = (double)fVar50;
    dVar22 = (double)fVar50;
    uVar51 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar18 = (double)param_3;
    uVar48 = SUB84((double)param_3,0);
    uVar49 = (undefined4)((ulonglong)(double)param_3 >> 0x20);
    do {
      uVar31 = ~uVar29 >> 0x1f;
      uVar43 = 0;
      if ((int)uVar29 < *(int *)&this->field_0x8) {
        uVar43 = uVar31;
      }
      if ((uVar43 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)this;
      auVar35._8_4_ = uVar48;
      auVar35._0_8_ = dVar18;
      auVar35._12_4_ = uVar49;
      pdVar2 = (double *)(lVar30 + 0x20 + lVar6);
      dVar34 = dVar17 * pdVar2[1];
      auVar8._8_4_ = SUB84(dVar34,0);
      auVar8._0_8_ = dVar16 * *pdVar2;
      auVar8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      *(undefined1 (*) [16])(lVar30 + 0x20 + lVar6) = auVar8;
      pdVar2 = (double *)(lVar30 + 0x30 + lVar6);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x30 + lVar6);
      *pdVar3 = dVar18 * *pdVar2;
      pdVar3[1] = auVar35._8_8_ * dVar34;
      dVar34 = dVar17 * ((double *)(lVar30 + lVar6))[1];
      auVar36._8_4_ = uVar48;
      auVar36._0_8_ = dVar18;
      auVar36._12_4_ = uVar49;
      auVar9._8_4_ = SUB84(dVar34,0);
      auVar9._0_8_ = dVar16 * *(double *)(lVar30 + lVar6);
      auVar9._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      *(undefined1 (*) [16])(lVar30 + lVar6) = auVar9;
      pdVar2 = (double *)(lVar30 + 0x10 + lVar6);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x10 + lVar6);
      *pdVar3 = dVar18 * *pdVar2;
      pdVar3[1] = auVar36._8_8_ * dVar34;
      pdVar2 = (double *)(lVar30 + 0x40 + lVar6);
      dVar34 = dVar17 * pdVar2[1];
      auVar37._8_4_ = uVar48;
      auVar37._0_8_ = dVar18;
      auVar37._12_4_ = uVar49;
      auVar10._8_4_ = SUB84(dVar34,0);
      auVar10._0_8_ = dVar16 * *pdVar2;
      auVar10._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      *(undefined1 (*) [16])(lVar30 + 0x40 + lVar6) = auVar10;
      pdVar2 = (double *)(lVar30 + 0x50 + lVar6);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x50 + lVar6);
      *pdVar3 = dVar18 * *pdVar2;
      pdVar3[1] = auVar37._8_8_ * dVar34;
      uVar43 = 0;
      if ((int)uVar29 < *(int *)&this->field_0x8) {
        uVar43 = uVar31;
      }
      if ((uVar43 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1c8 = *(longlong *)this;
      uVar43 = 0;
      if ((int)uVar29 < *(int *)&pFVar26->field_0x8) {
        uVar43 = uVar31;
      }
      if ((uVar43 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)pFVar26;
      uVar29 = uVar29 + 1;
      dVar46 = dVar19 * *(double *)(lVar30 + lVar6);
      dVar47 = dVar20 * ((double *)(lVar30 + lVar6))[1];
      pdVar2 = (double *)(lVar30 + 0x10 + lVar6);
      dVar14 = dVar21 * *pdVar2;
      dVar15 = dVar22 * pdVar2[1];
      auVar38._8_4_ = SUB84(dVar15,0);
      auVar38._0_8_ = dVar14;
      auVar38._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      pdVar2 = (double *)(lVar30 + 0x10 + local_1c8);
      dVar34 = dVar14 * *pdVar2 + dVar46 * *(double *)(lVar30 + local_1c8);
      dVar44 = auVar38._8_8_ * pdVar2[1] + dVar47 * ((double *)(lVar30 + local_1c8))[1];
      uVar32 = -(ulonglong)(0.0 <= dVar44 + dVar34);
      uVar33 = -(ulonglong)(0.0 <= dVar34 + dVar44);
      uVar31 = (uint)(uVar33 >> 0x20);
      uVar43 = (uint)(uVar32 >> 0x20);
      auVar39._0_8_ = (ulonglong)dVar46 & uVar32;
      auVar39._8_4_ = (undefined4)((ulonglong)dVar47 & uVar33);
      auVar39._12_4_ = (undefined4)(((ulonglong)dVar47 & uVar33) >> 0x20);
      auVar45._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar46,0);
      auVar45._4_4_ = ~uVar43 & (uint)((ulonglong)(0.0 - dVar46) >> 0x20);
      auVar45._8_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar47,0);
      auVar45._12_4_ = ~uVar31 & (uint)((ulonglong)(0.0 - dVar47) >> 0x20);
      dVar34 = ((double *)(lVar30 + local_1c8))[1];
      *(double *)(lVar30 + local_1c8) =
           SUB168(auVar45 | auVar39,0) + *(double *)(lVar30 + local_1c8);
      ((double *)(lVar30 + local_1c8))[1] = SUB168(auVar45 | auVar39,8) + dVar34;
      auVar40._0_4_ = ~(uint)uVar32 & SUB84(0.0 - dVar14,0);
      auVar40._4_4_ = ~uVar43 & (uint)((ulonglong)(0.0 - dVar14) >> 0x20);
      auVar40._8_4_ = ~(uint)uVar33 & SUB84(0.0 - dVar15,0);
      auVar40._12_4_ = ~uVar31 & (uint)((ulonglong)(0.0 - dVar15) >> 0x20);
      auVar13._8_4_ = (int)((ulonglong)dVar15 & uVar33);
      auVar13._0_8_ = (ulonglong)dVar14 & uVar32;
      auVar13._12_4_ = (int)(((ulonglong)dVar15 & uVar33) >> 0x20);
      pdVar2 = (double *)(lVar30 + 0x10 + local_1c8);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x10 + local_1c8);
      *pdVar3 = SUB168(auVar40 | auVar13,0) + *pdVar2;
      pdVar3[1] = SUB168(auVar40 | auVar13,8) + dVar34;
      pdVar2 = (double *)(lVar30 + 0x20 + lVar6);
      pdVar3 = (double *)(lVar30 + 0x30 + lVar6);
      dVar14 = *pdVar3;
      dVar15 = pdVar3[1];
      auVar41._8_4_ = SUB84(dVar22,0);
      auVar41._0_8_ = dVar21;
      auVar41._12_4_ = uVar51;
      pdVar3 = (double *)(lVar30 + 0x20 + local_1c8);
      dVar34 = dVar20 * pdVar2[1] + pdVar3[1];
      auVar11._8_4_ = SUB84(dVar34,0);
      auVar11._0_8_ = dVar19 * *pdVar2 + *pdVar3;
      auVar11._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      *(undefined1 (*) [16])(lVar30 + 0x20 + local_1c8) = auVar11;
      pdVar2 = (double *)(lVar30 + 0x30 + local_1c8);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x30 + local_1c8);
      *pdVar3 = dVar21 * dVar14 + *pdVar2;
      pdVar3[1] = auVar41._8_8_ * dVar15 + dVar34;
      pdVar2 = (double *)(lVar30 + 0x40 + lVar6);
      pdVar3 = (double *)(lVar30 + 0x50 + lVar6);
      dVar14 = *pdVar3;
      dVar15 = pdVar3[1];
      auVar42._8_4_ = SUB84(dVar22,0);
      auVar42._0_8_ = dVar21;
      auVar42._12_4_ = uVar51;
      pdVar3 = (double *)(lVar30 + 0x40 + local_1c8);
      dVar34 = dVar20 * pdVar2[1] + pdVar3[1];
      auVar12._8_4_ = SUB84(dVar34,0);
      auVar12._0_8_ = dVar19 * *pdVar2 + *pdVar3;
      auVar12._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      *(undefined1 (*) [16])(lVar30 + 0x40 + local_1c8) = auVar12;
      pdVar2 = (double *)(lVar30 + 0x50 + local_1c8);
      dVar34 = pdVar2[1];
      pdVar3 = (double *)(lVar30 + 0x50 + local_1c8);
      *pdVar3 = dVar21 * dVar14 + *pdVar2;
      pdVar3[1] = auVar42._8_8_ * dVar15 + dVar34;
      lVar30 = lVar30 + 0x60;
      pFVar25 = local_1c0;
      this_00 = local_1b8;
    } while (uVar29 != uVar4);
  }
  FCompactPose::NormalizeRotations(this);
  local_res18[0] = fVar50;
  pFVar27 = FAnimationPoseData::GetCurve(param_2);
  if (__real_3727c5ac < (float)((uint)fVar50 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (__real_3727c5ac < (float)((uint)(fVar50 - fVar23) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      UE::BlendStack::FBlendedCurveUtils::
      UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToEx_::__l11::<lambda_1>_>
                (pFVar25,pFVar27,(<lambda_1>)local_res18);
    }
    else {
      if (pFVar25 != pFVar27) {
        iVar5 = *(int *)&pFVar27->field_0x8;
        puVar1 = &pFVar25->field_0xc;
        _Src = *(void **)pFVar27;
        *(int *)&pFVar25->field_0x8 = iVar5;
        if ((iVar5 == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
          pFVar25->field_0x10 = pFVar27->field_0x10;
          goto LAB_14a8648f7;
        }
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                  (0x10,4,iVar5,*(int *)puVar1,(ForElementType<UE::Anim::FCurveElement> *)pFVar25,
                   iVar5,(int *)puVar1);
        if (iVar5 != 0) {
          memcpy(*(void **)pFVar25,_Src,(longlong)iVar5 << 4);
        }
      }
      pFVar25->field_0x10 = pFVar27->field_0x10;
    }
  }
LAB_14a8648f7:
  local_1a8 = local_res20;
  local_198 = &local_218;
  local_208 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_200 = 0;
  local_1f8 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_1f0 = 0;
  local_1e8 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_1e0 = 0;
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_res20[0] = 0;
  local_res20[1] = 1;
  iStack_1a0 = 2;
  iStack_190 = 2;
  local_218 = param_3;
  local_214 = fVar50;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_148,this_00);
  pTVar28 = (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
            FAnimationPoseData::GetAttributes(param_2);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(local_108,pTVar28);
  local_178._12_4_ = uStack_19c;
  local_178.ArrayNum = iStack_1a0;
  local_188 = &local_148;
  local_168._12_4_ = uStack_18c;
  local_168.ArrayNum = iStack_190;
  local_178.DataPtr = local_1a8;
  uStack_180 = 2;
  local_158._12_4_ = uStack_17c;
  local_158.ArrayNum = 2;
  local_168.DataPtr = local_198;
  local_158.DataPtr = (FStackAttributeContainer *)local_188;
  UE::Anim::Attributes::BlendAttributes
            (&local_158,&local_168,&local_178,(FStackAttributeContainer *)&local_208);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(local_108);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  ~TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>(&local_148);
  UE::Anim::FStackAttributeContainer::operator=
            ((FStackAttributeContainer *)this_00,(FStackAttributeContainer *)&local_208);
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_1e8,(int)local_1e0);
  if (local_1e8 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_1e8);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_1f8,(int)local_1f0);
  if (local_1f8 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1f8);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_208,(int)local_200);
  if (local_208 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_208);
  }
  return;
}

// BlendWithPosePerBone @ 14a864ab0

void __cdecl
FAnimNode_BlendStack_Standalone::BlendWithPosePerBone
          (FAnimationPoseData *param_1,FAnimationPoseData *param_2,
          TArrayView<float_const_,int> *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  FBoneContainer *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  bool bVar40;
  FCompactPose *pFVar41;
  FBlendedCurve *pFVar42;
  FCompactPose *pFVar43;
  FBlendedCurve *pFVar44;
  FStackAttributeContainer *pFVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  uint uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar59;
  undefined1 auVar57 [16];
  double dVar60;
  double dVar61;
  float fVar62;
  <lambda_1> local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_168;
  undefined8 local_160;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_158;
  undefined8 local_150;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_148
  ;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  FBlendedCurve *local_128;
  FStackAttributeContainer *local_120;
  <lambda_1> local_118;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8 [10];
  uint uVar58;
  
  pFVar41 = FAnimationPoseData::GetPose(param_1);
  pFVar42 = FAnimationPoseData::GetCurve(param_1);
  local_128 = pFVar42;
  local_120 = FAnimationPoseData::GetAttributes(param_1);
  pFVar43 = FAnimationPoseData::GetPose(param_2);
  fVar39 = __real_3f7fff58;
  fVar38 = __real_3f800000;
  fVar37 = __real_3727c5ac;
  uVar6 = *(uint *)&pFVar41->field_0x8;
  uVar46 = 0;
  if (uVar6 != 0) {
    lVar48 = 0;
    lVar47 = 0;
    do {
      uVar49 = ~uVar46 >> 0x1f;
      uVar58 = 0;
      if ((int)uVar46 < param_3->ArrayNum) {
        uVar58 = uVar49;
      }
      if ((uVar58 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar40)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      fVar5 = param_3->DataPtr[lVar48];
      if (fVar5 < fVar39) {
        if (fVar37 < fVar5) {
          fVar62 = fVar38 - fVar5;
          uVar58 = 0;
          if ((int)uVar46 < *(int *)&pFVar41->field_0x8) {
            uVar58 = uVar49;
          }
          if ((uVar58 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar7 = *(longlong *)pFVar41;
          dVar60 = (double)fVar62;
          dVar61 = (double)fVar62;
          pdVar2 = (double *)(lVar47 + 0x20 + lVar7);
          dVar59 = pdVar2[1];
          pdVar3 = (double *)(lVar47 + 0x30 + lVar7);
          dVar18 = *pdVar3;
          dVar16 = pdVar3[1];
          pdVar3 = (double *)(lVar47 + 0x20 + lVar7);
          *pdVar3 = *pdVar2 * dVar60;
          pdVar3[1] = dVar59 * dVar61;
          dVar56 = (double)fVar62;
          dVar59 = (double)fVar62;
          dVar16 = dVar16 * dVar59;
          auVar11._8_4_ = SUB84(dVar16,0);
          auVar11._0_8_ = dVar18 * dVar56;
          auVar11._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x30 + lVar7) = auVar11;
          dVar18 = ((double *)(lVar47 + lVar7))[1];
          pdVar2 = (double *)(lVar47 + 0x10 + lVar7);
          dVar19 = *pdVar2;
          dVar16 = pdVar2[1] * dVar59;
          *(double *)(lVar47 + lVar7) = *(double *)(lVar47 + lVar7) * dVar60;
          ((double *)(lVar47 + lVar7))[1] = dVar18 * dVar61;
          auVar12._8_4_ = SUB84(dVar16,0);
          auVar12._0_8_ = dVar19 * dVar56;
          auVar12._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x10 + lVar7) = auVar12;
          pdVar2 = (double *)(lVar47 + 0x40 + lVar7);
          dVar16 = pdVar2[1];
          pdVar3 = (double *)(lVar47 + 0x50 + lVar7);
          dVar18 = *pdVar3;
          dVar59 = pdVar3[1] * dVar59;
          pdVar3 = (double *)(lVar47 + 0x40 + lVar7);
          *pdVar3 = *pdVar2 * dVar60;
          pdVar3[1] = dVar16 * dVar61;
          auVar13._8_4_ = SUB84(dVar59,0);
          auVar13._0_8_ = dVar18 * dVar56;
          auVar13._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x50 + lVar7) = auVar13;
          uVar58 = 0;
          if ((int)uVar46 < *(int *)&pFVar41->field_0x8) {
            uVar58 = uVar49;
          }
          if ((uVar58 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar7 = *(longlong *)pFVar41;
          uVar58 = 0;
          if ((int)uVar46 < *(int *)&pFVar43->field_0x8) {
            uVar58 = uVar49;
          }
          if ((uVar58 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar8 = *(longlong *)pFVar43;
          dVar61 = (double)fVar5;
          dVar21 = (double)fVar5;
          dVar23 = (double)fVar5;
          dVar24 = (double)fVar5;
          dVar18 = dVar61 * *(double *)(lVar47 + lVar8);
          dVar19 = dVar21 * ((double *)(lVar47 + lVar8))[1];
          pdVar2 = (double *)(lVar47 + 0x10 + lVar8);
          dVar56 = dVar23 * *pdVar2;
          dVar60 = dVar24 * pdVar2[1];
          auVar52._8_4_ = SUB84(dVar19,0);
          auVar52._0_8_ = dVar18;
          auVar52._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          pdVar2 = (double *)(lVar47 + 0x10 + lVar7);
          dVar16 = dVar56 * *pdVar2 + dVar18 * *(double *)(lVar47 + lVar7);
          dVar59 = dVar60 * pdVar2[1] + auVar52._8_8_ * ((double *)(lVar47 + lVar7))[1];
          auVar53._8_4_ = SUB84(dVar59,0);
          auVar53._0_8_ = dVar16;
          auVar53._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          uVar50 = -(ulonglong)(0.0 <= auVar53._8_8_ + dVar16);
          uVar51 = -(ulonglong)(0.0 <= dVar16 + dVar59);
          uVar49 = (uint)(uVar51 >> 0x20);
          auVar57._0_4_ = ~(uint)uVar50 & SUB84(0.0 - dVar18,0);
          uVar58 = (uint)(uVar50 >> 0x20);
          auVar57._4_4_ = ~uVar58 & (uint)((ulonglong)(0.0 - dVar18) >> 0x20);
          auVar57._8_4_ = ~(uint)uVar51 & SUB84(0.0 - dVar19,0);
          auVar57._12_4_ = ~uVar49 & (uint)((ulonglong)(0.0 - dVar19) >> 0x20);
          auVar14._8_4_ = (int)((ulonglong)dVar19 & uVar51);
          auVar14._0_8_ = (ulonglong)dVar18 & uVar50;
          auVar14._12_4_ = (int)(((ulonglong)dVar19 & uVar51) >> 0x20);
          dVar16 = ((double *)(lVar47 + lVar7))[1];
          auVar54._0_4_ = ~(uint)uVar50 & SUB84(0.0 - dVar56,0);
          auVar54._4_4_ = ~uVar58 & (uint)((ulonglong)(0.0 - dVar56) >> 0x20);
          auVar54._8_4_ = ~(uint)uVar51 & SUB84(0.0 - dVar60,0);
          auVar54._12_4_ = ~uVar49 & (uint)((ulonglong)(0.0 - dVar60) >> 0x20);
          *(double *)(lVar47 + lVar7) = SUB168(auVar57 | auVar14,0) + *(double *)(lVar47 + lVar7);
          ((double *)(lVar47 + lVar7))[1] = SUB168(auVar57 | auVar14,8) + dVar16;
          auVar17._8_4_ = (int)((ulonglong)dVar60 & uVar51);
          auVar17._0_8_ = (ulonglong)dVar56 & uVar50;
          auVar17._12_4_ = (int)(((ulonglong)dVar60 & uVar51) >> 0x20);
          pdVar2 = (double *)(lVar47 + 0x10 + lVar7);
          dVar16 = pdVar2[1];
          pdVar3 = (double *)(lVar47 + 0x10 + lVar7);
          *pdVar3 = SUB168(auVar54 | auVar17,0) + *pdVar2;
          pdVar3[1] = SUB168(auVar54 | auVar17,8) + dVar16;
          pdVar2 = (double *)(lVar47 + 0x30 + lVar8);
          dVar59 = *pdVar2;
          dVar18 = pdVar2[1];
          auVar55._8_4_ = SUB84(dVar21,0);
          auVar55._0_8_ = dVar61;
          auVar55._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          pdVar2 = (double *)(lVar47 + 0x20 + lVar8);
          dVar19 = pdVar2[1];
          pdVar3 = (double *)(lVar47 + 0x20 + lVar7);
          dVar16 = pdVar3[1];
          pdVar4 = (double *)(lVar47 + 0x20 + lVar7);
          *pdVar4 = dVar61 * *pdVar2 + *pdVar3;
          pdVar4[1] = auVar55._8_8_ * dVar19 + dVar16;
          pdVar2 = (double *)(lVar47 + 0x30 + lVar7);
          dVar16 = dVar24 * dVar18 + pdVar2[1];
          auVar15._8_4_ = SUB84(dVar16,0);
          auVar15._0_8_ = dVar23 * dVar59 + *pdVar2;
          auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x30 + lVar7) = auVar15;
          pdVar2 = (double *)(lVar47 + 0x40 + lVar8);
          pdVar3 = (double *)(lVar47 + 0x50 + lVar8);
          dVar59 = *pdVar3;
          dVar18 = pdVar3[1];
          pdVar3 = (double *)(lVar47 + 0x40 + lVar7);
          dVar16 = dVar21 * pdVar2[1] + pdVar3[1];
          auVar20._8_4_ = SUB84(dVar16,0);
          auVar20._0_8_ = dVar61 * *pdVar2 + *pdVar3;
          auVar20._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x40 + lVar7) = auVar20;
          pdVar2 = (double *)(lVar47 + 0x50 + lVar7);
          dVar16 = dVar24 * dVar18 + pdVar2[1];
          auVar22._8_4_ = SUB84(dVar16,0);
          auVar22._0_8_ = dVar23 * dVar59 + *pdVar2;
          auVar22._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar47 + 0x50 + lVar7) = auVar22;
        }
      }
      else {
        uVar58 = 0;
        if ((int)uVar46 < *(int *)&pFVar43->field_0x8) {
          uVar58 = uVar49;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)pFVar43;
        uVar25 = *(undefined8 *)(lVar47 + lVar7);
        uVar26 = ((undefined8 *)(lVar47 + lVar7))[1];
        puVar1 = (undefined8 *)(lVar47 + 0x10 + lVar7);
        uVar27 = *puVar1;
        uVar28 = puVar1[1];
        puVar1 = (undefined8 *)(lVar47 + 0x20 + lVar7);
        uVar29 = *puVar1;
        uVar30 = puVar1[1];
        puVar1 = (undefined8 *)(lVar47 + 0x30 + lVar7);
        uVar31 = *puVar1;
        uVar32 = puVar1[1];
        puVar1 = (undefined8 *)(lVar47 + 0x40 + lVar7);
        uVar33 = *puVar1;
        uVar34 = puVar1[1];
        puVar1 = (undefined8 *)(lVar47 + 0x50 + lVar7);
        uVar35 = *puVar1;
        uVar36 = puVar1[1];
        uVar58 = 0;
        if ((int)uVar46 < *(int *)&pFVar41->field_0x8) {
          uVar58 = uVar49;
        }
        if ((uVar58 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)pFVar41;
        *(undefined8 *)(lVar47 + lVar7) = uVar25;
        ((undefined8 *)(lVar47 + lVar7))[1] = uVar26;
        puVar1 = (undefined8 *)(lVar47 + 0x10 + lVar7);
        *puVar1 = uVar27;
        puVar1[1] = uVar28;
        puVar1 = (undefined8 *)(lVar47 + 0x20 + lVar7);
        *puVar1 = uVar29;
        puVar1[1] = uVar30;
        puVar1 = (undefined8 *)(lVar47 + 0x30 + lVar7);
        *puVar1 = uVar31;
        puVar1[1] = uVar32;
        puVar1 = (undefined8 *)(lVar47 + 0x40 + lVar7);
        *puVar1 = uVar33;
        puVar1[1] = uVar34;
        puVar1 = (undefined8 *)(lVar47 + 0x50 + lVar7);
        *puVar1 = uVar35;
        puVar1[1] = uVar36;
      }
      uVar46 = uVar46 + 1;
      lVar48 = lVar48 + 1;
      lVar47 = lVar47 + 0x60;
      pFVar42 = local_128;
    } while (uVar46 != uVar6);
  }
  FCompactPose::NormalizeRotations(pFVar41);
  pFVar41 = FAnimationPoseData::GetPose(param_1);
  pFVar9 = *(FBoneContainer **)&pFVar41->field_0x10;
  pFVar44 = FAnimationPoseData::GetCurve(param_2);
  local_f8.DataPtr = param_3->DataPtr;
  local_f8.ArrayNum = param_3->ArrayNum;
  local_f8._12_4_ = *(undefined4 *)&param_3->field_0xc;
  if (UE::BlendStack::GVarUseBlendCurveFixes == false) {
    local_res18 = SUB81(param_3,0);
    UE::Anim::FNamedValueArrayUtils::
    Union<_TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Combine<TMemStackAllocator<0>,UE::Anim::FCurveElement>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar42,
               (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)pFVar44,
               local_res18);
  }
  else {
    local_118.Skeleton = (USkeleton *)FWeakObjectPtr::Get(&(pFVar9->AssetSkeleton).WeakPtr);
    local_118.OtherCurveBoneWeights = &local_f8;
    local_118.BoneContainer = pFVar9;
    UE::BlendStack::FBlendedCurveUtils::
    UnionEx<_UE::BlendStack::FBlendedCurveUtils::LerpToPerBoneEx_::__l5::<lambda_1>_>
              (pFVar42,pFVar44,&local_118);
  }
  local_168 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_160 = 0;
  local_158 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_150 = 0;
  local_148 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
               *)0x0;
  local_140 = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  pFVar45 = FAnimationPoseData::GetAttributes(param_2);
  local_e8[0].DataPtr = param_3->DataPtr;
  local_e8[0].ArrayNum = param_3->ArrayNum;
  local_e8[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
  UE::Anim::Attributes::BlendAttributesPerBone
            (local_120,pFVar45,local_e8,(FStackAttributeContainer *)&local_168);
  UE::Anim::FStackAttributeContainer::operator=(local_120,(FStackAttributeContainer *)&local_168);
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_148,(int)local_140);
  if (local_148 !=
      (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    FMemory::Free(local_148);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_158,(int)local_150);
  if (local_158 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_158);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_168,(int)local_160);
  if (local_168 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_168);
  }
  return;
}

// CacheBonesForSample @ 14a865110

void __thiscall
FAnimNode_BlendStack_Standalone::CacheBonesForSample
          (FAnimNode_BlendStack_Standalone *this,FAnimationCacheBonesContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 < (this->AnimPlayers).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar1 = (this->AnimPlayers).AllocatorInstance.Data;
  bVar3 = IsSampleGraphAvailableForPlayer(this,param_2);
  if (bVar3) {
    uVar5 = *(uint *)(pFVar1 + (longlong)param_2 * 0x3a0 + 0x374);
    uVar4 = 0;
    if ((int)uVar5 < (this->SampleGraphExecutionHelpers).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
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
    pFVar1 = (this->SampleGraphExecutionHelpers).AllocatorInstance.Data;
    uVar4 = 0;
    if ((int)uVar5 < (this->PerSampleGraphPoseLinks).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
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
    UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::ConditionalCacheBones
              ((FBlendStack_SampleGraphExecutionHelper *)(pFVar1 + (longlong)(int)uVar5 * 0x18),
               (FAnimationBaseContext *)param_1,
               (FPoseLink *)
               ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10
               ));
  }
  return;
}

// EvaluateSample @ 14a8658c0

bool __thiscall
FAnimNode_BlendStack_Standalone::EvaluateSample
          (FAnimNode_BlendStack_Standalone *this,FPoseContext *param_1,int param_2)

{
  FBlendStack_SampleGraphExecutionHelper *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FPoseLink *this_01;
  FBlendStackAnimPlayer *this_02;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 < (this->AnimPlayers).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_02 = (FBlendStackAnimPlayer *)
            ((this->AnimPlayers).AllocatorInstance.Data + (longlong)param_2 * 0x3a0);
  if (0.0 < this_02->TimeToActivation) {
    return false;
  }
  bVar2 = IsSampleGraphAvailableForPlayer(this,param_2);
  if (!bVar2) {
    FBlendStackAnimPlayer::Evaluate_AnyThread(this_02,param_1);
    return true;
  }
  uVar5 = this_02->PoseLinkIndex;
  uVar4 = 0;
  if ((int)uVar5 < (this->SampleGraphExecutionHelpers).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_00 = (FBlendStack_SampleGraphExecutionHelper *)
            ((this->SampleGraphExecutionHelpers).AllocatorInstance.Data +
            (longlong)(int)uVar5 * 0x18);
  uVar4 = 0;
  if ((int)uVar5 < (this->PerSampleGraphPoseLinks).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this_01 = (FPoseLink *)
            ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10);
  this_00->Player = this_02;
  UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::ConditionalCacheBones
            (this_00,(FAnimationBaseContext *)param_1,this_01);
  FPoseLink::Evaluate(this_01,param_1);
  return true;
}

// GetBlendParameters @ 14a866570

TVector<double> * __thiscall
FAnimNode_BlendStack_Standalone::GetBlendParameters
          (FAnimNode_BlendStack_Standalone *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  double *pdVar9;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  iVar2 = (this->AnimPlayers).ArrayNum;
  if (iVar2 == 0) {
    pdVar9 = &local_20;
    local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    if (iVar2 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TVector<double> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar3 = (this->AnimPlayers).AllocatorInstance.Data;
    lVar8 = (**(code **)(*(longlong *)(pFVar3 + 0xb8) + 0x148))(pFVar3 + 0xb8);
    if (lVar8 == 0) {
      local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      (**(code **)(*(longlong *)(pFVar3 + 0xb8) + 0x150))(pFVar3 + 0xb8,&local_38);
    }
    pdVar9 = &local_38;
  }
  dVar5 = pdVar9[1];
  dVar1 = pdVar9[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetMirror @ 14a866a90

bool __thiscall FAnimNode_BlendStack_Standalone::GetMirror(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 == 0) {
    return false;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a866af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)((this->AnimPlayers).AllocatorInstance.Data + 0x148) + 0xb0))();
  return (bool)uVar4;
}

// GetNextPoseLinkIndex @ 14a866b00

int __thiscall
FAnimNode_BlendStack_Standalone::GetNextPoseLinkIndex(FAnimNode_BlendStack_Standalone *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->PerSampleGraphPoseLinks).ArrayNum;
  if (iVar1 == 0) {
    return -1;
  }
  this->CurrentSamplePoseLink = this->CurrentSamplePoseLink + 1;
  iVar2 = this->CurrentSamplePoseLink;
  if (iVar2 == iVar1) {
    iVar2 = 0;
    this->CurrentSamplePoseLink = 0;
  }
  return iVar2;
}

// InitializeSample @ 14a867560

void __thiscall
FAnimNode_BlendStack_Standalone::InitializeSample
          (FAnimNode_BlendStack_Standalone *this,FAnimationInitializeContext *param_1,
          FBlendStackAnimPlayer *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FPoseLinkBase *this_00;
  
  uVar1 = param_2->PoseLinkIndex;
  lVar6 = (longlong)(int)uVar1;
  if (uVar1 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar1 < (this->PerSampleGraphPoseLinks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (FPoseLinkBase *)
              ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data + lVar6 * 0x10);
    uVar5 = 0;
    if ((int)uVar1 < (this->SampleGraphExecutionHelpers).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->SampleGraphExecutionHelpers).AllocatorInstance.Data;
    *(FBlendStackAnimPlayer **)(pFVar2 + lVar6 * 0x18) = param_2;
    FPoseLinkBase::Initialize(this_00,param_1);
    UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::ConditionalCacheBones
              ((FBlendStack_SampleGraphExecutionHelper *)(pFVar2 + lVar6 * 0x18),
               (FAnimationBaseContext *)param_1,(FPoseLink *)this_00);
  }
  return;
}

// InternalBlendTo @ 14a867680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_BlendStack_Standalone::InternalBlendTo
          (FAnimNode_BlendStack_Standalone *this,FAnimationUpdateContext *param_1,
          UAnimationAsset *param_2,float param_3,bool param_4,bool param_5,UMirrorDataTable *param_6
          ,float param_7,UBlendProfile *param_8,EAlphaBlendOption param_9,bool param_10,
          FName param_11,TVector<double> *param_12,float param_13,float param_14,FName param_15,
          Type param_16,EAnimSyncMethod param_17,bool param_18)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  TObjectPtr<UObject>_u_0 TVar4;
  FBlendStackAnimPlayer *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  UAnimationAsset *pUVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FBlendStackAnimPlayer *pFVar12;
  FPoseLinkBase *this_00;
  int iVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStackY_5f8 [32];
  longlong *local_568;
  UAnimationAsset *local_560;
  FString local_558;
  longlong **local_548;
  code **local_540;
  FName local_538;
  FAnimationUpdateContext *local_530;
  TVector<double> *local_528;
  UBlendProfile *local_520;
  UMirrorDataTable *local_518;
  code *local_510;
  longlong ***local_508;
  code *local_500;
  code ***local_4f8;
  FAnimationBaseContext local_4f0;
  FString local_4d0;
  FInertializationRequest local_4b8;
  FAnimationBaseContext local_458;
  FBlendStackAnimPlayer local_438;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  iVar10 = (this->AnimPlayers).ArrayNum;
  local_518 = param_6;
  local_528 = param_12;
  local_520 = param_8;
  if (iVar10 == 0) {
    param_7 = 0.0;
  }
  local_560 = param_2;
  local_530 = param_1;
  if (param_10) {
    if ((UE::BlendStack::GVarAnimBlendStackEnable) && (0.0 < param_7)) {
      if (param_1->_padding_ == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1442789968400351459>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0xe3,"SharedContext != nullptr");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_548 = &local_568;
        local_508 = &local_548;
        local_568 = (longlong *)0x0;
        local_510 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>'::__l5::<lambda_1>,void,UE::Anim::IInertializationRequester_&>
                    ::Call;
        local_540 = &local_510;
        local_4f8 = &local_540;
        local_500 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::IInertializationRequester>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
                    ::Call;
        UE::Anim::FMessageStack::TopMessage
                  ((FMessageStack *)(param_1->_padding_ + 0x148),
                   UE::Anim::IInertializationRequester::TypeName,
                   (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_500);
        plVar7 = local_568;
        if (local_568 != (longlong *)0x0) {
          FInertializationRequest::FInertializationRequest(&local_4b8);
          local_4b8.Duration = param_7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (param_8 != (UBlendProfile *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)param_8);
          }
          local_4b8.BlendMode = param_9;
          local_4b8.Tag = param_11;
          local_4b8.NodeId = *(int *)((longlong)&param_1->_padding_ + 4);
          local_4b8.BlendProfile.field0_0x0.DebugPtr = (TObjectPtr<UBlendProfile_const_>_u_0)param_8
          ;
          local_4b8.bUseBlendMode = true;
          TVar4 = (TObjectPtr<UObject>_u_0)
                  ((TObjectPtr<UObject>_u_0 *)(param_1->_padding_ + 0x140))->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar4.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(TVar4.DebugPtr);
          }
          local_4b8.AnimInstance.field0_0x0 = TVar4;
          (**(code **)(*plVar7 + 0x20))(plVar7);
          if (local_4b8.DescriptionString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b8.DescriptionString.Data.AllocatorInstance.Data);
          }
          if (local_4b8.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_4b8.Description_DEPRECATED.TextData.Reference + 0x10))();
          }
          goto LAB_14a867771;
        }
      }
      FAnimNode_Inertialization::LogRequestError
                (param_1,*(int *)((longlong)&param_1->_padding_ + 4));
    }
LAB_14a867771:
    param_7 = 0.0;
  }
  pUVar8 = local_560;
  iVar13 = this->CurrentSamplePoseLink;
  if (iVar10 != 0) {
    if (((this->AnimPlayers).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (0.0 < *(float *)((this->AnimPlayers).AllocatorInstance.Data + 0x390)) goto LAB_14a867be5;
    if (((this->AnimPlayers).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar15 = FBlendStackAnimPlayer::GetBlendInPercentage
                       ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data);
    if (fVar15 < __real_3f800000) {
      if (((this->AnimPlayers).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->AnimPlayers).AllocatorInstance.Data + 0x38c;
      if (*(float *)pFVar2 <= this->MaxBlendInTimeToOverrideAnimation &&
          this->MaxBlendInTimeToOverrideAnimation != *(float *)pFVar2) {
        if (5 < (byte)LogBlendStack._0_1_) {
          if (((this->AnimPlayers).ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pUVar8 == (UAnimationAsset *)0x0) {
            ::FString::FString(&local_558,L"None");
          }
          else {
            local_538 = (FName)pUVar8->_padding_;
            ::FName::ToString(&local_538,&local_558);
          }
          if (((this->AnimPlayers).ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FBlendStackAnimPlayer::GetAnimationName
                    ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data,&local_4d0)
          ;
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
          if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
          }
          if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14a867be5;
      }
    }
  }
  if (this->MaxActiveBlends + 2 < (this->AnimPlayers).ArrayNum) {
    if (2 < (byte)LogBlendStack._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    }
  }
  else {
    memset(&local_438,0,0x3a0);
    pFVar12 = FBlendStackAnimPlayer::FBlendStackAnimPlayer(&local_438);
    pFVar5 = (FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data;
    if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (this->AnimPlayers).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->AnimPlayers).ArrayNum;
    piVar1 = &(this->AnimPlayers).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x3a0,8,&(this->AnimPlayers).AllocatorInstance,piVar1);
    }
    (this->AnimPlayers).ArrayNum = iVar10 + 1;
    pFVar2 = (this->AnimPlayers).AllocatorInstance.Data;
    memmove(pFVar2 + 0x3a0,pFVar2,(longlong)iVar10 * 0x3a0);
    FBlendStackAnimPlayer::FBlendStackAnimPlayer
              ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data,pFVar12);
    FBlendStackAnimPlayer::~FBlendStackAnimPlayer(&local_438);
    iVar10 = (this->PerSampleGraphPoseLinks).ArrayNum;
    if (iVar10 == 0) {
      iVar13 = -1;
    }
    else {
      this->CurrentSamplePoseLink = this->CurrentSamplePoseLink + 1;
      iVar13 = this->CurrentSamplePoseLink;
      if (iVar13 == iVar10) {
        this->CurrentSamplePoseLink = 0;
        iVar13 = 0;
      }
    }
  }
LAB_14a867be5:
  if (((this->AnimPlayers).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data;
  FAnimationBaseContext::FAnimationBaseContext
            (&local_4f0,(FAnimInstanceProxy *)local_530->_padding_,
             (FAnimationUpdateSharedContext *)local_530->_padding_);
  FBlendStackAnimPlayer::Initialize
            (pFVar5,(FAnimationInitializeContext *)&local_4f0,local_560,param_3,param_4,param_5,
             local_518,param_7,local_520,param_9,local_528,param_13,param_14,iVar13,param_15,
             param_16,param_17,param_18);
  uVar3 = pFVar5->PoseLinkIndex;
  lVar14 = (longlong)(int)uVar3;
  if (uVar3 != 0xffffffff) {
    uVar11 = 0;
    if ((int)uVar3 < (this->PerSampleGraphPoseLinks).ArrayNum) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FPoseLinkBase *)
              ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data + lVar14 * 0x10);
    uVar11 = 0;
    if ((int)uVar3 < (this->SampleGraphExecutionHelpers).ArrayNum) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (this->SampleGraphExecutionHelpers).AllocatorInstance.Data;
    *(FBlendStackAnimPlayer **)(pFVar2 + lVar14 * 0x18) = pFVar5;
    FPoseLinkBase::Initialize(this_00,(FAnimationInitializeContext *)&local_4f0);
    if ((((*(short *)(pFVar2 + lVar14 * 0x18 + 0x10) == -1) ||
         (*(ulong64 *)(pFVar2 + lVar14 * 0x18 + 8) == 0xffffffffffffffff)) ||
        (*(short *)(pFVar2 + lVar14 * 0x18 + 0x10) !=
         ((local_4f0.AnimInstanceProxy)->CachedBonesCounter).Counter)) ||
       (*(ulong64 *)(pFVar2 + lVar14 * 0x18 + 8) !=
        ((local_4f0.AnimInstanceProxy)->CachedBonesCounter).LastSyncronizedFrame)) {
      *(short *)(pFVar2 + lVar14 * 0x18 + 0x10) =
           ((local_4f0.AnimInstanceProxy)->CachedBonesCounter).Counter;
      *(ulong64 *)(pFVar2 + lVar14 * 0x18 + 8) =
           ((local_4f0.AnimInstanceProxy)->CachedBonesCounter).LastSyncronizedFrame;
      *(short *)(pFVar2 + lVar14 * 0x18 + 0x12) =
           ((local_4f0.AnimInstanceProxy)->CachedBonesCounter).SkipFrames;
      FAnimationBaseContext::FAnimationBaseContext
                (&local_458,local_4f0.AnimInstanceProxy,(FAnimationUpdateSharedContext *)0x0);
      FPoseLinkBase::CacheBones(this_00,(FAnimationCacheBonesContext *)&local_458);
    }
  }
  return;
}

// IsSampleGraphAvailableForPlayer @ 14a867f40

bool __thiscall
FAnimNode_BlendStack_Standalone::IsSampleGraphAvailableForPlayer
          (FAnimNode_BlendStack_Standalone *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->PerSampleGraphPoseLinks).ArrayNum == 0) {
    return false;
  }
  uVar5 = 0;
  if (param_1 < (this->AnimPlayers).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->AnimPlayers).AllocatorInstance.Data;
  if ((((*(int *)(pFVar1 + (longlong)param_1 * 0x3a0 + 0x1b0) != 0) &&
       (bVar3 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)(pFVar1 + (longlong)param_1 * 0x3a0 + 0x248)), bVar3))
      && (*(longlong *)(pFVar1 + (longlong)param_1 * 0x3a0 + 0x260) != 0)) &&
     (0 < *(int *)(pFVar1 + (longlong)param_1 * 0x3a0 + 0x220))) {
    return false;
  }
  return true;
}

// PopLastAnimPlayer @ 14a868480

void __thiscall
FAnimNode_BlendStack_Standalone::PopLastAnimPlayer(FAnimNode_BlendStack_Standalone *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<FBlendStackAnimPlayer,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  piVar1 = &(this->AnimPlayers).ArrayNum;
  iVar2 = *piVar1;
  lVar13 = (longlong)iVar2 + -1;
  uVar10 = iVar2 - 1;
  uVar11 = 0;
  uVar12 = uVar9;
  uVar14 = uVar9;
  if (0 < lVar13) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = uVar11;
      if ((int)uVar8 < (this->AnimPlayers).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->AnimPlayers).AllocatorInstance.Data;
      if ((((*(int *)(pFVar3 + uVar12 + 0x1b0) != 0) &&
           (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar3 + uVar12 + 0x248)), bVar5)) &&
          (*(longlong *)(pFVar3 + uVar12 + 0x260) != 0)) &&
         ((0 < *(int *)(pFVar3 + uVar12 + 0x220) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("!AnimPlayers[AnimPlayerIndex].HasValidPoseContext()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                              ,0x23a,L""), bVar5)))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar14 = uVar14 + 1;
      uVar12 = uVar12 + 0x3a0;
    } while ((longlong)uVar14 < lVar13);
  }
  if (0 < (int)uVar10) {
    uVar6 = uVar11;
    if ((int)uVar10 < (this->AnimPlayers).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->AnimPlayers).AllocatorInstance.Data;
    lVar13 = lVar13 * 0x3a0;
    if ((((*(int *)(pFVar3 + lVar13 + 0x1b0) != 0) &&
         (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar3 + lVar13 + 0x248)), bVar5)) &&
        (*(longlong *)(pFVar3 + lVar13 + 0x260) != 0)) && (0 < *(int *)(pFVar3 + lVar13 + 0x220))) {
      uVar6 = uVar11;
      if ((int)uVar10 < (this->AnimPlayers).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->AnimPlayers).AllocatorInstance.Data;
      uVar6 = iVar2 - 2;
      if ((int)uVar6 < (this->AnimPlayers).ArrayNum) {
        uVar11 = ~uVar6 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FBlendStackAnimPlayer::MovePoseContextTo
                ((FBlendStackAnimPlayer *)(pFVar3 + lVar13),
                 (FBlendStackAnimPlayer *)
                 ((this->AnimPlayers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x3a0));
    }
  }
  this_00 = &this->AnimPlayers;
  iVar2 = (this->AnimPlayers).ArrayNum;
  if (iVar2 < (int)uVar10) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x3a0,8,uVar10 - iVar2,&this_00->AllocatorInstance,piVar1,
                       &(this->AnimPlayers).ArrayMax);
    DefaultConstructItems<FBlendStackAnimPlayer,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x3a0,uVar10 - iVar2);
    return;
  }
  if (-1 < (int)uVar10) {
    if ((int)uVar10 < iVar2) {
      uVar11 = iVar2 - uVar10;
      if (((int)(uVar11 | uVar10) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar11 != 0) {
        TArray<FBlendStackAnimPlayer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar10,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3a0,8,&this_00->AllocatorInstance,(this->AnimPlayers).ArrayNum,
                   &(this->AnimPlayers).ArrayMax);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
}

// UpdateBlendspaceParameters @ 14a8693f0

void __thiscall
FAnimNode_BlendStack_Standalone::UpdateBlendspaceParameters
          (FAnimNode_BlendStack_Standalone *this,EBlendStack_BlendspaceUpdateMode param_1,
          TVector<double> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  if (param_1 == UpdateAll) {
    pFVar6 = (this->AnimPlayers).AllocatorInstance.Data;
    iVar1 = (this->AnimPlayers).ArrayNum;
    pFVar5 = pFVar6 + 0xb8;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x3a0;
    while( true ) {
      if ((this->AnimPlayers).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FBlendStackAnimPlayer,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar7) break;
      lVar4 = (**(code **)(*(longlong *)pFVar5 + 0x148))(pFVar5);
      if (lVar4 != 0) {
        local_38 = *(undefined4 *)&param_2->field0_0x0;
        uStack_34 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
        uStack_30 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
        uStack_2c = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
        local_28 = (param_2->field0_0x0)._s_0.Z;
        (**(code **)(*(longlong *)pFVar5 + 0x198))(pFVar5,&local_38);
      }
      pFVar6 = pFVar6 + 0x3a0;
      pFVar5 = pFVar5 + 0x3a0;
    }
  }
  else if ((param_1 == UpdateActiveOnly) && (iVar1 = (this->AnimPlayers).ArrayNum, iVar1 != 0)) {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FBlendStackAnimPlayer::SetBlendParameters
              ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data,param_2);
    return;
  }
  return;
}

// UpdatePlayRate @ 14a869510

void __thiscall
FAnimNode_BlendStack_Standalone::UpdatePlayRate(FAnimNode_BlendStack_Standalone *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (this->AnimPlayers).ArrayNum;
  if (iVar1 != 0) {
    if (iVar1 < 1) {
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
    FBlendStackAnimPlayer::UpdatePlayRate
              ((FBlendStackAnimPlayer *)(this->AnimPlayers).AllocatorInstance.Data,param_1);
  }
  return;
}

// UpdateSample @ 14a869610

void __thiscall
FAnimNode_BlendStack_Standalone::UpdateSample
          (FAnimNode_BlendStack_Standalone *this,FAnimationUpdateContext *param_1,int param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBlendStackAnimPlayer *this_00;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = 0;
  if (param_2 < (this->AnimPlayers).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  fVar6 = this->PlayerDepthBlendInTimeMultiplier;
  fVar7 = param_1->DeltaTime;
  this_00 = (FBlendStackAnimPlayer *)
            ((this->AnimPlayers).AllocatorInstance.Data + (longlong)param_2 * 0x3a0);
  fVar8 = this_00->TimeToActivation;
  if (0.0 < fVar8) {
    fVar8 = fVar8 - fVar7;
    this_00->TimeToActivation = fVar8;
    if (0.0 <= fVar8) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
      fVar8 = 0.0;
      this_00->TimeToActivation = 0.0;
    }
  }
  fVar1 = this_00->CurrentBlendInTime;
  if (param_2 != 0) {
    fVar6 = powf(fVar6,(float)(param_2 + 1));
    fVar7 = fVar6 * fVar7;
  }
  this_00->CurrentBlendInTime = fVar1 + fVar7;
  if (fVar8 <= 0.0) {
    bVar3 = IsSampleGraphAvailableForPlayer(this,param_2);
    if (bVar3) {
      uVar5 = this_00->PoseLinkIndex;
      uVar4 = 0;
      if ((int)uVar5 < (this->SampleGraphExecutionHelpers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      *(FBlendStackAnimPlayer **)
       ((this->SampleGraphExecutionHelpers).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18) =
           this_00;
      uVar4 = 0;
      if ((int)uVar5 < (this->PerSampleGraphPoseLinks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      FPoseLinkBase::Update
                ((FPoseLinkBase *)
                 ((this->PerSampleGraphPoseLinks).AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 0x10),param_1);
    }
    else {
      FBlendStackAnimPlayer::UpdateSourceLinkNode(this_00);
      (**(code **)((this_00->MirrorNode)._padding_ + 0x10))(&this_00->MirrorNode,param_1);
    }
  }
  return;
}

