// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 14

// StaticClass @ 14caaf370

UClass * __cdecl UDragAlignmentMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DragAlignmentMechanic",
               &Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton,
               StaticRegisterNativesUDragAlignmentMechanic,0x260,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragAlignmentMechanic>,
               InternalVTableHelperCtorCaller<UDragAlignmentMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton;
}

// UDragAlignmentMechanic @ 14cacd490

UDragAlignmentMechanic * __thiscall
UDragAlignmentMechanic::UDragAlignmentMechanic(UDragAlignmentMechanic *this,FVTableHelper *param_1)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  FDragAlignmentBase::FDragAlignmentBase((FDragAlignmentBase *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__FDragAlignmentBase__;
  this->_padding_ = (longlong)&_vftable__for__IModifierToggleBehaviorTarget__;
  this->bAlignmentToggle = false;
  this->AlignmentModifierID = 1;
  return this;
}

// UDragAlignmentMechanic @ 14cacd500

UDragAlignmentMechanic * __thiscall
UDragAlignmentMechanic::UDragAlignmentMechanic(UDragAlignmentMechanic *this)

{
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  FDragAlignmentBase::FDragAlignmentBase((FDragAlignmentBase *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__FDragAlignmentBase__;
  this->_padding_ = (longlong)&_vftable__for__IModifierToggleBehaviorTarget__;
  this->bAlignmentToggle = false;
  this->AlignmentModifierID = 1;
  return this;
}

// ~UDragAlignmentMechanic @ 14cad2250

void __thiscall UDragAlignmentMechanic::~UDragAlignmentMechanic(UDragAlignmentMechanic *this)

{
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__FDragAlignmentBase__;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  FDragAlignmentBase::~FDragAlignmentBase((FDragAlignmentBase *)&this->_padding_);
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// GetAlignmentModeEnabled @ 14cb0d9c0

bool __thiscall UDragAlignmentMechanic::GetAlignmentModeEnabled(UDragAlignmentMechanic *this)

{
  return (bool)(char)this->_padding_;
}

// GetCameraState @ 14cb0e440

FViewCameraState * __thiscall
UDragAlignmentMechanic::GetCameraState
          (UDragAlignmentMechanic *this,FViewCameraState *__return_storage_ptr__)

{
  UInteractiveTool *pUVar1;
  longlong *plVar2;
  
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Orientation).X = 0.0;
  (__return_storage_ptr__->Orientation).Y = 0.0;
  (__return_storage_ptr__->Orientation).Z = 0.0;
  (__return_storage_ptr__->Orientation).W = 1.0;
  __return_storage_ptr__->HorizontalFOVDegrees = 90.0;
  __return_storage_ptr__->OrthoWorldCoordinateWidth = 100.0;
  __return_storage_ptr__->AspectRatio = 1.0;
  __return_storage_ptr__->bIsOrthographic = false;
  __return_storage_ptr__->bIsVR = false;
  __return_storage_ptr__->DPIScale = 1.0;
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)&this[-1]._padding_);
  plVar2 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cb12300

UClass * __cdecl UDragAlignmentMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DragAlignmentMechanic",
               &Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton,
               StaticRegisterNativesUDragAlignmentMechanic,0x260,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDragAlignmentMechanic>,
               InternalVTableHelperCtorCaller<UDragAlignmentMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragAlignmentMechanic.InnerSingleton;
}

// GetSnappingManager @ 14cb14750

USceneSnappingManager * __thiscall
UDragAlignmentMechanic::GetSnappingManager(UDragAlignmentMechanic *this)

{
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *pUVar2;
  USceneSnappingManager *pUVar3;
  
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)&this[-1]._padding_);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  pUVar3 = USceneSnappingManager::Find(pUVar2);
  return pUVar3;
}

// GetUObjectContainer @ 14cb15280

UObject * __thiscall UDragAlignmentMechanic::GetUObjectContainer(UDragAlignmentMechanic *this)

{
  return (UObject *)&this[-1]._padding_;
}

// OnUpdateModifierState @ 14cb287b0

void __thiscall
UDragAlignmentMechanic::OnUpdateModifierState(UDragAlignmentMechanic *this,int param_1,bool param_2)

{
  if (param_1 == *(int *)((longlong)&this->_padding_ + 4)) {
    *(bool *)&this->_padding_ = param_2;
  }
  if ((char)this->_padding_ == '\0') {
    *(undefined1 *)((longlong)&this[-1]._padding_ + 4) = 0;
  }
  return;
}

// Render @ 14cb304f0

void __thiscall
UDragAlignmentMechanic::Render(UDragAlignmentMechanic *this,IToolsContextRenderAPI *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb304f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x30))(&this->_padding_);
  return;
}

// Setup @ 14cb3a6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDragAlignmentMechanic::Setup(UDragAlignmentMechanic *this,UInteractiveTool *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UKeyAsModifierInputBehavior *this_00;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  this_00 = (UKeyAsModifierInputBehavior *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  local_b8 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a0 = 0;
  local_b0 = FInputDeviceState::IsCtrlKeyDown;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  UKeyAsModifierInputBehavior::Initialize
            (this_00,(IModifierToggleBehaviorTarget *)&this->_padding_,this->AlignmentModifierID,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_c8);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x2f8))(pUVar1,this_00,0);
  (**(code **)(this->_padding_ + 0x28))(&this->_padding_);
  return;
}

// Shutdown @ 14cb3bdf0

void __thiscall UDragAlignmentMechanic::Shutdown(UDragAlignmentMechanic *this)

{
  return;
}

// StaticRegisterNativesUDragAlignmentMechanic @ 14cb3eaf0

void __cdecl UDragAlignmentMechanic::StaticRegisterNativesUDragAlignmentMechanic(void)

{
  return;
}

