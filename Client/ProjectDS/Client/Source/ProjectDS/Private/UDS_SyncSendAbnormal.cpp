// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5af400

UClass * __cdecl UDS_SyncSendAbnormal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendAbnormal",
               &Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendAbnormal,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendAbnormal>,
               InternalVTableHelperCtorCaller<UDS_SyncSendAbnormal>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton;
}

// UDS_SyncSendAbnormal @ 14b5b1e40

UDS_SyncSendAbnormal * __thiscall
UDS_SyncSendAbnormal::UDS_SyncSendAbnormal(UDS_SyncSendAbnormal *this,FVTableHelper *param_1)

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

// ~UDS_SyncSendAbnormal @ 14b5b28d0

void __thiscall UDS_SyncSendAbnormal::~UDS_SyncSendAbnormal(UDS_SyncSendAbnormal *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4800

UClass * __cdecl UDS_SyncSendAbnormal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendAbnormal",
               &Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendAbnormal,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendAbnormal>,
               InternalVTableHelperCtorCaller<UDS_SyncSendAbnormal>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendAbnormal.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendAbnormal @ 14b5b5940

void __cdecl UDS_SyncSendAbnormal::StaticRegisterNativesUDS_SyncSendAbnormal(void)

{
  return;
}

// UDS_SyncSendAbnormal @ 14bba9430

UDS_SyncSendAbnormal * __thiscall
UDS_SyncSendAbnormal::UDS_SyncSendAbnormal(UDS_SyncSendAbnormal *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc30e0

bool __thiscall
UDS_SyncSendAbnormal::IsAvailableSync
          (UDS_SyncSendAbnormal *this,FDS_NetSyncData *param_1,float param_2)

{
  bool bVar1;
  UDS_CharStateData *this_00;
  EDS_CharState local_res8 [4];
  
  this->field_0x24 = 0;
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
  local_res8[0] = Abnormal;
  bVar1 = UDS_CharStateData::HasCharState(this_00,local_res8);
  if (bVar1) {
    this->field_0x24 = 1;
    return true;
  }
  return false;
}

