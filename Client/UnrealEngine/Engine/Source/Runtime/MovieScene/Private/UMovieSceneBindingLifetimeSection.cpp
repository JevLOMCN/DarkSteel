// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// StaticClass @ 1461e5590

UClass * __cdecl UMovieSceneBindingLifetimeSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSection",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton;
}

// UMovieSceneBindingLifetimeSection @ 1461fd710

UMovieSceneBindingLifetimeSection * __thiscall
UMovieSceneBindingLifetimeSection::UMovieSceneBindingLifetimeSection
          (UMovieSceneBindingLifetimeSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// UMovieSceneBindingLifetimeSection @ 1461fd750

UMovieSceneBindingLifetimeSection * __thiscall
UMovieSceneBindingLifetimeSection::UMovieSceneBindingLifetimeSection
          (UMovieSceneBindingLifetimeSection *this,FObjectInitializer *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->field_0xf0 = 1;
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  return this;
}

// ~UMovieSceneBindingLifetimeSection @ 1461ff9d0

void __thiscall
UMovieSceneBindingLifetimeSection::~UMovieSceneBindingLifetimeSection
          (UMovieSceneBindingLifetimeSection *this)

{
  *(undefined ***)&this->field_0x110 = &___7IMovieSceneEntityProvider__6B_;
  *(undefined ***)this = &___7UMovieSceneSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x100);
  UMovieSceneDecorationContainerObject::~UMovieSceneDecorationContainerObject
            ((UMovieSceneDecorationContainerObject *)this);
  return;
}

// ExternalPopulateEvaluationField @ 146210a50

void __thiscall
UMovieSceneBindingLifetimeSection::ExternalPopulateEvaluationField
          (UMovieSceneBindingLifetimeSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
  iVar2 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity(param_3,(UObject *)this,1);
  FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity(param_3,param_1,iVar2,iVar1);
  return;
}

// GetPrivateStaticClass @ 14621b640

UClass * __cdecl UMovieSceneBindingLifetimeSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeSection",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeSection,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeSection.InnerSingleton;
}

// ImportEntityImpl @ 14621e190

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBindingLifetimeSection::ImportEntityImpl
          (UMovieSceneBindingLifetimeSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<FGuid> TVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  code *pcVar5;
  bool bVar6;
  FBuiltInComponentTypes *pFVar7;
  UClass *pUVar8;
  UMovieSceneSequence *pUVar9;
  FGuid *pFVar10;
  longlong lVar11;
  undefined1 uVar12;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_res8;
  bool bStackX_a;
  undefined1 uStackX_b;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_d8;
  FGuid local_c8;
  undefined **local_b8;
  TComponentTypeID<FGuid> local_b0;
  FSharedPlaybackState *local_ac;
  TReferenceControllerBase<1> *pTStack_a4;
  undefined1 local_9c;
  undefined4 local_98;
  FGuid local_94;
  undefined1 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_78;
  TComponentTypeID<FGuid> local_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  FGuid local_58;
  FGuid local_48;
  FGuid local_38;
  FGuid local_28;
  
  pFVar7 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pUVar8 = UMovieSceneSequence::StaticClass();
  pUVar9 = (UMovieSceneSequence *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1].field_0x8,pUVar8);
  if (pUVar9 == (UMovieSceneSequence *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4374372943426224162>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Sections\\MovieSceneBindingLifetimeSection.cpp"
                       ,0x22,"Sequence");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar11 = (ulonglong)*(ushort *)&(param_2->Sequence).RootInstanceHandle * 0x140;
  lVar2 = *(longlong *)&((param_1->InstanceRegistry).Ptr)->Instances;
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar11 + 0x120 + lVar2);
  pFVar4 = *(FSharedPlaybackState **)(lVar11 + 0x118 + lVar2);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8.Object = pFVar4;
  local_d8.SharedReferenceCount.ReferenceController = pTVar3;
  pFVar10 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_c8);
  bVar6 = MovieSceneHelpers::IsBoundToAnySpawnable(pUVar9,pFVar10,&local_d8);
  pFVar10 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_58);
  TVar1 = pFVar7->GenericObjectBinding;
  local_d8.Object = *(FSharedPlaybackState **)pFVar10;
  local_d8.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar10->C;
  pFVar10 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_48);
  if ((((pFVar10->D == 0 && pFVar10->C == 0) && pFVar10->B == 0) && pFVar10->A == 0) || (!bVar6)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  pFVar10 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_38);
  uStack_6e = uVar12;
  local_70 = pFVar7->SpawnableBinding;
  local_c8.A = pFVar10->A;
  local_c8.B = pFVar10->B;
  local_c8.C = pFVar10->C;
  local_c8.D = pFVar10->D;
  pFVar10 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_28);
  local_98 = _local_70;
  bStackX_a = ((pFVar10->D != 0 || pFVar10->C != 0) || pFVar10->B != 0) || pFVar10->A != 0;
  local_res8 = pFVar7->BindingLifetime;
  local_ac = local_d8.Object;
  pTStack_a4 = local_d8.SharedReferenceCount.ReferenceController;
  local_80 = _local_res8;
  local_b8 = &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_9c = 1;
  local_84 = 1;
  local_94.A = local_c8.A;
  local_94.B = local_c8.B;
  local_94.C = local_c8.C;
  local_94.D = local_c8.D;
  local_7c = 0x100;
  local_78 = 0;
  local_b0 = TVar1;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
                      *)&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// PopulateEvaluationFieldImpl @ 146227fc0

bool __thiscall
UMovieSceneBindingLifetimeSection::PopulateEvaluationFieldImpl
          (UMovieSceneBindingLifetimeSection *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return true;
}

// StaticRegisterNativesUMovieSceneBindingLifetimeSection @ 146237b90

void __cdecl
UMovieSceneBindingLifetimeSection::StaticRegisterNativesUMovieSceneBindingLifetimeSection(void)

{
  return;
}

// _getUObject @ 146241e90

UObject * __thiscall
UMovieSceneBindingLifetimeSection::_getUObject(UMovieSceneBindingLifetimeSection *this)

{
  return (UObject *)&this[-1].field_0x8;
}

