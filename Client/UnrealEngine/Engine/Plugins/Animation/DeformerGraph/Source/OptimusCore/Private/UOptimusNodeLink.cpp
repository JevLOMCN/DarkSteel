// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticClass @ 14e1156d0

UClass * __cdecl UOptimusNodeLink::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeLink",
               &Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton,
               StaticRegisterNativesUOptimusNodeLink,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UOptimusNodeLink>,
               InternalVTableHelperCtorCaller<UOptimusNodeLink>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton;
}

// UOptimusNodeLink @ 14e15aad0

UOptimusNodeLink * __thiscall
UOptimusNodeLink::UOptimusNodeLink(UOptimusNodeLink *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusNodeLink__6B_;
  (this->NodeOutputPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  (this->NodeInputPin).field0_0x0.DebugPtr = (UOptimusNodePin *)0x0;
  return this;
}

// ~UOptimusNodeLink @ 14e162ff0

void __thiscall UOptimusNodeLink::~UOptimusNodeLink(UOptimusNodeLink *this)

{
  this->_padding_ = (longlong)&___7UOptimusNodeLink__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6d10

UClass * __cdecl UOptimusNodeLink::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeLink",
               &Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton,
               StaticRegisterNativesUOptimusNodeLink,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UOptimusNodeLink>,
               InternalVTableHelperCtorCaller<UOptimusNodeLink>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeLink.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeLink @ 14e225bb0

void __cdecl UOptimusNodeLink::StaticRegisterNativesUOptimusNodeLink(void)

{
  return;
}

