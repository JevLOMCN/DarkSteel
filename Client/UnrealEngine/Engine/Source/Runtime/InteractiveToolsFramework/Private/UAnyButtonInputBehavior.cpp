// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 23

// StaticClass @ 14962b7a0

UClass * __cdecl UAnyButtonInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AnyButtonInputBehavior",
               &Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton,
               StaticRegisterNativesUAnyButtonInputBehavior,0x90,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnyButtonInputBehavior>,
               InternalVTableHelperCtorCaller<UAnyButtonInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962ef60

FDeviceButtonState * __cdecl
`UAnyButtonInputBehavior::SetUseLeftMouseButton'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FDeviceButtonState *__return_storage_ptr__,FInputDeviceState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->Button).KeyName = (param_1->Mouse).Left.Button.KeyName;
  (__return_storage_ptr__->Button).KeyDetails.Object =
       (param_1->Mouse).Left.Button.KeyDetails.Object;
  pTVar1 = (param_1->Mouse).Left.Button.KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Button).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bPressed = (param_1->Mouse).Left.bPressed;
  __return_storage_ptr__->bDown = (param_1->Mouse).Left.bDown;
  __return_storage_ptr__->bReleased = (param_1->Mouse).Left.bReleased;
  __return_storage_ptr__->bDoubleClicked = (param_1->Mouse).Left.bDoubleClicked;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14962efb0

FDeviceButtonState * __cdecl
`UAnyButtonInputBehavior::SetUseMiddleMouseButton'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FDeviceButtonState *__return_storage_ptr__,FInputDeviceState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->Button).KeyName = (param_1->Mouse).Middle.Button.KeyName;
  (__return_storage_ptr__->Button).KeyDetails.Object =
       (param_1->Mouse).Middle.Button.KeyDetails.Object;
  pTVar1 = (param_1->Mouse).Middle.Button.KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Button).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bPressed = (param_1->Mouse).Middle.bPressed;
  __return_storage_ptr__->bDown = (param_1->Mouse).Middle.bDown;
  __return_storage_ptr__->bReleased = (param_1->Mouse).Middle.bReleased;
  __return_storage_ptr__->bDoubleClicked = (param_1->Mouse).Middle.bDoubleClicked;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14962f000

FDeviceButtonState * __cdecl
`UAnyButtonInputBehavior::SetUseRightMouseButton'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FDeviceButtonState *__return_storage_ptr__,FInputDeviceState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (__return_storage_ptr__->Button).KeyName = (param_1->Mouse).Right.Button.KeyName;
  (__return_storage_ptr__->Button).KeyDetails.Object =
       (param_1->Mouse).Right.Button.KeyDetails.Object;
  pTVar1 = (param_1->Mouse).Right.Button.KeyDetails.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Button).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bPressed = (param_1->Mouse).Right.bPressed;
  __return_storage_ptr__->bDown = (param_1->Mouse).Right.bDown;
  __return_storage_ptr__->bReleased = (param_1->Mouse).Right.bReleased;
  __return_storage_ptr__->bDoubleClicked = (param_1->Mouse).Right.bDoubleClicked;
  return __return_storage_ptr__;
}

// UAnyButtonInputBehavior @ 149638ed0

UAnyButtonInputBehavior * __thiscall
UAnyButtonInputBehavior::UAnyButtonInputBehavior
          (UAnyButtonInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&___7UAnyButtonInputBehavior__6B_;
  *(undefined8 *)&this->GetMouseButtonStateFunc = 0;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  return this;
}

// UAnyButtonInputBehavior @ 149638f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UAnyButtonInputBehavior * __thiscall
UAnyButtonInputBehavior::UAnyButtonInputBehavior(UAnyButtonInputBehavior *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  this->_padding_ = (longlong)&___7UAnyButtonInputBehavior__6B_;
  *(undefined8 *)&this->GetMouseButtonStateFunc = 0;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  local_48 = *(longlong *)&this->GetMouseButtonStateFunc;
  uVar2 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
  *(code **)&this->GetMouseButtonStateFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<FDeviceButtonState_(__cdecl*)(FInputDeviceState_const_&),FDeviceButtonState,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10 = 0x51e773b8;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18 = 0x4962ef60;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// ~UAnyButtonInputBehavior @ 14963df20

void __thiscall UAnyButtonInputBehavior::~UAnyButtonInputBehavior(UAnyButtonInputBehavior *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UAnyButtonInputBehavior__6B_;
  if (*(longlong *)&this->GetMouseButtonStateFunc != 0) {
    plVar1 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar2 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// GetActiveDevice @ 1496523f0

EInputDevices __thiscall UAnyButtonInputBehavior::GetActiveDevice(UAnyButtonInputBehavior *this)

{
  return this->ActiveDevice;
}

// GetButtonStateFunc @ 149652830

FDeviceButtonState * __thiscall
UAnyButtonInputBehavior::GetButtonStateFunc
          (UAnyButtonInputBehavior *this,FDeviceButtonState *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (this->ActiveDevice == Mouse) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetMouseButtonStateFunc);
    pcVar1 = *(code **)&this->GetMouseButtonStateFunc;
    plVar2 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(__return_storage_ptr__,uVar3,param_1);
    return __return_storage_ptr__;
  }
  FDeviceButtonState::FDeviceButtonState(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetClickPoint @ 1496529a0

TVector2<double> * __thiscall
UAnyButtonInputBehavior::GetClickPoint
          (UAnyButtonInputBehavior *this,TVector2<double> *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  double dVar1;
  
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    dVar1 = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Mouse).Position2D.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetDeviceRay @ 149652a50

FInputDeviceRay * __thiscall
UAnyButtonInputBehavior::GetDeviceRay
          (UAnyButtonInputBehavior *this,FInputDeviceRay *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.Z =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.Z = 1.0;
    __return_storage_ptr__->bHas2D = false;
    dVar1 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.X =
         (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.X;
    (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.Z =
         (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Z;
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Y;
    dVar2 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Z;
    __return_storage_ptr__->bHas2D = true;
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->WorldRay).Direction.field0_0x0._s_0.Z = dVar2;
    dVar1 = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
    (__return_storage_ptr__->ScreenPosition).field0_0x0._s_0.X =
         (param_1->Mouse).Position2D.field0_0x0._s_0.X;
    (__return_storage_ptr__->ScreenPosition).field0_0x0._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bHas2D = false;
  uVar3 = __real_3ff0000000000000;
  (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.X = (double)uVar4;
  (__return_storage_ptr__->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar5;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->WorldRay).Origin.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->WorldRay).Origin.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 + 0x10) = (int)uVar3;
  *(int *)((longlong)&(__return_storage_ptr__->WorldRay).Direction.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar3 >> 0x20);
  (__return_storage_ptr__->ScreenPosition).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->ScreenPosition).field0_0x0._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149655590

UClass * __cdecl UAnyButtonInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"AnyButtonInputBehavior",
               &Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton,
               StaticRegisterNativesUAnyButtonInputBehavior,0x90,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnyButtonInputBehavior>,
               InternalVTableHelperCtorCaller<UAnyButtonInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnyButtonInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658830

EInputDevices __thiscall UAnyButtonInputBehavior::GetSupportedDevices(UAnyButtonInputBehavior *this)

{
  return Mouse;
}

// GetWorldRay @ 149658db0

TRay<double> * __thiscall
UAnyButtonInputBehavior::GetWorldRay
          (UAnyButtonInputBehavior *this,TRay<double> *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    dVar1 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
         (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.X;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
         (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y =
         (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = 1.0;
  return __return_storage_ptr__;
}

// IsDoubleClicked @ 14965a140

bool __thiscall
UAnyButtonInputBehavior::IsDoubleClicked(UAnyButtonInputBehavior *this,FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  undefined1 local_d;
  
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetMouseButtonStateFunc);
    pcVar1 = *(code **)&this->GetMouseButtonStateFunc;
    plVar2 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(local_28,uVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return (bool)local_d;
  }
  return false;
}

// IsDown @ 14965a1d0

bool __thiscall
UAnyButtonInputBehavior::IsDown(UAnyButtonInputBehavior *this,FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  undefined1 local_f;
  
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetMouseButtonStateFunc);
    pcVar1 = *(code **)&this->GetMouseButtonStateFunc;
    plVar2 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(local_28,uVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return (bool)local_f;
  }
  return false;
}

// IsPressed @ 14965a550

bool __thiscall
UAnyButtonInputBehavior::IsPressed(UAnyButtonInputBehavior *this,FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  undefined1 local_10;
  
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetMouseButtonStateFunc);
    pcVar1 = *(code **)&this->GetMouseButtonStateFunc;
    plVar2 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(local_28,uVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return (bool)local_10;
  }
  if ((param_1->InputDevice >> 10 & 1) != 0) {
    this->ActiveDevice = TabletFingers;
  }
  return false;
}

// IsReleased @ 14965a5f0

bool __thiscall
UAnyButtonInputBehavior::IsReleased(UAnyButtonInputBehavior *this,FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  undefined1 local_e;
  
  if ((param_1->InputDevice & Mouse) != None) {
    this->ActiveDevice = Mouse;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetMouseButtonStateFunc);
    pcVar1 = *(code **)&this->GetMouseButtonStateFunc;
    plVar2 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
    plVar4 = (longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(local_28,uVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    return (bool)local_e;
  }
  return false;
}

// SetUseCustomMouseButton @ 149663500

void __thiscall
UAnyButtonInputBehavior::SetUseCustomMouseButton
          (UAnyButtonInputBehavior *this,
          TUniqueFunction<FDeviceButtonState___cdecl(FInputDeviceState_const_&)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  
  uVar12 = *(undefined8 *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&this->GetMouseButtonStateFunc;
  uVar2 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x4;
  uVar3 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x8;
  uVar4 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0xc;
  uVar5 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10;
  uVar6 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14;
  uVar7 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18;
  uVar8 = *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c;
  uVar13 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x20;
  uVar14 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x28;
  *(undefined8 *)&this->GetMouseButtonStateFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8 = uVar12;
  uVar9 = *(undefined4 *)&param_1->field_0x14;
  uVar10 = *(undefined4 *)&param_1->field_0x18;
  uVar11 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14 = uVar9;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18 = uVar10;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c = uVar11;
  uVar9 = *(undefined4 *)&param_1->field_0x24;
  uVar10 = *(undefined4 *)&param_1->field_0x28;
  uVar11 = *(undefined4 *)&param_1->field_0x2c;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x20 = *(undefined4 *)&param_1->field_0x20;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x24 = uVar9;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x28 = uVar10;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x2c = uVar11;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)&param_1->field_0x4 = uVar2;
  *(undefined4 *)&param_1->field_0x8 = uVar3;
  *(undefined4 *)&param_1->field_0xc = uVar4;
  *(undefined4 *)&param_1->field_0x10 = uVar5;
  *(undefined4 *)&param_1->field_0x14 = uVar6;
  *(undefined4 *)&param_1->field_0x18 = uVar7;
  *(undefined4 *)&param_1->field_0x1c = uVar8;
  *(undefined8 *)&param_1->field_0x20 = uVar13;
  *(undefined8 *)&param_1->field_0x28 = uVar14;
  if (*(longlong *)param_1 != 0) {
    plVar15 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014966354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x10))();
    return;
  }
  return;
}

// SetUseLeftMouseButton @ 149663560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAnyButtonInputBehavior::SetUseLeftMouseButton(UAnyButtonInputBehavior *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->GetMouseButtonStateFunc;
  uVar2 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
  *(code **)&this->GetMouseButtonStateFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<FDeviceButtonState_(__cdecl*)(FInputDeviceState_const_&),FDeviceButtonState,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10 = 0x51e773b8;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18 = 0x4962ef60;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// SetUseMiddleMouseButton @ 149663620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAnyButtonInputBehavior::SetUseMiddleMouseButton(UAnyButtonInputBehavior *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->GetMouseButtonStateFunc;
  uVar2 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
  *(code **)&this->GetMouseButtonStateFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<FDeviceButtonState_(__cdecl*)(FInputDeviceState_const_&),FDeviceButtonState,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10 = 0x51e773b8;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18 = 0x4962efb0;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// SetUseRightMouseButton @ 1496636e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UAnyButtonInputBehavior::SetUseRightMouseButton(UAnyButtonInputBehavior *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = *(longlong *)&this->GetMouseButtonStateFunc;
  uVar2 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8;
  local_38 = *(longlong *)&(this->GetMouseButtonStateFunc).field_0x10;
  uStack_30 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x18;
  uVar1 = *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x20;
  plStack_20 = *(longlong **)&(this->GetMouseButtonStateFunc).field_0x28;
  *(code **)&this->GetMouseButtonStateFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<FDeviceButtonState_(__cdecl*)(FInputDeviceState_const_&),FDeviceButtonState,FInputDeviceState_const_&>
       ::Call;
  *(undefined8 *)&(this->GetMouseButtonStateFunc).field_0x8 = uStack_40;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x10 = 0x51e773b8;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x14 = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x18 = 0x4962f000;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x1c = 1;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x24 = local_28._4_4_;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x28 = 0;
  *(undefined4 *)&(this->GetMouseButtonStateFunc).field_0x2c = 0;
  local_28 = uVar1;
  if (local_48 != 0) {
    plVar3 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar3 = plStack_20;
    }
    uStack_40 = uVar2;
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUAnyButtonInputBehavior @ 149664980

void __cdecl UAnyButtonInputBehavior::StaticRegisterNativesUAnyButtonInputBehavior(void)

{
  return;
}

