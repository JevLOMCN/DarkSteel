// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 13

// StaticClass @ 14962a300

UClass * __cdecl ULocalDoubleClickInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalDoubleClickInputBehavior",
               &Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalDoubleClickInputBehavior,0x1d0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalDoubleClickInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalDoubleClickInputBehavior>,local_res8,
               UDoubleClickInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f1a0

FInputRayHit * __cdecl
ULocalDoubleClickInputBehavior::<lambda_33_>::<lambda_invoker_cdecl>
          (FInputRayHit *__return_storage_ptr__,FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14962f1c0

void __cdecl
ULocalDoubleClickInputBehavior::<lambda_34_>::<lambda_invoker_cdecl>(FInputDeviceRay *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14962f1d0

void __cdecl
ULocalDoubleClickInputBehavior::<lambda_35_>::<lambda_invoker_cdecl>(int param_1,bool param_2)

{
  return;
}

// ULocalDoubleClickInputBehavior @ 14963be10

ULocalDoubleClickInputBehavior * __thiscall
ULocalDoubleClickInputBehavior::ULocalDoubleClickInputBehavior
          (ULocalDoubleClickInputBehavior *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  USingleClickInputBehavior::USingleClickInputBehavior((USingleClickInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UDoubleClickInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&this->IsHitByClickFunc = 0;
  *(undefined8 *)&(this->IsHitByClickFunc).field_0x28 = 0;
  *(undefined ***)&(this->IsHitByClickFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->IsHitByClickFunc).field_0x18;
  *(code **)puVar1 = <lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->IsHitByClickFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnClickedFunc = 0;
  *(undefined8 *)&(this->OnClickedFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickedFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnClickedFunc).field_0x18;
  *(code **)puVar1 = <lambda_34_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickedFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnUpdateModifierStateFunc = 0;
  *(undefined8 *)&(this->OnUpdateModifierStateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateModifierStateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_N_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnUpdateModifierStateFunc).field_0x18;
  *(code **)puVar1 = <lambda_35_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateModifierStateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,bool),void,int,bool>::
         Call;
  }
  return this;
}

// ULocalDoubleClickInputBehavior @ 14963bf10

ULocalDoubleClickInputBehavior * __thiscall
ULocalDoubleClickInputBehavior::ULocalDoubleClickInputBehavior(ULocalDoubleClickInputBehavior *this)

{
  undefined1 *puVar1;
  
  USingleClickInputBehavior::USingleClickInputBehavior((USingleClickInputBehavior *)this);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__UDoubleClickInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&this->IsHitByClickFunc = 0;
  *(undefined8 *)&(this->IsHitByClickFunc).field_0x28 = 0;
  *(undefined ***)&(this->IsHitByClickFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AUFInputRayHit__AEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->IsHitByClickFunc).field_0x18;
  *(code **)puVar1 = <lambda_33_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->IsHitByClickFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<FInputRayHit_(__cdecl*)(FInputDeviceRay_const_&),FInputRayHit,FInputDeviceRay_const_&>
         ::Call;
  }
  *(undefined8 *)&this->OnClickedFunc = 0;
  *(undefined8 *)&(this->OnClickedFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnClickedFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXAEBUFInputDeviceRay___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->OnClickedFunc).field_0x18;
  *(code **)puVar1 = <lambda_34_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnClickedFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FInputDeviceRay_const_&),void,FInputDeviceRay_const_&>::
         Call;
  }
  *(undefined8 *)&this->OnUpdateModifierStateFunc = 0;
  *(undefined8 *)&(this->OnUpdateModifierStateFunc).field_0x28 = 0;
  *(undefined ***)&(this->OnUpdateModifierStateFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6AXH_N_Z_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->OnUpdateModifierStateFunc).field_0x18;
  *(code **)puVar1 = <lambda_35_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->OnUpdateModifierStateFunc =
         UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int,bool),void,int,bool>::
         Call;
  }
  return this;
}

// ~ULocalDoubleClickInputBehavior @ 14963ed90

void __thiscall
ULocalDoubleClickInputBehavior::~ULocalDoubleClickInputBehavior
          (ULocalDoubleClickInputBehavior *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UDoubleClickInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  if (*(longlong *)&this->OnUpdateModifierStateFunc != 0) {
    plVar1 = *(longlong **)&(this->OnUpdateModifierStateFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnUpdateModifierStateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->OnClickedFunc != 0) {
    plVar1 = *(longlong **)&(this->OnClickedFunc).field_0x28;
    plVar2 = (longlong *)&(this->OnClickedFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->IsHitByClickFunc != 0) {
    plVar1 = *(longlong **)&(this->IsHitByClickFunc).field_0x28;
    plVar2 = (longlong *)&(this->IsHitByClickFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UDoubleClickInputBehavior__6B_;
  USingleClickInputBehavior::~USingleClickInputBehavior((USingleClickInputBehavior *)this);
  return;
}

// GetPrivateStaticClass @ 149657480

UClass * __cdecl ULocalDoubleClickInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalDoubleClickInputBehavior",
               &Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalDoubleClickInputBehavior,0x1d0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalDoubleClickInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalDoubleClickInputBehavior>,local_res8,
               UDoubleClickInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalDoubleClickInputBehavior.InnerSingleton;
}

// Initialize @ 149659390

void __thiscall ULocalDoubleClickInputBehavior::Initialize(ULocalDoubleClickInputBehavior *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  if (this == (ULocalDoubleClickInputBehavior *)0x0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496593a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x378))(this,plVar1);
  return;
}

// IsHitByClick @ 14965a280

FInputRayHit * __thiscall
ULocalDoubleClickInputBehavior::IsHitByClick
          (ULocalDoubleClickInputBehavior *this,FInputRayHit *__return_storage_ptr__,
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

// OnClicked @ 14965dee0

void __thiscall
ULocalDoubleClickInputBehavior::OnClicked
          (ULocalDoubleClickInputBehavior *this,FInputDeviceRay *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014965df2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
  return;
}

// OnUpdateModifierState @ 14965e810

void __thiscall
ULocalDoubleClickInputBehavior::OnUpdateModifierState
          (ULocalDoubleClickInputBehavior *this,int param_1,bool param_2)

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
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar3 = (longlong *)this->_padding_;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10,local_res18);
  return;
}

// StaticRegisterNativesULocalDoubleClickInputBehavior @ 149664c50

void __cdecl
ULocalDoubleClickInputBehavior::StaticRegisterNativesULocalDoubleClickInputBehavior(void)

{
  return;
}

