// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147caa0e0

UClass * __cdecl UHLODProxyDesc::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODProxyDesc",
               &Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton,
               StaticRegisterNativesUHLODProxyDesc,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODProxyDesc>,InternalVTableHelperCtorCaller<UHLODProxyDesc>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton;
}

// UHLODProxyDesc @ 147cc6580

UHLODProxyDesc * __thiscall
UHLODProxyDesc::UHLODProxyDesc(UHLODProxyDesc *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODProxyDesc__6B_;
  return this;
}

// UHLODProxyDesc @ 147cc65b0

UHLODProxyDesc * __thiscall
UHLODProxyDesc::UHLODProxyDesc(UHLODProxyDesc *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UHLODProxyDesc__6B_;
  return this;
}

// ~UHLODProxyDesc @ 147cc9250

void __thiscall UHLODProxyDesc::~UHLODProxyDesc(UHLODProxyDesc *this)

{
  *(undefined ***)this = &___7UHLODProxyDesc__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147d0c350

UClass * __cdecl UHLODProxyDesc::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HLODProxyDesc",
               &Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton,
               StaticRegisterNativesUHLODProxyDesc,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UHLODProxyDesc>,InternalVTableHelperCtorCaller<UHLODProxyDesc>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHLODProxyDesc.InnerSingleton;
}

// StaticRegisterNativesUHLODProxyDesc @ 147d328d0

void __cdecl UHLODProxyDesc::StaticRegisterNativesUHLODProxyDesc(void)

{
  return;
}

