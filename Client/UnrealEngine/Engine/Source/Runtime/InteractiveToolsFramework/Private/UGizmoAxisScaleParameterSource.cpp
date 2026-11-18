// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// Construct @ 14964eb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoAxisScaleParameterSource * __cdecl
UGizmoAxisScaleParameterSource::Construct
          (IGizmoAxisSource *param_1,IGizmoTransformSource *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoAxisScaleParameterSource *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UGizmoAxisScaleParameterSource_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoAxisScaleParameterSource *)
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

// StaticClass @ 14966c4f0

UClass * __cdecl UGizmoAxisScaleParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisScaleParameterSource,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisScaleParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 149673480

bool __cdecl
UGizmoAxisScaleParameterSource::<lambda_36_>::<lambda_invoker_cdecl>
          (double *param_1,double *param_2)

{
  return false;
}

// <lambda_invoker_cdecl> @ 149673490

double __cdecl UGizmoAxisScaleParameterSource::<lambda_37_>::<lambda_invoker_cdecl>(double *param_1)

{
  return *param_1;
}

// UGizmoAxisScaleParameterSource @ 149683ad0

UGizmoAxisScaleParameterSource * __thiscall
UGizmoAxisScaleParameterSource::UGizmoAxisScaleParameterSource
          (UGizmoAxisScaleParameterSource *this,FVTableHelper *param_1)

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
  *(undefined8 *)&this->ScaleAxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleAxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_36_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleAxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>::
         Call;
  }
  *(undefined8 *)&this->ScaleConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
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
  this->bClampToZero = false;
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

// UGizmoAxisScaleParameterSource @ 149683c20

UGizmoAxisScaleParameterSource * __thiscall
UGizmoAxisScaleParameterSource::UGizmoAxisScaleParameterSource
          (UGizmoAxisScaleParameterSource *this,FObjectInitializer *param_1)

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
  *(undefined8 *)&this->ScaleAxisDeltaConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleAxisDeltaConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleAxisDeltaConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_36_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ScaleAxisDeltaConstraintFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>::
         Call;
  }
  *(undefined8 *)&this->ScaleConstraintFunction = 0;
  *(undefined8 *)&(this->ScaleConstraintFunction).field_0x28 = 0;
  *(undefined ***)&(this->ScaleConstraintFunction).field_0x10 =
       &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->ScaleConstraintFunction).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
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
  this->bClampToZero = false;
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

// ~UGizmoAxisScaleParameterSource @ 1496896d0

void __thiscall
UGizmoAxisScaleParameterSource::~UGizmoAxisScaleParameterSource
          (UGizmoAxisScaleParameterSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoFloatParameterSource__;
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
  UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource
            ((UGizmoBaseFloatParameterSource *)this);
  return;
}

// BeginModify @ 149692e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UGizmoAxisScaleParameterSource::BeginModify(UGizmoAxisScaleParameterSource *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
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
  if (((*(longlong *)&(this->ScaleConstraintFunction).field_0x8 == 0) ||
      (*(longlong *)&(this->ScaleConstraintFunction).field_0x10 == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxisSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseGizmos\\ParameterToTransformAdapters.cpp"
                         ,0x129,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(undefined4 *)&this->AxisSource;
  plVar14 = (longlong *)0x0;
  *(undefined4 *)&(this->AxisSource).field_0x4 = uVar1;
  *(undefined4 *)&(this->AxisSource).field_0x8 = uVar1;
  plVar13 = plVar14;
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x18 != 0) {
    plVar13 = *(longlong **)&(this->ScaleConstraintFunction).field_0x20;
  }
  pdVar10 = (double *)(**(code **)(*plVar13 + 0x10))(uVar1,local_78);
  dVar7 = pdVar10[1];
  (this->CurScaleAxis).field0_0x0._s_0.Z = *pdVar10;
  (this->CurScaleOrigin).field0_0x0._s_0.X = dVar7;
  dVar7 = pdVar10[3];
  (this->CurScaleOrigin).field0_0x0._s_0.Y = pdVar10[2];
  (this->CurScaleOrigin).field0_0x0._s_0.Z = dVar7;
  dVar7 = pdVar10[5];
  this->_padding_ = (longlong)pdVar10[4];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] = dVar7;
  dVar7 = pdVar10[7];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = pdVar10[6];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = dVar7;
  uVar1 = *(undefined4 *)(pdVar10 + 8);
  uVar4 = *(undefined4 *)((longlong)pdVar10 + 0x44);
  uVar5 = *(undefined4 *)(pdVar10 + 9);
  uVar6 = *(undefined4 *)((longlong)pdVar10 + 0x4c);
  *(undefined4 *)((this->InitialTransform).Rotation.ZW.m128d_f64 + 1) = uVar1;
  *(undefined4 *)((longlong)(this->InitialTransform).Rotation.ZW.m128d_f64 + 0xc) = uVar4;
  *(undefined4 *)(this->InitialTransform).Translation.XY.m128d_f64 = uVar5;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 4) = uVar6;
  uVar4 = *(undefined4 *)((longlong)pdVar10 + 0x54);
  uVar5 = *(undefined4 *)(pdVar10 + 0xb);
  uVar6 = *(undefined4 *)((longlong)pdVar10 + 0x5c);
  *(undefined4 *)((this->InitialTransform).Translation.XY.m128d_f64 + 1) =
       *(undefined4 *)(pdVar10 + 10);
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.XY.m128d_f64 + 0xc) = uVar4;
  *(undefined4 *)(this->InitialTransform).Translation.ZW.m128d_f64 = uVar5;
  *(undefined4 *)((longlong)(this->InitialTransform).Translation.ZW.m128d_f64 + 4) = uVar6;
  plVar13 = plVar14;
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x8 != 0) {
    plVar13 = *(longlong **)&(this->ScaleConstraintFunction).field_0x10;
  }
  puVar11 = (undefined4 *)(**(code **)(*plVar13 + 0x18))(uVar1,local_a8);
  uVar1 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  *(undefined4 *)&this->TransformSource = *puVar11;
  *(undefined4 *)&(this->TransformSource).field_0x4 = uVar1;
  *(undefined4 *)&(this->TransformSource).field_0x8 = uVar4;
  *(undefined4 *)&(this->TransformSource).field_0xc = uVar5;
  uVar2 = *(undefined8 *)(puVar11 + 4);
  this->ScaleMultiplier = (float)(int)uVar2;
  this->bClampToZero = (bool)(char)((ulonglong)uVar2 >> 0x20);
  *(int3 *)&this->field_0xd5 = (int3)((ulonglong)uVar2 >> 0x28);
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x8 != 0) {
    plVar14 = *(longlong **)&(this->ScaleConstraintFunction).field_0x10;
  }
  puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,local_90);
  uVar2 = *puVar12;
  uVar8 = puVar12[1];
  this->Parameter = (float)(int)uVar2;
  (this->LastChange).InitialValue = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)&(this->LastChange).CurrentValue = uVar8;
  (this->CurScaleAxis).field0_0x0._s_0.X = (double)puVar12[2];
  return;
}

// EndModify @ 14969dc50

void __thiscall UGizmoAxisScaleParameterSource::EndModify(UGizmoAxisScaleParameterSource *this)

{
  return;
}

// GetParameter @ 1496a3af0

float __thiscall UGizmoAxisScaleParameterSource::GetParameter(UGizmoAxisScaleParameterSource *this)

{
  return *(float *)&this->AxisSource;
}

// GetPrivateStaticClass @ 1496a46f0

UClass * __cdecl UGizmoAxisScaleParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisScaleParameterSource",
               &Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisScaleParameterSource,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoAxisScaleParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisScaleParameterSource>,local_res8,
               UGizmoBaseFloatParameterSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisScaleParameterSource.InnerSingleton;
}

// SetParameter @ 1496be1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoAxisScaleParameterSource::SetParameter(UGizmoAxisScaleParameterSource *this,float param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  double dVar5;
  FGizmoFloatParameterChange FVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  UGizmoAxisScaleParameterSource *pUVar12;
  undefined1 auStack_118 [32];
  double local_f8 [3];
  double local_e0;
  double local_d8 [2];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  longlong local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  *(float *)&this->AxisSource = param_1;
  *(float *)&(this->AxisSource).field_0x8 = param_1;
  local_f8[0] = (double)(param_1 - *(float *)&(this->AxisSource).field_0x4) *
                (double)*(float *)&(this->ScaleConstraintFunction).field_0x28;
  local_c8 = (this->CurScaleAxis).field0_0x0._s_0.Z;
  dStack_c0 = (this->CurScaleOrigin).field0_0x0._s_0.X;
  local_b8 = (this->CurScaleOrigin).field0_0x0._s_0.Y;
  dStack_b0 = (this->CurScaleOrigin).field0_0x0._s_0.Z;
  local_a8 = this->_padding_;
  dStack_a0 = (this->InitialTransform).Rotation.XY.m128d_f64[0];
  local_98 = (this->InitialTransform).Rotation.XY.m128d_f64[1];
  dStack_90 = (this->InitialTransform).Rotation.ZW.m128d_f64[0];
  pdVar1 = (this->InitialTransform).Rotation.ZW.m128d_f64 + 1;
  dVar5 = *pdVar1;
  dVar7 = (this->InitialTransform).Translation.XY.m128d_f64[0];
  local_88 = *(undefined1 (*) [16])pdVar1;
  local_e0 = (this->InitialTransform).Translation.XY.m128d_f64[1];
  dStack_70 = (this->InitialTransform).Translation.ZW.m128d_f64[0];
  local_78 = local_e0;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar3 = (code *)this->_padding_;
  plVar11 = &this->_padding_;
  if (*(longlong **)&this->ScaleAxisDeltaConstraintFunction != (longlong *)0x0) {
    plVar11 = *(longlong **)&this->ScaleAxisDeltaConstraintFunction;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  cVar8 = (*pcVar3)(uVar9,local_f8,local_d8);
  dVar2 = *(double *)&(this->TransformSource).field_0x8;
  if (cVar8 == '\0') {
    uVar9 = (*(double *)&this->TransformSource * local_f8[0] + __real_3ff0000000000000) * dVar5;
    dVar5 = (*(double *)&this->ScaleMultiplier * local_f8[0] + __real_3ff0000000000000) * local_e0;
    uVar4 = (dVar2 * local_f8[0] + __real_3ff0000000000000) * dVar7;
  }
  else {
    uVar9 = *(double *)&this->TransformSource * local_d8[0] + dVar5;
    local_f8[0] = local_d8[0];
    uVar4 = dVar2 * local_d8[0] + dVar7;
    dVar5 = *(double *)&this->ScaleMultiplier * local_d8[0] + local_e0;
  }
  local_e0 = dVar5;
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->ScaleAxisDeltaConstraintFunction).field_0x8);
  pcVar3 = *(code **)&(this->ScaleAxisDeltaConstraintFunction).field_0x8;
  plVar11 = (longlong *)&(this->ScaleAxisDeltaConstraintFunction).field_0x18;
  if (*(longlong **)&this->ScaleConstraintFunction != (longlong *)0x0) {
    plVar11 = *(longlong **)&this->ScaleConstraintFunction;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  local_f8[0] = (double)(*pcVar3)(uVar10,local_f8);
  if ((this->ScaleConstraintFunction).field_0x2c != '\0') {
    local_e0 = dVar5;
    if (dVar5 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) {
      local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    if ((double)uVar9 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    if ((double)uVar4 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  local_88._8_4_ = (int)uVar4;
  local_88._0_8_ = uVar9;
  local_88._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  local_78 = local_e0;
  dStack_70 = 0.0;
  pUVar12 = (UGizmoAxisScaleParameterSource *)0x0;
  if (*(longlong *)&(this->ScaleConstraintFunction).field_0x18 != 0) {
    pUVar12 = *(UGizmoAxisScaleParameterSource **)&(this->ScaleConstraintFunction).field_0x20;
  }
  (**(code **)(pUVar12->_padding_ + 0x18))(pUVar12,&local_c8);
  FVar6.InitialValue = *(float *)&(this->AxisSource).field_0x4;
  FVar6.CurrentValue = *(float *)&(this->AxisSource).field_0x8;
  pUVar12 = this;
  if (this == (UGizmoAxisScaleParameterSource *)&DAT_00000028) {
    pUVar12 = (UGizmoAxisScaleParameterSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(IGizmoFloatParameterSource_*,FGizmoFloatParameterChange),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(IGizmoFloatParameterSource *)pUVar12,FVar6);
  return;
}

// StaticRegisterNativesUGizmoAxisScaleParameterSource @ 1496c27e0

void __cdecl
UGizmoAxisScaleParameterSource::StaticRegisterNativesUGizmoAxisScaleParameterSource(void)

{
  return;
}

// __VTableCtorCaller @ 1496c98b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UGizmoAxisScaleParameterSource::__VTableCtorCaller(FVTableHelper *param_1)

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
         &___7__TFunction_OwnedObject_P6A_NAEBNAEAN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[2].field_0x18 = <lambda_36_>::<lambda_invoker_cdecl>;
    if (&pUVar4[2].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 2) =
           UE::Core::Private::Function::
           TFunctionRefCaller<bool_(__cdecl*)(double_const_&,double_&),bool,double_const_&,double_&>
           ::Call;
    }
    *(undefined8 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[4].field_0x8 = 0;
    *(undefined ***)&pUVar4[3].field_0x18 =
         &___7__TFunction_OwnedObject_P6ANAEBN_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[3].field_0x20 = <lambda_37_>::<lambda_invoker_cdecl>;
    if (&pUVar4[3].field_0x20 != (undefined1 *)0x0) {
      *(code **)&pUVar4[3].field_0x8 =
           UE::Core::Private::Function::
           TFunctionRefCaller<double_(__cdecl*)(double_const_&),double,double_const_&>::Call;
    }
    *(undefined8 *)&pUVar4[4].field_0x10 = 0;
    *(undefined8 *)&pUVar4[4].field_0x18 = 0;
    *(undefined8 *)&pUVar4[4].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined4 *)&pUVar4[5].field_0x8 = 0x3ca3d70a;
    pUVar4[5].field_0xc = 0;
    *(undefined8 *)&pUVar4[5].field_0x10 = 0;
    *(undefined4 *)&pUVar4[5].field_0x18 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[7].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[7].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[7].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(pUVar4 + 8) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[8].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[8].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[8].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[8].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pUVar4 + 9) = (double)fVar1;
    *(double *)&pUVar4[9].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[9].field_0x10 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

