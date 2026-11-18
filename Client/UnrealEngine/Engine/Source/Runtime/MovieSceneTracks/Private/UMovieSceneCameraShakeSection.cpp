// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146724c60

UClass * __cdecl UMovieSceneCameraShakeSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSection,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton;
}

// UMovieSceneCameraShakeSection @ 146762590

UMovieSceneCameraShakeSection * __thiscall
UMovieSceneCameraShakeSection::UMovieSceneCameraShakeSection
          (UMovieSceneCameraShakeSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->ShakeData).PlayScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ShakeData).ShakeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ShakeData).PlaySpace = CameraLocal;
  (this->ShakeData).UserDefinedPlaySpace.Pitch = 0.0;
  (this->ShakeData).UserDefinedPlaySpace.Yaw = 0.0;
  (this->ShakeData).UserDefinedPlaySpace.Roll = 0.0;
  (this->ShakeClass_DEPRECATED).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UMovieSceneCameraShakeSection @ 146762600

UMovieSceneCameraShakeSection * __thiscall
UMovieSceneCameraShakeSection::UMovieSceneCameraShakeSection
          (UMovieSceneCameraShakeSection *this,FObjectInitializer *param_1)

{
  double dVar1;
  int iVar2;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->ShakeData).PlayScale = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ShakeData).ShakeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ShakeData).PlaySpace = CameraLocal;
  (this->ShakeClass_DEPRECATED).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ShakeData).UserDefinedPlaySpace.Pitch = 0.0;
  (this->ShakeData).UserDefinedPlaySpace.Yaw = 0.0;
  (this->ShakeData).UserDefinedPlaySpace.Roll = 0.0;
  this->PlayScale_DEPRECATED = 1.0;
  this->PlaySpace_DEPRECATED = CameraLocal;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->UserDefinedPlaySpace_DEPRECATED).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->UserDefinedPlaySpace_DEPRECATED).Yaw = dVar1;
  (this->UserDefinedPlaySpace_DEPRECATED).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_18 = FSequencerObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  *(undefined1 *)&this->_padding_ = 1;
  *(char *)((longlong)&this->_padding_ + 1) = (5 < iVar2) + '\x01';
  return this;
}

// ~UMovieSceneCameraShakeSection @ 146769f40

void __thiscall
UMovieSceneCameraShakeSection::~UMovieSceneCameraShakeSection(UMovieSceneCameraShakeSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146797ba0

UClass * __cdecl UMovieSceneCameraShakeSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSection,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.InnerSingleton;
}

// GetSourceObject @ 14679b2e0

UObject * __thiscall
UMovieSceneCameraShakeSection::GetSourceObject(UMovieSceneCameraShakeSection *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ShakeData).ShakeClass.Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UObject *)(this->ShakeData).ShakeClass.Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UObject *)0x0;
}

// ImportEntityImpl @ 14679d290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeSection::ImportEntityImpl
          (UMovieSceneCameraShakeSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  float fVar1;
  double dVar2;
  ECameraShakePlaySpace EVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  UClass *pUVar10;
  FBuiltInComponentTypes *pFVar11;
  FMovieSceneTracksComponentTypes *pFVar12;
  int iVar13;
  int iVar14;
  FGuid local_1b8;
  char local_1a8;
  undefined1 uStack_1a7;
  undefined1 uStack_1a6;
  undefined1 uStack_1a5;
  int iStack_1a4;
  char cStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined1 uStack_19d;
  int iStack_19c;
  TObjectPtr<UClass>_u_0 local_198;
  float local_190;
  ECameraShakePlaySpace local_18c;
  double local_188;
  double dStack_180;
  double local_178;
  FGuid local_168;
  TComponentTypeID<FMovieSceneCameraShakeComponentData> local_158;
  TObjectPtr<UClass>_u_0 local_150;
  float local_148;
  ECameraShakePlaySpace local_144;
  double local_140;
  double dStack_138;
  double local_130;
  FFrameNumber local_128;
  FFrameNumber local_124;
  FGuid local_120;
  bool local_110;
  TComponentTypeID<FGuid> local_108;
  bool bStack_106;
  undefined1 uStack_105;
  undefined **local_f0 [3];
  undefined1 local_d4;
  TAdd<FMovieSceneCameraShakeComponentData> local_d0;
  undefined1 local_80;
  
  lVar4 = this->_padding_;
  if ((lVar4 != 0) &&
     (pUVar10 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar14 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar14) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar10->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (this->_padding_ != 0)) {
      pFVar11 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar12 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
      UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_1b8);
      local_150 = (TObjectPtr<UClass>_u_0)this->_padding_;
      local_198 = local_150;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_150.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
      }
      local_1a8 = (char)this[-1]._padding_;
      uStack_1a7 = *(undefined1 *)((longlong)&this[-1]._padding_ + 1);
      uStack_1a6 = *(undefined1 *)((longlong)&this[-1]._padding_ + 2);
      uStack_1a5 = *(undefined1 *)((longlong)&this[-1]._padding_ + 3);
      iStack_1a4 = *(int *)((longlong)&this[-1]._padding_ + 4);
      cStack_1a0 = (char)this[-1]._padding_;
      uStack_19f = *(undefined1 *)((longlong)&this[-1]._padding_ + 1);
      uStack_19e = *(undefined1 *)((longlong)&this[-1]._padding_ + 2);
      uStack_19d = *(undefined1 *)((longlong)&this[-1]._padding_ + 3);
      iStack_19c = *(int *)((longlong)&this[-1]._padding_ + 4);
      EVar3 = *(ECameraShakePlaySpace *)((longlong)&this->_padding_ + 4);
      dVar5 = (double)this->_padding_;
      dVar6 = (double)this->_padding_;
      uVar7 = *(undefined8 *)((longlong)&this[-1]._padding_ + 4);
      uVar8 = *(undefined8 *)((longlong)&this[-1]._padding_ + 4);
      fVar1 = *(float *)&this->_padding_;
      dVar2 = (double)this->_padding_;
      iVar14 = iStack_1a4;
      if (local_1a8 == '\x02') {
        iVar14 = 0;
      }
      iVar13 = 0x7fffffff;
      if (cStack_1a0 != '\x02') {
        iVar13 = iStack_19c;
      }
      local_158 = pFVar12->CameraShake;
      bStack_106 = ((local_1b8.C != 0 || local_1b8.D != 0) || local_1b8.B != 0) || local_1b8.A != 0;
      local_108 = pFVar11->GenericObjectBinding;
      local_190 = fVar1;
      local_18c = EVar3;
      local_188 = dVar5;
      dStack_180 = dVar6;
      local_178 = dVar2;
      local_168._0_8_ = uVar7;
      local_168._8_8_ = uVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_150.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
      }
      local_f0[0] = &
                    ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMovieSceneCameraShakeComponentData___34__MovieScene_UE__6B_
      ;
      local_f0[1]._0_4_ = _local_108;
      local_110 = true;
      local_d4 = 1;
      local_148 = fVar1;
      local_144 = EVar3;
      local_140 = dVar5;
      dStack_138 = dVar6;
      local_130 = dVar2;
      local_128.Value = iVar14;
      local_124.Value = iVar13;
      local_120._0_8_ = uVar7;
      local_120._8_8_ = uVar8;
      UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>::
      TAdd<FMovieSceneCameraShakeComponentData>
                (&local_d0,(TAdd<FMovieSceneCameraShakeComponentData> *)&local_158);
      local_80 = 0;
      local_f0[0] = &
                    ___7__TEntityBuilder_U__TAddConditional_UFGuid___MovieScene_UE__U__TAdd_UFMovieSceneCameraShakeComponentData___23__MovieScene_UE__6B_
      ;
      UE::MovieScene::FImportedEntity::
      AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>_>_>
                (param_3,(TEntityBuilder<UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAdd<FMovieSceneCameraShakeComponentData>_>
                          *)local_f0);
    }
  }
  return;
}

// PostLoad @ 1467b2010

void __thiscall UMovieSceneCameraShakeSection::PostLoad(UMovieSceneCameraShakeSection *this)

{
  double dVar1;
  int iVar2;
  UClass *pUVar3;
  double dVar4;
  bool bVar5;
  UClass *pUVar6;
  
  pUVar3 = (this->ShakeClass_DEPRECATED).Class.field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) &&
         (pUVar3 = (this->ShakeClass_DEPRECATED).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)
         ) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (this->ShakeData).ShakeClass.Class.field0_0x0 =
             (this->ShakeClass_DEPRECATED).Class.field0_0x0;
      }
    }
  }
  if (this->PlayScale_DEPRECATED != __real_3f800000) {
    (this->ShakeData).PlayScale = this->PlayScale_DEPRECATED;
  }
  if (this->PlaySpace_DEPRECATED != CameraLocal) {
    (this->ShakeData).PlaySpace = this->PlaySpace_DEPRECATED;
  }
  if (((UE::Math::TRotator<double>::ZeroRotator.Pitch !=
        (this->UserDefinedPlaySpace_DEPRECATED).Pitch) ||
      (UE::Math::TRotator<double>::ZeroRotator.Yaw != (this->UserDefinedPlaySpace_DEPRECATED).Yaw))
     || (UE::Math::TRotator<double>::ZeroRotator.Roll !=
         (this->UserDefinedPlaySpace_DEPRECATED).Roll)) {
    dVar4 = (this->UserDefinedPlaySpace_DEPRECATED).Yaw;
    dVar1 = (this->UserDefinedPlaySpace_DEPRECATED).Roll;
    (this->ShakeData).UserDefinedPlaySpace.Pitch = (this->UserDefinedPlaySpace_DEPRECATED).Pitch;
    (this->ShakeData).UserDefinedPlaySpace.Yaw = dVar4;
    (this->ShakeData).UserDefinedPlaySpace.Roll = dVar1;
  }
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeSection @ 1467c2730

void __cdecl UMovieSceneCameraShakeSection::StaticRegisterNativesUMovieSceneCameraShakeSection(void)

{
  return;
}

// _getUObject @ 1467ca6e0

UObject * __thiscall UMovieSceneCameraShakeSection::_getUObject(UMovieSceneCameraShakeSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

