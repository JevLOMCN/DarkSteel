// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 15

// StaticClass @ 146724d20

UClass * __cdecl UMovieSceneCameraCutSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutSection,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraCutSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton;
}

// UMovieSceneCameraCutSection @ 146762180

UMovieSceneCameraCutSection * __thiscall
UMovieSceneCameraCutSection::UMovieSceneCameraCutSection
          (UMovieSceneCameraCutSection *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->CameraBindingID).ResolveParentIndex = -1;
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  (this->CameraGuid_DEPRECATED).A = 0;
  (this->CameraGuid_DEPRECATED).B = 0;
  (this->CameraGuid_DEPRECATED).C = 0;
  (this->CameraGuid_DEPRECATED).D = 0;
  (this->CameraBindingID).Guid.A = 0;
  (this->CameraBindingID).Guid.B = 0;
  (this->CameraBindingID).Guid.C = 0;
  (this->CameraBindingID).Guid.D = 0;
  (this->CameraBindingID).SequenceID = 0;
  this->bLockPreviousCamera = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialCameraCutTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialCameraCutTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialCameraCutTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialCameraCutTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialCameraCutTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialCameraCutTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialCameraCutTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialCameraCutTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialCameraCutTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialCameraCutTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialCameraCutTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialCameraCutTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bHasInitialCameraCutTransform = false;
  return this;
}

// UMovieSceneCameraCutSection @ 146762250

UMovieSceneCameraCutSection * __thiscall
UMovieSceneCameraCutSection::UMovieSceneCameraCutSection
          (UMovieSceneCameraCutSection *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FMovieSceneBlendTypeField FVar9;
  bool bVar10;
  int iVar11;
  undefined7 extraout_var;
  FGuid local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  (this->CameraBindingID).ResolveParentIndex = -1;
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  this->bLockPreviousCamera = false;
  *(undefined ***)&this->field_0x110 = &_vftable__for__IMovieSceneEntityProvider__;
  (this->CameraGuid_DEPRECATED).A = 0;
  (this->CameraGuid_DEPRECATED).B = 0;
  (this->CameraGuid_DEPRECATED).C = 0;
  (this->CameraGuid_DEPRECATED).D = 0;
  (this->CameraBindingID).Guid.A = 0;
  (this->CameraBindingID).Guid.B = 0;
  (this->CameraBindingID).Guid.C = 0;
  (this->CameraBindingID).Guid.D = 0;
  (this->CameraBindingID).SequenceID = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->InitialCameraCutTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->bHasInitialCameraCutTransform = false;
  local_18 = FSequencerObjectVersion::GUID;
  iVar11 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  this->field_0x70 = 1;
  this->field_0x71 = (5 < iVar11) + '\x01';
  FVar9 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar10 = FMovieSceneBlendTypeField::Contains
                     ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar9.BlendTypeField),
                      Absolute);
  if (bVar10) {
    *(undefined2 *)&this->field_0xf1 = 0x101;
  }
  return this;
}

// ~UMovieSceneCameraCutSection @ 146769e80

void __thiscall
UMovieSceneCameraCutSection::~UMovieSceneCameraCutSection(UMovieSceneCameraCutSection *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneSection__;
  *(undefined ***)&this->field_0x110 = &___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// ComputeInitialCameraCutTransform @ 146783e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutSection::ComputeInitialCameraCutTransform(UMovieSceneCameraCutSection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneTrack *pUVar4;
  code *pcVar5;
  double dVar6;
  FEntityManager *pFVar7;
  bool bVar8;
  UClass *pUVar9;
  UMovieScene *this_00;
  FMovieSceneBinding *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_2e8 [48];
  undefined1 local_2b8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2b0;
  undefined4 local_2a0;
  int iStack_29c;
  undefined8 local_298;
  FInterrogationParams local_290;
  char local_288;
  undefined1 uStack_287;
  undefined1 uStack_286;
  undefined1 uStack_285;
  undefined1 uStack_284;
  undefined1 uStack_283;
  undefined1 uStack_282;
  undefined1 uStack_281;
  undefined1 uStack_280;
  undefined1 uStack_27f;
  undefined1 uStack_27e;
  undefined1 uStack_27d;
  undefined1 uStack_27c;
  undefined1 uStack_27b;
  undefined1 uStack_27a;
  undefined1 uStack_279;
  FSystemInterrogator local_278;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_288 = this->field_0xb0;
  uStack_287 = this->field_0xb1;
  uStack_286 = this->field_0xb2;
  uStack_285 = this->field_0xb3;
  uStack_284 = this->field_0xb4;
  uStack_283 = this->field_0xb5;
  uStack_282 = this->field_0xb6;
  uStack_281 = this->field_0xb7;
  uStack_280 = this->field_0xb8;
  uStack_27f = this->field_0xb9;
  uStack_27e = this->field_0xba;
  uStack_27d = this->field_0xbb;
  uStack_27c = this->field_0xbc;
  uStack_27b = this->field_0xbd;
  uStack_27a = this->field_0xbe;
  uStack_279 = this->field_0xbf;
  this->bHasInitialCameraCutTransform = false;
  if ((local_288 != '\x02') &&
     ((((this->CameraBindingID).Guid.D != 0 || (this->CameraBindingID).Guid.C != 0) ||
      (this->CameraBindingID).Guid.B != 0) || (this->CameraBindingID).Guid.A != 0)) {
    pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
    this_00 = (UMovieScene *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
    if ((this_00 == (UMovieScene *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("MovieScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCameraCutSection.cpp"
                           ,0x8b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = UMovieScene::FindBinding(this_00,&(this->CameraBindingID).Guid);
    if (pFVar10 != (FMovieSceneBinding *)0x0) {
      pFVar11 = (pFVar10->Tracks).AllocatorInstance.Data;
      iVar2 = (pFVar10->Tracks).ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar2 * 8;
      do {
        if ((pFVar10->Tracks).ArrayNum != iVar2) {
          local_2b8[0] = 0;
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        if (pFVar11 == pFVar1) {
          return;
        }
        pUVar4 = *(UMovieSceneTrack **)pFVar11;
        if (pUVar4 != (UMovieSceneTrack *)0x0) {
          pUVar9 = Z_Construct_UClass_UMovieScene3DTransformTrack_NoRegister();
          iVar3 = (int)pUVar9->_padding_;
          if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar9->_padding_)) {
            UE::MovieScene::FSystemInterrogator::FSystemInterrogator(&local_278);
            pFVar7 = UE::MovieScene::GEntityManagerForDebuggingVisualizers;
            UE::MovieScene::GEntityManagerForDebuggingVisualizers =
                 (FEntityManager *)((longlong)local_278.Linker.field0_0x0 + 0x28);
            UE::MovieScene::FSystemInterrogator::ImportTrack
                      (&local_278,pUVar4,(FInterrogationChannel)0x0,
                       (FMovieSceneSequenceID)0xffffffff);
            local_298 = *(undefined8 *)&this->field_0xb0;
            if ((char)local_298 == '\0') {
              iStack_29c = (int)((ulonglong)local_298 >> 0x20) + 1;
              local_2a0 = CONCAT31(local_2a0._1_3_,1);
              local_298 = CONCAT44(iStack_29c,local_2a0);
            }
            if (((char)local_298 == '\x02') &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_290.Time.FrameNumber.Value = local_298._4_4_;
            local_290.Time.SubFrame = 0.0;
            UE::MovieScene::FSystemInterrogator::AddInterrogation(&local_278,&local_290);
            UE::MovieScene::FSystemInterrogator::Update(&local_278);
            local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2b0.ArrayNum = 0;
            local_2b0.ArrayMax = 0;
            UE::MovieScene::FInterrogationChannels::QueryWorldSpaceTransforms
                      (&local_278.Channels,
                       (UMovieSceneEntitySystemLinker *)local_278.Linker.field0_0x0,
                       (FInterrogationChannel)0x0,&local_2b0);
            if (0 < local_2b0.ArrayNum) {
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 8);
              (this->InitialCameraCutTransform).Rotation.XY.m128d_f64[0] =
                   *(double *)local_2b0.AllocatorInstance.Data;
              (this->InitialCameraCutTransform).Rotation.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 0x18);
              (this->InitialCameraCutTransform).Rotation.ZW.m128d_f64[0] =
                   *(double *)(local_2b0.AllocatorInstance.Data + 0x10);
              (this->InitialCameraCutTransform).Rotation.ZW.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 0x28);
              (this->InitialCameraCutTransform).Translation.XY.m128d_f64[0] =
                   *(double *)(local_2b0.AllocatorInstance.Data + 0x20);
              (this->InitialCameraCutTransform).Translation.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 0x38);
              (this->InitialCameraCutTransform).Translation.ZW.m128d_f64[0] =
                   *(double *)(local_2b0.AllocatorInstance.Data + 0x30);
              (this->InitialCameraCutTransform).Translation.ZW.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 0x48);
              (this->InitialCameraCutTransform).Scale3D.XY.m128d_f64[0] =
                   *(double *)(local_2b0.AllocatorInstance.Data + 0x40);
              (this->InitialCameraCutTransform).Scale3D.XY.m128d_f64[1] = dVar6;
              dVar6 = *(double *)(local_2b0.AllocatorInstance.Data + 0x58);
              (this->InitialCameraCutTransform).Scale3D.ZW.m128d_f64[0] =
                   *(double *)(local_2b0.AllocatorInstance.Data + 0x50);
              (this->InitialCameraCutTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
              this->bHasInitialCameraCutTransform = true;
            }
            if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.AllocatorInstance.Data);
            }
            UE::MovieScene::GEntityManagerForDebuggingVisualizers = pFVar7;
            UE::MovieScene::FSystemInterrogator::~FSystemInterrogator(&local_278);
            return;
          }
        }
        pFVar11 = pFVar11 + 8;
      } while( true );
    }
  }
  return;
}

// GetFirstCamera @ 146794aa0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraComponent * __thiscall
UMovieSceneCameraCutSection::GetFirstCamera
          (UMovieSceneCameraCutSection *this,IMovieScenePlayer *param_1,
          FMovieSceneSequenceID param_2)

{
  UObject *pUVar1;
  UCameraComponent *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_18;
  
  FMovieSceneObjectBindingID::ResolveBoundObjects(&this->CameraBindingID,&local_18,param_2,param_1);
  pFVar3 = &(local_18.DataPtr)->WeakPtr;
  while( true ) {
    if (pFVar3 == &local_18.DataPtr[local_18.ArrayNum].WeakPtr) {
      return (UCameraComponent *)0x0;
    }
    local_res8 = *pFVar3;
    pUVar1 = FWeakObjectPtr::Get(&local_res8);
    if ((pUVar1 != (UObject *)0x0) &&
       (pUVar2 = MovieSceneHelpers::CameraComponentFromRuntimeObject(pUVar1),
       pUVar2 != (UCameraComponent *)0x0)) break;
    pFVar3 = pFVar3 + 1;
  }
  return pUVar2;
}

// GetPrivateStaticClass @ 146797960

UClass * __cdecl UMovieSceneCameraCutSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraCutSection",
               &Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraCutSection,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraCutSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraCutSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraCutSection.InnerSingleton;
}

// GetReferencedBindings @ 1467999a0

void __thiscall
UMovieSceneCameraCutSection::GetReferencedBindings
          (UMovieSceneCameraCutSection *this,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  FMovieSceneObjectBindingID *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  
  pFVar1 = &this->CameraBindingID;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((pFVar2 <= pFVar1) && (pFVar1 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&(this->CameraBindingID).Guid.C;
  pFVar2 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&pFVar1->Guid;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return;
}

// ImportEntityImpl @ 14679d180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCameraCutSection::ImportEntityImpl
          (UMovieSceneCameraCutSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  FBuiltInComponentTypes *pFVar4;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> local_68;
  TObjectPtr<UMovieSceneSection>_u_0 local_60;
  TObjectPtr<UClass>_u_0 local_58;
  bool local_50;
  undefined **local_48;
  ushort local_40;
  TAdd<FMovieSceneTrackInstanceComponent> local_38;
  undefined1 local_18;
  
  puVar1 = &this[-1].field_0xb0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  TVar3.DebugPtr = Z_Construct_UClass_UMovieSceneCameraCutTrackInstance_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar2 = (pFVar4->Tags).Root.Value;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_68 = pFVar4->TrackInstance;
  local_60 = (TObjectPtr<UMovieSceneSection>_u_0)puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  local_58.DebugPtr = TVar3.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_50 = true;
  local_48 = &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___34__MovieScene_UE__6B_
  ;
  local_40 = uVar2;
  UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>::TAdd<FMovieSceneTrackInstanceComponent>
            (&local_38,(TAdd<FMovieSceneTrackInstanceComponent> *)&local_68);
  local_18 = 0;
  local_48 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___23__MovieScene_UE__6B_
  ;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>
                      *)&local_48);
  return;
}

// OnBindingIDsUpdated @ 1467a85f0

void __thiscall
UMovieSceneCameraCutSection::OnBindingIDsUpdated
          (UMovieSceneCameraCutSection *this,
          TMap<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>_>
          *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_3)

{
  FMovieSceneObjectBindingID *this_00;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  FMovieSceneSequenceHierarchy *pFVar8;
  FRelativeObjectBindingID *pFVar9;
  longlong lVar10;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_58;
  FFixedObjectBindingID local_48;
  FRelativeObjectBindingID local_30;
  
  local_58.Object = param_3->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->CameraBindingID;
  FMovieSceneObjectBindingID::ResolveToFixed(this_00,&local_48,param_2,&local_58);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) goto LAB_1467a8719;
  pFVar8 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(param_3->Object);
  uVar7 = CityHash64((char *)&local_48,0x10);
  iVar6 = TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::MovieScene::FFixedObjectBindingID>
                    ((TSet<TTuple<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FFixedObjectBindingID,UE::MovieScene::FFixedObjectBindingID,0>,FDefaultSetAllocator>
                      *)param_1,(uint)uVar7 ^ local_48.SequenceID.Value,&local_48);
  if (iVar6 == -1) {
    lVar10 = 0;
LAB_1467a86ba:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    lVar10 = (longlong)iVar6 * 0x30 + *(longlong *)param_1;
    if (lVar10 == 0) goto LAB_1467a86ba;
  }
  pFVar9 = UE::MovieScene::FFixedObjectBindingID::ConvertToRelative
                     ((FFixedObjectBindingID *)(lVar10 + 0x14),&local_30,param_2,pFVar8);
  uVar2 = (pFVar9->Guid).B;
  uVar3 = (pFVar9->Guid).C;
  uVar4 = (pFVar9->Guid).D;
  (this_00->Guid).A = (pFVar9->Guid).A;
  (this_00->Guid).B = uVar2;
  (this->CameraBindingID).Guid.C = uVar3;
  (this->CameraBindingID).Guid.D = uVar4;
  (this->CameraBindingID).SequenceID = (pFVar9->SequenceID).Value;
  (this->CameraBindingID).ResolveParentIndex = pFVar9->ResolveParentIndex;
LAB_1467a8719:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// PostLoad @ 1467b1f90

void __thiscall UMovieSceneCameraCutSection::PostLoad(UMovieSceneCameraCutSection *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  UMovieSceneSignedObject::PostLoad((UMovieSceneSignedObject *)this);
  if ((((this->CameraGuid_DEPRECATED).C != 0 || (this->CameraGuid_DEPRECATED).D != 0) ||
      (this->CameraGuid_DEPRECATED).B != 0) || (this->CameraGuid_DEPRECATED).A != 0) {
    if ((((this->CameraBindingID).Guid.D == 0 && (this->CameraBindingID).Guid.C == 0) &&
        (this->CameraBindingID).Guid.B == 0) && (this->CameraBindingID).Guid.A == 0) {
      uVar1 = (this->CameraGuid_DEPRECATED).A;
      uVar2 = (this->CameraGuid_DEPRECATED).B;
      uVar3 = (this->CameraGuid_DEPRECATED).C;
      uVar4 = (this->CameraGuid_DEPRECATED).D;
      (this->CameraBindingID).SequenceID = 0;
      (this->CameraBindingID).ResolveParentIndex = 0;
      (this->CameraBindingID).Guid.A = uVar1;
      (this->CameraBindingID).Guid.B = uVar2;
      (this->CameraBindingID).Guid.C = uVar3;
      (this->CameraBindingID).Guid.D = uVar4;
    }
    (this->CameraGuid_DEPRECATED).C = 0;
    (this->CameraGuid_DEPRECATED).D = 0;
    (this->CameraGuid_DEPRECATED).A = 0;
    (this->CameraGuid_DEPRECATED).B = 0;
  }
  return;
}

// StaticRegisterNativesUMovieSceneCameraCutSection @ 1467c26d0

void __cdecl UMovieSceneCameraCutSection::StaticRegisterNativesUMovieSceneCameraCutSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCameraCutSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca6d0

UObject * __thiscall UMovieSceneCameraCutSection::_getUObject(UMovieSceneCameraCutSection *this)

{
  return (UObject *)&this[-1].field_0xb0;
}

// execGetCameraBindingID @ 1467cb6a0

void __cdecl
UMovieSceneCameraCutSection::execGetCameraBindingID(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[7].field_0x1c;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[7].field_0x14;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&param_1[7].field_0x24;
  return;
}

// execSetCameraBindingID @ 1467cc6b0

void __cdecl
UMovieSceneCameraCutSection::execSetCameraBindingID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_28 [32];
  
  local_28[0x14] = 0xff;
  local_28[0x15] = 0xff;
  local_28[0x16] = 0xff;
  local_28[0x17] = 0xff;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar17 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar17[1];
  uVar3 = puVar17[2];
  uVar4 = puVar17[3];
  uVar5 = puVar17[4];
  uVar6 = puVar17[5];
  uVar7 = puVar17[6];
  uVar8 = puVar17[7];
  uVar9 = puVar17[8];
  uVar10 = puVar17[9];
  uVar11 = puVar17[10];
  uVar12 = puVar17[0xb];
  uVar13 = puVar17[0xc];
  uVar14 = puVar17[0xd];
  uVar15 = puVar17[0xe];
  uVar16 = puVar17[0xf];
  param_1[7].field_0x14 = puVar17[0];
  param_1[7].field_0x15 = uVar2;
  param_1[7].field_0x16 = uVar3;
  param_1[7].field_0x17 = uVar4;
  param_1[7].field_0x18 = uVar5;
  param_1[7].field_0x19 = uVar6;
  param_1[7].field_0x1a = uVar7;
  param_1[7].field_0x1b = uVar8;
  param_1[7].field_0x1c = uVar9;
  param_1[7].field_0x1d = uVar10;
  param_1[7].field_0x1e = uVar11;
  param_1[7].field_0x1f = uVar12;
  param_1[7].field_0x20 = uVar13;
  param_1[7].field_0x21 = uVar14;
  param_1[7].field_0x22 = uVar15;
  param_1[7].field_0x23 = uVar16;
  *(undefined8 *)&param_1[7].field_0x24 = *(undefined8 *)(puVar17 + 0x10);
  return;
}

