// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// Created @ 14b424800

void __thiscall UDS_ManagerBase::Created(UDS_ManagerBase *this)

{
  this->bIsBeingDestroyed = false;
  return;
}

// Destroyed @ 14b424810

void __thiscall UDS_ManagerBase::Destroyed(UDS_ManagerBase *this)

{
  return;
}

// PreDestroyed @ 14b4253d0

void __thiscall UDS_ManagerBase::PreDestroyed(UDS_ManagerBase *this)

{
  this->bIsBeingDestroyed = true;
  return;
}

// Reset @ 14b4253e0

void __thiscall UDS_ManagerBase::Reset(UDS_ManagerBase *this)

{
  return;
}

// StaticClass @ 14b425440

UClass * __cdecl UDS_ManagerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ManagerBase",
               &Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton,
               StaticRegisterNativesUDS_ManagerBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ManagerBase>,InternalVTableHelperCtorCaller<UDS_ManagerBase>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton;
}

// Update @ 14b4255f0

void __thiscall UDS_ManagerBase::Update(UDS_ManagerBase *this,float *param_1)

{
  return;
}

// Init @ 14b468c20

void __thiscall UDS_ManagerBase::Init(UDS_ManagerBase *this)

{
  return;
}

// UDS_ManagerBase @ 14b4f1290

UDS_ManagerBase * __thiscall
UDS_ManagerBase::UDS_ManagerBase(UDS_ManagerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsBeingDestroyed = false;
  this->_padding_ = (longlong)&___7UDS_ManagerBase__6B_;
  return this;
}

// UDS_ManagerBase @ 14b4f12c0

UDS_ManagerBase * __thiscall
UDS_ManagerBase::UDS_ManagerBase(UDS_ManagerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsBeingDestroyed = false;
  this->_padding_ = (longlong)&___7UDS_ManagerBase__6B_;
  return this;
}

// ~UDS_ManagerBase @ 14b4f18c0

void __thiscall UDS_ManagerBase::~UDS_ManagerBase(UDS_ManagerBase *this)

{
  this->_padding_ = (longlong)&___7UDS_ManagerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f2320

UClass * __cdecl UDS_ManagerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ManagerBase",
               &Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton,
               StaticRegisterNativesUDS_ManagerBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ManagerBase>,InternalVTableHelperCtorCaller<UDS_ManagerBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ManagerBase.InnerSingleton;
}

// StaticRegisterNativesUDS_ManagerBase @ 14b4f2730

void __cdecl UDS_ManagerBase::StaticRegisterNativesUDS_ManagerBase(void)

{
  return;
}

