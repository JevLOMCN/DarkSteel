// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*> @ 146734f70

TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
* __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::AddConditional<UE::MovieScene::FSourceFloatChannel,FMovieSceneFloatChannel_*>
          (TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
           *this,TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                 *__return_storage_ptr__,
          TComponentTypeID<UE::MovieScene::FSourceFloatChannel> param_1,
          FMovieSceneFloatChannel **param_2,bool param_3)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FMovieSceneFloatChannel *pFVar9;
  undefined4 local_b8;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_58;
  
  pFVar9 = *param_2;
  uVar1 = (this->Builder).field_0x58;
  cVar2 = (this->Builder).field_0x20;
  uVar5 = (this->PropertyTag).Value;
  uVar6 = *(undefined4 *)&(this->Builder).field_0x10;
  local_b8._0_3_ = CONCAT12(param_3,param_1);
  if (cVar2 != '\0') {
    local_88 = *(undefined8 *)&(this->Builder).field_0x18;
  }
  cVar3 = (this->Builder).field_0x38;
  uVar7 = *(undefined4 *)&(this->Builder).field_0x28;
  if (cVar3 != '\0') {
    local_70 = *(undefined8 *)&(this->Builder).field_0x30;
  }
  cVar4 = (this->Builder).field_0x50;
  uVar8 = *(undefined4 *)&(this->Builder).field_0x40;
  if (cVar4 != '\0') {
    local_58 = *(undefined8 *)&(this->Builder).field_0x48;
  }
  *(undefined2 *)&(__return_storage_ptr__->Builder).field_0x8 =
       *(undefined2 *)&(this->Builder).field_0x8;
  *(undefined4 *)&(__return_storage_ptr__->Builder).field_0x10 = uVar6;
  (__return_storage_ptr__->Builder).field_0x20 = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)&(__return_storage_ptr__->Builder).field_0x18 = local_88;
  }
  *(undefined4 *)&(__return_storage_ptr__->Builder).field_0x28 = uVar7;
  (__return_storage_ptr__->Builder).field_0x38 = cVar3;
  if (cVar3 != '\0') {
    *(undefined8 *)&(__return_storage_ptr__->Builder).field_0x30 = local_70;
  }
  *(undefined4 *)&(__return_storage_ptr__->Builder).field_0x40 = uVar8;
  (__return_storage_ptr__->Builder).field_0x50 = cVar4;
  if (cVar4 != '\0') {
    *(undefined8 *)&(__return_storage_ptr__->Builder).field_0x48 = local_58;
  }
  *(undefined4 *)&(__return_storage_ptr__->Builder).field_0x58 = local_b8;
  (__return_storage_ptr__->Builder).field_0x68 = 1;
  *(FMovieSceneFloatChannel **)&(__return_storage_ptr__->Builder).field_0x60 = pFVar9;
  (__return_storage_ptr__->Builder).field_0x70 = uVar1;
  *(undefined ***)&__return_storage_ptr__->Builder =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423__MovieScene_UE__6B_
  ;
  (__return_storage_ptr__->PropertyTag).Value = uVar5;
  return __return_storage_ptr__;
}

// Commit @ 1467815c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  undefined8 local_res10;
  FGuid local_1d8;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined **local_1b0 [4];
  char local_190;
  TComponentTypeID<FMovieScenePropertyBinding> local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_158;
  undefined4 local_154;
  FName local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_138;
  undefined **local_130 [4];
  char local_110;
  undefined4 local_108;
  undefined1 local_f4;
  undefined1 local_f0;
  TComponentTypeID<FGuid> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  TComponentTypeID<FGuid> local_d0;
  bool bStack_ce;
  undefined1 uStack_cd;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_b8;
  undefined2 uStack_b6;
  undefined8 local_80;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_1c8.ComparisonIndex.Value = 0;
        local_1c8.Number = 0;
        if (pFVar2 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_res10 = 0;
        }
        else {
          local_1c8 = pFVar2->NotifyFunctionName;
        }
        local_190 = (this->Builder).field_0x20;
        local_188 = pFVar6->PropertyBinding;
        local_138 = (this->Builder).field_0x28;
        local_1b0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_1b0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
        if (local_190 != '\0') {
          local_res10 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_184 = *(undefined8 *)(lVar3 + 0x120);
        uStack_17c = *(undefined8 *)(lVar3 + 0x128);
        local_174 = *(undefined4 *)(lVar3 + 0x130);
        bStack_e6 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0
        ;
        local_e8 = pFVar6->GenericObjectBinding;
        if (local_190 != '\0') {
          local_80 = local_res10;
        }
        local_16c = _local_e8;
        uStack_1c0 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_b6._0_1_ = local_1c8 != (FName)0x0;
        local_b8 = pFVar7->PropertyNotify;
        if (local_190 != '\0') {
          local_1b0[3] = (undefined **)local_80;
        }
        local_154 = _local_b8;
        local_140 = local_1b8;
        local_1b0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_170 = 1;
        local_158 = 1;
        local_13c = 1;
        uStack_148 = 0;
        local_150 = local_1c8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_1b0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_f0 = (this->Builder).field_0x28;
  local_130[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_ce = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0;
  local_d0 = pFVar6->GenericObjectBinding;
  local_130[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_110 = (this->Builder).field_0x20;
  if (local_110 != '\0') {
    local_130[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_108 = _local_d0;
  local_130[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_f4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_130);
  return;
}

// Commit @ 146781860

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  TComponentTypeID<FMovieScenePropertyBinding> TVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  FBuiltInComponentTypes *pFVar13;
  UClass *pUVar14;
  FName FVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FGuid local_2b0;
  undefined4 local_2a0;
  FName local_29c;
  undefined8 uStack_294;
  uint local_28c;
  FMovieSceneTracksComponentTypes *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  TComponentTypeID<FGuid> local_270;
  bool bStack_26e;
  undefined5 uStack_26d;
  undefined8 uStack_268;
  undefined **local_258 [4];
  char local_238;
  undefined2 local_230;
  UObject *local_228;
  char local_220;
  TComponentTypeID<FMovieScenePropertyBinding> local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined4 local_204;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  FName local_1e0;
  undefined8 uStack_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  undefined1 local_1c8;
  undefined **local_1c0 [4];
  char local_1a0;
  undefined2 local_198;
  UObject *local_190;
  char local_188;
  undefined4 local_180;
  undefined1 local_16c;
  undefined1 local_168;
  TComponentTypeID<FGuid> local_160;
  bool bStack_15e;
  undefined1 uStack_15d;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_148;
  undefined2 uStack_146;
  undefined8 local_110;
  UObject *local_f8;
  undefined8 local_a8;
  UObject *local_90;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_2b0);
  pFVar9 = param_2->EntityMetaData;
  pFVar13 = FBuiltInComponentTypes::Get();
  local_288 = FMovieSceneTracksComponentTypes::Get();
  lVar10 = param_1->_padding_;
  if (lVar10 != 0) {
    pUVar14 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar8 = (int)pUVar14->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar14->_padding_)) {
      bVar12 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar12) {
        FVar15.ComparisonIndex.Value = 0;
        FVar15.Number = 0;
        if (pFVar9 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          FVar15 = pFVar9->NotifyFunctionName;
        }
        local_2a0 = *(undefined4 *)(lVar10 + 0x130);
        cVar1 = (this->Builder).field_0x20;
        TVar4 = pFVar13->PropertyBinding;
        uVar2 = (this->Builder).field_0x40;
        uVar5 = *(undefined2 *)&(this->Builder).field_0x8;
        uVar6 = *(undefined2 *)&(this->Builder).field_0x10;
        _local_270 = *(undefined8 *)(lVar10 + 0x120);
        uStack_268 = *(undefined8 *)(lVar10 + 0x128);
        uVar17 = local_110;
        if (cVar1 != '\0') {
          uVar17 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        cVar3 = (this->Builder).field_0x38;
        uVar7 = *(undefined2 *)&(this->Builder).field_0x28;
        if (((cVar3 != '\0') &&
            (local_f8 = *(UObject **)&(this->Builder).field_0x30,
            GC::GIsIncrementalReachabilityPending != false)) && (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        local_280._4_4_ = local_2b0.B;
        local_280._0_4_ = local_2b0.A;
        uStack_278._4_4_ = local_2b0.D;
        uStack_278._0_4_ = local_2b0.C;
        bStack_15e = ((local_2b0.D != 0 || local_2b0.C != 0) || local_2b0.B != 0) ||
                     local_2b0.A != 0;
        local_160 = pFVar13->GenericObjectBinding;
        uVar16 = local_a8;
        if (cVar1 != '\0') {
          uVar16 = uVar17;
        }
        if (((cVar3 != '\0') &&
            (local_90 = local_f8, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        uStack_294 = 0;
        local_28c = local_28c & 0xffffff00;
        uStack_146._0_1_ = FVar15 != (FName)0x0;
        local_148 = local_288->PropertyNotify;
        if (cVar1 != '\0') {
          local_258[3] = (undefined **)uVar16;
        }
        local_29c = FVar15;
        local_258[1]._0_2_ = uVar5;
        local_258[2]._0_2_ = uVar6;
        local_238 = cVar1;
        local_230 = uVar7;
        local_220 = cVar3;
        if (((cVar3 != '\0') &&
            (local_228 = local_90, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_90 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_90);
        }
        local_204 = local_2a0;
        local_1fc = _local_160;
        local_1e4 = _local_148;
        local_214 = _local_270;
        uStack_20c = uStack_268;
        local_1d0 = local_28c;
        local_1f8 = local_280;
        uStack_1f0 = uStack_278;
        local_200 = 1;
        local_1e8 = 1;
        local_1e0 = local_29c;
        uStack_1d8 = uStack_294;
        local_1cc = 1;
        local_258[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_218 = TVar4;
        local_1c8 = uVar2;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_258);
        return;
      }
      bVar12 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar12) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_163708554002300701>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                            ,0xe3,
                            "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                           );
        if (!bVar12) {
          return;
        }
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  uVar2 = (this->Builder).field_0x40;
  local_1c0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  _local_270 = CONCAT12(((local_2b0.D != 0 || local_2b0.C != 0) || local_2b0.B != 0) ||
                        local_2b0.A != 0,pFVar13->GenericObjectBinding);
  local_1c0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_1a0 = (this->Builder).field_0x20;
  if (local_1a0 != '\0') {
    local_1c0[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_198 = *(undefined2 *)&(this->Builder).field_0x28;
  local_188 = (this->Builder).field_0x38;
  if (((local_188 != '\0') &&
      (local_190 = *(UObject **)&(this->Builder).field_0x30,
      GC::GIsIncrementalReachabilityPending != false)) && (local_190 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_190);
  }
  local_180 = _local_270;
  local_16c = 1;
  local_1c0[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceByteChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_168 = uVar2;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_1c0);
  return;
}

// Commit @ 146781c10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  undefined8 local_res10;
  FGuid local_1d8;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined **local_1b0 [4];
  char local_190;
  TComponentTypeID<FMovieScenePropertyBinding> local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_158;
  undefined4 local_154;
  FName local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_138;
  undefined **local_130 [4];
  char local_110;
  undefined4 local_108;
  undefined1 local_f4;
  undefined1 local_f0;
  TComponentTypeID<FGuid> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  TComponentTypeID<FGuid> local_d0;
  bool bStack_ce;
  undefined1 uStack_cd;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_b8;
  undefined2 uStack_b6;
  undefined8 local_80;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_1c8.ComparisonIndex.Value = 0;
        local_1c8.Number = 0;
        if (pFVar2 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_res10 = 0;
        }
        else {
          local_1c8 = pFVar2->NotifyFunctionName;
        }
        local_190 = (this->Builder).field_0x20;
        local_188 = pFVar6->PropertyBinding;
        local_138 = (this->Builder).field_0x28;
        local_1b0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_1b0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
        if (local_190 != '\0') {
          local_res10 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_184 = *(undefined8 *)(lVar3 + 0x120);
        uStack_17c = *(undefined8 *)(lVar3 + 0x128);
        local_174 = *(undefined4 *)(lVar3 + 0x130);
        bStack_e6 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0
        ;
        local_e8 = pFVar6->GenericObjectBinding;
        if (local_190 != '\0') {
          local_80 = local_res10;
        }
        local_16c = _local_e8;
        uStack_1c0 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_b6._0_1_ = local_1c8 != (FName)0x0;
        local_b8 = pFVar7->PropertyNotify;
        if (local_190 != '\0') {
          local_1b0[3] = (undefined **)local_80;
        }
        local_154 = _local_b8;
        local_140 = local_1b8;
        local_1b0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_170 = 1;
        local_158 = 1;
        local_13c = 1;
        uStack_148 = 0;
        local_150 = local_1c8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_1b0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_f0 = (this->Builder).field_0x28;
  local_130[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_ce = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0;
  local_d0 = pFVar6->GenericObjectBinding;
  local_130[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_110 = (this->Builder).field_0x20;
  if (local_110 != '\0') {
    local_130[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_108 = _local_d0;
  local_130[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceDoubleChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_f4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_130);
  return;
}

// Commit @ 146781eb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  TComponentTypeID<FMovieScenePropertyBinding> TVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  FBuiltInComponentTypes *pFVar13;
  UClass *pUVar14;
  FName FVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FGuid local_2b0;
  undefined4 local_2a0;
  FName local_29c;
  undefined8 uStack_294;
  uint local_28c;
  FMovieSceneTracksComponentTypes *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  TComponentTypeID<FGuid> local_270;
  bool bStack_26e;
  undefined5 uStack_26d;
  undefined8 uStack_268;
  undefined **local_258 [4];
  char local_238;
  undefined2 local_230;
  UObject *local_228;
  char local_220;
  TComponentTypeID<FMovieScenePropertyBinding> local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined4 local_204;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  FName local_1e0;
  undefined8 uStack_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  undefined1 local_1c8;
  undefined **local_1c0 [4];
  char local_1a0;
  undefined2 local_198;
  UObject *local_190;
  char local_188;
  undefined4 local_180;
  undefined1 local_16c;
  undefined1 local_168;
  TComponentTypeID<FGuid> local_160;
  bool bStack_15e;
  undefined1 uStack_15d;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_148;
  undefined2 uStack_146;
  undefined8 local_110;
  UObject *local_f8;
  undefined8 local_a8;
  UObject *local_90;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_2b0);
  pFVar9 = param_2->EntityMetaData;
  pFVar13 = FBuiltInComponentTypes::Get();
  local_288 = FMovieSceneTracksComponentTypes::Get();
  lVar10 = param_1->_padding_;
  if (lVar10 != 0) {
    pUVar14 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar8 = (int)pUVar14->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar14->_padding_)) {
      bVar12 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar12) {
        FVar15.ComparisonIndex.Value = 0;
        FVar15.Number = 0;
        if (pFVar9 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          FVar15 = pFVar9->NotifyFunctionName;
        }
        local_2a0 = *(undefined4 *)(lVar10 + 0x130);
        cVar1 = (this->Builder).field_0x20;
        TVar4 = pFVar13->PropertyBinding;
        uVar2 = (this->Builder).field_0x40;
        uVar5 = *(undefined2 *)&(this->Builder).field_0x8;
        uVar6 = *(undefined2 *)&(this->Builder).field_0x10;
        _local_270 = *(undefined8 *)(lVar10 + 0x120);
        uStack_268 = *(undefined8 *)(lVar10 + 0x128);
        uVar17 = local_110;
        if (cVar1 != '\0') {
          uVar17 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        cVar3 = (this->Builder).field_0x38;
        uVar7 = *(undefined2 *)&(this->Builder).field_0x28;
        if (((cVar3 != '\0') &&
            (local_f8 = *(UObject **)&(this->Builder).field_0x30,
            GC::GIsIncrementalReachabilityPending != false)) && (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        local_280._4_4_ = local_2b0.B;
        local_280._0_4_ = local_2b0.A;
        uStack_278._4_4_ = local_2b0.D;
        uStack_278._0_4_ = local_2b0.C;
        bStack_15e = ((local_2b0.D != 0 || local_2b0.C != 0) || local_2b0.B != 0) ||
                     local_2b0.A != 0;
        local_160 = pFVar13->GenericObjectBinding;
        uVar16 = local_a8;
        if (cVar1 != '\0') {
          uVar16 = uVar17;
        }
        if (((cVar3 != '\0') &&
            (local_90 = local_f8, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        uStack_294 = 0;
        local_28c = local_28c & 0xffffff00;
        uStack_146._0_1_ = FVar15 != (FName)0x0;
        local_148 = local_288->PropertyNotify;
        if (cVar1 != '\0') {
          local_258[3] = (undefined **)uVar16;
        }
        local_29c = FVar15;
        local_258[1]._0_2_ = uVar5;
        local_258[2]._0_2_ = uVar6;
        local_238 = cVar1;
        local_230 = uVar7;
        local_220 = cVar3;
        if (((cVar3 != '\0') &&
            (local_228 = local_90, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_90 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_90);
        }
        local_204 = local_2a0;
        local_1fc = _local_160;
        local_1e4 = _local_148;
        local_214 = _local_270;
        uStack_20c = uStack_268;
        local_1d0 = local_28c;
        local_1f8 = local_280;
        uStack_1f0 = uStack_278;
        local_200 = 1;
        local_1e8 = 1;
        local_1e0 = local_29c;
        uStack_1d8 = uStack_294;
        local_1cc = 1;
        local_258[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_218 = TVar4;
        local_1c8 = uVar2;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_258);
        return;
      }
      bVar12 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar12) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_163708554002300701>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                            ,0xe3,
                            "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                           );
        if (!bVar12) {
          return;
        }
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  uVar2 = (this->Builder).field_0x40;
  local_1c0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  _local_270 = CONCAT12(((local_2b0.D != 0 || local_2b0.C != 0) || local_2b0.B != 0) ||
                        local_2b0.A != 0,pFVar13->GenericObjectBinding);
  local_1c0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_1a0 = (this->Builder).field_0x20;
  if (local_1a0 != '\0') {
    local_1c0[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_198 = *(undefined2 *)&(this->Builder).field_0x28;
  local_188 = (this->Builder).field_0x38;
  if (((local_188 != '\0') &&
      (local_190 = *(UObject **)&(this->Builder).field_0x30,
      GC::GIsIncrementalReachabilityPending != false)) && (local_190 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_190);
  }
  local_180 = _local_270;
  local_16c = 1;
  local_1c0[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceIntegerChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_168 = uVar2;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_1c0);
  return;
}

// Commit @ 146782260

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  undefined8 local_res10;
  FGuid local_1d8;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined **local_1b0 [4];
  char local_190;
  TComponentTypeID<FMovieScenePropertyBinding> local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_158;
  undefined4 local_154;
  FName local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_138;
  undefined **local_130 [4];
  char local_110;
  undefined4 local_108;
  undefined1 local_f4;
  undefined1 local_f0;
  TComponentTypeID<FGuid> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  TComponentTypeID<FGuid> local_d0;
  bool bStack_ce;
  undefined1 uStack_cd;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_b8;
  undefined2 uStack_b6;
  undefined8 local_80;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_1c8.ComparisonIndex.Value = 0;
        local_1c8.Number = 0;
        if (pFVar2 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_res10 = 0;
        }
        else {
          local_1c8 = pFVar2->NotifyFunctionName;
        }
        local_190 = (this->Builder).field_0x20;
        local_188 = pFVar6->PropertyBinding;
        local_138 = (this->Builder).field_0x28;
        local_1b0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_1b0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
        if (local_190 != '\0') {
          local_res10 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_184 = *(undefined8 *)(lVar3 + 0x120);
        uStack_17c = *(undefined8 *)(lVar3 + 0x128);
        local_174 = *(undefined4 *)(lVar3 + 0x130);
        bStack_e6 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0
        ;
        local_e8 = pFVar6->GenericObjectBinding;
        if (local_190 != '\0') {
          local_80 = local_res10;
        }
        local_16c = _local_e8;
        uStack_1c0 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_b6._0_1_ = local_1c8 != (FName)0x0;
        local_b8 = pFVar7->PropertyNotify;
        if (local_190 != '\0') {
          local_1b0[3] = (undefined **)local_80;
        }
        local_154 = _local_b8;
        local_140 = local_1b8;
        local_1b0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_170 = 1;
        local_158 = 1;
        local_13c = 1;
        uStack_148 = 0;
        local_150 = local_1c8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_1b0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_f0 = (this->Builder).field_0x28;
  local_130[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_ce = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0;
  local_d0 = pFVar6->GenericObjectBinding;
  local_130[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_110 = (this->Builder).field_0x20;
  if (local_110 != '\0') {
    local_130[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_108 = _local_d0;
  local_130[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceObjectPathChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_f4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_130);
  return;
}

// Commit @ 146782500

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  undefined8 local_res10;
  FGuid local_1d8;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined **local_1b0 [4];
  char local_190;
  TComponentTypeID<FMovieScenePropertyBinding> local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_158;
  undefined4 local_154;
  FName local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_138;
  undefined **local_130 [4];
  char local_110;
  undefined4 local_108;
  undefined1 local_f4;
  undefined1 local_f0;
  TComponentTypeID<FGuid> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  TComponentTypeID<FGuid> local_d0;
  bool bStack_ce;
  undefined1 uStack_cd;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_b8;
  undefined2 uStack_b6;
  undefined8 local_80;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_1c8.ComparisonIndex.Value = 0;
        local_1c8.Number = 0;
        if (pFVar2 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_res10 = 0;
        }
        else {
          local_1c8 = pFVar2->NotifyFunctionName;
        }
        local_190 = (this->Builder).field_0x20;
        local_188 = pFVar6->PropertyBinding;
        local_138 = (this->Builder).field_0x28;
        local_1b0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_1b0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
        if (local_190 != '\0') {
          local_res10 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_184 = *(undefined8 *)(lVar3 + 0x120);
        uStack_17c = *(undefined8 *)(lVar3 + 0x128);
        local_174 = *(undefined4 *)(lVar3 + 0x130);
        bStack_e6 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0
        ;
        local_e8 = pFVar6->GenericObjectBinding;
        if (local_190 != '\0') {
          local_80 = local_res10;
        }
        local_16c = _local_e8;
        uStack_1c0 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_b6._0_1_ = local_1c8 != (FName)0x0;
        local_b8 = pFVar7->PropertyNotify;
        if (local_190 != '\0') {
          local_1b0[3] = (undefined **)local_80;
        }
        local_154 = _local_b8;
        local_140 = local_1b8;
        local_1b0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_170 = 1;
        local_158 = 1;
        local_13c = 1;
        uStack_148 = 0;
        local_150 = local_1c8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_1b0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_f0 = (this->Builder).field_0x28;
  local_130[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_ce = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0;
  local_d0 = pFVar6->GenericObjectBinding;
  local_130[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_110 = (this->Builder).field_0x20;
  if (local_110 != '\0') {
    local_130[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_108 = _local_d0;
  local_130[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceStringChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_f4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_130);
  return;
}

// Commit @ 1467827a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  undefined8 local_res10;
  FGuid local_1d8;
  FName local_1c8;
  undefined8 uStack_1c0;
  uint local_1b8;
  undefined **local_1b0 [4];
  char local_190;
  TComponentTypeID<FMovieScenePropertyBinding> local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined1 local_158;
  undefined4 local_154;
  FName local_150;
  undefined8 uStack_148;
  uint local_140;
  undefined1 local_13c;
  undefined1 local_138;
  undefined **local_130 [4];
  char local_110;
  undefined4 local_108;
  undefined1 local_f4;
  undefined1 local_f0;
  TComponentTypeID<FGuid> local_e8;
  bool bStack_e6;
  undefined1 uStack_e5;
  TComponentTypeID<FGuid> local_d0;
  bool bStack_ce;
  undefined1 uStack_cd;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_b8;
  undefined2 uStack_b6;
  undefined8 local_80;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_1d8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_1c8.ComparisonIndex.Value = 0;
        local_1c8.Number = 0;
        if (pFVar2 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_res10 = 0;
        }
        else {
          local_1c8 = pFVar2->NotifyFunctionName;
        }
        local_190 = (this->Builder).field_0x20;
        local_188 = pFVar6->PropertyBinding;
        local_138 = (this->Builder).field_0x28;
        local_1b0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_1b0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
        if (local_190 != '\0') {
          local_res10 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_184 = *(undefined8 *)(lVar3 + 0x120);
        uStack_17c = *(undefined8 *)(lVar3 + 0x128);
        local_174 = *(undefined4 *)(lVar3 + 0x130);
        bStack_e6 = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0
        ;
        local_e8 = pFVar6->GenericObjectBinding;
        if (local_190 != '\0') {
          local_80 = local_res10;
        }
        local_16c = _local_e8;
        uStack_1c0 = 0;
        local_1b8 = local_1b8 & 0xffffff00;
        uStack_b6._0_1_ = local_1c8 != (FName)0x0;
        local_b8 = pFVar7->PropertyNotify;
        if (local_190 != '\0') {
          local_1b0[3] = (undefined **)local_80;
        }
        local_154 = _local_b8;
        local_140 = local_1b8;
        local_1b0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_170 = 1;
        local_158 = 1;
        local_13c = 1;
        uStack_148 = 0;
        local_150 = local_1c8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_1b0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_f0 = (this->Builder).field_0x28;
  local_130[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_ce = ((local_1d8.D != 0 || local_1d8.C != 0) || local_1d8.B != 0) || local_1d8.A != 0;
  local_d0 = pFVar6->GenericObjectBinding;
  local_130[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_110 = (this->Builder).field_0x20;
  if (local_110 != '\0') {
    local_130[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_108 = _local_d0;
  local_130[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceTextChannel_MovieScene_UE___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_f4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_130);
  return;
}

// Commit @ 146782a40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  UClass *pUVar8;
  FGuid local_2f8;
  FName local_2e8;
  undefined8 uStack_2e0;
  uint local_2d8;
  undefined **local_2d0 [4];
  char local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  char local_298;
  undefined4 local_290;
  undefined8 local_288;
  char local_280;
  TComponentTypeID<FMovieScenePropertyBinding> local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25c;
  undefined1 local_248;
  undefined4 local_244;
  FName local_240;
  undefined8 uStack_238;
  uint local_230;
  undefined1 local_22c;
  undefined1 local_228;
  undefined **local_220 [4];
  char local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  char local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  char local_1d0;
  undefined4 local_1c8;
  undefined1 local_1b4;
  undefined1 local_1b0;
  TComponentTypeID<FGuid> local_1a8;
  bool bStack_1a6;
  undefined1 uStack_1a5;
  TComponentTypeID<FGuid> local_190;
  bool bStack_18e;
  undefined1 uStack_18d;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_178;
  undefined2 uStack_176;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_90;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_2f8);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar7 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar8 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_2e8.ComparisonIndex.Value = 0;
        local_2e8.Number = 0;
        if (pFVar2 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_2e8 = pFVar2->NotifyFunctionName;
        }
        local_2b0 = (this->Builder).field_0x20;
        local_278 = pFVar6->PropertyBinding;
        if (local_2b0 != '\0') {
          local_140 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_298 = (this->Builder).field_0x38;
        if (local_298 != '\0') {
          local_128 = *(undefined8 *)&(this->Builder).field_0x30;
        }
        local_280 = (this->Builder).field_0x50;
        if (local_280 != '\0') {
          local_110 = *(undefined8 *)&(this->Builder).field_0x48;
        }
        local_274 = *(undefined8 *)(lVar3 + 0x120);
        uStack_26c = *(undefined8 *)(lVar3 + 0x128);
        local_264 = *(undefined4 *)(lVar3 + 0x130);
        bStack_1a6 = ((local_2f8.B != 0 || local_2f8.D != 0) || local_2f8.A != 0) ||
                     local_2f8.C != 0;
        local_1a8 = pFVar6->GenericObjectBinding;
        if (local_2b0 != '\0') {
          local_c0 = local_140;
        }
        local_25c = _local_1a8;
        if (local_298 != '\0') {
          local_a8 = local_128;
        }
        if (local_280 != '\0') {
          local_90 = local_110;
        }
        uStack_2e0 = 0;
        local_2d8 = local_2d8 & 0xffffff00;
        uStack_176._0_1_ = local_2e8 != (FName)0x0;
        local_260 = 1;
        local_248 = 1;
        local_178 = pFVar7->PropertyNotify;
        local_2d0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        local_2d0[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
        if (local_2b0 != '\0') {
          local_2d0[3] = (undefined **)local_c0;
        }
        local_244 = _local_178;
        local_2a8 = *(undefined4 *)&(this->Builder).field_0x28;
        if (local_298 != '\0') {
          local_2a0 = local_a8;
        }
        local_230 = local_2d8;
        local_228 = (this->Builder).field_0x58;
        local_290 = *(undefined4 *)&(this->Builder).field_0x40;
        if (local_280 != '\0') {
          local_288 = local_90;
        }
        local_22c = 1;
        uStack_238 = 0;
        local_2d0[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_240 = local_2e8;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_2d0);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_1b0 = (this->Builder).field_0x58;
  local_220[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_18e = ((local_2f8.B != 0 || local_2f8.D != 0) || local_2f8.A != 0) || local_2f8.C != 0;
  local_190 = pFVar6->GenericObjectBinding;
  local_220[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
  local_200 = (this->Builder).field_0x20;
  if (local_200 != '\0') {
    local_220[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_1f8 = *(undefined4 *)&(this->Builder).field_0x28;
  local_1e8 = (this->Builder).field_0x38;
  if (local_1e8 != '\0') {
    local_1f0 = *(undefined8 *)&(this->Builder).field_0x30;
  }
  local_1e0 = *(undefined4 *)&(this->Builder).field_0x40;
  local_1d0 = (this->Builder).field_0x50;
  if (local_1d0 != '\0') {
    local_1d8 = *(undefined8 *)&(this->Builder).field_0x48;
  }
  local_1c8 = _local_190;
  local_220[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_1b4 = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_220);
  return;
}

// Commit @ 146782da0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  UClass *pUVar7;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar8;
  FGuid local_348;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  FPropertyNotifyComponentData local_32c;
  FMovieSceneTracksComponentTypes *local_318;
  undefined1 local_310 [136];
  undefined1 local_288;
  undefined4 local_284;
  undefined1 local_270;
  bool local_268;
  undefined **local_260 [4];
  char local_240;
  undefined4 local_238;
  undefined8 local_230;
  char local_228;
  undefined4 local_220;
  undefined8 local_218;
  char local_210;
  undefined4 local_208;
  undefined8 local_200;
  char local_1f8;
  undefined4 local_1f0;
  undefined1 local_1dc;
  undefined1 local_1d8;
  TComponentTypeID<FGuid> local_1d0;
  bool bStack_1ce;
  undefined1 uStack_1cd;
  TComponentTypeID<FGuid> local_1b8;
  bool bStack_1b6;
  undefined1 uStack_1b5;
  undefined8 local_188;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_140;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  local_108;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_348);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  local_318 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_32c.NotifyFunctionName.ComparisonIndex.Value = 0;
        local_32c.NotifyFunctionName.Number = 0;
        if (pFVar2 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_32c.NotifyFunctionName = pFVar2->NotifyFunctionName;
        }
        local_268 = (bool)(this->Builder).field_0x70;
        local_310._112_2_ = pFVar6->PropertyBinding;
        local_310[0x20] = (this->Builder).field_0x20;
        if (local_310[0x20] != '\0') {
          local_188 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_310[0x38] = (this->Builder).field_0x38;
        local_338 = *(undefined4 *)&(this->Builder).field_0x28;
        if (local_310[0x38] != '\0') {
          local_170 = *(undefined8 *)&(this->Builder).field_0x30;
        }
        local_310[0x50] = (this->Builder).field_0x50;
        local_334 = *(undefined4 *)&(this->Builder).field_0x40;
        if (local_310[0x50] != '\0') {
          local_158 = *(undefined8 *)&(this->Builder).field_0x48;
        }
        local_310[0x68] = (this->Builder).field_0x68;
        local_330 = *(undefined4 *)&(this->Builder).field_0x58;
        if (local_310[0x68] != '\0') {
          local_140 = *(undefined8 *)&(this->Builder).field_0x60;
        }
        local_310._116_8_ = *(undefined8 *)(lVar3 + 0x120);
        local_310._124_8_ = *(undefined8 *)(lVar3 + 0x128);
        local_310._8_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        bStack_1ce = ((local_348.D != 0 || local_348.C != 0) || local_348.B != 0) ||
                     local_348.A != 0;
        local_1d0 = pFVar6->GenericObjectBinding;
        local_310._16_4_ = *(undefined4 *)&(this->Builder).field_0x10;
        if (local_310[0x20] != '\0') {
          local_310._24_8_ = local_188;
        }
        local_310._132_4_ = *(undefined4 *)(lVar3 + 0x130);
        if (local_310[0x38] != '\0') {
          local_310._48_8_ = local_170;
        }
        if (local_310[0x50] != '\0') {
          local_310._72_8_ = local_158;
        }
        local_284 = _local_1d0;
        if (local_310[0x68] != '\0') {
          local_310._96_8_ = local_140;
        }
        local_310._0_8_ =
             &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
        ;
        local_32c.WeakNotifyFunction.WeakPtr.ObjectIndex = 0;
        local_32c.WeakNotifyFunction.WeakPtr.ObjectSerialNumber = 0;
        local_32c.bNotifyFunctionCached = false;
        local_288 = 1;
        local_270 = 1;
        local_310._40_4_ = local_338;
        local_310._64_4_ = local_334;
        local_310._88_4_ = local_330;
        pTVar8 = TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
                 ::
                 AddConditional<UE::MovieScene::FPropertyNotifyComponentData,UE::MovieScene::FPropertyNotifyComponentData>
                           ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
                             *)local_310,&local_108,local_318->PropertyNotify,&local_32c,
                            local_32c.NotifyFunctionName != (FName)0x0);
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,pTVar8);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_1d8 = (this->Builder).field_0x70;
  local_260[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_1b6 = ((local_348.D != 0 || local_348.C != 0) || local_348.B != 0) || local_348.A != 0;
  local_1b8 = pFVar6->GenericObjectBinding;
  local_260[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
  local_240 = (this->Builder).field_0x20;
  if (local_240 != '\0') {
    local_260[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_238 = *(undefined4 *)&(this->Builder).field_0x28;
  local_228 = (this->Builder).field_0x38;
  if (local_228 != '\0') {
    local_230 = *(undefined8 *)&(this->Builder).field_0x30;
  }
  local_220 = *(undefined4 *)&(this->Builder).field_0x40;
  local_210 = (this->Builder).field_0x50;
  if (local_210 != '\0') {
    local_218 = *(undefined8 *)&(this->Builder).field_0x48;
  }
  local_208 = *(undefined4 *)&(this->Builder).field_0x58;
  local_1f8 = (this->Builder).field_0x68;
  if (local_1f8 != '\0') {
    local_200 = *(undefined8 *)&(this->Builder).field_0x60;
  }
  local_1f0 = _local_1b8;
  local_260[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_1dc = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_260);
  return;
}

// Commit @ 146783150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  int iVar1;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  UClass *pUVar7;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  *pTVar8;
  FGuid local_348;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  FPropertyNotifyComponentData local_32c;
  FMovieSceneTracksComponentTypes *local_318;
  undefined1 local_310 [136];
  undefined1 local_288;
  undefined4 local_284;
  undefined1 local_270;
  bool local_268;
  undefined **local_260 [4];
  char local_240;
  undefined4 local_238;
  undefined8 local_230;
  char local_228;
  undefined4 local_220;
  undefined8 local_218;
  char local_210;
  undefined4 local_208;
  undefined8 local_200;
  char local_1f8;
  undefined4 local_1f0;
  undefined1 local_1dc;
  undefined1 local_1d8;
  TComponentTypeID<FGuid> local_1d0;
  bool bStack_1ce;
  undefined1 uStack_1cd;
  TComponentTypeID<FGuid> local_1b8;
  bool bStack_1b6;
  undefined1 uStack_1b5;
  undefined8 local_188;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_140;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
  local_108;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_348);
  pFVar2 = param_2->EntityMetaData;
  pFVar6 = FBuiltInComponentTypes::Get();
  local_318 = FMovieSceneTracksComponentTypes::Get();
  lVar3 = param_1->_padding_;
  if (lVar3 != 0) {
    pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsPropertyValueID(param_2);
      if (bVar5) {
        local_32c.NotifyFunctionName.ComparisonIndex.Value = 0;
        local_32c.NotifyFunctionName.Number = 0;
        if (pFVar2 != (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          local_32c.NotifyFunctionName = pFVar2->NotifyFunctionName;
        }
        local_268 = (bool)(this->Builder).field_0x70;
        local_310._112_2_ = pFVar6->PropertyBinding;
        local_310[0x20] = (this->Builder).field_0x20;
        if (local_310[0x20] != '\0') {
          local_188 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        local_310[0x38] = (this->Builder).field_0x38;
        local_338 = *(undefined4 *)&(this->Builder).field_0x28;
        if (local_310[0x38] != '\0') {
          local_170 = *(undefined8 *)&(this->Builder).field_0x30;
        }
        local_310[0x50] = (this->Builder).field_0x50;
        local_334 = *(undefined4 *)&(this->Builder).field_0x40;
        if (local_310[0x50] != '\0') {
          local_158 = *(undefined8 *)&(this->Builder).field_0x48;
        }
        local_310[0x68] = (this->Builder).field_0x68;
        local_330 = *(undefined4 *)&(this->Builder).field_0x58;
        if (local_310[0x68] != '\0') {
          local_140 = *(undefined8 *)&(this->Builder).field_0x60;
        }
        local_310._116_8_ = *(undefined8 *)(lVar3 + 0x120);
        local_310._124_8_ = *(undefined8 *)(lVar3 + 0x128);
        local_310._8_2_ = *(undefined2 *)&(this->Builder).field_0x8;
        bStack_1ce = ((local_348.D != 0 || local_348.C != 0) || local_348.B != 0) ||
                     local_348.A != 0;
        local_1d0 = pFVar6->GenericObjectBinding;
        local_310._16_4_ = *(undefined4 *)&(this->Builder).field_0x10;
        if (local_310[0x20] != '\0') {
          local_310._24_8_ = local_188;
        }
        local_310._132_4_ = *(undefined4 *)(lVar3 + 0x130);
        if (local_310[0x38] != '\0') {
          local_310._48_8_ = local_170;
        }
        if (local_310[0x50] != '\0') {
          local_310._72_8_ = local_158;
        }
        local_284 = _local_1d0;
        if (local_310[0x68] != '\0') {
          local_310._96_8_ = local_140;
        }
        local_310._0_8_ =
             &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
        ;
        local_32c.WeakNotifyFunction.WeakPtr.ObjectIndex = 0;
        local_32c.WeakNotifyFunction.WeakPtr.ObjectSerialNumber = 0;
        local_32c.bNotifyFunctionCached = false;
        local_288 = 1;
        local_270 = 1;
        local_310._40_4_ = local_338;
        local_310._64_4_ = local_334;
        local_310._88_4_ = local_330;
        pTVar8 = TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
                 ::
                 AddConditional<UE::MovieScene::FPropertyNotifyComponentData,UE::MovieScene::FPropertyNotifyComponentData>
                           ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>_>
                             *)local_310,&local_108,local_318->PropertyNotify,&local_32c,
                            local_32c.NotifyFunctionName != (FName)0x0);
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,pTVar8);
        return;
      }
      bVar5 = FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(param_2);
      if (!bVar5) {
        bVar5 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_163708554002300701>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                           ,0xe3,
                           "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                          );
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  local_1d8 = (this->Builder).field_0x70;
  local_260[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  bStack_1b6 = ((local_348.D != 0 || local_348.C != 0) || local_348.B != 0) || local_348.A != 0;
  local_1b8 = pFVar6->GenericObjectBinding;
  local_260[2]._0_4_ = *(undefined4 *)&(this->Builder).field_0x10;
  local_240 = (this->Builder).field_0x20;
  if (local_240 != '\0') {
    local_260[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_238 = *(undefined4 *)&(this->Builder).field_0x28;
  local_228 = (this->Builder).field_0x38;
  if (local_228 != '\0') {
    local_230 = *(undefined8 *)&(this->Builder).field_0x30;
  }
  local_220 = *(undefined4 *)&(this->Builder).field_0x40;
  local_210 = (this->Builder).field_0x50;
  if (local_210 != '\0') {
    local_218 = *(undefined8 *)&(this->Builder).field_0x48;
  }
  local_208 = *(undefined4 *)&(this->Builder).field_0x58;
  local_1f8 = (this->Builder).field_0x68;
  if (local_1f8 != '\0') {
    local_200 = *(undefined8 *)&(this->Builder).field_0x60;
  }
  local_1f0 = _local_1b8;
  local_260[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U423_U423_U423_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_1dc = 1;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_260);
  return;
}

// Commit @ 1468accb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
::Commit(TPropertyTrackEntityImportHelperImpl<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>_>
         *this,UMovieSceneSection *param_1,FEntityImportParams *param_2,FImportedEntity *param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  TComponentTypeID<FMovieScenePropertyBinding> TVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  FMovieSceneEvaluationFieldEntityMetaData *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  FBuiltInComponentTypes *pFVar13;
  UClass *pUVar14;
  FName FVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FGuid local_2b0;
  undefined4 local_2a0;
  FName local_29c;
  undefined8 uStack_294;
  uint local_28c;
  FMovieSceneTracksComponentTypes *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  TComponentTypeID<FGuid> local_270;
  bool bStack_26e;
  undefined5 uStack_26d;
  undefined8 uStack_268;
  undefined **local_258 [4];
  char local_238;
  undefined2 local_230;
  UObject *local_228;
  char local_220;
  TComponentTypeID<FMovieScenePropertyBinding> local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined4 local_204;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  FName local_1e0;
  undefined8 uStack_1d8;
  uint local_1d0;
  undefined1 local_1cc;
  undefined1 local_1c8;
  undefined **local_1c0 [4];
  char local_1a0;
  undefined2 local_198;
  UObject *local_190;
  char local_188;
  undefined4 local_180;
  undefined1 local_16c;
  undefined1 local_168;
  TComponentTypeID<FGuid> local_160;
  bool bStack_15e;
  undefined1 uStack_15d;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> local_148;
  undefined2 uStack_146;
  undefined8 local_110;
  UObject *local_f8;
  undefined8 local_a8;
  UObject *local_90;
  
  FEntityImportParams::GetObjectBindingID(param_2,&local_2b0);
  pFVar9 = param_2->EntityMetaData;
  pFVar13 = FBuiltInComponentTypes::Get();
  local_288 = FMovieSceneTracksComponentTypes::Get();
  lVar10 = param_1->_padding_;
  if (lVar10 != 0) {
    pUVar14 = UMovieScenePropertyTrack::StaticClass();
    iVar8 = (int)pUVar14->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar14->_padding_)) {
      if (param_2->EntityID == 0) {
        if (pFVar9 == (FMovieSceneEvaluationFieldEntityMetaData *)0x0) {
          FVar15.ComparisonIndex.Value = 0;
          FVar15.Number = 0;
        }
        else {
          FVar15 = pFVar9->NotifyFunctionName;
        }
        local_2a0 = *(undefined4 *)(lVar10 + 0x130);
        cVar1 = (this->Builder).field_0x20;
        TVar4 = pFVar13->PropertyBinding;
        uVar2 = (this->Builder).field_0x40;
        uVar5 = *(undefined2 *)&(this->Builder).field_0x8;
        uVar6 = *(undefined2 *)&(this->Builder).field_0x10;
        _local_270 = *(undefined8 *)(lVar10 + 0x120);
        uStack_268 = *(undefined8 *)(lVar10 + 0x128);
        uVar17 = local_110;
        if (cVar1 != '\0') {
          uVar17 = *(undefined8 *)&(this->Builder).field_0x18;
        }
        cVar3 = (this->Builder).field_0x38;
        uVar7 = *(undefined2 *)&(this->Builder).field_0x28;
        if (((cVar3 != '\0') &&
            (local_f8 = *(UObject **)&(this->Builder).field_0x30,
            GC::GIsIncrementalReachabilityPending != false)) && (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        local_280._4_4_ = local_2b0.B;
        local_280._0_4_ = local_2b0.A;
        uStack_278._4_4_ = local_2b0.D;
        uStack_278._0_4_ = local_2b0.C;
        bStack_15e = ((local_2b0.C != 0 || local_2b0.D != 0) || local_2b0.B != 0) ||
                     local_2b0.A != 0;
        local_160 = pFVar13->GenericObjectBinding;
        uVar16 = local_a8;
        if (cVar1 != '\0') {
          uVar16 = uVar17;
        }
        if (((cVar3 != '\0') &&
            (local_90 = local_f8, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_f8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_f8);
        }
        uStack_294 = 0;
        local_28c = local_28c & 0xffffff00;
        uStack_146._0_1_ = FVar15 != (FName)0x0;
        local_148 = local_288->PropertyNotify;
        if (cVar1 != '\0') {
          local_258[3] = (undefined **)uVar16;
        }
        local_29c = FVar15;
        local_258[1]._0_2_ = uVar5;
        local_258[2]._0_2_ = uVar6;
        local_238 = cVar1;
        local_230 = uVar7;
        local_220 = cVar3;
        if (((cVar3 != '\0') &&
            (local_228 = local_90, GC::GIsIncrementalReachabilityPending != false)) &&
           (local_90 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_90);
        }
        local_204 = local_2a0;
        local_1fc = _local_160;
        local_1e4 = _local_148;
        local_214 = _local_270;
        uStack_20c = uStack_268;
        local_1d0 = local_28c;
        local_1f8 = local_280;
        uStack_1f0 = uStack_278;
        local_200 = 1;
        local_1e8 = 1;
        local_1e0 = local_29c;
        uStack_1d8 = uStack_294;
        local_1cc = 1;
        local_258[0] = &
                       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAdd_UFMovieScenePropertyBinding___23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFPropertyNotifyComponentData_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_218 = TVar4;
        local_1c8 = uVar2;
        FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FPropertyNotifyComponentData>_>
                            *)local_258);
        return;
      }
      if (param_2->EntityID != 1) {
        bVar12 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_163708554002300701>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tracks\\MovieScenePropertyTrack.h"
                            ,0xe3,
                            "FMovieScenePropertyTrackEntityImportHelper::IsEditConditionToggleID(Params)"
                           );
        if (!bVar12) {
          return;
        }
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FMovieScenePropertyTrackEntityImportHelper::ImportEditConditionToggleEntity(param_2,param_3);
      return;
    }
  }
  uVar2 = (this->Builder).field_0x40;
  local_1c0[1]._0_2_ = *(undefined2 *)&(this->Builder).field_0x8;
  _local_270 = CONCAT12(((local_2b0.C != 0 || local_2b0.D != 0) || local_2b0.B != 0) ||
                        local_2b0.A != 0,pFVar13->GenericObjectBinding);
  local_1c0[2]._0_2_ = *(undefined2 *)&(this->Builder).field_0x10;
  local_1a0 = (this->Builder).field_0x20;
  if (local_1a0 != '\0') {
    local_1c0[3] = *(undefined ***)&(this->Builder).field_0x18;
  }
  local_198 = *(undefined2 *)&(this->Builder).field_0x28;
  local_188 = (this->Builder).field_0x38;
  if (((local_188 != '\0') &&
      (local_190 = *(UObject **)&(this->Builder).field_0x30,
      GC::GIsIncrementalReachabilityPending != false)) && (local_190 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_190);
  }
  local_180 = _local_270;
  local_16c = 1;
  local_1c0[0] = &
                 ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFSourceBoolChannel_MovieScene_UE___23_U__TAdd_V__TSubclassOf_VUMovieSceneBlenderSystem_____23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_168 = uVar2;
  FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TAdd<TSubclassOf<UMovieSceneBlenderSystem>_>,UE::MovieScene::TAddConditional<FGuid>_>
                      *)local_1c0);
  return;
}

