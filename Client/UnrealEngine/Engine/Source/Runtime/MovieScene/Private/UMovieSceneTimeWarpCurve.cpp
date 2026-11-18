// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// StaticClass @ 146258da0

UClass * __cdecl UMovieSceneTimeWarpCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpCurve",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpCurve,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTimeWarpCurve>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpCurve>,local_res8,
               UMovieSceneTimeWarpGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton;
}

// UMovieSceneTimeWarpCurve @ 14629ade0

UMovieSceneTimeWarpCurve * __thiscall
UMovieSceneTimeWarpCurve::UMovieSceneTimeWarpCurve
          (UMovieSceneTimeWarpCurve *this,FVTableHelper *param_1)

{
  UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->Channel);
  (this->Channel)._padding_ = (longlong)&___7FMovieSceneTimeWarpChannel__6B_;
  (this->Channel).Owner.field0_0x0.DebugPtr = (UMovieScene *)0x0;
  return this;
}

// UMovieSceneTimeWarpCurve @ 14629ae40

UMovieSceneTimeWarpCurve * __thiscall
UMovieSceneTimeWarpCurve::UMovieSceneTimeWarpCurve(UMovieSceneTimeWarpCurve *this)

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
  FMovieSceneDoubleChannel::FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->Channel);
  (this->Channel)._padding_ = (longlong)&___7FMovieSceneTimeWarpChannel__6B_;
  (this->Channel).Owner.field0_0x0.DebugPtr = (UMovieScene *)0x0;
  (this->Channel).Domain = Time;
  return this;
}

// ~UMovieSceneTimeWarpCurve @ 14629bed0

void __thiscall UMovieSceneTimeWarpCurve::~UMovieSceneTimeWarpCurve(UMovieSceneTimeWarpCurve *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  FMovieSceneDoubleChannel::~FMovieSceneDoubleChannel((FMovieSceneDoubleChannel *)&this->Channel);
  this->_padding_ =
       (longlong)&UMovieSceneTimeWarpGetter::_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&___7IMovieSceneChannelOwner__6B_;
  UMovieSceneNumericVariantGetter::~UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this);
  return;
}

// ComputeTraversedHull @ 1462a81f0

/* WARNING: Removing unreachable block (ram,0x0001462a85ef) */
/* WARNING: Removing unreachable block (ram,0x0001462a8614) */

TRange<FFrameTime> * __thiscall
UMovieSceneTimeWarpCurve::ComputeTraversedHull
          (UMovieSceneTimeWarpCurve *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  FFrameTime FVar9;
  bool bVar10;
  TRange<FFrameTime> *pTVar11;
  FFrameTime *pFVar12;
  FFrameTime FVar13;
  FFrameTime FVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined4 uVar25;
  undefined4 local_f0;
  undefined4 uStack_e4;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 local_9c;
  FInterpolationExtents local_90;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  
  plVar1 = &(this->Channel)._padding_;
  if (((this == (UMovieSceneTimeWarpCurve *)0xffffffffffffff18) || (plVar1 == (longlong *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x2f3,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TRange<FFrameTime> *)(*pcVar3)();
    return pTVar11;
  }
  if (((int)(this->Channel)._padding_ < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TRange<FFrameTime> *)(*pcVar3)();
    return pTVar11;
  }
  if (((this == (UMovieSceneTimeWarpCurve *)0xffffffffffffff18) || (plVar1 == (longlong *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Times && Values",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                          ,0x2f3,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TRange<FFrameTime> *)(*pcVar3)();
    return pTVar11;
  }
  iVar2 = (int)(this->Channel)._padding_;
  if (iVar2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TRange<FFrameTime> *)(*pcVar3)();
      return pTVar11;
    }
  }
  else {
    uVar20 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    uVar16 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    if (iVar2 == 0) {
      if ((char)(this->Channel)._padding_ == '\0') {
        dVar24 = 0.0;
      }
      else {
        dVar24 = (double)(this->Channel)._padding_;
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar24;
      auVar23 = roundpd(in_XMM2,auVar23,1);
      uVar15 = auVar23._0_4_;
      uVar21 = auVar23._4_4_;
      if (__real_41dfffffffc00000 <= auVar23._0_8_) {
        uVar15 = SUB84(__real_41dfffffffc00000,0);
        uVar21 = uVar20;
      }
      fVar17 = (float)(dVar24 - auVar23._0_8_);
      if ((double)CONCAT44(uVar21,uVar15) <= __real_c1e0000000000000) {
        uVar15 = SUB84(__real_c1e0000000000000,0);
        uVar21 = uVar16;
      }
      if (::FFrameTime::MaxSubframe <= fVar17) {
        fVar17 = ::FFrameTime::MaxSubframe;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar17) {
        fVar17 = ::FFrameTime::MaxSubframe;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      (__return_storage_ptr__->LowerBound).Type = '\x01';
      *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_d8._1_3_;
      (__return_storage_ptr__->LowerBound).Value.FrameNumber =
           (FFrameNumber)(int)(double)CONCAT44(uVar21,uVar15);
      (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar17;
      (__return_storage_ptr__->UpperBound).Type = '\x01';
      *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = local_cc._1_3_;
      (__return_storage_ptr__->UpperBound).Value.FrameNumber =
           (FFrameNumber)(int)(double)CONCAT44(uVar21,uVar15);
      (__return_storage_ptr__->UpperBound).Value.SubFrame = fVar17;
      return __return_storage_ptr__;
    }
    if (iVar2 == 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(double *)*plVar1;
      auVar23 = roundpd(in_XMM2,auVar6,1);
      uVar15 = auVar23._0_4_;
      uVar21 = auVar23._4_4_;
      if (__real_41dfffffffc00000 <= auVar23._0_8_) {
        uVar15 = SUB84(__real_41dfffffffc00000,0);
        uVar21 = uVar20;
      }
      fVar17 = (float)(*(double *)*plVar1 - auVar23._0_8_);
      if ((double)CONCAT44(uVar21,uVar15) <= __real_c1e0000000000000) {
        uVar15 = SUB84(__real_c1e0000000000000,0);
        uVar21 = uVar16;
      }
      if (::FFrameTime::MaxSubframe <= fVar17) {
        fVar17 = ::FFrameTime::MaxSubframe;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (::FFrameTime::MaxSubframe <= fVar17) {
        fVar17 = ::FFrameTime::MaxSubframe;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      (__return_storage_ptr__->LowerBound).Type = '\x01';
      *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_c0._1_3_;
      (__return_storage_ptr__->LowerBound).Value.FrameNumber =
           (FFrameNumber)(int)(double)CONCAT44(uVar21,uVar15);
      (__return_storage_ptr__->LowerBound).Value.SubFrame = fVar17;
      (__return_storage_ptr__->UpperBound).Type = '\x01';
      *(undefined3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = local_b4._1_3_;
      (__return_storage_ptr__->UpperBound).Value.FrameNumber =
           (FFrameNumber)(int)(double)CONCAT44(uVar21,uVar15);
      (__return_storage_ptr__->UpperBound).Value.SubFrame = fVar17;
      return __return_storage_ptr__;
    }
  }
  uVar7._0_1_ = (param_1->LowerBound).Type;
  uVar7._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
  uVar7._4_4_ = (param_1->LowerBound).Value.FrameNumber;
  uVar8 = *(undefined8 *)&(param_1->LowerBound).Value.SubFrame;
  local_68 = (param_1->LowerBound).Value.SubFrame;
  local_f0 = (undefined4)uVar7;
  uStack_e4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar20 = uStack_e4;
  local_70 = uVar7;
  if ((undefined1)uVar7 == '\x02') {
    FVar13.FrameNumber.Value = -0x80000000;
    FVar13.SubFrame = 0.0;
  }
  else {
    pFVar12 = TRange<FFrameTime>::GetLowerBoundValue(param_1);
    FVar13 = *pFVar12;
  }
  local_64._0_1_ = (param_1->UpperBound).Type;
  local_64._1_3_ = *(undefined3 *)&(param_1->UpperBound).field_0x1;
  local_64._4_4_ = (param_1->UpperBound).Value.FrameNumber;
  local_5c = (param_1->UpperBound).Value.SubFrame;
  if ((undefined1)local_64 == '\x02') {
    FVar14.FrameNumber.Value = 0x7fffffff;
    FVar14.SubFrame = 0.0;
  }
  else {
    pFVar12 = TRange<FFrameTime>::GetUpperBoundValue(param_1);
    FVar14 = *pFVar12;
  }
  FMovieSceneDoubleChannel::ComputeExtents
            ((FMovieSceneDoubleChannel *)&this->Channel,&local_90,FVar13,FVar14);
  if ((local_90.MaxValue < local_90.MinValue) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Extents.MinValue <= Extents.MaxValue",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Variants\\MovieSceneTimeWarpCurve.cpp"
                          ,0x76,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    pTVar11 = (TRange<FFrameTime> *)(*pcVar3)();
    return pTVar11;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_90.MinValue;
  auVar23 = roundpd(in_XMM2,auVar4,1);
  uVar21 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  uVar16 = auVar23._0_4_;
  uVar15 = auVar23._4_4_;
  if (__real_41dfffffffc00000 <= auVar23._0_8_) {
    uVar16 = SUB84(__real_41dfffffffc00000,0);
    uVar15 = uVar21;
  }
  uVar25 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
  if ((double)CONCAT44(uVar15,uVar16) <= __real_c1e0000000000000) {
    uVar16 = SUB84(__real_c1e0000000000000,0);
    uVar15 = uVar25;
  }
  fVar17 = (float)(local_90.MinValue - auVar23._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar17) {
    fVar17 = ::FFrameTime::MaxSubframe;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if ((undefined1)uVar7 == '\x02') {
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_f0 = local_a8;
  }
  uStack_e4._0_1_ = (char)((ulonglong)uVar8 >> 0x20);
  bVar10 = (char)uStack_e4 == '\x02';
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_90.MaxValue;
  auVar23 = roundpd(auVar23,auVar5,1);
  uVar18 = auVar23._0_4_;
  uVar22 = auVar23._4_4_;
  if (__real_41dfffffffc00000 <= auVar23._0_8_) {
    uVar18 = SUB84(__real_41dfffffffc00000,0);
    uVar22 = uVar21;
  }
  if ((double)CONCAT44(uVar22,uVar18) <= __real_c1e0000000000000) {
    uVar18 = SUB84(__real_c1e0000000000000,0);
    uVar22 = uVar25;
  }
  fVar19 = (float)(local_90.MaxValue - auVar23._0_8_);
  if (::FFrameTime::MaxSubframe <= fVar19) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar19) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  uStack_e4 = uVar20;
  if (bVar10) {
    local_9c = CONCAT31(local_9c._1_3_,1);
    uStack_e4 = local_9c;
  }
  FVar9.SubFrame = fVar19;
  FVar9.FrameNumber.Value = (int)(double)CONCAT44(uVar22,uVar18);
  (__return_storage_ptr__->LowerBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)local_f0;
  *(int3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = (int3)((uint)local_f0 >> 8);
  (__return_storage_ptr__->LowerBound).Value.FrameNumber =
       (FFrameNumber)(int)(double)CONCAT44(uVar15,uVar16);
  *(ulonglong *)&(__return_storage_ptr__->LowerBound).Value.SubFrame = CONCAT44(uStack_e4,fVar17);
  (__return_storage_ptr__->UpperBound).Value = FVar9;
  return __return_storage_ptr__;
}

// DeleteChannel @ 1462ab9f0

bool __thiscall
UMovieSceneTimeWarpCurve::DeleteChannel
          (UMovieSceneTimeWarpCurve *this,FMovieSceneTimeWarpVariant *param_1,FName param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  bVar1 = ::FName::Equals(param_2,"TimeWarp");
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

// GetDomain @ 1462af090

ETimeWarpChannelDomain __thiscall
UMovieSceneTimeWarpCurve::GetDomain(UMovieSceneTimeWarpCurve *this)

{
  return Time;
}

// GetPrivateStaticClass @ 1462afb20

UClass * __cdecl UMovieSceneTimeWarpCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpCurve",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpCurve,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTimeWarpCurve>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpCurve>,local_res8,
               UMovieSceneTimeWarpGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpCurve.InnerSingleton;
}

// InitializeDefaults @ 1462b2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UMovieSceneTimeWarpCurve::InitializeDefaults(UMovieSceneTimeWarpCurve *this)

{
  undefined8 uVar1;
  TRangeBound<FFrameNumber> TVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UClass *pUVar8;
  UMovieScene *pUVar9;
  UObject *pUVar10;
  FFrameNumber FVar11;
  int iVar12;
  FFrameNumber FVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  TRangeBound<FFrameNumber> local_a0;
  undefined4 uStack_98;
  int iStack_94;
  TMovieSceneChannelData<FMovieSceneDoubleValue> local_90;
  undefined4 local_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  FMovieSceneDoubleValue local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar9 = (UMovieScene *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UMovieScene *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->Channel).Owner.field0_0x0.DebugPtr = pUVar9;
  if (pUVar9 != (UMovieScene *)0x0) {
    iVar14 = (pUVar9->PlaybackRange).Value.LowerBound.Value.Value;
    local_a0 = (pUVar9->PlaybackRange).Value.LowerBound;
    uStack_98 = *(undefined4 *)&(pUVar9->PlaybackRange).Value.UpperBound;
    iStack_94 = (pUVar9->PlaybackRange).Value.UpperBound.Value.Value;
    cVar6 = (char)*(undefined4 *)&(pUVar9->PlaybackRange).Value.LowerBound;
    if (cVar6 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InLowerBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar15 = 0;
    if (cVar6 == '\0') {
      lVar15 = 4;
    }
    iVar12 = *(int *)((longlong)
                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                       ::__l2::Offsets + lVar15);
    if (cVar6 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar9 = (this->Channel).Owner.field0_0x0.DebugPtr;
    local_70 = *(undefined4 *)&(pUVar9->PlaybackRange).Value.LowerBound;
    iStack_6c = (pUVar9->PlaybackRange).Value.LowerBound.Value.Value;
    uStack_68 = *(undefined4 *)&(pUVar9->PlaybackRange).Value.UpperBound;
    iVar4 = (pUVar9->PlaybackRange).Value.UpperBound.Value.Value;
    FVar13.Value = iVar14 + iVar12;
    cVar6 = (char)uStack_68;
    iStack_64 = iVar4;
    if (cVar6 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InUpperBound.IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                         ,0x44,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar15 = 0;
    if (cVar6 == '\x01') {
      lVar15 = 4;
    }
    iVar14 = *(int *)((longlong)
                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                       ::__l2::Offsets + lVar15);
    if (cVar6 == '\x02') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar11.Value = iVar4 + iVar14;
    pUVar8 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
    if (pUVar10 != (UObject *)0x0) {
      uVar1 = *(undefined8 *)&pUVar10[4].field_0x10;
      TVar2.Type.Value = pUVar10[4].field_0x18;
      TVar2._1_3_ = *(undefined3 *)&pUVar10[4].field_0x19;
      TVar2.Value.Value = *(int *)&pUVar10[4].field_0x1c;
      if ((char)uVar1 == '\x02') {
        if (TVar2.Type.Value != '\x02') {
          uVar7 = TVar2._0_4_ & 0xff;
          local_a0 = TVar2;
          if (TVar2.Type.Value == '\x01') {
            if (uVar7 == 2) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar11.Value = local_a0.Value.Value + 1;
          }
          else {
            if (uVar7 == 2) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar11.Value = local_a0.Value.Value;
          }
        }
      }
      else {
        FVar13.Value = 0;
        if (TVar2.Type.Value != '\x02') {
          uVar7 = (uint)uVar1 & 0xff;
          local_a8 = uVar1;
          if ((char)uVar1 == '\x01') {
            if (uVar7 == 2) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar14 = local_a8._4_4_;
          }
          else {
            if (uVar7 == 2) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar14 = local_a8._4_4_ + 1;
          }
          cVar6 = (char)*(undefined8 *)&pUVar10[4].field_0x18;
          iVar12 = (int)((ulonglong)*(undefined8 *)&pUVar10[4].field_0x18 >> 0x20);
          if (cVar6 == '\x01') {
            FVar11.Value = (iVar12 + 1) - iVar14;
          }
          else {
            if (cVar6 == '\x02') {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FVar13.Value = 0;
            FVar11.Value = iVar12 - iVar14;
          }
        }
      }
    }
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_90,(FMovieSceneChannel *)&this->Channel,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&(this->Channel)._padding_,
               (FKeyHandleLookupTable *)&(this->Channel)._padding_);
    local_90.Values =
         (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)&(this->Channel)._padding_;
    if ((local_90._padding_ == 0) ||
       (local_90.Values == (TArray<FMovieSceneDoubleValue,TSizedDefaultAllocator<32>_> *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_60.Tangent.TangentWeightMode.Value = '\0';
    local_60.Tangent.ArriveTangent = 0.0;
    local_60.Tangent.LeaveTangent = 0.0;
    local_60.Tangent.ArriveTangentWeight = 0.0;
    local_60.Tangent.LeaveTangentWeight = 0.0;
    local_60.Value = (double)FVar13.Value;
    local_60.Tangent.UnserializedPaddingBytes[0] = '\0';
    local_60.Tangent.UnserializedPaddingBytes[1] = '\0';
    local_60.Tangent.UnserializedPaddingBytes[2] = '\0';
    local_60.InterpMode.Value = '\0';
    local_60.TangentMode.Value = '\0';
    local_60.PaddingByte = '\0';
    local_60.UnserializedPaddingBytes[0] = '\0';
    TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_90,FVar13,&local_60);
    local_60.Value = (double)FVar11.Value;
    TMovieSceneChannelData<FMovieSceneDoubleValue>::AddKey(&local_90,FVar11,&local_60);
    *(undefined2 *)&(this->Channel)._padding_ = 0x404;
  }
  return;
}

// InverseRemapTimeCycled @ 1462b3ae0

TOptional<FFrameTime> * __thiscall
UMovieSceneTimeWarpCurve::InverseRemapTimeCycled
          (UMovieSceneTimeWarpCurve *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  FMovieSceneTimeWarpChannel *this_00;
  double dVar1;
  FFrameTime FVar2;
  int iVar3;
  FFrameNumber FVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_var;
  int iVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  FFrameTime local_res18;
  FFrameTime local_res20;
  TOptional<FFrameTime> local_78;
  TRange<FFrameNumber> local_68;
  FInterpolationExtents local_58 [2];
  
  local_res18.SubFrame = param_1.SubFrame;
  this_00 = &this->Channel;
  dVar13 = (double)param_1.FrameNumber.Value.Value + (double)local_res18.SubFrame;
  FMovieSceneDoubleChannel::InverseEvaluate
            ((FMovieSceneDoubleChannel *)this_00,&local_78,dVar13,param_2,param_3->Flags);
  if (local_78.bIsSet == false) {
    iVar3 = FMovieSceneDoubleChannel::GetCycleCount((FMovieSceneDoubleChannel *)this_00,param_2);
    FMovieSceneDoubleChannel::GetCycleRange((FMovieSceneDoubleChannel *)this_00,&local_68,iVar3);
    if (((iVar3 != 0) && (local_68.LowerBound.Type.Value != '\x02')) &&
       (local_68.UpperBound.Type.Value != '\x02')) {
      FVar2.SubFrame = 0.0;
      FVar2.FrameNumber.Value = local_68.LowerBound.Value.Value;
      local_res18.SubFrame = 0.0;
      local_res18.FrameNumber.Value = local_68.UpperBound.Value.Value;
      FMovieSceneDoubleChannel::ComputeExtents
                ((FMovieSceneDoubleChannel *)this_00,local_58,FVar2,local_res18);
      dVar1 = local_58[0].MaxValue - local_58[0].MinValue;
      if ((dVar1 != 0.0) && ((local_58[0].MaxValue < dVar13 || (dVar13 < local_58[0].MinValue)))) {
        dVar9 = ((dVar13 - local_58[0].MinValue) + (dVar13 - local_58[0].MinValue)) / dVar1 -
                __real_3fe0000000000000;
        FVar4 = TRange<FFrameNumber>::Size<FFrameNumber>(&local_68);
        iVar3 = (int)((longlong)ROUND(dVar9) >> 1);
        auVar10._0_8_ = (double)*(int *)CONCAT44(extraout_var,FVar4.Value);
        auVar10._8_8_ = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (double)iVar3 * auVar10._0_8_;
        auVar11 = roundpd(auVar10,auVar11,1);
        dVar9 = auVar11._0_8_;
        if (__real_41dfffffffc00000 <= auVar11._0_8_) {
          dVar9 = __real_41dfffffffc00000;
        }
        local_res20.SubFrame = param_2.SubFrame;
        if (dVar9 <= __real_c1e0000000000000) {
          dVar9 = __real_c1e0000000000000;
        }
        local_res20.SubFrame = local_res20.SubFrame + 0.0;
        iVar5 = ((int)ROUND(local_res20.SubFrame * __real_40000000 - __real_3f000000) >> 1) +
                (int)dVar9;
        local_res20.FrameNumber = param_2.FrameNumber.Value;
        iVar7 = (int)local_res20.SubFrame;
        fVar8 = local_res20.SubFrame;
        if ((iVar7 != -0x80000000) && ((float)iVar7 != local_res20.SubFrame)) {
          auVar12._4_4_ = local_res20.SubFrame;
          auVar12._0_4_ = local_res20.SubFrame;
          auVar12._8_8_ = 0;
          uVar6 = movmskps(iVar5,auVar12);
          fVar8 = (float)(int)(iVar7 - (uVar6 & 1));
        }
        local_res20.SubFrame = local_res20.SubFrame - fVar8;
        local_res20.FrameNumber.Value = local_res20.FrameNumber.Value + iVar5;
        FMovieSceneDoubleChannel::InverseEvaluate
                  ((FMovieSceneDoubleChannel *)this_00,__return_storage_ptr__,
                   dVar13 - (double)iVar3 * dVar1,local_res20,param_3->Flags);
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    __return_storage_ptr__->bIsSet = local_78.bIsSet;
    __return_storage_ptr__->TypedValue = local_78.TypedValue;
  }
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1462b46d0

bool __thiscall
UMovieSceneTimeWarpCurve::InverseRemapTimeWithinRange
          (UMovieSceneTimeWarpCurve *this,FFrameTime param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  bool bVar1;
  float fStackX_14;
  
  fStackX_14 = param_1.SubFrame;
  bVar1 = FMovieSceneDoubleChannel::InverseEvaluateBetween
                    ((FMovieSceneDoubleChannel *)&this->Channel,
                     (double)param_1.FrameNumber.Value.Value + (double)fStackX_14,param_2,param_3,
                     param_4);
  return bVar1;
}

// PopulateChannelProxy @ 1462b62c0

EMovieSceneChannelProxyType __thiscall
UMovieSceneTimeWarpCurve::PopulateChannelProxy
          (UMovieSceneTimeWarpCurve *this,FMovieSceneChannelProxyData *param_1,
          EAllowTopLevelChannels param_2)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneTimeWarpChannel>(param_1,&this->Channel);
  return Static;
}

// RemapTime @ 1462b8780

FFrameTime __thiscall
UMovieSceneTimeWarpCurve::RemapTime(UMovieSceneTimeWarpCurve *this,FFrameTime param_1)

{
  FFrameTime in_R8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double local_res8 [4];
  
  local_res8[0] = 0.0;
  FMovieSceneDoubleChannel::Evaluate((FMovieSceneDoubleChannel *)&this->Channel,in_R8,local_res8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res8[0];
  auVar3 = roundpd(in_XMM2,auVar3,1);
  uVar1 = auVar3._0_4_;
  uVar2 = auVar3._4_4_;
  if (__real_41dfffffffc00000 <= auVar3._0_8_) {
    uVar1 = SUB84(__real_41dfffffffc00000,0);
    uVar2 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
  }
  fVar4 = (float)(local_res8[0] - auVar3._0_8_);
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

// ScaleBy @ 1462babf0

void __thiscall UMovieSceneTimeWarpCurve::ScaleBy(UMovieSceneTimeWarpCurve *this,double param_1)

{
  Dilate(&this->Channel,(FFrameNumber)0x0,param_1);
  return;
}

// StaticRegisterNativesUMovieSceneTimeWarpCurve @ 1462bde60

void __cdecl UMovieSceneTimeWarpCurve::StaticRegisterNativesUMovieSceneTimeWarpCurve(void)

{
  return;
}

