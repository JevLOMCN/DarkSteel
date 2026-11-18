// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b49dd40

UClass * __cdecl UDS_GameStateBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameStateBase",
               &Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton,
               StaticRegisterNativesUDS_GameStateBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameStateBase>,
               InternalVTableHelperCtorCaller<UDS_GameStateBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton;
}

// UDS_GameStateBase @ 14b4a01b0

UDS_GameStateBase * __thiscall
UDS_GameStateBase::UDS_GameStateBase(UDS_GameStateBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_GameStateBase__6B_;
  return this;
}

// UDS_GameStateBase @ 14b4a01e0

UDS_GameStateBase * __thiscall
UDS_GameStateBase::UDS_GameStateBase(UDS_GameStateBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_GameStateBase__6B_;
  return this;
}

// ~UDS_GameStateBase @ 14b4a0c70

void __thiscall UDS_GameStateBase::~UDS_GameStateBase(UDS_GameStateBase *this)

{
  *(undefined ***)this = &___7UDS_GameStateBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClearSessionUID @ 14b4a14c0

void __thiscall UDS_GameStateBase::ClearSessionUID(UDS_GameStateBase *this)

{
  return;
}

// Created @ 14b4a14d0

void __thiscall UDS_GameStateBase::Created(UDS_GameStateBase *this)

{
  return;
}

// Destroyed @ 14b4a14e0

void __thiscall UDS_GameStateBase::Destroyed(UDS_GameStateBase *this)

{
  return;
}

// End @ 14b4a1630

void __thiscall UDS_GameStateBase::End(UDS_GameStateBase *this)

{
  return;
}

// GetPrivateStaticClass @ 14b4a1a50

UClass * __cdecl UDS_GameStateBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameStateBase",
               &Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton,
               StaticRegisterNativesUDS_GameStateBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameStateBase>,
               InternalVTableHelperCtorCaller<UDS_GameStateBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameStateBase.InnerSingleton;
}

// Start @ 14b4a1be0

void __thiscall UDS_GameStateBase::Start(UDS_GameStateBase *this)

{
  return;
}

// StaticRegisterNativesUDS_GameStateBase @ 14b4a1ca0

void __cdecl UDS_GameStateBase::StaticRegisterNativesUDS_GameStateBase(void)

{
  return;
}

