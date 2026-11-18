// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// Construct @ 14964ecd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoAxisTranslationParameterSource * __cdecl
UGizmoAxisTranslationParameterSource::Construct
          (IGizmoAxisSource *param_1,IGizmoTransformSource *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoAxisTranslationParameterSource *pUVar2;
  UObject *this;
  UObject *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  UObject *pUVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FObjectInitializer::AssertIfInConstructor
            (param_3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UGizmoAxisTranslationParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoAxisTranslationParameterSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pUVar6 = (UObject *)0x0;
  pUVar4 = pUVar6;
  pUVar3 = pUVar6;
  if ((param_1 != (IGizmoAxisSource *)0x0) &&
     (this = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1), this != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    pUVar1 = Z_Construct_UClass_UGizmoAxisSource_NoRegister();
    pUVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    pUVar4 = this;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar2->AxisSource = pUVar4;
  *(UObject **)&(pUVar2->AxisSource).field_0x8 = pUVar3;
  pUVar4 = pUVar6;
  if ((param_2 != (IGizmoTransformSource *)0x0) &&
     (pUVar3 = (UObject *)(**(code **)((longlong)*param_2 + 8))(param_2), pUVar3 != (UObject *)0x0))
  {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    pUVar1 = Z_Construct_UClass_UGizmoTransformSource_NoRegister();
    pUVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar3,pUVar1);
    pUVar6 = pUVar3;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)&pUVar2->TransformSource = pUVar6;
  *(UObject **)&(pUVar2->TransformSource).field_0x8 = pUVar4;
  return pUVar2;
}

// StaticClass @ 1496715d0

UClass * __cdecl UGizmoAxisTranslationParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisTranslationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisTranslationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673350

bool __cdecl
UGizmoAxisTranslationParameterSource::<lambda_27_>::<lambda_invoker_cdecl>
          (double param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673360

bool __cdecl
UGizmoAxisTranslationParameterSource::<lambda_28_>::<lambda_invoker_cdecl>
          (TVector<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// UGizmoAxisTranslationParameterSource @ 149683dd0

UGizmoAxisTranslationParameterSource * __thiscall
UGizmoAxisTranslationParameterSource::UGizmoAxisTranslationParameterSource
          (UGizmoAxisTranslationParameterSource *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  *(undefined8 *)&this->AxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->AxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->AxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->PositionConstraintFunction = 0;
  *(undefined8 *)&(this->PositionConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->PositionConstraintFunction).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->PositionConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PositionConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->Parameter = 0.0;
  (this->LastChange).InitialValue = 0.0;
  (this->LastChange).CurrentValue = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  return this;
}

// UGizmoAxisTranslationParameterSource @ 149683f10

UGizmoAxisTranslationParameterSource * __thiscall
UGizmoAxisTranslationParameterSource::UGizmoAxisTranslationParameterSource
          (UGizmoAxisTranslationParameterSource *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  this->_padding_ = 0;
  *(undefined8 *)&this->AxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->AxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->AxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->PositionConstraintFunction = 0;
  *(undefined8 *)&(this->PositionConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->PositionConstraintFunction).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->PositionConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->PositionConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
         ::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->Parameter = 0.0;
  (this->LastChange).InitialValue = 0.0;
  (this->LastChange).CurrentValue = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  return this;
}

// ~UGizmoAxisTranslationParameterSource @ 149689750

void __thiscall
UGizmoAxisTranslationParameterSource::~UGizmoAxisTranslationParameterSource
          (UGizmoAxisTranslationParameterSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  if (*(longlong *)&this->PositionConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->PositionConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->PositionConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  return;
}

// BeginModify @ 149692f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoAxisTranslationParameterSource::BeginModify(UGizmoAxisTranslationParameterSource *this)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  double *pdVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((*(longlong *)&(this->PositionConstraintFunction).field_0x8 == 0) ||
      (*(longlong *)&(this->PositionConstraintFunction).field_0x10 == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxisSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ParameterToTransformAdapters.cpp"
                         ,0x2d,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(undefined4 *)&(this->PositionConstraintFunction).field_0x28;
  plVar14 = (longlong *)0x0;
  *(undefined4 *)&(this->PositionConstraintFunction).field_0x2c = uVar1;
  *(undefined4 *)&this->AxisSource = uVar1;
  plVar13 = plVar14;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x18 != 0) {
    plVar13 = *(longlong **)&(this->PositionConstraintFunction).field_0x20;
  }
  pdVar10 = (double *)(**(code **)(*plVar13 + 0x10))(uVar1,local_78);
  dVar6 = pdVar10[1];
  (this->CurTranslationAxis).field0_0x0._s_0.Y = *pdVar10;
  (this->CurTranslationAxis).field0_0x0._s_0.Z = dVar6;
  dVar6 = pdVar10[3];
  (this->CurTranslationOrigin).field0_0x0._s_0.X = pdVar10[2];
  (this->CurTranslationOrigin).field0_0x0._s_0.Y = dVar6;
  dVar6 = pdVar10[5];
  (this->CurTranslationOrigin).field0_0x0._s_0.Z = pdVar10[4];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] = dVar6;
  dVar6 = pdVar10[7];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = pdVar10[6];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = dVar6;
  uVar1 = *(undefined4 *)(pdVar10 + 8);
  uVar3 = *(undefined4 *)((longlong)pdVar10 + 0x44);
  uVar4 = *(undefined4 *)(pdVar10 + 9);
  uVar5 = *(undefined4 *)((longlong)pdVar10 + 0x4c);
  *(undefined4 *)((this->InitialTransform).Rotation.ZW.m128d_f64 + 1) = uVar1;
  *(undefined4 *)((longlong)(this->InitialTransform).Rotation.ZW.m128d_f64 + 0xc) = uVar3;
  *(undefined4 *)(this->InitialTransform).Translation.XY.m128d_f64 = uVar4;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 4) = uVar5;
  uVar3 = *(undefined4 *)((longlong)pdVar10 + 0x54);
  uVar4 = *(undefined4 *)(pdVar10 + 0xb);
  uVar5 = *(undefined4 *)((longlong)pdVar10 + 0x5c);
  *(undefined4 *)((this->InitialTransform).Translation.XY.m128d_f64 + 1) =
       *(undefined4 *)(pdVar10 + 10);
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 0xc) = uVar3;
  *(undefined4 *)(this->InitialTransform).Translation.ZW.m128d_f64 = uVar4;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.ZW.m128d_f64 + 4) = uVar5;
  plVar13 = plVar14;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x8 != 0) {
    plVar13 = *(longlong **)&(this->PositionConstraintFunction).field_0x10;
  }
  puVar11 = (undefined4 *)(**(code **)(*plVar13 + 0x18))(uVar1,local_a8);
  uVar1 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  *(undefined4 *)&(this->AxisSource).field_0x8 = *puVar11;
  *(undefined4 *)&(this->AxisSource).field_0xc = uVar1;
  *(undefined4 *)&this->TransformSource = uVar3;
  *(undefined4 *)&(this->TransformSource).field_0x4 = uVar4;
  *(undefined8 *)&(this->TransformSource).field_0x8 = *(undefined8 *)(puVar11 + 4);
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x8 != 0) {
    plVar14 = *(longlong **)&(this->PositionConstraintFunction).field_0x10;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,local_90);
  uVar7 = *puVar12;
  uVar8 = puVar12[1];
  this->Parameter = (float)(int)uVar7;
  (this->LastChange).InitialValue = (float)(int)((ulonglong)uVar7 >> 0x20);
  *(undefined8 *)&(this->LastChange).CurrentValue = uVar8;
  (this->CurTranslationAxis).field0_0x0._s_0.X = (double)puVar12[2];
  return;
}

// EndModify @ 14969dc60

void __thiscall
UGizmoAxisTranslationParameterSource::EndModify(UGizmoAxisTranslationParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3b00

float __thiscall
UGizmoAxisTranslationParameterSource::GetParameter(UGizmoAxisTranslationParameterSource *this)

{
  return *(float *)&(this->PositionConstraintFunction).field_0x28;
}

// GetPrivateStaticClass @ 1496a4870

UClass * __cdecl UGizmoAxisTranslationParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisTranslationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisTranslationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisTranslationParameterSource.InnerSingleton;
}

// SetParameter @ 1496be460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoAxisTranslationParameterSource::SetParameter
          (UGizmoAxisTranslationParameterSource *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  UGizmoAxisTranslationParameterSource *pUVar9;
  float in_XMM1_Db;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  *(float *)&(this->PositionConstraintFunction).field_0x28 = param_1;
  *(float *)&this->AxisSource = param_1;
  dVar3 = (double)(param_1 - *(float *)&(this->PositionConstraintFunction).field_0x2c);
  dVar4 = (double)in_XMM1_Db;
  local_d8 = 0.0;
  local_d0 = dVar3;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar1 = (code *)this->_padding_;
  plVar8 = &this->_padding_;
  if (*(longlong **)&this->AxisDeltaConstraintFunction != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->AxisDeltaConstraintFunction;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7,&local_d0,&local_d8);
  if (cVar6 != '\0') {
    dVar4 = 0.0;
    dVar3 = local_d8;
  }
  local_88 = (this->CurTranslationOrigin).field0_0x0._s_0.X;
  dStack_80 = (this->CurTranslationOrigin).field0_0x0._s_0.Y;
  local_98 = (this->CurTranslationAxis).field0_0x0._s_0.Y;
  dStack_90 = (this->CurTranslationAxis).field0_0x0._s_0.Z;
  local_48 = (this->InitialTransform).Translation.XY.m128d_f64[1];
  dStack_40 = (this->InitialTransform).Translation.ZW.m128d_f64[0];
  local_58 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
  dStack_50 = (this->InitialTransform).Translation.XY.m128d_f64[0];
  local_b8 = dVar3 * *(double *)&(this->TransformSource).field_0x8 +
             (this->InitialTransform).Rotation.XY.m128d_f64[1];
  dVar4 = dVar4 + (this->InitialTransform).Rotation.ZW.m128d_f64[0];
  dVar2 = (this->CurTranslationOrigin).field0_0x0._s_0.Z +
          dVar3 * *(double *)&(this->AxisSource).field_0x8;
  dVar3 = (this->InitialTransform).Rotation.XY.m128d_f64[0] +
          dVar3 * *(double *)&this->TransformSource;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_68._8_4_ = SUB84(dVar4,0);
  local_68._0_8_ = local_b8;
  local_68._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_78._8_4_ = uVar10;
  local_78._0_8_ = dVar2;
  local_78._12_4_ = uVar11;
  local_c8._8_4_ = uVar10;
  local_c8._0_8_ = dVar2;
  local_c8._12_4_ = uVar11;
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->AxisDeltaConstraintFunction).field_0x8);
  pcVar1 = *(code **)&(this->AxisDeltaConstraintFunction).field_0x8;
  plVar8 = (longlong *)&(this->AxisDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->PositionConstraintFunction != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->PositionConstraintFunction;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7,local_c8,&local_b0);
  if (cVar6 != '\0') {
    dVar4 = *(double *)&(this->LastChange).CurrentValue;
    dVar3 = *(double *)&(this->AxisSource).field_0x8;
    dVar2 = *(double *)&(this->TransformSource).field_0x8;
    dVar5 = (local_a8 - dVar4) * *(double *)&this->TransformSource +
            (local_b0 - *(double *)&this->Parameter) * dVar3 +
            (local_a0 - (this->CurTranslationAxis).field0_0x0._s_0.X) * dVar2;
    dVar4 = dVar5 * *(double *)&this->TransformSource + dVar4;
    local_68._8_8_ = 0;
    local_68._0_8_ = dVar5 * dVar2 + (this->CurTranslationAxis).field0_0x0._s_0.X;
    local_78._8_4_ = SUB84(dVar4,0);
    local_78._0_8_ = dVar5 * dVar3 + *(double *)&this->Parameter;
    local_78._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  }
  pUVar9 = (UGizmoAxisTranslationParameterSource *)0x0;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x18 != 0) {
    pUVar9 = *(UGizmoAxisTranslationParameterSource **)
              &(this->PositionConstraintFunction).field_0x20;
  }
  (**(code **)(pUVar9->_padding_ + 0x18))(pUVar9,&local_98);
  pUVar9 = this;
  if (this == (UGizmoAxisTranslationParameterSource *)&DAT_00000028) {
    pUVar9 = (UGizmoAxisTranslationParameterSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoFloatParameterSource *)pUVar9,
              *(FGizmoFloatParameterChange *)&(this->PositionConstraintFunction).field_0x2c);
  return;
}

// StaticRegisterNativesUGizmoAxisTranslationParameterSource @ 1496c2830

void __cdecl
UGizmoAxisTranslationParameterSource::StaticRegisterNativesUGizmoAxisTranslationParameterSource
          (void)

{
  return;
}

// __VTableCtorCaller @ 1496c9a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoAxisTranslationParameterSource::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) = &_vftable__for__IGizmoFloatParameterSource__;
    *(undefined8 *)&pUVar4[1].field_0x18 = 0;
    *(undefined8 *)&pUVar4[1].field_0x20 = 2;
    *(undefined8 *)(pUVar4 + 2) = 0;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined ***)&pUVar4[2].field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[2].field_0x18 = <lambda_27_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&pUVar4[3].field_0x20 = <lambda_28_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined8 *)&pUVar4[5].field_0x8 = 0;
    *(undefined4 *)&pUVar4[5].field_0x10 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[6].field_0x20 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)(pUVar4 + 7) = (double)fVar1;
    *(double *)&pUVar4[7].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[7].field_0x18 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[7].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 8) = (double)fVar2;
    *(double *)&pUVar4[8].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[8].field_0x10 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[8].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[8].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 9) = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

