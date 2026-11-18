// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// StaticClass @ 149670eb0

UClass * __cdecl UGizmoScaledTransformSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledTransformSource",
               &Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoScaledTransformSource,0xc0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoScaledTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoScaledTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton;
}

// UGizmoScaledTransformSource @ 149686530

UGizmoScaledTransformSource * __thiscall
UGizmoScaledTransformSource::UGizmoScaledTransformSource
          (UGizmoScaledTransformSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->ChildTransformSource = 0;
  *(undefined8 *)&(this->ChildTransformSource).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  FSeparateScaleProvider::FSeparateScaleProvider(&this->ScaleProvider);
  return this;
}

// UGizmoScaledTransformSource @ 149686590

UGizmoScaledTransformSource * __thiscall
UGizmoScaledTransformSource::UGizmoScaledTransformSource
          (UGizmoScaledTransformSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->ChildTransformSource = 0;
  *(undefined8 *)&(this->ChildTransformSource).field_0x8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  FSeparateScaleProvider::FSeparateScaleProvider(&this->ScaleProvider);
  return this;
}

// ~UGizmoScaledTransformSource @ 14968a1a0

void __thiscall
UGizmoScaledTransformSource::~UGizmoScaledTransformSource(UGizmoScaledTransformSource *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  if (*(longlong *)&(this->ScaleProvider).SetScale != 0) {
    plVar1 = *(longlong **)&(this->ScaleProvider).SetScale.field_0x28;
    plVar2 = (longlong *)&(this->ScaleProvider).SetScale.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->ScaleProvider).GetScale != 0) {
    plVar1 = *(longlong **)&(this->ScaleProvider).GetScale.field_0x28;
    plVar2 = (longlong *)&(this->ScaleProvider).GetScale.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  return;
}

// GetPrivateStaticClass @ 1496a62d0

UClass * __cdecl UGizmoScaledTransformSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledTransformSource",
               &Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoScaledTransformSource,0xc0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoScaledTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoScaledTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledTransformSource.InnerSingleton;
}

// GetTransform @ 1496a9180

TTransform<double> * __thiscall
UGizmoScaledTransformSource::GetTransform
          (UGizmoScaledTransformSource *this,TTransform<double> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  double local_28;
  double dStack_20;
  double local_18;
  
  if (this->_padding_ == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)this->_padding_;
  }
  (**(code **)(*plVar3 + 0x10))();
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  plVar3 = *(longlong **)&(this->ScaleProvider).GetScale;
  pcVar1 = (code *)this->_padding_;
  plVar4 = &this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    plVar4 = plVar3;
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_28,uVar2);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_28;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_20;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_18;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// SetTransform @ 1496c0440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoScaledTransformSource::SetTransform
          (UGizmoScaledTransformSource *this,TTransform<double> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UGizmoScaledTransformSource *pUVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_1->Scale3D).XY.m128d_f64[1];
  local_88 = (param_1->Scale3D).ZW.m128d_f64[0];
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ScaleProvider).GetScale.field_0x8);
  pcVar1 = *(code **)&(this->ScaleProvider).GetScale.field_0x8;
  plVar2 = *(longlong **)&(this->ScaleProvider).SetScale;
  plVar4 = (longlong *)&(this->ScaleProvider).GetScale.field_0x18;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_98);
  local_78 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_1->Rotation).XY.m128d_f64[1];
  local_68 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_1->Rotation).ZW.m128d_f64[1];
  local_58 = (param_1->Translation).XY.m128d_f64[0];
  dStack_50 = (param_1->Translation).XY.m128d_f64[1];
  local_48 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_1->Translation).ZW.m128d_f64[1];
  local_38 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_34 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uStack_30 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uStack_2c = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  local_28 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_20 = 0;
  pUVar5 = (UGizmoScaledTransformSource *)0x0;
  if (this->_padding_ != 0) {
    pUVar5 = (UGizmoScaledTransformSource *)this->_padding_;
  }
  (**(code **)(pUVar5->_padding_ + 0x18))
            (UE::Math::TVector<double>::OneVector.field0_0x0._0_4_,&local_78);
  pUVar5 = this;
  if (this == (UGizmoScaledTransformSource *)&DAT_00000028) {
    pUVar5 = (UGizmoScaledTransformSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy> *
             )&this->_padding_,(IGizmoTransformSource *)pUVar5);
  return;
}

// StaticRegisterNativesUGizmoScaledTransformSource @ 1496c2b30

void __cdecl UGizmoScaledTransformSource::StaticRegisterNativesUGizmoScaledTransformSource(void)

{
  return;
}

