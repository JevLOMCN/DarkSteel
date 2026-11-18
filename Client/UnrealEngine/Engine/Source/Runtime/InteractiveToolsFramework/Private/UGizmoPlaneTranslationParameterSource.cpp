// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 15

// Construct @ 14964efd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoPlaneTranslationParameterSource * __cdecl
UGizmoPlaneTranslationParameterSource::Construct
          (IGizmoAxisSource *param_1,IGizmoTransformSource *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoPlaneTranslationParameterSource *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UGizmoPlaneTranslationParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoPlaneTranslationParameterSource *)
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

// StaticClass @ 149672210

UClass * __cdecl UGizmoPlaneTranslationParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoPlaneTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoPlaneTranslationParameterSource,0x200,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoPlaneTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoPlaneTranslationParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673370

bool __cdecl
UGizmoPlaneTranslationParameterSource::<lambda_29_>::<lambda_invoker_cdecl>
          (double param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673410

bool __cdecl
UGizmoPlaneTranslationParameterSource::<lambda_30_>::<lambda_invoker_cdecl>
          (double param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673420

bool __cdecl
UGizmoPlaneTranslationParameterSource::<lambda_31_>::<lambda_invoker_cdecl>
          (TVector<double> *param_1,TVector<double> *param_2)

{
  return false;
}

// UGizmoPlaneTranslationParameterSource @ 149685eb0

UGizmoPlaneTranslationParameterSource * __thiscall
UGizmoPlaneTranslationParameterSource::UGizmoPlaneTranslationParameterSource
          (UGizmoPlaneTranslationParameterSource *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  
  UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  *(undefined8 *)&this->AxisXDeltaConstraintFunction = 0;
  puVar1 = &(this->AxisXDeltaConstraintFunction).field_0x18;
  *(undefined8 *)&(this->AxisXDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisXDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisXDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->AxisYDeltaConstraintFunction = 0;
  puVar1 = &(this->AxisYDeltaConstraintFunction).field_0x18;
  *(undefined8 *)&(this->AxisYDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisYDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_30_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisYDeltaConstraintFunction =
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
  *(code **)puVar1 = <lambda_31_>::<lambda_invoker_cdecl>;
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
  this->bProjectConstrainedPosition = true;
  (this->Parameter).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar10 = UE::Math::TVector2<double>::ZeroVector;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.ZW.m128d_f64 = auVar9;
  return this;
}

// UGizmoPlaneTranslationParameterSource @ 149686050

UGizmoPlaneTranslationParameterSource * __thiscall
UGizmoPlaneTranslationParameterSource::UGizmoPlaneTranslationParameterSource
          (UGizmoPlaneTranslationParameterSource *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  
  UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  *(undefined8 *)&this->AxisXDeltaConstraintFunction = 0;
  puVar1 = &(this->AxisXDeltaConstraintFunction).field_0x18;
  *(undefined8 *)&(this->AxisXDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisXDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisXDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->AxisYDeltaConstraintFunction = 0;
  puVar1 = &(this->AxisYDeltaConstraintFunction).field_0x18;
  *(undefined8 *)&(this->AxisYDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AxisYDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_30_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AxisYDeltaConstraintFunction =
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
  *(code **)puVar1 = <lambda_31_>::<lambda_invoker_cdecl>;
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
  this->bProjectConstrainedPosition = true;
  (this->Parameter).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar10 = UE::Math::TVector2<double>::ZeroVector;
  (this->LastChange).CurrentValue.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->LastChange).InitialValue.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitialTransform).Scale3D.ZW.m128d_f64 = auVar9;
  return this;
}

// ~UGizmoPlaneTranslationParameterSource @ 14968a050

void __thiscall
UGizmoPlaneTranslationParameterSource::~UGizmoPlaneTranslationParameterSource
          (UGizmoPlaneTranslationParameterSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  if (*(longlong *)&this->PositionConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->PositionConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->PositionConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisYDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisYDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisYDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AxisXDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AxisXDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AxisXDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  return;
}

// BeginModify @ 149693290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoPlaneTranslationParameterSource::BeginModify(UGizmoPlaneTranslationParameterSource *this)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  bool bVar8;
  double *pdVar9;
  IGizmoAxisSource *pIVar10;
  IGizmoAxisSource *this_00;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((*(longlong *)&(this->PositionConstraintFunction).field_0x10 == 0) ||
      (*(longlong *)&(this->PositionConstraintFunction).field_0x18 == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxisSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ParameterToTransformAdapters.cpp"
                         ,0x6d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = *(undefined4 *)&this->bProjectConstrainedPosition;
  iVar3 = this->_padding_;
  uVar4 = *(undefined4 *)&this->AxisSource;
  uVar5 = *(undefined4 *)&(this->AxisSource).field_0x4;
  this_00 = (IGizmoAxisSource *)0x0;
  *(undefined4 *)&(this->AxisSource).field_0x8 = uVar2;
  *(int *)&(this->AxisSource).field_0xc = iVar3;
  *(undefined4 *)&this->TransformSource = uVar4;
  *(undefined4 *)&(this->TransformSource).field_0x4 = uVar5;
  *(undefined4 *)&(this->TransformSource).field_0x8 = uVar2;
  *(int *)&(this->TransformSource).field_0xc = iVar3;
  *(undefined4 *)&(this->Parameter).field0_0x0 = uVar4;
  *(undefined4 *)((longlong)&(this->Parameter).field0_0x0 + 4) = uVar5;
  pIVar10 = this_00;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x20 != 0) {
    pIVar10 = *(IGizmoAxisSource **)&(this->PositionConstraintFunction).field_0x28;
  }
  pdVar9 = (double *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,local_78);
  dVar7 = pdVar9[1];
  (this->CurTranslationAxisX).field0_0x0._s_0.Z = *pdVar9;
  (this->CurTranslationAxisY).field0_0x0._s_0.X = dVar7;
  dVar7 = pdVar9[3];
  (this->CurTranslationAxisY).field0_0x0._s_0.Y = pdVar9[2];
  (this->CurTranslationAxisY).field0_0x0._s_0.Z = dVar7;
  dVar7 = pdVar9[5];
  this->_padding_ = (longlong)pdVar9[4];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] = dVar7;
  dVar7 = pdVar9[7];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = pdVar9[6];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  uVar2 = *(undefined4 *)(pdVar9 + 8);
  uVar4 = *(undefined4 *)((longlong)pdVar9 + 0x44);
  uVar5 = *(undefined4 *)(pdVar9 + 9);
  uVar6 = *(undefined4 *)((longlong)pdVar9 + 0x4c);
  *(undefined4 *)((this->InitialTransform).Rotation.ZW.m128d_f64 + 1) = uVar2;
  *(undefined4 *)((longlong)(this->InitialTransform).Rotation.ZW.m128d_f64 + 0xc) = uVar4;
  *(undefined4 *)(this->InitialTransform).Translation.XY.m128d_f64 = uVar5;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 4) = uVar6;
  uVar4 = *(undefined4 *)((longlong)pdVar9 + 0x54);
  uVar5 = *(undefined4 *)(pdVar9 + 0xb);
  uVar6 = *(undefined4 *)((longlong)pdVar9 + 0x5c);
  *(undefined4 *)((this->InitialTransform).Translation.XY.m128d_f64 + 1) =
       *(undefined4 *)(pdVar9 + 10);
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 0xc) = uVar4;
  *(undefined4 *)(this->InitialTransform).Translation.ZW.m128d_f64 = uVar5;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.ZW.m128d_f64 + 4) = uVar6;
  pIVar10 = this_00;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x10 != 0) {
    pIVar10 = *(IGizmoAxisSource **)&(this->PositionConstraintFunction).field_0x18;
  }
  pdVar9 = (double *)(**(code **)((longlong)*pIVar10 + 0x10))(uVar2,local_98);
  dVar7 = pdVar9[1];
  (this->Parameter).field0_0x0._s_0.Y = *pdVar9;
  (this->LastChange).InitialValue.field0_0x0._s_0.X = dVar7;
  (this->LastChange).InitialValue.field0_0x0._s_0.Y = pdVar9[2];
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x10 != 0) {
    this_00 = *(IGizmoAxisSource **)&(this->PositionConstraintFunction).field_0x18;
  }
  IGizmoAxisSource::GetAxisFrame
            (this_00,(TVector<double> *)&(this->LastChange).CurrentValue,
             (TVector<double> *)((longlong)&(this->CurTranslationOrigin).field0_0x0 + 8),
             (TVector<double> *)((longlong)&(this->CurTranslationNormal).field0_0x0 + 8));
  return;
}

// EndModify @ 14969dca0

void __thiscall
UGizmoPlaneTranslationParameterSource::EndModify(UGizmoPlaneTranslationParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3b80

TVector2<double> * __thiscall
UGizmoPlaneTranslationParameterSource::GetParameter
          (UGizmoPlaneTranslationParameterSource *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&this->AxisSource;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->bProjectConstrainedPosition;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a5f10

UClass * __cdecl UGizmoPlaneTranslationParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoPlaneTranslationParameterSource",
               &Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoPlaneTranslationParameterSource,0x200,0x10,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UGizmoPlaneTranslationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoPlaneTranslationParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoPlaneTranslationParameterSource.InnerSingleton;
}

// SetParameter @ 1496bec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoPlaneTranslationParameterSource::SetParameter
          (UGizmoPlaneTranslationParameterSource *this,TVector2<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  UGizmoPlaneTranslationParameterSource *pUVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  TVector2<double>_u_0 local_b8;
  double local_a8;
  double dStack_a0;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  *(double *)&this->bProjectConstrainedPosition = (param_1->field0_0x0)._s_0.X;
  *(double *)&this->AxisSource = dVar4;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  *(double *)&(this->TransformSource).field_0x8 = (param_1->field0_0x0)._s_0.X;
  (this->Parameter).field0_0x0._s_0.X = dVar4;
  dVar5 = *(double *)&(this->TransformSource).field_0x8 - *(double *)&(this->AxisSource).field_0x8;
  dVar4 = (this->Parameter).field0_0x0._s_0.X - *(double *)&this->TransformSource;
  local_e0 = 0.0;
  local_d8 = 0.0;
  local_e8 = dVar5;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar1 = (code *)this->_padding_;
  plVar8 = &this->_padding_;
  if (*(longlong **)&this->AxisXDeltaConstraintFunction != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->AxisXDeltaConstraintFunction;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7,&local_e8,&local_e0);
  if (cVar6 != '\0') {
    dVar5 = local_e0;
  }
  local_e8 = dVar4;
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->AxisXDeltaConstraintFunction).field_0x8);
  pcVar1 = *(code **)&(this->AxisXDeltaConstraintFunction).field_0x8;
  plVar8 = (longlong *)&(this->AxisXDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->AxisYDeltaConstraintFunction != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->AxisYDeltaConstraintFunction;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7,&local_e8,&local_d8);
  if (cVar6 != '\0') {
    dVar4 = local_d8;
  }
  local_88 = (this->CurTranslationAxisY).field0_0x0._s_0.Y;
  dStack_80 = (this->CurTranslationAxisY).field0_0x0._s_0.Z;
  local_48 = (this->InitialTransform).Translation.XY.m128d_f64[1];
  dStack_40 = (this->InitialTransform).Translation.ZW.m128d_f64[0];
  local_98 = (this->CurTranslationAxisX).field0_0x0._s_0.Z;
  dStack_90 = (this->CurTranslationAxisY).field0_0x0._s_0.X;
  local_58 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
  dStack_50 = (this->InitialTransform).Translation.XY.m128d_f64[0];
  dVar2 = (double)this->_padding_ +
          dVar4 * (this->CurTranslationNormal).field0_0x0._s_0.Y +
          dVar5 * (this->CurTranslationOrigin).field0_0x0._s_0.Y;
  dVar3 = (this->InitialTransform).Rotation.XY.m128d_f64[0] +
          dVar4 * (this->CurTranslationNormal).field0_0x0._s_0.Z +
          dVar5 * (this->CurTranslationOrigin).field0_0x0._s_0.Z;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_a8 = dVar4 * (this->CurTranslationAxisX).field0_0x0._s_0.X +
             dVar5 * (this->CurTranslationNormal).field0_0x0._s_0.X +
             (this->InitialTransform).Rotation.XY.m128d_f64[1];
  dVar4 = (this->InitialTransform).Rotation.ZW.m128d_f64[0] + 0.0;
  local_78._8_4_ = uVar10;
  local_78._0_8_ = dVar2;
  local_78._12_4_ = uVar11;
  local_b8._8_4_ = uVar10;
  local_b8._s_0.X = dVar2;
  local_b8._12_4_ = uVar11;
  local_68._8_4_ = SUB84(dVar4,0);
  local_68._0_8_ = local_a8;
  local_68._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->AxisYDeltaConstraintFunction).field_0x8);
  pcVar1 = *(code **)&(this->AxisYDeltaConstraintFunction).field_0x8;
  plVar8 = (longlong *)&(this->AxisYDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->PositionConstraintFunction != (longlong *)0x0) {
    plVar8 = *(longlong **)&this->PositionConstraintFunction;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  cVar6 = (*pcVar1)(uVar7,&local_b8,&local_d0);
  if (cVar6 != '\0') {
    if ((this->PositionConstraintFunction).field_0x8 != '\0') {
      dVar4 = (this->LastChange).CurrentValue.field0_0x0._s_0.X;
      dVar5 = (this->LastChange).CurrentValue.field0_0x0._s_0.Y;
      dVar2 = (uStack_c8 - (this->LastChange).InitialValue.field0_0x0._s_0.X) * dVar5 +
              (local_d0 - (this->Parameter).field0_0x0._s_0.Y) * dVar4 +
              (local_c0 - (this->LastChange).InitialValue.field0_0x0._s_0.Y) *
              (this->CurTranslationOrigin).field0_0x0._s_0.X;
      local_c0 = local_c0 - dVar2 * (this->CurTranslationOrigin).field0_0x0._s_0.X;
      local_d0 = local_d0 - dVar2 * dVar4;
      uStack_c8 = uStack_c8 - dVar2 * dVar5;
    }
    local_78._8_4_ = (undefined4)uStack_c8;
    local_78._0_8_ = local_d0;
    local_78._12_4_ = uStack_c8._4_4_;
    local_68._8_8_ = 0;
    local_68._0_8_ = local_c0;
  }
  pUVar9 = (UGizmoPlaneTranslationParameterSource *)0x0;
  if (*(longlong *)&(this->PositionConstraintFunction).field_0x20 != 0) {
    pUVar9 = *(UGizmoPlaneTranslationParameterSource **)
              &(this->PositionConstraintFunction).field_0x28;
  }
  (**(code **)(pUVar9->_padding_ + 0x18))(pUVar9,&local_98);
  local_b8 = *(TVector2<double>_u_0 *)&(this->AxisSource).field_0x8;
  local_a8 = *(double *)&(this->TransformSource).field_0x8;
  dStack_a0 = (this->Parameter).field0_0x0._s_0.X;
  pUVar9 = this;
  if (this == (UGizmoPlaneTranslationParameterSource *)&DAT_00000028) {
    pUVar9 = (UGizmoPlaneTranslationParameterSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoVec2ParameterSource_*,FGizmoVec2ParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoVec2ParameterSource_*,FGizmoVec2ParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoVec2ParameterSource *)pUVar9,
              (FGizmoVec2ParameterChange *)&local_b8._s_0);
  return;
}

// StaticRegisterNativesUGizmoPlaneTranslationParameterSource @ 1496c2ab0

void __cdecl
UGizmoPlaneTranslationParameterSource::StaticRegisterNativesUGizmoPlaneTranslationParameterSource
          (void)

{
  return;
}

// __VTableCtorCaller @ 1496c9ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoPlaneTranslationParameterSource::__VTableCtorCaller(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TVector2<double> TVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UGizmoBaseVec2ParameterSource *this;
  
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = GetPrivateStaticClass();
  this = (UGizmoBaseVec2ParameterSource *)
         StaticAllocateObject
                   (pUVar12,pUVar11,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGizmoBaseVec2ParameterSource *)0x0) {
    UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    this[1]._padding_ = (longlong)<lambda_29_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)puVar1 = <lambda_30_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].OnParameterChanged.field_0x8 = 0;
    this[2]._padding_ =
         (longlong)
         &
         ___7__TFunction_OwnedObject_P6A_NAEBU__TVector_N_Math_UE__AEAU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    this[2]._padding_ = (longlong)<lambda_31_>::<lambda_invoker_cdecl>;
    if (&this[2]._padding_ != (longlong *)0x0) {
      this[2]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&),bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
           ::Call;
    }
    *(undefined8 *)&this[2].OnParameterChanged.field_0x18 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[2].OnParameterChanged.field_0x10 = 1;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[5]._padding_ = auVar4._8_8_;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar5._8_8_;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged.field_0x10 = auVar7;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[6]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[6]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[6]._padding_ = (longlong)(double)fVar2;
    this[6]._padding_ = auVar9._8_8_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

