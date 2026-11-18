// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 1467248a0

UClass * __cdecl UMovieSceneVisibilitySection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilitySection",
               &Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilitySection,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilitySection>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilitySection>,local_res8,
               UMovieSceneBoolSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton;
}

// UMovieSceneVisibilitySection @ 146767640

UMovieSceneVisibilitySection * __thiscall
UMovieSceneVisibilitySection::UMovieSceneVisibilitySection
          (UMovieSceneVisibilitySection *this,FVTableHelper *param_1)

{
  UMovieSceneBoolSection::UMovieSceneBoolSection((UMovieSceneBoolSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// UMovieSceneVisibilitySection @ 146767680

UMovieSceneVisibilitySection * __thiscall
UMovieSceneVisibilitySection::UMovieSceneVisibilitySection
          (UMovieSceneVisibilitySection *this,FObjectInitializer *param_1)

{
  UMovieSceneBoolSection::UMovieSceneBoolSection((UMovieSceneBoolSection *)this,param_1);
  *(undefined2 *)&this->field_0x198 = 0x101;
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UMovieSceneVisibilitySection @ 14676aed0

void __thiscall
UMovieSceneVisibilitySection::~UMovieSceneVisibilitySection(UMovieSceneVisibilitySection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &___7IMovieSceneEntityProvider__6B_;
  UMovieSceneBoolSection::~UMovieSceneBoolSection((UMovieSceneBoolSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467998e0

UClass * __cdecl UMovieSceneVisibilitySection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneVisibilitySection",
               &Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton,
               StaticRegisterNativesUMovieSceneVisibilitySection,0x240,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneVisibilitySection>,
               InternalVTableHelperCtorCaller<UMovieSceneVisibilitySection>,local_res8,
               UMovieSceneBoolSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneVisibilitySection.InnerSingleton;
}

// ImportEntityImpl @ 1467a18f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneVisibilitySection::ImportEntityImpl
          (UMovieSceneVisibilitySection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FGuid *pFVar9;
  undefined **local_98 [3];
  undefined1 local_7c;
  ushort local_78;
  TComponentTypeID<bool> local_76;
  undefined1 local_74;
  undefined1 local_73;
  TComponentTypeID<FMovieScenePropertyBinding> local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_54;
  TComponentTypeID<FGuid> local_50;
  bool bStack_4e;
  undefined1 uStack_4d;
  FGuid local_38;
  FGuid local_28;
  
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  pUVar7 = Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].field_0x8,pUVar7);
  if (pUVar8 != (UObject *)0x0) {
    pFVar9 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_38);
    uVar1 = pFVar9->D;
    uVar2 = pFVar9->C;
    uVar3 = pFVar9->B;
    uVar4 = pFVar9->A;
    pFVar9 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_28);
    local_70 = pFVar5->PropertyBinding;
    bStack_4e = ((uVar1 != 0 || uVar2 != 0) || uVar3 != 0) || uVar4 != 0;
    local_50 = pFVar5->GenericObjectBinding;
    local_98[1]._4_4_ = pFVar9->A;
    local_98[2]._0_4_ = pFVar9->B;
    local_98[2]._4_4_ = pFVar9->C;
    unique0x100000fd = pFVar9->D;
    local_78 = (pFVar6->Tags).Visibility.Value;
    local_74 = 0 < (int)param_2->EntityID;
    local_76 = pFVar5->BoolResult;
    local_5c = *(undefined4 *)&pUVar8[7].field_0x18;
    local_6c = *(undefined8 *)&pUVar8[7].field_0x8;
    uStack_64 = *(undefined8 *)&pUVar8[7].field_0x10;
    local_98[1]._0_4_ = _local_50;
    local_98[0] = &
                  ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__UFAdd_23_U__TAdd__N_23_U__TAdd_UFMovieScenePropertyBinding___23__MovieScene_UE__6B_
    ;
    local_7c = 1;
    local_73 = 1;
    local_58 = 1;
    local_54 = 0;
    UE::MovieScene::FImportedEntity::
    AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>_>
              (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::FAdd,UE::MovieScene::TAdd<bool>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>_>
                        *)local_98);
  }
  return;
}

// PopulateEvaluationFieldImpl @ 1467b1b50

bool __thiscall
UMovieSceneVisibilitySection::PopulateEvaluationFieldImpl
          (UMovieSceneVisibilitySection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  int iVar2;
  FFrameNumber FVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  FFrameNumber *pFVar11;
  TRangeBound<FFrameNumber> TVar12;
  uint uVar13;
  TRangeBound<FFrameNumber> TVar14;
  char *pcVar15;
  char cVar16;
  FFrameNumber FStack_a4;
  FFrameNumber FStack_8c;
  TRange<FFrameNumber> local_88;
  TRange<FFrameNumber> local_78;
  undefined4 local_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  int iStack_4c;
  TRangeBound<FFrameNumber> local_48;
  UObject *local_40;
  
  iVar8 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  iVar1 = *(int *)&this[-1].field_0x198;
  piVar10 = *(int **)&this[-1].field_0x190;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  iVar2 = *(int *)&this[-1].field_0x1b0;
  pcVar15 = *(char **)&this[-1].field_0x1a8;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar13 = local_60;
  TVar12.Type.Value = this[-1].field_0xb8;
  TVar12._1_3_ = *(undefined3 *)&this[-1].field_0xb9;
  TVar12.Value.Value = *(int *)&this[-1].field_0xbc;
  local_40 = (UObject *)&this[-1].field_0x8;
  TVar14.Type.Value = this[-1].field_0xc0;
  TVar14._1_3_ = *(undefined3 *)&this[-1].field_0xc1;
  TVar14.Value.Value = *(int *)&this[-1].field_0xc4;
  if (TVar12.Type.Value == '\0') {
    iStack_64 = TVar12.Value.Value + 1;
    local_68 = CONCAT31(local_68._1_3_,1);
    TVar12.Value.Value = iStack_64;
    TVar12._0_4_ = local_68;
  }
  if (TVar14.Type.Value == '\x01') {
    iStack_5c = TVar14.Value.Value + 1;
    local_60 = local_60 & 0xffffff00;
    TVar14 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_5c,uVar13) & 0xffffffffffffff00);
  }
  local_48 = TVar14;
  if (iVar1 == 0) {
    if (this[-1].field_0x1a1 == '\0') {
      bVar6 = false;
    }
    else {
      bVar6 = this[-1].field_0x1a0 == '\0';
    }
  }
  else {
    uVar13 = 0;
    if ((iVar2 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    cVar16 = *pcVar15;
    local_78.UpperBound = TVar14;
    if (0 < iVar1) {
      do {
        uVar9 = local_58;
        FVar3.Value = *piVar10;
        local_58 = local_58 & 0xffffff00;
        local_88.UpperBound =
             (TRangeBound<FFrameNumber>)(CONCAT44(FVar3.Value,uVar9) & 0xffffffffffffff00);
        local_88.LowerBound = TVar12;
        iStack_54 = FVar3.Value;
        if (TVar12.Type.Value.Value == '\x02') {
LAB_1467b1d70:
          FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                    (param_3,&local_88,local_40,(uint)(cVar16 != '\0'),iVar8);
        }
        else {
          local_88.LowerBound.Value = TVar12.Value.Value;
          bVar6 = local_88.LowerBound.Value.Value <= FVar3.Value;
          if (bVar6) {
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_88.UpperBound);
            iVar4 = pFVar11->Value;
            pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_88.LowerBound);
            if ((pFVar11->Value != iVar4) ||
               ((local_88.LowerBound.Type.Value != '\0' && (local_88.UpperBound.Type.Value != '\0'))
               )) goto LAB_1467b1d70;
          }
        }
        local_50 = CONCAT31(local_50._1_3_,1);
        TVar12.Value.Value = FVar3.Value;
        TVar12._0_4_ = local_50;
        uVar9 = 0;
        if ((int)uVar13 < iVar2) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        iStack_4c = FVar3.Value;
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar13 = uVar13 + 1;
        cVar16 = *pcVar15;
        piVar10 = piVar10 + 1;
        pcVar15 = pcVar15 + 1;
        local_78.UpperBound = local_48;
      } while ((int)uVar13 < iVar1);
    }
    local_78.LowerBound = TVar12;
    if ((TVar12.Type.Value.Value != '\x02') && (local_78.UpperBound.Type.Value.Value != '\x02')) {
      FStack_8c = TVar14.Value.Value;
      FStack_a4 = TVar12.Value.Value;
      if (FStack_8c.Value < FStack_a4.Value) {
        return true;
      }
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_78.UpperBound);
      iVar1 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_78.LowerBound);
      if (pFVar11->Value == iVar1) {
        if (local_78.LowerBound.Type.Value == '\0') {
          return true;
        }
        if (local_78.UpperBound.Type.Value == '\0') {
          return true;
        }
      }
    }
    param_1 = &local_78;
    bVar6 = cVar16 == '\0';
  }
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
            (param_3,param_1,local_40,(uint)!bVar6,iVar8);
  return true;
}

// StaticRegisterNativesUMovieSceneVisibilitySection @ 1467c2a90

void __cdecl UMovieSceneVisibilitySection::StaticRegisterNativesUMovieSceneVisibilitySection(void)

{
  return;
}

// _getUObject @ 1467ca8b0

UObject * __thiscall UMovieSceneVisibilitySection::_getUObject(UMovieSceneVisibilitySection *this)

{
  return (UObject *)&this[-1].field_0x8;
}

