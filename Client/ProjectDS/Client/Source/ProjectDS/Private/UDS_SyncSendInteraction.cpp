// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5ac9f0

UClass * __cdecl UDS_SyncSendInteraction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendInteraction",
               &Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendInteraction,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendInteraction>,
               InternalVTableHelperCtorCaller<UDS_SyncSendInteraction>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton;
}

// UDS_SyncSendInteraction @ 14b5b2020

UDS_SyncSendInteraction * __thiscall
UDS_SyncSendInteraction::UDS_SyncSendInteraction
          (UDS_SyncSendInteraction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->IsSendedInteraction = false;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// ~UDS_SyncSendInteraction @ 14b5b29c0

void __thiscall UDS_SyncSendInteraction::~UDS_SyncSendInteraction(UDS_SyncSendInteraction *this)

{
  this->_padding_ = (longlong)&UDS_SyncSendBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4c60

UClass * __cdecl UDS_SyncSendInteraction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendInteraction",
               &Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendInteraction,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SyncSendInteraction>,
               InternalVTableHelperCtorCaller<UDS_SyncSendInteraction>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendInteraction.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendInteraction @ 14b5b59d0

void __cdecl UDS_SyncSendInteraction::StaticRegisterNativesUDS_SyncSendInteraction(void)

{
  return;
}

// UDS_SyncSendInteraction @ 14bba9ac0

UDS_SyncSendInteraction * __thiscall
UDS_SyncSendInteraction::UDS_SyncSendInteraction
          (UDS_SyncSendInteraction *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  this->IsSendedInteraction = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  return this;
}

// IsAvailableSync @ 14bbc35a0

bool __thiscall
UDS_SyncSendInteraction::IsAvailableSync
          (UDS_SyncSendInteraction *this,FDS_NetSyncData *param_1,float param_2)

{
  ulonglong uVar1;
  double dVar2;
  bool bVar3;
  UDS_CharStateData *pUVar4;
  UDS_MovementCore *this_00;
  TRotator<double> *pTVar5;
  EDS_CharState local_res8;
  TRotator<double> local_28;
  
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar3) {
    pUVar4 = (UDS_CharStateData *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    local_res8 = Interaction;
    bVar3 = UDS_CharStateData::HasCharState(pUVar4,&local_res8);
    if (bVar3) {
      pUVar4 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8._0_4_ = ToggleSkill|Skill|Avoid|Shield;
      bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8);
      if (bVar3) {
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc7ffffff;
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x6000000;
      }
      else {
        pUVar4 = (UDS_CharStateData *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
        local_res8._0_4_ = ToggleSkill|Skill|Avoid|Shield|Swim;
        bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8);
        if (bVar3) {
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc9ffffff;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x8000000;
        }
        else {
          pUVar4 = (UDS_CharStateData *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          local_res8._0_4_ = ToggleSkill|Skill|Avoid|AutoMove|Shield;
          bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8);
          if (bVar3) {
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffcbffffff;
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xa000000;
          }
          else {
            pUVar4 = (UDS_CharStateData *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
            local_res8._0_4_ = ToggleSkill|Skill|Avoid|AutoMove;
            bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_res8)
            ;
            if (bVar3) {
              (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffcdffffff;
              (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xc000000;
            }
            else {
              pUVar4 = (UDS_CharStateData *)
                       FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
              local_res8._0_4_ = ToggleSkill|Skill|Avoid|AutoMove|Swim;
              bVar3 = UDS_CharStateData::HasCharDetailState
                                (pUVar4,(EDS_CharDetailState *)&local_res8);
              if (bVar3) {
                (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffcfffffff;
                (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xe000000;
              }
              else {
                pUVar4 = (UDS_CharStateData *)
                         FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
                local_res8._0_4_ = AniCut|AutoMove|Shield|Swim;
                bVar3 = UDS_CharStateData::HasCharDetailState
                                  (pUVar4,(EDS_CharDetailState *)&local_res8);
                if (!bVar3) {
                  (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc1ffffff;
                }
              }
            }
          }
        }
      }
      if (((uint)(param_1->StateFlags).Packed >> 0x19 & 0x1f) != 0) {
        this_00 = (UDS_MovementCore *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
        pTVar5 = UDS_MovementCore::GetActorRotation(this_00,&local_28);
        dVar2 = pTVar5->Yaw;
        (param_1->EntityDirection).Pitch = pTVar5->Pitch;
        (param_1->EntityDirection).Yaw = dVar2;
        uVar1 = (param_1->StateFlags).Packed;
        (param_1->EntityDirection).Roll = pTVar5->Roll;
        if ((((byte)(uVar1 >> 0x1e) ^ (byte)(uVar1 >> 0x19)) & 0x1f) != 0) {
          *(undefined1 *)&this->_padding_ = 1;
          return true;
        }
      }
    }
    else if ((char)this->_padding_ == '\x01') {
      *(undefined1 *)&this->_padding_ = 0;
      return true;
    }
  }
  return false;
}

