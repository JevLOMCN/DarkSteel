// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5ade10

UClass * __cdecl UDS_SyncSendMove::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendMove",
               &Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendMove,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendMove>,
               InternalVTableHelperCtorCaller<UDS_SyncSendMove>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton;
}

// UDS_SyncSendMove @ 14b5b2150

UDS_SyncSendMove * __thiscall
UDS_SyncSendMove::UDS_SyncSendMove(UDS_SyncSendMove *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->SendDeltaTick = 0.0;
  this->IsLiftUp = false;
  return this;
}

// ~UDS_SyncSendMove @ 14b5b2a70

void __thiscall UDS_SyncSendMove::~UDS_SyncSendMove(UDS_SyncSendMove *this)

{
  this->_padding_ = (longlong)&UDS_SyncSendBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDS_SyncSendInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4ea0

UClass * __cdecl UDS_SyncSendMove::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SyncSendMove",
               &Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton,
               StaticRegisterNativesUDS_SyncSendMove,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SyncSendMove>,
               InternalVTableHelperCtorCaller<UDS_SyncSendMove>,local_res8,
               UDS_SyncSendBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SyncSendMove.InnerSingleton;
}

// StaticRegisterNativesUDS_SyncSendMove @ 14b5b5a00

void __cdecl UDS_SyncSendMove::StaticRegisterNativesUDS_SyncSendMove(void)

{
  return;
}

// UDS_SyncSendMove @ 14bba9b70

UDS_SyncSendMove * __thiscall
UDS_SyncSendMove::UDS_SyncSendMove(UDS_SyncSendMove *this,FObjectInitializer *param_1)

{
  UDS_SyncSendBase::UDS_SyncSendBase((UDS_SyncSendBase *)this,param_1);
  this->SendDeltaTick = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IDS_SyncSendInterface__;
  this->IsLiftUp = false;
  return this;
}

// CheckMountPrevMoveMode @ 14bbaf330

bool __thiscall
UDS_SyncSendMove::CheckMountPrevMoveMode(UDS_SyncSendMove *this,FDS_NetSyncData *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  
  uVar1 = (param_1->StateFlags).Packed;
  bVar2 = (byte)(uVar1 >> 0xb) & 0x7f;
  if ((bVar2 != 0x1d) && (0x17 < (byte)(bVar2 - 0x1e))) {
    return false;
  }
  (param_1->StateFlags).Packed = uVar1 & 0xfffffffffffff80f;
  return true;
}

// IsAvailableSync @ 14bbc39e0

bool __thiscall
UDS_SyncSendMove::IsAvailableSync(UDS_SyncSendMove *this,FDS_NetSyncData *param_1,float param_2)

{
  undefined8 uVar1;
  double dVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  UDS_CharStateData *pUVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  EDS_CharState local_res8;
  
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)
                     ((longlong)&this->_padding_ + 4),(void *)0x0);
  if (!bVar5) {
    pUVar8 = (UDS_CharStateData *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    local_res8 = Mount;
    bVar5 = UDS_CharStateData::HasCharState(pUVar8,&local_res8);
    if (!bVar5) {
      uVar3 = (param_1->StateFlags).Packed;
      bVar6 = (byte)(uVar3 >> 0xb) & 0x7f;
      if ((bVar6 == 0x1d) || ((byte)(bVar6 - 0x1e) < 0x18)) {
        (param_1->StateFlags).Packed = uVar3 & 0xfffffffffffff80f;
        return true;
      }
      bVar10 = false;
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8._0_4_ = AniCut|AutoMove|Shield|Swim;
      bVar5 = UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8._0_4_ = AniCut|Avoid;
      UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8._0_4_ = AniCut|Avoid|Swim;
      UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8._0_4_ = AniCut|Avoid|Shield;
      UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      pUVar8 = (UDS_CharStateData *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
      local_res8 = CONCAT44(local_res8._4_4_,0x4b);
      UDS_CharStateData::HasCharDetailState(pUVar8,(EDS_CharDetailState *)&local_res8);
      lVar4 = this[-1]._padding_;
      *(float *)&this->_padding_ = param_2 + *(float *)&this->_padding_;
      bVar6 = (**(code **)(lVar4 + 0x2c0))(&this[-1]._padding_,param_1);
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffffffc;
      (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | (ulonglong)bVar6;
      fVar11 = (float)(**(code **)(this[-1]._padding_ + 0x2c8))
                                (&this[-1]._padding_,(uint)(param_1->StateFlags).Packed & 3,0);
      param_1->AccelerationValue = fVar11;
      (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
      cVar7 = (**(code **)(this[-1]._padding_ + 0x2d0))(&this[-1]._padding_,param_1);
      if (cVar7 == '\x01') {
        uVar3 = (param_1->StateFlags).Packed;
        uVar9 = uVar3 & 0xfffffffffffff82f | 0x20;
        if (((param_1->StateFlags).Packed & 3) == 0) {
          uVar9 = uVar3 & 0xfffffffffffff80f;
        }
        (param_1->StateFlags).Packed = uVar9;
      }
      else {
        uVar1 = *(undefined8 *)&(param_1->InputValue).field0_0x0;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
            (uVar1 = *(undefined8 *)((longlong)&(param_1->InputValue).field0_0x0 + 8),
            __real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
           ((dVar13 = (param_1->PrevPosition).field0_0x0._s_0.X -
                      (param_1->NowPosition).field0_0x0._s_0.X,
            (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000 &&
            ((dVar12 = (param_1->PrevPosition).field0_0x0._s_0.Y -
                       (param_1->NowPosition).field0_0x0._s_0.Y,
             (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000 &&
             (dVar12 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                       (param_1->NowPosition).field0_0x0._s_0.Z,
             (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)))))) {
          if (((param_1->StateFlags).Packed & 3) == 2) {
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff82f;
            (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 0x20;
          }
          if ((*(char *)((longlong)&this->_padding_ + 4) == '\x01') && (!bVar5)) {
            *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
            bVar10 = true;
          }
          if ((*(float *)&this->_padding_ <= __real_40a00000 &&
               __real_40a00000 != *(float *)&this->_padding_) && (!bVar5)) {
            return bVar10;
          }
        }
        else {
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed & 0xfffffffffffff80e;
          (param_1->StateFlags).Packed = (param_1->StateFlags).Packed | 2;
          dVar12 = (param_1->PrevPosition).field0_0x0._s_0.Y;
          dVar2 = (param_1->NowPosition).field0_0x0._s_0.Y;
          *(double *)&(param_1->VelocityVector).field0_0x0 = dVar13;
          (param_1->VelocityVector).field0_0x0._s_0.Y = dVar12 - dVar2;
          (param_1->VelocityVector).field0_0x0._s_0.Z = 0.0;
        }
      }
      *(undefined4 *)&this->_padding_ = 0;
      return true;
    }
  }
  return false;
}

// IsChangeSyncData @ 14bbc4470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_SyncSendMove::IsChangeSyncData(UDS_SyncSendMove *this,FDS_NetSyncData *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  
  if (param_1->TransportEntityID == 0) {
    bVar12 = (byte)(param_1->StateFlags).Packed & 3;
    bVar9 = (byte)(param_1->StateFlags).Packed >> 2 & 3;
    if ((((bVar9 == bVar12) && (param_1->AccelerationValue == param_1->PrevAccelerationValue)) &&
        (dVar20 = (param_1->PrevInputValue).field0_0x0._s_0.X -
                  (param_1->InputValue).field0_0x0._s_0.X,
        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000)) &&
       (dVar20 = (param_1->PrevInputValue).field0_0x0._s_0.Y -
                 (param_1->InputValue).field0_0x0._s_0.Y,
       (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) {
      dVar35 = (param_1->PrevEntityDirection).Pitch - (param_1->EntityDirection).Pitch;
      dVar37 = (param_1->PrevEntityDirection).Yaw - (param_1->EntityDirection).Yaw;
      dVar4 = (param_1->PrevEntityDirection).Roll - (param_1->EntityDirection).Roll;
      auVar21._8_4_ = SUB84(dVar37,0);
      auVar21._0_8_ = dVar35;
      auVar21._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      auVar22 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar22 = roundpd(in_XMM1,auVar22,3);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar29._0_8_ = auVar22._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar29._8_8_ = auVar22._8_8_ * dVar7;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar4;
      dVar35 = dVar35 - auVar29._0_8_;
      dVar37 = dVar37 - auVar29._8_8_;
      auVar22 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar22 = roundpd(auVar29,auVar22,3);
      dVar20 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar24._8_4_ = SUB84(dVar37,0);
      auVar24._0_8_ = dVar35;
      auVar24._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      dVar4 = dVar4 - auVar22._0_8_ * dVar20;
      dVar5 = 0.0 - auVar22._8_8_ * dVar3;
      uVar13 = -(ulonglong)(0.0 <= dVar35);
      uVar15 = -(ulonglong)(0.0 <= dVar37);
      auVar30._0_8_ = uVar13 & (ulonglong)dVar35;
      auVar30._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar37);
      auVar30._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar37) >> 0x20);
      dVar37 = auVar24._8_8_ + dVar7;
      uVar14 = -(ulonglong)(0.0 <= dVar4);
      uVar16 = -(ulonglong)(0.0 <= dVar5);
      auVar38._0_4_ = ~(uint)uVar13 & SUB84(dVar35 + dVar6,0);
      auVar38._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar6) >> 0x20);
      auVar38._8_4_ = ~(uint)uVar15 & SUB84(dVar37,0);
      auVar38._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
      auVar38 = auVar38 | auVar30;
      auVar25._8_4_ = SUB84(dVar5,0);
      auVar25._0_8_ = dVar4;
      auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar37 = auVar25._8_8_ + dVar3;
      auVar36._0_4_ = ~(uint)uVar14 & SUB84(dVar4 + dVar20,0);
      auVar36._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar4 + dVar20) >> 0x20);
      auVar36._8_4_ = ~(uint)uVar16 & SUB84(dVar37,0);
      auVar36._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
      auVar22._8_4_ = (int)((ulonglong)dVar5 & uVar16);
      auVar22._0_8_ = (ulonglong)dVar4 & uVar14;
      auVar22._12_4_ = (int)(((ulonglong)dVar5 & uVar16) >> 0x20);
      auVar36 = auVar36 | auVar22;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar36._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar36._8_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar38._0_8_);
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar38._8_8_);
      auVar31._0_8_ = uVar14 & (ulonglong)(auVar36._0_8_ - dVar20);
      uVar13 = uVar16 & (ulonglong)(auVar36._8_8_ - dVar3);
      auVar31._8_4_ = (undefined4)uVar13;
      auVar31._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar26._0_4_ = ~(uint)uVar14 & auVar36._0_4_;
      auVar26._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar36._4_4_;
      auVar26._8_4_ = ~(uint)uVar16 & auVar36._8_4_;
      auVar26._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar36._12_4_;
      auVar31 = auVar31 | auVar26;
      auVar27._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
      auVar27._0_8_ = __real_3f1a36e2e0000000;
      auVar27._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
      auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < auVar32._8_8_);
      auVar28._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar32._0_8_);
      uVar11 = movmskpd((int)this,auVar28);
      auVar33._0_8_ = uVar15 & (ulonglong)(auVar38._0_8_ - dVar6);
      uVar13 = uVar17 & (ulonglong)(auVar38._8_8_ - dVar7);
      auVar33._8_4_ = (undefined4)uVar13;
      auVar33._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar2._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar38._4_4_;
      auVar2._0_4_ = ~(uint)uVar15 & auVar38._0_4_;
      auVar2._8_4_ = ~(uint)uVar17 & auVar38._8_4_;
      auVar2._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar38._12_4_;
      auVar33 = auVar33 | auVar2;
      auVar34._0_8_ =
           (double)CONCAT44(auVar33._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar33._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar34._8_4_ = auVar33._8_4_ & _UNK_15061cc88;
      auVar34._12_4_ = auVar33._12_4_ & _UNK_15061cc8c;
      lVar18 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._8_8_);
      auVar8._8_4_ = (int)lVar18;
      auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar34._0_8_);
      auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar10 = movmskpd((uint)bVar9,auVar8);
      if (((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) &&
         (dVar20 = (param_1->PrevPosition).field0_0x0._s_0.Z -
                   (param_1->NowPosition).field0_0x0._s_0.Z,
         (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3ff0000000000000)) {
        if (bVar12 == 2) {
          fVar1 = this->SendDeltaTick;
          fVar19 = UDS_GameInstance::GetDelayMoveSync();
          if (fVar1 < fVar19) {
            return false;
          }
        }
        else if (bVar12 != 1) {
          return bVar12 == 3;
        }
      }
    }
  }
  return true;
}

// IsCollisionMove @ 14bbc4690

bool __thiscall
UDS_SyncSendMove::IsCollisionMove(UDS_SyncSendMove *this,FDS_NetSyncData *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 in_register_00001284 [12];
  undefined1 auVar8 [16];
  
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_2;
  if (((param_1->StateFlags).Packed & 3) == 1) {
    dVar7 = (param_1->TransformValue).field0_0x0._s_0.Y;
    dVar1 = (param_1->PrevTransformValue).field0_0x0._s_0.Y;
    dVar2 = (param_1->TransformValue).field0_0x0._s_0.X;
    dVar3 = (param_1->PrevTransformValue).field0_0x0._s_0.X;
    auVar5._0_8_ = dVar2 * dVar2;
    auVar5._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar7 * dVar7 + auVar5._0_8_;
    auVar8 = sqrtpd(auVar6,auVar8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar1 * dVar1 + dVar3 * dVar3;
    auVar6 = sqrtpd(auVar5,auVar4);
    dVar7 = (auVar8._0_8_ - auVar6._0_8_) / (double)param_2;
    return (float)(double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
           (float)((uint)(param_1->AccelerationValue * __real_3f666666) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  return false;
}

// OnEnter @ 14bbc9080

void __thiscall UDS_SyncSendMove::OnEnter(UDS_SyncSendMove *this,FDS_NetSyncData *param_1)

{
  this->SendDeltaTick = 5.0;
  return;
}

// OnExit @ 14bbc96b0

void __thiscall UDS_SyncSendMove::OnExit(UDS_SyncSendMove *this,FDS_NetSyncData *param_1)

{
  return;
}

