// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// Construct @ 14964e9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoAxisRotationParameterSource * __cdecl
UGizmoAxisRotationParameterSource::Construct
          (IGizmoAxisSource *param_1,IGizmoTransformSource *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoAxisRotationParameterSource *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UGizmoAxisRotationParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoAxisRotationParameterSource *)
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

// StaticClass @ 149673130

UClass * __cdecl UGizmoAxisRotationParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisRotationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisRotationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisRotationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisRotationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673430

bool __cdecl
UGizmoAxisRotationParameterSource::<lambda_32_>::<lambda_invoker_cdecl>
          (double param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673440

TQuat<double> * __cdecl
UGizmoAxisRotationParameterSource::<lambda_33_>::<lambda_invoker_cdecl>
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  __return_storage_ptr__->X = param_1->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// UGizmoAxisRotationParameterSource @ 149683850

UGizmoAxisRotationParameterSource * __thiscall
UGizmoAxisRotationParameterSource::UGizmoAxisRotationParameterSource
          (UGizmoAxisRotationParameterSource *this,FVTableHelper *param_1)

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
  *(undefined8 *)&this->AngleDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->AngleDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AngleDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->AngleDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_32_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AngleDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->RotationConstraintFunction = 0;
  *(undefined8 *)&(this->RotationConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->RotationConstraintFunction).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->RotationConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->RotationConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
         ::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->Angle = 0.0;
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

// UGizmoAxisRotationParameterSource @ 149683990

UGizmoAxisRotationParameterSource * __thiscall
UGizmoAxisRotationParameterSource::UGizmoAxisRotationParameterSource
          (UGizmoAxisRotationParameterSource *this,FObjectInitializer *param_1)

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
  *(undefined8 *)&this->AngleDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->AngleDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->AngleDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->AngleDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_32_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->AngleDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
  }
  *(undefined8 *)&this->RotationConstraintFunction = 0;
  *(undefined8 *)&(this->RotationConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->RotationConstraintFunction).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->RotationConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->RotationConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
         ::Call;
  }
  *(undefined8 *)&this->AxisSource = 0;
  *(undefined8 *)&(this->AxisSource).field_0x8 = 0;
  *(undefined8 *)&this->TransformSource = 0;
  *(undefined8 *)&(this->TransformSource).field_0x8 = 0;
  this->Angle = 0.0;
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

// ~UGizmoAxisRotationParameterSource @ 149689660

void __thiscall
UGizmoAxisRotationParameterSource::~UGizmoAxisRotationParameterSource
          (UGizmoAxisRotationParameterSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
  if (*(longlong *)&this->RotationConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->RotationConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->RotationConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->AngleDeltaConstraintFunction != 0) {
    plVar1 = *(longlong **)&(this->AngleDeltaConstraintFunction).field_0x28;
    plVar2 = (longlong *)&(this->AngleDeltaConstraintFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  return;
}

// BeginModify @ 149692cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoAxisRotationParameterSource::BeginModify(UGizmoAxisRotationParameterSource *this)

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
  if (((*(longlong *)&(this->RotationConstraintFunction).field_0x8 == 0) ||
      (*(longlong *)&(this->RotationConstraintFunction).field_0x10 == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxisSource != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ParameterToTransformAdapters.cpp"
                         ,0xa2,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(undefined4 *)&(this->RotationConstraintFunction).field_0x28;
  plVar14 = (longlong *)0x0;
  *(undefined4 *)&(this->RotationConstraintFunction).field_0x2c = uVar1;
  *(undefined4 *)&this->AxisSource = uVar1;
  plVar13 = plVar14;
  if (*(longlong *)&(this->RotationConstraintFunction).field_0x18 != 0) {
    plVar13 = *(longlong **)&(this->RotationConstraintFunction).field_0x20;
  }
  pdVar10 = (double *)(**(code **)(*plVar13 + 0x10))(uVar1,local_78);
  dVar6 = pdVar10[1];
  (this->CurRotationAxis).field0_0x0._s_0.Y = *pdVar10;
  (this->CurRotationAxis).field0_0x0._s_0.Z = dVar6;
  dVar6 = pdVar10[3];
  (this->CurRotationOrigin).field0_0x0._s_0.X = pdVar10[2];
  (this->CurRotationOrigin).field0_0x0._s_0.Y = dVar6;
  dVar6 = pdVar10[5];
  (this->CurRotationOrigin).field0_0x0._s_0.Z = pdVar10[4];
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
  if (*(longlong *)&(this->RotationConstraintFunction).field_0x8 != 0) {
    plVar13 = *(longlong **)&(this->RotationConstraintFunction).field_0x10;
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
  if (*(longlong *)&(this->RotationConstraintFunction).field_0x8 != 0) {
    plVar14 = *(longlong **)&(this->RotationConstraintFunction).field_0x10;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,local_90);
  uVar7 = *puVar12;
  uVar8 = puVar12[1];
  this->Angle = (float)(int)uVar7;
  (this->LastChange).InitialValue = (float)(int)((ulonglong)uVar7 >> 0x20);
  *(undefined8 *)&(this->LastChange).CurrentValue = uVar8;
  (this->CurRotationAxis).field0_0x0._s_0.X = (double)puVar12[2];
  return;
}

// EndModify @ 14969dc40

void __thiscall
UGizmoAxisRotationParameterSource::EndModify(UGizmoAxisRotationParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3ae0

float __thiscall
UGizmoAxisRotationParameterSource::GetParameter(UGizmoAxisRotationParameterSource *this)

{
  return *(float *)&(this->RotationConstraintFunction).field_0x28;
}

// GetPrivateStaticClass @ 1496a4630

UClass * __cdecl UGizmoAxisRotationParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisRotationParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisRotationParameterSource,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisRotationParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisRotationParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisRotationParameterSource.InnerSingleton;
}

// SetParameter @ 1496bdd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoAxisRotationParameterSource::SetParameter
          (UGizmoAxisRotationParameterSource *this,float param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  longlong *plVar16;
  UGizmoAxisRotationParameterSource *pUVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar18;
  double dVar19;
  undefined1 auStack_188 [32];
  double local_168;
  undefined1 local_160 [8];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_188;
  *(float *)&(this->RotationConstraintFunction).field_0x28 = param_1;
  *(float *)&this->AxisSource = param_1;
  local_168 = (double)(param_1 - *(float *)&(this->RotationConstraintFunction).field_0x2c);
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar3 = (code *)this->_padding_;
  plVar16 = &this->_padding_;
  if (*(longlong **)&this->AngleDeltaConstraintFunction != (longlong *)0x0) {
    plVar16 = *(longlong **)&this->AngleDeltaConstraintFunction;
  }
  uVar15 = (**(code **)(*plVar16 + 8))();
  (*pcVar3)(uVar15,&local_168,local_160);
  dVar2 = *(double *)&(this->AxisSource).field_0x8;
  dVar4 = *(double *)&this->TransformSource;
  dVar1 = *(double *)&(this->TransformSource).field_0x8;
  __libm_sse2_sincos_();
  local_138 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar2;
  dStack_130 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar4;
  local_128 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar1;
  local_148 = dVar1;
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->AngleDeltaConstraintFunction).field_0x8);
  pcVar3 = *(code **)&(this->AngleDeltaConstraintFunction).field_0x8;
  plVar16 = (longlong *)&(this->AngleDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->RotationConstraintFunction != (longlong *)0x0) {
    plVar16 = *(longlong **)&this->RotationConstraintFunction;
  }
  uVar15 = (**(code **)(*plVar16 + 8))();
  (*pcVar3)(&local_158,uVar15,&local_138);
  dVar13 = (double)CONCAT44(uStack_14c,local_150);
  dVar12 = (double)CONCAT44(uStack_154,local_158);
  dVar1 = *(double *)&(this->LastChange).CurrentValue;
  dVar2 = (this->CurRotationAxis).field0_0x0._s_0.X;
  dVar4 = (this->CurRotationOrigin).field0_0x0._s_0.Z - *(double *)&this->Angle;
  dVar14 = (double)CONCAT44(uStack_13c,local_140);
  dVar6 = (this->InitialTransform).Rotation.XY.m128d_f64[1] - dVar2;
  dVar5 = (this->InitialTransform).Rotation.XY.m128d_f64[0] - dVar1;
  dVar19 = dVar6 * dVar13 - dVar5 * local_148;
  dVar19 = dVar19 + dVar19;
  dVar7 = dVar4 * local_148 - dVar6 * dVar12;
  dVar7 = dVar7 + dVar7;
  dVar18 = dVar5 * dVar12 - dVar4 * dVar13;
  dVar18 = dVar18 + dVar18;
  dVar8 = (this->CurRotationOrigin).field0_0x0._s_0.X;
  dVar9 = (this->CurRotationOrigin).field0_0x0._s_0.Y;
  dVar10 = (this->CurRotationAxis).field0_0x0._s_0.Y;
  dVar11 = (this->CurRotationAxis).field0_0x0._s_0.Z;
  local_c8 = (this->InitialTransform).Translation.XY.m128d_f64[1];
  dStack_c0 = (this->InitialTransform).Translation.ZW.m128d_f64[0];
  dVar1 = (dVar19 * local_148 - dVar18 * dVar12) + dVar5 + dVar7 * dVar14 + dVar1;
  local_d8 = (this->InitialTransform).Rotation.ZW.m128d_f64[1];
  dStack_d0 = (this->InitialTransform).Translation.XY.m128d_f64[0];
  local_128 = local_148;
  local_e8 = (dVar7 * dVar12 - dVar19 * dVar13) + dVar6 + dVar18 * dVar14 + dVar2;
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._0_8_ =
       (dVar18 * dVar13 - dVar7 * local_148) + dVar4 + dVar19 * dVar14 + *(double *)&this->Angle;
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_e0 = 0;
  dVar1 = local_148 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar2 = dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar14 * dVar11 +
          dVar13 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_148 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar14 * dVar9 +
          dVar13 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_148 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_118._8_4_ = SUB84(dVar2,0);
  local_118._0_8_ =
       dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar14 * dVar10 +
       dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] + dVar1;
  local_118._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_108._8_4_ = SUB84(dVar4,0);
  local_108._0_8_ =
       dVar12 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar14 * dVar8 +
       dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       local_148 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_108._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  pUVar17 = (UGizmoAxisRotationParameterSource *)0x0;
  if (*(longlong *)&(this->RotationConstraintFunction).field_0x18 != 0) {
    pUVar17 = *(UGizmoAxisRotationParameterSource **)&(this->RotationConstraintFunction).field_0x20;
  }
  (**(code **)(pUVar17->_padding_ + 0x18))(SUB84(dVar1,0),local_118);
  pUVar17 = this;
  if (this == (UGizmoAxisRotationParameterSource *)&DAT_00000028) {
    pUVar17 = (UGizmoAxisRotationParameterSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoFloatParameterSource *)pUVar17,
              *(FGizmoFloatParameterChange *)&(this->RotationConstraintFunction).field_0x2c);
  return;
}

// StaticRegisterNativesUGizmoAxisRotationParameterSource @ 1496c27d0

void __cdecl
UGizmoAxisRotationParameterSource::StaticRegisterNativesUGizmoAxisRotationParameterSource(void)

{
  return;
}

// __VTableCtorCaller @ 1496c96e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoAxisRotationParameterSource::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(code **)&pUVar4[2].field_0x18 = <lambda_32_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double,double_&),bool,double,double_&>::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &
         ___7__TFunction_OwnedObject_P6A_AU__TQuat_N_Math_UE__AEBU123__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    *(code **)&pUVar4[3].field_0x20 = <lambda_33_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<UE::Math::TQuat<double>_(__cdecl*)(UE::Math::TQuat<double>_const_&),UE::Math::TQuat<double>,UE::Math::TQuat<double>_const_&>
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

