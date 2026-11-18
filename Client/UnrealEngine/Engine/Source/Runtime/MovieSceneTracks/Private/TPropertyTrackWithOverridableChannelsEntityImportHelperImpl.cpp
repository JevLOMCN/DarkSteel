// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Commit @ 146783500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackWithOverridableChannelsEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Commit(TPropertyTrackWithOverridableChannelsEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FChannelOverrideEntityImportParams *pFVar1;
  int iVar2;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  UClass *pUVar8;
  longlong *******ppppppplVar9;
  FChannelOverrideEntityImportParams *pFVar10;
  longlong *plVar11;
  FName FVar12;
  undefined1 auStackY_2e8 [32];
  FGuid local_2b8;
  FName local_2a8;
  undefined8 local_2a0;
  FName local_298;
  undefined8 uStack_290;
  uint local_288;
  undefined **local_278;
  TComponentTypeID<FMovieScenePropertyBinding> local_270;
  undefined8 local_26c;
  undefined8 uStack_264;
  undefined4 local_25c;
  undefined1 local_258;
  undefined4 local_254;
  undefined1 local_240;
  ushort local_23c;
  undefined1 local_238;
  undefined **local_228 [3];
  FName local_210;
  char local_208;
  TComponentTypeID<FMovieScenePropertyBinding> local_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1d0;
  undefined4 local_1cc;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined1 local_1b4;
  undefined1 local_1b0;
  undefined **local_1a8 [4];
  char local_188;
  undefined4 local_180;
  undefined1 local_16c;
  undefined1 local_168;
  TComponentTypeID<FGuid> local_160;
  bool bStack_15e;
  undefined1 uStack_15d;
  TComponentTypeID<FGuid> local_148;
  bool bStack_146;
  undefined1 uStack_145;
  TComponentTypeID<FGuid> local_130;
  bool bStack_12e;
  undefined1 uStack_12d;
  undefined2 local_118;
  bool bStack_116;
  undefined1 uStack_115;
  FName local_e0;
  longlong *******local_90 [8];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FEntityImportParams::GetObjectBindingID(param_2,&local_2b8);
  pFVar3 = param_2->EntityMetaData;
  pFVar7 = FBuiltInComponentTypes::Get();
  local_2a8 = (FName)FMovieSceneTracksComponentTypes::Get();
  lVar4 = param_1->_padding_;
  if (lVar4 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar8->_padding_)) {
      bVar6 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar6) {
        local_298.ComparisonIndex.Value = 0;
        local_298.Number = 0;
        if (pFVar3 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_2a0 = 0;
        }
        else {
          local_298 = pFVar3->NotifyFunctionName;
        }
        local_208 = (this->Builder).field_0x20;
        local_200 = pFVar7->PropertyBinding;
        local_1b0 = (this->Builder).field_0x28;
        local_228[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_228[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
        FVar12 = local_2a8;
        if (local_208 != '\0') {
          FVar12.ComparisonIndex.Value = *(uint *)&(this->Builder).field_0x18;
          FVar12.Number = *(uint *)&(this->Builder).field_0x1c;
        }
        local_1fc = *(undefined8 *)(lVar4 + 0x120);
        uStack_1f4 = *(undefined8 *)(lVar4 + 0x128);
        local_1ec = *(undefined4 *)(lVar4 + 0x130);
        bStack_15e = ((local_2b8.B != 0 || local_2b8.A != 0) || local_2b8.C != 0) ||
                     local_2b8.D != 0;
        local_160 = pFVar7->GenericObjectBinding;
        if (local_208 != '\0') {
          local_e0 = FVar12;
        }
        local_1e4 = _local_160;
        local_288 = local_288 & 0xffffff00;
        uStack_290 = 0;
        bStack_116 = local_298 != (FName)0x0;
        local_118 = *(undefined2 *)((longlong)local_2a8 + 0x30c);
        if (local_208 != '\0') {
          local_210 = local_e0;
        }
        local_1cc = _local_118;
        local_1b8 = local_288;
        local_228[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_1e8 = 1;
        local_1d0 = 1;
        local_1b4 = 1;
        uStack_1c0 = 0;
        local_1c8 = local_298;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_228);
        return;
      }
      bVar6 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (bVar6) {
        FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3)
        ;
        return;
      }
      if ((this->OverrideInfo).Registry.field0_0x0.DebugPtr ==
          (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300566>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0x16a,"OverrideInfo.Registry");
        if (!bVar6) {
          return;
        }
      }
      else {
        if ((*(longlong *)&(this->OverrideInfo).RegistryProvider != 0) &&
           (*(longlong *)&(this->OverrideInfo).RegistryProvider.field_0x8 != 0)) {
          local_270 = pFVar7->PropertyBinding;
          local_26c = *(undefined8 *)(lVar4 + 0x120);
          uStack_264 = *(undefined8 *)(lVar4 + 0x128);
          local_25c = *(undefined4 *)(lVar4 + 0x130);
          bStack_146 = ((local_2b8.B != 0 || local_2b8.A != 0) || local_2b8.C != 0) ||
                       local_2b8.D != 0;
          local_148 = pFVar7->GenericObjectBinding;
          local_254 = _local_148;
          local_23c = (this->PropertyTag).Value;
          local_278 = &
                      ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_UFAdd_23__MovieScene_UE__6B_
          ;
          local_258 = 1;
          local_240 = 1;
          local_238 = 0;
          FImportedEntity::
          AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_&>
                    (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
                              *)&local_278);
          if (*(longlong *)&(this->OverrideInfo).RegistryProvider == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)&(this->OverrideInfo).RegistryProvider.field_0x8;
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,local_90);
          if ((local_50 & 1) == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Traits.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                               ,0x176,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((local_50 & 1) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          ppppppplVar9 = (longlong *******)local_90;
          if ((local_50 & 2) == 0) {
            ppppppplVar9 = local_90[0];
          }
          (*(code *)(*ppppppplVar9)[3])(ppppppplVar9,&local_2a8,param_2->EntityID);
          pFVar10 = (FChannelOverrideEntityImportParams *)
                    (this->OverrideInfo).ImportParams.AllocatorInstance.Data;
          pFVar1 = pFVar10 + (this->OverrideInfo).ImportParams.ArrayNum;
          do {
            if (pFVar10 == pFVar1) {
LAB_146783892:
              bVar6 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_163708554002300547>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                                 ,0x17d,"ChannelOverrideParams");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
LAB_1467838bf:
              if ((local_50 & 1) == 0) {
                return;
              }
              ppppppplVar9 = (longlong *******)local_90;
              if ((local_50 & 2) == 0) {
                ppppppplVar9 = local_90[0];
              }
              local_50 = local_50 & 0xfe;
              (*(code *)**ppppppplVar9)(ppppppplVar9,0);
              if ((local_50 & 2) != 0) {
                return;
              }
              FMemory::Free(local_90[0]);
              return;
            }
            if (pFVar10->ChannelName == local_2a8) {
              if (pFVar10 != (FChannelOverrideEntityImportParams *)0x0) {
                UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
                          ((this->OverrideInfo).Registry.field0_0x0.DebugPtr,pFVar10,param_2,param_3
                          );
                goto LAB_1467838bf;
              }
              goto LAB_146783892;
            }
            pFVar10 = pFVar10 + 1;
          } while( true );
        }
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300563>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0x16d,"OverrideInfo.RegistryProvider");
        if (!bVar6) {
          return;
        }
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_168 = (this->Builder).field_0x28;
  local_1a8[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_12e = ((local_2b8.B != 0 || local_2b8.A != 0) || local_2b8.C != 0) || local_2b8.D != 0;
  local_130 = pFVar7->GenericObjectBinding;
  local_1a8[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
  local_188 = (this->Builder).field_0x20;
  if (local_188 != '\0') {
    local_1a8[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_180 = _local_130;
  local_1a8[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_16c = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_1a8);
  return;
}

