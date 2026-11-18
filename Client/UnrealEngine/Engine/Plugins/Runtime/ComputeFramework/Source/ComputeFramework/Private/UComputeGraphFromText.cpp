// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 6

// StaticClass @ 1494baf30

UClass * __cdecl UComputeGraphFromText::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphFromText",
               &Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton,
               StaticRegisterNativesUComputeGraphFromText,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComputeGraphFromText>,
               InternalVTableHelperCtorCaller<UComputeGraphFromText>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton;
}

// UComputeGraphFromText @ 1494c4d80

UComputeGraphFromText * __thiscall
UComputeGraphFromText::UComputeGraphFromText(UComputeGraphFromText *this,FVTableHelper *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  *(undefined ***)this = &___7UComputeGraphFromText__6B_;
  return this;
}

// UComputeGraphFromText @ 1494c4db0

UComputeGraphFromText * __thiscall
UComputeGraphFromText::UComputeGraphFromText
          (UComputeGraphFromText *this,FObjectInitializer *param_1)

{
  UComputeGraph::UComputeGraph((UComputeGraph *)this,param_1);
  *(undefined ***)this = &___7UComputeGraphFromText__6B_;
  return this;
}

// ~UComputeGraphFromText @ 1494c5e70

void __thiscall UComputeGraphFromText::~UComputeGraphFromText(UComputeGraphFromText *this)

{
  *(undefined ***)this = &___7UComputeGraphFromText__6B_;
  UComputeGraph::~UComputeGraph((UComputeGraph *)this);
  return;
}

// GetPrivateStaticClass @ 1494d07e0

UClass * __cdecl UComputeGraphFromText::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeGraphFromText",
               &Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton,
               StaticRegisterNativesUComputeGraphFromText,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UComputeGraphFromText>,
               InternalVTableHelperCtorCaller<UComputeGraphFromText>,local_res8,
               UComputeGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeGraphFromText.InnerSingleton;
}

// StaticRegisterNativesUComputeGraphFromText @ 1494d7eb0

void __cdecl UComputeGraphFromText::StaticRegisterNativesUComputeGraphFromText(void)

{
  return;
}

