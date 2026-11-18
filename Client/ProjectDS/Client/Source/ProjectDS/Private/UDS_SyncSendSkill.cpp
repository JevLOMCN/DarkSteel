// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5ae220

UClass * __cdecl UDS_SyncSendSkill::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendSkill",
               &Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendSkill,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendSkill>,
               InternalVTableHelperCtorCaller<UDS_SyncSendSkill>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton;
}

// UDS_SyncSendSkill @ 14b5b21f0

UDS_SyncSendSkill * __thiscall
UDS_SyncSendSkill::UDS_SyncSendSkill(UDS_SyncSendSkill *this,FVTableHelper *param_1)

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

// ~UDS_SyncSendSkill @ 14b5b2ab0

void __thiscall UDS_SyncSendSkill::~UDS_SyncSendSkill(UDS_SyncSendSkill *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b5020

UClass * __cdecl UDS_SyncSendSkill::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendSkill",
               &Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendSkill,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendSkill>,
               InternalVTableHelperCtorCaller<UDS_SyncSendSkill>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendSkill.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendSkill @ 14b5b5a20

void __cdecl UDS_SyncSendSkill::StaticRegisterNativesUDS_SyncSendSkill(void)

{
  return;
}

// UDS_SyncSendSkill @ 14bba9bf0

UDS_SyncSendSkill * __thiscall
UDS_SyncSendSkill::UDS_SyncSendSkill(UDS_SyncSendSkill *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc3d10

bool __thiscall
UDS_SyncSendSkill::IsAvailableSync(UDS_SyncSendSkill *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UDS_CharStateData *pUVar6;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar7;
  EDS_CharState local_res8;
  TRotator<double> local_38;
  
  this->field_0x24 = 0;
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x1c,
                     (void *)0x0);
  if (bVar3) {
    return false;
  }
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
  local_res8 = Skill;
  bVar3 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
  local_res8 = Avoid;
  bVar4 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
  pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
  local_res8 = Shield;
  bVar5 = UDS_CharStateData::HasCharState(pUVar6,&local_res8);
  if ((bVar3) || (bVar4)) {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff8af;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xa0;
    this->field_0x24 = 1;
    return true;
  }
  uVar1 = (param_1->StateFlags).Packed;
  if (bVar5) {
    (param_1->StateFlags).Packed = uVar1 & 0xfffffffffffff8ae | 0xa2;
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x14);
    pTVar7 = UDS_MovementCore::GetActorRotation(this_00,&local_38);
    dVar2 = pTVar7->Yaw;
    (param_1->EntityDirection).Pitch = pTVar7->Pitch;
    (param_1->EntityDirection).Yaw = dVar2;
    (param_1->EntityDirection).Roll = pTVar7->Roll;
    return true;
  }
  if (((byte)(uVar1 >> 0xb) & 0x7f) == 10) {
    (param_1->StateFlags).Packed = uVar1 & 0xfffffffffffff80f;
    return true;
  }
  return false;
}

