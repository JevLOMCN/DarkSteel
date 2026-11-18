// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146724b20

UClass * __cdecl UMovieSceneCameraShakeSourceShakeSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceShakeSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceShakeSection,0x140,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceShakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton;
}

// UMovieSceneCameraShakeSourceShakeSection @ 1467626c0

UMovieSceneCameraShakeSourceShakeSection * __thiscall
UMovieSceneCameraShakeSourceShakeSection::UMovieSceneCameraShakeSourceShakeSection
          (UMovieSceneCameraShakeSourceShakeSection *this,FVTableHelper *param_1)

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
  return this;
}

// UMovieSceneCameraShakeSourceShakeSection @ 146762730

UMovieSceneCameraShakeSourceShakeSection * __thiscall
UMovieSceneCameraShakeSourceShakeSection::UMovieSceneCameraShakeSourceShakeSection
          (UMovieSceneCameraShakeSourceShakeSection *this,FObjectInitializer *param_1)

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
  *(undefined2 *)&this->_padding_ = 0x201;
  return this;
}

// ~UMovieSceneCameraShakeSourceShakeSection @ 146769f70

void __thiscall
UMovieSceneCameraShakeSourceShakeSection::~UMovieSceneCameraShakeSourceShakeSection
          (UMovieSceneCameraShakeSourceShakeSection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 146797c60

UClass * __cdecl UMovieSceneCameraShakeSourceShakeSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceShakeSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceShakeSection,0x140,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceShakeSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeSection.InnerSingleton;
}

// GetSourceObject @ 14679b350

UObject * __thiscall
UMovieSceneCameraShakeSourceShakeSection::GetSourceObject
          (UMovieSceneCameraShakeSourceShakeSection *this)

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

// ImportEntityImpl @ 14679d4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeSourceShakeSection::ImportEntityImpl
          (UMovieSceneCameraShakeSourceShakeSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  float fVar1;
  double dVar2;
  ECameraShakePlaySpace EVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  int iVar10;
  int iVar11;
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
  
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_1b8);
  local_150 = (TObjectPtr<UClass>_u_0)this->_padding_;
  local_198 = local_150;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150.DebugPtr != (UClass *)0x0))
  {
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
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  uVar6 = *(undefined8 *)((longlong)&this[-1]._padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&this[-1]._padding_ + 4);
  fVar1 = *(float *)&this->_padding_;
  dVar2 = (double)this->_padding_;
  iVar11 = iStack_1a4;
  if (local_1a8 == '\x02') {
    iVar11 = 0;
  }
  iVar10 = 0x7fffffff;
  if (cStack_1a0 != '\x02') {
    iVar10 = iStack_19c;
  }
  local_158 = pFVar9->CameraShake;
  bStack_106 = ((local_1b8.C != 0 || local_1b8.D != 0) || local_1b8.B != 0) || local_1b8.A != 0;
  local_108 = pFVar8->GenericObjectBinding;
  local_190 = fVar1;
  local_18c = EVar3;
  local_188 = dVar4;
  dStack_180 = dVar5;
  local_178 = dVar2;
  local_168._0_8_ = uVar6;
  local_168._8_8_ = uVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150.DebugPtr != (UClass *)0x0))
  {
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
  local_140 = dVar4;
  dStack_138 = dVar5;
  local_130 = dVar2;
  local_128.Value = iVar11;
  local_124.Value = iVar10;
  local_120._0_8_ = uVar6;
  local_120._8_8_ = uVar7;
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
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeSourceShakeSection @ 1467c2740

void __cdecl
UMovieSceneCameraShakeSourceShakeSection::
StaticRegisterNativesUMovieSceneCameraShakeSourceShakeSection(void)

{
  return;
}

// _getUObject @ 1467ca6f0

UObject * __thiscall
UMovieSceneCameraShakeSourceShakeSection::_getUObject
          (UMovieSceneCameraShakeSourceShakeSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

