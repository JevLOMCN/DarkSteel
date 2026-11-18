// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// ImportEditConditionToggleEntity @ 1468babd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity
          (FEntityImportParams *param_1,FImportedEntity *param_2)

{
  FString *this;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar1;
  TComponentTypeID<FMovieScenePropertyBinding> TVar2;
  ushort uVar3;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  UClass *pUVar10;
  FString *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FName local_res8;
  FImportedEntity *local_res10;
  FName local_res18;
  FName local_res20;
  FGuid local_128;
  FString local_118;
  FString local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  undefined2 local_e0;
  undefined2 local_de;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> local_d8;
  UClass *local_d0;
  undefined1 local_c8;
  TComponentTypeID<FMovieScenePropertyBinding> local_c0;
  FName local_bc;
  FName FStack_b4;
  bool local_ac;
  undefined3 uStack_ab;
  undefined1 local_a8;
  undefined4 local_a4;
  FScriptContainerElement *local_a0;
  int iStack_98;
  int iStack_94;
  undefined1 local_90;
  ushort local_8c;
  undefined1 local_88;
  FMovieScenePropertyBinding local_80;
  FName local_68;
  TComponentTypeID<FGuid> local_60;
  bool bStack_5e;
  undefined1 uStack_5d;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  bVar6 = false;
  pFVar4 = param_1->EntityMetaData;
  local_res10 = param_2;
  if (pFVar4 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
    iVar12 = (pFVar4->OverrideBoundPropertyPath).Data.ArrayNum;
    this = &pFVar4->OverrideBoundPropertyPath;
    if (iVar12 < 2) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1684416934323421728>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieScenePropertyTrack.cpp"
                         ,0x220,"!OverrideBoundPropertyPath.IsEmpty()");
      if (bVar6) goto code_r0x0001468bac6f;
    }
    else if (((param_1->InterrogationKey).Channel.Value == -1) ||
            ((param_1->InterrogationKey).InterrogationIndex == -1)) {
      pFVar16 = (this->Data).AllocatorInstance.Data;
      pFVar15 = pFVar16 + (longlong)iVar12 * 2;
      do {
        if (pFVar15 == pFVar16) goto LAB_1468bacd4;
        pFVar15 = pFVar15 + -2;
      } while (*(short *)pFVar15 != 0x2e);
      iVar14 = (int)((longlong)pFVar15 - (longlong)pFVar16 >> 1);
      if (iVar14 == -1) {
LAB_1468bacd4:
        iVar12 = iVar12 + -1;
        pFVar7 = &local_68;
      }
      else {
        pFVar11 = ::FString::RightChop(this,(FString *)local_f8,iVar14 + 1);
        bVar6 = true;
        iVar14 = (pFVar11->Data).ArrayNum;
        pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
        iVar12 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar12 = 0;
        }
        pFVar7 = &local_res20;
      }
      pFVar7 = ::FName::FName(pFVar7,iVar12,(wchar_t *)pFVar16,FNAME_Add);
      local_res8 = *pFVar7;
      ::FName::ToString(&local_res8,&local_108);
      ::FString::FString(&local_118,"b");
      iVar12 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar13.Data = local_118.Data.AllocatorInstance.Data;
      }
      ::FString::RemoveFromStart(&local_108,(wchar_t *)FVar13.Data,iVar12,CaseSensitive);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar13.Data = local_108.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res18,(wchar_t *)FVar13.Data);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0))
      {
        FMemory::Free((void *)local_f8._0_8_);
      }
      pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_1,&local_128);
      FMovieScenePropertyBinding::FMovieScenePropertyBinding(&local_80,local_res18,this);
      local_res8.ComparisonIndex.Value._0_2_ = pFVar8->BoolResult;
      pUVar10 = Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
      TVar1 = pFVar8->BlenderType;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar10 != (UClass *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar10 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
        }
      }
      TVar2 = pFVar8->PropertyBinding;
      local_f8._0_4_ = local_80.PropertyName.ComparisonIndex.Value;
      local_f8._4_4_ = local_80.PropertyName.Number;
      local_f8._8_4_ = local_80.PropertyPath.ComparisonIndex.Value;
      local_f8._12_4_ = local_80.PropertyPath.Number;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      local_118.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44(local_128.B,local_128.A);
      local_118.Data.ArrayMax = local_128.D;
      local_118.Data.ArrayNum = local_128.C;
      bStack_5e = ((local_128.D != 0 || local_128.C != 0) || local_128.A != 0) || local_128.B != 0;
      local_60 = pFVar8->GenericObjectBinding;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      uVar3 = (pFVar9->Bool).PropertyTag.Value;
      local_e0 = local_res8.ComparisonIndex.Value._0_2_;
      local_de = 0x101;
      local_c8 = 1;
      local_d8 = TVar1;
      local_d0 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      local_bc.ComparisonIndex.Value = local_f8._0_4_;
      local_bc.Number = local_f8._4_4_;
      FStack_b4.ComparisonIndex.Value = local_f8._8_4_;
      FStack_b4.Number = local_f8._12_4_;
      local_a4 = _local_60;
      local_a8 = 1;
      local_a0 = local_118.Data.AllocatorInstance.Data;
      iStack_98 = local_118.Data.ArrayNum;
      iStack_94 = local_118.Data.ArrayMax;
      local_ac = local_80.bCanUseClassLookup;
      uStack_ab = local_80._17_3_;
      local_90 = 1;
      local_88 = 0;
      local_e8 = &
                 ___7__TEntityBuilder_U__TAdd__N_MovieScene_UE__U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_UFAdd_23__MovieScene_UE__6B_
      ;
      local_c0 = TVar2;
      local_8c = uVar3;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
                (local_res10,
                 (TEntityBuilder<UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
                  *)&local_e8);
    }
    return;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1684416934323421722>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieScenePropertyTrack.cpp"
                     ,0x21a,"Params.EntityMetaData");
  if (!bVar6) {
    return;
  }
code_r0x0001468bac6f:
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// IsEditConditionToggleID @ 1468bc6b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(FEntityImportParams *param_1)

{
  return param_1->EntityID == 1;
}

// IsPropertyValueID @ 1468bc930

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(FEntityImportParams *param_1)

{
  return param_1->EntityID == 0;
}

// PopulateEvaluationField @ 1468c4330

void __cdecl
FMovieScenePropertyTrackEntityImportHelper::PopulateEvaluationField
          (UMovieSceneSection *param_1,TRange<FFrameNumber> *param_2,
          FMovieSceneEvaluationFieldEntityMetaData *param_3,
          FMovieSceneEntityComponentFieldBuilder *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FString *this;
  longlong *plVar8;
  UMovieSceneSectionChannelOverrideRegistry *this_00;
  FMovieSceneChannelProxy *this_01;
  uint uVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [24];
  void *local_d0;
  FString local_c0;
  FName local_b0;
  FFrameNumber local_a8;
  ESectionEvaluationFlags local_a4;
  byte local_a3;
  undefined1 local_98 [24];
  void *local_80;
  FString local_70;
  FName local_60;
  FFrameNumber local_58;
  ESectionEvaluationFlags local_54;
  byte local_53;
  FString local_48;
  
  iVar3 = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  pUVar5 = UMovieScenePropertyTrack::StaticClass();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
  if ((pUVar6 != (UObject *)0x0) && (pUVar7 != (UObject *)0x0)) {
    this = ::FName::ToString((FName *)&pUVar6[7].field_0x10,&local_48);
    ::FString::ParseIntoArray(this,&local_128,L".",true);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_98._0_8_ = *(undefined8 *)&(param_3->Condition).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_98 + 8),
             (FSoftObjectPath *)&(param_3->Condition).SoftObjectPtr.field_0x8);
  ::FString::FString(&local_70,&param_3->OverrideBoundPropertyPath);
  local_60 = param_3->NotifyFunctionName;
  local_58.Value = (param_3->ForcedTime).Value;
  local_54 = param_3->Flags;
  local_53 = local_53 & 0xfc | param_3->field_0x45 & 3;
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister();
    plVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if ((plVar8 != (longlong *)0x0) &&
       (this_00 = (UMovieSceneSectionChannelOverrideRegistry *)
                  (**(code **)(*plVar8 + 0x10))(plVar8,0),
       this_00 != (UMovieSceneSectionChannelOverrideRegistry *)0x0)) {
      iVar3 = UMovieSceneSectionChannelOverrideRegistry::NumChannels(this_00);
      UMovieSceneSectionChannelOverrideRegistry::PopulateEvaluationFieldImpl
                (this_00,param_2,(FMovieSceneEvaluationFieldEntityMetaData *)local_98,param_4,
                 param_1);
    }
  }
  this_01 = UMovieSceneSection::GetChannelProxy(param_1);
  iVar4 = FMovieSceneChannelProxy::NumChannels(this_01);
  if (iVar3 < iVar4) {
    iVar3 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity(param_4,(UObject *)param_1,0);
    iVar4 = FMovieSceneEntityComponentFieldBuilder::AddMetaData
                      (param_4,(FMovieSceneEvaluationFieldEntityMetaData *)local_98);
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_4,param_2,iVar3,iVar4);
  }
  FVar11.Data = local_128.AllocatorInstance.Data;
  if (0 < local_128.ArrayNum) {
    iVar3 = local_128.ArrayNum + -1;
    pwVar13 = L"";
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = true;
    pFVar12 = FVar11.Data + (longlong)iVar3 * 0x10;
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = 0;
    local_118.Data.ArrayMax = 0;
    for (; FVar11.Data != pFVar12; FVar11.Data = FVar11.Data + 0x10) {
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_118,L".",1);
      }
      iVar3 = *(int *)(FVar11.Data + 8) + -1;
      if (*(int *)(FVar11.Data + 8) == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_118,*(wchar_t **)FVar11.Data,iVar3);
    }
    if (1 < local_128.ArrayNum) {
      uVar10 = local_128.ArrayNum - 2;
      uVar9 = 0;
      if ((int)uVar10 < local_128.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)(local_128.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10 + 8) != 0) {
        pwVar13 = *(wchar_t **)(local_128.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10);
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar13,"PostProcessSettings");
      if (iVar3 == 0) {
        uVar10 = local_128.ArrayNum - 1;
        uVar9 = 0;
        if ((int)uVar10 < local_128.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::FString(&local_108,
                           (FString *)
                           (local_128.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10));
        ::FString::FString(&local_f8,L"bOverride_");
        ::FString::InsertAt(&local_108,0,&local_f8);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (1 < local_118.Data.ArrayNum) {
          ::FString::AppendChars(&local_118,".",1);
        }
        iVar3 = local_108.Data.ArrayNum + -1;
        if (local_108.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AppendChars(&local_118,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar3);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_e8._0_8_ = *(undefined8 *)&(param_3->Condition).SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_e8 + 8),
                   (FSoftObjectPath *)&(param_3->Condition).SoftObjectPtr.field_0x8);
        ::FString::FString(&local_c0,&param_3->OverrideBoundPropertyPath);
        local_b0 = param_3->NotifyFunctionName;
        local_a8.Value = (param_3->ForcedTime).Value;
        local_a4 = param_3->Flags;
        local_a3 = local_a3 & 0xfc | param_3->field_0x45 & 3;
        iVar3 = local_118.Data.ArrayNum + -1;
        if (local_118.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AssignRange(&local_c0,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar3);
        iVar3 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                          (param_4,(UObject *)param_1,1);
        iVar4 = FMovieSceneEntityComponentFieldBuilder::AddMetaData
                          (param_4,(FMovieSceneEvaluationFieldEntityMetaData *)local_e8);
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_4,param_2,iVar3,iVar4);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (local_d0 != (void *)0x0) {
          FMemory::Free(local_d0);
        }
      }
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// SanitizeBoolPropertyName @ 1468cd4f0

FName __cdecl FMovieScenePropertyTrackEntityImportHelper::SanitizeBoolPropertyName(FName param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  ::FName::ToString(local_res10,&local_28);
  ::FString::FString(&local_18,"b");
  iVar2 = local_18.Data.ArrayNum + -1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_28,(wchar_t *)FVar1.Data,iVar2,CaseSensitive);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar1.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return param_1;
}

