// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4d0050

UClass * __cdecl UDS_ItemBasketInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemBasketInterface",
               &Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton,
               StaticRegisterNativesUDS_ItemBasketInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemBasketInterface>,
               InternalVTableHelperCtorCaller<UDS_ItemBasketInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton;
}

// UDS_ItemBasketInterface @ 14b4d3480

UDS_ItemBasketInterface * __thiscall
UDS_ItemBasketInterface::UDS_ItemBasketInterface
          (UDS_ItemBasketInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_ItemBasketInterface__6B_;
  return this;
}

// UDS_ItemBasketInterface @ 14b4d34b0

UDS_ItemBasketInterface * __thiscall
UDS_ItemBasketInterface::UDS_ItemBasketInterface
          (UDS_ItemBasketInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDS_ItemBasketInterface__6B_;
  return this;
}

// ~UDS_ItemBasketInterface @ 14b4d4320

void __thiscall UDS_ItemBasketInterface::~UDS_ItemBasketInterface(UDS_ItemBasketInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4d5080

UClass * __cdecl UDS_ItemBasketInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ItemBasketInterface",
               &Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton,
               StaticRegisterNativesUDS_ItemBasketInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ItemBasketInterface>,
               InternalVTableHelperCtorCaller<UDS_ItemBasketInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ItemBasketInterface.InnerSingleton;
}

// StaticRegisterNativesUDS_ItemBasketInterface @ 14b4d5500

void __cdecl UDS_ItemBasketInterface::StaticRegisterNativesUDS_ItemBasketInterface(void)

{
  return;
}

