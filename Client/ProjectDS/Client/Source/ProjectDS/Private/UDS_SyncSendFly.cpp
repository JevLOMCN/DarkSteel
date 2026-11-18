// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5ac8f0

UClass * __cdecl UDS_SyncSendFly::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendFly",
               &Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendFly,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SyncSendFly>,InternalVTableHelperCtorCaller<UDS_SyncSendFly>,
               local_res8,UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton;
}

// UDS_SyncSendFly @ 14b5b1fd0

UDS_SyncSendFly * __thiscall
UDS_SyncSendFly::UDS_SyncSendFly(UDS_SyncSendFly *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->IsPrevAirwalk = false;
  this->PrevStartFallingPosition = 0.0;
  this->StartFallingPosition = 0.0;
  this->SendFallingHeight = 0.0;
  return this;
}

// ~UDS_SyncSendFly @ 14b5b29a0

void __thiscall UDS_SyncSendFly::~UDS_SyncSendFly(UDS_SyncSendFly *this)

{
  this->_padding_ = (longlong)&UDS_SyncSendBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4ba0

UClass * __cdecl UDS_SyncSendFly::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendFly",
               &Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendFly,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SyncSendFly>,InternalVTableHelperCtorCaller<UDS_SyncSendFly>,
               local_res8,UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendFly.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendFly @ 14b5b59c0

void __cdecl UDS_SyncSendFly::StaticRegisterNativesUDS_SyncSendFly(void)

{
  return;
}

// UDS_SyncSendFly @ 14bba9a80

UDS_SyncSendFly * __thiscall
UDS_SyncSendFly::UDS_SyncSendFly(UDS_SyncSendFly *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  this->IsPrevAirwalk = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  this->PrevStartFallingPosition = 0.0;
  this->StartFallingPosition = 0.0;
  this->SendFallingHeight = 0.0;
  return this;
}

// ActiveFallingState @ 14bbab770

void __thiscall UDS_SyncSendFly::ActiveFallingState(UDS_SyncSendFly *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UDS_CharStateData *pUVar5;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar6;
  ulonglong uVar7;
  float fVar8;
  EDS_CharDetailState local_res8 [2];
  TVector<double> local_38;
  
  pUVar5 = (UDS_CharStateData *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = Jump1;
  bVar2 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res8);
  pUVar5 = (UDS_CharStateData *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = Jump2;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res8);
  pUVar5 = (UDS_CharStateData *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = FallingHigher;
  bVar4 = UDS_CharStateData::HasCharDetailState(pUVar5,local_res8);
  pUVar5 = (UDS_CharStateData *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = FlyingCrash;
  UDS_CharStateData::HasCharDetailState(pUVar5,local_res8);
  uVar1 = (param_1->StateFlags).Packed;
  if (bVar2) {
    uVar7 = uVar1 & 0xfffffffffffff86f | 0x60;
  }
  else {
    uVar7 = uVar1 & 0xfffffffffffff89f | 0x90;
    if (bVar3) {
      uVar7 = uVar1 & 0xfffffffffffff87f | 0x70;
    }
  }
  (param_1->StateFlags).Packed = uVar7;
  this_00 = (UDS_MovementCore *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pTVar6 = UDS_MovementCore::GetActorLocation(this_00,&local_38);
  fVar8 = (float)(pTVar6->field0_0x0)._s_0.Z;
  if (bVar4) {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc5ffffff;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x4000000;
    this->PrevStartFallingPosition = fVar8;
    if (this->StartFallingPosition <= fVar8 && fVar8 != this->StartFallingPosition) {
      this->StartFallingPosition = fVar8;
    }
  }
  else {
    this->PrevStartFallingPosition = fVar8;
  }
  return;
}

// CheckFallingDistance @ 14bbaf1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_SyncSendFly::CheckFallingDistance(UDS_SyncSendFly *this)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1a8 [32];
  TVector<double> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->StartFallingPosition <= 0.0) {
    bVar3 = false;
  }
  else {
    this_00 = (UDS_MovementCore *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    fVar1 = this->StartFallingPosition;
    pTVar4 = UDS_MovementCore::GetActorLocation(this_00,&local_168);
    dVar2 = (pTVar4->field0_0x0)._s_0.Z;
    this->StartFallingPosition = 0.0;
    this->SendFallingHeight = (float)((double)fVar1 - dVar2);
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_SyncSendFly::CheckFallingDistance",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Display,local_148.Ptr,0x57,L"End Falling 2 %f");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetAccelerationValue @ 14bbbb1d0

float __thiscall
UDS_SyncSendFly::GetAccelerationValue(UDS_SyncSendFly *this,int param_1,float param_2)

{
  undefined1 auVar1 [16];
  UObject *pUVar2;
  double *pdVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_XMM2_Db;
  undefined1 local_38 [56];
  
  if ((char)param_1 != '\0') {
    uVar4 = param_1 & 0xff;
    if (uVar4 == 1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      pdVar3 = (double *)
               (**(code **)(*(longlong *)pUVar2 + 0x478))
                         (pUVar2,local_38,CONCAT44(in_XMM2_Db,param_2));
      auVar7._0_8_ = *pdVar3 * *pdVar3;
      auVar7._8_8_ = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pdVar3[1] * pdVar3[1] + auVar7._0_8_ + pdVar3[2] * pdVar3[2];
      auVar6 = sqrtpd(auVar7,auVar6);
      return (float)auVar6._0_8_;
    }
    if ((uVar4 != 2) && (uVar4 == 3)) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      pdVar3 = (double *)
               (**(code **)(*(longlong *)pUVar2 + 0x478))
                         (pUVar2,local_38,CONCAT44(in_XMM2_Db,param_2));
      auVar5._0_8_ = *pdVar3 * *pdVar3;
      auVar5._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pdVar3[1] * pdVar3[1] + auVar5._0_8_ + pdVar3[2] * pdVar3[2];
      auVar6 = sqrtpd(auVar5,auVar1);
      return (float)(double)CONCAT44(auVar6._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_,
                                     auVar6._0_4_ ^ (uint)__xmm_80000000000000008000000000000000);
    }
  }
  return 0.0;
}

// GetNowMoveStateType @ 14bbbcc60

int __thiscall UDS_SyncSendFly::GetNowMoveStateType(UDS_SyncSendFly *this,FDS_NetSyncData *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int iVar4;
  UDS_MovementCore *this_00;
  float fVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  dVar3 = __real_3f1a36e2e0000000;
  dVar10 = (param_1->TransformValue).field0_0x0._s_0.X;
  dVar11 = (param_1->TransformValue).field0_0x0._s_0.Z;
  dVar7 = (param_1->TransformValue).field0_0x0._s_0.Y;
  uVar12 = SUB84(dVar7,0);
  uVar13 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar6._0_8_ = dVar10 * dVar10;
  auVar6._8_8_ = 0;
  auVar9._0_8_ = dVar7 * dVar7 + auVar6._0_8_ + dVar11 * dVar11;
  auVar9._8_8_ = 0;
  auVar6 = sqrtpd(auVar6,auVar9);
  if (__real_3f1a36e2e0000000 < auVar6._0_8_) {
    this_00 = (UDS_MovementCore *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    fVar5 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    dVar10 = (param_1->TransformValue).field0_0x0._s_0.X;
    dVar7 = (param_1->TransformValue).field0_0x0._s_0.Y;
    uVar12 = SUB84(dVar7,0);
    uVar13 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar11 = (param_1->TransformValue).field0_0x0._s_0.Z;
    auVar8._0_8_ = dVar10 * dVar10;
    auVar8._8_8_ = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar7 * dVar7 + auVar8._0_8_ + dVar11 * dVar11;
    auVar6 = sqrtpd(auVar8,auVar2);
    dVar7 = auVar6._0_8_ - (double)fVar5;
    if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar1 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
      if ((dVar3 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
         (uVar1 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8), iVar4 = 2,
         dVar3 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = 0;
  }
  if ((float)(dVar10 * (param_1->VelocityVector).field0_0x0._s_0.X +
              (double)CONCAT44(uVar13,uVar12) * (param_1->VelocityVector).field0_0x0._s_0.Y +
             dVar11 * (param_1->VelocityVector).field0_0x0._s_0.Z) < 0.0) {
    iVar4 = 2;
  }
  return iVar4;
}

// IsAvailableSync @ 14bbc32c0

bool __thiscall
UDS_SyncSendFly::IsAvailableSync(UDS_SyncSendFly *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UDS_CharStateData *pUVar8;
  UDS_MovementCore *pUVar9;
  TVector<double> *pTVar10;
  TRotator<double> *pTVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  EDS_CharState local_res8;
  EDS_CharDetailState local_res20 [2];
  TRotator<double> local_68 [2];
  
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar4) {
    bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)
                       ((longlong)&this->_padding_ + 4),(void *)0x0);
    if (!bVar4) {
      bVar6 = false;
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8 = AirWalk;
      bVar4 = UDS_CharStateData::HasCharState(pUVar8,&local_res8);
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8 = CONCAT44(local_res8._4_4_,0x22);
      bVar5 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      if (bVar4) {
        if (bVar5 == bVar4) {
          pUVar8 = (UDS_CharStateData *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          local_res8._0_4_ = Skill|Avoid|AutoMove;
          bVar5 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
          pUVar8 = (UDS_CharStateData *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          local_res8._0_4_ = Skill|Avoid|AutoMove|Swim;
          bVar6 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
          pUVar8 = (UDS_CharStateData *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          local_res8 = CONCAT44(local_res8._4_4_,0x23);
          bVar7 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
          local_res8 = CONCAT71(local_res8._1_7_,bVar7);
          pUVar8 = (UDS_CharStateData *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          local_res20[0] = FlyingCrash;
          UDS_CharStateData::HasCharDetailState(pUVar8,local_res20);
          uVar13 = (param_1->StateFlags).Packed;
          if (bVar5 == bVar4) {
            uVar12 = uVar13 & 0xfffffffffffff86f | 0x60;
          }
          else {
            uVar12 = uVar13 & 0xfffffffffffff89f | 0x90;
            if (bVar6) {
              uVar12 = uVar13 & 0xfffffffffffff87f | 0x70;
            }
          }
          (param_1->StateFlags).Packed = uVar12;
          pUVar9 = (UDS_MovementCore *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
          pTVar10 = UDS_MovementCore::GetActorLocation(pUVar9,(TVector<double> *)local_68);
          fVar14 = (float)(pTVar10->field0_0x0)._s_0.Z;
          if ((undefined1)local_res8 == Swim) {
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc5ffffff;
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x4000000;
            if (*(float *)&this->_padding_ <= fVar14 && fVar14 != *(float *)&this->_padding_) {
              *(float *)&this->_padding_ = fVar14;
            }
          }
        }
        else {
          NotFallingState((UDS_SyncSendFly *)&this[-1]._padding_,param_1);
          fVar14 = 0.0;
        }
        *(float *)((longlong)&this->_padding_ + 4) = fVar14;
        pUVar9 = (UDS_MovementCore *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
        pTVar11 = UDS_MovementCore::GetActorRotation(pUVar9,local_68);
        uVar1 = *(undefined4 *)((longlong)&pTVar11->Pitch + 4);
        uVar2 = *(undefined4 *)&pTVar11->Yaw;
        uVar3 = *(undefined4 *)((longlong)&pTVar11->Yaw + 4);
        *(undefined4 *)&(param_1->EntityDirection).Pitch = *(undefined4 *)&pTVar11->Pitch;
        *(undefined4 *)((longlong)&(param_1->EntityDirection).Pitch + 4) = uVar1;
        *(undefined4 *)&(param_1->EntityDirection).Yaw = uVar2;
        *(undefined4 *)((longlong)&(param_1->EntityDirection).Yaw + 4) = uVar3;
        (param_1->EntityDirection).Roll = pTVar11->Roll;
        uVar13 = (param_1->StateFlags).Packed & 0xfffffffffffffffd | 1;
        (param_1->StateFlags).Packed = uVar13;
        fVar14 = (float)(**(code **)(this[-1]._padding_ + 0x2c8))
                                  (&this[-1]._padding_,(uint)uVar13 & 3,param_2);
        param_1->AccelerationValue = fVar14;
        bVar6 = true;
        param_1->SendFallingHeight = *(float *)((longlong)&this->_padding_ + 4);
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      }
      else if ((char)this->_padding_ == '\x01') {
        bVar6 = CheckFallingDistance((UDS_SyncSendFly *)&this[-1]._padding_);
      }
      else {
        this->_padding_ = 0;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
      }
      *(bool *)&this->_padding_ = bVar4;
      return bVar6;
    }
  }
  return false;
}

// NotFallingState @ 14bbc6e80

void __thiscall UDS_SyncSendFly::NotFallingState(UDS_SyncSendFly *this,FDS_NetSyncData *param_1)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  UDS_CharStateData *pUVar10;
  UDS_MovementCore *pUVar11;
  TVector<double> *pTVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  EDS_CharDetailState local_res8 [2];
  EDS_CharDetailState local_res18 [2];
  EDS_CharDetailState local_res20 [2];
  EDS_CharDetailState local_78 [2];
  TVector<double> local_70;
  TVector<double> local_58;
  
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = AirDash;
  bVar6 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res8);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res8[0] = AirStop;
  bVar7 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res8);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar7);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res18[0] = AirDashAttack;
  bVar7 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res18);
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,bVar7);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res20[0] = Hovering;
  bVar7 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res20);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res20[0] = Flying;
  bVar8 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res20);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res20[0] = PowerJumpCharging;
  UDS_CharStateData::HasCharDetailState(pUVar10,local_res20);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res20[0] = PowerJump;
  UDS_CharStateData::HasCharDetailState(pUVar10,local_res20);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_res20[0] = FallingHigher;
  bVar9 = UDS_CharStateData::HasCharDetailState(pUVar10,local_res20);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar9);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_78[0] = Climbing;
  bVar9 = UDS_CharStateData::HasCharDetailState(pUVar10,local_78);
  pUVar10 = (UDS_CharStateData *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  local_78[0] = ClimbJump;
  UDS_CharStateData::HasCharDetailState(pUVar10,local_78);
  if (bVar6) {
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff84f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x40;
  }
  else {
    if ((undefined1)local_res8[0] == Swim) {
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff8df;
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xd0;
      return;
    }
    if ((undefined1)local_res18[0] != Swim) {
      if (bVar7) {
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff88f;
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x80;
        return;
      }
      if (bVar9) {
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff8cf;
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0xc0;
        return;
      }
      if (bVar8) {
        (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xffffffffc1fff80f;
        return;
      }
      pUVar11 = (UDS_MovementCore *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      pTVar12 = UDS_MovementCore::GetAirWalkSpeed(pUVar11,&local_70);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = __real_3e45798ee0000000;
      pTVar12 = UE::Math::TVector<double>::GetSafeNormal
                          (pTVar12,&local_58,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      dVar1 = (param_1->TransformValue).field0_0x0._s_0.Y;
      dVar2 = (param_1->TransformValue).field0_0x0._s_0.X;
      dVar5 = (pTVar12->field0_0x0)._s_0.Y;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar1 * dVar1 + dVar2 * dVar2;
      auVar14 = sqrtpd(auVar13,auVar14);
      dVar1 = auVar14._0_8_;
      dVar2 = dVar1 * (pTVar12->field0_0x0)._s_0.Z;
      (param_1->VelocityVector).field0_0x0._s_0.X = dVar1 * (pTVar12->field0_0x0)._s_0.X;
      auVar4._8_4_ = SUB84(dVar2,0);
      auVar4._0_8_ = dVar1 * dVar5;
      auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(param_1->VelocityVector).field0_0x0 + 8) = auVar4;
      uVar3 = (param_1->StateFlags).Packed;
      if ((undefined1)local_res20[0] == Swim) {
        if ((((byte)(uVar3 >> 0xb) & 0x7f) != 2) && (((byte)(uVar3 >> 0x1e) & 0x1f) == 2)) {
          (param_1->StateFlags).Packed = uVar3 & 0xffffffffd3fff82f | 0x12000020;
          CheckFallingDistance(this);
          return;
        }
        (param_1->StateFlags).Packed = uVar3 & 0xffffffffc5fff82f | 0x4000020;
        CheckFallingDistance(this);
        return;
      }
      (param_1->StateFlags).Packed = uVar3 & 0xffffffffc3ffffff | 0x2000000;
      CheckFallingDistance(this);
      return;
    }
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff90f;
    (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x100;
  }
  pUVar11 = (UDS_MovementCore *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  pTVar12 = UDS_MovementCore::GetAirWalkSpeed(pUVar11,&local_70);
  dVar1 = (pTVar12->field0_0x0)._s_0.Y;
  (param_1->VelocityVector).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
  (param_1->VelocityVector).field0_0x0._s_0.Y = dVar1;
  (param_1->VelocityVector).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  return;
}

