// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14962a9e0

UClass * __cdecl UMouseButtonAsModifierInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseButtonAsModifierInputBehavior",
               &Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseButtonAsModifierInputBehavior,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseButtonAsModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseButtonAsModifierInputBehavior>,local_res8,
               UKeyAsModifierInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton;
}

// UMouseButtonAsModifierInputBehavior @ 14963c7d0

UMouseButtonAsModifierInputBehavior * __thiscall
UMouseButtonAsModifierInputBehavior::UMouseButtonAsModifierInputBehavior
          (UMouseButtonAsModifierInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x94 = 0x80;
  *(undefined4 *)&this->field_0x9c = 0;
  *(undefined4 *)&this->field_0x98 = 0xffffffff;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xb0 = 0;
  *(undefined ***)this = &___7UMouseButtonAsModifierInputBehavior__6B_;
  return this;
}

// UMouseButtonAsModifierInputBehavior @ 14963c840

UMouseButtonAsModifierInputBehavior * __thiscall
UMouseButtonAsModifierInputBehavior::UMouseButtonAsModifierInputBehavior
          (UMouseButtonAsModifierInputBehavior *this)

{
  UKeyAsModifierInputBehavior::UKeyAsModifierInputBehavior((UKeyAsModifierInputBehavior *)this);
  *(undefined ***)this = &___7UMouseButtonAsModifierInputBehavior__6B_;
  return this;
}

// ~UMouseButtonAsModifierInputBehavior @ 14963f0e0

void __thiscall
UMouseButtonAsModifierInputBehavior::~UMouseButtonAsModifierInputBehavior
          (UMouseButtonAsModifierInputBehavior *this)

{
  *(undefined ***)this = &___7UKeyAsModifierInputBehavior__6B_;
  *(undefined4 *)&this->field_0xb0 = 0;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x68);
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// GetPrivateStaticClass @ 1496579c0

UClass * __cdecl UMouseButtonAsModifierInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseButtonAsModifierInputBehavior",
               &Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseButtonAsModifierInputBehavior,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseButtonAsModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseButtonAsModifierInputBehavior>,local_res8,
               UKeyAsModifierInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseButtonAsModifierInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658860

EInputDevices __thiscall
UMouseButtonAsModifierInputBehavior::GetSupportedDevices(UMouseButtonAsModifierInputBehavior *this)

{
  return Mouse;
}

// StaticRegisterNativesUMouseButtonAsModifierInputBehavior @ 149664cc0

void __cdecl
UMouseButtonAsModifierInputBehavior::StaticRegisterNativesUMouseButtonAsModifierInputBehavior(void)

{
  return;
}

