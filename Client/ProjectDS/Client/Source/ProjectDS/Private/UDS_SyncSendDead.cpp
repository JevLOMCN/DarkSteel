// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5ac570

UClass * __cdecl UDS_SyncSendDead::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendDead",
               &Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendDead,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendDead>,
               InternalVTableHelperCtorCaller<UDS_SyncSendDead>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton;
}

// UDS_SyncSendDead @ 14b5b1f80

UDS_SyncSendDead * __thiscall
UDS_SyncSendDead::UDS_SyncSendDead(UDS_SyncSendDead *this,FVTableHelper *param_1)

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

// ~UDS_SyncSendDead @ 14b5b2980

void __thiscall UDS_SyncSendDead::~UDS_SyncSendDead(UDS_SyncSendDead *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4ae0

UClass * __cdecl UDS_SyncSendDead::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendDead",
               &Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendDead,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendDead>,
               InternalVTableHelperCtorCaller<UDS_SyncSendDead>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendDead.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendDead @ 14b5b59b0

void __cdecl UDS_SyncSendDead::StaticRegisterNativesUDS_SyncSendDead(void)

{
  return;
}

// UDS_SyncSendDead @ 14bba9a40

UDS_SyncSendDead * __thiscall
UDS_SyncSendDead::UDS_SyncSendDead(UDS_SyncSendDead *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc32a0

bool __thiscall
UDS_SyncSendDead::IsAvailableSync(UDS_SyncSendDead *this,FDS_NetSyncData *param_1,float param_2)

{
  this->field_0x24 = 0;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x1c,(void *)0x0);
  return false;
}

