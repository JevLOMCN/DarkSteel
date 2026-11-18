// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticClass @ 14a0af240

UClass * __cdecl URigVMGraphFunctionHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMGraphFunctionHost",
               &Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton,
               StaticRegisterNativesURigVMGraphFunctionHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVMGraphFunctionHost>,
               InternalVTableHelperCtorCaller<URigVMGraphFunctionHost>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton;
}

// URigVMGraphFunctionHost @ 14a0c2050

URigVMGraphFunctionHost * __thiscall
URigVMGraphFunctionHost::URigVMGraphFunctionHost
          (URigVMGraphFunctionHost *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URigVMGraphFunctionHost__6B_;
  return this;
}

// URigVMGraphFunctionHost @ 14a0c2080

URigVMGraphFunctionHost * __thiscall
URigVMGraphFunctionHost::URigVMGraphFunctionHost
          (URigVMGraphFunctionHost *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7URigVMGraphFunctionHost__6B_;
  return this;
}

// ~URigVMGraphFunctionHost @ 14a0c3400

void __thiscall URigVMGraphFunctionHost::~URigVMGraphFunctionHost(URigVMGraphFunctionHost *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a0eaac0

UClass * __cdecl URigVMGraphFunctionHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMGraphFunctionHost",
               &Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton,
               StaticRegisterNativesURigVMGraphFunctionHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URigVMGraphFunctionHost>,
               InternalVTableHelperCtorCaller<URigVMGraphFunctionHost>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMGraphFunctionHost.InnerSingleton;
}

// StaticRegisterNativesURigVMGraphFunctionHost @ 14a111990

void __cdecl URigVMGraphFunctionHost::StaticRegisterNativesURigVMGraphFunctionHost(void)

{
  return;
}

