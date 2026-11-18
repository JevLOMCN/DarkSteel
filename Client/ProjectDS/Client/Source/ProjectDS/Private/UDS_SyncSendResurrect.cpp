// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5adf10

UClass * __cdecl UDS_SyncSendResurrect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendResurrect",
               &Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendResurrect,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendResurrect>,
               InternalVTableHelperCtorCaller<UDS_SyncSendResurrect>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton;
}

// UDS_SyncSendResurrect @ 14b5b21a0

UDS_SyncSendResurrect * __thiscall
UDS_SyncSendResurrect::UDS_SyncSendResurrect(UDS_SyncSendResurrect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x3c = 0;
  *(undefined8 *)&this->field_0x44 = 0;
  this->field_0x4c = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// ~UDS_SyncSendResurrect @ 14b5b2a90

void __thiscall UDS_SyncSendResurrect::~UDS_SyncSendResurrect(UDS_SyncSendResurrect *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4f60

UClass * __cdecl UDS_SyncSendResurrect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendResurrect",
               &Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendResurrect,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendResurrect>,
               InternalVTableHelperCtorCaller<UDS_SyncSendResurrect>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendResurrect.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendResurrect @ 14b5b5a10

void __cdecl UDS_SyncSendResurrect::StaticRegisterNativesUDS_SyncSendResurrect(void)

{
  return;
}

// UDS_SyncSendResurrect @ 14bba9bb0

UDS_SyncSendResurrect * __thiscall
UDS_SyncSendResurrect::UDS_SyncSendResurrect
          (UDS_SyncSendResurrect *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc3cf0

bool __thiscall
UDS_SyncSendResurrect::IsAvailableSync
          (UDS_SyncSendResurrect *this,FDS_NetSyncData *param_1,float param_2)

{
  this->field_0x24 = 0;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x1c,(void *)0x0);
  return false;
}

// OnEnter @ 14bbc9090

void __thiscall UDS_SyncSendResurrect::OnEnter(UDS_SyncSendResurrect *this,FDS_NetSyncData *param_1)

{
  return;
}

// OnExit @ 14bbc96c0

void __thiscall UDS_SyncSendResurrect::OnExit(UDS_SyncSendResurrect *this,FDS_NetSyncData *param_1)

{
  return;
}

