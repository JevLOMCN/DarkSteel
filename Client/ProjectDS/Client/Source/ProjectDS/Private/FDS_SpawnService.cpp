// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// AdjustSpawnTransform @ 14bbecc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_SpawnService::AdjustSpawnTransform
          (TTransform<double> *param_1,TVector<double> *param_2,float *param_3,float *param_4,
          bool *param_5)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  TQuat<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TVector<double>_u_0 local_a8;
  TRotator<double> local_90;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58 [2];
  
  local_58[0].Z = (param_2->field0_0x0)._s_0.Z;
  uVar7 = *(undefined4 *)&param_2->field0_0x0;
  uVar8 = *(uint *)((longlong)&param_2->field0_0x0 + 4);
  uVar9 = *(uint *)((longlong)&param_2->field0_0x0 + 8);
  uVar10 = *(uint *)((longlong)&param_2->field0_0x0 + 0xc);
  if (*param_5 == true) {
    local_78._0_4_ = uVar7;
    local_78._4_4_ = uVar8;
    local_78._8_4_ = uVar9;
    local_78._12_4_ = uVar10;
    local_78._s_0.Z = local_58[0].Z;
    DS_Util::GetNPCFloorLocationByLocation
              ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_78._s_0,__real_43160000,
               false);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44(local_a8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_a8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44(local_a8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_a8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_a8._16_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_a8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
    {
      local_58[0].Z = local_a8._s_0.Z;
      uVar7 = local_a8._0_4_;
      uVar8 = local_a8._4_4_;
      uVar9 = local_a8._8_4_;
      uVar10 = local_a8._12_4_;
    }
  }
  local_90.Yaw = (double)*param_4;
  dVar1 = (double)*param_3 + local_58[0].Z;
  local_90.Pitch = 0.0;
  local_90.Roll = 0.0;
  pTVar6 = UE::Math::TRotator<double>::Quaternion(&local_90,local_58);
  uVar2 = *(undefined4 *)&pTVar6->Y;
  uVar3 = *(undefined4 *)((longlong)&pTVar6->Y + 4);
  dVar4 = pTVar6->Z;
  dVar5 = pTVar6->W;
  (param_1->Rotation).XY.m128d_f64[0] = pTVar6->X;
  *(undefined4 *)((param_1->Rotation).XY.m128d_f64 + 1) = uVar2;
  *(undefined4 *)((longlong)(param_1->Rotation).XY.m128d_f64 + 0xc) = uVar3;
  (param_1->Rotation).ZW.m128d_f64[0] = dVar4;
  (param_1->Rotation).ZW.m128d_f64[1] = dVar5;
  (param_1->Translation).XY.m128d_f64[0] = (double)CONCAT44(uVar8,uVar7);
  *(undefined4 *)((param_1->Translation).XY.m128d_f64 + 1) = uVar9;
  *(undefined4 *)((longlong)(param_1->Translation).XY.m128d_f64 + 0xc) = uVar10;
  (param_1->Translation).ZW.m128d_f64[0] = dVar1;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (param_1->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (param_1->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (param_1->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (param_1->Scale3D).ZW.m128d_f64[1] = dVar1;
  return;
}

// OnSpawnInit_Character @ 14bbfc170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FDS_SpawnService::OnSpawnInit_Character(FDS_SpawnInfo *param_1,SpawnCharacterResponse *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  void *pvVar4;
  VectorF *pVVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  UDS_DataManager *pUVar16;
  UDS_LogManager *pUVar17;
  UDS_PlayerData *this;
  UDS_CharData *this_00;
  UDS_CustomizeData *this_01;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar18;
  UDS_CharInfoData *this_02;
  UDS_CharStatusData *this_03;
  UDS_PKDataSet *this_04;
  VectorF *pVVar19;
  UObject *pUVar20;
  UObject *pUVar21;
  TQuat<double> *pTVar22;
  undefined1 auStackY_268 [32];
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  TRotator<double> local_208 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1c8;
  TQuat<double> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pUVar16 = UDS_DataManager::GetInst();
  if (pUVar16 == (UDS_DataManager *)0x0) {
    pUVar17 = UDS_LogManager::GetInst();
    if (pUVar17 != (UDS_LogManager *)0x0) {
      pUVar17 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"FDS_SpawnService::OnSpawnInit_Character",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar17,1,Warning,local_188.Ptr,0xb0,L"dataMng is nullptr.");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_230,(param_2->_impl_).player_entity_,false);
    bVar15 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_230,(void *)0x0);
    if (bVar15) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181666212193500998>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                          ,0xba,"false");
      if (bVar15) {
code_r0x00014bbfc3f3:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      this = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_230);
      UDS_PlayerData::SetDataBySpawnCharacterResponse(this,param_2);
      UDS_CharData::GetData((ulong64)&local_238);
      bVar15 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_238,(void *)0x0);
      if (bVar15) {
        bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181666212193500993>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                            ,0xbf,"false");
        if (bVar15) goto code_r0x00014bbfc3f3;
      }
      else {
        this_00 = (UDS_CharData *)FWeakObjectPtr::Get(&local_238);
        UDS_CharData::SetDataBySpawnCharacterResponse(this_00,param_2);
        UDS_CharInfoData::GetData((ulong64)&local_220);
        bVar15 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                           ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_220,
                            (void *)0x0);
        if (bVar15) {
          bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_9181666212193500987>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                              ,0xc5,"false");
          if (bVar15) goto code_r0x00014bbfc3f3;
        }
        else {
          UDS_CharStatusData::GetData((ulong64)&local_218);
          bVar15 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                             ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_218,
                              (void *)0x0);
          if (bVar15) {
            bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_9181666212193500984>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                                ,200,"false");
            if (bVar15) goto code_r0x00014bbfc3f3;
          }
          else {
            TDS_DataSetGetter<UDS_PKDataSet>::Get((ulong64)&local_210);
            bVar15 = TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr> *)&local_210,
                                (void *)0x0);
            if (bVar15) {
              bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_9181666212193500981>,false,
                                  "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                                  ,0xcb,"false");
              if (bVar15) goto code_r0x00014bbfc3f3;
            }
            else {
              UDS_CustomizeData::GetData((ulong64)&local_228,param_1->EntityID,false);
              bVar15 = TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr>::UEOpEquals
                                 ((TWeakObjectPtr<UDS_CustomizeData,FWeakObjectPtr> *)&local_228,
                                  (void *)0x0);
              if (!bVar15) {
                pvVar4 = (param_2->_impl_).custom_info_.tagged_ptr_.ptr_;
                this_01 = (UDS_CustomizeData *)FWeakObjectPtr::Get(&local_228);
                pbVar18 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    (&local_1c8,
                                     (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)((ulonglong)pvVar4 & 0xfffffffffffffffc));
                UDS_CustomizeData::SetCustomInfo(this_01,pbVar18);
              }
              this_02 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_220);
              UDS_CharInfoData::SetDataBySpawnCharacterResponse(this_02,param_2);
              this_03 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_218);
              UDS_CharStatusData::UpdateSpawnCharacterResponse(this_03,param_2);
              this_04 = (UDS_PKDataSet *)FWeakObjectPtr::Get(&local_210);
              UDS_PKDataSet::UpdateSpawnCharacterResponse(this_04,param_2);
              pVVar5 = (param_2->_impl_).direction_;
              pVVar19 = &_VectorF_default_instance_._instance;
              if (pVVar5 != (VectorF *)0x0) {
                pVVar19 = pVVar5;
              }
              fVar1 = (pVVar19->_impl_).y_;
              pUVar20 = FWeakObjectPtr::Get(&local_238);
              pUVar21 = FWeakObjectPtr::Get(&local_230);
              fVar2 = *(float *)&pUVar20[4].field_0x8;
              dVar3 = *(double *)&pUVar21[7].field_0x10;
              uVar7 = *(undefined4 *)(pUVar21 + 7);
              uVar8 = *(undefined4 *)&pUVar21[7].field_0x4;
              uVar9 = *(undefined4 *)&pUVar21[7].field_0x8;
              uVar10 = *(undefined4 *)&pUVar21[7].field_0xc;
              local_208[0].Yaw = (double)fVar1;
              local_208[0].Pitch = 0.0;
              local_208[0].Roll = 0.0;
              pTVar22 = UE::Math::TRotator<double>::Quaternion(local_208,&local_1a8);
              dVar13 = pTVar22->Z;
              dVar14 = pTVar22->W;
              uVar11 = *(undefined4 *)&pTVar22->Y;
              uVar12 = *(undefined4 *)((longlong)&pTVar22->Y + 4);
              (param_1->SpawnTransform).Rotation.XY.m128d_f64[0] = pTVar22->X;
              *(undefined4 *)((param_1->SpawnTransform).Rotation.XY.m128d_f64 + 1) = uVar11;
              *(undefined4 *)((longlong)(param_1->SpawnTransform).Rotation.XY.m128d_f64 + 0xc) =
                   uVar12;
              (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar13;
              (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar14;
              *(undefined4 *)(param_1->SpawnTransform).Translation.XY.m128d_f64 = uVar7;
              *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 4) =
                   uVar8;
              *(undefined4 *)((param_1->SpawnTransform).Translation.XY.m128d_f64 + 1) = uVar9;
              *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 0xc) =
                   uVar10;
              (param_1->SpawnTransform).Translation.ZW.m128d_f64[0] = (double)fVar2 + dVar3;
              (param_1->SpawnTransform).Translation.ZW.m128d_f64[1] = 0.0;
              dVar3 = _UNK_150689688;
              (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0] =
                   ___xmm_3ff00000000000003ff0000000000000;
              (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar3;
              dVar3 = _UNK_150689518;
              (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0] =
                   ___xmm_00000000000000003ff0000000000000;
              (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
            }
          }
        }
      }
    }
  }
  return;
}

// OnSpawnInit_NPC @ 14bbfc5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_SpawnService::OnSpawnInit_NPC(FDS_SpawnInfo *param_1,SpawnNpcResponse *param_2)

{
  undefined1 *puVar1;
  NpcData *pNVar2;
  CampInfo *pCVar3;
  RiderStatus *pRVar4;
  Vector *pVVar5;
  VectorF *pVVar6;
  code *pcVar7;
  void *pvVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  NpcData *pNVar11;
  FDS_NpcBaseTableRow *pFVar12;
  UDS_LogManager *pUVar13;
  UDS_InteractionDataSet *this;
  UObject *pUVar14;
  UDS_EntityData *this_00;
  UDS_CharInfoData *this_01;
  UDS_CharStatusData *this_02;
  UDS_NPCCampData *this_03;
  UDS_NPCMountData *this_04;
  VectorF *pVVar15;
  UObject *pUVar16;
  void *pvVar17;
  uchar *puVar18;
  ulong64 uVar19;
  CampInfo *pCVar20;
  RiderStatus *pRVar21;
  Vector *pVVar22;
  undefined1 *puVar23;
  undefined1 auStackY_298 [32];
  EDS_AbilityDeactivateType local_258;
  bool local_257 [7];
  FWeakObjectPtr local_250;
  float local_248 [2];
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FString local_1f8;
  FString local_1e8;
  ulong64 local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  _Bxty local_1a0;
  undefined8 local_190;
  ulonglong uStack_188;
  _Bxty local_180;
  undefined8 local_170;
  ulonglong uStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pNVar2 = (param_2->_impl_).npc_data_;
  pNVar11 = &server_msg::_NpcData_default_instance_._instance;
  if (pNVar2 != (NpcData *)0x0) {
    pNVar11 = pNVar2;
  }
  pFVar12 = FDS_NpcBaseTableRow::Get((longlong)(pNVar11->_impl_).npc_id_,true);
  if (pFVar12 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    local_158._padding_ = (longlong)pFVar12;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_SpawnService::OnSpawnInit_NPC",0x21,Yes);
    UDS_LogManager::PrintLog
              (pUVar13,1,Warning,local_158.Ptr,0x14a,L"npcBaseTableRow is nullptr. npcID : %d");
    if ((FDS_NpcBaseTableRow *)local_158._padding_ == (FDS_NpcBaseTableRow *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  if (0 < (pFVar12->ID_Interaction).ArrayNum) {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_228);
    bVar10 = FWeakObjectPtr::IsValid(&local_228);
    if (bVar10) {
      this = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_228);
      UDS_InteractionDataSet::SetNpcInteraction(this);
    }
  }
  UDS_CharData::GetData((ulong64)&local_238);
  bVar10 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_238,(void *)0x0);
  if (!bVar10) {
    UDS_CharInfoData::GetData((ulong64)&local_230);
    bVar10 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_230,(void *)0x0);
    if (bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181666212193500835>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                          ,0x15d,"false");
      if (!bVar10) {
        return;
      }
      goto code_r0x00014bbfccec;
    }
    UDS_CharStatusData::GetData((ulong64)&local_220);
    bVar10 = TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> *)&local_220,(void *)0x0)
    ;
    if (bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181666212193500832>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                          ,0x160,"false");
      if (!bVar10) {
        return;
      }
      goto code_r0x00014bbfccec;
    }
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_240);
    bVar10 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_240,(void *)0x0);
    if (bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_9181666212193500829>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                          ,0x163,"false");
      if (!bVar10) {
        return;
      }
      goto code_r0x00014bbfccec;
    }
    if (((param_2->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_1a0,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(param_2->_impl_).nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc));
      pUVar14 = FWeakObjectPtr::Get(&local_240);
      puVar18 = (uchar *)((ulonglong)(param_2->_impl_).nick_name_.tagged_ptr_.ptr_ &
                         0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(puVar18 + 0x18)) {
        puVar18 = *(uchar **)puVar18;
      }
      ::FString::FString(&local_1f8,puVar18);
      FVar9.Data = local_1f8.Data.AllocatorInstance.Data;
      puVar23 = &pUVar14[5].field_0x8;
      if ((FString *)puVar23 != &local_1f8) {
        puVar1 = &pUVar14[5].field_0x14;
        *(int *)&pUVar14[5].field_0x10 = local_1f8.Data.ArrayNum;
        if ((local_1f8.Data.ArrayNum == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1f8.Data.ArrayNum,*(int *)puVar1,(ForAnyElementType *)puVar23,
                     local_1f8.Data.ArrayNum,(int *)puVar1);
          if (local_1f8.Data.ArrayNum != 0) {
            memcpy(*(void **)puVar23,FVar9.Data,(longlong)local_1f8.Data.ArrayNum * 2);
          }
        }
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (0xf < uStack_188) {
        pvVar8 = (void *)CONCAT71(local_1a0._1_7_,local_1a0._Buf[0]);
        uVar19 = uStack_188 + 1;
        pvVar17 = pvVar8;
        if (0xfff < uVar19) {
          pvVar17 = *(void **)((longlong)pvVar8 + -8);
          uVar19 = uStack_188 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar17))) goto LAB_14bbfca3a;
        }
        ::operator_delete(pvVar17,uVar19);
      }
      local_190 = ___xmm_000000000000000f0000000000000000;
      uStack_188 = _UNK_15076add8;
      local_1a0._Buf[0] = '\0';
    }
    if (((param_2->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_180,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(param_2->_impl_).owner_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                 ));
      pUVar14 = FWeakObjectPtr::Get(&local_240);
      puVar18 = (uchar *)((ulonglong)(param_2->_impl_).owner_nickname_.tagged_ptr_.ptr_ &
                         0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(puVar18 + 0x18)) {
        puVar18 = *(uchar **)puVar18;
      }
      ::FString::FString(&local_1e8,puVar18);
      FVar9.Data = local_1e8.Data.AllocatorInstance.Data;
      puVar23 = &pUVar14[5].field_0x18;
      if ((FString *)puVar23 != &local_1e8) {
        puVar1 = &pUVar14[5].field_0x24;
        *(int *)&pUVar14[5].field_0x20 = local_1e8.Data.ArrayNum;
        if ((local_1e8.Data.ArrayNum == 0) && (*(int *)puVar1 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1e8.Data.ArrayNum,*(int *)puVar1,(ForAnyElementType *)puVar23,
                     local_1e8.Data.ArrayNum,(int *)puVar1);
          if (local_1e8.Data.ArrayNum != 0) {
            memcpy(*(void **)puVar23,FVar9.Data,(longlong)local_1e8.Data.ArrayNum * 2);
          }
        }
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (0xf < uStack_168) {
        pvVar8 = (void *)CONCAT71(local_180._1_7_,local_180._Buf[0]);
        uVar19 = uStack_168 + 1;
        pvVar17 = pvVar8;
        if (0xfff < uVar19) {
          pvVar17 = *(void **)((longlong)pvVar8 + -8);
          uVar19 = uStack_168 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar17))) {
LAB_14bbfca3a:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete(pvVar17,uVar19);
      }
      local_170 = ___xmm_000000000000000f0000000000000000;
      uStack_168 = _UNK_15076add8;
      local_180._Buf[0] = '\0';
    }
    this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_238);
    UDS_EntityData::SetMoveMode(this_00,(EDS_MoveMode)(param_2->_impl_).move_mode_);
    this_01 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_230);
    UDS_CharInfoData::SetDataBySpawnNpcResponse(this_01,param_2);
    this_02 = (UDS_CharStatusData *)FWeakObjectPtr::Get(&local_220);
    UDS_CharStatusData::UpdateSpawnNpcResponse(this_02,param_2);
    if (0 < pFVar12->ID_NpcBattle) {
      UDS_NPCBattleData::GetData((ulong64)&local_250);
      bVar10 = TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_NPCBattleData,FWeakObjectPtr> *)&local_250,(void *)0x0
                         );
      if (bVar10) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181666212193500805>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                            ,0x17b,"false");
        if (!bVar10) {
          return;
        }
        goto code_r0x00014bbfccec;
      }
      pUVar14 = FWeakObjectPtr::Get(&local_250);
      pUVar14[2].field_0x11 = (param_2->_impl_).is_lapidification_;
      pUVar14 = FWeakObjectPtr::Get(&local_250);
      pUVar14[2].field_0x12 = (param_2->_impl_).is_new_;
      pUVar14 = FWeakObjectPtr::Get(&local_250);
      *(int *)&pUVar14[2].field_0x14 = (param_2->_impl_).collide_block_defence_point_;
    }
    if (((param_2->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) {
      UDS_NPCCampData::GetData((ulong64)&local_218);
      bVar10 = TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> *)&local_218,(void *)0x0);
      if (bVar10) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181666212193500794>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                            ,0x186,"false");
        if (!bVar10) {
          return;
        }
        goto code_r0x00014bbfccec;
      }
      this_03 = (UDS_NPCCampData *)FWeakObjectPtr::Get(&local_218);
      pCVar3 = (param_2->_impl_).camp_info_;
      pCVar20 = &server_msg::_CampInfo_default_instance_._instance;
      if (pCVar3 != (CampInfo *)0x0) {
        pCVar20 = pCVar3;
      }
      UDS_NPCCampData::UpdateByCampInfo(this_03,pCVar20);
      UDS_PlayerData::GetDataByPlayerUID((long64)&local_210);
      bVar10 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_210,(void *)0x0);
      if (bVar10) {
        return;
      }
      FWeakObjectPtr::Get(&local_210);
      local_1d8 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      local_258 = Success;
      UDS_PlayerSkillAbility_InstallCampCasting::Deactivate(&local_1d8,&local_258);
    }
    if (((param_2->_impl_)._has_bits_.has_bits_[0] & 0x800) != 0) {
      UDS_NPCMountData::GetData((ulong64)&local_208);
      bVar10 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_208,(void *)0x0)
      ;
      if (bVar10) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181666212193500775>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                            ,0x199,"false");
        if (!bVar10) {
          return;
        }
        goto code_r0x00014bbfccec;
      }
      this_04 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_208);
      pRVar4 = (param_2->_impl_).rider_info_;
      pRVar21 = &server_msg::_RiderStatus_default_instance_._instance;
      if (pRVar4 != (RiderStatus *)0x0) {
        pRVar21 = pRVar4;
      }
      UDS_NPCMountData::UpdateByRiderInfo(this_04,pRVar21,false);
    }
    if (((param_2->_impl_)._has_bits_.has_bits_[0] & 0x2000) != 0) {
      UDS_NPCObjectHandlingData::GetData((ulong64)&local_200);
      bVar10 = TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr> *)&local_200,
                          (void *)0x0);
      if (bVar10) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9181666212193500767>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                            ,0x1a1,"false");
        if (!bVar10) {
          return;
        }
        goto code_r0x00014bbfccec;
      }
      pVVar5 = (param_2->_impl_).handling_npc_spawn_position_;
      local_1d0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1d0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pVVar22 = &_Vector_default_instance_._instance;
      if (pVVar5 != (Vector *)0x0) {
        pVVar22 = pVVar5;
      }
      local_1d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      DS_Util::SetFVector((TVector<double> *)&local_1d0._s_0,pVVar22);
      pUVar14 = FWeakObjectPtr::Get(&local_200);
      *(double *)&pUVar14[2].field_0x8 = local_1d0._s_0.X;
      *(double *)&pUVar14[2].field_0x10 = local_1d0._s_0.Y;
      *(double *)&pUVar14[2].field_0x18 = local_1d0._s_0.Z;
    }
    local_257[0] = (bool)(~(byte)((param_2->_impl_)._has_bits_.has_bits_[0] >> 5) & 1);
    pNVar2 = (param_2->_impl_).npc_data_;
    pNVar11 = &server_msg::_NpcData_default_instance_._instance;
    if (pNVar2 != (NpcData *)0x0) {
      pNVar11 = pNVar2;
    }
    pVVar6 = (pNVar11->_impl_).direction_;
    pVVar15 = &_VectorF_default_instance_._instance;
    if (pVVar6 != (VectorF *)0x0) {
      pVVar15 = pVVar6;
    }
    local_248[0] = (pVVar15->_impl_).y_;
    pUVar14 = FWeakObjectPtr::Get(&local_238);
    pUVar16 = FWeakObjectPtr::Get(&local_230);
    local_1b8._s_0.X = (double)*(undefined8 *)&pUVar16[0xe].field_0x18;
    local_1b8._s_0.Y = (double)*(undefined8 *)&pUVar16[0xe].field_0x20;
    local_1b8._s_0.Z = (double)*(undefined8 *)(pUVar16 + 0xf);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_1b8._s_0,
               (float *)&pUVar14[4].field_0x8,local_248,local_257);
    return;
  }
  bVar10 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_9181666212193500838>,false,
                      "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                      ,0x15a,"false");
  if (!bVar10) {
    return;
  }
code_r0x00014bbfccec:
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// OnSpawnInit_Stuff @ 14bbfce10

void __cdecl FDS_SpawnService::OnSpawnInit_Stuff(FDS_SpawnInfo *param_1,SpawnStuffResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  UDS_StuffGatherData *this;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res10 [2];
  FWeakObjectPtr local_res18;
  TVector<double>_u_0 local_28;
  
  OnSpawnInit_StuffBase(param_1->EntityID,(param_2->_impl_).stuff_id_);
  UDS_StuffGatherData::GetData((ulong64)&local_res18);
  bVar4 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_res18,(void *)0x0)
  ;
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181666212193500536>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                       ,0x288,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res18);
    UDS_StuffGatherData::SetDataBySpawnStuffResponse(this,param_2);
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = (param_2->_impl_).stuff_spawn_type_ == 0;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res10[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res10,local_res8);
  }
  return;
}

// OnSpawnInit_StuffBase @ 14bbfcf40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_SpawnService::OnSpawnInit_StuffBase(ulong64 param_1,int param_2)

{
  bool bVar1;
  FDS_StuffBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_InteractionDataSet *this;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar2 = FDS_StuffBaseTableRow::Get((longlong)param_2,true);
  if (pFVar2 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_SpawnService::OnSpawnInit_StuffBase",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x3d0,L"stuffBaseTableRow is nullptr. stuffID : %d")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (0 < (pFVar2->ID_Interaction).ArrayNum) {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_148);
    bVar1 = FWeakObjectPtr::IsValid(local_148);
    if (bVar1) {
      this = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_148);
      UDS_InteractionDataSet::SetStuffInteraction(this);
    }
  }
  return;
}

// OnSpawnInit_StuffPortal @ 14bbfd060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_SpawnService::OnSpawnInit_StuffPortal(FDS_SpawnInfo *param_1,SpawnStuffPortalResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  bool bVar13;
  UDS_StuffPortalData *pUVar14;
  TQuat<double> *pTVar15;
  VectorF *pVVar16;
  UObject *pUVar17;
  Vector *pVVar18;
  bool local_res8 [8];
  float local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  TVector<double>_u_0 local_b8;
  TRotator<double> local_a0 [2];
  TQuat<double> local_68 [2];
  
  OnSpawnInit_StuffBase(param_1->EntityID,(param_2->_impl_).stuff_id_);
  UDS_StuffPortalData::GetData((ulong64)local_res18);
  bVar13 = TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> *)local_res18,(void *)0x0)
  ;
  if (bVar13) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181666212193500387>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                        ,0x31d,"false");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar14 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res18);
    UDS_StuffPortalData::SetDataBySpawnStuffPortalResponse(pUVar14,param_2);
    pVVar1 = (param_2->_impl_).position_;
    local_b8._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    local_b8._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    pVVar18 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar18 = pVVar1;
    }
    local_b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_b8._s_0,pVVar18);
    pUVar14 = (UDS_StuffPortalData *)FWeakObjectPtr::Get(local_res18);
    bVar13 = UDS_StuffPortalData::IsInn(pUVar14);
    uVar12 = local_b8._s_0.Z;
    pVVar2 = (param_2->_impl_).direction_;
    if (bVar13) {
      uVar8 = local_b8._0_4_;
      uVar9 = local_b8._4_4_;
      uVar10 = local_b8._8_4_;
      uVar11 = local_b8._12_4_;
      pVVar16 = &_VectorF_default_instance_._instance;
      if (pVVar2 != (VectorF *)0x0) {
        pVVar16 = pVVar2;
      }
      local_a0[0].Yaw = (double)(pVVar16->_impl_).y_;
      local_a0[0].Pitch = 0.0;
      local_a0[0].Roll = 0.0;
      pTVar15 = UE::Math::TRotator<double>::Quaternion(local_a0,local_68);
      dVar6 = pTVar15->Z;
      dVar7 = pTVar15->W;
      uVar4 = *(undefined4 *)&pTVar15->Y;
      uVar5 = *(undefined4 *)((longlong)&pTVar15->Y + 4);
      (param_1->SpawnTransform).Rotation.XY.m128d_f64[0] = pTVar15->X;
      *(undefined4 *)((param_1->SpawnTransform).Rotation.XY.m128d_f64 + 1) = uVar4;
      *(undefined4 *)((longlong)(param_1->SpawnTransform).Rotation.XY.m128d_f64 + 0xc) = uVar5;
      (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar6;
      (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar7;
      *(undefined4 *)(param_1->SpawnTransform).Translation.XY.m128d_f64 = uVar8;
      *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 4) = uVar9;
      *(undefined4 *)((param_1->SpawnTransform).Translation.XY.m128d_f64 + 1) = uVar10;
      *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 0xc) = uVar11;
      (param_1->SpawnTransform).Translation.ZW.m128d_f64[0] = (double)uVar12;
      (param_1->SpawnTransform).Translation.ZW.m128d_f64[1] = 0.0;
      dVar6 = _UNK_150689688;
      (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar6;
      dVar6 = _UNK_150689518;
      (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
      return;
    }
    local_res8[0] = true;
    pVVar16 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar16 = pVVar2;
    }
    local_res10[0] = (pVVar16->_impl_).y_;
    pUVar17 = FWeakObjectPtr::Get(local_res18);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_b8._s_0,
               (float *)&pUVar17[4].field_0x8,local_res10,local_res8);
  }
  return;
}

// OnSpawnInit_StuffQuest @ 14bbfd270

void __cdecl
FDS_SpawnService::OnSpawnInit_StuffQuest(FDS_SpawnInfo *param_1,SpawnStuffQuestResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res10 [2];
  FWeakObjectPtr local_res18;
  TVector<double>_u_0 local_28;
  
  OnSpawnInit_StuffBase(param_1->EntityID,(param_2->_impl_).stuff_id_);
  UDS_StuffQuestData::GetData((ulong64)&local_res18);
  bVar4 = TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffQuestData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181666212193500226>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                       ,0x3be,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = true;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res10[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res10,local_res8);
  }
  return;
}

// OnSpawnInit_StuffQuestBoard @ 14bbfd380

void __cdecl
FDS_SpawnService::OnSpawnInit_StuffQuestBoard
          (FDS_SpawnInfo *param_1,SpawnStuffQuestBoardResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res10 [2];
  FWeakObjectPtr local_res18;
  TVector<double>_u_0 local_28;
  
  OnSpawnInit_StuffBase(param_1->EntityID,(param_2->_impl_).stuff_id_);
  UDS_StuffQuestBoardData::GetData((ulong64)&local_res18);
  bVar4 = TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181666212193500296>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                       ,0x378,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = true;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res10[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res10,local_res8);
  }
  return;
}

// OnSpawnInit_StuffWarpDevice @ 14bbfd490

void __cdecl
FDS_SpawnService::OnSpawnInit_StuffWarpDevice
          (FDS_SpawnInfo *param_1,SpawnStuffWarpDeviceResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  UDS_StuffWarpDeviceData *this;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res10 [2];
  FWeakObjectPtr local_res18;
  TVector<double>_u_0 local_28;
  
  OnSpawnInit_StuffBase(param_1->EntityID,(param_2->_impl_).stuff_id_);
  UDS_StuffWarpDeviceData::GetData((ulong64)&local_res18);
  bVar4 = TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> *)&local_res18,
                     (void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181666212193500461>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                       ,0x2d3,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this = (UDS_StuffWarpDeviceData *)FWeakObjectPtr::Get(&local_res18);
    UDS_StuffWarpDeviceData::SetDataBySpawnStuffWarpDeviceResponse(this,param_2);
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = true;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res10[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res10,local_res8);
  }
  return;
}

// OnSpawnInit_Totem @ 14bbfd5b0

void __cdecl FDS_SpawnService::OnSpawnInit_Totem(FDS_SpawnInfo *param_1,SpawnTotemResponse *param_2)

{
  Vector *pVVar1;
  VectorF *pVVar2;
  code *pcVar3;
  bool bVar4;
  VectorF *pVVar5;
  UObject *pUVar6;
  Vector *pVVar7;
  bool local_res8 [8];
  float local_res18 [2];
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_28;
  
  UDS_CharData::GetData((ulong64)&local_res20);
  bVar4 = TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9181666212193500636>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                       ,0x224,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pVVar1 = (param_2->_impl_).position_;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar7 = &_Vector_default_instance_._instance;
    if (pVVar1 != (Vector *)0x0) {
      pVVar7 = pVVar1;
    }
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_28._s_0,pVVar7);
    pVVar2 = (param_2->_impl_).direction_;
    local_res8[0] = true;
    pVVar5 = &_VectorF_default_instance_._instance;
    if (pVVar2 != (VectorF *)0x0) {
      pVVar5 = pVVar2;
    }
    local_res18[0] = (pVVar5->_impl_).y_;
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    AdjustSpawnTransform
              (&param_1->SpawnTransform,(TVector<double> *)&local_28._s_0,
               (float *)&pUVar6[4].field_0x8,local_res18,local_res8);
  }
  return;
}

// OnSpawnInit_Transport @ 14bbfd6b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FDS_SpawnService::OnSpawnInit_Transport(FDS_SpawnInfo *param_1,SpawnTransportResponse *param_2)

{
  float fVar1;
  Vector *pVVar2;
  VectorF *pVVar3;
  code *pcVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  UDS_TransportData *this;
  VectorF *pVVar15;
  UObject *pUVar16;
  TQuat<double> *pTVar17;
  Vector *pVVar18;
  FWeakObjectPtr local_res8;
  TVector<double>_u_0 local_b8;
  TRotator<double> local_a0 [2];
  TQuat<double> local_68 [3];
  
  UDS_TransportData::GetData((ulong64)&local_res8,param_1->EntityID,false);
  bVar14 = TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (bVar14) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_9181666212193500715>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                        ,0x1d5,"false");
    if (bVar14) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this = (UDS_TransportData *)FWeakObjectPtr::Get(&local_res8);
    UDS_TransportData::SetSpawnTransportResponseData(this,param_2);
    pVVar2 = (param_2->_impl_).position_;
    local_b8._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    local_b8._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    pVVar18 = &_Vector_default_instance_._instance;
    if (pVVar2 != (Vector *)0x0) {
      pVVar18 = pVVar2;
    }
    local_b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DS_Util::SetFVector((TVector<double> *)&local_b8._s_0,pVVar18);
    pVVar3 = (param_2->_impl_).direction_;
    pVVar15 = &_VectorF_default_instance_._instance;
    if (pVVar3 != (VectorF *)0x0) {
      pVVar15 = pVVar3;
    }
    fVar1 = (pVVar15->_impl_).y_;
    pUVar16 = FWeakObjectPtr::Get(&local_res8);
    uVar10 = local_b8._0_4_;
    uVar11 = local_b8._4_4_;
    uVar12 = local_b8._8_4_;
    uVar13 = local_b8._12_4_;
    local_a0[0].Yaw = (double)fVar1;
    dVar5 = (double)*(float *)&pUVar16[4].field_0x8 + local_b8._s_0.Z;
    local_a0[0].Pitch = 0.0;
    local_a0[0].Roll = 0.0;
    pTVar17 = UE::Math::TRotator<double>::Quaternion(local_a0,local_68);
    dVar8 = pTVar17->Z;
    dVar9 = pTVar17->W;
    uVar6 = *(undefined4 *)&pTVar17->Y;
    uVar7 = *(undefined4 *)((longlong)&pTVar17->Y + 4);
    (param_1->SpawnTransform).Rotation.XY.m128d_f64[0] = pTVar17->X;
    *(undefined4 *)((param_1->SpawnTransform).Rotation.XY.m128d_f64 + 1) = uVar6;
    *(undefined4 *)((longlong)(param_1->SpawnTransform).Rotation.XY.m128d_f64 + 0xc) = uVar7;
    (param_1->SpawnTransform).Rotation.ZW.m128d_f64[0] = dVar8;
    (param_1->SpawnTransform).Rotation.ZW.m128d_f64[1] = dVar9;
    *(undefined4 *)(param_1->SpawnTransform).Translation.XY.m128d_f64 = uVar10;
    *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 4) = uVar11;
    *(undefined4 *)((param_1->SpawnTransform).Translation.XY.m128d_f64 + 1) = uVar12;
    *(undefined4 *)((longlong)(param_1->SpawnTransform).Translation.XY.m128d_f64 + 0xc) = uVar13;
    (param_1->SpawnTransform).Translation.ZW.m128d_f64[0] = dVar5;
    (param_1->SpawnTransform).Translation.ZW.m128d_f64[1] = 0.0;
    dVar5 = _UNK_150689688;
    (param_1->SpawnTransform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (param_1->SpawnTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = _UNK_150689518;
    (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (param_1->SpawnTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  }
  return;
}

// ProcessError @ 14bc026b0

bool __cdecl FDS_SpawnService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveDespawnAllEntitiesResponse @ 14bc03c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveDespawnAllEntitiesResponse(ServerMessages *param_1)

{
  UDS_EntityManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_SpawnService::ReceiveDespawnAllEntitiesResponse",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x433,L"entityMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_EntityManager::ClearAllEntity(this,false);
  }
  return;
}

// ReceivePatrolStepNumberResponse @ 14bc056a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceivePatrolStepNumberResponse(ServerMessages *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  Message *pMVar4;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  UDS_LogManager *pUVar7;
  PatrolStepNumberResponseDefaultTypeInternal *pPVar8;
  longlong lVar9;
  undefined1 auStackY_198 [32];
  wchar_t *pwVar10;
  ulong64 local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->_impl_)._oneof_case_[0] == 0x1ea) {
    pPVar8 = *(PatrolStepNumberResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
  }
  else {
    pPVar8 = &server_msg::_PatrolStepNumberResponse_default_instance_;
  }
  uVar1 = *(undefined4 *)&((Message *)((longlong)pPVar8 + 0x20))->field_0xc;
  if ((*(ulonglong *)&((Message *)((longlong)pPVar8 + 0x10))->field_0x8 & 4) == 0) {
    uVar3 = (uint)*(ulonglong *)&((Message *)((longlong)pPVar8 + 0x10))->field_0x8 & 3;
  }
  else {
    uVar3 = *(uint *)((longlong)pPVar8 + 0x20);
  }
  if (0 < (int)uVar3) {
    lVar9 = 0;
    do {
      pMVar4 = (Message *)((longlong)pPVar8 + 0x20);
      if ((*(ulonglong *)&((Message *)((longlong)pPVar8 + 0x10))->field_0x8 & 4) != 0) {
        pMVar4 = (Message *)
                 (*(ulonglong *)&((Message *)((longlong)pPVar8 + 0x10))->field_0x8 &
                 0xfffffffffffffff8);
      }
      local_158 = *(ulong64 *)((longlong)&pMVar4->field_0x0 + lVar9 * 2 * 4);
      pFVar5 = FDS_EntityBase::GetEntityBase(&local_158);
      if (pFVar5 == (FDS_EntityBase *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceivePatrolStepNumberResponse",0x31,Yes);
        pwVar10 = L"entityBase is nullptr. (%llu)";
        uVar3 = 0x23d;
LAB_14bc05853:
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,uVar3,pwVar10);
        if ((void *)local_148._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_148._padding_);
        return;
      }
      (**(code **)(pFVar5->_padding_ + 400))(pFVar5);
      bVar2 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_150,
                         (void *)0x0);
      if (bVar2) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceivePatrolStepNumberResponse",0x31,Yes);
        pwVar10 = L"syncRecvComp is nullptr. (%llu)";
        uVar3 = 0x244;
        goto LAB_14bc05853;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_150);
      (**(code **)(*(longlong *)pUVar6 + 0x2f0))(pUVar6,pFVar5->SpawnTableID,uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)uVar3);
  }
  return;
}

// ReceiveRemoveEntitiesResponse @ 14bc08930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveRemoveEntitiesResponse(ServerMessages *param_1)

{
  ulong64 *puVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar6;
  ulong64 uVar7;
  Message *pMVar8;
  UObject *pUVar9;
  FDS_EntityBase *pFVar10;
  UWorld *pUVar11;
  uint uVar12;
  longlong lVar13;
  RemoveEntitiesResponseDefaultTypeInternal *pRVar14;
  undefined1 auStackY_508 [32];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_4d8;
  FWeakObjectPtr local_4c8;
  UDS_EntityManager *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  this = UDS_EntityManager::GetInst();
  local_4c0 = this;
  if (this == (UDS_EntityManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"FDS_SpawnService::ReceiveRemoveEntitiesResponse",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4b8.Ptr,1000,L"entityMng is nullptr.");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else {
    UDS_PlayerData::GetMainPlayerData();
    bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_4c8,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"FDS_SpawnService::ReceiveRemoveEntitiesResponse",0x2f,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_398.Ptr,0x3ef,L"mainPlayerData is nullptr.")
        ;
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181666212193500176>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                         ,0x3f0,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if ((param_1->_impl_)._oneof_case_[0] == 5) {
        pRVar14 = *(RemoveEntitiesResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
      }
      else {
        pRVar14 = &server_msg::_RemoveEntitiesResponse_default_instance_;
      }
      uVar2 = *(ulong64 *)((longlong)pRVar14 + 0x30);
      uVar7 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      if ((uVar2 == 0) || (uVar2 == uVar7)) {
        if ((*(ulonglong *)&((Message *)((longlong)pRVar14 + 0x10))->field_0x8 & 4) == 0) {
          uVar12 = (uint)*(ulonglong *)&((Message *)((longlong)pRVar14 + 0x10))->field_0x8 & 3;
        }
        else {
          uVar12 = *(uint *)((longlong)pRVar14 + 0x20);
        }
        lVar13 = 0;
        local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d8.ArrayNum = 0;
        local_4d8.ArrayMax = 0;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar12,&local_4d8.AllocatorInstance,0,&local_4d8.ArrayMax);
        }
        if (0 < (int)uVar12) {
          do {
            pMVar8 = (Message *)((longlong)pRVar14 + 0x20);
            if ((*(ulonglong *)&((Message *)((longlong)pRVar14 + 0x10))->field_0x8 & 4) != 0) {
              pMVar8 = (Message *)
                       (*(ulonglong *)&((Message *)((longlong)pRVar14 + 0x10))->field_0x8 &
                       0xfffffffffffffff8);
            }
            puVar1 = (ulong64 *)(&pMVar8->field_0x0 + lVar13 * 8);
            if (*puVar1 == UDS_PlayerData::MainPlayerEntityID) {
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 != (UDS_LogManager *)0x0) {
                pUVar6 = UDS_LogManager::GetInst();
                local_278._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_278,"FDS_SpawnService::ReceiveRemoveEntitiesResponse",0x2f,Yes);
                UDS_LogManager::PrintLog
                          (pUVar6,1,Warning,local_278.Ptr,0x40c,L"Attempting to remove MainPlayer.")
                ;
                if ((void *)local_278._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_278._padding_);
                }
              }
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9181666212193500147>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                                 ,0x40d,"false");
              if (bVar4) {
code_r0x00014bc08ce4:
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            else {
              pUVar9 = FWeakObjectPtr::Get(&local_4c8);
              if (*puVar1 == *(ulong64 *)&pUVar9[8].field_0x10) {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 != (UDS_LogManager *)0x0) {
                  pUVar6 = UDS_LogManager::GetInst();
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"FDS_SpawnService::ReceiveRemoveEntitiesResponse",0x2f,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,local_158.Ptr,0x413,
                             L"Attempting to remove MainCharacter.");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_9181666212193500140>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                                   ,0x414,"false");
                if (bVar4) goto code_r0x00014bc08ce4;
              }
              else {
                pFVar10 = FDS_EntityBase::GetEntityBase(puVar1);
                if (pFVar10 == (FDS_EntityBase *)0x0) {
                  DS_Util::DS_SyncLog(L"Couldn\'t find the entity to remove. (ID: %llu)");
                }
                else {
                  DS_Util::DS_SyncLog(L"Attempt to remove entity. (TYPE: %d, ID: %llu)");
                }
                iVar5 = local_4d8.ArrayNum;
                if (local_4d8.ArrayNum == local_4d8.ArrayMax) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_4d8.AllocatorInstance,&local_4d8.ArrayMax);
                }
                local_4d8.ArrayNum = iVar5 + 1;
                *(ulong64 *)(local_4d8.AllocatorInstance.Data + (longlong)iVar5 * 8) = *puVar1;
              }
            }
            lVar13 = lVar13 + 1;
            this = local_4c0;
          } while (lVar13 < (int)uVar12);
        }
        if (0 < local_4d8.ArrayNum) {
          pUVar11 = UDS_GameInstance::GetGameInstanceWorld();
          UDS_EntityManager::RemoveEntityList(this,pUVar11,&local_4d8);
        }
        if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// ReceiveSpawnCharacterResponse @ 14bc091a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnCharacterResponse(ServerMessages *param_1)

{
  bool bVar1;
  uint uVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_UniqueBpTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  Message *pMVar11;
  FDS_ItemBaseTableRow *pFVar12;
  FDS_WeaponTypeBaseTableRow *pFVar13;
  UDS_SkillDataSet *this_01;
  UDS_CharInfoData *this_02;
  UDS_ItemDataSet *this_03;
  MountInfoDefaultTypeInternal *pMVar14;
  FScriptContainerElement *pFVar15;
  SkillModeInfoDefaultTypeInternal *pSVar16;
  SpawnCharacterResponseDefaultTypeInternal *pSVar17;
  longlong lVar18;
  EDS_WeaponType EVar19;
  undefined1 auStackY_298 [32];
  FWeakObjectPtr local_268;
  FWeakObjectPtr local_260;
  FWeakObjectPtr local_258;
  FWeakObjectPtr local_250;
  FDestructionSentinel local_248;
  FDelegateAllocation *local_230;
  undefined1 local_228 [192];
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_SpawnService::ReceiveSpawnCharacterResponse",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x5b,L"entityMng is nullptr.");
    pFVar15 = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 4) {
      pSVar17 = *(SpawnCharacterResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar17 = &server_msg::_SpawnCharacterResponse_default_instance_;
    }
    UDS_PlayerData::GetData((ulong64)&local_268,*(ulong64 *)((longlong)pSVar17 + 0xb0),false);
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_268,(void *)0x0);
    if (!bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_268);
      if (*(ulong64 *)&pUVar4[8].field_0x10 !=
          *(ulong64 *)&((Message *)((longlong)pSVar17 + 0xb0))->field_0x8) {
        UDS_EntityManager::RemoveEntity(this,*(ulong64 *)&pUVar4[8].field_0x10,false);
      }
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_228);
    local_228._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar17 + 0xb0))->field_0x8;
    local_228[8] = NetCharacter;
    local_228._12_4_ = *(undefined4 *)((longlong)pSVar17 + 0xc0);
    this_00 = FDS_UniqueBpTableRow::GetRef(2,true);
    pFVar5 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_00);
    pFVar6 = FSoftObjectPath::ToString(&pFVar5->ResourcePath,(FString *)&local_248);
    lVar18 = 0;
    if ((FString *)(local_228 + 0x10) != pFVar6) {
      if ((FScriptContainerElement *)local_228._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_228._16_8_);
      }
      local_228._16_8_ = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228._24_4_ = (pFVar6->Data).ArrayNum;
      local_228._28_4_ = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_248._0_8_);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_248);
    local_230 = &local_160;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar7 + 1))->errorcoderes_ = (Message *)pSVar17;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnCharacterResponse_server_msg____6B_
      ;
      puVar7[3] = OnSpawnInit_Character;
    }
    if (local_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
    }
    pMVar14 = &server_msg::_MountInfo_default_instance_;
    if (*(MountInfoDefaultTypeInternal **)&((Message *)((longlong)pSVar17 + 0x90))->field_0x8 !=
        (MountInfoDefaultTypeInternal *)0x0) {
      pMVar14 = *(MountInfoDefaultTypeInternal **)
                 &((Message *)((longlong)pSVar17 + 0x90))->field_0x8;
    }
    local_228._136_8_ = (pMVar14->_instance)._impl_.mount_entity_;
    local_228._144_4_ = (pMVar14->_instance)._impl_.seat_index_;
    if ((*(uint *)((longlong)pSVar17 + 0x10) & 0x4000) != 0) {
      pSVar16 = &server_msg::_SkillModeInfo_default_instance_;
      if (*(SkillModeInfoDefaultTypeInternal **)((longlong)pSVar17 + 0xa0) !=
          (SkillModeInfoDefaultTypeInternal *)0x0) {
        pSVar16 = *(SkillModeInfoDefaultTypeInternal **)((longlong)pSVar17 + 0xa0);
      }
      local_248._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar17 + 0xb0))->field_0x8;
      UDS_SkillModeProcessAbility::TryActivate
                ((ulong64 *)&local_248,(pSVar16->_instance)._impl_.skill_mode_id_);
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_228,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnCharacterResponse",0x2f,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x81,L"SpawnActor() failed.");
        if ((FScriptContainerElement *)local_148._padding_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      if ((*(ulonglong *)&((Message *)((longlong)pSVar17 + 0x10))->field_0x8 & 4) == 0) {
        uVar2 = (uint)*(ulonglong *)&((Message *)((longlong)pSVar17 + 0x10))->field_0x8 & 3;
      }
      else {
        uVar2 = *(uint *)((longlong)pSVar17 + 0x20);
      }
      EVar19 = Fist;
      if (0 < (int)uVar2) {
        do {
          pMVar11 = (Message *)((longlong)pSVar17 + 0x20);
          if ((*(ulonglong *)&((Message *)((longlong)pSVar17 + 0x10))->field_0x8 & 4) != 0) {
            pMVar11 = (Message *)
                      (*(ulonglong *)&((Message *)((longlong)pSVar17 + 0x10))->field_0x8 &
                      0xfffffffffffffff8);
          }
          pFVar12 = FDS_ItemBaseTableRow::GetRef
                              ((longlong)*(int *)(&pMVar11->field_0x0 + lVar18 * 4),true);
          if (pFVar12->MainType == Weapon) {
            pFVar13 = FDS_WeaponTypeBaseTableRow::GetRefByItemType(pFVar12->ItemType);
            EVar19 = pFVar13->ID;
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < (int)uVar2);
      }
      TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_260);
      bVar1 = FWeakObjectPtr::IsValid(&local_260);
      if (bVar1) {
        this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_260);
        UDS_SkillDataSet::InitSkillDataByWeaponType(this_01,EVar19);
      }
      UDS_CharInfoData::GetData((ulong64)&local_258);
      bVar1 = FWeakObjectPtr::IsValid(&local_258);
      if (bVar1) {
        this_02 = (UDS_CharInfoData *)FWeakObjectPtr::Get(&local_258);
        UDS_CharInfoData::SetWeaponType(this_02,EVar19);
      }
      TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_250);
      bVar1 = FWeakObjectPtr::IsValid(&local_250);
      if (bVar1) {
        this_03 = (UDS_ItemDataSet *)FWeakObjectPtr::Get(&local_250);
        UDS_ItemDataSet::UpdateEquipmentData(this_03,&pSVar17->_instance);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_168);
    pFVar15 = (FScriptContainerElement *)local_228._16_8_;
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  return;
}

// ReceiveSpawnNpcResponse @ 14bc09620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnNpcResponse(ServerMessages *param_1)

{
  NpcSpawnId *pNVar1;
  PatrolStepNumberDefaultTypeInternal *pPVar2;
  code *pcVar3;
  bool bVar4;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar5;
  NpcDataDefaultTypeInternal *pNVar6;
  FDS_NpcBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  NpcSpawnId *pNVar11;
  GimmickStateDefaultTypeInternal *pGVar12;
  UWorld *pUVar13;
  AActor *pAVar14;
  FDS_EntityBase *pFVar15;
  MeshVisibilityDefaultTypeInternal *pMVar16;
  UWN_AbilitySystemComponent *this_01;
  FGameplayTag *pFVar17;
  UObject *pUVar18;
  ADS_AI_GYM_GameMode *this_02;
  FScriptContainerElement *pFVar19;
  Vector *pVVar20;
  SpawnNpcResponseDefaultTypeInternal *pSVar21;
  PatrolStepNumberDefaultTypeInternal *pPVar22;
  undefined1 auStackY_3f8 [32];
  EDS_StateTagType local_3c8 [8];
  FWeakObjectPtr local_3c0;
  FWeakObjectPtr local_3b8;
  FWeakObjectPtr local_3b0;
  ulong64 local_3a8 [3];
  TVector<double>_u_0 local_390;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnNpcResponse",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_268.Ptr,0xeb,L"entityMng is nullptr.");
    pFVar19 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0xc) {
      pSVar21 = *(SpawnNpcResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar21 = &server_msg::_SpawnNpcResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar21 + 0x90))->field_0x8;
    local_348[8] = NPC;
    pNVar6 = &server_msg::_NpcData_default_instance_;
    if (*(NpcDataDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x20))->field_0x8 !=
        (NpcDataDefaultTypeInternal *)0x0) {
      pNVar6 = *(NpcDataDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x20))->field_0x8;
    }
    local_348._12_4_ = (pNVar6->_instance)._impl_.npc_id_;
    this_00 = FDS_NpcBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar7 = FDS_NpcBaseTableRow::ID_BpLinkTable(this_00);
    pFVar8 = FSoftObjectPath::ToString(&pFVar7->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar8) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar8->Data).ArrayNum;
      local_348._28_4_ = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar9 + 1))->errorcoderes_ = (Message *)pSVar21;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnNpcResponse_server_msg____6B_
      ;
      puVar9[3] = OnSpawnInit_NPC;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    pNVar6 = &server_msg::_NpcData_default_instance_;
    if (*(NpcDataDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x20))->field_0x8 !=
        (NpcDataDefaultTypeInternal *)0x0) {
      pNVar6 = *(NpcDataDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x20))->field_0x8;
    }
    if (((pNVar6->_instance)._impl_._has_bits_.has_bits_[0] & 0x80) != 0) {
      pNVar1 = (pNVar6->_instance)._impl_.npc_spawn_id_;
      pNVar11 = &server_msg::_NpcSpawnId_default_instance_._instance;
      if (pNVar1 != (NpcSpawnId *)0x0) {
        pNVar11 = pNVar1;
      }
      local_348._128_4_ = (pNVar11->_impl_).npc_spawn_id_;
    }
    local_348._152_8_ = *(undefined8 *)&((Message *)((longlong)pSVar21 + 0xb0))->field_0x8;
    if ((*(byte *)((longlong)pSVar21 + 0x10) & 0x40) != 0) {
      pGVar12 = &server_msg::_GimmickState_default_instance_;
      if (*(GimmickStateDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x40))->field_0x8
          != (GimmickStateDefaultTypeInternal *)0x0) {
        pGVar12 = *(GimmickStateDefaultTypeInternal **)
                   &((Message *)((longlong)pSVar21 + 0x40))->field_0x8;
      }
      local_348[0xa0] = (pGVar12->_instance)._impl_.is_on_;
      pGVar12 = &server_msg::_GimmickState_default_instance_;
      if (*(GimmickStateDefaultTypeInternal **)&((Message *)((longlong)pSVar21 + 0x40))->field_0x8
          != (GimmickStateDefaultTypeInternal *)0x0) {
        pGVar12 = *(GimmickStateDefaultTypeInternal **)
                   &((Message *)((longlong)pSVar21 + 0x40))->field_0x8;
      }
      local_348[0xa1] = (pGVar12->_instance)._impl_.is_enabled_;
    }
    pUVar13 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar14 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar13,true);
    if (pAVar14 == (AActor *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnNpcResponse",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x108,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar15 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar15 == (FDS_EntityBase *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500913>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,0x10f,"false");
        if (bVar4) {
code_r0x00014bc099eb:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        (**(code **)(pFVar15->_padding_ + 0x178))(pFVar15);
        bVar4 = TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_AbilitySystemComponent,FWeakObjectPtr> *)&local_3c0,
                           (void *)0x0);
        if (bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_9181666212193500910>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                             ,0x112,"false");
          if (bVar4) goto code_r0x00014bc099eb;
        }
        else {
          (**(code **)(pFVar15->_padding_ + 400))(pFVar15);
          bVar4 = TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_SyncRecvComponent,FWeakObjectPtr> *)&local_3b8,
                             (void *)0x0);
          if (bVar4) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_9181666212193500907>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                               ,0x115,"false");
            if (bVar4) goto code_r0x00014bc099eb;
          }
          else {
            if (((Message *)((longlong)pSVar21 + 0xb0))->field_0x3 == '\x01') {
              local_390._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_390._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              pVVar20 = &_Vector_default_instance_._instance;
              if (*(Vector **)((longlong)pSVar21 + 0x50) != (Vector *)0x0) {
                pVVar20 = *(Vector **)((longlong)pSVar21 + 0x50);
              }
              local_390._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              DS_Util::SetFVector((TVector<double> *)&local_390._s_0,pVVar20);
              local_3a8[0] = *(ulong64 *)&((Message *)((longlong)pSVar21 + 0x90))->field_0x8;
              UDS_ComeBackAbility::TryActivate(local_3a8,(TVector<double> *)&local_390._s_0);
            }
            if ((*(uint *)((longlong)pSVar21 + 0x10) & 0x4000) != 0) {
              pMVar16 = &server_msg::_MeshVisibility_default_instance_;
              if (*(MeshVisibilityDefaultTypeInternal **)
                   &((Message *)((longlong)pSVar21 + 0x80))->field_0x8 !=
                  (MeshVisibilityDefaultTypeInternal *)0x0) {
                pMVar16 = *(MeshVisibilityDefaultTypeInternal **)
                           &((Message *)((longlong)pSVar21 + 0x80))->field_0x8;
              }
              if ((pMVar16->_instance)._impl_.is_show_ == true) {
                local_3a8[1] = 0x100;
                (**(code **)(pFVar15->_padding_ + 0x60))();
              }
              else {
                local_3a8[2] = 0x100;
                (**(code **)(pFVar15->_padding_ + 0x58))(pFVar15,local_3a8 + 2,0);
              }
            }
            if (*(char *)((longlong)pSVar21 + 0xc0) == '\x01') {
              this_01 = (UWN_AbilitySystemComponent *)FWeakObjectPtr::Get(&local_3c0);
              local_3c8[0] = Seal;
              pFVar17 = FDS_GameplayTags::GetStateTag(local_3c8);
              UWN_AbilitySystemComponent::AddTag(this_01,pFVar17,1);
            }
            if ((*(uint *)((longlong)pSVar21 + 0x10) & 0x200) != 0) {
              pPVar2 = *(PatrolStepNumberDefaultTypeInternal **)((longlong)pSVar21 + 0x60);
              pUVar18 = FWeakObjectPtr::Get(&local_3b8);
              pPVar22 = &server_msg::_PatrolStepNumber_default_instance_;
              if (pPVar2 != (PatrolStepNumberDefaultTypeInternal *)0x0) {
                pPVar22 = pPVar2;
              }
              (**(code **)(*(longlong *)pUVar18 + 0x2f0))
                        (pUVar18,pFVar15->SpawnTableID,(pPVar22->_instance)._impl_.patrol_step_no_);
            }
            bVar4 = UDS_GameInstance::GetIsAIGymMode();
            if (bVar4) {
              ADS_AI_GYM_GameMode::GetInst();
              bVar4 = TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> *)&local_3b0,
                                 (void *)0x0);
              if (!bVar4) {
                this_02 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::Get(&local_3b0);
                ADS_AI_GYM_GameMode::OnReceiveSpawnNpcResponse
                          (this_02,(int *)(local_348 + 0xc),pAVar14);
              }
            }
          }
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar19 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  return;
}

// ReceiveSpawnStuffPortalResponse @ 14bc09bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnStuffPortalResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  StuffSpawnIdDefaultTypeInternal *pSVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  FDS_EntityBase *pFVar11;
  MeshVisibilityDefaultTypeInternal *pMVar12;
  FScriptContainerElement *pFVar13;
  SpawnStuffPortalResponseDefaultTypeInternal *pSVar14;
  undefined1 auStackY_3b8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnStuffPortalResponse",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x2ea,L"entityMng is nullptr.");
    pFVar13 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x1ae) {
      pSVar14 = *(SpawnStuffPortalResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar14 = &server_msg::_SpawnStuffPortalResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar14 + 0x30))->field_0x8;
    local_348[8] = StuffPortal;
    local_348._12_4_ = *(undefined4 *)((longlong)pSVar14 + 0x40);
    this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar4 = FDS_StuffBaseTableRow::ID_BpLinkTable(this_00);
    pFVar5 = FSoftObjectPath::ToString(&pFVar4->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar5) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar5->Data).ArrayNum;
      local_348._28_4_ = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar6 + 1))->errorcoderes_ = (Message *)pSVar14;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffPortalResponse_server_msg____6B_
      ;
      puVar6[3] = OnSpawnInit_StuffPortal;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if ((*(byte *)((longlong)pSVar14 + 0x10) & 4) != 0) {
      pSVar8 = &server_msg::_StuffSpawnId_default_instance_;
      if (*(StuffSpawnIdDefaultTypeInternal **)&((Message *)((longlong)pSVar14 + 0x20))->field_0x8
          != (StuffSpawnIdDefaultTypeInternal *)0x0) {
        pSVar8 = *(StuffSpawnIdDefaultTypeInternal **)
                  &((Message *)((longlong)pSVar14 + 0x20))->field_0x8;
      }
      local_348._128_4_ = (pSVar8->_instance)._impl_.stuff_spawn_id_;
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnStuffPortalResponse",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x2ff,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar11 == (FDS_EntityBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500410>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,0x306,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if ((*(byte *)((longlong)pSVar14 + 0x10) & 8) != 0) {
        pMVar12 = &server_msg::_MeshVisibility_default_instance_;
        if (*(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30) !=
            (MeshVisibilityDefaultTypeInternal *)0x0) {
          pMVar12 = *(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30);
        }
        if ((pMVar12->_instance)._impl_.is_show_ == true) {
          local_388 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,&local_388);
        }
        else {
          local_380 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x58))(pFVar11,&local_380,0);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar13 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// ReceiveSpawnStuffQuestBoardResponse @ 14bc09f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnStuffQuestBoardResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  StuffSpawnIdDefaultTypeInternal *pSVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  FDS_EntityBase *pFVar11;
  MeshVisibilityDefaultTypeInternal *pMVar12;
  FScriptContainerElement *pFVar13;
  SpawnStuffQuestBoardResponseDefaultTypeInternal *pSVar14;
  undefined1 auStackY_3b8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnStuffQuestBoardResponse",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x345,L"entityMng is nullptr.");
    pFVar13 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x1c2) {
      pSVar14 = *(SpawnStuffQuestBoardResponseDefaultTypeInternal **)
                 &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar14 = &server_msg::_SpawnStuffQuestBoardResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar14 + 0x30))->field_0x8;
    local_348[8] = StuffQuestBoard;
    local_348._12_4_ = *(undefined4 *)((longlong)pSVar14 + 0x40);
    this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar4 = FDS_StuffBaseTableRow::ID_BpLinkTable(this_00);
    pFVar5 = FSoftObjectPath::ToString(&pFVar4->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar5) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar5->Data).ArrayNum;
      local_348._28_4_ = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar6 + 1))->errorcoderes_ = (Message *)pSVar14;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestBoardResponse_server_msg____6B_
      ;
      puVar6[3] = OnSpawnInit_StuffQuestBoard;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if ((*(byte *)((longlong)pSVar14 + 0x10) & 4) != 0) {
      pSVar8 = &server_msg::_StuffSpawnId_default_instance_;
      if (*(StuffSpawnIdDefaultTypeInternal **)&((Message *)((longlong)pSVar14 + 0x20))->field_0x8
          != (StuffSpawnIdDefaultTypeInternal *)0x0) {
        pSVar8 = *(StuffSpawnIdDefaultTypeInternal **)
                  &((Message *)((longlong)pSVar14 + 0x20))->field_0x8;
      }
      local_348._128_4_ = (pSVar8->_instance)._impl_.stuff_spawn_id_;
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnStuffQuestBoardResponse",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x35a,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar11 == (FDS_EntityBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500319>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,0x361,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if ((*(byte *)((longlong)pSVar14 + 0x10) & 8) != 0) {
        pMVar12 = &server_msg::_MeshVisibility_default_instance_;
        if (*(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30) !=
            (MeshVisibilityDefaultTypeInternal *)0x0) {
          pMVar12 = *(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30);
        }
        if ((pMVar12->_instance)._impl_.is_show_ == true) {
          local_388 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,&local_388);
        }
        else {
          local_380 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x58))(pFVar11,&local_380,0);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar13 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// ReceiveSpawnStuffQuestResponse @ 14bc0a290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnStuffQuestResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  StuffSpawnIdDefaultTypeInternal *pSVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  FDS_EntityBase *pFVar11;
  MeshVisibilityDefaultTypeInternal *pMVar12;
  FScriptContainerElement *pFVar13;
  SpawnStuffQuestResponseDefaultTypeInternal *pSVar14;
  undefined1 auStackY_3b8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnStuffQuestResponse",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x38b,L"entityMng is nullptr.");
    pFVar13 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x1d6) {
      pSVar14 = *(SpawnStuffQuestResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar14 = &server_msg::_SpawnStuffQuestResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar14 + 0x30))->field_0x8;
    local_348[8] = StuffQuest;
    local_348._12_4_ = *(undefined4 *)((longlong)pSVar14 + 0x40);
    this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar4 = FDS_StuffBaseTableRow::ID_BpLinkTable(this_00);
    pFVar5 = FSoftObjectPath::ToString(&pFVar4->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar5) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar5->Data).ArrayNum;
      local_348._28_4_ = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar6 + 1))->errorcoderes_ = (Message *)pSVar14;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffQuestResponse_server_msg____6B_
      ;
      puVar6[3] = OnSpawnInit_StuffQuest;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if ((*(byte *)((longlong)pSVar14 + 0x10) & 4) != 0) {
      pSVar8 = &server_msg::_StuffSpawnId_default_instance_;
      if (*(StuffSpawnIdDefaultTypeInternal **)&((Message *)((longlong)pSVar14 + 0x20))->field_0x8
          != (StuffSpawnIdDefaultTypeInternal *)0x0) {
        pSVar8 = *(StuffSpawnIdDefaultTypeInternal **)
                  &((Message *)((longlong)pSVar14 + 0x20))->field_0x8;
      }
      local_348._128_4_ = (pSVar8->_instance)._impl_.stuff_spawn_id_;
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnStuffQuestResponse",0x30,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x3a0,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar11 == (FDS_EntityBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500249>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,0x3a7,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if ((*(byte *)((longlong)pSVar14 + 0x10) & 8) != 0) {
        pMVar12 = &server_msg::_MeshVisibility_default_instance_;
        if (*(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30) !=
            (MeshVisibilityDefaultTypeInternal *)0x0) {
          pMVar12 = *(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30);
        }
        if ((pMVar12->_instance)._impl_.is_show_ == true) {
          local_388 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,&local_388);
        }
        else {
          local_380 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x58))(pFVar11,&local_380,0);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar13 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// ReceiveSpawnStuffResponse @ 14bc0a600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnStuffResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  StuffSpawnIdDefaultTypeInternal *pSVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  FDS_EntityBase *pFVar11;
  MeshVisibilityDefaultTypeInternal *pMVar12;
  FScriptContainerElement *pFVar13;
  SpawnStuffResponseDefaultTypeInternal *pSVar14;
  undefined1 auStackY_3b8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnStuffResponse",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x255,L"entityMng is nullptr.");
    pFVar13 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x2d) {
      pSVar14 = *(SpawnStuffResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar14 = &server_msg::_SpawnStuffResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)((longlong)pSVar14 + 0x50);
    local_348[8] = StuffGather;
    local_348._12_4_ = *(undefined4 *)&((Message *)((longlong)pSVar14 + 0x50))->field_0x8;
    this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar4 = FDS_StuffBaseTableRow::ID_BpLinkTable(this_00);
    pFVar5 = FSoftObjectPath::ToString(&pFVar4->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar5) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar5->Data).ArrayNum;
      local_348._28_4_ = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar6 + 1))->errorcoderes_ = (Message *)pSVar14;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffResponse_server_msg____6B_
      ;
      puVar6[3] = OnSpawnInit_Stuff;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if ((*(byte *)((longlong)pSVar14 + 0x10) & 4) != 0) {
      pSVar8 = &server_msg::_StuffSpawnId_default_instance_;
      if (*(StuffSpawnIdDefaultTypeInternal **)((longlong)pSVar14 + 0x40) !=
          (StuffSpawnIdDefaultTypeInternal *)0x0) {
        pSVar8 = *(StuffSpawnIdDefaultTypeInternal **)((longlong)pSVar14 + 0x40);
      }
      local_348._128_4_ = (pSVar8->_instance)._impl_.stuff_spawn_id_;
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnStuffResponse",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x26a,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar11 == (FDS_EntityBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500559>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,0x271,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if ((*(byte *)((longlong)pSVar14 + 0x10) & 8) != 0) {
        pMVar12 = &server_msg::_MeshVisibility_default_instance_;
        if (*(MeshVisibilityDefaultTypeInternal **)
             &((Message *)((longlong)pSVar14 + 0x40))->field_0x8 !=
            (MeshVisibilityDefaultTypeInternal *)0x0) {
          pMVar12 = *(MeshVisibilityDefaultTypeInternal **)
                     &((Message *)((longlong)pSVar14 + 0x40))->field_0x8;
        }
        if ((pMVar12->_instance)._impl_.is_show_ == true) {
          local_388 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,&local_388);
        }
        else {
          local_380 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x58))(pFVar11,&local_380,0);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar13 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// ReceiveSpawnStuffWarpDeviceResponse @ 14bc0a970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnStuffWarpDeviceResponse(ServerMessages *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_EntityManager *this;
  UDS_LogManager *pUVar3;
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  StuffSpawnIdDefaultTypeInternal *pSVar8;
  UWorld *pUVar9;
  AActor *pAVar10;
  FDS_EntityBase *pFVar11;
  MeshVisibilityDefaultTypeInternal *pMVar12;
  FScriptContainerElement *pFVar13;
  SpawnStuffWarpDeviceResponseDefaultTypeInternal *pSVar14;
  undefined1 auStackY_3b8 [32];
  undefined8 local_388;
  undefined8 local_380;
  FDestructionSentinel local_378;
  FDelegateAllocation *local_360;
  FString local_358;
  undefined1 local_348 [192];
  undefined1 local_288 [8];
  FDelegateAllocation local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FDS_SpawnService::ReceiveSpawnStuffWarpDeviceResponse",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_268.Ptr,0x2a0,L"entityMng is nullptr.");
    pFVar13 = (FScriptContainerElement *)local_268._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 400) {
      pSVar14 = *(SpawnStuffWarpDeviceResponseDefaultTypeInternal **)
                 &(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar14 = &server_msg::_SpawnStuffWarpDeviceResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_348);
    local_348._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar14 + 0x30))->field_0x8;
    local_348[8] = StuffWarpDevice;
    local_348._12_4_ = *(undefined4 *)((longlong)pSVar14 + 0x40);
    this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)local_348._12_4_,true);
    pFVar4 = FDS_StuffBaseTableRow::ID_BpLinkTable(this_00);
    pFVar5 = FSoftObjectPath::ToString(&pFVar4->ResourcePath,&local_358);
    if ((FString *)(local_348 + 0x10) != pFVar5) {
      if ((FScriptContainerElement *)local_348._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_348._16_8_);
      }
      local_348._16_8_ = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348._24_4_ = (pFVar5->Data).ArrayNum;
      local_348._28_4_ = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_288,
               (FWriteAccessScope *)&local_378);
    local_360 = &local_280;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_280);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar6 + 1))->errorcoderes_ = (Message *)pSVar14;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnStuffWarpDeviceResponse_server_msg____6B_
      ;
      puVar6[3] = OnSpawnInit_StuffWarpDevice;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if ((*(byte *)((longlong)pSVar14 + 0x10) & 4) != 0) {
      pSVar8 = &server_msg::_StuffSpawnId_default_instance_;
      if (*(StuffSpawnIdDefaultTypeInternal **)&((Message *)((longlong)pSVar14 + 0x20))->field_0x8
          != (StuffSpawnIdDefaultTypeInternal *)0x0) {
        pSVar8 = *(StuffSpawnIdDefaultTypeInternal **)
                  &((Message *)((longlong)pSVar14 + 0x20))->field_0x8;
      }
      local_348._128_4_ = (pSVar8->_instance)._impl_.stuff_spawn_id_;
    }
    pUVar9 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar10 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_348,pUVar9,true);
    if (pAVar10 == (AActor *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"FDS_SpawnService::ReceiveSpawnStuffWarpDeviceResponse",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x2b5,L"SpawnActor() failed.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)local_348);
      if (pFVar11 == (FDS_EntityBase *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181666212193500484>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Packet\\DS_SpawnService.cpp"
                           ,700,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if ((*(byte *)((longlong)pSVar14 + 0x10) & 8) != 0) {
        pMVar12 = &server_msg::_MeshVisibility_default_instance_;
        if (*(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30) !=
            (MeshVisibilityDefaultTypeInternal *)0x0) {
          pMVar12 = *(MeshVisibilityDefaultTypeInternal **)((longlong)pSVar14 + 0x30);
        }
        if ((pMVar12->_instance)._impl_.is_show_ == true) {
          local_388 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,&local_388);
        }
        else {
          local_380 = 0x100;
          (**(code **)(pFVar11->_padding_ + 0x58))(pFVar11,&local_380,0);
        }
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
    if (local_280.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_280.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_288);
    pFVar13 = (FScriptContainerElement *)local_348._16_8_;
  }
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  return;
}

// ReceiveSpawnTotemResponse @ 14bc0ace0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnTotemResponse(ServerMessages *param_1)

{
  UDS_EntityManager *this;
  UDS_LogManager *pUVar1;
  FDS_SkillTotemTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UWorld *pUVar6;
  AActor *pAVar7;
  FScriptContainerElement *pFVar8;
  SpawnTotemResponseDefaultTypeInternal *pSVar9;
  undefined1 auStackY_278 [32];
  void *local_248;
  FMRSWRecursiveAccessDetector *local_240;
  bool local_238;
  FDelegateAllocation *local_230;
  undefined1 local_228 [192];
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_SpawnService::ReceiveSpawnTotemResponse",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x1ec,L"entityMng is nullptr.");
    pFVar8 = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x50) {
      pSVar9 = *(SpawnTotemResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar9 = &server_msg::_SpawnTotemResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_228);
    local_228._0_8_ = *(undefined8 *)((longlong)pSVar9 + 0x30);
    local_228[8] = Totem;
    local_228._12_4_ = *(undefined4 *)((longlong)pSVar9 + 0x40);
    this_00 = FDS_SkillTotemTableRow::GetRef((longlong)(int)local_228._12_4_,true);
    pFVar2 = FDS_SkillTotemTableRow::ID_BpLinkTable(this_00);
    pFVar3 = FSoftObjectPath::ToString(&pFVar2->ResourcePath,(FString *)&local_248);
    if ((FString *)(local_228 + 0x10) != pFVar3) {
      if ((FScriptContainerElement *)local_228._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_228._16_8_);
      }
      local_228._16_8_ = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228._24_4_ = (pFVar3->Data).ArrayNum;
      local_228._28_4_ = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_248 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_248);
    local_230 = &local_160;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar4 + 1))->errorcoderes_ = (Message *)pSVar9;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTotemResponse_server_msg____6B_
      ;
      puVar4[3] = OnSpawnInit_Totem;
    }
    if (local_238 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240,(FDestructionSentinel *)&local_248)
      ;
    }
    local_228._168_8_ = *(undefined8 *)&((Message *)((longlong)pSVar9 + 0x30))->field_0x8;
    local_228._176_4_ = *(undefined4 *)((longlong)pSVar9 + 0x50);
    if ((*(byte *)((longlong)pSVar9 + 0x10) & 0x80) != 0) {
      local_228._184_8_ = *(undefined8 *)&((Message *)((longlong)pSVar9 + 0x40))->field_0x8;
    }
    pUVar6 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar7 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_228,pUVar6,true);
    if ((pAVar7 == (AActor *)0x0) &&
       (pUVar1 = UDS_LogManager::GetInst(), pUVar1 != (UDS_LogManager *)0x0)) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_SpawnService::ReceiveSpawnTotemResponse",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x204,L"SpawnActor() failed.");
      if ((FScriptContainerElement *)local_148._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_168);
    pFVar8 = (FScriptContainerElement *)local_228._16_8_;
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// ReceiveSpawnTransportResponse @ 14bc0afb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FDS_SpawnService::ReceiveSpawnTransportResponse(ServerMessages *param_1)

{
  UDS_EntityManager *this;
  UDS_LogManager *pUVar1;
  FDS_TransportBaseTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar2;
  FString *pFVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UWorld *pUVar6;
  AActor *pAVar7;
  FScriptContainerElement *pFVar8;
  SpawnTransportResponseDefaultTypeInternal *pSVar9;
  undefined1 auStackY_278 [32];
  void *local_248;
  FMRSWRecursiveAccessDetector *local_240;
  bool local_238;
  FDelegateAllocation *local_230;
  undefined1 local_228 [192];
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this = UDS_EntityManager::GetInst();
  if (this == (UDS_EntityManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_SpawnService::ReceiveSpawnTransportResponse",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x1b7,L"entityMng is nullptr.");
    pFVar8 = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x3c) {
      pSVar9 = *(SpawnTransportResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pSVar9 = &server_msg::_SpawnTransportResponse_default_instance_;
    }
    FDS_SpawnInfo::FDS_SpawnInfo((FDS_SpawnInfo *)local_228);
    local_228._0_8_ = *(undefined8 *)&((Message *)((longlong)pSVar9 + 0x20))->field_0x8;
    local_228[8] = Transport;
    local_228._12_4_ = *(undefined4 *)((longlong)pSVar9 + 0x30);
    this_00 = FDS_TransportBaseTableRow::GetRef((longlong)(int)local_228._12_4_,true);
    pFVar2 = FDS_TransportBaseTableRow::ID_BpLinkTable(this_00);
    pFVar3 = FSoftObjectPath::ToString(&pFVar2->ResourcePath,(FString *)&local_248);
    if ((FString *)(local_228 + 0x10) != pFVar3) {
      if ((FScriptContainerElement *)local_228._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_228._16_8_);
      }
      local_228._16_8_ = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228._24_4_ = (pFVar3->Data).ArrayNum;
      local_228._28_4_ = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_248 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
               (FWriteAccessScope *)&local_248);
    local_230 = &local_160;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
      ;
      ((ServerMessageUnion *)(puVar4 + 1))->errorcoderes_ = (Message *)pSVar9;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEAUFDS_SpawnInfo___ZUFDefaultDelegateUserPolicy__PEBVSpawnTransportResponse_server_msg____6B_
      ;
      puVar4[3] = OnSpawnInit_Transport;
    }
    if (local_238 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240,(FDestructionSentinel *)&local_248)
      ;
    }
    pUVar6 = UDS_GameInstance::GetGameInstanceWorld();
    pAVar7 = UDS_EntityManager::SpawnActor(this,(FDS_SpawnInfo *)local_228,pUVar6,true);
    if ((pAVar7 == (AActor *)0x0) &&
       (pUVar1 = UDS_LogManager::GetInst(), pUVar1 != (UDS_LogManager *)0x0)) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDS_SpawnService::ReceiveSpawnTransportResponse",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x1c7,L"SpawnActor() failed.");
      if ((FScriptContainerElement *)local_148._padding_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
    if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_160.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_168);
    pFVar8 = (FScriptContainerElement *)local_228._16_8_;
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

