// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticClass @ 149671230

UClass * __cdecl UGizmoTransformProxyTransformSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformProxyTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoTransformProxyTransformSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformProxyTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformProxyTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton;
}

// UGizmoTransformProxyTransformSource @ 149686890

UGizmoTransformProxyTransformSource * __thiscall
UGizmoTransformProxyTransformSource::UGizmoTransformProxyTransformSource
          (UGizmoTransformProxyTransformSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  this->bOverrideSetPivotMode = false;
  *(undefined8 *)&this->OnPivotChanged = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x18 = 2;
  return this;
}

// UGizmoTransformProxyTransformSource @ 149686900

UGizmoTransformProxyTransformSource * __thiscall
UGizmoTransformProxyTransformSource::UGizmoTransformProxyTransformSource
          (UGizmoTransformProxyTransformSource *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Proxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  this->bOverrideSetPivotMode = false;
  *(undefined8 *)&this->OnPivotChanged = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnPivotChanged).field_0x18 = 2;
  return this;
}

// ~UGizmoTransformProxyTransformSource @ 14968a2a0

void __thiscall
UGizmoTransformProxyTransformSource::~UGizmoTransformProxyTransformSource
          (UGizmoTransformProxyTransformSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGizmoTransformSource__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPivotChanged).field_0x8,*(int *)&(this->OnPivotChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnPivotChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPivotChanged);
  UGizmoBaseTransformSource::~UGizmoBaseTransformSource((UGizmoBaseTransformSource *)this);
  return;
}

// Construct @ 14969a140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGizmoTransformProxyTransformSource * __cdecl
UGizmoTransformProxyTransformSource::Construct(UTransformProxy *param_1,UObject *param_2)

{
  UClass *pUVar1;
  UGizmoTransformProxyTransformSource *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_2;
  pUVar2 = (UGizmoTransformProxyTransformSource *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (pUVar2->Proxy).field0_0x0.DebugPtr = param_1;
  return pUVar2;
}

// GetPrivateStaticClass @ 1496a6500

UClass * __cdecl UGizmoTransformProxyTransformSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformProxyTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoTransformProxyTransformSource,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGizmoTransformProxyTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformProxyTransformSource>,local_res8,
               UGizmoBaseTransformSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformProxyTransformSource.InnerSingleton;
}

// GetTransform @ 1496a9210

TTransform<double> * __thiscall
UGizmoTransformProxyTransformSource::GetTransform
          (UGizmoTransformProxyTransformSource *this,TTransform<double> *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)this->_padding_ + 0x2c0))();
  return __return_storage_ptr__;
}

// SetTransform @ 1496c0550

void __thiscall
UGizmoTransformProxyTransformSource::SetTransform
          (UGizmoTransformProxyTransformSource *this,TTransform<double> *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy> *this_00;
  
  plVar2 = (longlong *)this->_padding_;
  if ((char)this->_padding_ == '\0') {
    (**(code **)(*plVar2 + 0x2c8))();
    this_00 = (TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>
               *)&this->_padding_;
    if (*(char *)(this->_padding_ + 0x109) == '\0') {
      this_00 = (TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>
                 *)&this->_padding_;
    }
  }
  else {
    uVar1 = *(undefined1 *)((longlong)plVar2 + 0x109);
    *(undefined1 *)((longlong)plVar2 + 0x109) = 1;
    (**(code **)(*(longlong *)this->_padding_ + 0x2c8))();
    this_00 = (TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>
               *)&this->_padding_;
    *(undefined1 *)(this->_padding_ + 0x109) = uVar1;
  }
  if (this == (UGizmoTransformProxyTransformSource *)&DAT_00000028) {
    this = (UGizmoTransformProxyTransformSource *)0x0;
  }
  TMulticastDelegate<void___cdecl(IGizmoTransformSource_*),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,(IGizmoTransformSource *)this);
  return;
}

// StaticRegisterNativesUGizmoTransformProxyTransformSource @ 1496c2b90

void __cdecl
UGizmoTransformProxyTransformSource::StaticRegisterNativesUGizmoTransformProxyTransformSource(void)

{
  return;
}

