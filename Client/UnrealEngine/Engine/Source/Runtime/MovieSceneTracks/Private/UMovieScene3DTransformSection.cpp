// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 44

// StaticClass @ 14658bb70

UClass * __cdecl UMovieScene3DTransformSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformSection",
               &Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformSection,0xd50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DTransformSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton;
}

// BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>_> @ 1465a1ea0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::
BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>_>
          (UMovieScene3DTransformSection *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
          *param_1,UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  UMovieSceneSectionChannelOverrideRegistry *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  FBuiltInComponentTypes *pFVar9;
  bool bVar10;
  FMovieSceneTracksComponentTypes *pFVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  char *pcVar14;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
  *pTVar15;
  FName *pFVar16;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  *pTVar17;
  int iVar18;
  FName FVar19;
  FEntityImportParams *pFVar20;
  FComponentTypeID FVar21;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> TVar22;
  char local_ce8 [16];
  undefined1 local_cd8;
  char local_cd7;
  char local_cd6;
  FAdd local_cd4;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_cd2;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_cd0;
  FBuiltInComponentTypes *local_cc8;
  FMovieSceneDoubleChannel *local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  FEntityImportParams *local_ca8;
  FImportedEntity *local_ca0;
  FChannelOverrideEntityImportParams local_c98;
  undefined4 uStack_c8c;
  FChannelOverrideEntityImportParams local_c88;
  undefined4 uStack_c7c;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_c78;
  undefined1 local_c76;
  FSourceDoubleChannel local_c70;
  bool local_c68;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_c60;
  undefined1 local_c5e;
  FSourceDoubleChannel local_c58;
  bool local_c50;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_c48;
  undefined1 local_c46;
  FSourceFloatChannel local_c40;
  bool local_c38;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_c30;
  undefined1 local_c2e;
  FSourceDoubleChannel local_c28;
  bool local_c20;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_c18;
  undefined1 local_c16;
  FSourceDoubleChannel local_c10;
  bool local_c08;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_c00;
  undefined1 local_bfe;
  FSourceDoubleChannel local_bf8;
  bool local_bf0;
  undefined1 local_be8 [12];
  FName local_bdc;
  undefined8 uStack_bd4;
  undefined4 local_bcc;
  char local_bc8;
  undefined4 local_bc0;
  undefined8 local_bb8;
  char local_bb0;
  undefined4 local_ba8;
  FName local_ba4;
  undefined8 uStack_b9c;
  char local_b94;
  undefined4 local_b90;
  FMovieSceneDoubleChannel *local_b88;
  undefined1 local_b80;
  undefined4 local_b78;
  FMovieSceneDoubleChannel *local_b70;
  undefined1 local_b68;
  undefined4 local_b60;
  FMovieSceneDoubleChannel *local_b58;
  undefined1 local_b50;
  bool local_b48;
  FName local_b40;
  FName local_b38;
  FName local_b30;
  FName local_b28;
  FName local_b20;
  FName local_b18;
  FName local_b10;
  FName local_b08;
  FName local_b00;
  FName local_af8;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_af0;
  undefined2 uStack_aee;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_ad8;
  undefined2 uStack_ad6;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_ac0;
  undefined2 uStack_abe;
  undefined **local_aa8;
  undefined1 local_aa0 [56];
  TAddConditional<FGuid> local_a68;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_a50;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_a38;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_a20;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_a08;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_9f0;
  undefined1 local_9d8;
  undefined **local_9d0;
  undefined1 local_9c8 [56];
  TAddConditional<FGuid> local_990;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_978;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_960;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_948;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_930;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_918;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_900;
  undefined1 local_8e8;
  undefined **local_8e0;
  undefined1 local_8d8 [56];
  TAddConditional<FGuid> local_8a0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_888;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_870;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_858;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_840;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_828;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_810;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_7f8;
  undefined1 local_7e0;
  undefined **local_7d8;
  undefined1 local_7d0 [56];
  TAddConditional<FGuid> local_798;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_780;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_768;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_750;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_738;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_720;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_708;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_6f0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_6d8;
  undefined1 local_6c0;
  undefined **local_6b8;
  undefined1 local_6b0 [56];
  TAddConditional<FGuid> local_678;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_660;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_648;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_630;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_618;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_600;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_5e8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_5d0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_5b8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_5a0;
  undefined1 local_588;
  undefined **local_580;
  undefined1 local_578 [56];
  TAddConditional<FGuid> local_540;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_528;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_510;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4f8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4e0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4c8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4b0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_498;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_480;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_468;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_450;
  undefined1 local_438;
  uint local_424;
  uint uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined8 local_400;
  uint local_3ec;
  uint uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  FName local_3ac;
  undefined8 uStack_3a4;
  undefined4 local_39c;
  undefined8 local_388;
  FName local_374;
  undefined8 uStack_36c;
  undefined **local_328;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  local_320;
  undefined1 local_1d8;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
  local_1d0;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>
  local_168;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  local_100;
  
  local_ca0 = param_4;
  local_ca8 = param_3;
  local_cc8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar11 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar12 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
  pUVar13 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar12);
  if ((pUVar13 == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Track",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScene3DTransformSection.cpp"
                          ,0x1f9,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar12 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
  iVar18 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar18) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
      &pUVar12->_padding_)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  pUVar12 = Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister();
  pFVar20 = local_ca8;
  iVar18 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar18) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
      &pUVar12->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  FVar21.Value = (pFVar11->Transform).PropertyTag.Value;
  if (bVar10) {
    FVar21.Value = (pFVar11->ComponentTransform).PropertyTag.Value;
  }
  else if (bVar7) {
    FVar21.Value = (pFVar11->EulerTransform).PropertyTag.Value;
  }
  uVar4 = (this->TransformMask).Mask;
  if (((uVar4 & 1) == 0) ||
     ((this->Translation[0].Times.ArrayNum == 0 && (this->Translation[0].bHasDefaultValue != true)))
     ) {
    local_ce8[0] = '\0';
  }
  else {
    local_ce8[0] = '\x01';
  }
  if (((uVar4 >> 1 & 1) == 0) ||
     ((this->Translation[1].Times.ArrayNum == 0 && (this->Translation[1].bHasDefaultValue != true)))
     ) {
    local_ce8[1] = '\0';
  }
  else {
    local_ce8[1] = '\x01';
  }
  if (((uVar4 >> 2 & 1) == 0) ||
     ((this->Translation[2].Times.ArrayNum == 0 && (this->Translation[2].bHasDefaultValue != true)))
     ) {
    local_ce8[2] = '\0';
  }
  else {
    local_ce8[2] = '\x01';
  }
  if (((uVar4 >> 3 & 1) == 0) ||
     ((this->Rotation[0].Times.ArrayNum == 0 && (this->Rotation[0].bHasDefaultValue != true)))) {
    local_ce8[3] = '\0';
  }
  else {
    local_ce8[3] = '\x01';
  }
  if (((uVar4 >> 4 & 1) == 0) ||
     ((this->Rotation[1].Times.ArrayNum == 0 && (this->Rotation[1].bHasDefaultValue != true)))) {
    local_ce8[4] = '\0';
  }
  else {
    local_ce8[4] = '\x01';
  }
  if (((uVar4 >> 5 & 1) == 0) ||
     ((this->Rotation[2].Times.ArrayNum == 0 && (this->Rotation[2].bHasDefaultValue != true)))) {
    local_ce8[5] = '\0';
  }
  else {
    local_ce8[5] = '\x01';
  }
  if (((uVar4 >> 6 & 1) == 0) ||
     ((this->Scale[0].Times.ArrayNum == 0 && (this->Scale[0].bHasDefaultValue != true)))) {
    local_ce8[6] = '\0';
  }
  else {
    local_ce8[6] = '\x01';
  }
  if (((uVar4 >> 7 & 1) == 0) ||
     ((this->Scale[1].Times.ArrayNum == 0 && (this->Scale[1].bHasDefaultValue != true)))) {
    local_ce8[7] = '\0';
  }
  else {
    local_ce8[7] = '\x01';
  }
  if (((uVar4 >> 8 & 1) == 0) ||
     ((this->Scale[2].Times.ArrayNum == 0 && (this->Scale[2].bHasDefaultValue != true)))) {
    local_ce8[8] = '\0';
  }
  else {
    local_ce8[8] = '\x01';
  }
  pcVar14 = local_ce8;
  while (*pcVar14 == '\0') {
    pcVar14 = pcVar14 + 1;
    if (pcVar14 == local_ce8 + 9) {
      return;
    }
  }
  if (this->bUseQuaternionInterpolation == false) {
    local_cd2 = local_cc8->DoubleChannel[4];
    TVar22 = local_cc8->DoubleChannel[3];
    local_cd0 = local_cc8->DoubleChannel[5];
  }
  else {
    local_cd2 = pFVar11->QuaternionRotationChannel[1];
    TVar22 = pFVar11->QuaternionRotationChannel[0];
    local_cd0 = pFVar11->QuaternionRotationChannel[2];
  }
  FVar19.ComparisonIndex.Value = 0;
  FVar19.Number = 0;
  iVar18 = local_ca8->EntityID - ChannelOverrideNames.IndexOffset;
  if ((iVar18 < 0) || (ChannelOverrideNames.ChannelNames.ArrayNum <= iVar18)) {
    local_cb0 = 0;
  }
  else {
    FVar19 = *(FName *)(ChannelOverrideNames.ChannelNames.AllocatorInstance.Data +
                       (longlong)iVar18 * 8);
  }
  local_cb8 = 0;
  if (FVar19 != (FName)0x0) {
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if (((pUVar5 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
        (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,FVar19), !bVar10
        )) && (bVar10 = `UMovieScene3DTransformSection::
                        BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>_>'
                        ::__l28::<lambda_1>::operator()(&local_cd8), !bVar10)) {
      return;
    }
    iVar18 = pFVar20->EntityID - ChannelOverrideNames.IndexOffset;
    if (iVar18 != 9) {
      if (local_ce8[iVar18] == '\0') {
        return;
      }
      pTVar15 = UE::MovieScene::
                TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
                ::AddTag((TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
                          *)param_1,&local_1d0,FVar21);
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
                (local_ca0,pTVar15);
      stack0xfffffffffffff380 = CONCAT62(stack0xfffffffffffff382,local_cc8->DoubleResult[iVar18]);
      local_c88.ChannelName = FVar19;
      UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
                ((this->OverrideRegistry).field0_0x0.DebugPtr,&local_c88,pFVar20,local_ca0);
      return;
    }
    if ((uVar4 >> 9 & 1) == 0) {
      return;
    }
    pTVar15 = UE::MovieScene::
              TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
              ::AddTag((TEntityBuilderImpl<TIntegerSequence<int,0,1,2>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
                        *)param_1,&local_168,FVar21);
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd>_>
              (local_ca0,pTVar15);
    stack0xfffffffffffff370 = CONCAT62(stack0xfffffffffffff372,local_cc8->WeightResult);
    local_c98.ChannelName = FVar19;
    UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
              ((this->OverrideRegistry).field0_0x0.DebugPtr,&local_c98,pFVar20,local_ca0);
    return;
  }
  if (local_ce8[0] == '\0') {
LAB_1465a22d0:
    uStack_aee._0_1_ = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b40,L"Location.X");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a22d0;
    uStack_aee._0_1_ = 1;
  }
  cVar1 = param_1->field_0x20;
  local_af0 = local_cc8->DoubleChannel[0];
  local_cd8 = param_1->field_0x58;
  local_cd4.ComponentTypeID.Value = *(FComponentTypeID *)&param_1->field_0x8;
  if (cVar1 != '\0') {
    local_414 = *(undefined4 *)&param_1->field_0x1c;
    local_424 = *(uint *)&param_1->field_0xc;
    uStack_420 = *(uint *)&param_1->field_0x10;
    uStack_41c = *(undefined4 *)&param_1->field_0x14;
    uStack_418 = *(undefined4 *)&param_1->field_0x18;
  }
  local_cc0 = (FMovieSceneDoubleChannel *)CONCAT44(local_cc0._4_4_,local_414);
  local_cb8 = CONCAT44(local_cb8._4_4_,*(undefined4 *)&param_1->field_0x28);
  local_cd7 = param_1->field_0x38;
  local_c88.ChannelName.Number = uStack_420;
  local_c88.ChannelName.ComparisonIndex.Value = local_424;
  uStack_c7c = uStack_418;
  local_c88._8_4_ = uStack_41c;
  if (local_cd7 != '\0') {
    local_400 = *(undefined8 *)&param_1->field_0x30;
  }
  cVar2 = param_1->field_0x54;
  local_cb0 = CONCAT44(local_cb0._4_4_,*(undefined4 *)&param_1->field_0x40);
  if (cVar2 != '\0') {
    local_3ec = *(uint *)&param_1->field_0x44;
    uStack_3e8 = *(uint *)&param_1->field_0x48;
    uStack_3e4 = *(undefined4 *)&param_1->field_0x4c;
    uStack_3e0 = *(undefined4 *)&param_1->field_0x50;
  }
  local_c98.ChannelName.Number = uStack_3e8;
  local_c98.ChannelName.ComparisonIndex.Value = local_3ec;
  uStack_c8c = uStack_3e0;
  local_c98._8_4_ = uStack_3e4;
  local_cd6 = cVar1;
  local_ca8 = (FEntityImportParams *)local_400;
  if (local_ce8[1] == '\0') {
LAB_1465a23b0:
    uStack_ad6._0_1_ = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b38,L"Location.Y");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a23b0;
    uStack_ad6._0_1_ = 1;
  }
  cVar8 = local_cd7;
  local_ad8 = local_cc8->DoubleChannel[1];
  if (cVar1 == '\0') {
    local_cc0 = (FMovieSceneDoubleChannel *)CONCAT44(local_cc0._4_4_,local_39c);
    local_c88.ChannelName = local_3ac;
    stack0xfffffffffffff380 = uStack_3a4;
  }
  pFVar20 = (FEntityImportParams *)local_388;
  if (local_cd7 != '\0') {
    pFVar20 = local_ca8;
  }
  if (cVar2 == '\0') {
    local_c98.ChannelName = local_374;
    stack0xfffffffffffff370 = uStack_36c;
  }
  if (local_ce8[2] == '\0') {
LAB_1465a243b:
    uStack_abe._0_1_ = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b30,L"Location.Z");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a243b;
    uStack_abe._0_1_ = 1;
  }
  local_b58 = this->Translation + 2;
  local_ac0 = local_cc8->DoubleChannel[2];
  local_be8._8_2_ = local_cd4.ComponentTypeID.Value;
  local_bc8 = local_cd6;
  if (local_cd6 != '\0') {
    local_bcc = local_cc0._0_4_;
    local_bdc = local_c88.ChannelName;
    uStack_bd4 = stack0xfffffffffffff380;
  }
  local_bc0 = (undefined4)local_cb8;
  if (cVar8 != '\0') {
    local_bb8 = pFVar20;
  }
  local_bb0 = cVar8;
  local_ba8 = (undefined4)local_cb0;
  if (cVar2 != '\0') {
    local_ba4 = local_c98.ChannelName;
    uStack_b9c = stack0xfffffffffffff370;
  }
  local_b90 = _local_af0;
  local_b88 = this->Translation;
  local_b78 = _local_ad8;
  local_b70 = this->Translation + 1;
  local_b60 = _local_ac0;
  local_b48 = (bool)local_cd8;
  local_be8._0_8_ =
       &
       ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623__MovieScene_UE__6B_
  ;
  local_b80 = 1;
  local_b68 = 1;
  local_b50 = 1;
  local_b94 = cVar2;
  if (local_ce8[3] == '\0') {
LAB_1465a2577:
    bVar10 = false;
  }
  else {
    pFVar16 = ::FName::FName(&local_b28,L"Rotation.X");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a2577;
    bVar10 = true;
  }
  local_cc0 = this->Rotation;
  pTVar17 = UE::MovieScene::
            TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_*>
                      ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                        *)local_be8,&local_100,TVar22,&local_cc0,bVar10);
  if (local_ce8[4] == '\0') {
LAB_1465a25db:
    local_c16 = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b20,L"Rotation.Y");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a25db;
    local_c16 = 1;
  }
  uVar3 = pTVar17->field_0xb8;
  local_c18 = local_cd2;
  local_c10.Source = this->Rotation + 1;
  local_c08 = true;
  local_aa8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_aa0,ForwardingConstructor,
             (TAdd<FMovieScenePropertyBinding> *)&pTVar17->field_0x8,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)&pTVar17->field_0x28,
             (TAddConditional<FGuid> *)&pTVar17->field_0x40,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar17->field_0x58,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar17->field_0x70,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar17->field_0x88,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar17->field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_c18);
  local_aa8 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_9d8 = uVar3;
  if (local_ce8[5] == '\0') {
LAB_1465a26a8:
    local_bfe = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b00,L"Rotation.Z");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a26a8;
    local_bfe = 1;
  }
  local_bf8.Source = this->Rotation + 2;
  local_c00 = local_cd0;
  local_bf0 = true;
  local_9d0 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_9c8,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_aa0,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_aa0 + 0x20),&local_a68,
             &local_a50,&local_a38,&local_a20,&local_a08,&local_9f0,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_c00);
  local_9d0 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_8e8 = uVar3;
  if (local_ce8[6] == '\0') {
LAB_1465a2789:
    local_c76 = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b18,L"Scale.X");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a2789;
    local_c76 = 1;
  }
  pFVar9 = local_cc8;
  local_c68 = true;
  local_c78 = local_cc8->DoubleChannel[6];
  local_c70.Source = this->Scale;
  local_8e0 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_8d8,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_9c8,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_9c8 + 0x20),&local_990,
             &local_978,&local_960,&local_948,&local_930,&local_918,&local_900,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_c78);
  local_8e0 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_7e0 = uVar3;
  if (local_ce8[7] == '\0') {
LAB_1465a287d:
    local_c5e = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b10,L"Scale.Y");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a287d;
    local_c5e = 1;
  }
  local_c60 = pFVar9->DoubleChannel[7];
  local_c58.Source = this->Scale + 1;
  local_c50 = true;
  local_7d8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_7d0,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_8d8,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_8d8 + 0x20),&local_8a0,
             &local_888,&local_870,&local_858,&local_840,&local_828,&local_810,&local_7f8,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_c60);
  local_7d8 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_6c0 = uVar3;
  if (local_ce8[8] == '\0') {
LAB_1465a2979:
    local_c2e = 0;
  }
  else {
    pFVar16 = ::FName::FName(&local_b08,L"Scale.Z");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16), bVar10
       )) goto LAB_1465a2979;
    local_c2e = 1;
  }
  local_c30 = pFVar9->DoubleChannel[8];
  local_c28.Source = this->Scale + 2;
  local_c20 = true;
  local_6b8 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_6b0,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_7d0,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_7d0 + 0x20),&local_798,
             &local_780,&local_768,&local_750,&local_738,&local_720,&local_708,&local_6f0,&local_6d8
             ,(TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_c30);
  local_6b8 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623__MovieScene_UE__6B_
  ;
  local_588 = uVar3;
  if (((uVar4 >> 9 & 1) != 0) &&
     (((this->ManualWeight).Times.ArrayNum != 0 || ((this->ManualWeight).bHasDefaultValue == true)))
     ) {
    pFVar16 = ::FName::FName(&local_af8,L"Weight");
    pUVar5 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar5 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
       (bVar10 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar5,*pFVar16),
       !bVar10)) {
      local_c46 = 1;
      goto LAB_1465a2a9b;
    }
  }
  local_c46 = 0;
LAB_1465a2a9b:
  local_c48 = pFVar9->WeightChannel;
  local_c40.Source = &this->ManualWeight;
  local_c38 = true;
  local_580 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M___U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)local_578,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_6b0,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_6b0 + 0x20),&local_678,
             &local_660,&local_648,&local_630,&local_618,&local_600,&local_5e8,&local_5d0,&local_5b8
             ,&local_5a0,(TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_c48);
  local_580 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_328 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L__0M__0N___U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_34_U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U734_U734_U734_U734_U734_U734_U734_U734_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_UFAdd_34__MovieScene_UE__6B_
  ;
  local_cd4.ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)FVar21.Value;
  local_438 = uVar3;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            (&local_320,ForwardingConstructor,(TAdd<FMovieScenePropertyBinding> *)local_578,
             (TAddConditional<UObject_*_(__cdecl*)(UObject_*)> *)(local_578 + 0x20),&local_540,
             &local_528,&local_510,&local_4f8,&local_4e0,&local_4c8,&local_4b0,&local_498,&local_480
             ,&local_468,&local_450,&local_cd4);
  local_328 = &
              ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U623_U623_U623_U623_U623_U623_U623_U623_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_UFAdd_23__MovieScene_UE__6B_
  ;
  local_1d8 = uVar3;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
            (local_ca0,
             (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&local_328);
  return;
}

// BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_> @ 1465a2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>
          (UMovieScene3DTransformSection *this,TEntityBuilder<UE::MovieScene::FAdd> *param_1,
          UMovieSceneEntitySystemLinker *param_2,FEntityImportParams *param_3,
          FImportedEntity *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  UMovieSceneSectionChannelOverrideRegistry *pUVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  FEntityImportParams *pFVar7;
  bool bVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  char *pcVar12;
  FName *pFVar13;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  *pTVar14;
  int iVar15;
  FName FVar16;
  FComponentTypeID FVar17;
  char cVar18;
  undefined1 auStackY_7c8 [32];
  undefined1 local_758 [2];
  FAdd local_756;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_754;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_752;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_750;
  TEntityBuilder<UE::MovieScene::FAdd> *local_748;
  FBuiltInComponentTypes *local_740;
  FImportedEntity *local_738;
  undefined8 local_730;
  undefined8 local_728;
  FEntityImportParams *local_720;
  undefined **local_718;
  undefined2 local_710;
  ushort local_70e;
  undefined1 local_70c;
  undefined **local_708;
  undefined2 local_700;
  ushort local_6fe;
  undefined1 local_6fc;
  FChannelOverrideEntityImportParams local_6f8;
  FMovieSceneDoubleChannel *local_6e8;
  FChannelOverrideEntityImportParams local_6e0;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_6d0;
  undefined1 local_6ce;
  FSourceDoubleChannel local_6c8;
  bool local_6c0;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_6b8;
  undefined1 local_6b6;
  FSourceDoubleChannel local_6b0;
  bool local_6a8;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_6a0;
  undefined1 local_69e;
  FSourceFloatChannel local_698;
  bool local_690;
  undefined1 local_688 [24];
  FMovieSceneDoubleChannel *local_670;
  undefined1 local_668;
  undefined4 local_660;
  FMovieSceneDoubleChannel *local_658;
  undefined1 local_650;
  undefined4 local_648;
  FMovieSceneDoubleChannel *local_640;
  undefined1 local_638;
  undefined4 local_630;
  FMovieSceneDoubleChannel *local_628;
  undefined1 local_620;
  undefined4 local_618;
  FMovieSceneDoubleChannel *local_610;
  undefined1 local_608;
  undefined4 local_600;
  FMovieSceneDoubleChannel *local_5f8;
  undefined1 local_5f0;
  bool local_5e8;
  FName local_5e0;
  FName local_5d8;
  FName local_5d0;
  FName local_5c8;
  FName local_5c0;
  FName local_5b8;
  FName local_5b0;
  FName local_5a8;
  FName local_5a0;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_598;
  undefined1 uStack_596;
  undefined1 uStack_595;
  FName local_580;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_578;
  undefined1 uStack_576;
  undefined1 uStack_575;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_560;
  undefined1 uStack_55e;
  undefined1 uStack_55d;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_548;
  undefined1 uStack_546;
  undefined1 uStack_545;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_530;
  undefined2 uStack_52e;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> local_518;
  undefined1 uStack_516;
  undefined1 uStack_515;
  undefined **local_500;
  undefined1 local_4f8 [32];
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4d8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4c0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_4a8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_490;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_478;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_460;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_448;
  undefined1 local_430;
  undefined **local_428;
  undefined1 local_420 [32];
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_400;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_3e8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_3d0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_3b8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_3a0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_388;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_370;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_358;
  undefined1 local_340;
  undefined **local_338;
  undefined1 local_330 [32];
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_310;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_2f8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_2e0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_2c8;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_2b0;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_298;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_280;
  TAddConditional<UE::MovieScene::FSourceDoubleChannel> local_268;
  TAddConditional<UE::MovieScene::FSourceFloatChannel> local_250;
  undefined1 local_238;
  undefined **local_230;
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  local_228;
  undefined1 local_128;
  TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  local_120;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  local_738 = param_4;
  local_748 = param_1;
  local_720 = param_3;
  local_740 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar10 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar10);
  if ((pUVar11 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Track",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScene3DTransformSection.cpp"
                         ,0x1f9,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar10 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
  iVar15 = (int)pUVar10->_padding_;
  if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar15) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
      &pUVar10->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  pUVar10 = Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister();
  pFVar6 = local_740;
  iVar15 = (int)pUVar10->_padding_;
  if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar15) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
      &pUVar10->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FVar17.Value = (pFVar9->Transform).PropertyTag.Value;
  if (bVar8) {
    FVar17.Value = (pFVar9->ComponentTransform).PropertyTag.Value;
  }
  else if (bVar5) {
    FVar17.Value = (pFVar9->EulerTransform).PropertyTag.Value;
  }
  uVar2 = (this->TransformMask).Mask;
  if (((uVar2 & 1) == 0) ||
     ((this->Translation[0].Times.ArrayNum == 0 && (this->Translation[0].bHasDefaultValue != true)))
     ) {
    local_60[0] = '\0';
  }
  else {
    local_60[0] = '\x01';
  }
  if (((uVar2 >> 1 & 1) == 0) ||
     ((this->Translation[1].Times.ArrayNum == 0 && (this->Translation[1].bHasDefaultValue != true)))
     ) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  local_60[1] = cVar18;
  if (((uVar2 >> 2 & 1) == 0) ||
     ((this->Translation[2].Times.ArrayNum == 0 && (this->Translation[2].bHasDefaultValue != true)))
     ) {
    local_60[2] = '\0';
  }
  else {
    local_60[2] = '\x01';
  }
  if (((uVar2 >> 3 & 1) == 0) ||
     ((this->Rotation[0].Times.ArrayNum == 0 && (this->Rotation[0].bHasDefaultValue != true)))) {
    local_60[3] = '\0';
  }
  else {
    local_60[3] = '\x01';
  }
  if (((uVar2 >> 4 & 1) == 0) ||
     ((this->Rotation[1].Times.ArrayNum == 0 && (this->Rotation[1].bHasDefaultValue != true)))) {
    local_60[4] = '\0';
  }
  else {
    local_60[4] = '\x01';
  }
  if (((uVar2 >> 5 & 1) == 0) ||
     ((this->Rotation[2].Times.ArrayNum == 0 && (this->Rotation[2].bHasDefaultValue != true)))) {
    local_60[5] = '\0';
  }
  else {
    local_60[5] = '\x01';
  }
  if (((uVar2 >> 6 & 1) == 0) ||
     ((this->Scale[0].Times.ArrayNum == 0 && (this->Scale[0].bHasDefaultValue != true)))) {
    local_60[6] = '\0';
  }
  else {
    local_60[6] = '\x01';
  }
  if (((uVar2 >> 7 & 1) == 0) ||
     ((this->Scale[1].Times.ArrayNum == 0 && (this->Scale[1].bHasDefaultValue != true)))) {
    local_60[7] = '\0';
  }
  else {
    local_60[7] = '\x01';
  }
  if (((uVar2 >> 8 & 1) == 0) ||
     ((this->Scale[2].Times.ArrayNum == 0 && (this->Scale[2].bHasDefaultValue != true)))) {
    local_60[8] = '\0';
  }
  else {
    local_60[8] = '\x01';
  }
  pcVar12 = local_60;
  while (*pcVar12 == '\0') {
    pcVar12 = pcVar12 + 1;
    if (pcVar12 == local_60 + 9) {
      return;
    }
  }
  if (this->bUseQuaternionInterpolation == false) {
    local_754 = local_740->DoubleChannel[3];
    local_752 = local_740->DoubleChannel[4];
    local_750 = local_740->DoubleChannel[5];
  }
  else {
    local_754 = pFVar9->QuaternionRotationChannel[0];
    local_752 = pFVar9->QuaternionRotationChannel[1];
    local_750 = pFVar9->QuaternionRotationChannel[2];
  }
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
  iVar15 = local_720->EntityID - ChannelOverrideNames.IndexOffset;
  if ((iVar15 < 0) || (ChannelOverrideNames.ChannelNames.ArrayNum <= iVar15)) {
    local_728 = 0;
  }
  else {
    FVar16 = *(FName *)(ChannelOverrideNames.ChannelNames.AllocatorInstance.Data +
                       (longlong)iVar15 * 8);
  }
  local_730 = 0;
  if (FVar16 != (FName)0x0) {
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if (((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
        (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,FVar16), !bVar8))
       && (bVar8 = `UMovieScene3DTransformSection::
                   BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>'::__l28::
                   <lambda_1>::operator()(local_758), !bVar8)) {
      return;
    }
    pFVar7 = local_720;
    iVar15 = local_720->EntityID - ChannelOverrideNames.IndexOffset;
    if (iVar15 != 9) {
      if (local_60[iVar15] == '\0') {
        return;
      }
      local_700 = *(undefined2 *)&local_748->field_0x8;
      local_6fc = local_748->field_0xa;
      local_708 = &___7__TEntityBuilder_UFAdd_MovieScene_UE__U123__MovieScene_UE__6B_;
      local_6fe = FVar17.Value;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
                (local_738,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> *)&local_708);
      local_6e0.ResultComponent.Value = *(ushort *)(pFVar6->DoubleResult + iVar15);
      local_6e0.ChannelName = FVar16;
      UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
                ((this->OverrideRegistry).field0_0x0.DebugPtr,&local_6e0,pFVar7,local_738);
      return;
    }
    if ((uVar2 >> 9 & 1) == 0) {
      return;
    }
    local_710 = *(undefined2 *)&local_748->field_0x8;
    local_70c = local_748->field_0xa;
    local_718 = &___7__TEntityBuilder_UFAdd_MovieScene_UE__U123__MovieScene_UE__6B_;
    local_70e = FVar17.Value;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd>_>
              (local_738,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::FAdd> *)&local_718);
    local_6f8.ResultComponent.Value = *(ushort *)&pFVar6->WeightResult;
    local_6f8.ChannelName = FVar16;
    UMovieSceneSectionChannelOverrideRegistry::ImportEntityImpl
              ((this->OverrideRegistry).field0_0x0.DebugPtr,&local_6f8,pFVar7,local_738);
    return;
  }
  if (local_60[0] == '\0') {
LAB_1465a3122:
    uStack_596 = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5c8,L"Location.X");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a3122;
    uStack_596 = 1;
  }
  local_598 = pFVar6->DoubleChannel[0];
  local_758[0] = local_748->field_0xa;
  local_756.ComponentTypeID.Value = *(FComponentTypeID *)&local_748->field_0x8;
  if (cVar18 == '\0') {
LAB_1465a3182:
    uStack_516 = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5b8,L"Location.Y");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a3182;
    uStack_516 = 1;
  }
  local_518 = pFVar6->DoubleChannel[1];
  if (local_60[2] == '\0') {
LAB_1465a31d1:
    uStack_576 = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5b0,L"Location.Z");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a31d1;
    uStack_576 = 1;
  }
  local_578 = pFVar6->DoubleChannel[2];
  if (local_60[3] == '\0') {
LAB_1465a3227:
    uStack_55e = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5d8,L"Rotation.X");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a3227;
    uStack_55e = 1;
  }
  local_560 = local_754;
  if (local_60[4] == '\0') {
LAB_1465a327a:
    uStack_546 = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5a8,L"Rotation.Y");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a327a;
    uStack_546 = 1;
  }
  local_548 = local_752;
  if (local_60[5] == '\0') {
LAB_1465a32cd:
    uStack_52e._0_1_ = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5a0,L"Rotation.Z");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a32cd;
    uStack_52e._0_1_ = 1;
  }
  local_688._8_2_ = local_756.ComponentTypeID.Value;
  local_688._16_4_ = _local_598;
  local_670 = this->Translation;
  local_660 = _local_518;
  local_658 = this->Translation + 1;
  local_648 = _local_578;
  local_630 = _local_560;
  local_618 = _local_548;
  local_530 = local_750;
  local_600 = _local_530;
  local_5f8 = this->Rotation + 2;
  local_5e8 = (bool)local_758[0];
  local_688._0_8_ =
       &
       ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423__MovieScene_UE__6B_
  ;
  local_668 = 1;
  local_650 = 1;
  local_638 = 1;
  local_620 = 1;
  local_608 = 1;
  local_5f0 = 1;
  local_640 = this->Translation + 2;
  local_628 = this->Rotation;
  local_610 = this->Rotation + 1;
  if (local_60[6] == '\0') {
LAB_1465a33d7:
    bVar8 = false;
  }
  else {
    pFVar13 = ::FName::FName(&local_580,L"Scale.X");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a33d7;
    bVar8 = true;
  }
  local_6e8 = this->Scale;
  pTVar14 = UE::MovieScene::
            TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ::AddConditional<UE::MovieScene::FSourceDoubleChannel,FMovieSceneDoubleChannel_*>
                      ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5,6>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                        *)local_688,&local_120,pFVar6->DoubleChannel[6],&local_6e8,bVar8);
  if (local_60[7] == '\0') {
LAB_1465a343f:
    local_6ce = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5e0,L"Scale.Y");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a343f;
    local_6ce = 1;
  }
  pFVar6 = local_740;
  uVar1 = pTVar14->field_0xb8;
  local_6c0 = true;
  local_6d0 = local_740->DoubleChannel[7];
  local_6c8.Source = this->Scale + 1;
  local_500 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U534_U534_U534_U534__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_4f8,ForwardingConstructor,(FAdd *)&pTVar14->field_0x8,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x10,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x28,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x40,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x58,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x70,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0x88,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&pTVar14->field_0xa0,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_6d0);
  local_500 = &
              ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423_U423_U423__MovieScene_UE__6B_
  ;
  local_430 = uVar1;
  if (local_60[8] == '\0') {
LAB_1465a3521:
    local_6b6 = 0;
  }
  else {
    pFVar13 = ::FName::FName(&local_5c0,L"Scale.Z");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) &&
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), bVar8))
    goto LAB_1465a3521;
    local_6b6 = 1;
  }
  local_6b8 = pFVar6->DoubleChannel[8];
  local_6b0.Source = this->Scale + 2;
  local_6a8 = true;
  local_428 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U534_U534_U534_U534_U534__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_><UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
              *)local_420,ForwardingConstructor,(FAdd *)local_4f8,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)(local_4f8 + 8),&local_4d8,
             &local_4c0,&local_4a8,&local_490,&local_478,&local_460,&local_448,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)&local_6b8);
  local_428 = &
              ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423_U423_U423_U423__MovieScene_UE__6B_
  ;
  local_340 = uVar1;
  if (((uVar2 >> 9 & 1) != 0) &&
     (((this->ManualWeight).Times.ArrayNum != 0 || ((this->ManualWeight).bHasDefaultValue == true)))
     ) {
    pFVar13 = ::FName::FName(&local_5d0,L"Weight");
    pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
    if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
       (bVar8 = UMovieSceneSectionChannelOverrideRegistry::ContainsChannel(pUVar3,*pFVar13), !bVar8)
       ) {
      local_69e = 1;
      goto LAB_1465a362a;
    }
  }
  local_69e = 0;
LAB_1465a362a:
  local_6a0 = pFVar6->WeightChannel;
  local_698.Source = &this->ManualWeight;
  local_690 = true;
  local_338 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09__UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U534_U534_U534_U534_U534_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34__MovieScene_UE__6B_
  ;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_><UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
              *)local_330,ForwardingConstructor,(FAdd *)local_420,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)(local_420 + 8),&local_400,
             &local_3e8,&local_3d0,&local_3b8,&local_3a0,&local_388,&local_370,&local_358,
             (TAddConditional<UE::MovieScene::FSourceFloatChannel> *)&local_6a0);
  local_338 = &
              ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423_U423_U423_U423_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_230 = &
              ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08_09_0L___UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___34_U534_U534_U534_U534_U534_U534_U534_U534_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U234__MovieScene_UE__6B_
  ;
  local_756.ComponentTypeID.Value = (FComponentTypeID)(FComponentTypeID)FVar17.Value;
  local_238 = uVar1;
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd><UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            (&local_228,ForwardingConstructor,(FAdd *)local_330,
             (TAddConditional<UE::MovieScene::FSourceDoubleChannel> *)(local_330 + 8),&local_310,
             &local_2f8,&local_2e0,&local_2c8,&local_2b0,&local_298,&local_280,&local_268,&local_250
             ,&local_756);
  local_230 = &
              ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAddConditional_UFSourceDoubleChannel_MovieScene_UE___23_U423_U423_U423_U423_U423_U423_U423_U423_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U123__MovieScene_UE__6B_
  ;
  local_128 = uVar1;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
            (local_738,
             (TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&local_230);
  return;
}

// UMovieScene3DTransformSection @ 146619090

UMovieScene3DTransformSection * __thiscall
UMovieScene3DTransformSection::UMovieScene3DTransformSection
          (UMovieScene3DTransformSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  IMovieSceneConstrainedSection::IMovieSceneConstrainedSection
            ((IMovieSceneConstrainedSection *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConstrainedSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  (this->TransformMask).Mask = 0;
  this->Translation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0].PreInfinityExtrap = '\x04';
  this->Translation[0].PostInfinityExtrap = '\x04';
  this->Translation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Times.ArrayNum = 0;
  this->Translation[0].Times.ArrayMax = 0;
  this->Translation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Values.ArrayNum = 0;
  this->Translation[0].Values.ArrayMax = 0;
  this->Translation[0].DefaultValue = 0.0;
  this->Translation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[0].KeyHandles = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  this->Translation[0].TickResolution.Numerator = 60000;
  this->Translation[0].TickResolution.Denominator = 1;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[1].PreInfinityExtrap = '\x04';
  this->Translation[1].PostInfinityExtrap = '\x04';
  this->Translation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Times.ArrayNum = 0;
  this->Translation[1].Times.ArrayMax = 0;
  this->Translation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Values.ArrayNum = 0;
  this->Translation[1].Values.ArrayMax = 0;
  this->Translation[1].DefaultValue = 0.0;
  this->Translation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[1].KeyHandles = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  this->Translation[1].TickResolution.Numerator = 60000;
  this->Translation[1].TickResolution.Denominator = 1;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[2].PreInfinityExtrap = '\x04';
  this->Translation[2].PostInfinityExtrap = '\x04';
  this->Translation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Times.ArrayNum = 0;
  this->Translation[2].Times.ArrayMax = 0;
  this->Translation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Values.ArrayNum = 0;
  this->Translation[2].Values.ArrayMax = 0;
  this->Translation[2].DefaultValue = 0.0;
  this->Translation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[2].KeyHandles = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  this->Translation[2].TickResolution.Numerator = 60000;
  this->Translation[2].TickResolution.Denominator = 1;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  this->Rotation[2].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[0].PreInfinityExtrap = '\x04';
  this->Scale[0].PostInfinityExtrap = '\x04';
  this->Scale[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[0].Times.ArrayNum = 0;
  this->Scale[0].Times.ArrayMax = 0;
  this->Scale[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[0].Values.ArrayNum = 0;
  this->Scale[0].Values.ArrayMax = 0;
  this->Scale[0].DefaultValue = 0.0;
  this->Scale[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[0].KeyHandles = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x80 = 0;
  this->Scale[0].TickResolution.Numerator = 60000;
  this->Scale[0].TickResolution.Denominator = 1;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[1].PreInfinityExtrap = '\x04';
  this->Scale[1].PostInfinityExtrap = '\x04';
  this->Scale[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[1].Times.ArrayNum = 0;
  this->Scale[1].Times.ArrayMax = 0;
  this->Scale[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[1].Values.ArrayNum = 0;
  this->Scale[1].Values.ArrayMax = 0;
  this->Scale[1].DefaultValue = 0.0;
  this->Scale[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[1].KeyHandles = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x80 = 0;
  this->Scale[1].TickResolution.Numerator = 60000;
  this->Scale[1].TickResolution.Denominator = 1;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[2].PreInfinityExtrap = '\x04';
  this->Scale[2].PostInfinityExtrap = '\x04';
  this->Scale[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[2].Times.ArrayNum = 0;
  this->Scale[2].Times.ArrayMax = 0;
  this->Scale[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[2].Values.ArrayNum = 0;
  this->Scale[2].Values.ArrayMax = 0;
  this->Scale[2].DefaultValue = 0.0;
  this->Scale[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[2].KeyHandles = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x80 = 0;
  this->Scale[2].TickResolution.Numerator = 60000;
  this->Scale[2].TickResolution.Denominator = 1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->ManualWeight);
  (this->OverrideRegistry).field0_0x0.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  (this->Constraints).field0_0x0.DebugPtr = (UMovieScene3DTransformSectionConstraints *)0x0;
  return this;
}

// UMovieScene3DTransformSection @ 146619b70

UMovieScene3DTransformSection * __thiscall
UMovieScene3DTransformSection::UMovieScene3DTransformSection
          (UMovieScene3DTransformSection *this,FObjectInitializer *param_1)

{
  char cVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  IMovieSceneConstrainedSection::IMovieSceneConstrainedSection
            ((IMovieSceneConstrainedSection *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConstrainedSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  (this->TransformMask).Mask = 0;
  this->Translation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 0;
  this->Translation[0]._padding_ = 2;
  this->Translation[0].PreInfinityExtrap = '\x04';
  this->Translation[0].PostInfinityExtrap = '\x04';
  this->Translation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Times.ArrayNum = 0;
  this->Translation[0].Times.ArrayMax = 0;
  this->Translation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[0].Values.ArrayNum = 0;
  this->Translation[0].Values.ArrayMax = 0;
  this->Translation[0].DefaultValue = 0.0;
  this->Translation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[0].KeyHandles = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  this->Translation[0].TickResolution.Numerator = 60000;
  this->Translation[0].TickResolution.Denominator = 1;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 0;
  this->Translation[1]._padding_ = 2;
  this->Translation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[1].PreInfinityExtrap = '\x04';
  this->Translation[1].PostInfinityExtrap = '\x04';
  this->Translation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Times.ArrayNum = 0;
  this->Translation[1].Times.ArrayMax = 0;
  this->Translation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[1].Values.ArrayNum = 0;
  this->Translation[1].Values.ArrayMax = 0;
  this->Translation[1].DefaultValue = 0.0;
  this->Translation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[1].KeyHandles = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  this->Translation[1].TickResolution.Numerator = 60000;
  this->Translation[1].TickResolution.Denominator = 1;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 0;
  this->Translation[2]._padding_ = 2;
  this->Translation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Translation[2].PreInfinityExtrap = '\x04';
  this->Translation[2].PostInfinityExtrap = '\x04';
  this->Translation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Times.ArrayNum = 0;
  this->Translation[2].Times.ArrayMax = 0;
  this->Translation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Translation[2].Values.ArrayNum = 0;
  this->Translation[2].Values.ArrayMax = 0;
  this->Translation[2].DefaultValue = 0.0;
  this->Translation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Translation[2].KeyHandles = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Translation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  this->Translation[2].TickResolution.Numerator = 60000;
  this->Translation[2].TickResolution.Denominator = 1;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 0;
  this->Rotation[0]._padding_ = 2;
  this->Rotation[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[0].PreInfinityExtrap = '\x04';
  this->Rotation[0].PostInfinityExtrap = '\x04';
  this->Rotation[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Times.ArrayNum = 0;
  this->Rotation[0].Times.ArrayMax = 0;
  this->Rotation[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[0].Values.ArrayNum = 0;
  this->Rotation[0].Values.ArrayMax = 0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[0].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  this->Rotation[0].TickResolution.Numerator = 60000;
  this->Rotation[0].TickResolution.Denominator = 1;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 0;
  this->Rotation[1]._padding_ = 2;
  this->Rotation[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[1].PreInfinityExtrap = '\x04';
  this->Rotation[1].PostInfinityExtrap = '\x04';
  this->Rotation[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Times.ArrayNum = 0;
  this->Rotation[1].Times.ArrayMax = 0;
  this->Rotation[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[1].Values.ArrayNum = 0;
  this->Rotation[1].Values.ArrayMax = 0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[1].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  this->Rotation[1].TickResolution.Numerator = 60000;
  this->Rotation[1].TickResolution.Denominator = 1;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 0;
  this->Rotation[2]._padding_ = 2;
  this->Rotation[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Rotation[2].PreInfinityExtrap = '\x04';
  this->Rotation[2].PostInfinityExtrap = '\x04';
  this->Rotation[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Times.ArrayNum = 0;
  this->Rotation[2].Times.ArrayMax = 0;
  this->Rotation[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Rotation[2].Values.ArrayNum = 0;
  this->Rotation[2].Values.ArrayMax = 0;
  this->Rotation[2].DefaultValue = 0.0;
  this->Rotation[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Rotation[2].KeyHandles = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Rotation[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  this->Rotation[2].TickResolution.Numerator = 60000;
  this->Rotation[2].TickResolution.Denominator = 1;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 0;
  this->Scale[0]._padding_ = 2;
  this->Scale[0]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[0].PreInfinityExtrap = '\x04';
  this->Scale[0].PostInfinityExtrap = '\x04';
  this->Scale[0].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[0].Times.ArrayNum = 0;
  this->Scale[0].Times.ArrayMax = 0;
  this->Scale[0].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[0].Values.ArrayNum = 0;
  this->Scale[0].Values.ArrayMax = 0;
  this->Scale[0].DefaultValue = 0.0;
  this->Scale[0].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[0].KeyHandles = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[0].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x80 = 0;
  this->Scale[0].TickResolution.Numerator = 60000;
  this->Scale[0].TickResolution.Denominator = 1;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 0;
  this->Scale[1]._padding_ = 2;
  this->Scale[1]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[1].PreInfinityExtrap = '\x04';
  this->Scale[1].PostInfinityExtrap = '\x04';
  this->Scale[1].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[1].Times.ArrayNum = 0;
  this->Scale[1].Times.ArrayMax = 0;
  this->Scale[1].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[1].Values.ArrayNum = 0;
  this->Scale[1].Values.ArrayMax = 0;
  this->Scale[1].DefaultValue = 0.0;
  this->Scale[1].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[1].KeyHandles = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[1].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x80 = 0;
  this->Scale[1].TickResolution.Numerator = 60000;
  this->Scale[1].TickResolution.Denominator = 1;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 0;
  this->Scale[2]._padding_ = 2;
  this->Scale[2]._padding_ = (longlong)&___7FMovieSceneDoubleChannel__6B_;
  this->Scale[2].PreInfinityExtrap = '\x04';
  this->Scale[2].PostInfinityExtrap = '\x04';
  this->Scale[2].Times.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[2].Times.ArrayNum = 0;
  this->Scale[2].Times.ArrayMax = 0;
  this->Scale[2].Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Scale[2].Values.ArrayNum = 0;
  this->Scale[2].Values.ArrayMax = 0;
  this->Scale[2].DefaultValue = 0.0;
  this->Scale[2].bHasDefaultValue = false;
  *(undefined8 *)&this->Scale[2].KeyHandles = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x8 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x20 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x28 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x2c = 0x80;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x34 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x38 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x40 = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x58 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x60 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x64 = 0x80;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x68 = 0xffffffff;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x6c = 0;
  *(undefined8 *)&this->Scale[2].KeyHandles.field_0x78 = 0;
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x80 = 0;
  this->Scale[2].TickResolution.Numerator = 60000;
  this->Scale[2].TickResolution.Denominator = 1;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->ManualWeight);
  (this->OverrideRegistry).field0_0x0.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  (this->Constraints).field0_0x0.DebugPtr = (UMovieScene3DTransformSectionConstraints *)0x0;
  this->bUseQuaternionInterpolation = false;
  local_18 = FSequencerObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_18 = FSequencerObjectVersion::GUID;
    iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    cVar1 = (5 < iVar2) + '\x01';
  }
  *(char *)((longlong)&this->_padding_ + 1) = cVar1;
  *(undefined1 *)&this->_padding_ = 1;
  (this->TransformMask).Mask = 0x1ff;
  this->Scale[0].DefaultValue = 1.0;
  this->Scale[1].DefaultValue = 1.0;
  this->Scale[2].DefaultValue = 1.0;
  this->Translation[0].DefaultValue = 0.0;
  this->Translation[1].DefaultValue = 0.0;
  this->Translation[2].DefaultValue = 0.0;
  this->Rotation[0].DefaultValue = 0.0;
  this->Rotation[1].DefaultValue = 0.0;
  this->Rotation[2].DefaultValue = 0.0;
  *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  *(undefined1 *)&this->_padding_ = 1;
  this->Translation[0].bHasDefaultValue = true;
  this->Translation[1].bHasDefaultValue = true;
  this->Translation[2].bHasDefaultValue = true;
  this->Rotation[0].bHasDefaultValue = true;
  this->Rotation[1].bHasDefaultValue = true;
  this->Rotation[2].bHasDefaultValue = true;
  this->Scale[0].bHasDefaultValue = true;
  this->Scale[1].bHasDefaultValue = true;
  this->Scale[2].bHasDefaultValue = true;
  return this;
}

// ~UMovieScene3DTransformSection @ 146621500

void __thiscall
UMovieScene3DTransformSection::~UMovieScene3DTransformSection(UMovieScene3DTransformSection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneConstrainedSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOverrideProvider__;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->ManualWeight);
  *(undefined4 *)&this->Scale[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Scale[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Scale[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Scale[2].KeyHandles);
  pFVar2 = this->Scale[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Scale[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Scale + 2));
  *(undefined4 *)&this->Scale[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Scale[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Scale[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Scale[1].KeyHandles);
  pFVar2 = this->Scale[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Scale[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Scale + 1));
  *(undefined4 *)&this->Scale[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Scale[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Scale[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Scale[0].KeyHandles);
  pFVar2 = this->Scale[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Scale[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Scale);
  *(undefined4 *)&this->Rotation[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[2].KeyHandles)
  ;
  pFVar2 = this->Rotation[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 2));
  *(undefined4 *)&this->Rotation[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[1].KeyHandles)
  ;
  pFVar2 = this->Rotation[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Rotation + 1));
  *(undefined4 *)&this->Rotation[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Rotation[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Rotation[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->Rotation[0].KeyHandles)
  ;
  pFVar2 = this->Rotation[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Rotation[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Rotation);
  *(undefined4 *)&this->Translation[2].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[2].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[2].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[2].KeyHandles);
  pFVar2 = this->Translation[2].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[2].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Translation + 2));
  *(undefined4 *)&this->Translation[1].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[1].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[1].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[1].KeyHandles);
  pFVar2 = this->Translation[1].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[1].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)(this->Translation + 1));
  *(undefined4 *)&this->Translation[0].KeyHandles.field_0x80 = 0;
  pvVar1 = *(void **)&this->Translation[0].KeyHandles.field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Translation[0].KeyHandles.field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)
             &this->Translation[0].KeyHandles);
  pFVar2 = this->Translation[0].Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = this->Translation[0].Times.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this->Translation);
  this->_padding_ = (longlong)&___7IMovieSceneChannelOverrideProvider__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneConstrainedSection__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// AddConstraintChannel @ 1466380c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::AddConstraintChannel
          (UMovieScene3DTransformSection *this,UTickableConstraint *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong *plVar13;
  FMovieSceneBoolChannel *pFVar14;
  longlong lVar15;
  longlong lVar16;
  UMovieScene3DTransformSection *pUVar17;
  undefined1 auStack_258 [32];
  FMovieSceneBoolChannel *local_238;
  FMovieSceneBoolChannel *local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_208;
  FDestructionSentinel local_200;
  undefined1 local_1e8 [128];
  FMovieSceneBoolChannel local_168;
  UTickableConstraint *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_258;
  plVar1 = &this[-1].ManualWeight._padding_;
  if ((this->ManualWeight)._padding_ == 0) {
    local_208 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)plVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = UMovieScene3DTransformSectionConstraints::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1e8,pUVar10);
    local_1e8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_1e8._56_8_ = (UPackage *)0x0;
    local_1e8._16_4_ = 0;
    local_1e8._20_4_ = 0;
    local_1e8._24_4_ = RF_Transactional|RF_Public;
    local_1e8._40_8_ = (UObject *)0x0;
    local_1e8[0x20] = false;
    local_1e8._8_8_ = plVar1;
    pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
    if (local_1e8._64_8_ != 0) {
      plVar13 = (longlong *)(local_1e8 + 0x50);
      if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_1e8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    (this->ManualWeight)._padding_ = (longlong)pUVar11;
  }
  plVar13 = &(this->ManualWeight)._padding_;
  if ((param_1 != (UTickableConstraint *)0x0) &&
     (cVar6 = (**(code **)(this->_padding_ + 0x10))(this,&param_1->ConstraintID), cVar6 == '\0')) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)*plVar13,RF_Transactional);
    lVar4 = *plVar13;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_168);
    local_168._padding_ = (longlong)&___7FMovieSceneConstraintChannel__6B_;
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar14 = *(FMovieSceneBoolChannel **)(lVar4 + 0x28);
    if ((pFVar14 <= &local_168) &&
       (&local_168 <
        (FMovieSceneBoolChannel *)((longlong)pFVar14 + (longlong)*(int *)(lVar4 + 0x34) * 0x128))) {
      local_220 = (longlong)*(int *)(lVar4 + 0x30);
      local_218 = 0x128;
      local_238 = &local_168;
      local_230 = pFVar14;
      local_228 = (longlong)*(int *)(lVar4 + 0x34);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = *(uint *)(lVar4 + 0x30);
    if (uVar9 == *(uint *)(lVar4 + 0x34)) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x128,8,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
    }
    *(uint *)(lVar4 + 0x30) = uVar9 + 1;
    lVar16 = (longlong)(int)uVar9 * 0x128;
    pFVar14 = (FMovieSceneBoolChannel *)(*(longlong *)(lVar4 + 0x28) + lVar16);
    FMovieSceneBoolChannel::FMovieSceneBoolChannel(pFVar14,&local_168);
    pFVar14->_padding_ = (longlong)&___7FMovieSceneConstraintChannel__6B_;
    pFVar14[1]._padding_ = (longlong)local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48 != (UTickableConstraint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    FMovieSceneBoolChannel::~FMovieSceneBoolChannel(&local_168);
    lVar4 = (this->ManualWeight)._padding_;
    iVar3 = *(int *)(lVar4 + 0x30);
    uVar12 = 0;
    if ((int)uVar9 < iVar3) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (local_238 = (FMovieSceneBoolChannel *)(longlong)(int)uVar9,
       local_230 = (FMovieSceneBoolChannel *)(longlong)iVar3,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x28);
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,plVar1,0x10);
    (**(code **)(this[-1].ManualWeight._padding_ + 0x3a0))(plVar1);
    plVar1 = &this->_padding_;
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar1);
    if (bVar7) {
      pUVar17 = this;
      if (this == (UMovieScene3DTransformSection *)&DAT_00000110) {
        pUVar17 = (UMovieScene3DTransformSection *)0x0;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)plVar1,
                 (FWriteAccessScope *)&local_200);
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *piVar2 = *piVar2 + 1;
      bVar7 = false;
      uVar9 = (int)this->_padding_ - 1;
      if (-1 < (int)uVar9) {
        pFVar14 = (FMovieSceneBoolChannel *)(longlong)(int)uVar9;
        lVar15 = (longlong)pFVar14 << 4;
        bVar7 = false;
        do {
          iVar3 = (int)this->_padding_;
          uVar12 = 0;
          if ((int)uVar9 < iVar3) {
            uVar12 = ~uVar9 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (local_238 = pFVar14, local_230 = (FMovieSceneBoolChannel *)(longlong)iVar3,
             bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(this->_padding_ + 8 + lVar15) == 0) ||
              (plVar13 = *(longlong **)(this->_padding_ + lVar15), plVar13 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar13 + 0x68))(plVar13,pUVar17,lVar16 + lVar4), cVar6 == '\0')
             ) {
            bVar7 = true;
          }
          pFVar14 = (FMovieSceneBoolChannel *)&pFVar14[-1].KeyHandles.field_0x87;
          lVar15 = lVar15 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *piVar2 = *piVar2 + -1;
      if (bVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)plVar1,false);
      }
      if (local_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
      }
    }
  }
  return;
}

// CacheChannelProxy @ 146640d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EMovieSceneChannelProxyType __thiscall
UMovieScene3DTransformSection::CacheChannelProxy(UMovieScene3DTransformSection *this)

{
  int iVar1;
  UMovieScene3DTransformSectionConstraints *pUVar2;
  UMovieSceneSectionChannelOverrideRegistry *pUVar3;
  FName FVar4;
  FName *pFVar5;
  UMovieSceneChannelOverrideContainer *pUVar6;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar7;
  ForElementType<FMovieSceneChannelEntry> FVar8;
  FMovieSceneConstraintChannel *pFVar9;
  FMovieSceneConstraintChannel *pFVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TSharedRef<FMovieSceneChannelProxy,1> local_70;
  FMovieSceneChannelProxy *local_60;
  FSharedReferencer<1> local_58;
  FMovieSceneChannelProxyData local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar2 = (this->Constraints).field0_0x0.DebugPtr;
  local_50.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_50.Entries.ArrayNum = 0;
  local_50.Entries.ArrayMax = 1;
  if (pUVar2 != (UMovieScene3DTransformSectionConstraints *)0x0) {
    pFVar9 = (FMovieSceneConstraintChannel *)(pUVar2->ConstraintsChannels).AllocatorInstance.Data;
    iVar1 = (pUVar2->ConstraintsChannels).ArrayNum;
    pFVar10 = (FMovieSceneConstraintChannel *)((longlong)pFVar9 + (longlong)iVar1 * 0x128);
    while( true ) {
      if ((pUVar2->ConstraintsChannels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_78);
      }
      if (pFVar9 == pFVar10) break;
      FMovieSceneChannelProxyData::AddInternal<FMovieSceneConstraintChannel>(&local_50,pFVar9);
      pFVar9 = (FMovieSceneConstraintChannel *)&pFVar9[1].field_0x8;
    }
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Location.X");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Translation);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Location.Y");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
              (&local_50,this->Translation + 1);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Location.Z");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>
              (&local_50,this->Translation + 2);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Rotation.X");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Rotation);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Rotation.Y");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Rotation + 1)
    ;
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Rotation.Z");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Rotation + 2)
    ;
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Scale.X");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Scale);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Scale.Y");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Scale + 1);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Scale.Z");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(&local_50,this->Scale + 2);
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pFVar5 = ::FName::FName((FName *)&local_70,L"Weight");
  pUVar3 = (this->OverrideRegistry).field0_0x0.DebugPtr;
  FVar4 = *pFVar5;
  if ((pUVar3 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) ||
     (pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(pUVar3,FVar4),
     pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0)) {
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_50,&this->ManualWeight)
    ;
  }
  else {
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,FVar4,&local_50);
  }
  pTVar7 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>(&local_70,&local_50);
  local_58.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_60 = pTVar7->Object;
  if (local_58.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_58.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->_padding_ != &local_60) {
    this->_padding_ = (longlong)local_60;
    local_60 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  FVar8 = (ForElementType<FMovieSceneChannelEntry>)&local_50;
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar8 = local_50.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar8,local_50.Entries.ArrayNum);
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_50.Entries.AllocatorInstance.SecondaryData);
  }
  return Dynamic;
}

// GetChannelOverrideEntityID @ 1466895c0

int __thiscall
`UMovieScene3DTransformSection::GetChannelOverrideProviderTraits'::__l2::
F3DTransformChannelOverrideProviderTraits::GetChannelOverrideEntityID(void *this,FName param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  
  FVar2.Data = UMovieScene3DTransformSection::ChannelOverrideNames.ChannelNames.AllocatorInstance.
               Data;
  while( true ) {
    if ((FName *)FVar2.Data ==
        (FName *)(UMovieScene3DTransformSection::ChannelOverrideNames.ChannelNames.AllocatorInstance
                  .Data + (longlong)
                          UMovieScene3DTransformSection::ChannelOverrideNames.ChannelNames.ArrayNum
                          * 8)) {
      return -1;
    }
    if (*(FName *)FVar2.Data == param_1) break;
    FVar2.Data = FVar2.Data + 8;
  }
  iVar1 = (int)((longlong)FVar2.Data -
                (longlong)
                UMovieScene3DTransformSection::ChannelOverrideNames.ChannelNames.AllocatorInstance.
                Data >> 3);
  if (iVar1 == -1) {
    return -1;
  }
  return iVar1 + UMovieScene3DTransformSection::ChannelOverrideNames.IndexOffset;
}

// GetChannelOverrideName @ 146689610

FName __thiscall
`UMovieScene3DTransformSection::GetChannelOverrideProviderTraits'::__l2::
F3DTransformChannelOverrideProviderTraits::GetChannelOverrideName(void *this,int param_1)

{
  FName FVar1;
  uint in_register_00000014;
  
  FVar1.Number = in_register_00000014;
  FVar1.ComparisonIndex.Value = param_1;
  UE::MovieScene::FChannelOverrideNames::GetChannelName
            (&UMovieScene3DTransformSection::ChannelOverrideNames,param_1);
  return FVar1;
}

// GetChannelOverrideProviderTraits @ 146689640

TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> * __thiscall
UMovieScene3DTransformSection::GetChannelOverrideProviderTraits
          (UMovieScene3DTransformSection *this,
          TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *pTVar4;
  TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *pTVar5;
  
  __return_storage_ptr__->bIsValid = true;
  __return_storage_ptr__->bInline = true;
  *(undefined ***)(__return_storage_ptr__->Data).Pad =
       &`UMovieScene3DTransformSection::GetChannelOverrideProviderTraits'::`2'::
        F3DTransformChannelOverrideProviderTraits::_vftable_;
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar4 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar4 = *(TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar5 = *(TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> **)
              (__return_storage_ptr__->Data).Pad;
  }
  if (pTVar4 != pTVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TInlineValue<UE::MovieScene::FChannelOverrideProviderTraits,64,8> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetChannelOverrideRegistry @ 146689710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSectionChannelOverrideRegistry * __thiscall
UMovieScene3DTransformSection::GetChannelOverrideRegistry
          (UMovieScene3DTransformSection *this,bool param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  UMovieSceneSectionChannelOverrideRegistry *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1) {
    puVar1 = &this[-1].Scale[2].KeyHandles.field_0x80;
    if (*(longlong *)&this->Scale[2].KeyHandles.field_0x68 == 0) {
      local_a8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)puVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar2);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._16_4_ = 0;
      local_98._20_4_ = 0;
      local_98._24_4_ = RF_Transactional;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = puVar1;
      pUVar3 = (UMovieSceneSectionChannelOverrideRegistry *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar4 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMovieSceneSectionChannelOverrideRegistry *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      *(UMovieSceneSectionChannelOverrideRegistry **)&this->Scale[2].KeyHandles.field_0x68 = pUVar3;
    }
    else {
      pUVar3 = *(UMovieSceneSectionChannelOverrideRegistry **)&this->Scale[2].KeyHandles.field_0x68;
    }
  }
  else {
    pUVar3 = *(UMovieSceneSectionChannelOverrideRegistry **)&this->Scale[2].KeyHandles.field_0x68;
  }
  return pUVar3;
}

// GetConstraintChannel @ 1466899c0

FConstraintAndActiveChannel * __thiscall
UMovieScene3DTransformSection::GetConstraintChannel
          (UMovieScene3DTransformSection *this,FGuid *param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  FConstraintAndActiveChannel *pFVar11;
  uint uVar12;
  longlong lVar13;
  int local_38;
  int iStack_34;
  int iStack_2c;
  
  lVar13 = (this->ManualWeight)._padding_;
  if (lVar13 == 0) {
    return (FConstraintAndActiveChannel *)0x0;
  }
  uVar6 = param_1->A;
  uVar7 = param_1->B;
  uVar8 = param_1->C;
  uVar9 = param_1->D;
  lVar2 = *(longlong *)(lVar13 + 0x28);
  iVar1 = *(int *)(lVar13 + 0x30);
  lVar13 = lVar2;
  do {
    if (lVar13 == (longlong)iVar1 * 0x128 + lVar2) {
      return (FConstraintAndActiveChannel *)0x0;
    }
    pUVar3 = *(UObject **)(lVar13 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_146689a64;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_146689a64:
      pUVar3 = *(UObject **)(lVar13 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      if (((uVar9 == *(int *)&pUVar3[1].field_0x10 && uVar8 == *(int *)&pUVar3[1].field_0xc) &&
          uVar7 == *(int *)&pUVar3[1].field_0x8) && uVar6 == *(int *)&pUVar3[1].field_0x4) {
        uVar5 = (uint)((lVar13 - lVar2) / 0x128);
        if (uVar5 == 0xffffffff) {
          return (FConstraintAndActiveChannel *)0x0;
        }
        lVar13 = (this->ManualWeight)._padding_;
        uVar12 = 0;
        if ((int)uVar5 < *(int *)(lVar13 + 0x30)) {
          uVar12 = ~uVar5 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FConstraintAndActiveChannel *)(*pcVar4)();
          return pFVar11;
        }
        return (FConstraintAndActiveChannel *)
               ((longlong)(int)uVar5 * 0x128 + *(longlong *)(lVar13 + 0x28));
      }
    }
    lVar13 = lVar13 + 0x128;
  } while( true );
}

// GetConstraintsChannels @ 146689b80

TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> * __thiscall
UMovieScene3DTransformSection::GetConstraintsChannels(UMovieScene3DTransformSection *this)

{
  longlong lVar1;
  TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UMovieScene3DTransformSection::GetConstraintsChannels'::__l2::
             _dynamic_atexit_destructor_for__EmptyChannels__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  lVar1 = (this->ManualWeight)._padding_;
  pTVar2 = &EmptyChannels;
  if (lVar1 != 0) {
    pTVar2 = (TArray<FConstraintAndActiveChannel,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x28);
  }
  return pTVar2;
}

// GetDefaultChannelTypeName @ 146689d40

FName __thiscall
`UMovieScene3DTransformSection::GetChannelOverrideProviderTraits'::__l2::
F3DTransformChannelOverrideProviderTraits::GetDefaultChannelTypeName(void *this,FName param_1)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FName in_R8;
  
  bVar1 = ::FName::Equals(in_R8,L"Weight");
  if (bVar1) {
    pUVar2 = FMovieSceneFloatChannel::StaticStruct();
    *(longlong *)param_1 = pUVar2->_padding_;
    return param_1;
  }
  pUVar2 = FMovieSceneDoubleChannel::StaticStruct();
  *(longlong *)param_1 = pUVar2->_padding_;
  return param_1;
}

// GetKeyStruct @ 14668a580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TSharedPtr<FStructOnScope,1> * __thiscall
UMovieScene3DTransformSection::GetKeyStruct
          (UMovieScene3DTransformSection *this,TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  longlong *this_00;
  atomic<int> aVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneChannel *pFVar6;
  FMovieSceneDoubleChannel *pFVar7;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> *pTVar8;
  FStructOnScope *pFVar9;
  UPackage *pUVar10;
  TTuple<FKeyHandle,FFrameNumber> TVar11;
  longlong lVar12;
  TSharedPtr<FStructOnScope,1> *pTVar13;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *pTVar14;
  FMovieSceneChannelValueHelper *pFVar15;
  TOptional<FFrameNumber> TVar16;
  FMovieSceneChannelProxy *pFVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined1 auStack_c38 [32];
  char local_c18;
  char local_c17;
  char local_c16;
  char local_c15;
  char local_c14;
  char local_c13;
  char local_c12;
  char local_c11;
  TSharedPtr<FStructOnScope,1> *local_c10;
  TRawPtrProxy<FStructOnScope> local_c08;
  TTuple<FKeyHandle,FFrameNumber> local_c00;
  TTuple<FKeyHandle,FFrameNumber> local_bf8;
  TTuple<FKeyHandle,FFrameNumber> local_bf0;
  TTuple<FKeyHandle,FFrameNumber> local_be8;
  TTuple<FKeyHandle,FFrameNumber> local_be0;
  TTuple<FKeyHandle,FFrameNumber> local_bd8;
  TTuple<FKeyHandle,FFrameNumber> local_bd0;
  TTuple<FKeyHandle,FFrameNumber> local_bc8;
  FMovieSceneChannelHandle local_bc0;
  FMovieSceneChannelHandle local_ba0;
  FMovieSceneChannelHandle local_b80;
  FMovieSceneChannelHandle local_b60;
  FMovieSceneChannelHandle local_b40;
  FMovieSceneChannelHandle local_b20;
  FMovieSceneChannelHandle local_b00;
  FMovieSceneChannelHandle local_ae0;
  FMovieSceneChannelHandle local_ac0;
  TRawPtrProxy<FStructOnScope> local_aa0;
  TRawPtrProxy<FStructOnScope> local_a98;
  TRawPtrProxy<FStructOnScope> local_a90;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a88;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a78;
  TSharedRef<FStructOnScope,1> local_a68;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a58;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a48;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a38;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a28;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a18;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a08;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9f8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9e8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9d8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9c8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9b8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_9a8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_998;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_988;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_978;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_968;
  TSharedRef<FStructOnScope,1> local_958;
  TSharedRef<FStructOnScope,1> local_948;
  TSharedRef<FStructOnScope,1> local_938 [3];
  TArrayView<FKeyHandle_const_,int> local_908;
  TArrayView<FKeyHandle_const_,int> local_8f8;
  TArrayView<FKeyHandle_const_,int> local_8e8;
  TArrayView<FKeyHandle_const_,int> local_8d8;
  TArrayView<FKeyHandle_const_,int> local_8c8;
  TArrayView<FKeyHandle_const_,int> local_8b8;
  TArrayView<FKeyHandle_const_,int> local_8a8;
  TArrayView<FKeyHandle_const_,int> local_898;
  TArrayView<FKeyHandle_const_,int> local_888;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_878;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_86c;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_860;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_854;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_848;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_83c;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_830;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_824;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_818;
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [32];
  undefined1 local_728 [32];
  undefined1 local_708 [32];
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [32];
  undefined1 local_688 [32];
  undefined1 local_668 [32];
  undefined1 local_648 [32];
  undefined1 local_628 [32];
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  FMovieSceneChannelValueHelper *local_5c8 [8];
  byte local_588;
  FMovieSceneChannelValueHelper *local_580 [8];
  byte local_540;
  FMovieSceneChannelValueHelper *local_538 [8];
  byte local_4f8;
  FMovieSceneChannelValueHelper *local_4f0 [8];
  byte local_4b0;
  FMovieSceneChannelValueHelper *local_4a8 [8];
  byte local_468;
  FMovieSceneChannelValueHelper *local_460 [8];
  byte local_420;
  FMovieSceneChannelValueHelper *local_418 [8];
  byte local_3d8;
  FMovieSceneChannelValueHelper *local_3d0 [8];
  byte local_390;
  FMovieSceneChannelValueHelper *local_388 [8];
  byte local_348;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> local_340;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> local_2f8;
  TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8> local_2b0;
  FMovieSceneChannelValueHelper local_268;
  FMovieSceneChannelValueHelper local_220;
  FMovieSceneChannelValueHelper local_1d8;
  FMovieSceneChannelValueHelper local_190;
  FMovieSceneChannelValueHelper local_148;
  FMovieSceneChannelValueHelper local_100;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_b8;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_ac;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_a0;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_90;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_84;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_78;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_68;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_5c;
  TOptional<TTuple<FKeyHandle,FFrameNumber>_> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c38;
  this_00 = &this->_padding_;
  local_c10 = __return_storage_ptr__;
  if (*this_00 == 0) {
    UMovieSceneSection::GetChannelProxy((UMovieSceneSection *)this);
  }
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_b80);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_b60);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_b40);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_b00);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_b20);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_ae0);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_bc0);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_ba0);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle(&local_ac0);
  TVar11 = (TTuple<FKeyHandle,FFrameNumber>)0x0;
  iVar18 = 0;
  iVar22 = 0;
  uVar21 = 0;
  local_c18 = '\0';
  local_c17 = '\0';
  uVar20 = 0;
  bVar5 = false;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_b80);
  iVar19 = iVar22;
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_b80);
    local_888.DataPtr = param_1->DataPtr;
    local_888.ArrayNum = param_1->ArrayNum;
    local_888._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_878,pFVar7,&local_888);
    if ((pTVar8 == &local_b8) || (pTVar8->bIsSet == false)) {
      iVar19 = 1;
    }
    else {
      local_b8.TypedValue = pTVar8->TypedValue;
      bVar5 = true;
      iVar19 = 1;
    }
  }
  local_c08.Object = (FStructOnScope *)local_b8.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_b60);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_b60);
    local_898.DataPtr = param_1->DataPtr;
    local_898.ArrayNum = param_1->ArrayNum;
    local_898._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_86c,pFVar7,&local_898);
    if ((pTVar8 == &local_ac) || (pTVar8->bIsSet == false)) {
      iVar19 = iVar19 + 1;
    }
    else {
      local_ac.TypedValue = pTVar8->TypedValue;
      iVar19 = iVar19 + 1;
      local_c18 = '\x01';
    }
  }
  local_c00 = local_ac.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_b40);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_b40);
    local_908.DataPtr = param_1->DataPtr;
    local_908.ArrayNum = param_1->ArrayNum;
    local_908._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_860,pFVar7,&local_908);
    if ((pTVar8 == &local_a0) || (pTVar8->bIsSet == false)) {
      iVar19 = iVar19 + 1;
    }
    else {
      local_a0.TypedValue = pTVar8->TypedValue;
      iVar19 = iVar19 + 1;
      local_c17 = '\x01';
    }
  }
  local_c16 = '\0';
  local_c15 = '\0';
  local_c14 = '\0';
  local_bf8 = local_a0.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_b00);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_b00);
    local_8f8.DataPtr = param_1->DataPtr;
    local_8f8.ArrayNum = param_1->ArrayNum;
    local_8f8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_854,pFVar7,&local_8f8);
    if ((pTVar8 == &local_90) || (pTVar8->bIsSet == false)) {
      iVar18 = 1;
    }
    else {
      local_90.TypedValue = pTVar8->TypedValue;
      iVar18 = 1;
      local_c16 = '\x01';
    }
  }
  local_bf0 = local_90.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_b20);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_b20);
    local_8e8.DataPtr = param_1->DataPtr;
    local_8e8.ArrayNum = param_1->ArrayNum;
    local_8e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_818,pFVar7,&local_8e8);
    if ((pTVar8 == &local_84) || (pTVar8->bIsSet == false)) {
      iVar18 = iVar18 + 1;
    }
    else {
      local_84.TypedValue = pTVar8->TypedValue;
      iVar18 = iVar18 + 1;
      local_c15 = '\x01';
    }
  }
  local_be8 = local_84.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_ae0);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_ae0);
    local_8d8.DataPtr = param_1->DataPtr;
    local_8d8.ArrayNum = param_1->ArrayNum;
    local_8d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_824,pFVar7,&local_8d8);
    if ((pTVar8 == &local_78) || (pTVar8->bIsSet == false)) {
      iVar18 = iVar18 + 1;
    }
    else {
      local_78.TypedValue = pTVar8->TypedValue;
      iVar18 = iVar18 + 1;
      local_c14 = '\x01';
    }
  }
  local_c13 = '\0';
  local_c12 = '\0';
  local_c11 = '\0';
  local_be0 = local_78.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_bc0);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_bc0);
    local_8c8.DataPtr = param_1->DataPtr;
    local_8c8.ArrayNum = param_1->ArrayNum;
    local_8c8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_830,pFVar7,&local_8c8);
    if ((pTVar8 == &local_68) || (pTVar8->bIsSet == false)) {
      iVar22 = 1;
    }
    else {
      local_68.TypedValue = pTVar8->TypedValue;
      iVar22 = 1;
      local_c13 = '\x01';
    }
  }
  local_bd8 = local_68.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_ba0);
  if (pFVar6 != (FMovieSceneChannel *)0x0) {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_ba0);
    local_8b8.DataPtr = param_1->DataPtr;
    local_8b8.ArrayNum = param_1->ArrayNum;
    local_8b8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_83c,pFVar7,&local_8b8);
    if ((pTVar8 == &local_5c) || (pTVar8->bIsSet == false)) {
      iVar22 = iVar22 + 1;
    }
    else {
      local_5c.TypedValue = pTVar8->TypedValue;
      iVar22 = iVar22 + 1;
      local_c12 = '\x01';
    }
  }
  local_bd0 = local_5c.TypedValue;
  pFVar6 = FMovieSceneChannelHandle::Get(&local_ac0);
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    local_bc8 = local_50.TypedValue;
  }
  else {
    pFVar7 = (FMovieSceneDoubleChannel *)FMovieSceneChannelHandle::Get(&local_ac0);
    local_8a8.DataPtr = param_1->DataPtr;
    local_8a8.ArrayNum = param_1->ArrayNum;
    local_8a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    pTVar8 = FMovieSceneChannelValueHelper::FindFirstKey<FMovieSceneDoubleChannel>
                       (&local_848,pFVar7,&local_8a8);
    if ((pTVar8 == &local_50) || (pTVar8->bIsSet == false)) {
      iVar22 = iVar22 + 1;
      local_bc8 = local_50.TypedValue;
    }
    else {
      local_bc8 = pTVar8->TypedValue;
      iVar22 = iVar22 + 1;
      local_c11 = '\x01';
    }
  }
  if ((uint)(iVar22 + iVar18 + iVar19) < 2) {
    if (iVar19 == 0) {
      uVar21 = uVar20;
      if (iVar18 == 0) {
        if (iVar22 == 0) {
          local_c10->Object = (FStructOnScope *)0x0;
          (local_c10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
          ;
          if (local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar2 = &(local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                      WeakReferenceCount;
            aVar3 = *paVar2;
            *paVar2 = (atomic<int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)((local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
            }
          }
          if (local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController ==
              (TReferenceControllerBase<1> *)0x0) {
            return local_c10;
          }
          LOCK();
          paVar2 = &(local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 != (atomic<int>)0x1) {
            return local_c10;
          }
          (**(code **)((local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                       _padding_ + 8))
                    (local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
          return local_c10;
        }
        pFVar9 = ::operator_new(0x28);
        if (pFVar9 != (FStructOnScope *)0x0) {
          if (Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar10 = Z_Construct_UPackage__Script_MovieSceneTracks();
            Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct,
                                 (UObject *)pUVar10,L"MovieScene3DScaleKeyStruct");
          }
          TVar11 = (TTuple<FKeyHandle,FFrameNumber>)
                   FStructOnScope::FStructOnScope
                             (pFVar9,(UStruct *)
                                     Z_Registration_Info_UScriptStruct_FMovieScene3DScaleKeyStruct.
                                     OuterSingleton);
        }
        local_a90.Object = (FStructOnScope *)TVar11;
        TSharedRef<FStructOnScope,1>::TSharedRef<FStructOnScope,1><FStructOnScope>
                  (&local_958,&local_a90);
        lVar12 = (**(code **)((local_958.Object)->_padding_ + 0x18))(local_958.Object);
        if (local_c13 != '\0') {
          local_a88.bIsSet = (bool)local_c13;
          local_a88.TypedValue = local_bd8;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_bc0);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_628,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_190,pTVar14,(double *)(lVar12 + 8),&local_a88);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_190);
          if ((longlong *)local_628._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_628._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_628._8_8_ + 8))(local_628._8_8_,1);
            }
          }
        }
        if (local_c12 != '\0') {
          local_a78.bIsSet = (bool)local_c12;
          local_a78.TypedValue = local_bd0;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ba0);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_608,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_148,pTVar14,(double *)(lVar12 + 0x10),&local_a78);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_148);
          if ((longlong *)local_608._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_608._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_608._8_8_ + 8))(local_608._8_8_,1);
            }
          }
        }
        if (local_c11 != '\0') {
          local_a58.bIsSet = (bool)local_c11;
          local_a58.TypedValue = local_bc8;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ac0);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_5e8,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_100,pTVar14,(double *)(lVar12 + 0x18),&local_a58);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_100);
          if ((longlong *)local_5e8._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_5e8._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_5e8._8_8_ + 8))(local_5e8._8_8_,1);
            }
          }
        }
        FMovieSceneKeyStructHelper::SetStartingValues((FMovieSceneKeyStructHelper *)(lVar12 + 0x28))
        ;
        TVar16 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime
                           ((FMovieSceneKeyStructHelper *)(lVar12 + 0x28));
        local_948.SharedReferenceCount.ReferenceController =
             local_958.SharedReferenceCount.ReferenceController;
        local_948.Object = local_958.Object;
        if (*(char *)((longlong)TVar16 + 4) != '\0') {
          uVar21 = *(undefined4 *)TVar16;
        }
      }
      else {
        pFVar9 = ::operator_new(0x28);
        if (pFVar9 != (FStructOnScope *)0x0) {
          if (Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar10 = Z_Construct_UPackage__Script_MovieSceneTracks();
            Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct,
                                 (UObject *)pUVar10,L"MovieScene3DRotationKeyStruct");
          }
          TVar11 = (TTuple<FKeyHandle,FFrameNumber>)
                   FStructOnScope::FStructOnScope
                             (pFVar9,(UStruct *)
                                     Z_Registration_Info_UScriptStruct_FMovieScene3DRotationKeyStruct
                                     .OuterSingleton);
        }
        local_c08.Object = (FStructOnScope *)TVar11;
        TSharedRef<FStructOnScope,1>::TSharedRef<FStructOnScope,1><FStructOnScope>
                  (&local_948,&local_c08);
        lVar12 = (**(code **)((local_948.Object)->_padding_ + 0x18))(local_948.Object);
        if (local_c16 != '\0') {
          local_988.bIsSet = (bool)local_c16;
          local_988.TypedValue = local_bf0;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b00);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_688,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_268,pTVar14,(double *)(lVar12 + 0x18),&local_988);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_268);
          if ((longlong *)local_688._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_688._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_688._8_8_ + 8))(local_688._8_8_,1);
            }
          }
        }
        if (local_c15 != '\0') {
          local_978.bIsSet = (bool)local_c15;
          local_978.TypedValue = local_be8;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b20);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_668,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_220,pTVar14,(double *)(lVar12 + 8),&local_978);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_220);
          if ((longlong *)local_668._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_668._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_668._8_8_ + 8))(local_668._8_8_,1);
            }
          }
        }
        if (local_c14 != '\0') {
          local_968.bIsSet = (bool)local_c14;
          local_968.TypedValue = local_be0;
          pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                              ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
          iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ae0);
          pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                              (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)
                                       local_648,iVar19);
          pFVar15 = FMovieSceneChannelValueHelper::
                    FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                              (&local_1d8,pTVar14,(double *)(lVar12 + 0x10),&local_968);
          FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
          FMovieSceneChannelValueHelper::~FMovieSceneChannelValueHelper(&local_1d8);
          if ((longlong *)local_648._8_8_ != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)(local_648._8_8_ + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)local_648._8_8_ + 8))(local_648._8_8_,1);
            }
          }
        }
        FMovieSceneKeyStructHelper::SetStartingValues((FMovieSceneKeyStructHelper *)(lVar12 + 0x28))
        ;
        TVar16 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime
                           ((FMovieSceneKeyStructHelper *)(lVar12 + 0x28));
        if (*(char *)((longlong)TVar16 + 4) != '\0') {
          uVar21 = *(undefined4 *)TVar16;
        }
      }
    }
    else {
      pFVar9 = ::operator_new(0x28);
      if (pFVar9 != (FStructOnScope *)0x0) {
        if (Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_MovieSceneTracks();
          Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct,
                               (UObject *)pUVar10,L"MovieScene3DLocationKeyStruct");
        }
        TVar11 = (TTuple<FKeyHandle,FFrameNumber>)
                 FStructOnScope::FStructOnScope
                           (pFVar9,(UStruct *)
                                   Z_Registration_Info_UScriptStruct_FMovieScene3DLocationKeyStruct.
                                   OuterSingleton);
      }
      local_a98.Object = (FStructOnScope *)TVar11;
      TSharedRef<FStructOnScope,1>::TSharedRef<FStructOnScope,1><FStructOnScope>
                (local_938,&local_a98);
      lVar12 = (**(code **)((local_938[0].Object)->_padding_ + 0x18))(local_938[0].Object);
      if (bVar5 != false) {
        local_9b8.TypedValue = (TTuple<FKeyHandle,FFrameNumber>)local_c08.Object;
        local_9b8.bIsSet = bVar5;
        pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                            ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
        iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b80);
        pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                            (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_6e8
                             ,iVar19);
        pFVar15 = FMovieSceneChannelValueHelper::
                  FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                            ((FMovieSceneChannelValueHelper *)&local_340,pTVar14,
                             (double *)(lVar12 + 8),&local_9b8);
        FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
        TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>::
        ~TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>(&local_340);
        if ((longlong *)local_6e8._8_8_ != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)(local_6e8._8_8_ + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*(longlong *)local_6e8._8_8_ + 8))(local_6e8._8_8_,1);
          }
        }
      }
      if (local_c18 != '\0') {
        local_9a8.bIsSet = (bool)local_c18;
        local_9a8.TypedValue = local_c00;
        pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                            ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
        iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b60);
        pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                            (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_6c8
                             ,iVar19);
        pFVar15 = FMovieSceneChannelValueHelper::
                  FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                            ((FMovieSceneChannelValueHelper *)&local_2f8,pTVar14,
                             (double *)(lVar12 + 0x10),&local_9a8);
        FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
        TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>::
        ~TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>(&local_2f8);
        if ((longlong *)local_6c8._8_8_ != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)(local_6c8._8_8_ + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*(longlong *)local_6c8._8_8_ + 8))(local_6c8._8_8_,1);
          }
        }
      }
      if (local_c17 != '\0') {
        local_998.bIsSet = (bool)local_c17;
        local_998.TypedValue = local_bf8;
        pFVar17 = TSharedPtr<FMovieSceneChannelProxy,1>::operator->
                            ((TSharedPtr<FMovieSceneChannelProxy,1> *)this_00);
        iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b40);
        pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                            (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_6a8
                             ,iVar19);
        pFVar15 = FMovieSceneChannelValueHelper::
                  FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                            ((FMovieSceneChannelValueHelper *)&local_2b0,pTVar14,
                             (double *)(lVar12 + 0x18),&local_998);
        FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x28),pFVar15);
        TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>::
        ~TInlineValue<FMovieSceneChannelValueHelper::IChannelValueHelper,64,8>(&local_2b0);
        if ((longlong *)local_6a8._8_8_ != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)(local_6a8._8_8_ + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*(longlong *)local_6a8._8_8_ + 8))(local_6a8._8_8_,1);
          }
        }
      }
      FMovieSceneKeyStructHelper::SetStartingValues((FMovieSceneKeyStructHelper *)(lVar12 + 0x28));
      TVar16 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime
                         ((FMovieSceneKeyStructHelper *)(lVar12 + 0x28));
      local_948.SharedReferenceCount.ReferenceController =
           local_938[0].SharedReferenceCount.ReferenceController;
      local_948.Object = local_938[0].Object;
      if (*(char *)((longlong)TVar16 + 4) != '\0') {
        uVar21 = *(undefined4 *)TVar16;
      }
    }
    *(undefined4 *)(lVar12 + 0x20) = uVar21;
    local_c10->Object = local_948.Object;
    (local_c10->SharedReferenceCount).ReferenceController =
         local_948.SharedReferenceCount.ReferenceController;
    if (local_948.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_948.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_948.SharedReferenceCount.ReferenceController);
    if (local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    pTVar13 = local_c10;
    if (local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
        pTVar13 = local_c10;
      }
    }
  }
  else {
    pFVar9 = ::operator_new(0x28);
    if (pFVar9 != (FStructOnScope *)0x0) {
      if (Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_MovieSceneTracks();
        Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct,
                             (UObject *)pUVar10,L"MovieScene3DTransformKeyStruct");
      }
      TVar11 = (TTuple<FKeyHandle,FFrameNumber>)
               FStructOnScope::FStructOnScope
                         (pFVar9,(UStruct *)
                                 Z_Registration_Info_UScriptStruct_FMovieScene3DTransformKeyStruct.
                                 OuterSingleton);
    }
    local_aa0.Object = (FStructOnScope *)TVar11;
    TSharedRef<FStructOnScope,1>::TSharedRef<FStructOnScope,1><FStructOnScope>
              (&local_a68,&local_aa0);
    lVar12 = (**(code **)((local_a68.Object)->_padding_ + 0x18))();
    if (bVar5 != false) {
      local_a48.TypedValue = (TTuple<FKeyHandle,FFrameNumber>)local_c08.Object;
      local_a48.bIsSet = bVar5;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b80);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_808,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_5c8,pTVar14,(double *)(lVar12 + 8)
                           ,&local_a48);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_588 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_5c8;
        if ((local_588 & 2) == 0) {
          pFVar15 = local_5c8[0];
        }
        local_588 = local_588 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_588 & 2) == 0) {
          FMemory::Free(local_5c8[0]);
        }
      }
      if ((longlong *)local_808._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_808._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_808._8_8_ + 8))(local_808._8_8_,1);
        }
      }
    }
    if (local_c18 != '\0') {
      local_a38.bIsSet = (bool)local_c18;
      local_a38.TypedValue = local_c00;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b60);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_7e8,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_580,pTVar14,
                           (double *)(lVar12 + 0x10),&local_a38);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_540 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_580;
        if ((local_540 & 2) == 0) {
          pFVar15 = local_580[0];
        }
        local_540 = local_540 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_540 & 2) == 0) {
          FMemory::Free(local_580[0]);
        }
      }
      if ((longlong *)local_7e8._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_7e8._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_7e8._8_8_ + 8))(local_7e8._8_8_,1);
        }
      }
    }
    if (local_c17 != '\0') {
      local_a28.bIsSet = (bool)local_c17;
      local_a28.TypedValue = local_bf8;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b40);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_7c8,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_538,pTVar14,
                           (double *)(lVar12 + 0x18),&local_a28);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_4f8 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_538;
        if ((local_4f8 & 2) == 0) {
          pFVar15 = local_538[0];
        }
        local_4f8 = local_4f8 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_4f8 & 2) == 0) {
          FMemory::Free(local_538[0]);
        }
      }
      if ((longlong *)local_7c8._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_7c8._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_7c8._8_8_ + 8))(local_7c8._8_8_,1);
        }
      }
    }
    if (local_c16 != '\0') {
      local_a18.bIsSet = (bool)local_c16;
      local_a18.TypedValue = local_bf0;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b00);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_7a8,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_4f0,pTVar14,
                           (double *)(lVar12 + 0x30),&local_a18);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_4b0 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_4f0;
        if ((local_4b0 & 2) == 0) {
          pFVar15 = local_4f0[0];
        }
        local_4b0 = local_4b0 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_4b0 & 2) == 0) {
          FMemory::Free(local_4f0[0]);
        }
      }
      if ((longlong *)local_7a8._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_7a8._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_7a8._8_8_ + 8))(local_7a8._8_8_,1);
        }
      }
    }
    if (local_c15 != '\0') {
      local_a08.bIsSet = (bool)local_c15;
      local_a08.TypedValue = local_be8;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_b20);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_788,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_4a8,pTVar14,
                           (double *)(lVar12 + 0x20),&local_a08);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_468 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_4a8;
        if ((local_468 & 2) == 0) {
          pFVar15 = local_4a8[0];
        }
        local_468 = local_468 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_468 & 2) == 0) {
          FMemory::Free(local_4a8[0]);
        }
      }
      if ((longlong *)local_788._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_788._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_788._8_8_ + 8))(local_788._8_8_,1);
        }
      }
    }
    if (local_c14 != '\0') {
      local_9f8.bIsSet = (bool)local_c14;
      local_9f8.TypedValue = local_be0;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ae0);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_768,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_460,pTVar14,
                           (double *)(lVar12 + 0x28),&local_9f8);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_420 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_460;
        if ((local_420 & 2) == 0) {
          pFVar15 = local_460[0];
        }
        local_420 = local_420 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_420 & 2) == 0) {
          FMemory::Free(local_460[0]);
        }
      }
      if ((longlong *)local_768._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_768._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_768._8_8_ + 8))(local_768._8_8_,1);
        }
      }
    }
    if (local_c13 != '\0') {
      local_9e8.bIsSet = (bool)local_c13;
      local_9e8.TypedValue = local_bd8;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_bc0);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_748,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_418,pTVar14,
                           (double *)(lVar12 + 0x38),&local_9e8);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_3d8 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_418;
        if ((local_3d8 & 2) == 0) {
          pFVar15 = local_418[0];
        }
        local_3d8 = local_3d8 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_3d8 & 2) == 0) {
          FMemory::Free(local_418[0]);
        }
      }
      if ((longlong *)local_748._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_748._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_748._8_8_ + 8))(local_748._8_8_,1);
        }
      }
    }
    if (local_c12 != '\0') {
      local_9d8.bIsSet = (bool)local_c12;
      local_9d8.TypedValue = local_bd0;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ba0);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_728,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_3d0,pTVar14,
                           (double *)(lVar12 + 0x40),&local_9d8);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_390 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_3d0;
        if ((local_390 & 2) == 0) {
          pFVar15 = local_3d0[0];
        }
        local_390 = local_390 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_390 & 2) == 0) {
          FMemory::Free(local_3d0[0]);
        }
      }
      if ((longlong *)local_728._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_728._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_728._8_8_ + 8))(local_728._8_8_,1);
        }
      }
    }
    if (local_c11 != '\0') {
      local_9c8.bIsSet = (bool)local_c11;
      local_9c8.TypedValue = local_bc8;
      if ((*this_00 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FStructOnScope,1> *)(*pcVar4)();
        return pTVar13;
      }
      pFVar17 = (FMovieSceneChannelProxy *)*this_00;
      iVar19 = FMovieSceneChannelHandle::GetChannelIndex(&local_ac0);
      pTVar14 = FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
                          (pFVar17,(TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)local_708,
                           iVar19);
      pFVar15 = FMovieSceneChannelValueHelper::
                FMovieSceneChannelValueHelper<FMovieSceneDoubleChannel,double>
                          ((FMovieSceneChannelValueHelper *)local_388,pTVar14,
                           (double *)(lVar12 + 0x48),&local_9c8);
      FMovieSceneKeyStructHelper::Add((FMovieSceneKeyStructHelper *)(lVar12 + 0x58),pFVar15);
      if ((local_348 & 1) != 0) {
        pFVar15 = (FMovieSceneChannelValueHelper *)local_388;
        if ((local_348 & 2) == 0) {
          pFVar15 = local_388[0];
        }
        local_348 = local_348 & 0xfe;
        (**(code **)((*(FMovieSceneChannelValueHelper **)(pFVar15->Impl).Data.Pad)->Impl).Data.Pad)
                  (pFVar15,0);
        if ((local_348 & 2) == 0) {
          FMemory::Free(local_388[0]);
        }
      }
      if ((longlong *)local_708._8_8_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_708._8_8_ + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)local_708._8_8_ + 8))(local_708._8_8_,1);
        }
      }
    }
    FMovieSceneKeyStructHelper::SetStartingValues((FMovieSceneKeyStructHelper *)(lVar12 + 0x58));
    TVar16 = FMovieSceneKeyStructHelper::GetUnifiedKeyTime
                       ((FMovieSceneKeyStructHelper *)(lVar12 + 0x58));
    pTVar13 = local_c10;
    if (*(char *)((longlong)TVar16 + 4) != '\0') {
      uVar20 = *(undefined4 *)TVar16;
    }
    *(undefined4 *)(lVar12 + 0x50) = uVar20;
    local_c10->Object = local_a68.Object;
    (local_c10->SharedReferenceCount).ReferenceController =
         local_a68.SharedReferenceCount.ReferenceController;
    if (local_a68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a68.SharedReferenceCount.ReferenceController);
    if (local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ac0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ba0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_bc0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_ae0.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b20.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b00.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b40.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b60.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_
                    + 8))(local_b80.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return pTVar13;
}

// GetMask @ 14668c420

FMovieSceneTransformMask __thiscall
UMovieScene3DTransformSection::GetMask(UMovieScene3DTransformSection *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->TransformMask).Mask;
  return (FMovieSceneTransformMask)(uint)in_RDX;
}

// GetMaskByName @ 14668c440

FMovieSceneTransformMask __thiscall
UMovieScene3DTransformSection::GetMaskByName(UMovieScene3DTransformSection *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  FText *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  size_t sVar6;
  wchar_t *_Str;
  FName *in_R8;
  bool bVar7;
  FString local_38;
  FText local_28;
  FText local_18;
  
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MovieSceneTransformSection",L"Location",L"Location");
  pFVar4 = FText::ToString(pFVar3);
  pFVar5 = ::FName::ToString(in_R8,(FString *)&local_28);
  iVar2 = (pFVar4->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar7 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_28.TextData.Reference);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 7;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Location.X");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 1;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Location.Y");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 2;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Location.Z");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 4;
    goto LAB_14668c80c;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"MovieSceneTransformSection",L"Rotation",L"Rotation");
  pFVar4 = FText::ToString(pFVar3);
  pFVar5 = ::FName::ToString(in_R8,(FString *)&local_18);
  iVar2 = (pFVar4->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar7 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_18.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x38;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Rotation.X");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 8;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Rotation.Y");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x10;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Rotation.Z");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x20;
    goto LAB_14668c80c;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"MovieSceneTransformSection",L"Scale",L"Scale");
  pFVar4 = FText::ToString(pFVar3);
  pFVar5 = ::FName::ToString(in_R8,(FString *)&local_18);
  iVar2 = (pFVar4->Data).ArrayNum;
  iVar1 = (pFVar5->Data).ArrayNum;
  if (iVar1 == iVar2) {
    if (iVar1 < 2) {
      bVar7 = true;
    }
    else {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
    }
  }
  else {
    bVar7 = iVar2 + iVar1 == 1;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_18.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x1c0;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Scale.X");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x40;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Scale.Y");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x80;
    goto LAB_14668c80c;
  }
  bVar7 = ::FName::Equals(*in_R8,L"Scale.Z");
  if (bVar7) {
    (param_1->ComparisonIndex).Value = 0x100;
    goto LAB_14668c80c;
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"MovieSceneTransformSection",L"Constraint",L"Constraint");
  pFVar4 = FText::ToString(pFVar3);
  ::FString::FString(&local_38,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar4 = ::FName::ToString(in_R8,(FString *)&local_18);
  if (local_38.Data.ArrayNum == 0) {
    _Str = L"";
LAB_14668c7a0:
    sVar6 = wcslen(_Str);
    iVar2 = ::FString::Find(pFVar4,_Str,(int)sVar6,IgnoreCase,FromStart,-1);
  }
  else {
    _Str = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14668c7a0;
    iVar2 = -1;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_18.TextData.Reference);
  }
  if (iVar2 == -1) {
    (param_1->ComparisonIndex).Value = 0x3ff;
  }
  else {
    (param_1->ComparisonIndex).Value = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14668c80c:
  return (FMovieSceneTransformMask)(uint)param_1;
}

// GetPrivateStaticClass @ 146696100

UClass * __cdecl UMovieScene3DTransformSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DTransformSection",
               &Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DTransformSection,0xd50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DTransformSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DTransformSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DTransformSection.InnerSingleton;
}

// GetReferencedBindings @ 146697110

void __thiscall
UMovieScene3DTransformSection::GetReferencedBindings
          (UMovieScene3DTransformSection *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UMovieScene3DTransformSectionConstraints *pUVar2;
  UObject *pUVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  pUVar2 = (this->Constraints).field0_0x0.DebugPtr;
  if (pUVar2 != (UMovieScene3DTransformSectionConstraints *)0x0) {
    pFVar11 = (pUVar2->ConstraintsChannels).AllocatorInstance.Data;
    iVar1 = (pUVar2->ConstraintsChannels).ArrayNum;
    pFVar13 = pFVar11 + (longlong)iVar1 * 0x128;
    while( true ) {
      if ((pUVar2->ConstraintsChannels).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar13) break;
      pUVar3 = *(UObject **)(pFVar11 + 0x120);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_1466971a3;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_1466971a3:
        pUVar10 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
        iVar9 = (int)pUVar10->_padding_;
        if ((iVar9 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar10->_padding_)) {
          lVar4 = *(longlong *)&pUVar3[3].field_0x20;
          if ((lVar4 != 0) &&
             (pFVar12 = (FScriptContainerElement *)(lVar4 + 0x2c),
             ((*(int *)(lVar4 + 0x38) != 0 || *(int *)(lVar4 + 0x34) != 0) ||
             *(int *)(lVar4 + 0x30) != 0) || *(int *)pFVar12 != 0)) {
            pFVar5 = (param_1->AllocatorInstance).Data;
            if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_1->ArrayNum;
            if (iVar9 == param_1->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar9 + 1;
            uVar7 = *(undefined8 *)(lVar4 + 0x34);
            pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
            *(undefined8 *)(pFVar5 + 8) = uVar7;
          }
          lVar4 = *(longlong *)&pUVar3[3].field_0x18;
          if ((lVar4 != 0) &&
             (pFVar12 = (FScriptContainerElement *)(lVar4 + 0x2c),
             ((*(int *)(lVar4 + 0x38) != 0 || *(int *)(lVar4 + 0x34) != 0) ||
             *(int *)(lVar4 + 0x30) != 0) || *(int *)pFVar12 != 0)) {
            pFVar5 = (param_1->AllocatorInstance).Data;
            if ((pFVar5 <= pFVar12) &&
               ((pFVar12 < pFVar5 + (longlong)param_1->ArrayMax * 0x10 &&
                (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_1->ArrayNum;
            if (iVar9 == param_1->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar9 + 1;
            uVar7 = *(undefined8 *)(lVar4 + 0x34);
            pFVar5 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
            *(undefined8 *)(pFVar5 + 8) = uVar7;
          }
        }
      }
      pFVar11 = pFVar11 + 0x128;
    }
  }
  return;
}

// GetUseQuaternionInterpolation @ 146699d30

bool __thiscall
UMovieScene3DTransformSection::GetUseQuaternionInterpolation(UMovieScene3DTransformSection *this)

{
  return this->bUseQuaternionInterpolation;
}

// HasConstraintChannel @ 14669b3e0

bool __thiscall
UMovieScene3DTransformSection::HasConstraintChannel
          (UMovieScene3DTransformSection *this,FGuid *param_1)

{
  UObject *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_28;
  int iStack_24;
  int iStack_1c;
  
  lVar6 = (this->ManualWeight)._padding_;
  if (lVar6 == 0) {
    return false;
  }
  uVar2 = param_1->A;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  lVar7 = *(longlong *)(lVar6 + 0x28);
  lVar6 = (longlong)*(int *)(lVar6 + 0x30) * 0x128 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x128) {
    pUVar1 = *(UObject **)(lVar7 + 0x120);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 != (UObject *)0x0) goto LAB_14669b474;
    }
    else if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
LAB_14669b474:
      pUVar1 = *(UObject **)(lVar7 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      if (((uVar5 == *(int *)&pUVar1[1].field_0x10 && uVar4 == *(int *)&pUVar1[1].field_0xc) &&
          uVar3 == *(int *)&pUVar1[1].field_0x8) && uVar2 == *(int *)&pUVar1[1].field_0x4)
      goto LAB_14669b4be;
    }
  }
  lVar7 = 0;
LAB_14669b4be:
  return lVar7 != 0;
}

// ImportConstraintEntity @ 14669b530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::ImportConstraintEntity
          (UMovieScene3DTransformSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  UMovieScene3DTransformSectionConstraints *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  uint uVar7;
  FGuid local_b8;
  undefined **local_a8;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_a0;
  code *local_98;
  undefined1 local_90;
  TComponentTypeID<FGuid> local_88;
  undefined1 local_74;
  TComponentTypeID<FConstraintComponentData> local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  UMovieScene3DTransformSection *local_58;
  undefined1 local_50;
  undefined1 local_48;
  UMovieScene3DTransformSection *local_30;
  
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_b8);
  if (((local_b8.B != 0 || local_b8.D != 0) || local_b8.C != 0) || local_b8.A != 0) {
    uVar7 = param_2->EntityID & 0x7fffffff;
    if (((((this->Constraints).field0_0x0.DebugPtr)->ConstraintsChannels).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Constraints->ConstraintsChannels.IsValidIndex(ConstraintIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScene3DTransformSection.cpp"
                           ,0x293,
                           L"Encoded constraint (%d) index is not valid within array size %d. Data must have been manipulated without re-compilaition."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar1 = (this->Constraints).field0_0x0.DebugPtr;
    if (((pUVar1->ConstraintsChannels).ArrayNum <= (int)uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar2 = *(UObject **)
              ((pUVar1->ConstraintsChannels).AllocatorInstance.Data +
              (ulonglong)uVar7 * 0x128 + 0x120);
    if (pUVar2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      pUVar1 = (this->Constraints).field0_0x0.DebugPtr;
      if (((pUVar1->ConstraintsChannels).ArrayNum <= (int)uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UObject **)
                ((pUVar1->ConstraintsChannels).AllocatorInstance.Data +
                (ulonglong)uVar7 * 0x128 + 0x120);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      local_a0 = pFVar5->BoundObjectResolver;
      local_70 = pFVar6->ConstraintChannel;
      local_68 = *(undefined8 *)&pUVar2[1].field_0x4;
      uStack_60 = *(undefined8 *)&pUVar2[1].field_0xc;
      local_98 = MovieSceneHelpers::ResolveSceneComponentBoundObject;
      local_88 = pFVar5->GenericObjectBinding;
      local_90 = 1;
      local_74 = 1;
      local_50 = 1;
      local_48 = 0;
      local_a8 = &
                 ___7__TEntityBuilder_U__TAdd_P6APEAVUObject__PEAV1__Z_MovieScene_UE__U__TAdd_UFGuid___23_U__TAdd_UFConstraintComponentData___23__MovieScene_UE__6B_
      ;
      local_58 = this;
      local_30 = this;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<FConstraintComponentData>_>
                          *)&local_a8);
    }
  }
  return;
}

// ImportEntityImpl @ 14669b8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::ImportEntityImpl
          (UMovieScene3DTransformSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FFrameRate *this_00;
  TComponentTypeID<FMovieScenePropertyBinding> TVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FGuid local_d8;
  undefined **local_c8;
  TComponentTypeID<FMovieScenePropertyBinding> local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a0;
  code *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  TComponentTypeID<FGuid> local_40;
  bool bStack_3e;
  undefined1 uStack_3d;
  
  if (((int)param_2->EntityID < 0) && (*(longlong *)&this->Scale[2].KeyHandles.field_0x78 != 0)) {
    ImportConstraintEntity
              ((UMovieScene3DTransformSection *)&this[-1].Scale[2].TickResolution,param_1,param_2,
               param_3);
    return;
  }
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
  this_00 = &this[-1].Scale[2].TickResolution;
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar7);
  if (pUVar8 == (UObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Track",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScene3DTransformSection.cpp"
                       ,0x2b4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_d8);
  local_68 = *(undefined8 *)&pUVar8[7].field_0x8;
  uStack_60 = *(undefined8 *)&pUVar8[7].field_0x10;
  TVar1 = pFVar6->PropertyBinding;
  uVar2 = *(undefined4 *)&pUVar8[7].field_0x18;
  pUVar7 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
  iVar3 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      != &pUVar7->_padding_)) {
    uStack_56 = 0;
  }
  else {
    uStack_56 = 1;
  }
  local_58 = pFVar6->BoundObjectResolver;
  bStack_3e = ((local_d8.C != 0 || local_d8.D != 0) || local_d8.A != 0) || local_d8.B != 0;
  local_40 = pFVar6->GenericObjectBinding;
  local_a0 = _local_58;
  local_98 = MovieSceneHelpers::ResolveSceneComponentBoundObject;
  local_bc = local_68;
  uStack_b4 = uStack_60;
  local_88 = _local_40;
  local_c8 = &
             ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_P6APEAVUObject__PEAV1__Z_23_U__TAddConditional_UFGuid___23__MovieScene_UE__6B_
  ;
  local_a8 = 1;
  local_90 = 1;
  local_74 = 1;
  local_70 = 0;
  local_c0 = TVar1;
  local_ac = uVar2;
  BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>_>
            ((UMovieScene3DTransformSection *)this_00,
             (TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>
              *)&local_c8,param_1,param_2,param_3);
  return;
}

// InterrogateEntityImpl @ 1466a53e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScene3DTransformSection::InterrogateEntityImpl
          (UMovieScene3DTransformSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  FBuiltInComponentTypes *pFVar1;
  undefined **local_18;
  TComponentTypeID<FFrameTime> local_10;
  undefined1 local_e;
  
  pFVar1 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_e = 0;
  local_10 = pFVar1->EvalTime;
  local_18 = &___7__TEntityBuilder_UFAdd_MovieScene_UE___MovieScene_UE__6B_;
  BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>
            ((UMovieScene3DTransformSection *)&this[-1].Scale[2].TickResolution,
             (TEntityBuilder<UE::MovieScene::FAdd> *)&local_18,param_1,param_2,param_3);
  return;
}

// OnBindingIDsUpdated @ 1466a8a60

void __thiscall
UMovieScene3DTransformSection::OnBindingIDsUpdated
          (UMovieScene3DTransformSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  int iVar1;
  UMovieScene3DTransformSectionConstraints *pUVar2;
  UTransformableHandle *this_00;
  bool bVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FObjectPtr_u_0 local_res8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  pUVar2 = (this->Constraints).field0_0x0.DebugPtr;
  if (pUVar2 != (UMovieScene3DTransformSectionConstraints *)0x0) {
    pFVar5 = (pUVar2->ConstraintsChannels).AllocatorInstance.Data;
    iVar1 = (pUVar2->ConstraintsChannels).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x128;
    while( true ) {
      if ((pUVar2->ConstraintsChannels).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FConstraintAndActiveChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      local_res8 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(pFVar5 + 0x120))->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1466a8ae4:
        if (local_res8.Handle != (UObject *)0x0) {
          pUVar4 = Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
          if (((bVar3) && (local_res8.Handle != (UObject *)0x0)) &&
             (this_00 = *(UTransformableHandle **)&local_res8.Handle[3].field_0x18,
             this_00 != (UTransformableHandle *)0x0)) {
            local_38.Object = param_3->Object;
            local_38.SharedReferenceCount.ReferenceController =
                 (param_3->SharedReferenceCount).ReferenceController;
            if (local_38.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            UTransformableHandle::OnBindingIDsUpdated(this_00,param_1,param_2,&local_38);
          }
        }
      }
      else if (local_res8.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_res8.Handle);
        goto LAB_1466a8ae4;
      }
      pFVar5 = pFVar5 + 0x128;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnChannelOverridesChanged @ 1466a8eb0

void __thiscall
UMovieScene3DTransformSection::OnChannelOverridesChanged(UMovieScene3DTransformSection *this)

{
  undefined1 *puVar1;
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  puVar1 = &this[-1].ManualWeight.KeyHandles.field_0x50;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)puVar1 != &local_18) {
    *(undefined8 *)puVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this[-1].ManualWeight.KeyHandles.field_0x58,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// OnConstraintsChanged @ 1466a8f10

void __thiscall
UMovieScene3DTransformSection::OnConstraintsChanged(UMovieScene3DTransformSection *this)

{
  TObjectPtr<UMovieSceneSectionChannelOverrideRegistry>_u_0 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this[-1].OverrideRegistry.field0_0x0 != &local_18) {
    this[-1].OverrideRegistry.field0_0x0.DebugPtr = (UMovieSceneSectionChannelOverrideRegistry *)0x0
    ;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this[-1].Constraints,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// PopulateConstraintEntities @ 1466aaee0

void __thiscall
UMovieScene3DTransformSection::PopulateConstraintEntities
          (UMovieScene3DTransformSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->Constraints).field0_0x0.DebugPtr == (UMovieScene3DTransformSectionConstraints *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraints",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieScene3DTransformSection.cpp"
                       ,0x262,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  uVar4 = 0;
  if (0 < (((this->Constraints).field0_0x0.DebugPtr)->ConstraintsChannels).ArrayNum) {
    do {
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                (param_3,param_1,(UObject *)this,uVar4 | 0x80000000,iVar3);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (((this->Constraints).field0_0x0.DebugPtr)->ConstraintsChannels).ArrayNum)
    ;
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1466aafa0

bool __thiscall
UMovieScene3DTransformSection::PopulateEvaluationFieldImpl
          (UMovieScene3DTransformSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FFrameRate *pFVar1;
  UMovieSceneSectionChannelOverrideRegistry *this_00;
  int iVar2;
  uint uVar3;
  
  pFVar1 = &this[-1].Scale[2].TickResolution;
  if (*(longlong *)&this->Scale[2].KeyHandles.field_0x78 != 0) {
    iVar2 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
    uVar3 = 0;
    if (0 < *(int *)(*(longlong *)&this->Scale[2].KeyHandles.field_0x78 + 0x30)) {
      do {
        FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                  (param_3,param_1,(UObject *)pFVar1,uVar3 | 0x80000000,iVar2);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(*(longlong *)&this->Scale[2].KeyHandles.field_0x78 + 0x30));
    }
  }
  this_00 = *(UMovieSceneSectionChannelOverrideRegistry **)&this->Scale[2].KeyHandles.field_0x70;
  if (this_00 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
    UMovieSceneSectionChannelOverrideRegistry::PopulateEvaluationFieldImpl
              (this_00,param_1,param_2,param_3,(UMovieSceneSection *)pFVar1);
  }
  return false;
}

// PostLoad @ 1466ad150

void __thiscall UMovieScene3DTransformSection::PostLoad(UMovieScene3DTransformSection *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMovieScene3DTransformSection **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreSave @ 1466b30d0

void __thiscall
UMovieScene3DTransformSection::PreSave
          (UMovieScene3DTransformSection *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RemoveConstraintChannel @ 1466d7a60

void __thiscall
UMovieScene3DTransformSection::RemoveConstraintChannel
          (UMovieScene3DTransformSection *this,UTickableConstraint *param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  UTickableConstraint *pUVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMovieSceneBoolChannel *this_00;
  longlong lVar9;
  
  if (((char)this->_padding_ != '\x01') && (lVar9 = (this->ManualWeight)._padding_, lVar9 != 0)) {
    lVar1 = *(longlong *)(lVar9 + 0x28);
    iVar8 = *(int *)(lVar9 + 0x30);
    for (lVar9 = lVar1; lVar9 != (longlong)iVar8 * 0x128 + lVar1; lVar9 = lVar9 + 0x128) {
      pUVar2 = *(UObject **)(lVar9 + 0x120);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 != (UObject *)0x0) goto LAB_1466d7ae4;
      }
      else if (pUVar2 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar2);
LAB_1466d7ae4:
        pUVar3 = *(UTickableConstraint **)(lVar9 + 0x120);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar3 != (UTickableConstraint *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        if (pUVar3 == param_1) {
          uVar5 = (uint)((lVar9 - lVar1) / 0x128);
          if ((int)uVar5 < 0) {
            return;
          }
          lVar9 = (this->ManualWeight)._padding_;
          if (*(int *)(lVar9 + 0x30) <= (int)uVar5) {
            return;
          }
          uVar7 = 0;
          if ((int)uVar5 < *(int *)(lVar9 + 0x30)) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = (FMovieSceneBoolChannel *)
                    ((longlong)(int)uVar5 * 0x128 + *(longlong *)(lVar9 + 0x28));
          FMovieSceneBoolChannel::~FMovieSceneBoolChannel(this_00);
          iVar8 = *(int *)(lVar9 + 0x30) + ~uVar5;
          if (iVar8 != 0) {
            memmove(this_00,&this_00[1]._padding_,(longlong)iVar8 * 0x128);
          }
          *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,(ForAnyElementType *)(lVar9 + 0x28),*(int *)(lVar9 + 0x30),
                     (int *)(lVar9 + 0x34));
          (**(code **)(this[-1].ManualWeight._padding_ + 0x3a0))();
          return;
        }
      }
    }
  }
  return;
}

// ReplaceConstraint @ 1466d7d60

void __thiscall
UMovieScene3DTransformSection::ReplaceConstraint
          (UMovieScene3DTransformSection *this,FName param_1,UTickableConstraint *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  FName FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = (this->ManualWeight)._padding_;
  if (lVar9 != 0) {
    lVar2 = *(longlong *)(lVar9 + 0x28);
    iVar1 = *(int *)(lVar9 + 0x30);
    for (lVar9 = lVar2; lVar9 != (longlong)iVar1 * 0x128 + lVar2; lVar9 = lVar9 + 0x128) {
      pUVar3 = *(UObject **)(lVar9 + 0x120);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_1466d7de4;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_1466d7de4:
        pUVar3 = *(UObject **)(lVar9 + 0x120);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FVar4.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        FVar4.Number = *(uint *)&pUVar3->field_0x1c;
        if (FVar4 == param_1) {
          uVar6 = (uint)((lVar9 - lVar2) / 0x128);
          if (uVar6 == 0xffffffff) {
            return;
          }
          lVar9 = (this->ManualWeight)._padding_;
          uVar8 = 0;
          if ((int)uVar6 < *(int *)(lVar9 + 0x30)) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            pUVar3 = *(UObject **)
                      ((longlong)(int)uVar6 * 0x128 + 0x120 + *(longlong *)(lVar9 + 0x28));
            if (pUVar3 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar3);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UTickableConstraint *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
          }
          (**(code **)(this[-1].ManualWeight._padding_ + 0x3a0))(&this[-1].ManualWeight._padding_);
          return;
        }
      }
    }
  }
  return;
}

// SetBlendType @ 1466f83f0

void __thiscall
UMovieScene3DTransformSection::SetBlendType
          (UMovieScene3DTransformSection *this,EMovieSceneBlendType param_1)

{
  FMovieSceneBlendTypeField FVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  double dVar3;
  
  FVar1 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar2 = FMovieSceneBlendTypeField::Contains
                    ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar1.BlendTypeField),
                     param_1);
  if (bVar2) {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
    *(EMovieSceneBlendType *)((longlong)&this->_padding_ + 1) = param_1;
  }
  FVar1 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar2 = FMovieSceneBlendTypeField::Contains
                    ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var_00,FVar1.BlendTypeField),
                     param_1);
  if (bVar2) {
    if (param_1 == Absolute) {
      dVar3 = 1.0;
    }
    else {
      if ((param_1 - Additive & 0xfd) != 0) {
        return;
      }
      dVar3 = 0.0;
    }
    this->Scale[2].DefaultValue = dVar3;
    this->Scale[2].bHasDefaultValue = true;
    this->Scale[1].DefaultValue = dVar3;
    this->Scale[1].bHasDefaultValue = true;
    this->Scale[0].DefaultValue = dVar3;
    this->Scale[0].bHasDefaultValue = true;
  }
  return;
}

// SetMask @ 1466f9600

void __thiscall
UMovieScene3DTransformSection::SetMask
          (UMovieScene3DTransformSection *this,FMovieSceneTransformMask param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  (this->TransformMask).Mask = param_1.Mask;
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetUseQuaternionInterpolation @ 1466fb900

void __thiscall
UMovieScene3DTransformSection::SetUseQuaternionInterpolation
          (UMovieScene3DTransformSection *this,bool param_1)

{
  this->bUseQuaternionInterpolation = param_1;
  return;
}

// ShowCurveForChannel @ 1466fd280

bool __thiscall
UMovieScene3DTransformSection::ShowCurveForChannel
          (UMovieScene3DTransformSection *this,void *param_1)

{
  if ((this->bUseQuaternionInterpolation != false) &&
     (((param_1 == this->Rotation || (param_1 == this->Rotation + 1)) ||
      (param_1 == this->Rotation + 2)))) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUMovieScene3DTransformSection @ 1466fe720

void __cdecl UMovieScene3DTransformSection::StaticRegisterNativesUMovieScene3DTransformSection(void)

{
  return;
}

// _getUObject @ 146720b50

UObject * __thiscall UMovieScene3DTransformSection::_getUObject(UMovieScene3DTransformSection *this)

{
  return (UObject *)&this[-1].ManualWeight._padding_;
}

// _getUObject`adjustor{56}' @ 146720b60

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieScene3DTransformSection::_getUObject`adjustor{56}' (void)const __ptr64 */

UObject * __thiscall
UMovieScene3DTransformSection::_getUObject_adjustor_56__(UMovieScene3DTransformSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieScene3DTransformSection *)&this[-1].ManualWeight.KeyHandles.field_0x70
                      );
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{64}' @ 146720b70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieScene3DTransformSection::_getUObject`adjustor{64}' (void)const __ptr64 */

UObject * __thiscall
UMovieScene3DTransformSection::_getUObject_adjustor_64__(UMovieScene3DTransformSection *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieScene3DTransformSection *)&this[-1].ManualWeight.KeyHandles.field_0x68
                      );
  return (UObject *)pUVar1;
}

// operator() @ 1504f1cb0

bool __thiscall
`UMovieScene3DTransformSection::
BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAddConditional<FGuid>_>_>'
::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8031984208144499250>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8031984208144499250>,
                       &`public:___cdecl_`private:_void___cdecl_UMovieScene3DTransformSection::BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<class_UObject*___ptr64_(__cdecl*)(UObject*___ptr64)>,UE::MovieScene::TAddConditional<FGuid>_>_>(UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<class_UObject*___ptr64_(__cdecl*)(UObject*___ptr64)>,UE::MovieScene::TAddConditional<FGuid>_>&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,UE::MovieScene::FEntityImportParams_const&___ptr64,UE::MovieScene::FImportedEntity*___ptr64)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f1cf0

bool __thiscall
`UMovieScene3DTransformSection::BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>'
::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8031984208144499250>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8031984208144499250>,
                       &`public:___cdecl_`private:_void___cdecl_UMovieScene3DTransformSection::BuildEntity<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>_>(UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd>&___ptr64,UMovieSceneEntitySystemLinker*___ptr64,UE::MovieScene::FEntityImportParams_const&___ptr64,UE::MovieScene::FImportedEntity*___ptr64)___ptr64'::`28'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

