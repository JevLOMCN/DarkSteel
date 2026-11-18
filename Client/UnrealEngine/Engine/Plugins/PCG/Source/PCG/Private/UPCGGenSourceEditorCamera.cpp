// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149f1cfb0

UClass * __cdecl UPCGGenSourceEditorCamera::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceEditorCamera",
               &Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceEditorCamera,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenSourceEditorCamera>,
               InternalVTableHelperCtorCaller<UPCGGenSourceEditorCamera>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton;
}

// UPCGGenSourceEditorCamera @ 149f32310

UPCGGenSourceEditorCamera * __thiscall
UPCGGenSourceEditorCamera::UPCGGenSourceEditorCamera
          (UPCGGenSourceEditorCamera *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IPCGGenSourceBase__;
  return this;
}

// UPCGGenSourceEditorCamera @ 149f32350

UPCGGenSourceEditorCamera * __thiscall
UPCGGenSourceEditorCamera::UPCGGenSourceEditorCamera
          (UPCGGenSourceEditorCamera *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IPCGGenSourceBase__;
  return this;
}

// ~UPCGGenSourceEditorCamera @ 149f34730

void __thiscall
UPCGGenSourceEditorCamera::~UPCGGenSourceEditorCamera(UPCGGenSourceEditorCamera *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IPCGGenSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDirection @ 149f49770

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceEditorCamera::GetDirection
          (UPCGGenSourceEditorCamera *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPosition @ 149f4ca80

TOptional<UE::Math::TVector<double>_> * __thiscall
UPCGGenSourceEditorCamera::GetPosition
          (UPCGGenSourceEditorCamera *this,
          TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4d170

UClass * __cdecl UPCGGenSourceEditorCamera::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenSourceEditorCamera",
               &Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton,
               StaticRegisterNativesUPCGGenSourceEditorCamera,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGenSourceEditorCamera>,
               InternalVTableHelperCtorCaller<UPCGGenSourceEditorCamera>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenSourceEditorCamera.InnerSingleton;
}

// GetViewFrustum @ 149f50280

TOptional<FConvexVolume> * __thiscall
UPCGGenSourceEditorCamera::GetViewFrustum
          (UPCGGenSourceEditorCamera *this,TOptional<FConvexVolume> *__return_storage_ptr__,
          bool param_1)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGenSourceEditorCamera @ 149f63950

void __cdecl UPCGGenSourceEditorCamera::StaticRegisterNativesUPCGGenSourceEditorCamera(void)

{
  return;
}

// Tick @ 149f64d90

void __thiscall UPCGGenSourceEditorCamera::Tick(UPCGGenSourceEditorCamera *this)

{
  return;
}

// _getUObject @ 149f6f5f0

UObject * __thiscall UPCGGenSourceEditorCamera::_getUObject(UPCGGenSourceEditorCamera *this)

{
  return (UObject *)&this[-1].field_0x8;
}

