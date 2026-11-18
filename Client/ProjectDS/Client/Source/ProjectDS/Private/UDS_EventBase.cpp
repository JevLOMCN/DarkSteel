// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b43e7c0

UClass * __cdecl UDS_EventBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventBase",
               &Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton,
               StaticRegisterNativesUDS_EventBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EventBase>,InternalVTableHelperCtorCaller<UDS_EventBase>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton;
}

// UDS_EventBase @ 14b49a050

UDS_EventBase * __thiscall UDS_EventBase::UDS_EventBase(UDS_EventBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_EventBase__6B_;
  return this;
}

// UDS_EventBase @ 14b49a080

UDS_EventBase * __thiscall
UDS_EventBase::UDS_EventBase(UDS_EventBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_EventBase__6B_;
  return this;
}

// ~UDS_EventBase @ 14b49ab00

void __thiscall UDS_EventBase::~UDS_EventBase(UDS_EventBase *this)

{
  *(undefined ***)this = &___7UDS_EventBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b49baf0

UClass * __cdecl UDS_EventBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventBase",
               &Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton,
               StaticRegisterNativesUDS_EventBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EventBase>,InternalVTableHelperCtorCaller<UDS_EventBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventBase.InnerSingleton;
}

// StaticRegisterNativesUDS_EventBase @ 14b49c030

void __cdecl UDS_EventBase::StaticRegisterNativesUDS_EventBase(void)

{
  return;
}

