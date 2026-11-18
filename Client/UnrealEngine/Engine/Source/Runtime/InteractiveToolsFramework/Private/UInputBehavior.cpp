// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 21

// StaticClass @ 149664910

UClass * __cdecl UInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehavior.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehavior",
               &Z_Registration_Info_UClass_UInputBehavior.InnerSingleton,
               StaticRegisterNativesUInputBehavior,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputBehavior>,
               InternalVTableHelperCtorCaller<UInputBehavior>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehavior.InnerSingleton;
}

// UInputBehavior @ 149686dd0

UInputBehavior * __thiscall
UInputBehavior::UInputBehavior(UInputBehavior *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputBehavior__6B_;
  (this->DefaultPriority).Priority = 100;
  (this->CaptureStealing).Value = false;
  (this->CaptureStealing).bIsSet = false;
  *(undefined8 *)&(this->CaptureStealing).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CaptureStealing).Getter = 0;
  *(undefined8 *)&(this->CaptureStealing).Getter.field_0x8 = 0;
  return this;
}

// UInputBehavior @ 149686e20

UInputBehavior * __thiscall UInputBehavior::UInputBehavior(UInputBehavior *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInputBehavior__6B_;
  (this->CaptureStealing).Value = false;
  (this->CaptureStealing).bIsSet = false;
  *(undefined8 *)&(this->CaptureStealing).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CaptureStealing).Getter = 0;
  *(undefined8 *)&(this->CaptureStealing).Getter.field_0x8 = 0;
  (this->DefaultPriority).Priority = 100;
  return this;
}

// ~UInputBehavior @ 14968a3b0

void __thiscall UInputBehavior::~UInputBehavior(UInputBehavior *this)

{
  this->_padding_ = (longlong)&___7UInputBehavior__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CaptureStealing).Getter);
  UObject::~UObject((UObject *)this);
  return;
}

// AllowsCaptureStealing @ 149691ed0

bool __thiscall UInputBehavior::AllowsCaptureStealing(UInputBehavior *this)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  if ((this->CaptureStealing).bIsSet == false) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->CaptureStealing).Getter,&local_28);
  if ((*(int *)&(this->CaptureStealing).Getter.field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->CaptureStealing).Getter.field_0x8, plVar3 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->CaptureStealing).Getter,&local_28);
      if (*(int *)&(this->CaptureStealing).Getter.field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->CaptureStealing).Getter.field_0x8;
      }
      bVar2 = (bool)(**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->CaptureStealing).Value = bVar2;
      return bVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (this->CaptureStealing).Value;
}

// BeginCapture @ 149692530

FInputCaptureUpdate * __thiscall
UInputBehavior::BeginCapture
          (UInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  __return_storage_ptr__->State = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// BeginHoverCapture @ 149692950

FInputCaptureUpdate * __thiscall
UInputBehavior::BeginHoverCapture
          (UInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  __return_storage_ptr__->State = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// EndHoverCapture @ 14969dc00

void __thiscall UInputBehavior::EndHoverCapture(UInputBehavior *this)

{
  return;
}

// ForceEndCapture @ 14969f4b0

void __thiscall UInputBehavior::ForceEndCapture(UInputBehavior *this,FInputCaptureData *param_1)

{
  return;
}

// GetPriority @ 1496a3f70

FInputCapturePriority __thiscall UInputBehavior::GetPriority(UInputBehavior *this)

{
  int *in_RDX;
  
  *in_RDX = (this->DefaultPriority).Priority;
  return (FInputCapturePriority)(int)in_RDX;
}

// GetPrivateStaticClass @ 1496a68b0

UClass * __cdecl UInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputBehavior",
               &Z_Registration_Info_UClass_UInputBehavior.InnerSingleton,
               StaticRegisterNativesUInputBehavior,0x50,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputBehavior>,
               InternalVTableHelperCtorCaller<UInputBehavior>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 1496a8e70

EInputDevices __thiscall UInputBehavior::GetSupportedDevices(UInputBehavior *this)

{
  return Mouse;
}

// SetAllowsCaptureStealing @ 1496bd230

void __thiscall
UInputBehavior::SetAllowsCaptureStealing(UInputBehavior *this,TAttribute<bool> *param_1)

{
  TAttribute<bool>::operator=(&this->CaptureStealing,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return;
}

// SetDefaultPriority @ 1496bd440

void __thiscall
UInputBehavior::SetDefaultPriority(UInputBehavior *this,FInputCapturePriority *param_1)

{
  (this->DefaultPriority).Priority = param_1->Priority;
  return;
}

// StaticRegisterNativesUInputBehavior @ 1496c2c40

void __cdecl UInputBehavior::StaticRegisterNativesUInputBehavior(void)

{
  return;
}

// UpdateCapture @ 1496c3be0

FInputCaptureUpdate * __thiscall
UInputBehavior::UpdateCapture
          (UInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  __return_storage_ptr__->State = End;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// UpdateHoverCapture @ 1496c3f60

FInputCaptureUpdate * __thiscall
UInputBehavior::UpdateHoverCapture
          (UInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  __return_storage_ptr__->State = End;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 1496c5cd0

FInputCaptureRequest * __thiscall
UInputBehavior::WantsCapture
          (UInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

// WantsForceEndCapture @ 1496c5e10

bool __thiscall UInputBehavior::WantsForceEndCapture(UInputBehavior *this)

{
  return false;
}

// WantsHoverCapture @ 1496c5e20

FInputCaptureRequest * __thiscall
UInputBehavior::WantsHoverCapture
          (UInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

// WantsHoverEvents @ 1496c5e50

bool __thiscall UInputBehavior::WantsHoverEvents(UInputBehavior *this)

{
  return false;
}

