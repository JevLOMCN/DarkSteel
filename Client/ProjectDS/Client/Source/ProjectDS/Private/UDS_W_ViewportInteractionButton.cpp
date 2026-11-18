// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b789c10

UClass * __cdecl UDS_W_ViewportInteractionButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ViewportInteractionButton",
               &Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton,
               StaticRegisterNativesUDS_W_ViewportInteractionButton,0x1960,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_ViewportInteractionButton>,
               InternalVTableHelperCtorCaller<UDS_W_ViewportInteractionButton>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton;
}

// UDS_W_ViewportInteractionButton @ 14b78d590

UDS_W_ViewportInteractionButton * __thiscall
UDS_W_ViewportInteractionButton::UDS_W_ViewportInteractionButton
          (UDS_W_ViewportInteractionButton *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_ViewportInteractionButton__6B_;
  (this->ViewportInteractionData)._padding_ = '\0';
  (this->ViewportInteractionData).bIsPressed = false;
  (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ViewportInteractionData).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->ViewportInteractionData).MoveVectorSize = 0.0;
  (this->ViewportInteractionData).MoveVectorSizeX = 0.0;
  (this->ViewportInteractionData).MoveVectorSizeY = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSize = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSizeX = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSizeY = 0.0;
  (this->ViewportInteractionData).bIsMouseWheelUp = false;
  (this->ViewportInteractionData).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Pressed)._padding_ = '\0';
  (this->Event_Pressed).bIsPressed = false;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Pressed).MoveVectorSize = 0.0;
  (this->Event_Pressed).MoveVectorSizeX = 0.0;
  (this->Event_Pressed).MoveVectorSizeY = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSize = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Pressed).bIsMouseWheelUp = false;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Released)._padding_ = '\0';
  (this->Event_Released).bIsPressed = false;
  (this->Event_Released).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Released).MoveVectorSize = 0.0;
  (this->Event_Released).MoveVectorSizeX = 0.0;
  (this->Event_Released).MoveVectorSizeY = 0.0;
  (this->Event_Released).MoveVectorDeltaSize = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Released).bIsMouseWheelUp = false;
  (this->Event_Released).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_ChangedMoveVector)._padding_ = '\0';
  (this->Event_ChangedMoveVector).bIsPressed = false;
  (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_ChangedMoveVector).MoveVectorSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeY = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeY = 0.0;
  (this->Event_ChangedMoveVector).bIsMouseWheelUp = false;
  (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_MouseWheel)._padding_ = '\0';
  (this->Event_MouseWheel).bIsPressed = false;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_MouseWheel).MoveVectorSize = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeY = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSize = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeY = 0.0;
  (this->Event_MouseWheel).bIsMouseWheelUp = false;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_W_ViewportInteractionButton @ 14b78d7a0

UDS_W_ViewportInteractionButton * __thiscall
UDS_W_ViewportInteractionButton::UDS_W_ViewportInteractionButton
          (UDS_W_ViewportInteractionButton *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_ViewportInteractionButton__6B_;
  (this->ViewportInteractionData)._padding_ = '\0';
  (this->ViewportInteractionData).bIsPressed = false;
  (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ViewportInteractionData).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->ViewportInteractionData).MoveVectorSize = 0.0;
  (this->ViewportInteractionData).MoveVectorSizeX = 0.0;
  (this->ViewportInteractionData).MoveVectorSizeY = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSize = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSizeX = 0.0;
  (this->ViewportInteractionData).MoveVectorDeltaSizeY = 0.0;
  (this->ViewportInteractionData).bIsMouseWheelUp = false;
  (this->ViewportInteractionData).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Pressed)._padding_ = '\0';
  (this->Event_Pressed).bIsPressed = false;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Pressed).MoveVectorSize = 0.0;
  (this->Event_Pressed).MoveVectorSizeX = 0.0;
  (this->Event_Pressed).MoveVectorSizeY = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSize = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Pressed).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Pressed).bIsMouseWheelUp = false;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_Released)._padding_ = '\0';
  (this->Event_Released).bIsPressed = false;
  (this->Event_Released).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_Released).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_Released).MoveVectorSize = 0.0;
  (this->Event_Released).MoveVectorSizeX = 0.0;
  (this->Event_Released).MoveVectorSizeY = 0.0;
  (this->Event_Released).MoveVectorDeltaSize = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeX = 0.0;
  (this->Event_Released).MoveVectorDeltaSizeY = 0.0;
  (this->Event_Released).bIsMouseWheelUp = false;
  (this->Event_Released).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_ChangedMoveVector)._padding_ = '\0';
  (this->Event_ChangedMoveVector).bIsPressed = false;
  (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_ChangedMoveVector).MoveVectorSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorSizeY = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSize = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeX = 0.0;
  (this->Event_ChangedMoveVector).MoveVectorDeltaSizeY = 0.0;
  (this->Event_ChangedMoveVector).bIsMouseWheelUp = false;
  (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Event_MouseWheel)._padding_ = '\0';
  (this->Event_MouseWheel).bIsPressed = false;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->Event_MouseWheel).MoveVectorSize = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorSizeY = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSize = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeX = 0.0;
  (this->Event_MouseWheel).MoveVectorDeltaSizeY = 0.0;
  (this->Event_MouseWheel).bIsMouseWheelUp = false;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_W_ViewportInteractionButton @ 14b78e480

void __thiscall
UDS_W_ViewportInteractionButton::~UDS_W_ViewportInteractionButton
          (UDS_W_ViewportInteractionButton *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_ViewportInteractionButton__6B_;
  UCommonButtonBase::~UCommonButtonBase((UCommonButtonBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fdc0

IClassDescriptor * __thiscall
UDS_W_ViewportInteractionButton::GetFieldNotificationDescriptor
          (UDS_W_ViewportInteractionButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_ViewportInteractionButton::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7907f0

UClass * __cdecl UDS_W_ViewportInteractionButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ViewportInteractionButton",
               &Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton,
               StaticRegisterNativesUDS_W_ViewportInteractionButton,0x1960,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_ViewportInteractionButton>,
               InternalVTableHelperCtorCaller<UDS_W_ViewportInteractionButton>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ViewportInteractionButton.InnerSingleton;
}

// StaticRegisterNativesUDS_W_ViewportInteractionButton @ 14b790c40

void __cdecl
UDS_W_ViewportInteractionButton::StaticRegisterNativesUDS_W_ViewportInteractionButton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_ViewportInteractionButton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b791f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_W_ViewportInteractionButton::__VTableCtorCaller(FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UCommonButtonBase *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (UCommonButtonBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCommonButtonBase *)0x0) {
    UCommonButtonBase::UCommonButtonBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UVisual__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_W_ViewportInteractionButton__6B_;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    TVar1 = UE::Math::TVector2<double>::ZeroVector;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnEvent_Pressed @ 14b792350

void __cdecl
UDS_W_ViewportInteractionButton::execOnEvent_Pressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_Pressed((UDS_W_ViewportInteractionButton *)param_1);
  return;
}

// execOnEvent_Released @ 14b792370

void __cdecl
UDS_W_ViewportInteractionButton::execOnEvent_Released
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnEvent_Released((UDS_W_ViewportInteractionButton *)param_1);
  return;
}

// GetMousePointOnViewport @ 14bcf91b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_W_ViewportInteractionButton::GetMousePointOnViewport
          (UDS_W_ViewportInteractionButton *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UDS_WindowManager *this_00;
  FSlateApplication *pFVar4;
  float *pfVar5;
  FGeometry *pFVar6;
  TTransform2<float> *pTVar7;
  float local_48;
  float fStack_44;
  TTransform2<float> local_40 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  pFVar4 = FSlateApplication::Get();
  pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,&local_48);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  pFVar6 = UDS_WindowManager::GetRootWidgetGeometry(this_00);
  local_48 = fVar1;
  fStack_44 = fVar2;
  pTVar7 = Inverse<TTransform2<float>_>(local_40,&pFVar6->AccumulatedRenderTransform);
  fVar1 = (pTVar7->M).M[0][1];
  fVar2 = (pTVar7->M).M[1][1];
  fVar3 = (pTVar7->Trans).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fStack_44 * (pTVar7->M).M[1][0] + local_48 * (pTVar7->M).M[0][0] +
               (pTVar7->Trans).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(local_48 * fVar1 + fStack_44 * fVar2 + fVar3);
  return __return_storage_ptr__;
}

// NativeConstruct @ 14bd07490

void __thiscall
UDS_W_ViewportInteractionButton::NativeConstruct(UDS_W_ViewportInteractionButton *this)

{
  UCommonButtonBase::NativeConstruct((UCommonButtonBase *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_W_ViewportInteractionButton>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x15b0,(UDS_W_ViewportInteractionButton *)&stack0x00000008,
             (pmf_386a2d27 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_W_ViewportInteractionButton>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x15d0,(UDS_W_ViewportInteractionButton *)&stack0x00000008,
             (pmf_386a2d27 *)this);
  return;
}

// NativeDestruct @ 14bd078d0

void __thiscall
UDS_W_ViewportInteractionButton::NativeDestruct(UDS_W_ViewportInteractionButton *this)

{
  UCommonButtonBase::NativeDestruct((UCommonButtonBase *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x15b0,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x15d0,this);
  return;
}

// NativeOnMouseWheel @ 14bd09540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_ViewportInteractionButton::NativeOnMouseWheel
          (UDS_W_ViewportInteractionButton *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined6 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined7 uVar13;
  FFieldId local_18;
  
  (this->ViewportInteractionData).bIsMouseWheelUp =
       0.0 < *(float *)&(param_2->WheelOrGestureDelta).field_0x4;
  bVar5 = (this->ViewportInteractionData).bIsPressed;
  uVar6 = *(undefined6 *)&(this->ViewportInteractionData).field_0x2;
  dVar1 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X;
  dVar2 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.X;
  (this->Event_MouseWheel)._padding_ = (this->ViewportInteractionData)._padding_;
  (this->Event_MouseWheel).bIsPressed = bVar5;
  *(undefined6 *)&(this->Event_MouseWheel).field_0x2 = uVar6;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.Y;
  dVar4 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X;
  (this->Event_MouseWheel).PressedPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0.X = dVar3;
  dVar2 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X;
  (this->Event_MouseWheel).ReleasedPoint.field0_0x0._s_0.Y = dVar1;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0.X = dVar4;
  dVar1 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.Y;
  fVar7 = (this->ViewportInteractionData).MoveVectorSize;
  fVar8 = (this->ViewportInteractionData).MoveVectorSizeX;
  (this->Event_MouseWheel).CurPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0.X = dVar3;
  fVar9 = (this->ViewportInteractionData).MoveVectorSizeY;
  fVar10 = (this->ViewportInteractionData).MoveVectorDeltaSize;
  fVar11 = (this->ViewportInteractionData).MoveVectorDeltaSizeX;
  fVar12 = (this->ViewportInteractionData).MoveVectorDeltaSizeY;
  (this->Event_MouseWheel).MoveVector.field0_0x0._s_0.Y = dVar1;
  (this->Event_MouseWheel).MoveVectorSize = fVar7;
  (this->Event_MouseWheel).MoveVectorSizeX = fVar8;
  bVar5 = (this->ViewportInteractionData).bIsMouseWheelUp;
  uVar13 = *(undefined7 *)&(this->ViewportInteractionData).field_0x61;
  (this->Event_MouseWheel).MoveVectorSizeY = fVar9;
  (this->Event_MouseWheel).MoveVectorDeltaSize = fVar10;
  (this->Event_MouseWheel).MoveVectorDeltaSizeX = fVar11;
  (this->Event_MouseWheel).MoveVectorDeltaSizeY = fVar12;
  (this->Event_MouseWheel).bIsMouseWheelUp = bVar5;
  *(undefined7 *)&(this->Event_MouseWheel).field_0x61 = uVar13;
  local_18.FieldName = FFieldNotificationClassDescriptor::Event_MouseWheel.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::Event_MouseWheel.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_18);
  UCommonUserWidget::NativeOnMouseWheel
            ((UCommonUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeTick @ 14bd09ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_ViewportInteractionButton::NativeTick
          (UDS_W_ViewportInteractionButton *this,FGeometry *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined6 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined7 uVar13;
  FFieldId local_18;
  
  UUserWidget::NativeTick((UUserWidget *)this,param_1,param_2);
  if ((this->ViewportInteractionData).bIsPressed == true) {
    UpdateMoveVectorOnPressed(this);
    bVar5 = (this->ViewportInteractionData).bIsPressed;
    uVar6 = *(undefined6 *)&(this->ViewportInteractionData).field_0x2;
    dVar1 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X;
    dVar2 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
    dVar3 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.X;
    (this->Event_ChangedMoveVector)._padding_ = (this->ViewportInteractionData)._padding_;
    (this->Event_ChangedMoveVector).bIsPressed = bVar5;
    *(undefined6 *)&(this->Event_ChangedMoveVector).field_0x2 = uVar6;
    (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0.X = dVar1;
    dVar1 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.Y;
    dVar4 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X;
    (this->Event_ChangedMoveVector).PressedPoint.field0_0x0._s_0.Y = dVar2;
    (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0.X = dVar3;
    dVar2 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y;
    dVar3 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X;
    (this->Event_ChangedMoveVector).ReleasedPoint.field0_0x0._s_0.Y = dVar1;
    (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0.X = dVar4;
    dVar1 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.Y;
    fVar7 = (this->ViewportInteractionData).MoveVectorSize;
    fVar8 = (this->ViewportInteractionData).MoveVectorSizeX;
    (this->Event_ChangedMoveVector).CurPoint.field0_0x0._s_0.Y = dVar2;
    (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0.X = dVar3;
    fVar9 = (this->ViewportInteractionData).MoveVectorSizeY;
    fVar10 = (this->ViewportInteractionData).MoveVectorDeltaSize;
    fVar11 = (this->ViewportInteractionData).MoveVectorDeltaSizeX;
    fVar12 = (this->ViewportInteractionData).MoveVectorDeltaSizeY;
    (this->Event_ChangedMoveVector).MoveVector.field0_0x0._s_0.Y = dVar1;
    (this->Event_ChangedMoveVector).MoveVectorSize = fVar7;
    (this->Event_ChangedMoveVector).MoveVectorSizeX = fVar8;
    bVar5 = (this->ViewportInteractionData).bIsMouseWheelUp;
    uVar13 = *(undefined7 *)&(this->ViewportInteractionData).field_0x61;
    (this->Event_ChangedMoveVector).MoveVectorSizeY = fVar9;
    (this->Event_ChangedMoveVector).MoveVectorDeltaSize = fVar10;
    (this->Event_ChangedMoveVector).MoveVectorDeltaSizeX = fVar11;
    (this->Event_ChangedMoveVector).MoveVectorDeltaSizeY = fVar12;
    (this->Event_ChangedMoveVector).bIsMouseWheelUp = bVar5;
    *(undefined7 *)&(this->Event_ChangedMoveVector).field_0x61 = uVar13;
    local_18.FieldName = FFieldNotificationClassDescriptor::Event_ChangedMoveVector.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::Event_ChangedMoveVector.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,&local_18);
  }
  return;
}

// OnEvent_Pressed @ 14bd0dd60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_ViewportInteractionButton::OnEvent_Pressed(UDS_W_ViewportInteractionButton *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined6 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined7 uVar13;
  TVector2<double> *pTVar14;
  TVector2<double>_u_0 local_18;
  
  (this->ViewportInteractionData).bIsPressed = true;
  pTVar14 = GetMousePointOnViewport(this,(TVector2<double> *)&local_18._s_0);
  dVar1 = (pTVar14->field0_0x0)._s_0.Y;
  (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y = dVar1;
  UpdateMoveVectorOnPressed(this);
  bVar5 = (this->ViewportInteractionData).bIsPressed;
  uVar6 = *(undefined6 *)&(this->ViewportInteractionData).field_0x2;
  dVar1 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X;
  dVar2 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.X;
  (this->Event_Pressed)._padding_ = (this->ViewportInteractionData)._padding_;
  (this->Event_Pressed).bIsPressed = bVar5;
  *(undefined6 *)&(this->Event_Pressed).field_0x2 = uVar6;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.Y;
  dVar4 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X;
  (this->Event_Pressed).PressedPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0.X = dVar3;
  dVar2 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X;
  (this->Event_Pressed).ReleasedPoint.field0_0x0._s_0.Y = dVar1;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0.X = dVar4;
  dVar1 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.Y;
  fVar7 = (this->ViewportInteractionData).MoveVectorSize;
  fVar8 = (this->ViewportInteractionData).MoveVectorSizeX;
  (this->Event_Pressed).CurPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0.X = dVar3;
  fVar9 = (this->ViewportInteractionData).MoveVectorSizeY;
  fVar10 = (this->ViewportInteractionData).MoveVectorDeltaSize;
  fVar11 = (this->ViewportInteractionData).MoveVectorDeltaSizeX;
  fVar12 = (this->ViewportInteractionData).MoveVectorDeltaSizeY;
  (this->Event_Pressed).MoveVector.field0_0x0._s_0.Y = dVar1;
  (this->Event_Pressed).MoveVectorSize = fVar7;
  (this->Event_Pressed).MoveVectorSizeX = fVar8;
  bVar5 = (this->ViewportInteractionData).bIsMouseWheelUp;
  uVar13 = *(undefined7 *)&(this->ViewportInteractionData).field_0x61;
  (this->Event_Pressed).MoveVectorSizeY = fVar9;
  (this->Event_Pressed).MoveVectorDeltaSize = fVar10;
  (this->Event_Pressed).MoveVectorDeltaSizeX = fVar11;
  (this->Event_Pressed).MoveVectorDeltaSizeY = fVar12;
  (this->Event_Pressed).bIsMouseWheelUp = bVar5;
  *(undefined7 *)&(this->Event_Pressed).field_0x61 = uVar13;
  local_18._s_0.X = (double)FFieldNotificationClassDescriptor::Event_Pressed.FieldName;
  local_18._8_4_ = FFieldNotificationClassDescriptor::Event_Pressed.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)&local_18._s_0);
  return;
}

// OnEvent_Released @ 14bd0de30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_ViewportInteractionButton::OnEvent_Released(UDS_W_ViewportInteractionButton *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined6 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined7 uVar13;
  TVector2<double> *pTVar14;
  TVector2<double>_u_0 local_18;
  
  (this->ViewportInteractionData).bIsPressed = false;
  pTVar14 = GetMousePointOnViewport(this,(TVector2<double> *)&local_18._s_0);
  dVar1 = (pTVar14->field0_0x0)._s_0.Y;
  (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.Y = dVar1;
  bVar5 = (this->ViewportInteractionData).bIsPressed;
  uVar6 = *(undefined6 *)&(this->ViewportInteractionData).field_0x2;
  dVar1 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X;
  dVar2 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.X;
  (this->Event_Released)._padding_ = (this->ViewportInteractionData)._padding_;
  (this->Event_Released).bIsPressed = bVar5;
  *(undefined6 *)&(this->Event_Released).field_0x2 = uVar6;
  (this->Event_Released).PressedPoint.field0_0x0._s_0.X = dVar1;
  dVar1 = (this->ViewportInteractionData).ReleasedPoint.field0_0x0._s_0.Y;
  dVar4 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X;
  (this->Event_Released).PressedPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0.X = dVar3;
  dVar2 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y;
  dVar3 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X;
  (this->Event_Released).ReleasedPoint.field0_0x0._s_0.Y = dVar1;
  (this->Event_Released).CurPoint.field0_0x0._s_0.X = dVar4;
  dVar1 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.Y;
  fVar7 = (this->ViewportInteractionData).MoveVectorSize;
  fVar8 = (this->ViewportInteractionData).MoveVectorSizeX;
  (this->Event_Released).CurPoint.field0_0x0._s_0.Y = dVar2;
  (this->Event_Released).MoveVector.field0_0x0._s_0.X = dVar3;
  fVar9 = (this->ViewportInteractionData).MoveVectorSizeY;
  fVar10 = (this->ViewportInteractionData).MoveVectorDeltaSize;
  fVar11 = (this->ViewportInteractionData).MoveVectorDeltaSizeX;
  fVar12 = (this->ViewportInteractionData).MoveVectorDeltaSizeY;
  (this->Event_Released).MoveVector.field0_0x0._s_0.Y = dVar1;
  (this->Event_Released).MoveVectorSize = fVar7;
  (this->Event_Released).MoveVectorSizeX = fVar8;
  bVar5 = (this->ViewportInteractionData).bIsMouseWheelUp;
  uVar13 = *(undefined7 *)&(this->ViewportInteractionData).field_0x61;
  (this->Event_Released).MoveVectorSizeY = fVar9;
  (this->Event_Released).MoveVectorDeltaSize = fVar10;
  (this->Event_Released).MoveVectorDeltaSizeX = fVar11;
  (this->Event_Released).MoveVectorDeltaSizeY = fVar12;
  (this->Event_Released).bIsMouseWheelUp = bVar5;
  *(undefined7 *)&(this->Event_Released).field_0x61 = uVar13;
  local_18._s_0.X = (double)FFieldNotificationClassDescriptor::Event_Released.FieldName;
  local_18._8_4_ = FFieldNotificationClassDescriptor::Event_Released.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->field_0x28,(FFieldId *)&local_18._s_0);
  return;
}

// UpdateMoveVectorOnPressed @ 14bd28750

void __thiscall
UDS_W_ViewportInteractionButton::UpdateMoveVectorOnPressed(UDS_W_ViewportInteractionButton *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  TVector2<double> *pTVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  TVector2<double> local_28 [2];
  
  if ((this->ViewportInteractionData).bIsPressed != false) {
    pTVar5 = GetMousePointOnViewport(this,local_28);
    dVar7 = (pTVar5->field0_0x0)._s_0.Y;
    (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y = dVar7;
    dVar7 = dVar7 - (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
    (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X =
         (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X -
         (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X;
    (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.Y = dVar7;
    dVar4 = (this->ViewportInteractionData).MoveVector.field0_0x0._s_0.X;
    fVar1 = (this->ViewportInteractionData).MoveVectorSizeY;
    fVar2 = (this->ViewportInteractionData).MoveVectorSize;
    fVar3 = (this->ViewportInteractionData).MoveVectorSizeX;
    fVar9 = (float)SQRT(dVar7 * dVar7 + dVar4 * dVar4);
    dVar4 = (this->ViewportInteractionData).CurPoint.field0_0x0._s_0.Y;
    dVar7 = (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.Y;
    fVar8 = (float)((this->ViewportInteractionData).CurPoint.field0_0x0._s_0.X -
                   (this->ViewportInteractionData).PressedPoint.field0_0x0._s_0.X);
    (this->ViewportInteractionData).MoveVectorSize = fVar9;
    fVar6 = (float)(dVar4 - dVar7);
    (this->ViewportInteractionData).MoveVectorSizeX = fVar8;
    (this->ViewportInteractionData).MoveVectorSizeY = fVar6;
    (this->ViewportInteractionData).MoveVectorDeltaSize = fVar9 - fVar2;
    (this->ViewportInteractionData).MoveVectorDeltaSizeX = fVar8 - fVar3;
    (this->ViewportInteractionData).MoveVectorDeltaSizeY = fVar6 - fVar1;
  }
  return;
}

