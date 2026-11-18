// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStaticMeshStreamOut @ 14877c270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStaticMeshStreamOut * __thiscall
FStaticMeshStreamOut::FStaticMeshStreamOut
          (FStaticMeshStreamOut *this,UStaticMesh *param_1,bool param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  FStaticMeshStreamOut *pFVar11;
  FStaticMeshRenderData *pFVar12;
  longlong *plVar13;
  undefined ***pppuVar14;
  undefined1 auStack_1d8 [48];
  code *local_1a8;
  longlong lStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  code *local_178;
  longlong lStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined **local_138;
  FStaticMeshStreamOut *local_130;
  undefined ***local_120;
  code *local_118;
  undefined **local_108;
  FStaticMeshStreamOut *local_100;
  undefined ***local_f0;
  code *local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined **local_78;
  FStaticMeshStreamOut *local_70;
  undefined ***local_60;
  code *local_58;
  undefined **local_48;
  FStaticMeshStreamOut *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FStaticMeshUpdate::FStaticMeshUpdate((FStaticMeshUpdate *)this,param_1);
  this->bDiscardCPUData = param_2;
  this->NumReferenceChecks = 0;
  this->PreviousNumberOfExternalReferences = 0;
  this->_padding_ = (longlong)&___7FStaticMeshStreamOut__6B_;
  if (param_1 == (UStaticMesh *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InMesh",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                        ,0x120,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FStaticMeshStreamOut *)(*pcVar1)();
      return pFVar11;
    }
  }
  pFVar12 = UStaticMesh::GetRenderData(param_1);
  if (pFVar12 != (FStaticMeshRenderData *)0x0) {
    pFVar12->CurrentFirstLODIdx =
         (*(char *)((longlong)&this->_padding_ + 4) - *(char *)((longlong)&this->_padding_ + 6)) +
         *(char *)((longlong)&this->_padding_ + 3);
  }
  if (param_2) {
    local_f0 = (undefined ***)0x0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_2>,0,0>
                 ::_vftable_;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_2>,void,FStaticMeshUpdateContext_const_&>
                ::Call;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`15'::<lambda_1>,0,0>
                 ::_vftable_;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l15::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
                ::Call;
    local_120 = (undefined ***)0x0;
    local_130 = this;
    local_100 = this;
    if (param_1 == (UStaticMesh *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                          ,0x24,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        pFVar11 = (FStaticMeshStreamOut *)(*pcVar1)();
        return pFVar11;
      }
    }
    UStaticMesh::GetRenderData(param_1);
    if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        pFVar11 = (FStaticMeshStreamOut *)(*pcVar1)();
        return pFVar11;
      }
    }
    *(undefined4 *)&this->_padding_ = 2;
    local_1a8 = local_148;
    uStack_180 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar14 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar14 = local_120;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_198);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar9 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    plVar5 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_1a8;
    this->_padding_ = lStack_1a0;
    *(undefined4 *)&this->_padding_ = (undefined4)local_198;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_198._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_190;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_18c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_188;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_188._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_180;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_180._4_4_;
    local_198._0_4_ = (int)lVar8;
    local_198._4_4_ = uVar2;
    uStack_190 = (int)lVar9;
    uStack_18c = uVar3;
    local_188 = lVar4;
    uStack_180 = plVar5;
    local_1a8 = (code *)lVar6;
    lStack_1a0 = lVar7;
    if (lVar6 != 0) {
      plVar13 = &local_198;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = 2;
    local_178 = local_118;
    uStack_150 = (longlong *)0x0;
    if (local_118 != (code *)0x0) {
      pppuVar14 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar14 = local_f0;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_168);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar9 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    plVar5 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_178;
    this->_padding_ = lStack_170;
    *(undefined4 *)&this->_padding_ = (undefined4)local_168;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_168._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_160;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_15c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_158;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_158._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_150;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_150._4_4_;
    local_178 = (code *)lVar6;
    lStack_170 = lVar7;
    local_168._0_4_ = (int)lVar8;
    local_168._4_4_ = uVar2;
    uStack_160 = (int)lVar9;
    uStack_15c = uVar3;
    local_158 = lVar4;
    uStack_150 = plVar5;
    if (lVar6 != 0) {
      plVar13 = &local_168;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_148 != (code *)0x0) {
      pppuVar14 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar14 = local_120;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if (local_118 != (code *)0x0) {
      pppuVar14 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar14 = local_f0;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  else {
    local_30 = (undefined ***)0x0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_4>,0,0>
                ::_vftable_;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_4>,void,FStaticMeshUpdateContext_const_&>
               ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshStreamOut::FStaticMeshStreamOut'::`17'::<lambda_3>,0,0>
                ::_vftable_;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshStreamOut::FStaticMeshStreamOut'::__l17::<lambda_3>,void,FStaticMeshUpdateContext_const_&>
               ::Call;
    local_60 = (undefined ***)0x0;
    local_70 = this;
    local_40 = this;
    if (param_1 == (UStaticMesh *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMesh",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                          ,0x24,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        pFVar11 = (FStaticMeshStreamOut *)(*pcVar1)();
        return pFVar11;
      }
    }
    UStaticMesh::GetRenderData(param_1);
    if (((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        pFVar11 = (FStaticMeshStreamOut *)(*pcVar1)();
        return pFVar11;
      }
    }
    *(undefined4 *)&this->_padding_ = 1;
    local_e8 = local_88;
    uStack_c0 = (longlong *)0x0;
    if (local_88 != (code *)0x0) {
      pppuVar14 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar14 = local_60;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_d8);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar9 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    plVar5 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_e8;
    this->_padding_ = lStack_e0;
    *(undefined4 *)&this->_padding_ = local_d8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_d4;
    *(undefined4 *)&this->_padding_ = uStack_d0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_cc;
    *(undefined4 *)&this->_padding_ = (undefined4)local_c8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_c0._4_4_;
    local_e8 = (code *)lVar6;
    lStack_e0 = lVar7;
    local_d8 = (int)lVar8;
    uStack_d4 = uVar2;
    uStack_d0 = (int)lVar9;
    uStack_cc = uVar3;
    local_c8 = lVar4;
    uStack_c0 = plVar5;
    if (lVar6 != 0) {
      plVar13 = (longlong *)&local_d8;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = 2;
    local_b8 = local_58;
    uStack_90 = (longlong *)0x0;
    if (local_58 != (code *)0x0) {
      pppuVar14 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar14 = local_30;
      }
      (*(code *)**pppuVar14)(pppuVar14,&local_a8);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar9 = this->_padding_;
    uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar4 = this->_padding_;
    plVar5 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_b8;
    this->_padding_ = lStack_b0;
    *(undefined4 *)&this->_padding_ = (undefined4)local_a8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_a8._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_a0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_9c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_98;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_98._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_90;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_90._4_4_;
    local_b8 = (code *)lVar6;
    lStack_b0 = lVar7;
    local_a8._0_4_ = (int)lVar8;
    local_a8._4_4_ = uVar2;
    uStack_a0 = (int)lVar9;
    uStack_9c = uVar3;
    local_98 = lVar4;
    uStack_90 = plVar5;
    if (lVar6 != 0) {
      plVar13 = &local_a8;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (local_88 != (code *)0x0) {
      pppuVar14 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar14 = local_60;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    if (local_58 != (code *)0x0) {
      pppuVar14 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar14 = local_30;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  return this;
}

// Cancel @ 14878aff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamOut::Cancel(FStaticMeshStreamOut *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::Cancel(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_Cancel>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_StaticMeshStreamOut_Cancel ==
          (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::Cancel(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_Cancel>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_StaticMeshStreamOut_Cancel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamOut_Cancel,*pFVar7,
                   L"FStaticMeshStreamOut::Cancel","STATGROUP_StreamingDetails","STATCAT_Advanced",
                   L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_StaticMeshStreamOut_Cancel;
  if (StatPtr_STAT_StaticMeshStreamOut_Cancel ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::Cancel(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_Cancel>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_StaticMeshStreamOut_Cancel");
    FVar8 = (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::Cancel(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_Cancel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamOut_Cancel,
                         *pFVar7,L"FStaticMeshStreamOut::Cancel","STATGROUP_StreamingDetails",
                         "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                         MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar10.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x184);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14878b16f;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_14878b16f:
  if (param_1->CurrentThread != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Async",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                       ,0x185,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->RenderData != (FStaticMeshRenderData *)0x0) {
    param_1->RenderData->CurrentFirstLODIdx =
         (*(char *)((longlong)&this->_padding_ + 4) - *(char *)((longlong)&this->_padding_ + 5)) +
         *(char *)((longlong)&this->_padding_ + 3);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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

// CheckReferencesAndDiscardCPUData @ 14878c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData
          (FStaticMeshStreamOut *this,FStaticMeshUpdateContext *param_1)

{
  longlong *plVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData>
  FVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  FName FVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
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
  longlong lStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FStaticMeshStreamOut *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FStaticMeshStreamOut *local_120;
  undefined ***local_110;
  code *local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined **local_98;
  FStaticMeshStreamOut *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FStaticMeshStreamOut *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  uVar25 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData =
         (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData>
          )0x0;
    pFVar15 = ::FName::FName(&local_1e0,"STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData")
    ;
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData,*pFVar15,
               L"FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData",
               "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
               ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData;
  if (StatPtr_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData>
       )0x0) {
    pFVar15 = ::FName::FName(local_1d8,"STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData");
    FVar16 = (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshStreamOut_CheckReferencesAndDiscardCPUData,
                          *pFVar15,L"FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14878c81e:
    bVar9 = false;
    FVar20 = local_220;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_230[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_230[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_228.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x136);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14878c81e;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar9 = true;
  }
  if ((param_1->CurrentThread != 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                          ,0x137,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = param_1->Mesh;
  if (param_1->RenderData == (FStaticMeshRenderData *)0x0) {
LAB_14878cc21:
    local_60 = this;
    local_50 = (undefined ***)0x0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_2>,0,0>
                ::_vftable_;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_2>,void,FStaticMeshUpdateContext_const_&>
               ::Call;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`38'::<lambda_1>,0,0>
                ::_vftable_;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l38::<lambda_1>,void,FStaticMeshUpdateContext_const_&>
               ::Call;
    local_80 = (undefined ***)0x0;
    local_90 = this;
    if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&this->_padding_ = 1;
    local_108 = local_a8;
    uStack_e0 = (longlong *)0x0;
    if (local_a8 != (code *)0x0) {
      pppuVar19 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar19 = local_80;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_f8);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar11 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar12 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar24 = this->_padding_;
    plVar1 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_108;
    this->_padding_ = lStack_100;
    *(undefined4 *)&this->_padding_ = (undefined4)local_f8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_f8._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_f0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_ec;
    *(undefined4 *)&this->_padding_ = (undefined4)local_e8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_e8._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_e0._4_4_;
    local_108 = (code *)lVar6;
    lStack_100 = lVar7;
    local_f8._0_4_ = (int)lVar11;
    local_f8._4_4_ = uVar4;
    uStack_f0 = (int)lVar12;
    uStack_ec = uVar5;
    local_e8 = lVar24;
    uStack_e0 = plVar1;
    if (lVar6 != 0) {
      plVar18 = &local_f8;
      if (plVar1 != (longlong *)0x0) {
        plVar18 = plVar1;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = 1;
    local_d8 = local_78;
    uStack_b0 = (longlong *)0x0;
    if (local_78 != (code *)0x0) {
      pppuVar19 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar19 = local_50;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_c8);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar11 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar12 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar24 = this->_padding_;
    plVar1 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_d8;
    this->_padding_ = lStack_d0;
    *(undefined4 *)&this->_padding_ = (undefined4)local_c8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_c0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_bc;
    *(undefined4 *)&this->_padding_ = (undefined4)local_b8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_b8._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_b0._4_4_;
    local_d8 = (code *)lVar6;
    lStack_d0 = lVar7;
    local_c8._0_4_ = (int)lVar11;
    local_c8._4_4_ = uVar4;
    uStack_c0 = (int)lVar12;
    uStack_bc = uVar5;
    local_b8 = lVar24;
    uStack_b0 = plVar1;
    if (lVar6 != 0) {
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
    if (local_78 == (code *)0x0) goto LAB_14878ce6f;
    pppuVar19 = &local_68;
    pppuVar17 = local_50;
  }
  else {
    if (pUVar2 == (UStaticMesh *)0x0) {
LAB_14878cbad:
      iVar14 = (int)this->_padding_;
      uVar23 = (ulonglong)iVar14;
      if (iVar14 < *(int *)((longlong)&this->_padding_ + 4)) {
        lVar24 = uVar23 * 8;
        do {
          uVar22 = (uint)uVar23;
          uVar25 = 0;
          if ((int)uVar22 < (param_1->LODResourcesView).ArrayNum) {
            uVar25 = ~uVar22 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FStaticMeshLODResources::DiscardCPUData
                    (*(FStaticMeshLODResources **)
                      (lVar24 + (longlong)(param_1->LODResourcesView).DataPtr));
          uVar23 = (ulonglong)(uVar22 + 1);
          lVar24 = lVar24 + 8;
        } while ((int)(uVar22 + 1) < *(int *)((longlong)&this->_padding_ + 4));
      }
      goto LAB_14878cc21;
    }
    iVar14 = (int)this->_padding_;
    uVar23 = (ulonglong)iVar14;
    if (iVar14 < *(int *)((longlong)&this->_padding_ + 4)) {
      lVar24 = uVar23 * 8;
      uVar25 = 0;
      do {
        uVar21 = (uint)uVar23;
        uVar22 = 0;
        if ((int)uVar21 < (param_1->LODResourcesView).ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar23 = (ulonglong)(uVar21 + 1);
        plVar1 = (longlong *)((longlong)(param_1->LODResourcesView).DataPtr + lVar24);
        lVar24 = lVar24 + 8;
        uVar25 = (uVar25 - 1) + *(int *)(*plVar1 + 8);
      } while ((int)(uVar21 + 1) < *(int *)((longlong)&this->_padding_ + 4));
    }
    if (((this->PreviousNumberOfExternalReferences < uVar25) && (0 < this->NumReferenceChecks)) &&
       (this->PreviousNumberOfExternalReferences = uVar25, 2 < (byte)LogContentStreaming._0_1_)) {
      local_210 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_210,&local_200);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
    if ((uVar25 == 0) || (GStreamingMaxReferenceChecks <= this->NumReferenceChecks))
    goto LAB_14878cbad;
    iVar14 = this->NumReferenceChecks + 1;
    this->NumReferenceChecks = iVar14;
    if ((GStreamingMaxReferenceChecks <= iVar14) && (2 < (byte)LogContentStreaming._0_1_)) {
      local_208 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_208,&local_1f0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
    local_110 = (undefined ***)0x0;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_4>,0,0>
                 ::_vftable_;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_4>,void,FStaticMeshUpdateContext_const_&>
                ::Call;
    local_158 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::`45'::<lambda_3>,0,0>
                 ::_vftable_;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`FStaticMeshStreamOut::CheckReferencesAndDiscardCPUData'::__l45::<lambda_3>,void,FStaticMeshUpdateContext_const_&>
                ::Call;
    local_120 = this;
    local_140 = (undefined ***)0x0;
    local_150 = this;
    if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)&this->_padding_ = 2;
    local_1c8 = local_168;
    uStack_1a0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      pppuVar19 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar19 = local_140;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_1b8);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar11 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar12 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar24 = this->_padding_;
    plVar1 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_1c8;
    this->_padding_ = lStack_1c0;
    *(undefined4 *)&this->_padding_ = (undefined4)local_1b8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_1b8._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_1b0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_1ac;
    *(undefined4 *)&this->_padding_ = (undefined4)local_1a8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_1a8._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_1a0._4_4_;
    local_1b8._0_4_ = (int)lVar11;
    local_1b8._4_4_ = uVar4;
    uStack_1b0 = (int)lVar12;
    uStack_1ac = uVar5;
    local_1a8 = lVar24;
    uStack_1a0 = plVar1;
    local_1c8 = (code *)lVar6;
    lStack_1c0 = lVar7;
    if (lVar6 != 0) {
      plVar18 = &local_1b8;
      if (plVar1 != (longlong *)0x0) {
        plVar18 = plVar1;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = 2;
    local_198 = local_138;
    uStack_170 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      pppuVar19 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar19 = local_110;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_188);
    }
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar11 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar12 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar24 = this->_padding_;
    plVar1 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_198;
    this->_padding_ = lStack_190;
    *(undefined4 *)&this->_padding_ = (undefined4)local_188;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_188._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_180;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_17c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_178;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_178._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_170;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_170._4_4_;
    local_198 = (code *)lVar6;
    lStack_190 = lVar7;
    local_188._0_4_ = (int)lVar11;
    local_188._4_4_ = uVar4;
    uStack_180 = (int)lVar12;
    uStack_17c = uVar5;
    local_178 = lVar24;
    uStack_170 = plVar1;
    if (lVar6 != 0) {
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
    if (local_138 == (code *)0x0) goto LAB_14878ce6f;
    pppuVar19 = &local_128;
    pppuVar17 = local_110;
  }
  if (pppuVar17 != (undefined ***)0x0) {
    pppuVar19 = pppuVar17;
  }
  (*(code *)(*pppuVar19)[2])();
LAB_14878ce6f:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// ReleaseRHIBuffers @ 1487b74b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshStreamOut::ReleaseRHIBuffers
          (FStaticMeshStreamOut *this,FStaticMeshUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  FStaticMeshLODResources *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::ReleaseRHIBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_ReleaseRHIBuffers>
  FVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar11;
  FName FVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FRHIResourceReplaceBatcher local_60;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StaticMeshStreamOut_ReleaseRHIBuffers ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::ReleaseRHIBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_ReleaseRHIBuffers>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res20,"STAT_StaticMeshStreamOut_ReleaseRHIBuffers");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshStreamOut_ReleaseRHIBuffers,
                 *pFVar9,L"FStaticMeshStreamOut::ReleaseRHIBuffers","STATGROUP_StreamingDetails",
                 "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_StaticMeshStreamOut_ReleaseRHIBuffers;
  if (StatPtr_STAT_StaticMeshStreamOut_ReleaseRHIBuffers ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::ReleaseRHIBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_ReleaseRHIBuffers>
       )0x0) {
    pFVar9 = ::FName::FName(&local_88,"STAT_StaticMeshStreamOut_ReleaseRHIBuffers");
    FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_FStaticMeshStreamOut::ReleaseRHIBuffers(FStaticMeshUpdateContext_const_&)_::_2_::FStat_STAT_StaticMeshStreamOut_ReleaseRHIBuffers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshStreamOut_ReleaseRHIBuffers,*pFVar9,
                          L"FStaticMeshStreamOut::ReleaseRHIBuffers","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar8 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                   ,0x168);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1487b7616;
    }
  }
  bVar5 = false;
  FVar12 = local_80;
LAB_1487b7616:
  if ((param_1->CurrentThread != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                         ,0x169,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->RenderData != (FStaticMeshRenderData *)0x0) {
    bVar7 = IsInRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_60.Infos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.RHICmdList = (FRHICommandListBase *)&GRHICommandList.CommandListImmediate;
    local_60.Infos.ArrayNum = 0;
    local_60.Infos.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x62,&local_60.Infos.AllocatorInstance,0,&local_60.Infos.ArrayMax);
    iVar2 = (int)this->_padding_;
    uVar14 = (ulonglong)iVar2;
    if (iVar2 < *(int *)((longlong)&this->_padding_ + 4)) {
      lVar15 = uVar14 * 8;
      do {
        uVar13 = (uint)uVar14;
        uVar8 = 0;
        if ((int)uVar13 < (param_1->LODResourcesView).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(FStaticMeshLODResources **)
                   (lVar15 + (longlong)(param_1->LODResourcesView).DataPtr);
        FStaticMeshLODResources::DecrementMemoryStats(this_00);
        FStaticMeshVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->VertexBuffers).StaticMeshVertexBuffer,&local_60);
        FPositionVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->VertexBuffers).PositionVertexBuffer,&local_60);
        FColorVertexBuffer::ReleaseRHIForStreaming
                  (&(this_00->VertexBuffers).ColorVertexBuffer,&local_60);
        FRawStaticIndexBuffer::ReleaseRHIForStreaming(&this_00->IndexBuffer,&local_60);
        FRawStaticIndexBuffer::ReleaseRHIForStreaming(&this_00->DepthOnlyIndexBuffer,&local_60);
        if (this_00->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
          FRawStaticIndexBuffer::ReleaseRHIForStreaming
                    (&this_00->AdditionalIndexBuffers->ReversedIndexBuffer,&local_60);
          FRawStaticIndexBuffer::ReleaseRHIForStreaming
                    (&this_00->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,&local_60);
          FRawStaticIndexBuffer::ReleaseRHIForStreaming
                    (&this_00->AdditionalIndexBuffers->WireframeIndexBuffer,&local_60);
        }
        if ((this_00->RayTracingGeometry != (FRayTracingGeometry *)0x0) &&
           (bVar7 = FRayTracingGeometry::IsEvicted(this_00->RayTracingGeometry), !bVar7)) {
          bVar7 = IsRayTracingAllowed();
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsRayTracingAllowed()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StaticMeshUpdate.cpp"
                                 ,0x177,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FRayTracingGeometry::ReleaseRHIForStreaming(this_00->RayTracingGeometry,&local_60);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        lVar15 = lVar15 + 8;
      } while ((int)(uVar13 + 1) < *(int *)((longlong)&this->_padding_ + 4));
    }
    UStaticMesh::RequestUpdateCachedRenderState(param_1->Mesh);
    if (local_60.Infos.ArrayNum != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x138))(GDynamicRHI,local_60.RHICmdList);
    }
    if (local_60.Infos.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Infos.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_70.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_70);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

