// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// Construct @ 14964f150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoUniformScaleParameterSource * __cdecl
UGizmoUniformScaleParameterSource::Construct
          (IGizmoAxisSource *param_1,IGizmoTransformSource *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoUniformScaleParameterSource *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UGizmoUniformScaleParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoUniformScaleParameterSource *)
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

// StaticClass @ 14966ba30

UClass * __cdecl UGizmoUniformScaleParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoUniformScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoUniformScaleParameterSource,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoUniformScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoUniformScaleParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673460

bool __cdecl
UGizmoUniformScaleParameterSource::<lambda_34_>::<lambda_invoker_cdecl>
          (double param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673470

double __cdecl
UGizmoUniformScaleParameterSource::<lambda_35_>::<lambda_invoker_cdecl>(double *param_1)

{
  return *param_1;
}

// UGizmoUniformScaleParameterSource @ 1496869d0

UGizmoUniformScaleParameterSource * __thiscall
UGizmoUniformScaleParameterSource::UGizmoUniformScaleParameterSource
          (UGizmoUniformScaleParameterSource *this,FVTableHelper *param_1)

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
  *(undefined8 *)&this->ScaleAxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleAxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_34_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleAxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->ScaleConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_35_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->ScaleMultiplier = 0.02;
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

// UGizmoUniformScaleParameterSource @ 149686b40

UGizmoUniformScaleParameterSource * __thiscall
UGizmoUniformScaleParameterSource::UGizmoUniformScaleParameterSource
          (UGizmoUniformScaleParameterSource *this,FObjectInitializer *param_1)

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
  *(undefined8 *)&this->ScaleAxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleAxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_34_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleAxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->ScaleConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_35_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->ScaleMultiplier = 0.02;
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

// ~UGizmoUniformScaleParameterSource @ 14968a310

void __thiscall
UGizmoUniformScaleParameterSource::~UGizmoUniformScaleParameterSource
          (UGizmoUniformScaleParameterSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoVec2ParameterSource__;
  if (*(longlong *)&this->ScaleConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ScaleAxisDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->ScaleAxisDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->ScaleAxisDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource
            ((UGizmoBaseVec2ParameterSource *)this);
  return;
}

// BeginModify @ 1496933f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoUniformScaleParameterSource::BeginModify(UGizmoUniformScaleParameterSource *this)

{
  code *pcVar1;
  float fVar2;
  undefined4 uVar3;
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
  if (((*(longlong *)&(this->ScaleConstraintFunction).field_0x8 == 0) ||
      (*(longlong *)&(this->ScaleConstraintFunction).field_0x10 == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxisSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ParameterToTransformAdapters.cpp"
                         ,0xe8,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = *(float *)&this->AxisSource;
  uVar3 = *(undefined4 *)&(this->AxisSource).field_0x4;
  uVar4 = *(undefined4 *)&(this->AxisSource).field_0x8;
  uVar5 = *(undefined4 *)&(this->AxisSource).field_0xc;
  this_00 = (IGizmoAxisSource *)0x0;
  *(float *)&this->TransformSource = fVar2;
  *(undefined4 *)&(this->TransformSource).field_0x4 = uVar3;
  *(undefined4 *)&(this->TransformSource).field_0x8 = uVar4;
  *(undefined4 *)&(this->TransformSource).field_0xc = uVar5;
  this->ScaleMultiplier = fVar2;
  *(undefined4 *)&this->field_0xd4 = uVar3;
  *(undefined4 *)&(this->Parameter).field0_0x0 = uVar4;
  *(undefined4 *)((longlong)&(this->Parameter).field0_0x0 + 4) = uVar5;
  pIVar10 = this_00;
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x18 != 0) {
    pIVar10 = *(IGizmoAxisSource **)&(this->ScaleConstraintFunction).field_0x20;
  }
  pdVar9 = (double *)(**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,local_78);
  dVar7 = pdVar9[1];
  (this->CurScaleAxisX).field0_0x0._s_0.Z = *pdVar9;
  (this->CurScaleAxisY).field0_0x0._s_0.X = dVar7;
  dVar7 = pdVar9[3];
  (this->CurScaleAxisY).field0_0x0._s_0.Y = pdVar9[2];
  (this->CurScaleAxisY).field0_0x0._s_0.Z = dVar7;
  dVar7 = pdVar9[5];
  this->_padding_ = (longlong)pdVar9[4];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] = dVar7;
  dVar7 = pdVar9[7];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = pdVar9[6];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  uVar3 = *(undefined4 *)(pdVar9 + 8);
  uVar4 = *(undefined4 *)((longlong)pdVar9 + 0x44);
  uVar5 = *(undefined4 *)(pdVar9 + 9);
  uVar6 = *(undefined4 *)((longlong)pdVar9 + 0x4c);
  *(undefined4 *)((this->InitialTransform).Rotation.ZW.m128d_f64 + 1) = uVar3;
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
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x8 != 0) {
    pIVar10 = *(IGizmoAxisSource **)&(this->ScaleConstraintFunction).field_0x10;
  }
  pdVar9 = (double *)(**(code **)((longlong)*pIVar10 + 0x10))(uVar3,local_98);
  dVar7 = pdVar9[1];
  (this->Parameter).field0_0x0._s_0.Y = *pdVar9;
  (this->LastChange).InitialValue.field0_0x0._s_0.X = dVar7;
  (this->LastChange).InitialValue.field0_0x0._s_0.Y = pdVar9[2];
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x8 != 0) {
    this_00 = *(IGizmoAxisSource **)&(this->ScaleConstraintFunction).field_0x10;
  }
  IGizmoAxisSource::GetAxisFrame
            (this_00,(TVector<double> *)&(this->LastChange).CurrentValue,
             (TVector<double> *)((longlong)&(this->CurScaleOrigin).field0_0x0 + 8),
             (TVector<double> *)((longlong)&(this->CurScaleNormal).field0_0x0 + 8));
  return;
}

// EndModify @ 14969dcb0

void __thiscall
UGizmoUniformScaleParameterSource::EndModify(UGizmoUniformScaleParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3ba0

TVector2<double> * __thiscall
UGizmoUniformScaleParameterSource::GetParameter
          (UGizmoUniformScaleParameterSource *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&(this->AxisSource).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&this->AxisSource;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a6680

UClass * __cdecl UGizmoUniformScaleParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoUniformScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoUniformScaleParameterSource,0x1d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoUniformScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoUniformScaleParameterSource>,local_res8,
               UGizmoBaseVec2ParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoUniformScaleParameterSource.InnerSingleton;
}

// SetParameter @ 1496bef60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoUniformScaleParameterSource::SetParameter
          (UGizmoUniformScaleParameterSource *this,TVector2<double> *param_1)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  UGizmoUniformScaleParameterSource *pUVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8 [2];
  TVector2<double>_u_0 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  longlong local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  local_88 = (this->CurScaleAxisY).field0_0x0._s_0.Y;
  dStack_80 = (this->CurScaleAxisY).field0_0x0._s_0.Z;
  *(double *)&this->AxisSource = (param_1->field0_0x0)._s_0.X;
  *(double *)&(this->AxisSource).field_0x8 = dVar3;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  local_68 = (this->InitialTransform).Rotation.XY.m128d_f64[1];
  dStack_60 = (this->InitialTransform).Rotation.ZW.m128d_f64[0];
  *(double *)&this->ScaleMultiplier = (param_1->field0_0x0)._s_0.X;
  (this->Parameter).field0_0x0._s_0.X = dVar3;
  local_a8 = (this->InitialTransform).Translation.XY.m128d_f64[1];
  dStack_40 = (this->InitialTransform).Translation.ZW.m128d_f64[0];
  local_d8 = ((dVar3 - *(double *)&(this->TransformSource).field_0x8) +
             (*(double *)&this->ScaleMultiplier - *(double *)&this->TransformSource)) *
             (double)*(float *)&(this->ScaleConstraintFunction).field_0x28;
  local_98 = (this->CurScaleAxisX).field0_0x0._s_0.Z;
  dStack_90 = (this->CurScaleAxisY).field0_0x0._s_0.X;
  local_78 = this->_padding_;
  dStack_70 = (this->InitialTransform).Rotation.XY.m128d_f64[0];
  pdVar1 = (this->InitialTransform).Rotation.ZW.m128d_f64 + 1;
  dVar4 = *pdVar1;
  dVar3 = (this->InitialTransform).Translation.XY.m128d_f64[0];
  local_58 = *(undefined1 (*) [16])pdVar1;
  local_d0 = local_d8;
  local_48 = local_a8;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar2 = (code *)this->_padding_;
  plVar7 = &this->_padding_;
  if (*(longlong **)&this->ScaleAxisDeltaConstraintFunction != (longlong *)0x0) {
    plVar7 = *(longlong **)&this->ScaleAxisDeltaConstraintFunction;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  cVar5 = (*pcVar2)(uVar6,&local_d0,local_c8);
  if (cVar5 != '\0') {
    local_d8 = local_c8[0];
  }
  uVar9 = SUB84(dVar4 - dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)(dVar4 - dVar3) >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
  ;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
         (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000) ||
       (uVar9 = SUB84(dVar4 - local_a8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar10 = (uint)((ulonglong)(dVar4 - local_a8) >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
       (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) ||
      (uVar9 = SUB84(dVar3 - local_a8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar10 = (uint)((ulonglong)(dVar3 - local_a8) >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
      (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000)) || (cVar5 == '\0')) {
    dVar4 = dVar4 * (local_d8 + __real_3ff0000000000000);
    local_a8 = (local_d8 + __real_3ff0000000000000) * local_a8;
    dVar3 = dVar3 * (local_d8 + __real_3ff0000000000000);
  }
  else {
    local_a8 = local_a8 + local_d8;
    dVar4 = dVar4 + local_d8;
    dVar3 = dVar3 + local_d8;
  }
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->ScaleAxisDeltaConstraintFunction).field_0x8);
  pcVar2 = *(code **)&(this->ScaleAxisDeltaConstraintFunction).field_0x8;
  plVar7 = (longlong *)&(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->ScaleConstraintFunction != (longlong *)0x0) {
    plVar7 = *(longlong **)&this->ScaleConstraintFunction;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  local_d8 = (double)(*pcVar2)(uVar6,&local_d8);
  local_48 = local_a8;
  dStack_40 = 0.0;
  local_58._8_4_ = SUB84(dVar3,0);
  local_58._0_8_ = dVar4;
  local_58._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  pUVar8 = (UGizmoUniformScaleParameterSource *)0x0;
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x18 != 0) {
    pUVar8 = *(UGizmoUniformScaleParameterSource **)&(this->ScaleConstraintFunction).field_0x20;
  }
  (**(code **)(pUVar8->_padding_ + 0x18))(pUVar8,&local_98);
  local_b8._s_0.X = (double)*(undefined8 *)&this->TransformSource;
  local_b8._s_0.Y = (double)*(undefined8 *)&(this->TransformSource).field_0x8;
  local_a8 = *(double *)&this->ScaleMultiplier;
  dStack_a0 = (this->Parameter).field0_0x0._s_0.X;
  pUVar8 = this;
  if (this == (UGizmoUniformScaleParameterSource *)&DAT_00000028) {
    pUVar8 = (UGizmoUniformScaleParameterSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoVec2ParameterSource_*,FGizmoVec2ParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoVec2ParameterSource_*,FGizmoVec2ParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoVec2ParameterSource *)pUVar8,
              (FGizmoVec2ParameterChange *)&local_b8._s_0);
  return;
}

// StaticRegisterNativesUGizmoUniformScaleParameterSource @ 1496c2be0

void __cdecl
UGizmoUniformScaleParameterSource::StaticRegisterNativesUGizmoUniformScaleParameterSource(void)

{
  return;
}

// __VTableCtorCaller @ 1496ca290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoUniformScaleParameterSource::__VTableCtorCaller(FVTableHelper *param_1)

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
    this[1]._padding_ = (longlong)<lambda_34_>::<lambda_invoker_cdecl>;
    if (&this[1]._padding_ != (longlong *)0x0) {
      this[1]._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&this[1].OnParameterChanged = 0;
    this[2]._padding_ = 0;
    *(undefined ***)&this[1].OnParameterChanged.field_0x10 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    puVar1 = &this[1].OnParameterChanged.field_0x18;
    *(code **)puVar1 = <lambda_35_>::<lambda_invoker_cdecl>;
    if (puVar1 != (undefined1 *)0x0) {
      *(code **)&this[1].OnParameterChanged =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].OnParameterChanged = 0x3ca3d70a;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x8 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar10 = UE::Math::TVector2<double>::ZeroVector;
    *(TVector2<double>_u_0 *)&this[3]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[2].OnParameterChanged.field_0x18 =
         (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged = auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar2;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[4].OnParameterChanged.field_0x10 = auVar5;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[5]._padding_ = auVar6._8_8_;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar2;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    this[5]._padding_ = (longlong)(double)fVar2;
    this[5]._padding_ = auVar7._8_8_;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    this[5]._padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[5]._padding_ = auVar8._8_8_;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar2;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])&this[5].OnParameterChanged = auVar9;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

