// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 1462729e0

UClass * __cdecl UMovieSceneSpawnSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnSection",
               &Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSpawnSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnSection>,local_res8,
               UMovieSceneBoolSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton;
}

// UMovieSceneSpawnSection @ 146299c80

UMovieSceneSpawnSection * __thiscall
UMovieSceneSpawnSection::UMovieSceneSpawnSection
          (UMovieSceneSpawnSection *this,FObjectInitializer *param_1)

{
  int iVar1;
  FGuid local_18;
  
  UMovieSceneBoolSection::UMovieSceneBoolSection((UMovieSceneBoolSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &_vftable__for__IMovieSceneEntityProvider__;
  local_18 = FSequencerObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  this->field_0x70 = 1;
  this->field_0x71 = (5 < iVar1) + '\x01';
  *(undefined2 *)&this->field_0x198 = 0x101;
  return this;
}

// UMovieSceneSpawnSection @ 146299cf0

UMovieSceneSpawnSection * __thiscall
UMovieSceneSpawnSection::UMovieSceneSpawnSection
          (UMovieSceneSpawnSection *this,FVTableHelper *param_1)

{
  UMovieSceneBoolSection::UMovieSceneBoolSection((UMovieSceneBoolSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UMovieSceneSpawnSection @ 14629bb70

void __thiscall UMovieSceneSpawnSection::~UMovieSceneSpawnSection(UMovieSceneSpawnSection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneBoolSection__;
  *(undefined ***)&this->field_0x238 = &___7IMovieSceneEntityProvider__6B_;
  UMovieSceneBoolSection::~UMovieSceneBoolSection((UMovieSceneBoolSection *)this);
  return;
}

// GetPrivateStaticClass @ 1462af820

UClass * __cdecl UMovieSceneSpawnSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSpawnSection",
               &Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnSection,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneSpawnSection>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnSection>,local_res8,
               UMovieSceneBoolSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnSection.InnerSingleton;
}

// ImportEntityImpl @ 1462b17d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnSection::ImportEntityImpl
          (UMovieSceneSpawnSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<FGuid> TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FGuid *pFVar4;
  FBuiltInComponentTypes *pFVar5;
  UClass *pUVar6;
  UMovieScene *this_00;
  FMovieSceneSpawnable *pFVar7;
  ushort local_res8;
  undefined2 uStackX_a;
  FGuid local_68;
  FGuid local_58;
  undefined **local_48;
  TComponentTypeID<FGuid> local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  
  pFVar4 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_68);
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar2._0_4_ = pFVar4->A;
  uVar2._4_4_ = pFVar4->B;
  uVar3._0_4_ = pFVar4->C;
  uVar3._4_4_ = pFVar4->D;
  TVar1 = pFVar5->SpawnableBinding;
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  this_00 = (UMovieScene *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].field_0x8,pUVar6);
  pFVar4 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_58);
  pFVar7 = UMovieScene::FindSpawnable(this_00,pFVar4);
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uStackX_a._0_1_ = pFVar7 != (FMovieSceneSpawnable *)0x0;
  local_res8 = (pFVar5->Tags).OldStyleSpawnable.Value;
  local_28 = _local_res8;
  local_48 = &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  local_2c = 1;
  local_24 = 0;
  local_40 = TVar1;
  local_3c = uVar2;
  uStack_34 = uVar3;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::FAddConditional> *)
                     &local_48);
  return;
}

// PopulateEvaluationFieldImpl @ 1462b6860

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneSpawnSection::PopulateEvaluationFieldImpl
          (UMovieSceneSpawnSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar11;
  UClass *pUVar12;
  UMovieSceneSequence *this_00;
  UMovieScene *this_01;
  FMovieSceneSpawnable *pFVar13;
  FMovieSceneBindingReferences *this_02;
  TArrayView<FMovieSceneBindingReference_const_,int> *pTVar14;
  ulonglong uVar15;
  FFrameNumber *pFVar16;
  int iVar17;
  ulonglong uVar18;
  TRangeBound<FFrameNumber> *pTVar19;
  TRange<FFrameNumber> *pTVar20;
  TEnumAsByte<ERangeBoundTypes::Type> TVar21;
  TRangeBound<FFrameNumber> TVar22;
  uint uVar23;
  char cVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  <lambda_1> local_res8;
  FFrameNumber FStack_a4;
  TRange<FFrameNumber> local_98;
  TRange<FFrameNumber> local_88;
  TRange<FFrameNumber> local_78;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  int iStack_5c;
  FGuid local_58;
  TArrayView<FMovieSceneBindingReference_const_,int> local_48;
  
  pFVar11 = FMovieSceneEntityComponentFieldBuilder::GetSharedMetaData(param_3);
  local_58.A = (pFVar11->ObjectBindingID).A;
  local_58.B = (pFVar11->ObjectBindingID).B;
  local_58.C = (pFVar11->ObjectBindingID).C;
  local_58.D = (pFVar11->ObjectBindingID).D;
  pUVar12 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  this_00 = (UMovieSceneSequence *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].field_0x8,pUVar12);
  pUVar12 = Z_Construct_UClass_UMovieScene_NoRegister();
  this_01 = (UMovieScene *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].field_0x8,pUVar12);
  if (this_01 == (UMovieScene *)0x0) {
    return true;
  }
  if (this_00 == (UMovieSceneSequence *)0x0) {
    return true;
  }
  pFVar13 = UMovieScene::FindSpawnable(this_01,&local_58);
  if (pFVar13 == (FMovieSceneSpawnable *)0x0) {
    this_02 = UMovieSceneSequence::GetBindingReferences(this_00);
    if (this_02 == (FMovieSceneBindingReferences *)0x0) {
      return true;
    }
    pTVar14 = FMovieSceneBindingReferences::GetReferences(this_02,&local_48,&local_58);
    bVar7 = Algo::
            NoneOf<TArrayView<FMovieSceneBindingReference_const_,int>,_UMovieSceneSpawnSection::PopulateEvaluationFieldImpl_::__l16::<lambda_1>_>
                      (pTVar14,local_res8);
    if (bVar7) {
      return true;
    }
  }
  iVar9 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  uVar2 = *(uint *)&this[-1].field_0x198;
  lVar4 = *(longlong *)&this[-1].field_0x190;
  if (((int)uVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar3 = *(int *)&this[-1].field_0x1b0;
  lVar5 = *(longlong *)&this[-1].field_0x1a8;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (uVar2 == 0) {
    if (this[-1].field_0x1a1 == '\0') {
      return true;
    }
    if (this[-1].field_0x1a0 == '\0') {
      return true;
    }
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
              (param_3,param_1,(UObject *)&this[-1].field_0x8,0,iVar9);
    return true;
  }
  iVar10 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                     (param_3,(UObject *)&this[-1].field_0x8,0);
  uVar18 = 0;
  uVar27 = 0;
  TVar22 = param_1->LowerBound;
  TVar21 = TVar22.Type.Value;
  uVar23 = uVar27;
  if (TVar21.Value != '\x02') {
    uVar15 = uVar18;
    if (TVar21.Value == '\0') {
      uVar15 = 4;
    }
    uVar25 = uVar18;
    uVar29 = uVar2;
    if (0 < (int)uVar2) {
      do {
        uVar26 = uVar29 >> 1;
        iVar17 = uVar26 + (int)uVar25;
        if (*(int *)(lVar4 + (longlong)iVar17 * 4) <=
            *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + uVar15) + TVar22.Value.Value.Value) {
          uVar25 = (ulonglong)(iVar17 + (uVar29 & 1));
        }
        uVar23 = (uint)uVar25;
        uVar29 = uVar26;
      } while (uVar26 != 0);
    }
  }
  uVar29 = uVar2 - 1;
  if ((int)uVar23 < (int)(uVar2 - 1)) {
    uVar29 = uVar23;
  }
  uVar23 = 0;
  if (TVar21.Value != '\x02') {
    if (TVar21.Value == '\0') {
      uVar18 = 4;
    }
    uVar23 = uVar2;
    if (0 < (int)uVar2) {
      do {
        iVar17 = (uVar23 >> 1) + uVar27;
        if (*(int *)(lVar4 + (longlong)iVar17 * 4) <=
            TVar22.Value.Value.Value +
            *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + uVar18)) {
          uVar27 = iVar17 + (uVar23 & 1);
        }
        uVar26 = uVar23 >> 1;
        uVar23 = uVar23 >> 1;
      } while (uVar26 != 0);
    }
    uVar23 = uVar27 - 1;
    if ((int)(uVar27 - 1) < 0) {
      uVar23 = 0;
    }
  }
  uVar27 = 0;
  if ((int)uVar23 < iVar3) {
    uVar27 = ~uVar23 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  cVar24 = *(char *)((int)uVar23 + lVar5);
  if ((int)uVar29 < (int)uVar2) {
    lVar28 = (longlong)(int)uVar29;
    do {
      if (((int)uVar29 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar1 = (param_1->LowerBound).Type.Value;
      local_78.LowerBound.Type.Value = '\x01';
      local_78.LowerBound.Value.Value = *(int *)(lVar4 + lVar28 * 4);
      if (uVar1 != '\x02') {
        iVar17 = (param_1->LowerBound).Value.Value;
        pTVar20 = param_1;
        if (local_78.LowerBound.Value.Value <= iVar17) {
          if (local_78.LowerBound.Value.Value < iVar17) {
            pTVar20 = &local_78;
          }
          if (uVar1 != '\x01') break;
        }
        if ((pTVar20->LowerBound).Value.Value != (param_1->LowerBound).Value.Value) break;
      }
      uVar1 = (param_1->UpperBound).Type.Value;
      pTVar19 = &param_1->UpperBound;
      local_78.UpperBound.Type.Value = '\x01';
      local_78.UpperBound.Value.Value = local_78.LowerBound.Value.Value;
      if (uVar1 != '\x02') {
        iVar17 = (param_1->UpperBound).Value.Value;
        if (iVar17 <= local_78.LowerBound.Value.Value) {
          if (iVar17 < local_78.LowerBound.Value.Value) {
            pTVar19 = &local_78.UpperBound;
          }
          if (uVar1 != '\x01') break;
        }
        if ((pTVar19->Value).Value != (param_1->UpperBound).Value.Value) break;
      }
      uVar23 = (uint)((int)uVar29 < iVar3) & ~uVar29 >> 0x1f;
      if ((uVar23 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (cVar24 != *(char *)(lVar28 + lVar5)) {
        if (cVar24 != '\0') {
          if (((int)uVar29 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          uVar27 = local_68;
          local_68 = local_68 & 0xffffff00;
          iStack_64 = *(int *)(lVar4 + lVar28 * 4);
          local_98.UpperBound =
               (TRangeBound<FFrameNumber>)(CONCAT44(iStack_64,uVar27) & 0xffffffffffffff00);
          local_98.LowerBound = TVar22;
          if (TVar22.Type.Value.Value == '\x02') {
LAB_1462b6cd6:
            FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                      (param_3,&local_98,iVar10,iVar9);
          }
          else {
            local_98.LowerBound.Value = TVar22.Value.Value;
            bVar7 = local_98.LowerBound.Value.Value <= iStack_64;
            if (bVar7) {
              pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_98.UpperBound);
              iVar17 = pFVar16->Value;
              pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_98.LowerBound);
              if ((pFVar16->Value != iVar17) ||
                 ((local_98.LowerBound.Type.Value != '\0' &&
                  (local_98.UpperBound.Type.Value != '\0')))) goto LAB_1462b6cd6;
            }
          }
        }
        if ((uVar23 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        cVar24 = *(char *)(lVar28 + lVar5);
        if (cVar24 != '\0') {
          if (((int)uVar29 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          local_60 = CONCAT31(local_60._1_3_,1);
          iStack_5c = *(int *)(lVar4 + lVar28 * 4);
          TVar22.Value.Value = iStack_5c;
          TVar22._0_4_ = local_60;
        }
      }
      uVar29 = uVar29 + 1;
      lVar28 = lVar28 + 1;
    } while ((int)uVar29 < (int)uVar2);
  }
  local_88.UpperBound = param_1->UpperBound;
  local_88.LowerBound = TVar22;
  if ((TVar22.Type.Value.Value != '\x02') && (local_88.UpperBound.Type.Value.Value != '\x02')) {
    FStack_a4 = TVar22.Value.Value;
    if (local_88.UpperBound.Value.Value.Value < FStack_a4.Value) {
      return true;
    }
    pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_88.UpperBound);
    iVar3 = pFVar16->Value;
    pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_88.LowerBound);
    if (pFVar16->Value == iVar3) {
      if (local_88.LowerBound.Type.Value == '\0') {
        return true;
      }
      if (local_88.UpperBound.Type.Value == '\0') {
        return true;
      }
    }
  }
  if (cVar24 != '\0') {
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,&local_88,iVar10,iVar9);
  }
  return true;
}

// StaticRegisterNativesUMovieSceneSpawnSection @ 1462bddf0

void __cdecl UMovieSceneSpawnSection::StaticRegisterNativesUMovieSceneSpawnSection(void)

{
  return;
}

// _getUObject @ 1462bfca0

UObject * __thiscall UMovieSceneSpawnSection::_getUObject(UMovieSceneSpawnSection *this)

{
  return (UObject *)&this[-1].field_0x8;
}

