// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 149671490

UClass * __cdecl UGizmoScaledAndUnscaledTransformSources::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledAndUnscaledTransformSources",
               &Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton,
               StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoScaledAndUnscaledTransformSources>
               ,InternalVTableHelperCtorCaller<UGizmoScaledAndUnscaledTransformSources>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton;
}

// UGizmoScaledAndUnscaledTransformSources @ 149686470

UGizmoScaledAndUnscaledTransformSources * __thiscall
UGizmoScaledAndUnscaledTransformSources::UGizmoScaledAndUnscaledTransformSources
          (UGizmoScaledAndUnscaledTransformSources *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->ScaledTransformSource = 0;
  *(undefined8 *)&(this->ScaledTransformSource).field_0x8 = 0;
  *(undefined8 *)&this->UnscaledTransformSource = 0;
  *(undefined8 *)&(this->UnscaledTransformSource).field_0x8 = 0;
  return this;
}

// UGizmoScaledAndUnscaledTransformSources @ 1496864d0

UGizmoScaledAndUnscaledTransformSources * __thiscall
UGizmoScaledAndUnscaledTransformSources::UGizmoScaledAndUnscaledTransformSources
          (UGizmoScaledAndUnscaledTransformSources *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->ScaledTransformSource = 0;
  *(undefined8 *)&(this->ScaledTransformSource).field_0x8 = 0;
  *(undefined8 *)&this->UnscaledTransformSource = 0;
  *(undefined8 *)&(this->UnscaledTransformSource).field_0x8 = 0;
  return this;
}

// ~UGizmoScaledAndUnscaledTransformSources @ 14968a180

void __thiscall
UGizmoScaledAndUnscaledTransformSources::~UGizmoScaledAndUnscaledTransformSources
          (UGizmoScaledAndUnscaledTransformSources *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  return;
}

// Construct @ 149699db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoScaledAndUnscaledTransformSources * __cdecl
UGizmoScaledAndUnscaledTransformSources::Construct
          (IGizmoTransformSource *param_1,USceneComponent *param_2,UObject *param_3)

{
  UClass *pUVar1;
  UGizmoScaledAndUnscaledTransformSources *pUVar2;
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
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar2 = (UGizmoScaledAndUnscaledTransformSources *)
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
  if ((param_1 != (IGizmoTransformSource *)0x0) &&
     (this = (UObject *)(**(code **)((longlong)*param_1 + 8))(param_1), this != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this);
    }
    pUVar1 = Z_Construct_UClass_UGizmoTransformSource_NoRegister();
    pUVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar1);
    pUVar4 = this;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar2->ScaledTransformSource = pUVar4;
  *(UObject **)&(pUVar2->ScaledTransformSource).field_0x8 = pUVar3;
  FObjectInitializer::AssertIfInConstructor
            (param_3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGizmoComponentWorldTransformSource::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8._8_8_ = param_3;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  *(USceneComponent **)(pUVar4 + 2) = param_2;
  pUVar4[2].field_0x8 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pUVar3 = pUVar4 + 1;
  if (pUVar4 == (UObject *)0x0) {
    pUVar3 = pUVar6;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *(UObject **)&pUVar2->UnscaledTransformSource = pUVar4;
  *(UObject **)&(pUVar2->UnscaledTransformSource).field_0x8 = pUVar3;
  return pUVar2;
}

// GetPrivateStaticClass @ 1496a6210

UClass * __cdecl UGizmoScaledAndUnscaledTransformSources::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoScaledAndUnscaledTransformSources",
               &Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton,
               StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoScaledAndUnscaledTransformSources>
               ,InternalVTableHelperCtorCaller<UGizmoScaledAndUnscaledTransformSources>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoScaledAndUnscaledTransformSources.InnerSingleton;
}

// GetTransform @ 1496a9140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
UGizmoScaledAndUnscaledTransformSources::GetTransform
          (UGizmoScaledAndUnscaledTransformSources *this,TTransform<double> *__return_storage_ptr__)

{
  if (this->_padding_ != 0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    return __return_storage_ptr__;
  }
  (**(code **)(_DAT_00000000 + 0x10))();
  return __return_storage_ptr__;
}

// SetTransform @ 1496c0330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGizmoScaledAndUnscaledTransformSources::SetTransform
          (UGizmoScaledAndUnscaledTransformSources *this,TTransform<double> *param_1)

{
  longlong lVar1;
  UGizmoScaledAndUnscaledTransformSources *pUVar2;
  UGizmoScaledAndUnscaledTransformSources *pUVar3;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar3 = (UGizmoScaledAndUnscaledTransformSources *)0x0;
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    local_d8 = (param_1->Rotation).XY.m128d_f64[0];
    dStack_d0 = (param_1->Rotation).XY.m128d_f64[1];
    local_c8 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_c0 = (param_1->Rotation).ZW.m128d_f64[1];
    local_b8 = (param_1->Translation).XY.m128d_f64[0];
    dStack_b0 = (param_1->Translation).XY.m128d_f64[1];
    local_a8 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_a0 = (param_1->Translation).ZW.m128d_f64[1];
    local_98 = (param_1->Scale3D).XY.m128d_f64[0];
    dStack_90 = (param_1->Scale3D).XY.m128d_f64[1];
    local_88 = (param_1->Scale3D).ZW.m128d_f64[0];
    dStack_80 = (param_1->Scale3D).ZW.m128d_f64[1];
    lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x10))((longlong *)this->_padding_,local_78)
    ;
    local_98 = *(double *)(lVar1 + 0x40);
    dStack_90 = *(double *)(lVar1 + 0x48);
    local_88 = *(double *)(lVar1 + 0x50);
    dStack_80 = 0.0;
    pUVar2 = pUVar3;
    if (this->_padding_ != 0) {
      pUVar2 = (UGizmoScaledAndUnscaledTransformSources *)this->_padding_;
    }
    (**(code **)(pUVar2->_padding_ + 0x18))(SUB84(local_88,0),&local_d8);
  }
  pUVar2 = pUVar3;
  if (this->_padding_ != 0) {
    pUVar2 = (UGizmoScaledAndUnscaledTransformSources *)this->_padding_;
  }
  (**(code **)(pUVar2->_padding_ + 0x18))(pUVar2,param_1);
  pUVar2 = this;
  if (this == (UGizmoScaledAndUnscaledTransformSources *)&DAT_00000028) {
    pUVar2 = pUVar3;
  }
  TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy> *
             )&this->_padding_,(IGizmoTransformSource *)pUVar2);
  return;
}

// StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources @ 1496c2b20

void __cdecl
UGizmoScaledAndUnscaledTransformSources::
StaticRegisterNativesUGizmoScaledAndUnscaledTransformSources(void)

{
  return;
}

