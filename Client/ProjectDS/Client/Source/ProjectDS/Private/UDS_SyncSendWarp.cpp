// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5b7f10

UClass * __cdecl UDS_SyncSendWarp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendWarp",
               &Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendWarp,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendWarp>,
               InternalVTableHelperCtorCaller<UDS_SyncSendWarp>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton;
}

// UDS_SyncSendWarp @ 14b5bcaf0

UDS_SyncSendWarp * __thiscall
UDS_SyncSendWarp::UDS_SyncSendWarp(UDS_SyncSendWarp *this,FVTableHelper *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// ~UDS_SyncSendWarp @ 14b5bdd30

void __thiscall UDS_SyncSendWarp::~UDS_SyncSendWarp(UDS_SyncSendWarp *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  UDS_SyncSendBase::~UDS_SyncSendBase((UDS_SyncSendBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bf440

UClass * __cdecl UDS_SyncSendWarp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendWarp",
               &Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendWarp,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendWarp>,
               InternalVTableHelperCtorCaller<UDS_SyncSendWarp>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendWarp.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendWarp @ 14b5c0000

void __cdecl UDS_SyncSendWarp::StaticRegisterNativesUDS_SyncSendWarp(void)

{
  return;
}

// UDS_SyncSendWarp @ 14bba9cb0

UDS_SyncSendWarp * __thiscall
UDS_SyncSendWarp::UDS_SyncSendWarp(UDS_SyncSendWarp *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc41f0

bool __thiscall
UDS_SyncSendWarp::IsAvailableSync(UDS_SyncSendWarp *this,FDS_NetSyncData *param_1,float param_2)

{
  this->field_0x24 = 0;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
            ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x1c,(void *)0x0);
  return false;
}

// OnEnter @ 14bbc90a0

void __thiscall UDS_SyncSendWarp::OnEnter(UDS_SyncSendWarp *this,FDS_NetSyncData *param_1)

{
  return;
}

// OnExit @ 14bbc96d0

void __thiscall UDS_SyncSendWarp::OnExit(UDS_SyncSendWarp *this,FDS_NetSyncData *param_1)

{
  return;
}

