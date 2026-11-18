// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962ee60

UClass * __cdecl UDoubleClickInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"DoubleClickInputBehavior",
               &Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesUDoubleClickInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDoubleClickInputBehavior>,
               InternalVTableHelperCtorCaller<UDoubleClickInputBehavior>,local_res8,
               USingleClickInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton;
}

// UDoubleClickInputBehavior @ 14963a0d0

UDoubleClickInputBehavior * __thiscall
UDoubleClickInputBehavior::UDoubleClickInputBehavior
          (UDoubleClickInputBehavior *this,FVTableHelper *param_1)

{
  USingleClickInputBehavior::USingleClickInputBehavior((USingleClickInputBehavior *)this,param_1);
  *(undefined ***)this = &___7UDoubleClickInputBehavior__6B_;
  return this;
}

// UDoubleClickInputBehavior @ 14963a100

UDoubleClickInputBehavior * __thiscall
UDoubleClickInputBehavior::UDoubleClickInputBehavior(UDoubleClickInputBehavior *this)

{
  USingleClickInputBehavior::USingleClickInputBehavior((USingleClickInputBehavior *)this);
  this->field_0xc0 = 1;
  *(undefined ***)this = &___7UDoubleClickInputBehavior__6B_;
  return this;
}

// ~UDoubleClickInputBehavior @ 14963e670

void __thiscall
UDoubleClickInputBehavior::~UDoubleClickInputBehavior(UDoubleClickInputBehavior *this)

{
  *(undefined ***)this = &___7UDoubleClickInputBehavior__6B_;
  USingleClickInputBehavior::~USingleClickInputBehavior((USingleClickInputBehavior *)this);
  return;
}

// GetPrivateStaticClass @ 149655e90

UClass * __cdecl UDoubleClickInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"DoubleClickInputBehavior",
               &Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesUDoubleClickInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDoubleClickInputBehavior>,
               InternalVTableHelperCtorCaller<UDoubleClickInputBehavior>,local_res8,
               USingleClickInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleClickInputBehavior.InnerSingleton;
}

// StaticRegisterNativesUDoubleClickInputBehavior @ 149664a40

void __cdecl UDoubleClickInputBehavior::StaticRegisterNativesUDoubleClickInputBehavior(void)

{
  return;
}

// WantsCapture @ 149667400

FInputCaptureRequest * __thiscall
UDoubleClickInputBehavior::WantsCapture
          (UDoubleClickInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char local_98 [8];
  double local_90;
  undefined1 local_58 [80];
  
  cVar2 = (**(code **)(*(longlong *)this + 0x338))(this,param_1);
  if (cVar2 != '\0') {
    if (*(void **)&this->field_0x90 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x90);
      pcVar1 = *(code **)&this->field_0x90;
      plVar4 = (longlong *)&this->field_0xa0;
      if (*(longlong **)&this->field_0xb8 != (longlong *)0x0) {
        plVar4 = *(longlong **)&this->field_0xb8;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_1);
      if (cVar2 == '\0') goto LAB_1496674d4;
    }
    plVar4 = *(longlong **)&this->field_0x128;
    pcVar1 = *(code **)(*plVar4 + 0x18);
    uVar3 = (**(code **)(*(longlong *)this + 0x350))(this,local_58,param_1);
    (*pcVar1)(plVar4,local_98,uVar3);
    if (local_98[0] != '\0') {
      __return_storage_ptr__->HitDepth = local_90;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_1496674f2;
    }
  }
LAB_1496674d4:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
LAB_1496674f2:
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

