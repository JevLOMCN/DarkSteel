// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146723d10

UClass * __cdecl UMovieSceneCustomPrimitiveDataSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataSection",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataSection,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataSection>,local_res8,
               UMovieSceneParameterSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton;
}

// UMovieSceneCustomPrimitiveDataSection @ 146763b80

UMovieSceneCustomPrimitiveDataSection * __thiscall
UMovieSceneCustomPrimitiveDataSection::UMovieSceneCustomPrimitiveDataSection
          (UMovieSceneCustomPrimitiveDataSection *this,FVTableHelper *param_1)

{
  UMovieSceneParameterSection::UMovieSceneParameterSection
            ((UMovieSceneParameterSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// UMovieSceneCustomPrimitiveDataSection @ 146763bc0

UMovieSceneCustomPrimitiveDataSection * __thiscall
UMovieSceneCustomPrimitiveDataSection::UMovieSceneCustomPrimitiveDataSection
          (UMovieSceneCustomPrimitiveDataSection *this,FObjectInitializer *param_1)

{
  UMovieSceneParameterSection::UMovieSceneParameterSection
            ((UMovieSceneParameterSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UMovieSceneCustomPrimitiveDataSection @ 14676a330

void __thiscall
UMovieSceneCustomPrimitiveDataSection::~UMovieSceneCustomPrimitiveDataSection
          (UMovieSceneCustomPrimitiveDataSection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  UMovieSceneParameterSection::~UMovieSceneParameterSection((UMovieSceneParameterSection *)this);
  return;
}

// ExternalPopulateEvaluationField @ 14678ef70

void __thiscall
UMovieSceneCustomPrimitiveDataSection::ExternalPopulateEvaluationField
          (UMovieSceneCustomPrimitiveDataSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar4 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  iVar9 = *(int *)&this->field_0x130;
  iVar12 = *(int *)&this->field_0x140;
  iVar10 = 0;
  iVar7 = *(int *)&this->field_0x150;
  iVar1 = *(int *)&this->field_0x160;
  if (0 < iVar9) {
    do {
      if (((short)iVar10 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,(int)(short)iVar10);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar5,iVar4);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  iVar9 = 0;
  if (0 < iVar12) {
    do {
      sVar8 = (short)iVar9;
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                         (param_3,(UObject *)this,(int)sVar8 | 0x1000000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,(int)sVar8 | 0x1010000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar10,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar5,iVar4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar12);
  }
  iVar12 = 0;
  iVar9 = iVar12;
  if (0 < iVar7) {
    do {
      sVar8 = (short)iVar9;
      uVar11 = (uint)sVar8;
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                         (param_3,(UObject *)this,uVar11 | 0x2000000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar11 | 0x2010000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar11 | 0x2020000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar10,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar5,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar6,iVar4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  if (0 < iVar1) {
    do {
      sVar8 = (short)iVar12;
      uVar11 = (uint)sVar8;
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar9 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar11 | 0x3000000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar11 | 0x3010000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                         (param_3,(UObject *)this,uVar11 | 0x3020000);
      if ((sVar8 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x17,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                        (param_3,(UObject *)this,uVar11 | 0x3030000);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar9,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar7,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar10,iVar4);
      FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar5,iVar4);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar1);
  }
  return;
}

// GetPrivateStaticClass @ 146798620

UClass * __cdecl UMovieSceneCustomPrimitiveDataSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCustomPrimitiveDataSection",
               &Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomPrimitiveDataSection,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCustomPrimitiveDataSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomPrimitiveDataSection>,local_res8,
               UMovieSceneParameterSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomPrimitiveDataSection.InnerSingleton;
}

// ImportEntityImpl @ 14679e040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCustomPrimitiveDataSection::ImportEntityImpl
          (UMovieSceneCustomPrimitiveDataSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  UObjectBaseUtility *this_00;
  FBuiltInComponentTypes *pFVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> *pTVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  FName *pFVar12;
  short sVar13;
  FName *pFVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  undefined1 local_res8 [8];
  UMovieSceneEntitySystemLinker *local_res10;
  FEntityImportParams *local_res18;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FName local_390;
  FName local_388;
  FName local_380;
  longlong *local_378;
  FGuid local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FName local_330;
  FName local_328;
  FName local_320;
  TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_> local_318;
  undefined **local_2f0 [3];
  undefined4 uStack_2d8;
  char local_2d4;
  undefined2 local_2d0;
  undefined8 local_2cc;
  ushort local_2c4;
  undefined4 local_2c0;
  FName *local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8;
  undefined **local_2a0 [3];
  char local_284;
  undefined2 local_280;
  undefined8 local_27c;
  undefined4 local_270;
  FName *local_268;
  undefined1 local_260;
  undefined1 local_258;
  undefined **local_250 [3];
  char local_234;
  undefined2 local_230;
  undefined8 local_22c;
  undefined4 local_220;
  FName *local_218;
  undefined1 local_210;
  undefined1 local_208;
  undefined **local_200 [3];
  char local_1e4;
  undefined2 local_1e0;
  undefined8 local_1dc;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_1d0;
  FName *local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  TComponentTypeID<FGuid> local_198;
  bool bStack_196;
  undefined1 uStack_195;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_180;
  undefined2 uStack_17e;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_168;
  undefined2 uStack_166;
  TComponentTypeID<UE::MovieScene::FSourceFloatChannel> local_150;
  undefined2 uStack_14e;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_114;
  undefined4 uStack_110;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_100;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_d0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_a0;
  TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>_> local_70;
  
  local_res10 = param_1;
  local_res18 = param_2;
  pUVar5 = UMovieSceneParameterSectionExtender::StaticClass();
  this_00 = UObjectBaseUtility::GetImplementingOuterObject
                      ((UObjectBaseUtility *)&this[-1].field_0x68,pUVar5);
  if (this_00 == (UObjectBaseUtility *)0x0) {
    local_378 = (longlong *)0x0;
LAB_14679e0a4:
    local_res8[0] = 0;
    bVar2 = `UMovieSceneCustomPrimitiveDataSection::ImportEntityImpl'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar2) {
      return;
    }
  }
  else {
    local_378 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
    if (local_378 == (longlong *)0x0) goto LAB_14679e0a4;
  }
  uVar3 = param_2->EntityID;
  uVar11 = uVar3 >> 0x10;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(local_res18,&local_370);
  local_318.Payload._20_1_ = 1;
  bStack_196 = ((local_370.D != 0 || local_370.B != 0) || local_370.C != 0) || local_370.A != 0;
  local_198 = pFVar6->GenericObjectBinding;
  local_318.bAddMutualComponents = false;
  local_318.Payload._0_4_ = _local_198;
  uVar9 = uVar3 >> 0x18;
  local_318._padding_ =
       (longlong)
       &___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE___MovieScene_UE__6B_;
  sVar13 = (short)uVar3;
  if (uVar3 >> 0x18 == 0) {
    uVar3 = 0;
    if ((int)sVar13 < *(int *)&this->field_0x20) {
      uVar3 = (uint)~(int)sVar13 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar14 = (FName *)((longlong)sVar13 * 0x130 + *(longlong *)&this->field_0x18);
    if ((pFVar14[0x10].ComparisonIndex.Value != 0) || ((char)pFVar14[0x13].Number == '\x01')) {
      pTVar8 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>::
               Add<FName,FName_const_&>(&local_318,&local_70,pFVar7->ScalarParameterName,pFVar14);
      local_1d0 = pFVar6->FloatChannel[0];
      local_200[1]._0_4_ = *(undefined4 *)&pTVar8->field_0x8;
      local_1b8 = pTVar8->field_0x2c;
      local_1e4 = pTVar8->field_0x1c;
      if (local_1e4 != '\0') {
        local_200._12_8_ = *(undefined8 *)&pTVar8->field_0xc;
        unique0x10000618 = *(undefined8 *)&pTVar8->field_0x14;
      }
      local_1e0 = *(undefined2 *)&pTVar8->field_0x20;
      local_1dc = 0xffffffff;
      if (*(int *)&pTVar8->field_0x24 != -1) {
        local_1dc = *(undefined8 *)&pTVar8->field_0x24;
      }
      local_200[0] = &
                     ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAdd_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_1c0 = 1;
      local_1c8 = pFVar14 + 1;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAdd<UE::MovieScene::FSourceFloatChannel>_>
                          *)local_200);
    }
    goto LAB_14679e9df;
  }
  bVar10 = (byte)(uVar3 >> 0x10);
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_14679e9df;
      uVar3 = 0;
      if ((int)sVar13 < *(int *)&this->field_0x50) {
        uVar3 = (uint)~(int)sVar13 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar14 = (FName *)((longlong)sVar13 * 0x4a8 + *(longlong *)&this->field_0x48);
      if (bVar10 < 4) {
        if (bVar10 == 0) {
          pFVar12 = pFVar14 + 1;
        }
        else if (bVar10 == 1) {
          pFVar12 = pFVar14 + 0x26;
        }
        else {
          pFVar12 = pFVar14 + 0x4b;
          if (bVar10 != 2) goto LAB_14679e219;
        }
      }
      else {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Offset >= 0 && Offset <= 3",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                           ,0x154,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_14679e219:
        pFVar12 = pFVar14 + 0x70;
      }
      if ((pFVar12[0xf].ComparisonIndex.Value != 0) || ((char)pFVar12[0x12].Number == '\x01')) {
        local_390 = *pFVar14;
        local_330 = local_390;
        if (bVar10 != 0) {
          ::FName::ToString(&local_330,&local_360);
          bVar2 = ::FString::IsNumeric(&local_360);
          if ((!bVar2) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("BaseOffsetString.IsNumeric()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                                 ,0x11d,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_360.Data.ArrayNum != 0) {
            FVar16.Data = local_360.Data.AllocatorInstance.Data;
          }
          iVar4 = _wtoi((wchar_t *)FVar16.Data);
          local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3c0.Data.ArrayNum = 0;
          local_3c0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_3c0,(uVar11 & 0xff) + iVar4);
          iVar4 = local_3c0.Data.ArrayNum + -1;
          if (local_3c0.Data.ArrayNum == 0) {
            iVar4 = 0;
          }
          pFVar14 = ::FName::FName(&local_1b0,iVar4,(wchar_t *)local_3c0.Data.AllocatorInstance.Data
                                   ,FNAME_Add);
          local_390 = *pFVar14;
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
          }
        }
        pTVar8 = UE::MovieScene::
                 TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>
                 ::Add<FName,FName>(&local_318,&local_100,pFVar7->ScalarParameterName,&local_390);
        local_2c4 = (pFVar7->Tags).CustomPrimitiveData.Value;
        local_2d4 = pTVar8->field_0x1c;
        local_2a8 = pTVar8->field_0x2c;
        local_2f0[1]._0_4_ = *(undefined4 *)&pTVar8->field_0x8;
        if (local_2d4 != '\0') {
          local_12c = *(undefined4 *)&pTVar8->field_0xc;
          uStack_128 = *(undefined4 *)&pTVar8->field_0x10;
          uStack_124 = *(undefined4 *)&pTVar8->field_0x14;
          uStack_120 = *(undefined4 *)&pTVar8->field_0x18;
        }
        local_2d0 = *(undefined2 *)&pTVar8->field_0x20;
        uVar15 = 0xffffffff;
        local_114 = 0xffffffff;
        uStack_110 = 0;
        if (*(int *)&pTVar8->field_0x24 != -1) {
          uVar15 = *(undefined8 *)&pTVar8->field_0x24;
        }
        if ((pFVar12[0xf].ComparisonIndex.Value == 0) && ((char)pFVar12[0x12].Number != '\x01')) {
          uStack_17e._0_1_ = 0;
        }
        else {
          uStack_17e._0_1_ = 1;
        }
        local_180 = pFVar6->FloatChannel[0];
        if (local_2d4 != '\0') {
          local_2f0[1]._4_4_ = local_12c;
          local_2f0[2]._0_4_ = uStack_128;
          local_2f0[2]._4_4_ = uStack_124;
          uStack_2d8 = uStack_120;
        }
        local_2cc = 0xffffffff;
        if ((int)uVar15 != -1) {
          local_2cc = uVar15;
        }
        local_2c0 = _local_180;
        local_2f0[0] = &
                       ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_UFAdd_23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
        ;
        local_2b0 = 1;
        local_2b8 = pFVar12;
        UE::MovieScene::FImportedEntity::
        AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                  (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                            *)local_2f0);
      }
      goto LAB_14679e9df;
    }
    uVar3 = 0;
    if ((int)sVar13 < *(int *)&this->field_0x40) {
      uVar3 = (uint)~(int)sVar13 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar14 = (FName *)((longlong)sVar13 * 0x380 + *(longlong *)&this->field_0x38);
    if (bVar10 < 3) {
      if (bVar10 == 0) {
        pFVar12 = pFVar14 + 1;
      }
      else {
        pFVar12 = pFVar14 + 0x26;
        if (bVar10 != 1) goto LAB_14679e4b1;
      }
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offset >= 0 && Offset <= 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                         ,0x145,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_14679e4b1:
      pFVar12 = pFVar14 + 0x4b;
    }
    if ((pFVar12[0xf].ComparisonIndex.Value != 0) || ((char)pFVar12[0x12].Number == '\x01')) {
      local_388 = *pFVar14;
      local_328 = local_388;
      if (bVar10 != 0) {
        ::FName::ToString(&local_328,&local_350);
        bVar2 = ::FString::IsNumeric(&local_350);
        if ((!bVar2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("BaseOffsetString.IsNumeric()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                               ,0x11d,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_350.Data.ArrayNum != 0) {
          FVar16.Data = local_350.Data.AllocatorInstance.Data;
        }
        iVar4 = _wtoi((wchar_t *)FVar16.Data);
        local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b0.Data.ArrayNum = 0;
        local_3b0.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_3b0,(uVar11 & 0xff) + iVar4);
        iVar4 = local_3b0.Data.ArrayNum + -1;
        if (local_3b0.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        pFVar14 = ::FName::FName(&local_1a8,iVar4,(wchar_t *)local_3b0.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        local_388 = *pFVar14;
        if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
        }
        if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data.AllocatorInstance.Data);
        }
      }
      pTVar8 = UE::MovieScene::
               TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>::
               Add<FName,FName>(&local_318,&local_d0,pFVar7->ScalarParameterName,&local_388);
      if ((pFVar12[0xf].ComparisonIndex.Value == 0) && ((char)pFVar12[0x12].Number != '\x01')) {
        uStack_166._0_1_ = 0;
      }
      else {
        uStack_166._0_1_ = 1;
      }
      local_258 = pTVar8->field_0x2c;
      local_168 = pFVar6->FloatChannel[0];
      local_2a0[1]._0_4_ = *(undefined4 *)&pTVar8->field_0x8;
      local_284 = pTVar8->field_0x1c;
      if (local_284 != '\0') {
        local_2a0._12_8_ = *(undefined8 *)&pTVar8->field_0xc;
        unique0x100005d8 = *(undefined8 *)&pTVar8->field_0x14;
      }
      local_280 = *(undefined2 *)&pTVar8->field_0x20;
      local_27c = 0xffffffff;
      if (*(int *)&pTVar8->field_0x24 != -1) {
        local_27c = *(undefined8 *)&pTVar8->field_0x24;
      }
      local_270 = _local_168;
      local_2a0[0] = &
                     ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_260 = 1;
      local_268 = pFVar12;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                          *)local_2a0);
    }
    goto LAB_14679e9df;
  }
  uVar3 = 0;
  if ((int)sVar13 < *(int *)&this->field_0x30) {
    uVar3 = (uint)~(int)sVar13 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar14 = (FName *)((longlong)sVar13 * 600 + *(longlong *)&this->field_0x28);
  if (bVar10 < 2) {
    pFVar12 = pFVar14 + 1;
    if (bVar10 != 0) goto LAB_14679e6f4;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset >= 0 && Offset <= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                       ,0x135,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_14679e6f4:
    pFVar12 = pFVar14 + 0x26;
  }
  if ((pFVar12[0xf].ComparisonIndex.Value != 0) || ((char)pFVar12[0x12].Number == '\x01')) {
    local_380 = *pFVar14;
    local_320 = local_380;
    if (bVar10 != 0) {
      ::FName::ToString(&local_320,&local_340);
      bVar2 = ::FString::IsNumeric(&local_340);
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseOffsetString.IsNumeric()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                             ,0x11d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_340.Data.ArrayNum != 0) {
        FVar16.Data = local_340.Data.AllocatorInstance.Data;
      }
      iVar4 = _wtoi((wchar_t *)FVar16.Data);
      local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a0.Data.ArrayNum = 0;
      local_3a0.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_3a0,(uVar11 & 0xff) + iVar4);
      iVar4 = local_3a0.Data.ArrayNum + -1;
      if (local_3a0.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      pFVar14 = ::FName::FName(&local_1a0,iVar4,(wchar_t *)local_3a0.Data.AllocatorInstance.Data,
                               FNAME_Add);
      local_380 = *pFVar14;
      if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
      }
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
    }
    pTVar8 = UE::MovieScene::
             TEntityBuilderImpl<TIntegerSequence<int,0>,UE::MovieScene::TAddConditional<FGuid>_>::
             Add<FName,FName>(&local_318,&local_a0,pFVar7->ScalarParameterName,&local_380);
    if ((pFVar12[0xf].ComparisonIndex.Value == 0) && ((char)pFVar12[0x12].Number != '\x01')) {
      uStack_14e._0_1_ = 0;
    }
    else {
      uStack_14e._0_1_ = 1;
    }
    local_208 = pTVar8->field_0x2c;
    local_150 = pFVar6->FloatChannel[0];
    local_250[1]._0_4_ = *(undefined4 *)&pTVar8->field_0x8;
    local_234 = pTVar8->field_0x1c;
    if (local_234 != '\0') {
      local_250._12_8_ = *(undefined8 *)&pTVar8->field_0xc;
      unique0x100005f8 = *(undefined8 *)&pTVar8->field_0x14;
    }
    local_230 = *(undefined2 *)&pTVar8->field_0x20;
    local_22c = 0xffffffff;
    if (*(int *)&pTVar8->field_0x24 != -1) {
      local_22c = *(undefined8 *)&pTVar8->field_0x24;
    }
    local_220 = _local_150;
    local_250[0] = &
                   ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_VFName___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23__MovieScene_UE__6B_
    ;
    local_210 = 1;
    local_218 = pFVar12;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>_>
              (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FName>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
                        *)local_250);
  }
LAB_14679e9df:
  (**(code **)(*local_378 + 0x10))(local_378,&this[-1].field_0x68,local_res10,local_res18,param_3);
  return;
}

// ReconstructChannelProxy @ 1467b4aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieSceneCustomPrimitiveDataSection::ReconstructChannelProxy
          (UMovieSceneCustomPrimitiveDataSection *this)

{
  int iVar1;
  TSharedRef<FMovieSceneChannelProxy,1> *pTVar2;
  ForElementType<FMovieSceneChannelEntry> FVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FMovieSceneChannelProxy *local_70;
  FSharedReferencer<1> local_68;
  TSharedRef<FMovieSceneChannelProxy,1> local_60;
  FMovieSceneChannelProxyData local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  iVar1 = *(int *)&this->field_0x130;
  lVar5 = *(longlong *)&this->field_0x128;
  local_50.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  lVar4 = (longlong)iVar1 * 0x130 + lVar5;
  local_50.Entries.ArrayNum = 0;
  local_50.Entries.ArrayMax = 1;
  while( true ) {
    if (*(int *)&this->field_0x130 != iVar1) {
      `TCheckedPointerIterator<FScalarParameterNameAndCurve,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (lVar5 == lVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 8));
    lVar5 = lVar5 + 0x130;
  }
  iVar1 = *(int *)&this->field_0x140;
  lVar5 = *(longlong *)&this->field_0x138;
  lVar4 = (longlong)iVar1 * 600 + lVar5;
  while( true ) {
    if (*(int *)&this->field_0x140 != iVar1) {
      `TCheckedPointerIterator<FVector2DParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_78);
    }
    if (lVar5 == lVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 0x130));
    lVar5 = lVar5 + 600;
  }
  iVar1 = *(int *)&this->field_0x150;
  lVar5 = *(longlong *)&this->field_0x148;
  lVar4 = (longlong)iVar1 * 0x380 + lVar5;
  while( true ) {
    if (*(int *)&this->field_0x150 != iVar1) {
      `TCheckedPointerIterator<FVectorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (lVar5 == lVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 0x130));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 600));
    lVar5 = lVar5 + 0x380;
  }
  iVar1 = *(int *)&this->field_0x160;
  lVar5 = *(longlong *)&this->field_0x158;
  lVar4 = (longlong)iVar1 * 0x4a8 + lVar5;
  while( true ) {
    if (*(int *)&this->field_0x160 != iVar1) {
      `TCheckedPointerIterator<FColorParameterNameAndCurves,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_78);
    }
    if (lVar5 == lVar4) break;
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 8));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 0x130));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 600));
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>
              (&local_50,(FMovieSceneFloatChannel *)(lVar5 + 0x380));
    lVar5 = lVar5 + 0x4a8;
  }
  pTVar2 = MakeShared<FMovieSceneChannelProxy,1,FMovieSceneChannelProxyData>(&local_60,&local_50);
  local_68.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_70 = pTVar2->Object;
  if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FMovieSceneChannelProxy **)&this->field_0xf8 != &local_70) {
    *(FMovieSceneChannelProxy **)&this->field_0xf8 = local_70;
    local_70 = (FMovieSceneChannelProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x100,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  FVar3 = (ForElementType<FMovieSceneChannelEntry>)&local_50;
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar3 = local_50.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar3,local_50.Entries.ArrayNum);
  if (local_50.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_50.Entries.AllocatorInstance.SecondaryData);
  }
  return;
}

// StaticRegisterNativesUMovieSceneCustomPrimitiveDataSection @ 1467c2870

void __cdecl
UMovieSceneCustomPrimitiveDataSection::StaticRegisterNativesUMovieSceneCustomPrimitiveDataSection
          (void)

{
  return;
}

// operator() @ 1504f34e0

bool __thiscall
`UMovieSceneCustomPrimitiveDataSection::ImportEntityImpl'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7027855055164276476>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7027855055164276476>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

