// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ProcessError @ 14bc02900

bool __cdecl FDS_WorldBossService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return true;
}

// ReceiveWorldBossInfoNotify @ 14bc0bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WorldBossService::ReceiveWorldBossInfoNotify(ServerMessages *param_1)

{
  int iVar1;
  int iVar2;
  undefined3 uVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UDS_WorldBossManager *this;
  UDS_TimeUtilManager *pUVar7;
  FDS_WorldBossTableRow *this_00;
  UDS_LogManager *pUVar8;
  FDS_ZoneBaseTableRow *this_01;
  FDS_NpcBaseTableRow *this_02;
  FDS_StringWorldTableRow *this_03;
  FDS_TimeSchedulerTableRow *this_04;
  WorldBossInfoNotifyDefaultTypeInternal *pWVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auStackY_248 [32];
  uint uVar14;
  wchar_t *pwVar15;
  FDS_WorldBossStateInfo local_208;
  longlong local_1f0;
  longlong local_1e8;
  ServerMessageUnion local_1e0;
  FDS_WorldBossInfo local_1d8;
  longlong local_1b0;
  FDS_WorldBossStateInfo local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5334) {
    pWVar9 = *(WorldBossInfoNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pWVar9 = &server_msg::_WorldBossInfoNotify_default_instance_;
  }
  iVar1 = *(int *)&((Message *)((longlong)pWVar9 + 0x10))->field_0x8;
  local_1e0 = (ServerMessageUnion)pWVar9;
  this = UDS_WorldBossManager::GetInst();
  if ((this == (UDS_WorldBossManager *)0x0) || (((uint)this->_padding_ >> 0x1e & 1) != 0)) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes);
    pwVar15 = L"UDS_WorldBossManager is nullptr";
    uVar14 = 0x78;
  }
  else {
    pUVar7 = UDS_TimeUtilManager::GetInst();
    if ((pUVar7 != (UDS_TimeUtilManager *)0x0) && (((uint)pUVar7->_padding_ >> 0x1e & 1) == 0)) {
      UDS_TimeUtilManager::GetCurrentServerDateTime();
      dVar5 = __real_416312d000000000;
      dVar4 = __real_3fe0000000000000;
      if (iVar1 < 1) {
        return;
      }
      local_1e8 = 0;
      local_1b0 = (longlong)iVar1;
      do {
        uVar10 = *(ulonglong *)((longlong)pWVar9 + 0x10);
        if ((uVar10 & 1) != 0) {
          uVar10 = *(ulonglong *)(uVar10 + 7 + local_1e8 * 8);
        }
        iVar1 = *(int *)(uVar10 + 0x18);
        this_00 = FDS_WorldBossTableRow::GetRef((longlong)iVar1,true);
        bVar6 = FDS_WorldBossTableRow::IsValid(this_00);
        if (bVar6) {
          this_01 = FDS_ZoneBaseTableRow::GetRef((longlong)this_00->ID_ZoneBase,true);
          bVar6 = FDS_ZoneBaseTableRow::IsValid(this_01);
          if (bVar6) {
            this_02 = FDS_NpcBaseTableRow::GetRef((longlong)this_00->ID_NpcBase,true);
            bVar6 = FDS_NpcBaseTableRow::IsValid(this_02);
            if (bVar6) {
              this_03 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_01);
              bVar6 = FDS_StringWorldTableRow::IsValid(this_03);
              if (bVar6) {
                this_04 = FDS_TimeSchedulerTableRow::GetRef
                                    ((longlong)this_00->ID_SpawnSchedule,true);
                bVar6 = FDS_TimeSchedulerTableRow::IsValid(this_04);
                if (bVar6) {
                  local_1d8.NpcStringID = (int)(this_02->ID_NameSid).ID;
                  local_1d8.ZoneStringID = (int)this_03->ID;
                  local_1d8.DescStringID = (int)this_00->ID_DescSid;
                  local_1d8.ListIconID = this_00->ID_ListIcon;
                  local_1d8.SpawnScheduleID = this_04->ID;
                  local_1d8.DeleteAlarmTime_Seconds = (int)this_00->DeleteAlarmTime;
                  local_1d8.AppearAlarmTime_Seconds = (int)this_00->AlarmTime;
                  local_1d8.IslandNumber = this_00->IslandNumber;
                  local_1d8.BossID = iVar1;
                  UDS_WorldBossManager::UpdateWorldBossInfo(this,&local_1d8);
                  iVar2 = this_00->IslandNumber;
                  local_208.NextEventTime.Ticks = 0;
                  uVar3 = local_208._5_3_;
                  local_208._4_4_ = local_208._4_4_ & 0xffffff00;
                  local_208.BossID = iVar1;
                  if (*(char *)(uVar10 + 0x1c) == '\x01') {
                    local_208._5_3_ = uVar3;
                    local_208.Status = 3;
                    auVar13._0_8_ = (double)*(uint *)(uVar10 + 0x24) * dVar5 + dVar4;
                    auVar13._8_8_ = 0;
                    auVar12 = roundpd(extraout_XMM0,auVar13,1);
                    local_208.NextEventTime.Ticks = (longlong)auVar12._0_8_ + local_1f0;
                    dVar11 = (double)((float)*(int *)(uVar10 + 0x24) - this_00->DeleteAlarmTime);
                    UDS_WorldBossManager::UpdateWorldBossStateInfo(this,&local_208);
                    UDS_WorldBossManager::UpdateStateInfoMapByIslandNumber(this,iVar2,&local_208);
                    in_XMM1._8_8_ = 0;
                    in_XMM1._0_8_ = dVar11;
                    UDS_WorldBossManager::RegisterBossEventPostLoading(this,dVar11,iVar1);
                  }
                  else {
                    dVar11 = UDS_WorldBossManager::GetDisplayTime_Seconds(this,PreAppear,iVar1);
                    auVar12._8_8_ = 0;
                    auVar12._0_8_ = (double)*(uint *)(uVar10 + 0x20) * dVar5 + dVar4;
                    in_XMM1 = roundpd(in_XMM1,auVar12,1);
                    local_208.NextEventTime.Ticks = (longlong)in_XMM1._0_8_ + local_1f0;
                    if ((double)*(int *)(uVar10 + 0x20) <= dVar11) {
                      local_208.Status = 2;
                    }
                    else {
                      in_XMM1._8_8_ = 0;
                      in_XMM1._0_8_ = local_208._16_8_;
                      local_208.Status = 1;
                      local_1a8.IsExist = local_208.IsExist;
                      local_1a8._17_7_ = local_208._17_7_;
                      local_1a8.Status = Upcoming;
                      local_1a8.BossID = local_208.BossID;
                      local_1a8._5_3_ = local_208._5_3_;
                      local_1a8.NextEventTime.Ticks = local_208.NextEventTime.Ticks;
                      dVar11 = UDS_WorldBossManager::GetRateTime_Seconds(this,PreAppear,iVar1,0);
                      UDS_WorldBossManager::RemoveAlarmTimer(this,iVar1,PreAppear);
                      UDS_WorldBossManager::SetAlarmTimer
                                (this,PreAppear,&local_1a8,(double)(int)dVar11);
                    }
                    UDS_WorldBossManager::UpdateWorldBossStateInfo(this,&local_208);
                    UDS_WorldBossManager::UpdateStateInfoMapByIslandNumber(this,iVar2,&local_208);
                  }
                }
                else {
                  pUVar8 = UDS_LogManager::GetInst();
                  if (pUVar8 != (UDS_LogManager *)0x0) {
                    pUVar8 = UDS_LogManager::GetInst();
                    local_188._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,
                               Yes);
                    pwVar15 = L"[ID_SpawnSchedule : %d] FDS_TimeSchedulerTableRow is InValid";
                    uVar14 = 0xab;
                    goto LAB_14bc0bfbc;
                  }
                }
              }
              else {
                pUVar8 = UDS_LogManager::GetInst();
                if (pUVar8 != (UDS_LogManager *)0x0) {
                  pUVar8 = UDS_LogManager::GetInst();
                  local_188._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes)
                  ;
                  pwVar15 = L"[Zone ID : %d] FDS_StringWorldTableRow is InValid";
                  uVar14 = 0xa4;
                  goto LAB_14bc0bfbc;
                }
              }
            }
            else {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_188._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes);
                pwVar15 = L"[ID_NpcBase : %d] FDS_NpcBaseTableRow is InValid";
                uVar14 = 0x9d;
LAB_14bc0bfbc:
                UDS_LogManager::PrintLog(pUVar8,1,Warning,local_188.Ptr,uVar14,pwVar15);
                if ((void *)local_188._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_188._padding_);
                }
              }
            }
          }
          else {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_188._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_188.Ptr,0x96,
                         L"[ID_ZoneBase : %d] FDS_ZoneBaseTableRow is InValid");
              if ((void *)local_188._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_188._padding_);
              }
            }
          }
        }
        else {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_188._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_188.Ptr,0x8f,
                       L"[worldBossID : %d] FDS_WorldBossTableRow is InValid");
            if ((void *)local_188._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_188._padding_);
            }
          }
        }
        local_1e8 = local_1e8 + 1;
        pWVar9 = (WorldBossInfoNotifyDefaultTypeInternal *)local_1e0;
        if (local_1b0 <= local_1e8) {
          return;
        }
      } while( true );
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"FDS_WorldBossService::ReceiveWorldBossInfoNotify",0x30,Yes);
    pwVar15 = L"UDS_TimeUtilManager is nullptr";
    uVar14 = 0x7f;
  }
  UDS_LogManager::PrintLog(pUVar8,1,Warning,local_188.Ptr,uVar14,pwVar15);
  if ((void *)local_188._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_188._padding_);
  }
  return;
}

// ReceiveWorldBossNotify @ 14bc0c3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_WorldBossService::ReceiveWorldBossNotify(ServerMessages *param_1)

{
  EDS_WorldBossNotifyType EVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  WorldBossNotifyDefaultTypeInternal *pWVar6;
  FDS_WorldBossTableRow *this;
  UDS_LogManager *pUVar7;
  UDS_WorldBossManager *this_00;
  UDS_TimeUtilManager *pUVar8;
  WorldBossNotifyData *pWVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auStackY_1e8 [32];
  uint uVar19;
  wchar_t *pwVar20;
  longlong local_1a8;
  uint uStack_19c;
  longlong lStack_198;
  FDS_WorldBossStateInfo local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  uVar19 = uStack_19c;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((param_1->_impl_)._oneof_case_[0] == 0x5335) {
    pWVar6 = *(WorldBossNotifyDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pWVar6 = &server_msg::_WorldBossNotify_default_instance_;
  }
  pWVar9 = &server_msg::_WorldBossNotifyData_default_instance_._instance;
  if (*(WorldBossNotifyData **)&((Message *)((longlong)pWVar6 + 0x10))->field_0x8 !=
      (WorldBossNotifyData *)0x0) {
    pWVar9 = *(WorldBossNotifyData **)&((Message *)((longlong)pWVar6 + 0x10))->field_0x8;
  }
  iVar2 = (pWVar9->_impl_).world_boss_table_id_;
  EVar1 = (EDS_WorldBossNotifyType)(pWVar9->_impl_).notify_type_;
  this = FDS_WorldBossTableRow::GetRef((longlong)iVar2,true);
  bVar5 = FDS_WorldBossTableRow::IsValid(this);
  if (bVar5) {
    this_00 = UDS_WorldBossManager::GetInst();
    if ((this_00 == (UDS_WorldBossManager *)0x0) || (((uint)this_00->_padding_ >> 0x1e & 1) != 0)) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_WorldBossService::ReceiveWorldBossNotify",0x2c,Yes);
      pwVar20 = L"UDS_WorldBossManager is nullptr";
      uVar19 = 0x33;
    }
    else {
      pUVar8 = UDS_TimeUtilManager::GetInst();
      if ((pUVar8 != (UDS_TimeUtilManager *)0x0) && (((uint)pUVar8->_padding_ >> 0x1e & 1) == 0)) {
        UDS_TimeUtilManager::GetCurrentServerDateTime();
        uStack_19c = uStack_19c & 0xffffff00;
        uVar4 = uStack_19c;
        lStack_198 = 0;
        auVar13._0_8_ = UDS_WorldBossManager::GetDisplayTime_Seconds(this_00,PreAppear,iVar2);
        auVar13._8_8_ = extraout_XMM0_Qb;
        uVar10 = (undefined4)__real_bff0000000000000;
        uVar16 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        uStack_19c._1_3_ = SUB43(uVar19,1);
        if (EVar1 == Appear) {
          iVar3 = (pWVar9->_impl_).left_time_sec_;
          uStack_19c = CONCAT31(uStack_19c._1_3_,3);
          auVar18._0_8_ = (double)iVar3 * __real_416312d000000000 + __real_3fe0000000000000;
          auVar18._8_8_ = 0;
          auVar13 = roundpd(auVar13,auVar18,1);
          lStack_198 = (longlong)auVar13._0_8_ + local_1a8;
          dVar11 = UDS_WorldBossManager::GetRateTime_Seconds(this_00,PreDisAppear,iVar2,iVar3);
          uVar10 = SUB84(dVar11,0);
          uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uVar4 = uStack_19c;
        }
        else if (EVar1 == DisAppear) {
          dVar11 = UDS_WorldBossManager::GetRateTime_Seconds(this_00,PreAppear,iVar2,0);
          uVar10 = SUB84(dVar11,0);
          uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uStack_19c = CONCAT31(uStack_19c._1_3_,1);
          auVar14._8_8_ = 0;
          auVar14._0_8_ = dVar11 * __real_416312d000000000 + __real_3fe0000000000000;
          auVar18 = roundpd(in_XMM4,auVar14,1);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auVar13._0_8_ * __real_416312d000000000 + __real_3fe0000000000000;
          auVar13 = roundpd(auVar15,auVar15,1);
          lStack_198 = (longlong)auVar18._0_8_ + (longlong)auVar13._0_8_ + local_1a8;
          uVar4 = uStack_19c;
        }
        else if (EVar1 == Dead) {
          dVar11 = UDS_WorldBossManager::GetRateTime_Seconds(this_00,PreAppear,iVar2,0);
          uVar10 = SUB84(dVar11,0);
          uVar16 = (undefined4)((ulonglong)dVar11 >> 0x20);
          uStack_19c = CONCAT31(uStack_19c._1_3_,1);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar13._0_8_ * __real_416312d000000000 + __real_3fe0000000000000;
          auVar13 = roundpd(auVar12,auVar12,1);
          auVar17._8_8_ = 0;
          auVar17._0_8_ = dVar11 * __real_416312d000000000 + __real_3fe0000000000000;
          auVar18 = roundpd(in_XMM5,auVar17,1);
          lStack_198 = (longlong)auVar18._0_8_ + (longlong)auVar13._0_8_ + local_1a8;
          uVar4 = uStack_19c;
        }
        uStack_19c = uVar4;
        local_188._4_4_ = uStack_19c;
        local_188.BossID = iVar2;
        local_188.NextEventTime.Ticks = lStack_198;
        UDS_WorldBossManager::ProcessBossEvent
                  (this_00,EVar1,&local_188,(int)(double)CONCAT44(uVar16,uVar10));
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"FDS_WorldBossService::ReceiveWorldBossNotify",0x2c,Yes);
      pwVar20 = L"UDS_TimeUtilManager is nullptr";
      uVar19 = 0x3a;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar19,pwVar20);
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FDS_WorldBossService::ReceiveWorldBossNotify",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_168.Ptr,0x2c,
               L"[worldBossID : %d] FDS_WorldBossTableRow is InValid");
  }
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return;
}

