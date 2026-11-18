// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962c400

UClass * __cdecl UMouseWheelModifierInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseWheelModifierInputBehavior",
               &Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseWheelModifierInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseWheelModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseWheelModifierInputBehavior>,local_res8,
               UMouseWheelInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton;
}

// UMouseWheelModifierInputBehavior @ 14963cab0

UMouseWheelModifierInputBehavior * __thiscall
UMouseWheelModifierInputBehavior::UMouseWheelModifierInputBehavior
          (UMouseWheelModifierInputBehavior *this,FVTableHelper *param_1)

{
  UMouseWheelInputBehavior::UMouseWheelInputBehavior((UMouseWheelInputBehavior *)this,param_1);
  *(undefined ***)this = &___7UMouseWheelModifierInputBehavior__6B_;
  return this;
}

// UMouseWheelModifierInputBehavior @ 14963cae0

UMouseWheelModifierInputBehavior * __thiscall
UMouseWheelModifierInputBehavior::UMouseWheelModifierInputBehavior
          (UMouseWheelModifierInputBehavior *this)

{
  UMouseWheelInputBehavior::UMouseWheelInputBehavior((UMouseWheelInputBehavior *)this);
  *(undefined ***)this = &___7UMouseWheelModifierInputBehavior__6B_;
  return this;
}

// ~UMouseWheelModifierInputBehavior @ 14963f290

void __thiscall
UMouseWheelModifierInputBehavior::~UMouseWheelModifierInputBehavior
          (UMouseWheelModifierInputBehavior *this)

{
  *(undefined ***)this = &___7UMouseWheelModifierInputBehavior__6B_;
  UMouseWheelInputBehavior::~UMouseWheelInputBehavior((UMouseWheelInputBehavior *)this);
  return;
}

// GetPrivateStaticClass @ 149657c00

UClass * __cdecl UMouseWheelModifierInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseWheelModifierInputBehavior",
               &Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseWheelModifierInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseWheelModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseWheelModifierInputBehavior>,local_res8,
               UMouseWheelInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseWheelModifierInputBehavior.InnerSingleton;
}

// StaticRegisterNativesUMouseWheelModifierInputBehavior @ 149664cf0

void __cdecl
UMouseWheelModifierInputBehavior::StaticRegisterNativesUMouseWheelModifierInputBehavior(void)

{
  return;
}

// WantsCapture @ 149667770

FInputCaptureRequest * __thiscall
UMouseWheelModifierInputBehavior::WantsCapture
          (UMouseWheelModifierInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  FInputDeviceRay local_68;
  
  if ((param_1->Mouse).WheelDelta != 0.0) {
    if (*(void **)&this->field_0x90 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x90);
      pcVar5 = *(code **)&this->field_0x90;
      plVar4 = (longlong *)&this->field_0xa0;
      if (*(longlong **)&this->field_0xb8 != (longlong *)0x0) {
        plVar4 = *(longlong **)&this->field_0xb8;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar5)(uVar3,param_1);
      if (cVar2 == '\0') goto LAB_14966781a;
    }
    plVar4 = *(longlong **)&this->field_0x120;
    lVar1 = *plVar4;
    if ((param_1->Mouse).WheelDelta <= 0.0) {
      pcVar5 = *(code **)(lVar1 + 0x28);
    }
    else {
      pcVar5 = *(code **)(lVar1 + 0x20);
    }
    FInputDeviceRay::FInputDeviceRay(&local_68,param_1);
    (*pcVar5)(plVar4,&local_68);
  }
LAB_14966781a:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

