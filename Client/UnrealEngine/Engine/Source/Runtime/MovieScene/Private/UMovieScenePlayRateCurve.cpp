// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 17

// StaticClass @ 1460fa1a0

UClass * __cdecl UMovieScenePlayRateCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePlayRateCurve",
               &Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton,
               StaticRegisterNativesUMovieScenePlayRateCurve,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScenePlayRateCurve>,
               InternalVTableHelperCtorCaller<UMovieScenePlayRateCurve>,aFStackX_8,
               UMovieSceneTimeWarpGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton;
}

// UMovieScenePlayRateCurve @ 146299b10

UMovieScenePlayRateCurve * __thiscall
UMovieScenePlayRateCurve::UMovieScenePlayRateCurve
          (UMovieScenePlayRateCurve *this,FVTableHelper *param_1)

{
  UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->PlayRate);
  (this->PlayRate)._padding_ = (longlong)&___7FMovieSceneTimeWarpChannel__6B_;
  (this->PlayRate).Owner.field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->PlaybackStartFrame).Value = 0;
  this->bManualPlaybackStart = false;
  (this->IntegratedTimeWarp).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegratedTimeWarp).Values.ArrayNum = 0;
  (this->IntegratedTimeWarp).Values.ArrayMax = 0;
  this->bUpToDate = false;
  return this;
}

// UMovieScenePlayRateCurve @ 146299b90

UMovieScenePlayRateCurve * __thiscall
UMovieScenePlayRateCurve::UMovieScenePlayRateCurve(UMovieScenePlayRateCurve *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this,pFVar1);
  this->_padding_ =
       (longlong)&UMovieSceneTimeWarpGetter::_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&UMovieSceneTimeWarpGetter::_vftable__for__IMovieSceneChannelOwner__;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Public);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->PlayRate);
  (this->PlayRate)._padding_ = (longlong)&___7FMovieSceneTimeWarpChannel__6B_;
  (this->PlaybackStartFrame).Value = 0;
  this->bManualPlaybackStart = false;
  (this->IntegratedTimeWarp).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegratedTimeWarp).Values.ArrayNum = 0;
  (this->IntegratedTimeWarp).Values.ArrayMax = 0;
  this->bUpToDate = false;
  (this->PlayRate).Owner.field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->PlayRate).Domain = PlayRate;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMovieScenePlayRateCurve>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_padding_,(UMovieScenePlayRateCurve *)&stack0x00000008,(pmf_5f01c2f2 *)this);
  return this;
}

// ~UMovieScenePlayRateCurve @ 14629bb10

void __thiscall UMovieScenePlayRateCurve::~UMovieScenePlayRateCurve(UMovieScenePlayRateCurve *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  pFVar1 = (this->IntegratedTimeWarp).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->PlayRate);
  this->_padding_ =
       (longlong)&UMovieSceneTimeWarpGetter::_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&___7IMovieSceneChannelOwner__6B_;
  UMovieSceneNumericVariantGetter::~UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this);
  return;
}

// ComputeTraversedHull @ 1462a7ec0

TRange<FFrameTime> * __thiscall
UMovieScenePlayRateCurve::ComputeTraversedHull
          (UMovieScenePlayRateCurve *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FFrameTime FVar6;
  FFrameTime FVar7;
  undefined3 uVar8;
  FFrameNumber FVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  FPiecewiseCurve *pFVar13;
  FInterpolationExtents *pFVar14;
  TRange<FFrameTime> *pTVar15;
  FFrameTime FVar16;
  FFrameTime FVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 local_108;
  undefined4 local_fc;
  FPiecewiseCurveData local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  FInterpolationExtents local_b8;
  FFrameTime local_88;
  FFrameTime FStack_80;
  
  pFVar13 = GetTimeWarpCurve(this);
  uVar8 = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  FVar9.Value = (param_1->LowerBound).Value.FrameNumber.Value;
  uVar5 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  (__return_storage_ptr__->LowerBound).Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(param_1->LowerBound).Type.Value;
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = uVar8;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)FVar9.Value;
  *(undefined8 *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = uVar5;
  (__return_storage_ptr__->UpperBound).Value = (param_1->UpperBound).Value;
  if ((pFVar13->Values).ArrayNum != 0) {
    local_e8._0_1_ = (param_1->LowerBound).Type;
    local_e8._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_e8._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    local_e0 = (param_1->LowerBound).Value.SubFrame;
    if ((undefined1)local_e8 == '\x02') {
      FVar16.FrameNumber.Value = -0x80000000;
      FVar16.SubFrame = 0.0;
    }
    else {
      if (((param_1->LowerBound).Type.Value == '\x02') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar12)) {
        pcVar1 = (code *)swi(3);
        pTVar15 = (TRange<FFrameTime> *)(*pcVar1)();
        return pTVar15;
      }
      FVar16 = (param_1->LowerBound).Value;
    }
    local_dc._0_1_ = (param_1->UpperBound).Type;
    local_dc._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
    local_dc._4_4_ = (param_1->UpperBound).Value.FrameNumber;
    local_d4 = (param_1->UpperBound).Value.SubFrame;
    if ((undefined1)local_dc == '\x02') {
      FVar17.FrameNumber.Value = 0x7fffffff;
      FVar17.SubFrame = 0.0;
    }
    else {
      if (((param_1->UpperBound).Type.Value == '\x02') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar12)) {
        pcVar1 = (code *)swi(3);
        pTVar15 = (TRange<FFrameTime> *)(*pcVar1)();
        return pTVar15;
      }
      FVar17 = (param_1->UpperBound).Value;
    }
    local_f0.Channel = pFVar13;
    pFVar14 = UE::MovieScene::Interpolation::
              ComputePiecewiseExtents<UE::MovieScene::FPiecewiseCurveData>
                        (&local_b8,&local_f0,FVar16,FVar17);
    dVar11 = __real_c1e0000000000000;
    dVar10 = __real_41dfffffffc00000;
    dVar3 = pFVar14->MinValue;
    dVar4 = pFVar14->MaxValue;
    local_88 = pFVar14->MinValueTime;
    FStack_80 = pFVar14->MaxValueTime;
    if (dVar3 <= dVar4) {
      local_d0._0_1_ = (__return_storage_ptr__->LowerBound).Type;
      local_d0._1_3_ = *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1;
      local_d0._4_4_ = (__return_storage_ptr__->LowerBound).Value.FrameNumber;
      local_c8 = (__return_storage_ptr__->LowerBound).Value.SubFrame;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar3;
      auVar21 = roundpd(in_XMM2,auVar21,1);
      uVar22 = SUB84(__real_41dfffffffc00000,0);
      uVar23 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      uVar18 = auVar21._0_4_;
      uVar19 = auVar21._4_4_;
      if (__real_41dfffffffc00000 <= auVar21._0_8_) {
        uVar18 = uVar22;
        uVar19 = uVar23;
      }
      uVar24 = SUB84(__real_c1e0000000000000,0);
      uVar25 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      fVar20 = (float)(dVar3 - auVar21._0_8_);
      if ((double)CONCAT44(uVar19,uVar18) <= __real_c1e0000000000000) {
        uVar18 = uVar24;
        uVar19 = uVar25;
      }
      if (::FFrameTime::MaxSubframe <= fVar20) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar20) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if ((undefined1)local_d0 == '\x02') {
        (__return_storage_ptr__->LowerBound).Type = '\x01';
        *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_108._1_3_;
        (__return_storage_ptr__->LowerBound).Value.FrameNumber =
             (FFrameNumber)(int)(double)CONCAT44(uVar19,uVar18);
        (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar20;
      }
      else {
        if (((__return_storage_ptr__->LowerBound).Type.Value == '\x02') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar12)) {
          pcVar1 = (code *)swi(3);
          pTVar15 = (TRange<FFrameTime> *)(*pcVar1)();
          return pTVar15;
        }
        FVar6.SubFrame = fVar20;
        FVar6.FrameNumber.Value = (int)(double)CONCAT44(uVar19,uVar18);
        (__return_storage_ptr__->LowerBound).Value = FVar6;
      }
      local_c4._0_1_ = (__return_storage_ptr__->UpperBound).Type;
      local_c4._1_3_ = *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1;
      local_c4._4_4_ = (__return_storage_ptr__->UpperBound).Value.FrameNumber;
      local_bc = (__return_storage_ptr__->UpperBound).Value.SubFrame;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar4;
      auVar21 = roundpd(auVar21,auVar2,1);
      uVar18 = auVar21._0_4_;
      uVar19 = auVar21._4_4_;
      if (dVar10 <= auVar21._0_8_) {
        uVar18 = uVar22;
        uVar19 = uVar23;
      }
      fVar20 = (float)(dVar4 - auVar21._0_8_);
      if ((double)CONCAT44(uVar19,uVar18) <= dVar11) {
        uVar18 = uVar24;
        uVar19 = uVar25;
      }
      if (::FFrameTime::MaxSubframe <= fVar20) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar20) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if ((undefined1)local_c4 == '\x02') {
        (__return_storage_ptr__->UpperBound).Type = '\x01';
        *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = local_fc._1_3_;
        (__return_storage_ptr__->UpperBound).Value.FrameNumber =
             (FFrameNumber)(int)(double)CONCAT44(uVar19,uVar18);
        (__return_storage_ptr__->UpperBound).Value.SubFrame = fVar20;
      }
      else {
        if (((__return_storage_ptr__->UpperBound).Type.Value == '\x02') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,0x73,L""), bVar12)) {
          pcVar1 = (code *)swi(3);
          pTVar15 = (TRange<FFrameTime> *)(*pcVar1)();
          return pTVar15;
        }
        FVar7.SubFrame = fVar20;
        FVar7.FrameNumber.Value = (int)(double)CONCAT44(uVar19,uVar18);
        (__return_storage_ptr__->UpperBound).Value = FVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// DeleteChannel @ 1462ab980

bool __thiscall
UMovieScenePlayRateCurve::DeleteChannel
          (UMovieScenePlayRateCurve *this,FMovieSceneTimeWarpVariant *param_1,FName param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  bVar1 = ::FName::Equals(param_2,"PlayRate");
  if (bVar1) {
    (param_1->Variant).Data[0] = '\0';
    (param_1->Variant).Data[1] = '\0';
    (param_1->Variant).Data[2] = '\0';
    (param_1->Variant).Data[3] = '\0';
    (param_1->Variant).Data[4] = '\0';
    (param_1->Variant).Data[5] = '\0';
    (param_1->Variant).Data[6] = 0xf0;
    (param_1->Variant).Data[7] = '?';
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_18[0] = 0;
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
    (param_1->Variant).WeakCustomGetter.WeakPtr = local_res20;
    return true;
  }
  return false;
}

// GetDomain @ 1462af080

ETimeWarpChannelDomain __thiscall
UMovieScenePlayRateCurve::GetDomain(UMovieScenePlayRateCurve *this)

{
  return PlayRate;
}

// GetPrivateStaticClass @ 1462af760

UClass * __cdecl UMovieScenePlayRateCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePlayRateCurve",
               &Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton,
               StaticRegisterNativesUMovieScenePlayRateCurve,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieScenePlayRateCurve>,
               InternalVTableHelperCtorCaller<UMovieScenePlayRateCurve>,local_res8,
               UMovieSceneTimeWarpGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePlayRateCurve.InnerSingleton;
}

// GetTimeWarpCurve @ 1462b0ad0

FPiecewiseCurve * __thiscall
UMovieScenePlayRateCurve::GetTimeWarpCurve(UMovieScenePlayRateCurve *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FFrameTime FVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FPiecewiseCurve *pFVar8;
  FPiecewiseCurve *pFVar9;
  uint local_res8;
  double local_res10;
  FPiecewiseCurve local_48;
  FPiecewiseCurve local_38;
  char local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  uint uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  if (this->bUpToDate != false) {
    return &this->IntegratedTimeWarp;
  }
  pUVar5 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  pFVar8 = FMovieSceneDoubleChannel::AsPiecewiseCurve
                     ((FMovieSceneDoubleChannel *)&this->PlayRate,&local_38,true);
  pFVar9 = UE::MovieScene::FPiecewiseCurve::Integral(pFVar8,&local_48);
  pFVar8 = &this->IntegratedTimeWarp;
  if (pFVar8 != pFVar9) {
    pFVar1 = (pFVar8->Values).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar8->Values).AllocatorInstance.Data = (pFVar9->Values).AllocatorInstance.Data;
    (pFVar9->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->IntegratedTimeWarp).Values.ArrayNum = (pFVar9->Values).ArrayNum;
    (this->IntegratedTimeWarp).Values.ArrayMax = (pFVar9->Values).ArrayMax;
    (pFVar9->Values).ArrayNum = 0;
    (pFVar9->Values).ArrayMax = 0;
  }
  if (local_48.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Values.AllocatorInstance.Data);
  }
  if (local_38.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Values.AllocatorInstance.Data);
  }
  local_res8 = (this->PlaybackStartFrame).Value;
  if (((this->bManualPlaybackStart == false) && (pUVar7 != (UObject *)0x0)) &&
     (pUVar6 == (UObject *)0x0)) {
    local_28 = pUVar7[7].field_0x10;
    uStack_27 = pUVar7[7].field_0x11;
    uStack_26 = pUVar7[7].field_0x12;
    uStack_25 = pUVar7[7].field_0x13;
    uStack_24 = *(uint *)&pUVar7[7].field_0x14;
    uStack_20 = pUVar7[7].field_0x18;
    uStack_1f = pUVar7[7].field_0x19;
    uStack_1e = pUVar7[7].field_0x1a;
    uStack_1d = pUVar7[7].field_0x1b;
    uStack_1c = pUVar7[7].field_0x1c;
    uStack_1b = pUVar7[7].field_0x1d;
    uStack_1a = pUVar7[7].field_0x1e;
    uStack_19 = pUVar7[7].field_0x1f;
    if (local_28 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FPiecewiseCurve *)(*pcVar2)();
        return pFVar8;
      }
    }
    local_res8 = uStack_24;
  }
  FVar3.SubFrame = 0.0;
  FVar3.FrameNumber.Value = local_res8;
  local_res10 = 0.0;
  bVar4 = UE::MovieScene::FPiecewiseCurve::Evaluate(pFVar8,FVar3,&local_res10);
  if (bVar4) {
    UE::MovieScene::FPiecewiseCurve::Offset
              (pFVar8,(double)CONCAT44((uint)((ulonglong)local_res10 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(local_res10,0) ^
                                       (uint)__xmm_80000000000000008000000000000000));
  }
  this->bUpToDate = true;
  return pFVar8;
}

// InitializeDefaults @ 1462b29d0

void __thiscall UMovieScenePlayRateCurve::InitializeDefaults(UMovieScenePlayRateCurve *this)

{
  UClass *pUVar1;
  UMovieScene *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar2 = (UMovieScene *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PlayRate).Owner.field0_0x0.DebugPtr = pUVar2;
  (this->PlayRate)._padding_ = 0x3ff0000000000000;
  *(undefined1 *)&(this->PlayRate)._padding_ = 1;
  return;
}

// InvalidateTimeWarp @ 1462b36f0

void __thiscall UMovieScenePlayRateCurve::InvalidateTimeWarp(UMovieScenePlayRateCurve *this)

{
  this->bUpToDate = false;
  return;
}

// InverseRemapTimeCycled @ 1462b3a70

TOptional<FFrameTime> * __thiscall
UMovieScenePlayRateCurve::InverseRemapTimeCycled
          (UMovieScenePlayRateCurve *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  FPiecewiseCurve *this_00;
  float fStackX_1c;
  
  this_00 = GetTimeWarpCurve(this);
  fStackX_1c = param_1.SubFrame;
  UE::MovieScene::FPiecewiseCurve::InverseEvaluate
            (this_00,__return_storage_ptr__,
             (double)param_1.FrameNumber.Value.Value + (double)fStackX_1c,param_2,param_3->Flags);
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1462b4670

bool __thiscall
UMovieScenePlayRateCurve::InverseRemapTimeWithinRange
          (UMovieScenePlayRateCurve *this,FFrameTime param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  bool bVar1;
  FPiecewiseCurve *this_00;
  undefined4 uStackX_14;
  
  this_00 = GetTimeWarpCurve(this);
  uStackX_14 = param_1.SubFrame;
  bVar1 = UE::MovieScene::FPiecewiseCurve::InverseEvaluateBetween
                    (this_00,(double)param_1.FrameNumber.Value.Value + (double)uStackX_14,param_2,
                     param_3,param_4);
  return bVar1;
}

// PopulateChannelProxy @ 1462b62a0

EMovieSceneChannelProxyType __thiscall
UMovieScenePlayRateCurve::PopulateChannelProxy
          (UMovieScenePlayRateCurve *this,FMovieSceneChannelProxyData *param_1,
          EAllowTopLevelChannels param_2)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneTimeWarpChannel>(param_1,&this->PlayRate);
  return Static;
}

// RemapTime @ 1462b86e0

FFrameTime __thiscall
UMovieScenePlayRateCurve::RemapTime(UMovieScenePlayRateCurve *this,FFrameTime param_1)

{
  FPiecewiseCurve *this_00;
  FFrameTime in_R8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double local_res10 [3];
  
  local_res10[0] = 0.0;
  this_00 = GetTimeWarpCurve(this);
  UE::MovieScene::FPiecewiseCurve::Evaluate(this_00,in_R8,local_res10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res10[0];
  auVar3 = roundpd(in_XMM2,auVar3,1);
  uVar1 = auVar3._0_4_;
  uVar2 = auVar3._4_4_;
  if (__real_41dfffffffc00000 <= auVar3._0_8_) {
    uVar1 = SUB84(__real_41dfffffffc00000,0);
    uVar2 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  fVar4 = (float)(local_res10[0] - auVar3._0_8_);
  if ((double)CONCAT44(uVar2,uVar1) <= __real_c1e0000000000000) {
    uVar1 = SUB84(__real_c1e0000000000000,0);
    uVar2 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  }
  if (::FFrameTime::MaxSubframe <= fVar4) {
    fVar4 = ::FFrameTime::MaxSubframe;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(int *)param_1 = (int)(double)CONCAT44(uVar2,uVar1);
  if (::FFrameTime::MaxSubframe <= fVar4) {
    fVar4 = ::FFrameTime::MaxSubframe;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)((longlong)param_1 + 4) = fVar4;
  return param_1;
}

// ScaleBy @ 1462babc0

void __thiscall UMovieScenePlayRateCurve::ScaleBy(UMovieScenePlayRateCurve *this,double param_1)

{
  Dilate(&this->PlayRate,(FFrameNumber)0x0,param_1);
  this->bUpToDate = false;
  return;
}

// StaticRegisterNativesUMovieScenePlayRateCurve @ 1462bdde0

void __cdecl UMovieScenePlayRateCurve::StaticRegisterNativesUMovieScenePlayRateCurve(void)

{
  return;
}

