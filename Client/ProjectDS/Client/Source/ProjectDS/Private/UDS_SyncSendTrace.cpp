// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5ae7f0

UClass * __cdecl UDS_SyncSendTrace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendTrace",
               &Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendTrace,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendTrace>,
               InternalVTableHelperCtorCaller<UDS_SyncSendTrace>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton;
}

// UDS_SyncSendTrace @ 14b5b2290

UDS_SyncSendTrace * __thiscall
UDS_SyncSendTrace::UDS_SyncSendTrace(UDS_SyncSendTrace *this,FVTableHelper *param_1)

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

// ~UDS_SyncSendTrace @ 14b5b2af0

void __thiscall UDS_SyncSendTrace::~UDS_SyncSendTrace(UDS_SyncSendTrace *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b51a0

UClass * __cdecl UDS_SyncSendTrace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendTrace",
               &Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendTrace,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendTrace>,
               InternalVTableHelperCtorCaller<UDS_SyncSendTrace>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendTrace.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendTrace @ 14b5b5a40

void __cdecl UDS_SyncSendTrace::StaticRegisterNativesUDS_SyncSendTrace(void)

{
  return;
}

// UDS_SyncSendTrace @ 14bba9c70

UDS_SyncSendTrace * __thiscall
UDS_SyncSendTrace::UDS_SyncSendTrace(UDS_SyncSendTrace *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc41e0

bool __thiscall
UDS_SyncSendTrace::IsAvailableSync(UDS_SyncSendTrace *this,FDS_NetSyncData *param_1,float param_2)

{
  this->field_0x24 = 1;
  return false;
}

