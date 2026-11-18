// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b5ae520

UClass * __cdecl UDS_SyncSendSwim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendSwim",
               &Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendSwim,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendSwim>,
               InternalVTableHelperCtorCaller<UDS_SyncSendSwim>,local_res8,
               UDS_SyncSendMove::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton;
}

// UDS_SyncSendSwim @ 14b5b2240

UDS_SyncSendSwim * __thiscall
UDS_SyncSendSwim::UDS_SyncSendSwim(UDS_SyncSendSwim *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x3c = 0;
  *(undefined8 *)&this->field_0x44 = 0;
  this->field_0x4c = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  this->field_0x54 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// ~UDS_SyncSendSwim @ 14b5b2ad0

void __thiscall UDS_SyncSendSwim::~UDS_SyncSendSwim(UDS_SyncSendSwim *this)

{
  *(undefined ***)this = &UDS_SyncSendBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b50e0

UClass * __cdecl UDS_SyncSendSwim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendSwim",
               &Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendSwim,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendSwim>,
               InternalVTableHelperCtorCaller<UDS_SyncSendSwim>,local_res8,
               UDS_SyncSendMove::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendSwim.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendSwim @ 14b5b5a30

void __cdecl UDS_SyncSendSwim::StaticRegisterNativesUDS_SyncSendSwim(void)

{
  return;
}

// UDS_SyncSendSwim @ 14bba9c30

UDS_SyncSendSwim * __thiscall
UDS_SyncSendSwim::UDS_SyncSendSwim(UDS_SyncSendSwim *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IDS_SyncSendInterface__;
  this->field_0x54 = 0;
  return this;
}

// GetAccelerationValue @ 14bbbb2d0

float __thiscall
UDS_SyncSendSwim::GetAccelerationValue(UDS_SyncSendSwim *this,int param_1,float param_2)

{
  UObject *pUVar1;
  uint uVar2;
  float fVar3;
  
  if ((char)param_1 != '\0') {
    uVar2 = param_1 & 0xff;
    if (uVar2 == 1) {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3c);
                    /* WARNING: Could not recover jumptable at 0x00014bbbb32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(*(longlong *)pUVar1 + 0x3f8))
                               (pUVar1,*(code **)(*(longlong *)pUVar1 + 0x3f8));
      return fVar3;
    }
    if ((uVar2 != 2) && (uVar2 == 3)) {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x3c);
      uVar2 = (**(code **)(*(longlong *)pUVar1 + 0x408))(pUVar1);
      return (float)(uVar2 ^ __xmm_80000000800000008000000080000000);
    }
  }
  return 0.0;
}

// IsAvailableSync @ 14bbc3e90

bool __thiscall
UDS_SyncSendSwim::IsAvailableSync(UDS_SyncSendSwim *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  char cVar12;
  UDS_CharStateData *pUVar13;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar14;
  ulonglong uVar15;
  float fVar16;
  EDS_CharDetailState local_res8 [2];
  EDS_CharDetailState local_res20 [2];
  EDS_CharDetailState local_68 [2];
  TRotator<double> local_60;
  
  bVar6 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&this->field_0x1c,
                     (void *)0x0);
  if (!bVar6) {
    pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
    local_res8[0] = Swim;
    bVar6 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res8);
    if (bVar6) {
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res8[0] = SwimSubmerge;
      bVar6 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res8);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar6);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res20[0] = SwimDown;
      bVar6 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res20);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res20[0] = SwimUp;
      bVar7 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res20);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res20[0] = SwimSurfaceSprint;
      bVar8 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res20);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res20[0] = SwimSubmergeSprint;
      bVar9 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res20);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_res20[0] = AerialDive;
      bVar10 = UDS_CharStateData::HasCharDetailState(pUVar13,local_res20);
      local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar10);
      pUVar13 = (UDS_CharStateData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x1c);
      local_68[0] = SwimServerFailForceUp;
      bVar10 = UDS_CharStateData::HasCharDetailState(pUVar13,local_68);
      puVar1 = &this[-1].field_0x30;
      *(float *)&this->field_0x28 = param_2 + *(float *)&this->field_0x28;
      uVar2 = (param_1->StateFlags).Packed;
      if (bVar6) {
        uVar15 = uVar2 & 0xfffffffffffff97f | 0x170;
      }
      else if (bVar7) {
        uVar15 = uVar2 & 0xfffffffffffff99f | 400;
      }
      else if (bVar8) {
        uVar15 = uVar2 & 0xfffffffffffff96f | 0x160;
      }
      else if (bVar9) {
        uVar15 = uVar2 & 0xfffffffffffff98f | 0x180;
      }
      else if ((undefined1)local_res8[0] == Swim) {
        uVar15 = uVar2 & 0xfffffffffffff95f | 0x150;
      }
      else if ((undefined1)local_res20[0] == Swim) {
        uVar15 = uVar2 & 0xfffffffffffff9af | 0x1a0;
      }
      else {
        uVar15 = uVar2 & 0xfffffffffffff94f | 0x140;
        if (bVar10) {
          uVar15 = uVar2 & 0xfffffffffffff9bf | 0x1b0;
        }
      }
      (param_1->StateFlags).Packed = uVar15;
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x14);
      pTVar14 = UDS_MovementCore::GetActorRotation(this_00,&local_60);
      uVar3 = *(undefined4 *)((longlong)&pTVar14->Pitch + 4);
      uVar4 = *(undefined4 *)&pTVar14->Yaw;
      uVar5 = *(undefined4 *)((longlong)&pTVar14->Yaw + 4);
      *(undefined4 *)&(param_1->EntityDirection).Pitch = *(undefined4 *)&pTVar14->Pitch;
      *(undefined4 *)((longlong)&(param_1->EntityDirection).Pitch + 4) = uVar3;
      *(undefined4 *)&(param_1->EntityDirection).Yaw = uVar4;
      *(undefined4 *)((longlong)&(param_1->EntityDirection).Yaw + 4) = uVar5;
      (param_1->EntityDirection).Roll = pTVar14->Roll;
      bVar11 = (**(code **)(*(longlong *)puVar1 + 0x2c0))(puVar1,param_1);
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffffc;
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | (ulonglong)bVar11;
      fVar16 = (float)(**(code **)(*(longlong *)puVar1 + 0x2c8))
                                (puVar1,(uint)(param_1->StateFlags).Packed & 3,0);
      param_1->AccelerationValue = fVar16;
      cVar12 = (**(code **)(*(longlong *)puVar1 + 0x2d0))(puVar1,param_1);
      if (cVar12 == '\x01') {
        *(undefined4 *)&this->field_0x28 = 0;
        this->field_0x24 = 0;
        return true;
      }
      this->field_0x24 = 1;
      return true;
    }
  }
  return false;
}

