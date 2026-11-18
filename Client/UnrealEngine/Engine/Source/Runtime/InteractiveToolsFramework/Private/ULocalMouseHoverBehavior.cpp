// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 17

// StaticClass @ 14962b540

UClass * __cdecl ULocalMouseHoverBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalMouseHoverBehavior",
               &Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton,
               StaticRegisterNativesULocalMouseHoverBehavior,0x1e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalMouseHoverBehavior>,
               InternalVTableHelperCtorCaller<ULocalMouseHoverBehavior>,local_res8,
               UMouseHoverBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f1e0

FInputRayHit * __cdecl
ULocalMouseHoverBehavior::<lambda_36_>::<lambda_invoker_cdecl>
          (FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14962f200

void __cdecl
ULocalMouseHoverBehavior::<lambda_37_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f210

bool __cdecl
ULocalMouseHoverBehavior::<lambda_38_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return false;
}

// <lambda_invoker_cdecl> @ 14962f220

void __cdecl ULocalMouseHoverBehavior::<lambda_39_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f230

void __cdecl
ULocalMouseHoverBehavior::<lambda_40_>::<lambda_invoker_cdecl>(int param_1,bool param_2)

{
  return;
}

// ULocalMouseHoverBehavior @ 14963c010

ULocalMouseHoverBehavior * __thiscall
ULocalMouseHoverBehavior::ULocalMouseHoverBehavior
          (ULocalMouseHoverBehavior *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UMouseHoverBehavior::UMouseHoverBehavior((UMouseHoverBehavior *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMouseHoverBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->BeginHitTestFunc = 0;
  *(undefined8 *)&(this->BeginHitTestFunc).field_0x28 = 0;
  *(undefined ***)&(this->BeginHitTestFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->BeginHitTestFunc).field_0x18;
  *(code **)puVar1 = <lambda_36_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->BeginHitTestFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnBeginHoverFunc = 0;
  *(undefined8 *)&(this->OnBeginHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnBeginHoverFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnBeginHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnBeginHoverFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnUpdateHoverFunc = 0;
  *(undefined8 *)&(this->OnUpdateHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateHoverFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnUpdateHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_38_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateHoverFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceRay_const_&),bool,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnEndHoverFunc = 0;
  *(undefined8 *)&(this->OnEndHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnEndHoverFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnEndHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnEndHoverFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  *(undefined8 *)&this->OnUpdateModifierStateFunc = 0;
  *(undefined8 *)&(this->OnUpdateModifierStateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateModifierStateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_N_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnUpdateModifierStateFunc).field_0x18;
  *(code **)puVar1 = <lambda_40_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateModifierStateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,bool),void,int,bool>::
         Call;
  }
  return this;
}

// ULocalMouseHoverBehavior @ 14963c190

ULocalMouseHoverBehavior * __thiscall
ULocalMouseHoverBehavior::ULocalMouseHoverBehavior(ULocalMouseHoverBehavior *this)

{
  undefined1 *puVar1;
  
  UMouseHoverBehavior::UMouseHoverBehavior((UMouseHoverBehavior *)this);
  this->_padding_ = (longlong)&_vftable__for__UMouseHoverBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->BeginHitTestFunc = 0;
  *(undefined8 *)&(this->BeginHitTestFunc).field_0x28 = 0;
  *(undefined ***)&(this->BeginHitTestFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->BeginHitTestFunc).field_0x18;
  *(code **)puVar1 = <lambda_36_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->BeginHitTestFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnBeginHoverFunc = 0;
  *(undefined8 *)&(this->OnBeginHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnBeginHoverFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnBeginHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnBeginHoverFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnUpdateHoverFunc = 0;
  *(undefined8 *)&(this->OnUpdateHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateHoverFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnUpdateHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_38_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateHoverFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceRay_const_&),bool,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnEndHoverFunc = 0;
  *(undefined8 *)&(this->OnEndHoverFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnEndHoverFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnEndHoverFunc).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnEndHoverFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  *(undefined8 *)&this->OnUpdateModifierStateFunc = 0;
  *(undefined8 *)&(this->OnUpdateModifierStateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateModifierStateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_N_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnUpdateModifierStateFunc).field_0x18;
  *(code **)puVar1 = <lambda_40_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateModifierStateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,bool),void,int,bool>::
         Call;
  }
  return this;
}

// ~ULocalMouseHoverBehavior @ 14963ee50

void __thiscall ULocalMouseHoverBehavior::~ULocalMouseHoverBehavior(ULocalMouseHoverBehavior *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMouseHoverBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if (*(longlong *)&this->OnUpdateModifierStateFunc != 0) {
    plVar1 = *(longlong **)&(this->OnUpdateModifierStateFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnUpdateModifierStateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnEndHoverFunc != 0) {
    plVar1 = *(longlong **)&(this->OnEndHoverFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnEndHoverFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnUpdateHoverFunc != 0) {
    plVar1 = *(longlong **)&(this->OnUpdateHoverFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnUpdateHoverFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnBeginHoverFunc != 0) {
    plVar1 = *(longlong **)&(this->OnBeginHoverFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnBeginHoverFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->BeginHitTestFunc != 0) {
    plVar1 = *(longlong **)&(this->BeginHitTestFunc).field_0x28;
    plVar2 = (longlong *)&(this->BeginHitTestFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UMouseHoverBehavior::~UMouseHoverBehavior((UMouseHoverBehavior *)this);
  return;
}

// BeginHoverSequenceHitTest @ 14964b440

FInputRayHit * __thiscall
ULocalMouseHoverBehavior::BeginHoverSequenceHitTest
          (ULocalMouseHoverBehavior *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar1 = (code *)this->_padding_;
  plVar3 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar3 = (longlong *)this->_padding_;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar2,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149657540

UClass * __cdecl ULocalMouseHoverBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalMouseHoverBehavior",
               &Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton,
               StaticRegisterNativesULocalMouseHoverBehavior,0x1e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalMouseHoverBehavior>,
               InternalVTableHelperCtorCaller<ULocalMouseHoverBehavior>,local_res8,
               UMouseHoverBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalMouseHoverBehavior.InnerSingleton;
}

// Initialize @ 1496593b0

void __thiscall ULocalMouseHoverBehavior::Initialize(ULocalMouseHoverBehavior *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (ULocalMouseHoverBehavior *)0x0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496593c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 800))(this,plVar1);
  return;
}

// OnBeginHover @ 14965ce20

void __thiscall
ULocalMouseHoverBehavior::OnBeginHover(ULocalMouseHoverBehavior *this,FInputDeviceRay *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  UNRECOVERED_JUMPTABLE = (code *)this->_padding_;
  plVar2 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar2 = (longlong *)this->_padding_;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014965ce6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// OnEndHover @ 14965e320

void __thiscall ULocalMouseHoverBehavior::OnEndHover(ULocalMouseHoverBehavior *this)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  UNRECOVERED_JUMPTABLE = (code *)this->_padding_;
  plVar2 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar2 = (longlong *)this->_padding_;
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014965e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// OnUpdateHover @ 14965e780

bool __thiscall
ULocalMouseHoverBehavior::OnUpdateHover(ULocalMouseHoverBehavior *this,FInputDeviceRay *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  UNRECOVERED_JUMPTABLE = (code *)this->_padding_;
  plVar3 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar3 = (longlong *)this->_padding_;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014965e7cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_1);
  return (bool)uVar1;
}

// OnUpdateModifierState @ 14965e870

void __thiscall
ULocalMouseHoverBehavior::OnUpdateModifierState
          (ULocalMouseHoverBehavior *this,int param_1,bool param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar1 = (code *)this->_padding_;
  plVar3 = &this->_padding_;
  if (*(longlong **)&this->BeginHitTestFunc != (longlong *)0x0) {
    plVar3 = *(longlong **)&this->BeginHitTestFunc;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10,local_res18);
  return;
}

// StaticRegisterNativesULocalMouseHoverBehavior @ 149664c60

void __cdecl ULocalMouseHoverBehavior::StaticRegisterNativesULocalMouseHoverBehavior(void)

{
  return;
}

