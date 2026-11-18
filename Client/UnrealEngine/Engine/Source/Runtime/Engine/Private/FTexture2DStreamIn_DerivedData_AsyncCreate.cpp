// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTexture2DStreamIn_DerivedData_AsyncCreate @ 148806a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTexture2DStreamIn_DerivedData_AsyncCreate * __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::FTexture2DStreamIn_DerivedData_AsyncCreate
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,UTexture2D *param_1,bool param_2)

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
  FStreamableTextureResource *this_00;
  FTexture2DStreamIn_DerivedData_AsyncCreate *pFVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  undefined1 auStack_128 [40];
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
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_70;
  undefined ***local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  FTexture2DStreamIn::FTexture2DStreamIn((FTexture2DStreamIn *)this,param_1);
  this->field_0x269 = param_2;
  *(undefined8 *)&this->field_0x260 = 0;
  *(undefined ***)this = &___7FTexture2DStreamIn_DerivedData_AsyncCreate_UE__6B_;
  this->field_0x268 = 0;
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
  local_58 = 0;
  local_78 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::FTexture2DStreamIn_DerivedData_AsyncCreate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::FTexture2DStreamIn_DerivedData_AsyncCreate'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_30 = (longlong *)0x0;
  local_60 = (undefined ***)0x0;
  local_70 = this;
  if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskState == TS_Locked || TaskState == TS_Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                       ,0x1b,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FTexture2DStreamIn_DerivedData_AsyncCreate *)(*pcVar1)();
      return pFVar11;
    }
  }
  *(undefined4 *)&this->field_0x68 = 2;
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

// AllocateMipsAndBeginIoRequests @ 14881c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

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
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests>
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
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,
                                 "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &
                   StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests
                   ,*pFVar15,
                   L"FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,
                             "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests"
                            );
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AllocateMipsAndBeginIoRequests
                          ,*pFVar15,
                          L"FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests"
                          ,"STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true
                          ,true,ST_int64,true,true,MCR_Invalid);
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0x77);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_14881c2ee;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_14881c2ee:
  if (param_1->CurrentThread != 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                        ,0x79,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DStreamIn::DoAllocateNewMips((FTexture2DStreamIn *)this,param_1);
  FTexture2DStreamIn_DerivedData::DoBeginIoRequests((FTexture2DStreamIn_DerivedData *)this,param_1);
  local_40 = (undefined ***)0x0;
  local_50 = this;
  this->field_0x5d = this->field_0x5c == '\0';
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests'::__l2::<lambda_2>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_88 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AllocateMipsAndBeginIoRequests'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
             ::Call;
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
  *(undefined4 *)&this->field_0x68 = 2;
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

// AsyncCreate @ 14881f6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

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
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate>
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
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,
                                 "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate,*pFVar15,
                   L"FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,"STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate")
    ;
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_AsyncCreate,
                          *pFVar15,L"FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0xa0);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_14881f81e;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_14881f81e:
  if (param_1->CurrentThread != 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                        ,0xa2,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DStreamIn::DoAsyncCreateWithNewMips((FTexture2DStreamIn *)this,param_1);
  FTexture2DStreamIn::DoFreeNewMips((FTexture2DStreamIn *)this,param_1);
  local_40 = (undefined ***)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate'::__l2::<lambda_2>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_88 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::AsyncCreate'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
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

// Cancel @ 148824dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel>
           )0x0) {
        pFVar7 = ::FName::FName(&local_res20,"STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel"
                               );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel,*pFVar7,
                   L"FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel>
       )0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Cancel,*pFVar7,
                         L"FTexture2DStreamIn_DerivedData_AsyncCreate::Cancel",
                         "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                         true,ST_int64,true,true,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0xb6);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148824f4c;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_148824f4c:
  if (param_1->CurrentThread != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                       ,0xb8,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FDerivedDataIoResponse::Cancel((FDerivedDataIoResponse *)&this->field_0x260);
  FTexture2DStreamIn_DerivedData::DoEndIoRequests((FTexture2DStreamIn_DerivedData *)this,param_1);
  FTexture2DStreamIn::DoFreeNewMips((FTexture2DStreamIn *)this,param_1);
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
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// EndIoRequests @ 148834d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

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
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests>
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
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests>
           )0x0) {
        pFVar15 = ::FName::FName(&local_110,
                                 "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests,*pFVar15,
                   L"FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests>
       )0x0) {
    pFVar15 = ::FName::FName(local_108,
                             "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_EndIoRequests,
                          *pFVar15,L"FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0x95);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140.s.LowPart = FVar20.Value;
      local_140.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar12 = true;
      goto LAB_148834f0f;
    }
  }
  bVar12 = false;
  FVar21 = local_130;
LAB_148834f0f:
  if (param_1->CurrentThread != 2) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.CurrentThread == TT_Async",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                        ,0x97,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DStreamIn_DerivedData::DoEndIoRequests((FTexture2DStreamIn_DerivedData *)this,param_1);
  local_40 = (undefined ***)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests'::__l2::<lambda_2>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_88 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::EndIoRequests'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
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
  *(undefined4 *)&this->field_0x68 = 2;
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

// Finalize @ 148836770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize>
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
      if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize,*pFVar7,
                   L"FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_Finalize,*pFVar7,
                         L"FTexture2DStreamIn_DerivedData_AsyncCreate::Finalize",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0xac);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1488368ef;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_1488368ef:
  if (param_1->CurrentThread != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                       ,0xae,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexture2DStreamIn::DoCopySharedMips((FTexture2DStreamIn *)this,param_1);
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

// PollIoRequests @ 14884c7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests
          (FTexture2DStreamIn_DerivedData_AsyncCreate *this,FTexture2DUpdateContext *param_1)

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
  FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests>
  FVar16;
  undefined ***pppuVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  FNameEntryId FVar21;
  FName FVar22;
  undefined1 auStackY_268 [32];
  FColor_u_0 local_208 [2];
  LARGE_INTEGER local_200;
  FName local_1f8;
  FName local_1f0;
  FStatMessage local_1e0;
  FName local_1d0;
  FName local_1c8 [2];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  code *local_158;
  undefined **local_148;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_140;
  undefined ***local_130;
  code *local_128;
  undefined **local_118;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_110;
  undefined ***local_100;
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
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTexture2DStreamIn_DerivedData_AsyncCreate *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests =
         (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests>
          )0x0;
    pFVar15 = ::FName::FName(&local_1d0,
                             "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests,*pFVar15,
               L"FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests",
               "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
               ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests;
  if (StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests>
       )0x0) {
    pFVar15 = ::FName::FName(local_1c8,
                             "STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Texture2DStreamIn_DerivedData_AsyncCreate_PollIoRequests,
                          *pFVar15,L"FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar18 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar18 == 0)) {
LAB_14884c930:
    bVar12 = false;
    FVar22 = local_1f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar21.Value;
        local_1f8.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                   ,0x84);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14884c930;
    local_200.s.LowPart = FVar21.Value;
    local_200.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar12 = true;
  }
  if ((param_1->CurrentThread != 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                          ,0x86,L""), bVar14)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar14 = FDerivedDataIoResponse::Poll((FDerivedDataIoResponse *)&this->field_0x260);
  if (bVar14) {
    local_40 = (undefined ***)0x0;
    local_58 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::`14'::<lambda_4>,0,0>
                ::_vftable_;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::__l14::<lambda_4>,void,FTexture2DUpdateContext_const_&>
               ::Call;
    local_88 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::`14'::<lambda_3>,0,0>
                ::_vftable_;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::__l14::<lambda_3>,void,FTexture2DUpdateContext_const_&>
               ::Call;
    local_50 = this;
    local_70 = (undefined ***)0x0;
    local_80 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 2;
    local_f8 = local_98;
    uStack_d0 = (longlong *)0x0;
    if (local_98 != (code *)0x0) {
      pppuVar20 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar20 = local_70;
      }
      (*(code *)**pppuVar20)(pppuVar20,&local_e8);
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
    local_f8 = (code *)lVar9;
    uStack_f0 = uVar10;
    local_e8._0_4_ = uVar3;
    local_e8._4_4_ = uVar4;
    uStack_e0 = uVar5;
    uStack_dc = uVar6;
    local_d8 = uVar7;
    uStack_d0 = plVar8;
    if (lVar9 != 0) {
      plVar19 = &local_e8;
      if (plVar8 != (longlong *)0x0) {
        plVar19 = plVar8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 1;
    local_c8 = local_68;
    uStack_a0 = (longlong *)0x0;
    if (local_68 != (code *)0x0) {
      pppuVar20 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar20 = local_40;
      }
      (*(code *)**pppuVar20)(pppuVar20,&local_b8);
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
      plVar19 = &local_b8;
      if (plVar8 != (longlong *)0x0) {
        plVar19 = plVar8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      pppuVar20 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar20 = local_70;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    if (local_68 == (code *)0x0) goto LAB_14884cd91;
    pppuVar20 = &local_58;
    pppuVar17 = local_40;
  }
  else {
    local_100 = (undefined ***)0x0;
    local_110 = this;
    this->field_0x5d = this->field_0x5c == '\0';
    local_118 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::`12'::<lambda_2>,0,0>
                 ::_vftable_;
    local_128 = Core::Private::Function::
                TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::__l12::<lambda_2>,void,FTexture2DUpdateContext_const_&>
                ::Call;
    local_148 = &Core::Private::Function::
                 TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::`12'::<lambda_1>,0,0>
                 ::_vftable_;
    local_158 = Core::Private::Function::
                TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData_AsyncCreate::PollIoRequests'::__l12::<lambda_1>,void,FTexture2DUpdateContext_const_&>
                ::Call;
    local_130 = (undefined ***)0x0;
    local_140 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar14)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 2;
    local_1b8 = local_158;
    uStack_190 = (longlong *)0x0;
    if (local_158 != (code *)0x0) {
      pppuVar20 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar20 = local_130;
      }
      (*(code *)**pppuVar20)(pppuVar20,&local_1a8);
    }
    lVar9 = *(longlong *)&this->field_0x70;
    uVar10 = *(undefined8 *)&this->field_0x78;
    uVar3 = *(undefined4 *)&this->field_0x80;
    uVar4 = *(undefined4 *)&this->field_0x84;
    uVar5 = *(undefined4 *)&this->field_0x88;
    uVar6 = *(undefined4 *)&this->field_0x8c;
    uVar7 = *(undefined8 *)&this->field_0x90;
    plVar8 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_1b8;
    *(undefined8 *)&this->field_0x78 = uStack_1b0;
    *(undefined4 *)&this->field_0x80 = (undefined4)local_1a8;
    *(undefined4 *)&this->field_0x84 = local_1a8._4_4_;
    *(undefined4 *)&this->field_0x88 = uStack_1a0;
    *(undefined4 *)&this->field_0x8c = uStack_19c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_198;
    *(undefined4 *)&this->field_0x94 = local_198._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_190;
    *(undefined4 *)&this->field_0x9c = uStack_190._4_4_;
    local_1a8._0_4_ = uVar3;
    local_1a8._4_4_ = uVar4;
    uStack_1a0 = uVar5;
    uStack_19c = uVar6;
    local_198 = uVar7;
    uStack_190 = plVar8;
    local_1b8 = (code *)lVar9;
    uStack_1b0 = uVar10;
    if (lVar9 != 0) {
      plVar19 = &local_1a8;
      if (plVar8 != (longlong *)0x0) {
        plVar19 = plVar8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 1;
    local_188 = local_128;
    uStack_160 = (longlong *)0x0;
    if (local_128 != (code *)0x0) {
      pppuVar20 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar20 = local_100;
      }
      (*(code *)**pppuVar20)(pppuVar20,&local_178);
    }
    lVar9 = *(longlong *)&this->field_0xb0;
    uVar10 = *(undefined8 *)&this->field_0xb8;
    uVar3 = *(undefined4 *)&this->field_0xc0;
    uVar4 = *(undefined4 *)&this->field_0xc4;
    uVar5 = *(undefined4 *)&this->field_0xc8;
    uVar6 = *(undefined4 *)&this->field_0xcc;
    uVar7 = *(undefined8 *)&this->field_0xd0;
    plVar8 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_188;
    *(undefined8 *)&this->field_0xb8 = uStack_180;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_178;
    *(undefined4 *)&this->field_0xc4 = local_178._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_170;
    *(undefined4 *)&this->field_0xcc = uStack_16c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_168;
    *(undefined4 *)&this->field_0xd4 = local_168._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_160;
    *(undefined4 *)&this->field_0xdc = uStack_160._4_4_;
    local_188 = (code *)lVar9;
    uStack_180 = uVar10;
    local_178._0_4_ = uVar3;
    local_178._4_4_ = uVar4;
    uStack_170 = uVar5;
    uStack_16c = uVar6;
    local_168 = uVar7;
    uStack_160 = plVar8;
    if (lVar9 != 0) {
      plVar19 = &local_178;
      if (plVar8 != (longlong *)0x0) {
        plVar19 = plVar8;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_158 != (code *)0x0) {
      pppuVar20 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar20 = local_130;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    if (local_128 == (code *)0x0) goto LAB_14884cd91;
    pppuVar20 = &local_118;
    pppuVar17 = local_100;
  }
  if (pppuVar17 != (undefined ***)0x0) {
    pppuVar20 = pppuVar17;
  }
  (*(code *)(*pppuVar20)[2])();
LAB_14884cd91:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1e0.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_1e0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_200);
      local_1e0.StatData.Pad[4] = '\0';
      local_1e0.StatData.Pad[5] = '\0';
      local_1e0.StatData.Pad[6] = '\0';
      local_1e0.StatData.Pad[7] = '\0';
      local_1e0.StatData.Pad[0] = local_200.s.LowPart._0_1_;
      local_1e0.StatData.Pad[1] = local_200.s.LowPart._1_1_;
      local_1e0.StatData.Pad[2] = local_200.s.LowPart._2_1_;
      local_1e0.StatData.Pad[3] = local_200.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1e0);
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

