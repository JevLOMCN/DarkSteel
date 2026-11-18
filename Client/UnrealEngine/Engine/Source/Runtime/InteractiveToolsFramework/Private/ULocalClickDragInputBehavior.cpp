// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 17

// StaticClass @ 14962da30

UClass * __cdecl ULocalClickDragInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalClickDragInputBehavior",
               &Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalClickDragInputBehavior,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalClickDragInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalClickDragInputBehavior>,local_res8,
               UClickDragInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f0b0

FInputRayHit * __cdecl
ULocalClickDragInputBehavior::<lambda_25_>::<lambda_invoker_cdecl>
          (FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14962f0d0

void __cdecl
ULocalClickDragInputBehavior::<lambda_26_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f0e0

void __cdecl
ULocalClickDragInputBehavior::<lambda_27_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f0f0

void __cdecl
ULocalClickDragInputBehavior::<lambda_28_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f100

void __cdecl ULocalClickDragInputBehavior::<lambda_29_>::<lambda_invoker_cdecl>(void)

{
  return;
}

// ULocalClickDragInputBehavior @ 14963bb50

ULocalClickDragInputBehavior * __thiscall
ULocalClickDragInputBehavior::ULocalClickDragInputBehavior
          (ULocalClickDragInputBehavior *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UClickDragInputBehavior::UClickDragInputBehavior((UClickDragInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClickDragInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&this->CanBeginClickDragFunc = 0;
  *(undefined8 *)&(this->CanBeginClickDragFunc).field_0x28 = 0;
  *(undefined ***)&(this->CanBeginClickDragFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CanBeginClickDragFunc).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CanBeginClickDragFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnClickPressFunc = 0;
  puVar1 = &(this->OnClickPressFunc).field_0x18;
  *(undefined8 *)&(this->OnClickPressFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickPressFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickPressFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnClickDragFunc = 0;
  puVar1 = &(this->OnClickDragFunc).field_0x18;
  *(undefined8 *)&(this->OnClickDragFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickDragFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickDragFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnClickReleaseFunc = 0;
  puVar1 = &(this->OnClickReleaseFunc).field_0x18;
  *(undefined8 *)&(this->OnClickReleaseFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickReleaseFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickReleaseFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnTerminateFunc = 0;
  *(undefined8 *)&(this->OnTerminateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnTerminateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnTerminateFunc).field_0x18;
  *(code **)puVar1 = <lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnTerminateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  return this;
}

// ULocalClickDragInputBehavior @ 14963bcb0

ULocalClickDragInputBehavior * __thiscall
ULocalClickDragInputBehavior::ULocalClickDragInputBehavior(ULocalClickDragInputBehavior *this)

{
  undefined1 *puVar1;
  
  UClickDragInputBehavior::UClickDragInputBehavior((UClickDragInputBehavior *)this);
  this->_padding_ = (longlong)&_vftable__for__UClickDragInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  *(undefined8 *)&this->CanBeginClickDragFunc = 0;
  *(undefined8 *)&(this->CanBeginClickDragFunc).field_0x28 = 0;
  *(undefined ***)&(this->CanBeginClickDragFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->CanBeginClickDragFunc).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CanBeginClickDragFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnClickPressFunc = 0;
  puVar1 = &(this->OnClickPressFunc).field_0x18;
  *(undefined8 *)&(this->OnClickPressFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickPressFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_26_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickPressFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnClickDragFunc = 0;
  puVar1 = &(this->OnClickDragFunc).field_0x18;
  *(undefined8 *)&(this->OnClickDragFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickDragFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickDragFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnClickReleaseFunc = 0;
  puVar1 = &(this->OnClickReleaseFunc).field_0x18;
  *(undefined8 *)&(this->OnClickReleaseFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickReleaseFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickReleaseFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnTerminateFunc = 0;
  *(undefined8 *)&(this->OnTerminateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnTerminateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnTerminateFunc).field_0x18;
  *(code **)puVar1 = <lambda_29_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnTerminateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  }
  return this;
}

// ~ULocalClickDragInputBehavior @ 14963eca0

void __thiscall
ULocalClickDragInputBehavior::~ULocalClickDragInputBehavior(ULocalClickDragInputBehavior *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClickDragInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  if (*(longlong *)&this->OnTerminateFunc != 0) {
    plVar1 = *(longlong **)&(this->OnTerminateFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnTerminateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnClickReleaseFunc != 0) {
    plVar1 = *(longlong **)&(this->OnClickReleaseFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnClickReleaseFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnClickDragFunc != 0) {
    plVar1 = *(longlong **)&(this->OnClickDragFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnClickDragFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnClickPressFunc != 0) {
    plVar1 = *(longlong **)&(this->OnClickPressFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnClickPressFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CanBeginClickDragFunc != 0) {
    plVar1 = *(longlong **)&(this->CanBeginClickDragFunc).field_0x28;
    plVar2 = (longlong *)&(this->CanBeginClickDragFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UClickDragInputBehavior::~UClickDragInputBehavior((UClickDragInputBehavior *)this);
  return;
}

// CanBeginClickDragSequence @ 14964d2a0

FInputRayHit * __thiscall
ULocalClickDragInputBehavior::CanBeginClickDragSequence
          (ULocalClickDragInputBehavior *this,FInputRayHit *__return_storage_ptr__,
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

// GetPrivateStaticClass @ 1496573c0

UClass * __cdecl ULocalClickDragInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalClickDragInputBehavior",
               &Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalClickDragInputBehavior,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalClickDragInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalClickDragInputBehavior>,local_res8,
               UClickDragInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalClickDragInputBehavior.InnerSingleton;
}

// Initialize @ 149659370

void __thiscall ULocalClickDragInputBehavior::Initialize(ULocalClickDragInputBehavior *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (ULocalClickDragInputBehavior *)0x0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000149659383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))(this,plVar1);
  return;
}

// OnClickDrag @ 14965d330

void __thiscall
ULocalClickDragInputBehavior::OnClickDrag
          (ULocalClickDragInputBehavior *this,FInputDeviceRay *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014965d37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// OnClickPress @ 14965dbc0

void __thiscall
ULocalClickDragInputBehavior::OnClickPress
          (ULocalClickDragInputBehavior *this,FInputDeviceRay *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014965dc0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// OnClickRelease @ 14965de20

void __thiscall
ULocalClickDragInputBehavior::OnClickRelease
          (ULocalClickDragInputBehavior *this,FInputDeviceRay *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014965de78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// OnTerminateDragSequence @ 14965e660

void __thiscall
ULocalClickDragInputBehavior::OnTerminateDragSequence(ULocalClickDragInputBehavior *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014965e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// StaticRegisterNativesULocalClickDragInputBehavior @ 149664c40

void __cdecl ULocalClickDragInputBehavior::StaticRegisterNativesULocalClickDragInputBehavior(void)

{
  return;
}

