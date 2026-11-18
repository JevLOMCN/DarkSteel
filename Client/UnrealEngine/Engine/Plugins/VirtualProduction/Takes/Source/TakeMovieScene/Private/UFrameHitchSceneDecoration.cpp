// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 7

// StaticClass @ 14d0b8b70

UClass * __cdecl UFrameHitchSceneDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"FrameHitchSceneDecoration",
               &Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton,
               StaticRegisterNativesUFrameHitchSceneDecoration,0x938,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFrameHitchSceneDecoration>,
               InternalVTableHelperCtorCaller<UFrameHitchSceneDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton;
}

// UFrameHitchSceneDecoration @ 14d0b97c0

UFrameHitchSceneDecoration * __thiscall
UFrameHitchSceneDecoration::UFrameHitchSceneDecoration
          (UFrameHitchSceneDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFrameHitchSceneDecoration__6B_;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).FramesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).FramesCurve);
  (this->TimecodeProviderFrameRate).Numerator = 60000;
  (this->TimecodeProviderFrameRate).Denominator = 1;
  (this->RecordFrameRate).Numerator = 60000;
  (this->RecordFrameRate).Denominator = 1;
  return this;
}

// UFrameHitchSceneDecoration @ 14d0b9880

UFrameHitchSceneDecoration * __thiscall
UFrameHitchSceneDecoration::UFrameHitchSceneDecoration
          (UFrameHitchSceneDecoration *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFrameHitchSceneDecoration__6B_;
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->TargetTimecode).FramesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).HoursCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::FMovieSceneIntegerChannel(&(this->ActualTimecode).FramesCurve);
  (this->TimecodeProviderFrameRate).Numerator = 60000;
  (this->TimecodeProviderFrameRate).Denominator = 1;
  (this->RecordFrameRate).Numerator = 60000;
  (this->RecordFrameRate).Denominator = 1;
  return this;
}

// ~UFrameHitchSceneDecoration @ 14d0b9c00

void __thiscall
UFrameHitchSceneDecoration::~UFrameHitchSceneDecoration(UFrameHitchSceneDecoration *this)

{
  this->_padding_ = (longlong)&___7UFrameHitchSceneDecoration__6B_;
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->ActualTimecode).HoursCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).FramesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).SecondsCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).MinutesCurve);
  FMovieSceneIntegerChannel::~FMovieSceneIntegerChannel(&(this->TargetTimecode).HoursCurve);
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 14d0ba580

TOptional<UE::TakeMovieScene::FFrameHitchData> * __thiscall
UFrameHitchSceneDecoration::Evaluate
          (UFrameHitchSceneDecoration *this,
          TOptional<UE::TakeMovieScene::FFrameHitchData> *__return_storage_ptr__,FFrameTime *param_1
          )

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TOptional<FTimecode> local_78;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  TOptional<FTimecode> local_48;
  int iStack_2c;
  int local_28;
  int iStack_24;
  float fStack_20;
  bool bStack_1c;
  undefined3 uStack_1b;
  bool local_18;
  
  FTakeMovieSceneHitchTimecodeCurves::Evaluate(&this->TargetTimecode,&local_78,param_1);
  FTakeMovieSceneHitchTimecodeCurves::Evaluate(&this->ActualTimecode,&local_48,param_1);
  uVar3 = local_48.TypedValue._20_4_;
  fVar2 = local_48.TypedValue.Subframe;
  uVar1 = local_48.TypedValue._8_8_;
  if ((local_78.bIsSet == false) || (local_48.bIsSet == false)) {
    local_18 = false;
  }
  else {
    local_18 = true;
    local_78._24_4_ = local_48.TypedValue.Hours;
    iStack_5c = local_48.TypedValue.Minutes;
    local_48.TypedValue.Hours = local_78.TypedValue.Hours;
    local_48.TypedValue.Minutes = local_78.TypedValue.Minutes;
    local_48.TypedValue.Seconds = local_78.TypedValue.Seconds;
    local_48.TypedValue.Frames = local_78.TypedValue.Frames;
    iStack_58 = (int)uVar1;
    iStack_54 = SUB84(uVar1,4);
    local_48.TypedValue.Subframe = local_78.TypedValue.Subframe;
    local_48.TypedValue.bDropFrameFormat = local_78.TypedValue.bDropFrameFormat;
    local_48.TypedValue._21_3_ = local_78.TypedValue._21_3_;
    uVar4 = local_48.TypedValue._20_4_;
    local_48.bIsSet = local_78.bIsSet;
    local_48._25_3_ = local_78._25_3_;
    iStack_2c = iStack_5c;
    local_28 = iStack_58;
    iStack_24 = iStack_54;
    fStack_20 = fVar2;
    local_48.TypedValue.bDropFrameFormat = SUB41(uVar3,0);
    local_48.TypedValue._21_3_ = SUB43(uVar3,1);
    bStack_1c = local_48.TypedValue.bDropFrameFormat;
    uStack_1b = local_48.TypedValue._21_3_;
    local_48.TypedValue._20_4_ = uVar4;
  }
  __return_storage_ptr__->bIsSet = local_18;
  if (local_18 != false) {
    (__return_storage_ptr__->TypedValue).TargetTimecode.Hours = local_48.TypedValue.Hours;
    (__return_storage_ptr__->TypedValue).TargetTimecode.Minutes = local_48.TypedValue.Minutes;
    (__return_storage_ptr__->TypedValue).TargetTimecode.Seconds = local_48.TypedValue.Seconds;
    (__return_storage_ptr__->TypedValue).TargetTimecode.Frames = local_48.TypedValue.Frames;
    (__return_storage_ptr__->TypedValue).TargetTimecode.Subframe = local_48.TypedValue.Subframe;
    (__return_storage_ptr__->TypedValue).TargetTimecode.bDropFrameFormat =
         (bool)local_48.TypedValue.bDropFrameFormat;
    *(int3 *)&(__return_storage_ptr__->TypedValue).TargetTimecode.field_0x15 =
         local_48.TypedValue._21_3_;
    (__return_storage_ptr__->TypedValue).ActualTimecode.Hours = local_48._24_4_;
    (__return_storage_ptr__->TypedValue).ActualTimecode.Minutes = iStack_2c;
    (__return_storage_ptr__->TypedValue).ActualTimecode.Seconds = local_28;
    (__return_storage_ptr__->TypedValue).ActualTimecode.Frames = iStack_24;
    (__return_storage_ptr__->TypedValue).ActualTimecode.Subframe = fStack_20;
    (__return_storage_ptr__->TypedValue).ActualTimecode.bDropFrameFormat = (bool)(char)_bStack_1c;
    *(int3 *)&(__return_storage_ptr__->TypedValue).ActualTimecode.field_0x15 = SUB43(_bStack_1c,1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0ba950

UClass * __cdecl UFrameHitchSceneDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TakeMovieScene",L"FrameHitchSceneDecoration",
               &Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton,
               StaticRegisterNativesUFrameHitchSceneDecoration,0x938,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFrameHitchSceneDecoration>,
               InternalVTableHelperCtorCaller<UFrameHitchSceneDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFrameHitchSceneDecoration.InnerSingleton;
}

// StaticRegisterNativesUFrameHitchSceneDecoration @ 14d0bb790

void __cdecl UFrameHitchSceneDecoration::StaticRegisterNativesUFrameHitchSceneDecoration(void)

{
  return;
}

