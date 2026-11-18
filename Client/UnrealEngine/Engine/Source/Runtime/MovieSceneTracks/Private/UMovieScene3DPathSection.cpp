// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 9

// StaticClass @ 146592640

UClass * __cdecl UMovieScene3DPathSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DPathSection",
               &Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DPathSection,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DPathSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DPathSection>,local_res8,
               UMovieScene3DConstraintSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton;
}

// UMovieScene3DPathSection @ 146618e30

UMovieScene3DPathSection * __thiscall
UMovieScene3DPathSection::UMovieScene3DPathSection
          (UMovieScene3DPathSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieScene3DPathSection__6B_;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->TimingCurve);
  return this;
}

// UMovieScene3DPathSection @ 146618ea0

UMovieScene3DPathSection * __thiscall
UMovieScene3DPathSection::UMovieScene3DPathSection
          (UMovieScene3DPathSection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  UMovieScene3DPathSection *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieScene3DPathSection__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xffffffff;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(&this->TimingCurve);
  this->FrontAxisEnum = Y;
  this->UpAxisEnum = Z;
  puVar3 = &this->field_0x264;
  this->bFollow = 1;
  this->bForceUpright = 0;
  this->bReverse = 0;
  pTVar8 = ::operator_new(0x68);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneFloatChannel>
              ((FMovieSceneChannelProxy *)(pTVar8 + 1),&this->TimingCurve);
    pTVar11 = pTVar8 + 1;
    pTVar10 = pTVar8;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pUVar9 = (UMovieScene3DPathSection *)(*pcVar6)();
        return pUVar9;
      }
      goto LAB_146619013;
    }
  }
  if (((pTVar11->_padding_ == 0) || (*(longlong *)&pTVar11->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar11->SharedReferenceCount + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar11->_padding_ = (longlong)pTVar11;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pTVar11->SharedReferenceCount;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar11->SharedReferenceCount = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146619013:
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar11;
  local_20.ReferenceController = pTVar10;
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_28) {
    this->_padding_ = (longlong)pTVar11;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return this;
}

// ~UMovieScene3DPathSection @ 1466214c0

void __thiscall UMovieScene3DPathSection::~UMovieScene3DPathSection(UMovieScene3DPathSection *this)

{
  this->_padding_ = (longlong)&___7UMovieScene3DPathSection__6B_;
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel(&this->TimingCurve);
  this->_padding_ = (longlong)&___7UMovieScene3DConstraintSection__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// Eval @ 1466683b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieScene3DPathSection::Eval
          (UMovieScene3DPathSection *this,USceneComponent *param_1,FFrameTime param_2,
          USplineComponent *param_3,TVector<double> *param_4,TRotator<double> *param_5)

{
  MovieScene3DPathSection_Axis MVar1;
  double dVar2;
  TRotationMatrix<double> *pTVar3;
  TRotator<double> *pTVar4;
  TTransform<double> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_238 [32];
  float local_208 [2];
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  double dStack_1d0;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_208[0] = 0.0;
  FMovieSceneFloatChannel::Evaluate(&this->TimingCurve,param_2,local_208);
  if (0.0 <= local_208[0]) {
    if (__real_3f800000 < local_208[0]) {
      local_208[0] = __real_3f800000;
    }
  }
  else {
    local_208[0] = 0.0;
  }
  if (this->bReverse != 0) {
    local_208[0] = __real_3f800000 - local_208[0];
  }
  USplineComponent::GetLocationAtTime
            (param_3,(TVector<double> *)&local_200._s_0,local_208[0],World,true);
  (param_4->field0_0x0)._s_0.X = local_200._s_0.X;
  (param_4->field0_0x0)._s_0.Y = local_200._s_0.Y;
  (param_4->field0_0x0)._s_0.Z = local_200._s_0.Z;
  USplineComponent::GetRotationAtTime
            (param_3,(TRotator<double> *)&local_200._s_0,local_208[0],World,true);
  param_5->Pitch = local_200._s_0.X;
  param_5->Yaw = local_200._s_0.Y;
  param_5->Roll = local_200._s_0.Z;
  pTVar3 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
                     ((TRotationMatrix<double> *)&local_148,param_5);
  local_1c8.M[0][0] = *(double *)pTVar3;
  local_1c8.M[0][1] = *(double *)&pTVar3->field_0x8;
  local_1c8.M[0][2] = *(double *)&pTVar3->field_0x10;
  local_1c8.M[0][3] = *(double *)&pTVar3->field_0x18;
  local_1c8.M[1][0] = *(double *)&pTVar3->field_0x20;
  local_1c8.M[1][1] = *(double *)&pTVar3->field_0x28;
  local_1c8.M[1][2] = *(double *)&pTVar3->field_0x30;
  local_1c8.M[1][3] = *(double *)&pTVar3->field_0x38;
  local_1c8.M[2][0] = *(double *)&pTVar3->field_0x40;
  local_1c8.M[2][1] = *(double *)&pTVar3->field_0x48;
  local_1c8.M[2][2] = *(double *)&pTVar3->field_0x50;
  local_1c8.M[2][3] = *(double *)&pTVar3->field_0x58;
  local_1c8.M[3][0] = *(double *)&pTVar3->field_0x60;
  local_1c8.M[3][1] = *(double *)&pTVar3->field_0x68;
  local_1c8.M[3][2] = *(double *)&pTVar3->field_0x70;
  local_1c8.M[3][3] = *(double *)&pTVar3->field_0x78;
  MVar1 = this->UpAxisEnum;
  local_1e8._s_0.Z = 0.0;
  uVar11 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  local_1e8._s_0.X = 0.0;
  local_1e8._s_0.Y = 0.0;
  if (MVar1 == X) {
    local_1e8._0_8_ = __real_3ff0000000000000;
  }
  else if (MVar1 == NEG_X) {
    local_1e8._0_8_ = __real_bff0000000000000;
  }
  else if (MVar1 == Y) {
    local_1e8._8_8_ = __real_3ff0000000000000;
  }
  else if (MVar1 == NEG_Y) {
    local_1e8._8_8_ = __real_bff0000000000000;
  }
  else if (MVar1 == Z) {
    local_1e8._16_8_ = __real_3ff0000000000000;
  }
  else if (MVar1 == NEG_Z) {
    local_1e8._16_8_ = __real_bff0000000000000;
  }
  MVar1 = this->FrontAxisEnum;
  uVar6 = SUB84(__real_8000000000000000,0);
  uVar8 = (undefined4)((ulonglong)__real_8000000000000000 >> 0x20);
  uVar7 = uVar6;
  uVar9 = uVar8;
  uVar10 = uVar6;
  uVar12 = uVar8;
  local_200._0_8_ = __real_bff0000000000000;
  if ((((MVar1 != X) &&
       (uVar13 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20),
       local_200._0_8_ = __real_3ff0000000000000, MVar1 != NEG_X)) &&
      (uVar7 = SUB84(__real_bff0000000000000,0), uVar9 = uVar11,
      local_200._0_8_ = __real_8000000000000000, MVar1 != Y)) &&
     (((uVar7 = SUB84(__real_3ff0000000000000,0), uVar9 = uVar13, MVar1 != NEG_Y &&
       (uVar7 = uVar6, uVar9 = uVar8, uVar10 = SUB84(__real_bff0000000000000,0), uVar12 = uVar11,
       MVar1 != Z)) && (uVar10 = uVar6, uVar12 = uVar8, MVar1 == NEG_Z)))) {
    uVar10 = SUB84(__real_3ff0000000000000,0);
    uVar12 = uVar13;
  }
  local_200._s_0.Y = (double)CONCAT44(uVar9,uVar7);
  local_200._s_0.Z = (double)CONCAT44(uVar12,uVar10);
  UE::Math::TRotationMatrix<double>::MakeFromXZ
            (&local_c8,(TVector<double> *)&local_200._s_0,(TVector<double> *)&local_1e8._s_0);
  VectorMatrixMultiply(&local_148,&local_c8,&local_1c8);
  local_1c8.M[0][0] = local_148.M[0][0];
  local_1c8.M[0][1] = local_148.M[0][1];
  local_1c8.M[0][2] = local_148.M[0][2];
  local_1c8.M[0][3] = local_148.M[0][3];
  local_1c8.M[1][0] = local_148.M[1][0];
  local_1c8.M[1][1] = local_148.M[1][1];
  local_1c8.M[1][2] = local_148.M[1][2];
  local_1c8.M[1][3] = local_148.M[1][3];
  local_1c8.M[2][0] = local_148.M[2][0];
  local_1c8.M[2][1] = local_148.M[2][1];
  local_1c8.M[2][2] = local_148.M[2][2];
  local_1c8.M[2][3] = local_148.M[2][3];
  local_1c8.M[3][0] = local_148.M[3][0];
  local_1c8.M[3][1] = local_148.M[3][1];
  local_1c8.M[3][2] = local_148.M[3][2];
  local_1c8.M[3][3] = local_148.M[3][3];
  pTVar4 = UE::Math::TMatrix<double>::Rotator(&local_1c8,(TRotator<double> *)&local_200._s_0);
  dVar2 = pTVar4->Yaw;
  param_5->Pitch = pTVar4->Pitch;
  param_5->Yaw = dVar2;
  param_5->Roll = pTVar4->Roll;
  if (this->bForceUpright != 0) {
    param_5->Pitch = 0.0;
    param_5->Roll = 0.0;
  }
  if (this->bFollow == 0) {
    pTVar5 = USceneComponent::GetRelativeTransform(param_1,(TTransform<double> *)&local_148);
    local_1e8._s_0.X = (pTVar5->Rotation).XY.m128d_f64[0];
    local_1e8._s_0.Y = (pTVar5->Rotation).XY.m128d_f64[1];
    local_1e8._s_0.Z = (pTVar5->Rotation).ZW.m128d_f64[0];
    dStack_1d0 = (pTVar5->Rotation).ZW.m128d_f64[1];
    pTVar4 = UE::Math::TQuat<double>::Rotator
                       ((TQuat<double> *)&local_1e8._s_0,(TRotator<double> *)&local_200._s_0);
    dVar2 = pTVar4->Yaw;
    param_5->Pitch = pTVar4->Pitch;
    param_5->Yaw = dVar2;
    param_5->Roll = pTVar4->Roll;
  }
  return;
}

// GetPrivateStaticClass @ 146696040

UClass * __cdecl UMovieScene3DPathSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DPathSection",
               &Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton,
               StaticRegisterNativesUMovieScene3DPathSection,0x268,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScene3DPathSection>,
               InternalVTableHelperCtorCaller<UMovieScene3DPathSection>,local_res8,
               UMovieScene3DConstraintSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DPathSection.InnerSingleton;
}

// InitialPlacement @ 14669d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMovieScene3DPathSection::InitialPlacement
          (UMovieScene3DPathSection *this,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_1,FFrameNumber param_2,
          int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  TMovieSceneChannelData<FMovieSceneFloatValue> local_80;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_4b;
  undefined2 local_47;
  undefined1 local_45;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined2 local_27;
  undefined1 local_25;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UMovieSceneSection::InitialPlacement((UMovieSceneSection *)this,param_1,param_2,param_3,param_4);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_80,(FMovieSceneChannel *)&this->TimingCurve,
             &(this->TimingCurve).Times,(FKeyHandleLookupTable *)&(this->TimingCurve).KeyHandles);
  local_80.Values = &(this->TimingCurve).Values;
  if ((local_80._padding_ == 0) ||
     (local_80.Values == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_50 = 0;
  local_4c = 0;
  local_45 = 0;
  local_4b = 0x2000000;
  local_47 = 0;
  local_60 = 0;
  uStack_58 = 0;
  TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
            (&local_80,(FFrameNumber)(int)local_88,
             (FMovieSceneFloatValue *)(ulonglong)(uint)param_2.Value);
  if (0 < param_3) {
    local_30 = 0;
    local_25 = 0;
    local_2c = 0;
    local_2b = 0x2000000;
    local_40 = ___xmm_0000000000000000000000003f800000;
    uStack_38 = _UNK_1506894f8;
    local_27 = 0;
    TMovieSceneChannelData<FMovieSceneFloatValue>::UpdateOrAddKey
              (&local_80,(FFrameNumber)(int)local_84,
               (FMovieSceneFloatValue *)(ulonglong)(uint)(param_3 + param_2.Value));
  }
  return;
}

// SetPathBindingID @ 1466fb1b0

void __thiscall
UMovieScene3DPathSection::SetPathBindingID
          (UMovieScene3DPathSection *this,FMovieSceneObjectBindingID *param_1)

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

// StaticRegisterNativesUMovieScene3DPathSection @ 1466fe710

void __cdecl UMovieScene3DPathSection::StaticRegisterNativesUMovieScene3DPathSection(void)

{
  return;
}

