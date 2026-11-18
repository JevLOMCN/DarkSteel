// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14727d570

UClass * __cdecl UHapticFeedbackEffect_Curve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Curve",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Curve,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_Curve>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Curve>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton;
}

// UHapticFeedbackEffect_Curve @ 14727f8e0

UHapticFeedbackEffect_Curve * __thiscall
UHapticFeedbackEffect_Curve::UHapticFeedbackEffect_Curve
          (UHapticFeedbackEffect_Curve *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Curve__6B_;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->HapticDetails).Frequency);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->HapticDetails).Amplitude);
  return this;
}

// ~UHapticFeedbackEffect_Curve @ 14727fd80

void __thiscall
UHapticFeedbackEffect_Curve::~UHapticFeedbackEffect_Curve(UHapticFeedbackEffect_Curve *this)

{
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Curve__6B_;
  FHapticFeedbackDetails_Curve::~FHapticFeedbackDetails_Curve(&this->HapticDetails);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Base__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147280da0

UClass * __cdecl UHapticFeedbackEffect_Curve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HapticFeedbackEffect_Curve",
               &Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton,
               StaticRegisterNativesUHapticFeedbackEffect_Curve,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UHapticFeedbackEffect_Curve>,
               InternalVTableHelperCtorCaller<UHapticFeedbackEffect_Curve>,local_res8,
               UHapticFeedbackEffect_Base::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHapticFeedbackEffect_Curve.InnerSingleton;
}

// StaticRegisterNativesUHapticFeedbackEffect_Curve @ 147281530

void __cdecl UHapticFeedbackEffect_Curve::StaticRegisterNativesUHapticFeedbackEffect_Curve(void)

{
  return;
}

// UHapticFeedbackEffect_Curve @ 147bbcdc0

UHapticFeedbackEffect_Curve * __thiscall
UHapticFeedbackEffect_Curve::UHapticFeedbackEffect_Curve
          (UHapticFeedbackEffect_Curve *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UHapticFeedbackEffect_Curve__6B_;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->HapticDetails).Frequency);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->HapticDetails).Amplitude);
  return this;
}

// GetDuration @ 147bdfcb0

float __thiscall UHapticFeedbackEffect_Curve::GetDuration(UHapticFeedbackEffect_Curve *this)

{
  FRichCurve *pFVar1;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(&(this->HapticDetails).Amplitude);
  FRichCurve::GetTimeRange(pFVar1,local_res18,local_res10);
  pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(&(this->HapticDetails).Frequency);
  FRichCurve::GetTimeRange(pFVar1,local_res20,local_res8);
  if (local_res8[0] <= local_res10[0]) {
    local_res8[0] = local_res10[0];
  }
  return local_res8[0];
}

// GetValues @ 147becc40

void __thiscall
UHapticFeedbackEffect_Curve::GetValues
          (UHapticFeedbackEffect_Curve *this,float param_1,FHapticFeedbackValues *param_2)

{
  FRichCurve *pFVar1;
  float fVar2;
  
  pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(&(this->HapticDetails).Amplitude);
  fVar2 = FRichCurve::Eval(pFVar1,param_1,0.0);
  param_2->Amplitude = fVar2;
  pFVar1 = FRuntimeFloatCurve::GetRichCurveConst(&(this->HapticDetails).Frequency);
  fVar2 = FRichCurve::Eval(pFVar1,param_1,0.0);
  param_2->Frequency = fVar2;
  return;
}

