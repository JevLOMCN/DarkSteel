// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 4

// StaticStruct @ 1463e55e0

UScriptStruct * __cdecl FRotationRetargetingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRotationRetargetingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FRotationRetargetingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRotationRetargetingInfo,(UObject *)pUVar1,
                         L"RotationRetargetingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRotationRetargetingInfo.OuterSingleton;
}

// FRotationRetargetingInfo @ 146407340

FRotationRetargetingInfo * __thiscall
FRotationRetargetingInfo::FRotationRetargetingInfo(FRotationRetargetingInfo *this,bool param_1)

{
  this->bEnabled = param_1;
  *&(this->Source).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Source).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Source).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Source).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Source).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Source).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Target).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Target).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Target).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Target).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Target).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Target).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->TwistAxis).field0_0x0._s_0.X = 1.0;
  (this->TwistAxis).field0_0x0._s_0.Y = 0.0;
  (this->TwistAxis).field0_0x0._s_0.Z = 0.0;
  this->bUseAbsoluteAngle = false;
  this->SourceMinimum = 0.0;
  this->EasingType = Linear;
  this->RotationComponent = SwingAngle;
  this->SourceMaximum = 45.0;
  this->TargetMinimum = 0.0;
  this->TargetMaximum = 45.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->CustomCurve);
  this->bFlipEasing = false;
  this->EasingWeight = 1.0;
  this->bClamp = false;
  return this;
}

// ~FRotationRetargetingInfo @ 146409570

void __thiscall FRotationRetargetingInfo::~FRotationRetargetingInfo(FRotationRetargetingInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CustomCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CustomCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->CustomCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->CustomCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->CustomCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->CustomCurve).EditorCurveData._padding_);
  return;
}

// operator= @ 14640d8a0

FRotationRetargetingInfo * __thiscall
FRotationRetargetingInfo::operator=
          (FRotationRetargetingInfo *this,FRotationRetargetingInfo *param_1)

{
  UCurveFloat *pUVar1;
  double dVar2;
  
  this->bEnabled = param_1->bEnabled;
  dVar2 = (param_1->Source).Rotation.XY.m128d_f64[1];
  (this->Source).Rotation.XY.m128d_f64[0] = (param_1->Source).Rotation.XY.m128d_f64[0];
  (this->Source).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Source).Rotation.ZW.m128d_f64[1];
  (this->Source).Rotation.ZW.m128d_f64[0] = (param_1->Source).Rotation.ZW.m128d_f64[0];
  (this->Source).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Source).Translation.XY.m128d_f64[1];
  (this->Source).Translation.XY.m128d_f64[0] = (param_1->Source).Translation.XY.m128d_f64[0];
  (this->Source).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Source).Translation.ZW.m128d_f64[1];
  (this->Source).Translation.ZW.m128d_f64[0] = (param_1->Source).Translation.ZW.m128d_f64[0];
  (this->Source).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Source).Scale3D.XY.m128d_f64[1];
  (this->Source).Scale3D.XY.m128d_f64[0] = (param_1->Source).Scale3D.XY.m128d_f64[0];
  (this->Source).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Source).Scale3D.ZW.m128d_f64[1];
  (this->Source).Scale3D.ZW.m128d_f64[0] = (param_1->Source).Scale3D.ZW.m128d_f64[0];
  (this->Source).Scale3D.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Rotation.XY.m128d_f64[1];
  (this->Target).Rotation.XY.m128d_f64[0] = (param_1->Target).Rotation.XY.m128d_f64[0];
  (this->Target).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Rotation.ZW.m128d_f64[1];
  (this->Target).Rotation.ZW.m128d_f64[0] = (param_1->Target).Rotation.ZW.m128d_f64[0];
  (this->Target).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Translation.XY.m128d_f64[1];
  (this->Target).Translation.XY.m128d_f64[0] = (param_1->Target).Translation.XY.m128d_f64[0];
  (this->Target).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Translation.ZW.m128d_f64[1];
  (this->Target).Translation.ZW.m128d_f64[0] = (param_1->Target).Translation.ZW.m128d_f64[0];
  (this->Target).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Scale3D.XY.m128d_f64[1];
  (this->Target).Scale3D.XY.m128d_f64[0] = (param_1->Target).Scale3D.XY.m128d_f64[0];
  (this->Target).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Target).Scale3D.ZW.m128d_f64[1];
  (this->Target).Scale3D.ZW.m128d_f64[0] = (param_1->Target).Scale3D.ZW.m128d_f64[0];
  (this->Target).Scale3D.ZW.m128d_f64[1] = dVar2;
  this->RotationComponent = param_1->RotationComponent;
  dVar2 = (param_1->TwistAxis).field0_0x0._s_0.Y;
  (this->TwistAxis).field0_0x0._s_0.X = (param_1->TwistAxis).field0_0x0._s_0.X;
  (this->TwistAxis).field0_0x0._s_0.Y = dVar2;
  (this->TwistAxis).field0_0x0._s_0.Z = (param_1->TwistAxis).field0_0x0._s_0.Z;
  this->bUseAbsoluteAngle = param_1->bUseAbsoluteAngle;
  this->SourceMinimum = param_1->SourceMinimum;
  this->SourceMaximum = param_1->SourceMaximum;
  this->TargetMinimum = param_1->TargetMinimum;
  this->TargetMaximum = param_1->TargetMaximum;
  this->EasingType = param_1->EasingType;
  FRichCurve::operator=
            (&(this->CustomCurve).EditorCurveData,&(param_1->CustomCurve).EditorCurveData);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->CustomCurve).ExternalCurve.field0_0x0.DebugPtr,
     pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CustomCurve).ExternalCurve.field0_0x0 = (param_1->CustomCurve).ExternalCurve.field0_0x0;
  this->bFlipEasing = param_1->bFlipEasing;
  this->EasingWeight = param_1->EasingWeight;
  this->bClamp = param_1->bClamp;
  return this;
}

