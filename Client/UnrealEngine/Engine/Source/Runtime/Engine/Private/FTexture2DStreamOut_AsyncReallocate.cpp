// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FTexture2DStreamOut_AsyncReallocate @ 148807cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTexture2DStreamOut_AsyncReallocate * __thiscall
FTexture2DStreamOut_AsyncReallocate::FTexture2DStreamOut_AsyncReallocate
          (FTexture2DStreamOut_AsyncReallocate *this,UTexture2D *param_1)

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
  FTextureResource *pFVar10;
  FTexture2DStreamOut_AsyncReallocate *pFVar11;
  FStreamableTextureResource *this_00;
  longlong *plVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  undefined1 auStackY_138 [32];
  TArrayView<FTexture2DMipMap_const_*,int> local_100;
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
  FTexture2DStreamOut_AsyncReallocate *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this = &___7FTexture2DUpdate__6B_;
  *(undefined8 *)&this->field_0xe0 = 0;
  if (param_1 != (UTexture2D *)0x0) {
    pFVar10 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar10 != (FTextureResource *)0x0) goto LAB_148807d48;
  }
  this->field_0x5c = 1;
LAB_148807d48:
  LOCK();
  GPending2DUpdateCount = GPending2DUpdateCount + 1;
  UNLOCK();
  *(undefined ***)this = &___7FTexture2DStreamOut_AsyncReallocate__6B_;
  if ((byte)this->field_0xd <= (byte)this->field_0xe) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7314639388841869329>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                       ,0x11,"ResourceState.NumRequestedLODs < ResourceState.NumResidentLODs");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FTexture2DStreamOut_AsyncReallocate *)(*pcVar1)();
      return pFVar11;
    }
    this->field_0x5c = 1;
  }
  local_58 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncReallocate::FTexture2DStreamOut_AsyncReallocate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncReallocate::FTexture2DStreamOut_AsyncReallocate'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_30 = (longlong *)0x0;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if (param_1 != (UTexture2D *)0x0) {
    pFVar10 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar10 != (FTextureResource *)0x0) {
      pFVar10 = UTexture::GetResource((UTexture *)param_1);
      this_00 = (FStreamableTextureResource *)(**(code **)(pFVar10->_padding_ + 0x58))(pFVar10);
      if (this_00 != (FStreamableTextureResource *)0x0) {
        FStreamableTextureResource::GetPlatformMipsView(this_00,&local_100);
      }
    }
  }
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FTexture2DStreamOut_AsyncReallocate *)(*pcVar1)();
      return pFVar11;
    }
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_e8 = local_88;
  uStack_c0 = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar13 = local_60;
    }
    (*(code *)**pppuVar13)(pppuVar13,&local_d8);
  }
  lVar7 = *(longlong *)&this->field_0x70;
  uVar8 = *(undefined8 *)&this->field_0x78;
  uVar2 = *(undefined4 *)&this->field_0x80;
  uVar3 = *(undefined4 *)&this->field_0x84;
  uVar4 = *(undefined4 *)&this->field_0x88;
  uVar5 = *(undefined4 *)&this->field_0x8c;
  uVar6 = *(undefined8 *)&this->field_0x90;
  plVar14 = *(longlong **)&this->field_0x98;
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
  uStack_c0 = plVar14;
  local_e8 = (code *)lVar7;
  uStack_e0 = uVar8;
  if (lVar7 != 0) {
    plVar12 = &local_d8;
    if (plVar14 != (longlong *)0x0) {
      plVar12 = plVar14;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 0;
  local_b8 = local_58;
  uStack_90 = (longlong *)0x0;
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)*plVar14)(plVar14,&local_a8);
  }
  lVar7 = *(longlong *)&this->field_0xb0;
  uVar8 = *(undefined8 *)&this->field_0xb8;
  uVar2 = *(undefined4 *)&this->field_0xc0;
  uVar3 = *(undefined4 *)&this->field_0xc4;
  uVar4 = *(undefined4 *)&this->field_0xc8;
  uVar5 = *(undefined4 *)&this->field_0xcc;
  uVar6 = *(undefined8 *)&this->field_0xd0;
  plVar14 = *(longlong **)&this->field_0xd8;
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
  uStack_90 = plVar14;
  if (lVar7 != 0) {
    plVar12 = &local_a8;
    if (plVar14 != (longlong *)0x0) {
      plVar12 = plVar14;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar13 = local_60;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return this;
}

// AsyncReallocate @ 148821320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncReallocate::AsyncReallocate
          (FTexture2DStreamOut_AsyncReallocate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::AsyncReallocate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate>
  FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  FNameEntryId FVar20;
  FName FVar21;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTexture2DStreamOut_AsyncReallocate *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTexture2DStreamOut_AsyncReallocate *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::AsyncReallocate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,"STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate,*pFVar15,
                   L"FTexture2DStreamOut_AsyncReallocate::AsyncReallocate",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate;
  if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::AsyncReallocate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,"STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::AsyncReallocate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_AsyncReallocate,*pFVar15,
                          L"FTexture2DStreamOut_AsyncReallocate::AsyncReallocate",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar17 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar20.Value;
        local_138.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                   ,0x1b);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_14882149e;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_14882149e:
  if (param_1->CurrentThread != 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Render",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                        ,0x1c,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DUpdate::DoAsyncReallocate((FTexture2DUpdate *)this,param_1);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncReallocate::AsyncReallocate'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncReallocate::AsyncReallocate'::__l2::<lambda_2>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncReallocate::AsyncReallocate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncReallocate::AsyncReallocate'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_50 = this;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("TaskState == TS_Locked || TaskState == TS_Init",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                        ,0x1b,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_f8 = local_98;
  uStack_d0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_e8);
  }
  lVar9 = *(longlong *)&this->field_0x70;
  uVar10 = *(undefined8 *)&this->field_0x78;
  uVar3 = *(undefined4 *)&this->field_0x80;
  uVar4 = *(undefined4 *)&this->field_0x84;
  uVar5 = *(undefined4 *)&this->field_0x88;
  uVar6 = *(undefined4 *)&this->field_0x8c;
  uVar7 = *(undefined8 *)&this->field_0x90;
  plVar8 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 = local_f8;
  *(undefined8 *)&this->field_0x78 = uStack_f0;
  *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
  *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
  *(undefined4 *)&this->field_0x88 = uStack_e0;
  *(undefined4 *)&this->field_0x8c = uStack_dc;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
  *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
  *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
  *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
  local_e8._0_4_ = uVar3;
  local_e8._4_4_ = uVar4;
  uStack_e0 = uVar5;
  uStack_dc = uVar6;
  local_d8 = uVar7;
  uStack_d0 = plVar8;
  local_f8 = (code *)lVar9;
  uStack_f0 = uVar10;
  if (lVar9 != 0) {
    plVar18 = &local_e8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  *(undefined4 *)&this->field_0xa0 = 1;
  local_c8 = local_68;
  uStack_a0 = (longlong *)0x0;
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_b8);
  }
  lVar9 = *(longlong *)&this->field_0xb0;
  uVar10 = *(undefined8 *)&this->field_0xb8;
  uVar3 = *(undefined4 *)&this->field_0xc0;
  uVar4 = *(undefined4 *)&this->field_0xc4;
  uVar5 = *(undefined4 *)&this->field_0xc8;
  uVar6 = *(undefined4 *)&this->field_0xcc;
  uVar7 = *(undefined8 *)&this->field_0xd0;
  plVar8 = *(longlong **)&this->field_0xd8;
  *(code **)&this->field_0xb0 = local_c8;
  *(undefined8 *)&this->field_0xb8 = uStack_c0;
  *(undefined4 *)&this->field_0xc0 = (undefined4)local_b8;
  *(undefined4 *)&this->field_0xc4 = local_b8._4_4_;
  *(undefined4 *)&this->field_0xc8 = uStack_b0;
  *(undefined4 *)&this->field_0xcc = uStack_ac;
  *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
  *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
  *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
  *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
  local_c8 = (code *)lVar9;
  uStack_c0 = uVar10;
  local_b8._0_4_ = uVar3;
  local_b8._4_4_ = uVar4;
  uStack_b0 = uVar5;
  uStack_ac = uVar6;
  local_a8 = uVar7;
  uStack_a0 = plVar8;
  if (lVar9 != 0) {
    plVar18 = &local_b8;
    if (plVar8 != (longlong *)0x0) {
      plVar18 = plVar8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (local_68 != (code *)0x0) {
    pppuVar19 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar19 = local_40;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_120);
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

// Cancel @ 1488265f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncReallocate::Cancel
          (FTexture2DStreamOut_AsyncReallocate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Cancel>
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
      if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Cancel ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Cancel>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_Texture2DStreamOutAsyncReallocate_Cancel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Cancel,*pFVar7,
                   L"FTexture2DStreamOut_AsyncReallocate::Cancel","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Cancel;
  if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Cancel ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Cancel>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_Texture2DStreamOutAsyncReallocate_Cancel");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Cancel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Cancel,*pFVar7,
                         L"FTexture2DStreamOut_AsyncReallocate::Cancel","STATGROUP_StreamingDetails"
                         ,"STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                   ,0x32);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14882676f;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_14882676f:
  if (param_1->CurrentThread != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                       ,0x33,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DUpdate::DoFinishUpdate((FTexture2DUpdate *)this,param_1);
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

// Finalize @ 148837f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncReallocate::Finalize
          (FTexture2DStreamOut_AsyncReallocate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Finalize>
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
      if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Finalize ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Finalize>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_Texture2DStreamOutAsyncReallocate_Finalize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Finalize,*pFVar7,
                   L"FTexture2DStreamOut_AsyncReallocate::Finalize","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Finalize;
  if (StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Finalize ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Finalize>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_Texture2DStreamOutAsyncReallocate_Finalize");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncReallocate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncReallocate_Finalize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamOutAsyncReallocate_Finalize,*pFVar7,
                         L"FTexture2DStreamOut_AsyncReallocate::Finalize",
                         "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                         true,ST_int64,true,true,MCR_Invalid);
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                   ,0x25);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14883810f;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_14883810f:
  if (param_1->CurrentThread != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncReallocate.cpp"
                       ,0x26,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DUpdate::DoFinishUpdate((FTexture2DUpdate *)this,param_1);
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

