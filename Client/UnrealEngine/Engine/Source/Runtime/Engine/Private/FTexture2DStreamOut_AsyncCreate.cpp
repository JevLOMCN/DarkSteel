// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FTexture2DStreamOut_AsyncCreate @ 1488079e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTexture2DStreamOut_AsyncCreate * __thiscall
FTexture2DStreamOut_AsyncCreate::FTexture2DStreamOut_AsyncCreate
          (FTexture2DStreamOut_AsyncCreate *this,UTexture2D *param_1)

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
  FTexture2DStreamOut_AsyncCreate *pFVar11;
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
  FTexture2DStreamOut_AsyncCreate *local_70;
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
    if (pFVar10 != (FTextureResource *)0x0) goto LAB_148807a58;
  }
  this->field_0x5c = 1;
LAB_148807a58:
  LOCK();
  GPending2DUpdateCount = GPending2DUpdateCount + 1;
  UNLOCK();
  *(undefined ***)this = &___7FTexture2DStreamOut_AsyncCreate__6B_;
  if ((byte)this->field_0xd <= (byte)this->field_0xe) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2635707917864533997>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                       ,0x13,"ResourceState.NumRequestedLODs < ResourceState.NumResidentLODs");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FTexture2DStreamOut_AsyncCreate *)(*pcVar1)();
      return pFVar11;
    }
    this->field_0x5c = 1;
  }
  local_58 = 0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncCreate::FTexture2DStreamOut_AsyncCreate'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncCreate::FTexture2DStreamOut_AsyncCreate'::__l2::<lambda_1>,void,FTexture2DUpdateContext_const_&>
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
      pFVar11 = (FTexture2DStreamOut_AsyncCreate *)(*pcVar1)();
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

// AsyncCreate @ 148820100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncCreate::AsyncCreate
          (FTexture2DStreamOut_AsyncCreate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  FTexture2DMipMap *pFVar5;
  ETextureCreateFlags EVar6;
  FRHIResource *this_00;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate>
  FVar21;
  FTexture2DMipMap **ppFVar22;
  FString *pFVar23;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong *plVar24;
  undefined ***pppuVar25;
  FName FVar26;
  ELLMTag EVar27;
  undefined1 auStackY_238 [32];
  FName local_1d0;
  FColor_u_0 local_1c8;
  FLLMScope local_1c4;
  FRHIResource *local_1c0;
  FName local_1b8;
  FScriptContainerElement *local_1b0;
  FTexture2DStreamOut_AsyncCreate *local_1a8;
  FName local_1a0;
  FMemScope local_190;
  FRHIResource **local_188;
  undefined8 *local_180;
  LARGE_INTEGER local_178;
  FStatMessage local_170;
  FName local_160;
  FName local_158;
  FString local_150;
  code *local_138 [2];
  undefined **local_128;
  FTexture2DStreamOut_AsyncCreate *local_120;
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
  FTexture2DStreamOut_AsyncCreate *local_90;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  FTexture2DStreamOut_AsyncCreate *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1a8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate>
         )0x0) {
      pFVar20 = ::FName::FName(&local_160,"STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate,*pFVar20,
                 L"FTexture2DStreamOut_AsyncReallocate::AsyncReallocate",
                 "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                 ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate;
  if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate>
       )0x0) {
    pFVar20 = ::FName::FName(&local_158,"STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate");
    FVar21 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::AsyncCreate(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Texture2DStreamOutAsyncCreate_AsyncReallocate,*pFVar20,
                          L"FTexture2DStreamOut_AsyncReallocate::AsyncReallocate",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar16 = false;
  bVar17 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  bVar18 = false;
  bVar19 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_148820297:
    bVar17 = bVar19;
    bVar16 = bVar18;
    bVar18 = false;
    FVar26 = local_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar16 = false;
      bVar17 = true;
      bVar18 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                   ,0x1d);
        bVar16 = true;
        bVar17 = true;
        bVar18 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148820297;
    local_1d0 = FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar18 = true;
  }
  if ((param_1->CurrentThread != 2) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CurrentThread == TT_Async",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                          ,0x1e,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->field_0x5c != '\0') || (param_1->Resource == (FTexture2DResource *)0x0)) ||
     (param_1->Texture == (UTexture2D *)0x0)) goto LAB_148820529;
  ppFVar22 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                       (&param_1->MipsView,*(int *)&this->field_0x14);
  pFVar5 = *ppFVar22;
  local_188 = (FRHIResource **)&this->field_0xe0;
  if ((*local_188 != (FRHIResource *)0x0) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2635707917864533980>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                          ,0x24,"IntermediateTextureRHI == nullptr"), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  pFVar23 = ::FName::ToString((FName *)((longlong)&param_1->Resource->_padding_ + 4),&local_150);
  if ((pFVar23->Data).ArrayNum == 0) {
    local_1b0 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_1b0 = (pFVar23->Data).AllocatorInstance.Data;
  }
  uVar3 = pFVar5->SizeY;
  uVar4 = pFVar5->SizeX;
  EVar6 = param_1->Resource->_padding_;
  EVar27 = Textures;
  if ((EVar6 & (DepthStencilTargetable|RenderTargetable)) != None) {
    EVar27 = RenderTargets;
  }
  FLLMScope::FLLMScope(&local_1c4,EVar27,false,None,Default,true);
  FMemScope::FMemScope(&local_190,EVar27,true);
  RHIGetDefaultResourceState(EVar6,false);
  (**(code **)(GDynamicRHI->_padding_ + 0x1a0))(GDynamicRHI,&local_1c0,uVar4,uVar3);
  FMemScope::~FMemScope(&local_190);
  FLLMScope::~FLLMScope(&local_1c4);
  if (local_188 == &local_1c0) {
LAB_148820469:
    if (local_1c0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_1c0);
    }
  }
  else {
    this_00 = *local_188;
    *local_188 = local_1c0;
    local_1c0 = (FRHIResource *)0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      goto LAB_148820469;
    }
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  this = local_1a8;
  if (local_1d0 != (FName)0x0) {
    LOCK();
    *(int *)&local_1a8->field_0x58 = *(int *)&local_1a8->field_0x58 + 1;
    UNLOCK();
    local_110 = 0;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::`15'::<lambda_1>,1,0>
                 ::_vftable_;
    local_120 = local_1a8;
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::__l15::<lambda_1>,void>
                   ::Call;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)&local_180,(TStatIdData *)local_138,
               (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_1d0);
    if (local_180 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_180 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_180)(local_180,1);
      }
    }
    if (local_1d0 != (FName)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_1d0 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_1d0)(local_1d0,1);
      }
    }
  }
LAB_148820529:
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::__l2::<lambda_3>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTexture2DStreamOut_AsyncCreate::AsyncCreate'::__l2::<lambda_2>,void,FTexture2DUpdateContext_const_&>
             ::Call;
  local_50 = (undefined ***)0x0;
  local_60 = this;
  local_80 = (undefined ***)0x0;
  local_90 = this;
  if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(undefined4 *)&this->field_0x68 = 1;
  local_108 = local_a8;
  uStack_e0 = (longlong *)0x0;
  if (local_a8 != (code *)0x0) {
    pppuVar25 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar25 = local_80;
    }
    (*(code *)**pppuVar25)(pppuVar25,&local_f8);
  }
  lVar14 = *(longlong *)&this->field_0x70;
  uVar15 = *(undefined8 *)&this->field_0x78;
  uVar8 = *(undefined4 *)&this->field_0x80;
  uVar9 = *(undefined4 *)&this->field_0x84;
  uVar10 = *(undefined4 *)&this->field_0x88;
  uVar11 = *(undefined4 *)&this->field_0x8c;
  uVar12 = *(undefined8 *)&this->field_0x90;
  plVar13 = *(longlong **)&this->field_0x98;
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
  local_f8 = uVar8;
  uStack_f4 = uVar9;
  uStack_f0 = uVar10;
  uStack_ec = uVar11;
  local_e8 = uVar12;
  uStack_e0 = plVar13;
  local_108 = (code *)lVar14;
  uStack_100 = uVar15;
  if (lVar14 != 0) {
    plVar24 = (longlong *)&local_f8;
    if (plVar13 != (longlong *)0x0) {
      plVar24 = plVar13;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  uStack_b0 = (longlong *)0x0;
  *(undefined4 *)&this->field_0xa0 = 1;
  local_d8 = local_78;
  if (local_78 != (code *)0x0) {
    pppuVar25 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar25 = local_50;
    }
    (*(code *)**pppuVar25)(pppuVar25,&local_c8);
  }
  lVar14 = *(longlong *)&this->field_0xb0;
  uVar15 = *(undefined8 *)&this->field_0xb8;
  uVar8 = *(undefined4 *)&this->field_0xc0;
  uVar9 = *(undefined4 *)&this->field_0xc4;
  uVar10 = *(undefined4 *)&this->field_0xc8;
  uVar11 = *(undefined4 *)&this->field_0xcc;
  uVar12 = *(undefined8 *)&this->field_0xd0;
  plVar13 = *(longlong **)&this->field_0xd8;
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
  local_d8 = (code *)lVar14;
  uStack_d0 = uVar15;
  local_c8 = uVar8;
  uStack_c4 = uVar9;
  uStack_c0 = uVar10;
  uStack_bc = uVar11;
  local_b8 = uVar12;
  uStack_b0 = plVar13;
  if (lVar14 != 0) {
    plVar24 = (longlong *)&local_c8;
    if (plVar13 != (longlong *)0x0) {
      plVar24 = plVar13;
    }
    (**(code **)(*plVar24 + 0x10))();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar25 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar25 = local_80;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (local_78 != (code *)0x0) {
    pppuVar25 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar25 = local_50;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar18) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_170.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_170.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_178);
      local_170.StatData.Pad[4] = '\0';
      local_170.StatData.Pad[5] = '\0';
      local_170.StatData.Pad[6] = '\0';
      local_170.StatData.Pad[7] = '\0';
      local_170.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_170.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_170.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_170.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_170);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// Cancel @ 1488262a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncCreate::Cancel
          (FTexture2DStreamOut_AsyncCreate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Cancel>
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
      if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_Cancel ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Cancel>
           )0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_Texture2DStreamOutAsyncCreate_Cancel");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture2DStreamOutAsyncCreate_Cancel,
                   *pFVar7,L"FTexture2DStreamOut_AsyncCreate::Cancel","STATGROUP_StreamingDetails",
                   "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid)
        ;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_Texture2DStreamOutAsyncCreate_Cancel;
  if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_Cancel ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Cancel>
       )0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_Texture2DStreamOutAsyncCreate_Cancel");
    FVar8 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Cancel(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Cancel>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamOutAsyncCreate_Cancel,*pFVar7,
                         L"FTexture2DStreamOut_AsyncCreate::Cancel","STATGROUP_StreamingDetails",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                   ,0x59);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14882641f;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_14882641f:
  if (param_1->CurrentThread != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                       ,0x5a,L"");
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

// Finalize @ 148837c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DStreamOut_AsyncCreate::Finalize
          (FTexture2DStreamOut_AsyncCreate *this,FTexture2DUpdateContext *param_1)

{
  int *piVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Finalize>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FRHITexture *pFVar13;
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
      if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_Finalize ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Finalize>
           )0x0) {
        pFVar8 = ::FName::FName(&local_res20,"STAT_Texture2DStreamOutAsyncCreate_Finalize");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture2DStreamOutAsyncCreate_Finalize
                   ,*pFVar8,L"FTexture2DStreamOut_AsyncReallocate::Finalize",
                   "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,true,
                   ST_int64,true,true,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_Texture2DStreamOutAsyncCreate_Finalize;
  if (StatPtr_STAT_Texture2DStreamOutAsyncCreate_Finalize ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Finalize>
       )0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_Texture2DStreamOutAsyncCreate_Finalize");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_FTexture2DStreamOut_AsyncCreate::Finalize(FTexture2DUpdateContext_const_&)_::_2_::FStat_STAT_Texture2DStreamOutAsyncCreate_Finalize>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_Texture2DStreamOutAsyncCreate_Finalize,*pFVar8,
                         L"FTexture2DStreamOut_AsyncReallocate::Finalize",
                         "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                         true,ST_int64,true,true,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                   ,0x44);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_148837d78;
    }
  }
  bVar5 = false;
  FVar12 = local_60;
LAB_148837d78:
  if (param_1->CurrentThread != 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamOut_AsyncCreate.cpp"
                       ,0x45,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->field_0x5c == '\0') && (*(FRHITexture **)&this->field_0xe0 != (FRHITexture *)0x0)) &&
     (param_1->Resource != (FTexture2DResource *)0x0)) {
    pFVar2 = (FRHITexture *)param_1->Resource->_padding_;
    pFVar13 = (FRHITexture *)0x0;
    if ((pFVar2 != (FRHITexture *)0x0) && ((pFVar2->TextureDesc).Dimension == Texture2D)) {
      pFVar13 = pFVar2;
    }
    UE::RHI::CopySharedMips_AssumeSRVMaskState
              ((FRHICommandList *)&GRHICommandList.CommandListImmediate,pFVar13,
               *(FRHITexture **)&this->field_0xe0);
  }
  FTexture2DUpdate::DoFinishUpdate((FTexture2DUpdate *)this,param_1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
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

