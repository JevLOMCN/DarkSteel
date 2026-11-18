// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// <lambda_invoker_cdecl> @ 147339970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l15::<lambda_1>::<lambda_invoker_cdecl>
          (UPrimitiveComponent *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x430))();
  return cVar1 == '\0';
}

// FSkeletalMeshStreamOut @ 1473404f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSkeletalMeshStreamOut * __thiscall
FSkeletalMeshStreamOut::FSkeletalMeshStreamOut(FSkeletalMeshStreamOut *this,USkeletalMesh *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  FSkeletalMeshStreamOut *pFVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined1 auStack_118 [48];
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FSkeletalMeshStreamOut *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7FSkeletalMeshStreamOut__6B_;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamOut::FSkeletalMeshStreamOut'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  this->NumReferenceChecks = 0;
  this->PreviousNumberOfExternalReferences = 0;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if (param_1 == (USkeletalMesh *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                       ,0x1f,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FSkeletalMeshStreamOut *)(*pcVar1)();
      return pFVar10;
    }
  }
  (**(code **)(param_1->_padding_ + 0x398))(param_1);
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FSkeletalMeshStreamOut *)(*pcVar1)();
      return pFVar10;
    }
  }
  *(undefined4 *)&this->field_0x68 = 3;
  local_e8 = local_88;
  uStack_c0 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)**pppuVar12)(pppuVar12,&local_d8);
  }
  lVar7 = *(longlong *)&this->field_0x70;
  uVar8 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar13 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_e8;
  *(undefined8 *)&this->field_0x78 = uStack_e0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x84 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_d0;
  *(undefined4 *)&this->field_0x8c = uStack_cc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0x94 = local_c8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_c0;
  *(undefined4 *)&this->field_0x9c = uStack_c0._4_4_;
  local_d8._0_4_ = uVar2;
  local_d8._4_4_ = uVar3;
  uStack_d0 = uVar4;
  uStack_cc = uVar5;
  local_c8 = uVar6;
  uStack_c0 = plVar13;
  local_e8 = (code *)lVar7;
  uStack_e0 = uVar8;
  if (lVar7 != 0) {
    plVar11 = &local_d8;
    if (plVar13 != (longlong *)0x0) {
      plVar11 = plVar13;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 0;
  local_b8 = local_58;
  uStack_90 = (longlong *)0x0;
  if (local_58 != 0) {
    plVar13 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar13 = local_30;
    }
    (**(code **)*plVar13)(plVar13,&local_a8);
  }
  lVar7 = *(longlong *)&this->field_0xb0;
  uVar8 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar13 = *(longlong **)&this->field_0xd8;
  *(longlong *)&this->field_0xb0 = local_b8;
  *(undefined8 *)&this->field_0xb8 = uStack_b0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xc4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_a0;
  *(undefined4 *)&this->field_0xcc = uStack_9c;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_98;
  *(undefined4 *)&this->field_0xd4 = local_98._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_90;
  *(undefined4 *)&this->field_0xdc = uStack_90._4_4_;
  local_b8 = lVar7;
  uStack_b0 = uVar8;
  local_a8._0_4_ = uVar2;
  local_a8._4_4_ = uVar3;
  uStack_a0 = uVar4;
  uStack_9c = uVar5;
  local_98 = uVar6;
  uStack_90 = plVar13;
  if (lVar7 != 0) {
    plVar11 = &local_a8;
    if (plVar13 != (longlong *)0x0) {
      plVar11 = plVar13;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar12 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar12 = local_60;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_58 != 0) {
    plVar13 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar13 = local_30;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return this;
}

// ~FSkeletalMeshStreamOut @ 147342030

void __thiscall FSkeletalMeshStreamOut::~FSkeletalMeshStreamOut(FSkeletalMeshStreamOut *this)

{
  *(undefined ***)this = &___7FSkeletalMeshStreamOut__6B_;
  FSkeletalMeshUpdate::~FSkeletalMeshUpdate((FSkeletalMeshUpdate *)this);
  return;
}

// Cancel @ 1473471c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamOut::Cancel(FSkeletalMeshStreamOut *this,FSkelMeshUpdateContext *param_1)

{
  int *piVar1;
  FSkeletalMeshRenderData *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::Cancel(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_Cancel>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_SkeletalMeshStreamOut_Cancel ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::Cancel(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_Cancel>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res10.s,"STAT_SkeletalMeshStreamOut_Cancel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshStreamOut_Cancel,*pFVar6,
                   L"FSkeletalMeshStreamOut::Cancel","STATGROUP_StreamingDetails","STATCAT_Advanced"
                   ,L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_SkeletalMeshStreamOut_Cancel;
  if (StatPtr_STAT_SkeletalMeshStreamOut_Cancel ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::Cancel(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_Cancel>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res18,"STAT_SkeletalMeshStreamOut_Cancel");
    FVar7 = (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::Cancel(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_Cancel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshStreamOut_Cancel,
                         *pFVar6,L"FSkeletalMeshStreamOut::Cancel","STATGROUP_StreamingDetails",
                         "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                         MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                   ,0x195);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_147347345;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_147347345:
  pFVar2 = param_1->RenderData;
  if (pFVar2 != (FSkeletalMeshRenderData *)0x0) {
    pFVar2->PendingFirstLODIdx = pFVar2->CurrentFirstLODIdx;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ConditionalMarkComponentsDirty @ 147348430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty
          (FSkeletalMeshStreamOut *this,FSkelMeshUpdateContext *param_1)

{
  int iVar1;
  FName FVar2;
  USkeletalMesh *pUVar3;
  FSkeletalMeshRenderData *pFVar4;
  longlong lVar5;
  UActorComponent *this_00;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty>
  FVar20;
  FStreamingManagerCollection *this_01;
  IRenderAssetStreamingManager *pIVar21;
  UClass *pUVar22;
  longlong *plVar23;
  undefined ***pppuVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStackY_1d8 [32];
  FName local_178;
  FName local_168;
  ulonglong local_160;
  FColor_u_0 local_158 [2];
  FName local_150;
  FName local_148;
  FName local_140;
  code *local_138 [2];
  undefined **local_128;
  code *local_120;
  undefined8 local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined **local_98;
  FSkeletalMeshStreamOut *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FSkeletalMeshStreamOut *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar27 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty>
         )0x0) {
      pFVar19 = ::FName::FName(&local_148,
                               "STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty,*pFVar19,
                 L"FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty",
                 "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                 ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty;
  if (StatPtr_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty>
       )0x0) {
    pFVar19 = ::FName::FName(&local_140,"STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty")
    ;
    FVar20 = (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkeletalMeshStreamOut_ConditionalMarkComponentsDirty,
                          *pFVar19,L"FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  FVar2 = *(FName *)FVar20;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_158[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_158[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_150.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                   ,0x10b);
        bVar15 = true;
        bVar14 = true;
      }
    }
    bVar16 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_168 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar16 = true;
      local_178 = FVar2;
    }
  }
  if (__CsvProfilerStat268 == false) {
    FCsvProfilerTrace::OutputInlineStat("SkStreamingMarkDirtyTime",0);
    __CsvProfilerStat268 = true;
  }
  FCsvProfiler::BeginStat("SkStreamingMarkDirtyTime",0,"CSV_SkStreamingMarkDirtyTime");
  if ((param_1->CurrentThread != 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_GameThread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                          ,0x10d,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar3 = param_1->Mesh;
  pFVar4 = param_1->RenderData;
  if (((this->field_0x5c == '\0') && (pUVar3 != (USkeletalMesh *)0x0)) &&
     (pFVar4 != (FSkeletalMeshRenderData *)0x0)) {
    pFVar4->PendingFirstLODIdx = (this->field_0xc - this->field_0xe) + this->field_0xb;
    local_168.ComparisonIndex.Value = 0;
    local_168.Number = 0;
    local_160 = 0;
    this_01 = IStreamingManager::Get();
    pIVar21 = FStreamingManagerCollection::GetTextureStreamingManager(this_01);
    local_110 = 0;
    local_128 = &
                ___7__TFunction_OwnedObject_P6A_NPEBVUPrimitiveComponent___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_120 = `FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l15::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<bool_(__cdecl*)(UPrimitiveComponent_const_*),bool,UPrimitiveComponent_const_*>
                   ::Call;
    (**(code **)(*(longlong *)pIVar21 + 0x110))(pIVar21,pUVar3,&local_168,local_138);
    uVar25 = local_160 & 0xffffffff;
    uVar28 = uVar27;
    if (0 < (int)local_160) {
      do {
        uVar26 = (uint)uVar27;
        uVar18 = 0;
        if ((int)uVar26 < (int)uVar25) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *(longlong *)((longlong)local_168 + uVar28);
        pUVar22 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        iVar1 = (int)pUVar22->_padding_;
        if (((*(int *)(lVar5 + 0x38) < iVar1) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar22->_padding_)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Comps[Idx]->IsA<USkinnedMeshComponent>()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                                ,0x11c,L""), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = (ulonglong)(int)local_160;
        uVar18 = 0;
        if ((int)uVar26 < (int)local_160) {
          uVar18 = ~uVar26 >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar25 = local_160 & 0xffffffff;
        }
        this_00 = *(UActorComponent **)((longlong)local_168 + uVar28);
        if (*(int *)((longlong)&this_00[10]._padding_ + 4) < (int)(uint)pFVar4->PendingFirstLODIdx)
        {
          (**(code **)(this_00->_padding_ + 3000))(this_00,pFVar4->PendingFirstLODIdx);
          this_00[10].field_0x8a = this_00[10].field_0x8a | 0x20;
          UActorComponent::MarkRenderDynamicDataDirty(this_00);
          uVar25 = local_160 & 0xffffffff;
        }
        uVar27 = (ulonglong)(uVar26 + 1);
        uVar28 = uVar28 + 8;
      } while ((int)(uVar26 + 1) < (int)uVar25);
    }
    if (local_168 != (FName)0x0) {
      FMemory::Free((void *)local_168);
    }
  }
  else {
    (**(code **)(*(longlong *)this + 0x20))(this);
  }
  iVar1 = param_1->CurrentThread;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamOut::ConditionalMarkComponentsDirty'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  local_80 = (undefined ***)0x0;
  local_90 = this;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = 2;
  local_108 = local_a8;
  uStack_e0 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    pppuVar24 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar24 = local_80;
    }
    (*(code *)**pppuVar24)();
  }
  lVar5 = *(longlong *)&this->field_0x70;
  uVar13 = *(undefined8 *)&this->field_0x78;
  uVar7 = *(undefined4 *)&this->field_0x80;
  uVar8 = *(undefined4 *)&this->field_0x84;
  uVar9 = *(undefined4 *)&this->field_0x88;
  uVar10 = *(undefined4 *)&this->field_0x8c;
  uVar11 = *(undefined8 *)&this->field_0x90;
  plVar12 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_108;
  *(undefined8 *)&this->field_0x78 = uStack_100;
  *(undefined4 *)&this->field_0x80 = local_f8;
  *(undefined4 *)&this->field_0x84 = uStack_f4;
  *(undefined4 *)&this->field_0x88 = uStack_f0;
  *(undefined4 *)&this->field_0x8c = uStack_ec;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
  *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
  local_f8 = uVar7;
  uStack_f4 = uVar8;
  uStack_f0 = uVar9;
  uStack_ec = uVar10;
  local_e8 = uVar11;
  uStack_e0 = plVar12;
  local_108 = (code *)lVar5;
  uStack_100 = uVar13;
  if (lVar5 != 0) {
    plVar23 = (longlong *)&local_f8;
    if (plVar12 != (longlong *)0x0) {
      plVar23 = plVar12;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar1;
  local_d8 = local_78;
  uStack_b0 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar24 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar24 = local_50;
    }
    (*(code *)**pppuVar24)();
  }
  lVar5 = *(longlong *)&this->field_0xb0;
  uVar13 = *(undefined8 *)&this->field_0xb8;
  uVar7 = *(undefined4 *)&this->field_0xc0;
  uVar8 = *(undefined4 *)&this->field_0xc4;
  uVar9 = *(undefined4 *)&this->field_0xc8;
  uVar10 = *(undefined4 *)&this->field_0xcc;
  uVar11 = *(undefined8 *)&this->field_0xd0;
  plVar12 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_d8;
  *(undefined8 *)&this->field_0xb8 = uStack_d0;
  *(undefined4 *)&this->field_0xc0 = local_c8;
  *(undefined4 *)&this->field_0xc4 = uStack_c4;
  *(undefined4 *)&this->field_0xc8 = uStack_c0;
  *(undefined4 *)&this->field_0xcc = uStack_bc;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xd4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0xdc = uStack_b0._4_4_;
  local_d8 = (code *)lVar5;
  uStack_d0 = uVar13;
  local_c8 = uVar7;
  uStack_c4 = uVar8;
  uStack_c0 = uVar9;
  uStack_bc = uVar10;
  local_b8 = uVar11;
  uStack_b0 = plVar12;
  if (lVar5 != 0) {
    plVar23 = (longlong *)&local_c8;
    if (plVar12 != (longlong *)0x0) {
      plVar23 = plVar12;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar24 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar24 = local_80;
    }
    (*(code *)(*pppuVar24)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar24 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar24 = local_50;
    }
    (*(code *)(*pppuVar24)[2])();
  }
  FCsvProfiler::EndStat("SkStreamingMarkDirtyTime",0);
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(local_178,CycleScopeEnd);
  }
  return;
}

// ReleaseBuffers @ 1473548b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamOut::ReleaseBuffers(FSkeletalMeshStreamOut *this,FSkelMeshUpdateContext *param_1)

{
  uchar uVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ReleaseBuffers(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ReleaseBuffers>
  FVar14;
  FSkeletalMeshLODRenderData **ppFVar15;
  FRHICommandListBase *pFVar16;
  FName FVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  FColor_u_0 local_res20 [2];
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FRHIResourceReplaceBatcher local_68;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkeletalMeshStreamOut_ReleaseBuffers ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ReleaseBuffers(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ReleaseBuffers>
         )0x0) {
      pFVar13 = ::FName::FName(&local_88,"STAT_SkeletalMeshStreamOut_ReleaseBuffers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshStreamOut_ReleaseBuffers,
                 *pFVar13,L"FSkeletalMeshStreamOut::ReleaseBuffers","STATGROUP_StreamingDetails",
                 "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_SkeletalMeshStreamOut_ReleaseBuffers;
  if (StatPtr_STAT_SkeletalMeshStreamOut_ReleaseBuffers ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ReleaseBuffers(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ReleaseBuffers>
       )0x0) {
    pFVar13 = ::FName::FName(&local_80,"STAT_SkeletalMeshStreamOut_ReleaseBuffers");
    FVar14 = (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::ReleaseBuffers(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_ReleaseBuffers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkeletalMeshStreamOut_ReleaseBuffers,*pFVar13,
                          L"FSkeletalMeshStreamOut::ReleaseBuffers","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar11 = false;
  bVar8 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar10 = false;
  bVar6 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar11, bVar7 = bVar8, FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar11 = false;
      bVar8 = true;
      bVar10 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_98.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                   ,0x15e);
        bVar11 = true;
        bVar8 = true;
        bVar10 = true;
        bVar6 = true;
      }
    }
    bVar5 = bVar11;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar10 = true;
      bVar6 = true;
      goto LAB_147354a2f;
    }
  }
  bVar8 = bVar6;
  bVar11 = bVar10;
  bVar10 = false;
  bVar6 = false;
  local_90 = local_78;
  FVar17 = local_78;
LAB_147354a2f:
  if ((param_1->CurrentThread != 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x15f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                         ,0x160,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->RenderData;
  if (((this->field_0x5c == '\0') && (param_1->Mesh != (USkeletalMesh *)0x0)) &&
     (pFVar3 != (FSkeletalMeshRenderData *)0x0)) {
    pFVar3->CurrentFirstLODIdx = pFVar3->PendingFirstLODIdx;
    local_68.RHICmdList = (FRHICommandListBase *)FRHICommandListImmediate::Get();
    local_68.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Infos.ArrayNum = 0;
    local_68.Infos.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x70,&local_68.Infos.AllocatorInstance,0,&local_68.Infos.ArrayMax);
    uVar19 = (ulonglong)*(int *)&this->field_0x10;
    if (*(int *)&this->field_0x10 < *(int *)&this->field_0x14) {
      lVar20 = uVar19 * 8;
      do {
        uVar18 = (uint)uVar19;
        ppFVar15 = TArrayView<FSkeletalMeshLODRenderData_*,int>::operator[]
                             (&param_1->LODResourcesView,uVar18);
        this_00 = *ppFVar15;
        FSkeletalMeshLODRenderData::DecrementMemoryStats(this_00);
        FStaticMeshVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->StaticVertexBuffers).StaticMeshVertexBuffer,&local_68);
        FPositionVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->StaticVertexBuffers).PositionVertexBuffer,&local_68);
        FColorVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->StaticVertexBuffers).ColorVertexBuffer,&local_68);
        FSkinWeightDataVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->SkinWeightVertexBuffer).DataVertexBuffer,&local_68);
        FSkinWeightLookupVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->SkinWeightVertexBuffer).LookupVertexBuffer,&local_68);
        FSkeletalMeshVertexClothBuffer::ReleaseRHIForStreaming
                  (&this_00->ClothVertexBuffer,&local_68);
        FMultiSizeIndexContainer::ReleaseRHIForStreaming
                  (&this_00->MultiSizeIndexContainer,&local_68);
        FSkinWeightProfilesData::ReleaseRHIForStreaming(&this_00->SkinWeightProfilesData,&local_68);
        FSkeletalMeshHalfEdgeBuffer::ReleaseRHIForStreaming(&this_00->HalfEdgeBuffer,&local_68);
        bVar10 = IsRayTracingAllowed();
        if (bVar10) {
          uVar12 = 0;
          if ((int)uVar18 < (pFVar3->LODRenderData).Array.ArrayNum) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(char *)(*(longlong *)
                          ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar20) + 0x660)
               != '\0') &&
             (bVar10 = FRayTracingGeometry::IsEvicted(&this_00->StaticRayTracingGeometry), !bVar10))
          {
            FRayTracingGeometry::ReleaseRHIForStreaming
                      (&this_00->StaticRayTracingGeometry,&local_68);
          }
        }
        uVar19 = (ulonglong)(uVar18 + 1);
        lVar20 = lVar20 + 8;
        FVar17 = local_90;
        bVar5 = bVar11;
        bVar10 = bVar6;
        bVar7 = bVar8;
      } while ((int)(uVar18 + 1) < *(int *)&this->field_0x14);
    }
    if (local_68.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_68.RHICmdList,&local_68.Infos)
      ;
    }
    if (local_68.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Infos.AllocatorInstance.Data);
    }
    bVar11 = IsRayTracingAllowed();
    if ((bVar11) && (pFVar3 = param_1->RenderData, pFVar3->bSupportRayTracing != false)) {
      uVar1 = pFVar3->CurrentFirstLODIdx;
      iVar2 = pFVar3->RayTracingGeometryGroupHandle;
      pFVar16 = (FRHICommandListBase *)FRHICommandListImmediate::Get();
      FRayTracingGeometryManager::SetRayTracingGeometryGroupCurrentFirstLODIndex
                ((FRayTracingGeometryManager *)GRayTracingGeometryManager,pFVar16,iVar2,uVar1);
      (**(code **)((longlong)*GRayTracingGeometryManager + 0x50))
                (GRayTracingGeometryManager,param_1->RenderData->RayTracingGeometryGroupHandle);
    }
    this->field_0x5e = 1;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// WaitForReferences @ 14735f2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamOut::WaitForReferences
          (FSkeletalMeshStreamOut *this,FSkelMeshUpdateContext *param_1)

{
  longlong *plVar1;
  USkeletalMesh *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::WaitForReferences(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_WaitForReferences>
  FVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  FName FVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auStackY_298 [32];
  FColor_u_0 local_230 [2];
  FName local_228;
  FName local_220;
  FName local_210;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FName local_1e0;
  FName local_1d8 [2];
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FSkeletalMeshStreamOut *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FSkeletalMeshStreamOut *local_120;
  undefined ***local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined **local_98;
  FSkeletalMeshStreamOut *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FSkeletalMeshStreamOut *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar24 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_SkeletalMeshStreamOut_WaitForReferences =
         (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::WaitForReferences(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_WaitForReferences>
          )0x0;
    pFVar16 = ::FName::FName(&local_1e0,"STAT_SkeletalMeshStreamOut_WaitForReferences");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshStreamOut_WaitForReferences,
               *pFVar16,L"FSkeletalMeshStreamOut::WaitForReferences","STATGROUP_StreamingDetails",
               "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_SkeletalMeshStreamOut_WaitForReferences;
  if (StatPtr_STAT_SkeletalMeshStreamOut_WaitForReferences ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::WaitForReferences(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_WaitForReferences>
       )0x0) {
    pFVar16 = ::FName::FName(local_1d8,"STAT_SkeletalMeshStreamOut_WaitForReferences");
    FVar17 = (FThreadSafeStaticStat<_private:_void___cdecl_FSkeletalMeshStreamOut::WaitForReferences(FSkelMeshUpdateContext_const_&)_::_2_::FStat_STAT_SkeletalMeshStreamOut_WaitForReferences>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkeletalMeshStreamOut_WaitForReferences,*pFVar16,
                          L"FSkeletalMeshStreamOut::WaitForReferences","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar20 = *(FName *)FVar17;
  bVar10 = false;
  bVar12 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14735f41e:
    bVar11 = false;
    FVar20 = local_220;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_228.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                   ,0x12f);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14735f41e;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar11 = true;
  }
  if ((param_1->CurrentThread != 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\SkeletalMeshUpdate.cpp"
                          ,0x130,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = param_1->Mesh;
  if ((pUVar2 != (USkeletalMesh *)0x0) && (param_1->RenderData != (FSkeletalMeshRenderData *)0x0)) {
    uVar22 = (ulonglong)*(int *)&this->field_0x10;
    if (*(int *)&this->field_0x10 < *(int *)&this->field_0x14) {
      lVar23 = uVar22 * 8;
      uVar24 = 0;
      do {
        uVar21 = (uint)uVar22;
        uVar14 = 0;
        if ((int)uVar21 < (param_1->LODResourcesView).ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (ulonglong)(uVar21 + 1);
        plVar1 = (longlong *)((longlong)(param_1->LODResourcesView).DataPtr + lVar23);
        lVar23 = lVar23 + 8;
        uVar24 = (uVar24 - 1) + *(int *)(*plVar1 + 8);
      } while ((int)(uVar21 + 1) < *(int *)&this->field_0x14);
    }
    if (((this->PreviousNumberOfExternalReferences < uVar24) && (0 < this->NumReferenceChecks)) &&
       (this->PreviousNumberOfExternalReferences = uVar24, 2 < (byte)LogSkeletalMesh._0_1_)) {
      local_210 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_210,&local_200);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
    if ((uVar24 != 0) && (this->NumReferenceChecks < GStreamingMaxReferenceChecks)) {
      iVar15 = this->NumReferenceChecks + 1;
      this->NumReferenceChecks = iVar15;
      if ((GStreamingMaxReferenceChecks <= iVar15) && (2 < (byte)LogSkeletalMesh._0_1_)) {
        local_208 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_208,&local_1f0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      this->field_0x5d = 1;
      iVar15 = param_1->CurrentThread;
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_4>,0,0>
                   ::_vftable_;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_4>,void,FSkelMeshUpdateContext_const_&>
                  ::Call;
      local_158 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`43'::<lambda_3>,0,0>
                   ::_vftable_;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshStreamOut::WaitForReferences'::__l43::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
                  ::Call;
      local_110 = (undefined ***)0x0;
      local_120 = this;
      local_140 = (undefined ***)0x0;
      local_150 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 2;
      local_1c8 = local_168;
      uStack_1a0 = (longlong *)0x0;
      if (local_168 != (code *)0x0) {
        pppuVar19 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar19 = local_140;
        }
        (*(code *)**pppuVar19)(pppuVar19,&local_1b8);
      }
      lVar23 = *(longlong *)&this->field_0x70;
      uVar9 = *(undefined8 *)&this->field_0x78;
      uVar4 = *(undefined4 *)&this->field_0x80;
      uVar5 = *(undefined4 *)&this->field_0x84;
      uVar6 = *(undefined4 *)&this->field_0x88;
      uVar7 = *(undefined4 *)&this->field_0x8c;
      uVar8 = *(undefined8 *)&this->field_0x90;
      plVar1 = *(longlong **)&this->field_0x98;
      *(code **)&this->field_0x70 = local_1c8;
      *(undefined8 *)&this->field_0x78 = uStack_1c0;
      *(undefined4 *)&this->field_0x80 = (undefined4)local_1b8;
      *(undefined4 *)&this->field_0x84 = local_1b8._4_4_;
      *(undefined4 *)&this->field_0x88 = uStack_1b0;
      *(undefined4 *)&this->field_0x8c = uStack_1ac;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_1a8;
      *(undefined4 *)&this->field_0x94 = local_1a8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_1a0;
      *(undefined4 *)&this->field_0x9c = uStack_1a0._4_4_;
      local_1b8._0_4_ = uVar4;
      local_1b8._4_4_ = uVar5;
      uStack_1b0 = uVar6;
      uStack_1ac = uVar7;
      local_1a8 = uVar8;
      uStack_1a0 = plVar1;
      local_1c8 = (code *)lVar23;
      uStack_1c0 = uVar9;
      if (lVar23 != 0) {
        plVar18 = &local_1b8;
        if (plVar1 != (longlong *)0x0) {
          plVar18 = plVar1;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      *(int *)&this->field_0xa0 = iVar15;
      local_198 = local_138;
      uStack_170 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        pppuVar19 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar19 = local_110;
        }
        (*(code *)**pppuVar19)(pppuVar19,&local_188);
      }
      lVar23 = *(longlong *)&this->field_0xb0;
      uVar9 = *(undefined8 *)&this->field_0xb8;
      uVar4 = *(undefined4 *)&this->field_0xc0;
      uVar5 = *(undefined4 *)&this->field_0xc4;
      uVar6 = *(undefined4 *)&this->field_0xc8;
      uVar7 = *(undefined4 *)&this->field_0xcc;
      uVar8 = *(undefined8 *)&this->field_0xd0;
      plVar1 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_198;
      *(undefined8 *)&this->field_0xb8 = uStack_190;
      *(undefined4 *)&this->field_0xc0 = (undefined4)local_188;
      *(undefined4 *)&this->field_0xc4 = local_188._4_4_;
      *(undefined4 *)&this->field_0xc8 = uStack_180;
      *(undefined4 *)&this->field_0xcc = uStack_17c;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_178;
      *(undefined4 *)&this->field_0xd4 = local_178._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_170;
      *(undefined4 *)&this->field_0xdc = uStack_170._4_4_;
      local_198 = (code *)lVar23;
      uStack_190 = uVar9;
      local_188._0_4_ = uVar4;
      local_188._4_4_ = uVar5;
      uStack_180 = uVar6;
      uStack_17c = uVar7;
      local_178 = uVar8;
      uStack_170 = plVar1;
      if (lVar23 != 0) {
        plVar18 = &local_188;
        if (plVar1 != (longlong *)0x0) {
          plVar18 = plVar1;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      if (local_168 != (code *)0x0) {
        pppuVar19 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar19 = local_140;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      if (local_138 != (code *)0x0) {
        pppuVar19 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar19 = local_110;
        }
        (*(code *)(*pppuVar19)[2])();
      }
      goto LAB_14735fa15;
    }
  }
  iVar15 = param_1->CurrentThread;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_2>,0,0>
              ::_vftable_;
  local_50 = (undefined ***)0x0;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshStreamOut::WaitForReferences'::`38'::<lambda_1>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSkeletalMeshStreamOut::WaitForReferences'::__l38::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
             ::Call;
  local_60 = this;
  local_80 = (undefined ***)0x0;
  local_90 = this;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_108 = local_a8;
  uStack_e0 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    pppuVar19 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar19 = local_80;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_f8);
  }
  lVar23 = *(longlong *)&this->field_0x70;
  uVar9 = *(undefined8 *)&this->field_0x78;
  uVar4 = *(undefined4 *)&this->field_0x80;
  uVar5 = *(undefined4 *)&this->field_0x84;
  uVar6 = *(undefined4 *)&this->field_0x88;
  uVar7 = *(undefined4 *)&this->field_0x8c;
  uVar8 = *(undefined8 *)&this->field_0x90;
  plVar1 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_108;
  *(undefined8 *)&this->field_0x78 = uStack_100;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_f8;
  *(undefined4 *)&this->field_0x84 = local_f8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_f0;
  *(undefined4 *)&this->field_0x8c = uStack_ec;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
  *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
  local_108 = (code *)lVar23;
  uStack_100 = uVar9;
  local_f8._0_4_ = uVar4;
  local_f8._4_4_ = uVar5;
  uStack_f0 = uVar6;
  uStack_ec = uVar7;
  local_e8 = uVar8;
  uStack_e0 = plVar1;
  if (lVar23 != 0) {
    plVar18 = &local_f8;
    if (plVar1 != (longlong *)0x0) {
      plVar18 = plVar1;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  *(int *)&this->field_0xa0 = iVar15;
  local_d8 = local_78;
  uStack_b0 = (longlong *)0x0;
  if (local_78 != (code *)0x0) {
    pppuVar19 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar19 = local_50;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_c8);
  }
  lVar23 = *(longlong *)&this->field_0xb0;
  uVar9 = *(undefined8 *)&this->field_0xb8;
  uVar4 = *(undefined4 *)&this->field_0xc0;
  uVar5 = *(undefined4 *)&this->field_0xc4;
  uVar6 = *(undefined4 *)&this->field_0xc8;
  uVar7 = *(undefined4 *)&this->field_0xcc;
  uVar8 = *(undefined8 *)&this->field_0xd0;
  plVar1 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_d8;
  *(undefined8 *)&this->field_0xb8 = uStack_d0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_c8;
  *(undefined4 *)&this->field_0xc4 = local_c8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_c0;
  *(undefined4 *)&this->field_0xcc = uStack_bc;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xd4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_b0;
  *(undefined4 *)&this->field_0xdc = uStack_b0._4_4_;
  local_d8 = (code *)lVar23;
  uStack_d0 = uVar9;
  local_c8._0_4_ = uVar4;
  local_c8._4_4_ = uVar5;
  uStack_c0 = uVar6;
  uStack_bc = uVar7;
  local_b8 = uVar8;
  uStack_b0 = plVar1;
  if (lVar23 != 0) {
    plVar18 = &local_c8;
    if (plVar1 != (longlong *)0x0) {
      plVar18 = plVar1;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar19 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar19 = local_80;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar19 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar19 = local_50;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (this->NumReferenceChecks == 0) {
    this->field_0x5d = 1;
  }
LAB_14735fa15:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

