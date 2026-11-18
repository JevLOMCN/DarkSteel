// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146592020

UClass * __cdecl UMovieScene3DAttachSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DAttachSection",
               &Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DAttachSection,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DAttachSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DAttachSection>,local_res8,
               UMovieScene3DConstraintSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton;
}

// UMovieScene3DAttachSection @ 146618c30

UMovieScene3DAttachSection * __thiscall
UMovieScene3DAttachSection::UMovieScene3DAttachSection
          (UMovieScene3DAttachSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieScene3DConstraintSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->AttachSocketName).ComparisonIndex = 0;
  (this->AttachSocketName).Number = 0;
  (this->AttachComponentName).ComparisonIndex = 0;
  (this->AttachComponentName).Number = 0;
  return this;
}

// UMovieScene3DAttachSection @ 146618cb0

UMovieScene3DAttachSection * __thiscall
UMovieScene3DAttachSection::UMovieScene3DAttachSection
          (UMovieScene3DAttachSection *this,FObjectInitializer *param_1)

{
  int iVar1;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieScene3DConstraintSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->AttachSocketName).ComparisonIndex = 0;
  (this->AttachSocketName).Number = 0;
  (this->AttachComponentName).ComparisonIndex = 0;
  (this->AttachComponentName).Number = 0;
  this->AttachmentLocationRule = KeepRelative;
  this->AttachmentRotationRule = KeepRelative;
  this->AttachmentScaleRule = KeepRelative;
  this->DetachmentLocationRule = KeepRelative;
  this->DetachmentRotationRule = KeepRelative;
  this->DetachmentScaleRule = KeepRelative;
  *(undefined1 *)&this->_padding_ = 1;
  local_18 = FSequencerObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar1) + '\x01';
  return this;
}

// ~UMovieScene3DAttachSection @ 146621470

void __thiscall
UMovieScene3DAttachSection::~UMovieScene3DAttachSection(UMovieScene3DAttachSection *this)

{
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  this->_padding_ = (longlong)&___7UMovieScene3DConstraintSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146695ec0

UClass * __cdecl UMovieScene3DAttachSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DAttachSection",
               &Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DAttachSection,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DAttachSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DAttachSection>,local_res8,
               UMovieScene3DConstraintSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DAttachSection.InnerSingleton;
}

// ImportEntityImpl @ 14669b770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieScene3DAttachSection::ImportEntityImpl
          (UMovieScene3DAttachSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  FGuid *pFVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  undefined2 uStack_b2;
  undefined **local_b0;
  TComponentTypeID<FGuid> local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined1 local_94;
  TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> local_90;
  code *local_88;
  undefined1 local_80;
  TComponentTypeID<FMovieSceneObjectBindingID> local_78;
  FName local_74;
  FName FStack_6c;
  undefined8 local_64;
  undefined1 local_5c;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> local_58;
  longlong local_54;
  longlong lStack_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_38;
  FGuid local_30;
  
  if (((this[-1].AttachComponentName.Number != 0 ||
       this[-1].AttachComponentName.ComparisonIndex.Value != 0) ||
      this[-1].AttachSocketName.Number != 0) || this[-1].AttachSocketName.ComparisonIndex.Value != 0
     ) {
    pFVar4 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_30);
    if (((pFVar4->D != 0 || pFVar4->C != 0) || pFVar4->B != 0) || pFVar4->A != 0) {
      pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      lVar1 = this->_padding_;
      lVar2 = this->_padding_;
      lVar3 = this->_padding_;
      pFVar4 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_30);
      local_64._0_1_ = this[-1].AttachmentLocationRule;
      local_64._1_1_ = this[-1].AttachmentRotationRule;
      local_64._2_1_ = this[-1].AttachmentScaleRule;
      local_64._3_1_ = this[-1].DetachmentLocationRule;
      local_64._4_1_ = this[-1].DetachmentRotationRule;
      local_64._5_1_ = this[-1].DetachmentScaleRule;
      local_64._6_2_ = *(undefined2 *)&this[-1].field_0x156;
      local_58 = pFVar6->AttachComponent;
      local_a8 = pFVar5->GenericObjectBinding;
      local_a4._0_4_ = pFVar4->A;
      local_a4._4_4_ = pFVar4->B;
      uStack_9c._0_4_ = pFVar4->C;
      uStack_9c._4_4_ = pFVar4->D;
      local_90 = pFVar5->BoundObjectResolver;
      local_88 = MovieSceneHelpers::ResolveSceneComponentBoundObject;
      local_74 = this[-1].AttachSocketName;
      FStack_6c = this[-1].AttachComponentName;
      local_78 = pFVar6->AttachParentBinding;
      local_44._6_2_ = uStack_b2;
      local_44._0_6_ = (int6)lVar3;
      local_94 = 1;
      local_80 = 1;
      local_5c = 1;
      local_3c = 1;
      local_38 = 0;
      local_b0 = &
                 ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAdd_P6APEAVUObject__PEAV1__Z_23_U__TAdd_UFMovieSceneObjectBindingID___23_U__TAdd_UFAttachmentComponent_MovieScene_UE___23__MovieScene_UE__6B_
      ;
      local_54 = lVar1;
      lStack_4c = lVar2;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAdd<UObject_*_(__cdecl*)(UObject_*)>,UE::MovieScene::TAdd<FMovieSceneObjectBindingID>,UE::MovieScene::TAdd<UE::MovieScene::FAttachmentComponent>_>
                          *)&local_b0);
    }
  }
  return;
}

// SetAttachTargetID @ 1466f83a0

void __thiscall
UMovieScene3DAttachSection::SetAttachTargetID
          (UMovieScene3DAttachSection *this,FMovieSceneObjectBindingID *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = UMovieSceneSection::TryModify((UMovieSceneSection *)this,true);
  if (bVar2) {
    lVar1 = *(longlong *)&(param_1->Guid).C;
    this->_padding_ = *(longlong *)&param_1->Guid;
    this->_padding_ = lVar1;
    this->_padding_ = *(longlong *)&param_1->SequenceID;
  }
  return;
}

// StaticRegisterNativesUMovieScene3DAttachSection @ 1466fe6c0

void __cdecl UMovieScene3DAttachSection::StaticRegisterNativesUMovieScene3DAttachSection(void)

{
  return;
}

// _getUObject @ 146720b40

UObject * __thiscall UMovieScene3DAttachSection::_getUObject(UMovieScene3DAttachSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

