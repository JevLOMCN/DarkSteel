// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FTextureStreamIn @ 148808600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextureStreamIn * __thiscall
FTextureStreamIn::FTextureStreamIn
          (FTextureStreamIn *this,UTexture *param_1,FTextureMipAllocator *param_2,
          FTextureMipDataProvider *param_3,FTextureMipDataProvider *param_4)

{
  FTextureMipAllocator *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  EThreadType EVar12;
  FTextureStreamIn *pFVar13;
  FTextureResource *pFVar14;
  TArrayView<FTexture2DMipMap_const_*,int> *pTVar15;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar16;
  longlong *plVar17;
  undefined ***pppuVar18;
  longlong *plVar19;
  undefined1 auStack_188 [32];
  FTextureUpdateContext local_168;
  TArrayView<FTexture2DMipMap_const_*,int> local_140;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTextureStreamIn *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  this->StartingMipIndex = -1;
  (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
  (this->MipDataProviders).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
        )0x0;
  *(undefined ***)this = &___7FTextureStreamIn__6B_;
  (this->MipDataProviders).ArrayNum = 0;
  (this->MipDataProviders).ArrayMax = 2;
  (this->SyncOptions).bSnooze = (bool *)0x0;
  (this->SyncOptions).Counter = (FThreadSafeCounter *)0x0;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback = 0;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x28 = 0;
  (this->MipInfos).AllocatorInstance.SecondaryData = (ForElementType<FTextureMipInfo>)0x0;
  (this->MipInfos).ArrayNum = 0;
  (this->MipInfos).ArrayMax = 0xf;
  this->bIsPollingMipData = false;
  this->bIsPostprocessingGPUMipData = false;
  if (param_2 == (FTextureMipAllocator *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InMipAllocator",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                        ,0x30,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FTextureStreamIn *)(*pcVar2)();
      return pFVar13;
    }
  }
  this->StartingMipIndex = *(int *)&this->field_0x14;
  pFVar1 = (this->MipAllocator).Ptr;
  if ((pFVar1 != param_2) &&
     ((this->MipAllocator).Ptr = param_2, pFVar1 != (FTextureMipAllocator *)0x0)) {
    (**(code **)pFVar1->_padding_)();
  }
  if (param_3 != (FTextureMipDataProvider *)0x0) {
    iVar11 = (this->MipDataProviders).ArrayNum;
    if (iVar11 == (this->MipDataProviders).ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>_>
                         (0x808,&(this->MipDataProviders).AllocatorInstance,
                          &(this->MipDataProviders).ArrayMax);
    }
    (this->MipDataProviders).ArrayNum = iVar11 + 1;
    FVar16 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                   )0x0) {
      FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )&this->MipDataProviders;
    }
    *(FTextureMipDataProvider **)((longlong)FVar16 + (longlong)iVar11 * 8) = param_3;
  }
  if (param_4 == (FTextureMipDataProvider *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InDefaultMipDataProvider",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                        ,0x39,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FTextureStreamIn *)(*pcVar2)();
      return pFVar13;
    }
  }
  iVar11 = (this->MipDataProviders).ArrayNum;
  if (iVar11 == (this->MipDataProviders).ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>_>
                       (0x808,&(this->MipDataProviders).AllocatorInstance,
                        &(this->MipDataProviders).ArrayMax);
  }
  (this->MipDataProviders).ArrayNum = iVar11 + 1;
  FVar16 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&this->MipDataProviders;
  }
  *(FTextureMipDataProvider **)((longlong)FVar16 + (longlong)iVar11 * 8) = param_4;
  (this->SyncOptions).bSnooze = (bool *)&this->field_0x5d;
  (this->SyncOptions).Counter = (FThreadSafeCounter *)&this->field_0x58;
  local_128 = *(longlong *)&(this->SyncOptions).RescheduleCallback;
  uVar8 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x8;
  local_118 = *(longlong *)&(this->SyncOptions).RescheduleCallback.field_0x10;
  uStack_110 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x18;
  uVar3 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x20;
  plStack_100 = *(longlong **)&(this->SyncOptions).RescheduleCallback.field_0x28;
  *(code **)&(this->SyncOptions).RescheduleCallback =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FTextureStreamIn::FTextureStreamIn'::__l2::<lambda_1>,void>::Call;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x8 = uStack_120;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x10 = 0x51ba5988;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x14 = 1;
  *(FTextureStreamIn **)&(this->SyncOptions).RescheduleCallback.field_0x18 = this;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x20 = (undefined4)local_108;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x24 = local_108._4_4_;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x28 = 0;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x2c = 0;
  local_108 = uVar3;
  uStack_120 = uVar8;
  if (local_128 != 0) {
    plVar19 = &local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar19 = plStack_100;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  local_168.MipsView._8_8_ = (ulonglong)(uint)local_168.MipsView._12_4_ << 0x20;
  local_168.CurrentThread = 0;
  local_168.Resource = (FStreamableTextureResource *)0x0;
  local_168.MipsView.DataPtr = (FTexture2DMipMap **)0x0;
  local_168.Texture = param_1;
  if (param_1 == (UTexture *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipDataProvider.cpp"
                        ,0xf,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FTextureStreamIn *)(*pcVar2)();
      return pFVar13;
    }
    if (local_168.Texture == (UTexture *)0x0) goto LAB_148808921;
  }
  pFVar14 = UTexture::GetResource(local_168.Texture);
  if (pFVar14 != (FTextureResource *)0x0) {
    pFVar14 = UTexture::GetResource(local_168.Texture);
    local_168.Resource =
         (FStreamableTextureResource *)(**(code **)(pFVar14->_padding_ + 0x88))(pFVar14);
    if (local_168.Resource != (FStreamableTextureResource *)0x0) {
      pTVar15 = FStreamableTextureResource::GetPlatformMipsView(local_168.Resource,&local_140);
      local_168.MipsView.DataPtr = pTVar15->DataPtr;
      local_168.MipsView._8_8_ = *(undefined8 *)&pTVar15->ArrayNum;
    }
  }
LAB_148808921:
  EVar12 = GetMipDataProviderThread(this,Init);
  if (EVar12 == TT_None) {
    InitMipDataProviders(this,&local_168);
  }
  else {
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::FTextureStreamIn'::`22'::<lambda_2>,0,0>::
                _vftable_;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextureStreamIn::FTextureStreamIn'::__l22::<lambda_2>,void,FTextureUpdateContext_const_&>
               ::Call;
    local_68 = 0;
    local_40 = (longlong *)0x0;
    local_70 = (undefined ***)0x0;
    local_80 = this;
    if ((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L"");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        pFVar13 = (FTextureStreamIn *)(*pcVar2)();
        return pFVar13;
      }
    }
    *(EThreadType *)&this->field_0x68 = EVar12;
    local_f8 = local_98;
    uStack_d0 = (longlong *)0x0;
    if (local_98 != (code *)0x0) {
      pppuVar18 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar18 = local_70;
      }
      (*(code *)**pppuVar18)(pppuVar18,&local_e8);
    }
    lVar9 = *(longlong *)&this->field_0x70;
    uVar8 = *(undefined8 *)&this->field_0x78;
    uVar4 = *(undefined4 *)&this->field_0x80;
    uVar5 = *(undefined4 *)&this->field_0x84;
    uVar6 = *(undefined4 *)&this->field_0x88;
    uVar7 = *(undefined4 *)&this->field_0x8c;
    uVar3 = *(undefined8 *)&this->field_0x90;
    plVar19 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_f8;
    *(undefined8 *)&this->field_0x78 = uStack_f0;
    *(undefined4 *)&this->field_0x80 = local_e8;
    *(undefined4 *)&this->field_0x84 = uStack_e4;
    *(undefined4 *)&this->field_0x88 = uStack_e0;
    *(undefined4 *)&this->field_0x8c = uStack_dc;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
    *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
    *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
    local_f8 = (code *)lVar9;
    uStack_f0 = uVar8;
    local_e8 = uVar4;
    uStack_e4 = uVar5;
    uStack_e0 = uVar6;
    uStack_dc = uVar7;
    local_d8 = uVar3;
    uStack_d0 = plVar19;
    if (lVar9 != 0) {
      plVar17 = (longlong *)&local_e8;
      if (plVar19 != (longlong *)0x0) {
        plVar17 = plVar19;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    *(undefined4 *)&this->field_0xa0 = 0;
    local_c8 = local_68;
    uStack_a0 = (longlong *)0x0;
    if (local_68 != 0) {
      plVar19 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar19 = local_40;
      }
      (**(code **)*plVar19)(plVar19,&local_b8);
    }
    lVar9 = *(longlong *)&this->field_0xb0;
    uVar8 = *(undefined8 *)&this->field_0xb8;
    uVar4 = *(undefined4 *)&this->field_0xc0;
    uVar5 = *(undefined4 *)&this->field_0xc4;
    uVar6 = *(undefined4 *)&this->field_0xc8;
    uVar7 = *(undefined4 *)&this->field_0xcc;
    uVar3 = *(undefined8 *)&this->field_0xd0;
    plVar19 = *(longlong **)&this->field_0xd8;
    *(longlong *)&this->field_0xb0 = local_c8;
    *(undefined8 *)&this->field_0xb8 = uStack_c0;
    *(undefined4 *)&this->field_0xc0 = local_b8;
    *(undefined4 *)&this->field_0xc4 = uStack_b4;
    *(undefined4 *)&this->field_0xc8 = uStack_b0;
    *(undefined4 *)&this->field_0xcc = uStack_ac;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
    *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
    *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
    local_c8 = lVar9;
    uStack_c0 = uVar8;
    local_b8 = uVar4;
    uStack_b4 = uVar5;
    uStack_b0 = uVar6;
    uStack_ac = uVar7;
    local_a8 = uVar3;
    uStack_a0 = plVar19;
    if (lVar9 != 0) {
      plVar17 = (longlong *)&local_b8;
      if (plVar19 != (longlong *)0x0) {
        plVar17 = plVar19;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      pppuVar18 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar18 = local_70;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_68 != 0) {
      plVar19 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar19 = local_40;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  return this;
}

// ~FTextureStreamIn @ 14880cde0

void __thiscall FTextureStreamIn::~FTextureStreamIn(FTextureStreamIn *this)

{
  ForElementType<FTextureMipInfo> FVar1;
  FTextureMipAllocator *pFVar2;
  longlong *plVar3;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar4;
  longlong *plVar5;
  
  *(undefined ***)this = &___7FTextureStreamIn__6B_;
  FVar1 = (this->MipInfos).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FTextureMipInfo>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if (*(longlong *)&(this->SyncOptions).RescheduleCallback != 0) {
    plVar5 = *(longlong **)&(this->SyncOptions).RescheduleCallback.field_0x28;
    plVar3 = (longlong *)&(this->SyncOptions).RescheduleCallback.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar3 = plVar5;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FVar4 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar4 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  DestructItems<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int>
            ((TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_> *)FVar4,
             (this->MipDataProviders).ArrayNum);
  FVar4 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 != (FTextureMipAllocator *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (*(longlong *)&this->field_0xb0 != 0) {
    plVar5 = (longlong *)&this->field_0xc0;
    if (*(longlong **)&this->field_0xd8 != (longlong *)0x0) {
      plVar5 = *(longlong **)&this->field_0xd8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->field_0x70 != 0) {
    plVar5 = (longlong *)&this->field_0x80;
    if (*(longlong **)&this->field_0x98 != (longlong *)0x0) {
      plVar5 = *(longlong **)&this->field_0x98;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// Abort @ 1488167e0

void __thiscall FTextureStreamIn::Abort(FTextureStreamIn *this)

{
  bool bVar1;
  bool bVar2;
  FQueuedThreadPool *pFVar3;
  FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *this_00;
  
  if (*(int *)&this->field_0x60 != 0) {
    this->field_0x5c = 1;
  }
  if ((this->bIsPollingMipData != false) || (this->bIsPostprocessingGPUMipData != false)) {
    this_00 = ::operator_new(0x48);
    if (this_00 == (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *)0x0) {
      this_00 = (FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask> *)0x0;
    }
    else {
      this_00->_padding_ = 0;
      this_00->_padding_ =
           (longlong)&___7__FAutoDeleteAsyncTask_VFAbortPollMipsTask_FTextureStreamIn____6B_;
      bVar1 = this->bIsPostprocessingGPUMipData;
      bVar2 = this->bIsPollingMipData;
      (this_00->Task).PendingUpdate.Reference = this;
      LOCK();
      *(int *)&this->field_0x64 = *(int *)&this->field_0x64 + 1;
      UNLOCK();
      (this_00->Task).bIsPollingMipData = bVar2;
      (this_00->Task).bIsPostprocessingGPUMipData = bVar1;
    }
    pFVar3 = GThreadPool;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    if (pFVar3 != (FQueuedThreadPool *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148816881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pFVar3 + 0x18))(pFVar3,this_00,3);
      return;
    }
    FAutoDeleteAsyncTask<FTextureStreamIn::FAbortPollMipsTask>::DoWork(this_00);
  }
  return;
}

// AllocateNewMips @ 14881c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::AllocateNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  ForElementType<FTextureMipInfo> FVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  EThreadType EVar15;
  EThreadType EVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_AllocateNewMips>
  FVar18;
  undefined ***pppuVar19;
  ForElementType<FTextureMipInfo> FVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  FNameEntryId FVar24;
  FName FVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStackY_2c8 [32];
  FColor_u_0 local_268 [2];
  FName local_260;
  uint local_258;
  uint uStack_254;
  FName local_250;
  FName local_240;
  FName local_238 [2];
  code *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8;
  undefined **local_1e8;
  FTextureStreamIn *local_1e0;
  undefined ***local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined **local_188;
  FTextureStreamIn *local_180;
  undefined ***local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined **local_f8;
  FTextureStreamIn *local_f0;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  FTextureStreamIn *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FTextureStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar28 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_AllocateNewMips =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_AllocateNewMips>
          )0x0;
    pFVar17 = ::FName::FName(&local_240,"STAT_TextureStreamIn_AllocateNewMips");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_AllocateNewMips,*pFVar17,
               L"FTextureStreamIn::AllocateNewMips","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_TextureStreamIn_AllocateNewMips;
  if (StatPtr_STAT_TextureStreamIn_AllocateNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_AllocateNewMips>
       )0x0) {
    pFVar17 = ::FName::FName(local_238,"STAT_TextureStreamIn_AllocateNewMips");
    FVar18 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_AllocateNewMips>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_AllocateNewMips
                          ,*pFVar17,L"FTextureStreamIn::AllocateNewMips",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar18;
  bVar10 = false;
  bVar12 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar26 = FVar25.Number;
  if ((FVar24.Value == 0) && (uVar26 == 0)) {
LAB_14881c820:
    bVar11 = false;
    FVar25 = local_250;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_268[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar24.Value;
        local_260.Number = uVar26;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x126);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14881c820;
    local_258 = FVar24.Value;
    uStack_254 = uVar26;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar11 = true;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 == (FTextureMipAllocator *)0x0) {
LAB_14881c876:
    bVar30 = ::FDebug::CheckVerifyFailedImpl2
                       ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                        ,0xb5,L"");
    if (bVar30) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    EVar1 = pFVar2->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar30 = EVar1 == Async;
    }
    else {
      if ((param_1->CurrentThread != 1) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x16,L""), bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar30 = EVar1 == Render;
    }
    if (!bVar30) goto LAB_14881c876;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  cVar13 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1,&this->MipInfos,&this->SyncOptions);
  if ((cVar13 == '\0') && (*(int *)&this->field_0x60 != 0)) {
    this->field_0x5c = 1;
  }
  if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("MipAllocator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                          ,0x72,L""), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->field_0x5c == '\0') &&
     (pFVar2 = (this->MipAllocator).Ptr, pFVar2->NextTickState == AllocateMips)) {
    EVar1 = pFVar2->NextTickThread;
    if (EVar1 != Async) {
      if (EVar1 != Render) {
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0x7c,L"");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14881c945;
      }
      uVar28 = 1;
    }
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::AllocateNewMips'::`8'::<lambda_2>,0,0>::
                 _vftable_;
    local_1d0 = (undefined ***)0x0;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::AllocateNewMips'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1e0 = this;
    EVar15 = GetCancelThread(this);
    local_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::AllocateNewMips'::`8'::<lambda_1>,0,0>::
                _vftable_;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::AllocateNewMips'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                  ::Call;
    local_c0 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar30)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = uVar28;
    TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
              ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->field_0x70,
               (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_d8);
    *(EThreadType *)&this->field_0xa0 = EVar15;
    local_228 = local_1f8;
    uStack_200 = (longlong *)0x0;
    if (local_1f8 != (code *)0x0) {
      pppuVar23 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar23 = local_1d0;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_218);
    }
    lVar29 = *(longlong *)&this->field_0xb0;
    uVar9 = *(undefined8 *)&this->field_0xb8;
    uVar28 = *(undefined4 *)&this->field_0xc0;
    uVar5 = *(undefined4 *)&this->field_0xc4;
    uVar6 = *(undefined4 *)&this->field_0xc8;
    uVar7 = *(undefined4 *)&this->field_0xcc;
    uVar8 = *(undefined8 *)&this->field_0xd0;
    plVar22 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_228;
    *(undefined8 *)&this->field_0xb8 = uStack_220;
    *(undefined4 *)&this->field_0xc0 = local_218;
    *(undefined4 *)&this->field_0xc4 = uStack_214;
    *(undefined4 *)&this->field_0xc8 = uStack_210;
    *(undefined4 *)&this->field_0xcc = uStack_20c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_208;
    *(undefined4 *)&this->field_0xd4 = local_208._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_200;
    *(undefined4 *)&this->field_0xdc = uStack_200._4_4_;
    local_218 = uVar28;
    uStack_214 = uVar5;
    uStack_210 = uVar6;
    uStack_20c = uVar7;
    local_208 = uVar8;
    uStack_200 = plVar22;
    local_228 = (code *)lVar29;
    uStack_220 = uVar9;
    if (lVar29 != 0) {
      plVar21 = (longlong *)&local_218;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar23 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar23 = local_b0;
      }
      (*(code *)(*pppuVar23)[2])();
    }
    if (local_1f8 == (code *)0x0) goto LAB_14881cf19;
    pppuVar23 = &local_1e8;
    pppuVar19 = local_1d0;
  }
  else {
LAB_14881c945:
    uVar27 = (ulonglong)*(int *)&this->field_0x14;
    if (*(int *)&this->field_0x14 < *(int *)&this->field_0x10) {
      lVar29 = uVar27 * 0x30;
      do {
        uVar26 = (uint)uVar27;
        if (((int)uVar26 < 0) || ((this->MipInfos).ArrayNum <= (int)uVar26)) {
LAB_14881c9d4:
          if (*(int *)&this->field_0x60 != 0) {
            this->field_0x5c = 1;
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar26 < (this->MipInfos).ArrayNum) {
            uVar14 = ~uVar26 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (this->MipInfos).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<FTextureMipInfo>)&this->MipInfos;
          if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
            FVar20 = FVar3;
          }
          if (*(longlong *)(lVar29 + (longlong)FVar20) == 0) goto LAB_14881c9d4;
        }
        uVar27 = (ulonglong)(uVar26 + 1);
        lVar29 = lVar29 + 0x30;
      } while ((int)(uVar26 + 1) < *(int *)&this->field_0x10);
    }
    EVar15 = GetMipDataProviderThread(this,GetMips);
    if (EVar15 == TT_None) {
      if (*(int *)&this->field_0x60 != 0) {
        this->field_0x5c = 1;
      }
      local_e0 = (undefined ***)0x0;
      local_f8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::AllocateNewMips'::`20'::<lambda_5>,0,0>::
                  _vftable_;
      local_108 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::AllocateNewMips'::__l20::<lambda_5>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_f0 = this;
      EVar15 = GetCancelThread(this);
      local_78 = 0;
      local_50 = (longlong *)0x0;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 0;
      local_168 = local_78;
      uStack_140 = (longlong *)0x0;
      if (local_78 != 0) {
        plVar22 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar22 = local_50;
        }
        (**(code **)*plVar22)(plVar22,&local_158);
      }
      lVar29 = *(longlong *)&this->field_0x70;
      uVar9 = *(undefined8 *)&this->field_0x78;
      uVar28 = *(undefined4 *)&this->field_0x80;
      uVar5 = *(undefined4 *)&this->field_0x84;
      uVar6 = *(undefined4 *)&this->field_0x88;
      uVar7 = *(undefined4 *)&this->field_0x8c;
      uVar8 = *(undefined8 *)&this->field_0x90;
      plVar22 = *(longlong **)&this->field_0x98;
      *(longlong *)&this->field_0x70 = local_168;
      *(undefined8 *)&this->field_0x78 = uStack_160;
      *(undefined4 *)&this->field_0x80 = local_158;
      *(undefined4 *)&this->field_0x84 = uStack_154;
      *(undefined4 *)&this->field_0x88 = uStack_150;
      *(undefined4 *)&this->field_0x8c = uStack_14c;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_148;
      *(undefined4 *)&this->field_0x94 = local_148._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_140;
      *(undefined4 *)&this->field_0x9c = uStack_140._4_4_;
      local_168 = lVar29;
      uStack_160 = uVar9;
      local_158 = uVar28;
      uStack_154 = uVar5;
      uStack_150 = uVar6;
      uStack_14c = uVar7;
      local_148 = uVar8;
      uStack_140 = plVar22;
      if (lVar29 != 0) {
        plVar21 = (longlong *)&local_158;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar15;
      local_138 = local_108;
      uStack_110 = (longlong *)0x0;
      if (local_108 != (code *)0x0) {
        pppuVar23 = &local_f8;
        if (local_e0 != (undefined ***)0x0) {
          pppuVar23 = local_e0;
        }
        (*(code *)**pppuVar23)(pppuVar23,&local_128);
      }
      lVar29 = *(longlong *)&this->field_0xb0;
      uVar9 = *(undefined8 *)&this->field_0xb8;
      uVar28 = *(undefined4 *)&this->field_0xc0;
      uVar5 = *(undefined4 *)&this->field_0xc4;
      uVar6 = *(undefined4 *)&this->field_0xc8;
      uVar7 = *(undefined4 *)&this->field_0xcc;
      uVar8 = *(undefined8 *)&this->field_0xd0;
      plVar22 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_138;
      *(undefined8 *)&this->field_0xb8 = uStack_130;
      *(undefined4 *)&this->field_0xc0 = local_128;
      *(undefined4 *)&this->field_0xc4 = uStack_124;
      *(undefined4 *)&this->field_0xc8 = uStack_120;
      *(undefined4 *)&this->field_0xcc = uStack_11c;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_118;
      *(undefined4 *)&this->field_0xd4 = local_118._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_110;
      *(undefined4 *)&this->field_0xdc = uStack_110._4_4_;
      local_138 = (code *)lVar29;
      uStack_130 = uVar9;
      local_128 = uVar28;
      uStack_124 = uVar5;
      uStack_120 = uVar6;
      uStack_11c = uVar7;
      local_118 = uVar8;
      uStack_110 = plVar22;
      if (lVar29 != 0) {
        plVar21 = (longlong *)&local_128;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      if (local_78 != 0) {
        plVar22 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar22 = local_50;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_108 == (code *)0x0) goto LAB_14881cf19;
      pppuVar23 = &local_f8;
      pppuVar19 = local_e0;
    }
    else {
      local_170 = (undefined ***)0x0;
      local_188 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::AllocateNewMips'::`18'::<lambda_4>,0,0>
                   ::_vftable_;
      local_198 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::AllocateNewMips'::__l18::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_180 = this;
      EVar16 = GetCancelThread(this);
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::AllocateNewMips'::`18'::<lambda_3>,0,0>::
                  _vftable_;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamIn::AllocateNewMips'::__l18::<lambda_3>,void,FTextureUpdateContext_const_&>
                    ::Call;
      local_90 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(EThreadType *)&this->field_0x68 = EVar15;
      TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->field_0x70,
                 (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_a8);
      *(EThreadType *)&this->field_0xa0 = EVar16;
      local_1c8 = local_198;
      uStack_1a0 = (longlong *)0x0;
      if (local_198 != (code *)0x0) {
        pppuVar23 = &local_188;
        if (local_170 != (undefined ***)0x0) {
          pppuVar23 = local_170;
        }
        (*(code *)**pppuVar23)(pppuVar23,&local_1b8);
      }
      lVar29 = *(longlong *)&this->field_0xb0;
      uVar9 = *(undefined8 *)&this->field_0xb8;
      uVar28 = *(undefined4 *)&this->field_0xc0;
      uVar5 = *(undefined4 *)&this->field_0xc4;
      uVar6 = *(undefined4 *)&this->field_0xc8;
      uVar7 = *(undefined4 *)&this->field_0xcc;
      uVar8 = *(undefined8 *)&this->field_0xd0;
      plVar22 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_1c8;
      *(undefined8 *)&this->field_0xb8 = uStack_1c0;
      *(undefined4 *)&this->field_0xc0 = local_1b8;
      *(undefined4 *)&this->field_0xc4 = uStack_1b4;
      *(undefined4 *)&this->field_0xc8 = uStack_1b0;
      *(undefined4 *)&this->field_0xcc = uStack_1ac;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_1a8;
      *(undefined4 *)&this->field_0xd4 = local_1a8._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_1a0;
      *(undefined4 *)&this->field_0xdc = uStack_1a0._4_4_;
      local_1c8 = (code *)lVar29;
      uStack_1c0 = uVar9;
      local_1b8 = uVar28;
      uStack_1b4 = uVar5;
      uStack_1b0 = uVar6;
      uStack_1ac = uVar7;
      local_1a8 = uVar8;
      uStack_1a0 = plVar22;
      if (lVar29 != 0) {
        plVar21 = (longlong *)&local_1b8;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      if (local_a8[0] != (code *)0x0) {
        pppuVar23 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar23 = local_80;
        }
        (*(code *)(*pppuVar23)[2])();
      }
      if (local_198 == (code *)0x0) goto LAB_14881cf19;
      pppuVar23 = &local_188;
      pppuVar19 = local_170;
    }
  }
  if (pppuVar19 != (undefined ***)0x0) {
    pppuVar23 = pppuVar19;
  }
  (*(code *)(*pppuVar23)[2])();
LAB_14881cf19:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// Cancel @ 148826c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureStreamIn::Cancel(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  FName FVar3;
  FRHITexture *this_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_Cancel>
  FVar21;
  undefined ***pppuVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined ***pppuVar27;
  FNameEntryId FVar28;
  undefined4 uVar29;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar30;
  FTextureMipAllocator *pFVar31;
  undefined1 auStackY_218 [32];
  undefined1 local_1b7 [7];
  uint local_1b0;
  uint uStack_1ac;
  FColor_u_0 local_1a8 [2];
  FName local_1a0;
  FName local_198;
  FName local_190;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  local_180;
  FTextureUpdateContext *local_178;
  FName local_170;
  FName local_168 [2];
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined **local_e8;
  FTextureStreamIn *local_e0;
  undefined ***local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  FTextureStreamIn *local_b0;
  undefined ***local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  iVar19 = 0;
  local_178 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_Cancel =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_Cancel>
          )0x0;
    pFVar20 = ::FName::FName(&local_170,"STAT_TextureStreamIn_Cancel");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_Cancel,*pFVar20,
               L"FTextureStreamIn::Cancel","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_TextureStreamIn_Cancel;
  if (StatPtr_STAT_TextureStreamIn_Cancel ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_Cancel>
       )0x0) {
    pFVar20 = ::FName::FName(local_168,"STAT_TextureStreamIn_Cancel");
    FVar21 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_Cancel>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_Cancel,*pFVar20
                          ,L"FTextureStreamIn::Cancel","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar3 = *(FName *)FVar21;
  bVar12 = false;
  bVar13 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar15 = false;
  bVar16 = false;
  FVar28 = FVar3.ComparisonIndex.Value;
  uVar23 = FVar3.Number;
  if ((FVar28.Value != 0) || (uVar23 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar28.Value;
        local_1a0.Number = uVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x224);
        bVar12 = true;
        bVar13 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b0 = FVar28.Value;
      uStack_1ac = uVar23;
      local_198 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar15 = true;
      goto LAB_148826e3a;
    }
  }
  bVar13 = bVar16;
  bVar12 = bVar15;
  bVar15 = false;
  local_198 = local_190;
LAB_148826e3a:
  FVar30 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  pTVar2 = &this->MipDataProviders;
  local_1b0 = (this->MipDataProviders).ArrayNum;
  uVar24 = (ulonglong)(int)local_1b0;
  if (FVar30 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar30 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )pTVar2;
  }
  local_180 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )((longlong)FVar30 + uVar24 * 8);
LAB_148826e64:
  do {
    FVar14 = local_180;
    if ((this->MipDataProviders).ArrayNum != (int)uVar24) {
      local_1b7[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1b7);
    }
    if (FVar30 == FVar14) {
      if (iVar19 == 0) {
        FVar30 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
        if (FVar30 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                       )0x0) {
          FVar30 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                    )pTVar2;
        }
        DestructItems<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int>
                  ((TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_> *)
                   FVar30,(this->MipDataProviders).ArrayNum);
        piVar1 = &(this->MipDataProviders).ArrayMax;
        (this->MipDataProviders).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>_>
                    (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        pFVar31 = (this->MipAllocator).Ptr;
        if (pFVar31 == (FTextureMipAllocator *)0x0) goto LAB_14882734e;
        iVar19 = param_1->CurrentThread;
        if ((pFVar31->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
          iVar18 = (**(code **)(pFVar31->_padding_ + 0x20))(pFVar31);
          pFVar31 = (this->MipAllocator).Ptr;
        }
        else {
          iVar18 = 1;
        }
        if (iVar19 == 2) {
          bVar16 = iVar18 == 0;
        }
        else {
          if ((iVar19 != 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TaskThread == TT_Render",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                  ,0x16,L""), bVar16)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar31 = (this->MipAllocator).Ptr;
          bVar16 = iVar18 == 1;
        }
        if (bVar16) {
          (**(code **)(pFVar31->_padding_ + 0x18))(pFVar31,&this->SyncOptions);
          this_00 = (pFVar31->IntermediateTextureRHI).Reference;
          if (this_00 != (FRHITexture *)0x0) {
            (pFVar31->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
            FRHIResource::Release((FRHIResource *)this_00);
          }
        }
        pFVar31 = (this->MipAllocator).Ptr;
        if ((pFVar31->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
          iVar19 = (**(code **)(pFVar31->_padding_ + 0x20))();
          if (iVar19 != 0) {
            if (iVar19 != 1) {
              pFVar31 = (this->MipAllocator).Ptr;
              if (pFVar31 != (FTextureMipAllocator *)0x0) {
                (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
                (**(code **)pFVar31->_padding_)(pFVar31,1);
              }
              piVar1 = &(this->MipInfos).ArrayMax;
              (this->MipInfos).ArrayNum = 0;
              if (*piVar1 != 0) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>_>
                          (0x30,8,0,&(this->MipInfos).AllocatorInstance,0,piVar1);
              }
              goto LAB_14882734e;
            }
            goto LAB_14882717c;
          }
          uVar29 = 2;
        }
        else {
LAB_14882717c:
          uVar29 = 1;
        }
        local_d0 = (undefined ***)0x0;
        local_e8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FTextureStreamIn::Cancel'::`32'::<lambda_2>,0,0>::
                    _vftable_;
        local_f8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FTextureStreamIn::Cancel'::__l32::<lambda_2>,void,FTextureUpdateContext_const_&>
                   ::Call;
        local_e0 = this;
        local_98 = 0;
        local_70 = (longlong *)0x0;
        if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Locked || TaskState == TS_Init",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                                ,0x1b,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&this->field_0x68 = 0;
        local_158 = local_98;
        uStack_130 = (longlong *)0x0;
        if (local_98 != 0) {
          plVar26 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar26 = local_70;
          }
          (**(code **)*plVar26)(plVar26,&local_148);
        }
        lVar10 = *(longlong *)&this->field_0x70;
        uVar11 = *(undefined8 *)&this->field_0x78;
        uVar5 = *(undefined4 *)&this->field_0x80;
        uVar6 = *(undefined4 *)&this->field_0x84;
        uVar7 = *(undefined4 *)&this->field_0x88;
        uVar8 = *(undefined4 *)&this->field_0x8c;
        uVar9 = *(undefined8 *)&this->field_0x90;
        plVar26 = *(longlong **)&this->field_0x98;
        *(longlong *)&this->field_0x70 = local_158;
        *(undefined8 *)&this->field_0x78 = uStack_150;
        *(undefined4 *)&this->field_0x80 = local_148;
        *(undefined4 *)&this->field_0x84 = uStack_144;
        *(undefined4 *)&this->field_0x88 = uStack_140;
        *(undefined4 *)&this->field_0x8c = uStack_13c;
        *(undefined4 *)&this->field_0x90 = (undefined4)local_138;
        *(undefined4 *)&this->field_0x94 = local_138._4_4_;
        *(undefined4 *)&this->field_0x98 = (undefined4)uStack_130;
        *(undefined4 *)&this->field_0x9c = uStack_130._4_4_;
        local_148 = uVar5;
        uStack_144 = uVar6;
        uStack_140 = uVar7;
        uStack_13c = uVar8;
        local_138 = uVar9;
        uStack_130 = plVar26;
        local_158 = lVar10;
        uStack_150 = uVar11;
        if (lVar10 != 0) {
          plVar25 = (longlong *)&local_148;
          if (plVar26 != (longlong *)0x0) {
            plVar25 = plVar26;
          }
          (**(code **)(*plVar25 + 0x10))();
        }
        *(undefined4 *)&this->field_0xa0 = uVar29;
        local_128 = local_f8;
        uStack_100 = (longlong *)0x0;
        if (local_f8 != (code *)0x0) {
          pppuVar27 = &local_e8;
          if (local_d0 != (undefined ***)0x0) {
            pppuVar27 = local_d0;
          }
          (*(code *)**pppuVar27)(pppuVar27,&local_118);
        }
        lVar10 = *(longlong *)&this->field_0xb0;
        uVar11 = *(undefined8 *)&this->field_0xb8;
        uVar29 = *(undefined4 *)&this->field_0xc0;
        uVar5 = *(undefined4 *)&this->field_0xc4;
        uVar6 = *(undefined4 *)&this->field_0xc8;
        uVar7 = *(undefined4 *)&this->field_0xcc;
        uVar9 = *(undefined8 *)&this->field_0xd0;
        plVar26 = *(longlong **)&this->field_0xd8;
        *(code **)&this->field_0xb0 = local_128;
        *(undefined8 *)&this->field_0xb8 = uStack_120;
        *(undefined4 *)&this->field_0xc0 = local_118;
        *(undefined4 *)&this->field_0xc4 = uStack_114;
        *(undefined4 *)&this->field_0xc8 = uStack_110;
        *(undefined4 *)&this->field_0xcc = uStack_10c;
        *(undefined4 *)&this->field_0xd0 = (undefined4)local_108;
        *(undefined4 *)&this->field_0xd4 = local_108._4_4_;
        *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_100;
        *(undefined4 *)&this->field_0xdc = uStack_100._4_4_;
        local_128 = (code *)lVar10;
        uStack_120 = uVar11;
        local_118 = uVar29;
        uStack_114 = uVar5;
        uStack_110 = uVar6;
        uStack_10c = uVar7;
        local_108 = uVar9;
        uStack_100 = plVar26;
        if (lVar10 != 0) {
          plVar25 = (longlong *)&local_118;
          if (plVar26 != (longlong *)0x0) {
            plVar25 = plVar26;
          }
          (**(code **)(*plVar25 + 0x10))();
        }
        if (local_98 != 0) {
          plVar26 = local_88;
          if (local_70 != (longlong *)0x0) {
            plVar26 = local_70;
          }
          (**(code **)(*plVar26 + 0x10))();
        }
        if (local_f8 == (code *)0x0) goto LAB_14882734e;
        pppuVar27 = &local_e8;
        pppuVar22 = local_d0;
      }
      else {
        local_a0 = (undefined ***)0x0;
        local_b8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FTextureStreamIn::Cancel'::`21'::<lambda_1>,0,0>::
                    _vftable_;
        local_c8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FTextureStreamIn::Cancel'::__l21::<lambda_1>,void,FTextureUpdateContext_const_&>
                      ::Call;
        local_68._0_8_ = 0;
        local_40 = (longlong *)0x0;
        local_b0 = this;
        if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Locked || TaskState == TS_Init",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                                ,0x1b,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)&this->field_0x68 = 0;
        TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                  ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->field_0x70,
                   (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_68);
        *(int *)&this->field_0xa0 = iVar19;
        TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                  ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->field_0xb0,
                   (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_c8);
        if (local_68._0_8_ != 0) {
          plVar26 = (longlong *)(local_68 + 0x10);
          if (local_40 != (longlong *)0x0) {
            plVar26 = local_40;
          }
          (**(code **)(*plVar26 + 0x10))();
        }
        if (local_c8[0] == (code *)0x0) goto LAB_14882734e;
        pppuVar27 = &local_b8;
        pppuVar22 = local_a0;
      }
      if (pppuVar22 != (undefined ***)0x0) {
        pppuVar27 = pppuVar22;
      }
      (*(code *)(*pppuVar27)[2])();
LAB_14882734e:
      FVar3 = local_198;
      if (bVar13) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar15) {
        FThreadStats::AddMessage(FVar3,CycleScopeEnd);
      }
      return;
    }
    if ((*(longlong *)FVar30 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipDataProvider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0x22b,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar18 = param_1->CurrentThread;
    iVar17 = (**(code **)(**(longlong **)FVar30 + 0x50))();
    if (iVar18 == 2) {
      bVar16 = iVar17 == 0;
    }
    else {
      if ((iVar18 != 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x23,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar16 = iVar17 == 1;
    }
    if (bVar16) {
      (**(code **)(**(longlong **)FVar30 + 0x48))(*(longlong **)FVar30,&this->SyncOptions);
    }
    iVar18 = (**(code **)(**(longlong **)FVar30 + 0x50))();
    param_1 = local_178;
    if (iVar18 == 0) {
      iVar19 = 2;
LAB_148826f3b:
      uVar24 = (ulonglong)local_1b0;
      FVar30 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar30 + 8);
      goto LAB_148826e64;
    }
    if (iVar18 != 1) goto LAB_148826f3b;
    uVar24 = (ulonglong)local_1b0;
    iVar19 = 1;
    FVar30 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar30 + 8);
  } while( true );
}

// CleanUpMipDataProviders @ 148829720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::CleanUpMipDataProviders(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  LARGE_INTEGER LVar17;
  bool bVar18;
  EThreadType EVar19;
  EThreadType EVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::CleanUpMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_CleanUpMipDataProviders>
  FVar22;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar23;
  undefined ***pppuVar24;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar25;
  FName FVar26;
  undefined1 auStackY_1b8 [32];
  undefined1 local_158 [4];
  FColor_u_0 local_154;
  FName local_150;
  LARGE_INTEGER local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  code *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTextureStreamIn *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  FTextureStreamIn *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_148 = (LARGE_INTEGER)param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_CleanUpMipDataProviders =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::CleanUpMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_CleanUpMipDataProviders>
          )0x0;
    pFVar21 = ::FName::FName(&local_110,"STAT_TextureStreamIn_CleanUpMipDataProviders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_CleanUpMipDataProviders,
               *pFVar21,L"FTextureStreamIn::CleanUpMipDataProviders","STATGROUP_StreamingDetails",
               "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_TextureStreamIn_CleanUpMipDataProviders;
  if (StatPtr_STAT_TextureStreamIn_CleanUpMipDataProviders ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::CleanUpMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_CleanUpMipDataProviders>
       )0x0) {
    pFVar21 = ::FName::FName(local_108,"STAT_TextureStreamIn_CleanUpMipDataProviders");
    FVar22 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::CleanUpMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_CleanUpMipDataProviders>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TextureStreamIn_CleanUpMipDataProviders,*pFVar21,
                          L"FTextureStreamIn::CleanUpMipDataProviders","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar26 = *(FName *)FVar22;
  bVar14 = false;
  bVar16 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  if ((FVar26.ComparisonIndex.Value.Value != 0) || (FVar26.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_154.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_154._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar14 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_140.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x210);
        bVar14 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar26;
      local_138 = FVar26;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar15 = true;
      goto LAB_1488298b3;
    }
  }
  bVar15 = false;
  local_138 = local_130;
LAB_1488298b3:
  LVar17 = local_148;
  FVar25 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  pTVar2 = &this->MipDataProviders;
  iVar3 = (this->MipDataProviders).ArrayNum;
  if (FVar25 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )pTVar2;
  }
  FVar26 = (FName)((longlong)FVar25 + (longlong)iVar3 * 8);
  local_150 = FVar26;
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar3) {
      local_158[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if ((FName)FVar25 == FVar26) break;
    if ((*(longlong *)FVar25 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipDataProvider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0xfb,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(*(longlong *)FVar25 + 0x18) == 4) {
      iVar4 = *(int *)(*(longlong *)FVar25 + 0x1c);
      if (*(int *)(LVar17.QuadPart + 0x20) == 2) {
        bVar18 = iVar4 == 0;
      }
      else {
        if ((*(int *)(LVar17.QuadPart + 0x20) != 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskThread == TT_Render",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x23,L""), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar18 = iVar4 == 1;
      }
      FVar26 = local_150;
      if (bVar18) {
        (**(code **)(**(longlong **)FVar25 + 0x40))(*(longlong **)FVar25,&this->SyncOptions);
        FVar26 = local_150;
      }
    }
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar25 + 8);
  }
  EVar19 = GetMipDataProviderThread(this,CleanUp);
  if (EVar19 == TT_None) {
    FVar25 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
    if (FVar25 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                   )0x0) {
      FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )pTVar2;
    }
    DestructItems<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int>
              ((TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_> *)
               FVar25,(this->MipDataProviders).ArrayNum);
    piVar1 = &(this->MipDataProviders).ArrayMax;
    (this->MipDataProviders).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>_>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::CleanUpMipDataProviders'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    local_40 = (undefined ***)0x0;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextureStreamIn::CleanUpMipDataProviders'::__l5::<lambda_2>,void,FTextureUpdateContext_const_&>
               ::Call;
    local_50 = this;
    EVar20 = GetCancelThread(this);
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::CleanUpMipDataProviders'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextureStreamIn::CleanUpMipDataProviders'::__l5::<lambda_1>,void,FTextureUpdateContext_const_&>
               ::Call;
    local_80 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar19;
    local_f8 = local_98;
    uStack_d0 = (longlong *)0x0;
    if (local_98 != (code *)0x0) {
      pppuVar24 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar24 = local_70;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_e8);
    }
    lVar12 = *(longlong *)&this->field_0x70;
    uVar13 = *(undefined8 *)&this->field_0x78;
    uVar6 = *(undefined4 *)&this->field_0x80;
    uVar7 = *(undefined4 *)&this->field_0x84;
    uVar8 = *(undefined4 *)&this->field_0x88;
    uVar9 = *(undefined4 *)&this->field_0x8c;
    uVar10 = *(undefined8 *)&this->field_0x90;
    plVar11 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_f8;
    *(undefined8 *)&this->field_0x78 = uStack_f0;
    *(undefined4 *)&this->field_0x80 = local_e8;
    *(undefined4 *)&this->field_0x84 = uStack_e4;
    *(undefined4 *)&this->field_0x88 = uStack_e0;
    *(undefined4 *)&this->field_0x8c = uStack_dc;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
    *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
    *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
    local_e8 = uVar6;
    uStack_e4 = uVar7;
    uStack_e0 = uVar8;
    uStack_dc = uVar9;
    local_d8 = uVar10;
    uStack_d0 = plVar11;
    local_f8 = (code *)lVar12;
    uStack_f0 = uVar13;
    if (lVar12 != 0) {
      plVar23 = (longlong *)&local_e8;
      if (plVar11 != (longlong *)0x0) {
        plVar23 = plVar11;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar20;
    local_c8 = local_68;
    uStack_a0 = (longlong *)0x0;
    if (local_68 != (code *)0x0) {
      pppuVar24 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar24 = local_40;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_b8);
    }
    lVar12 = *(longlong *)&this->field_0xb0;
    uVar13 = *(undefined8 *)&this->field_0xb8;
    uVar6 = *(undefined4 *)&this->field_0xc0;
    uVar7 = *(undefined4 *)&this->field_0xc4;
    uVar8 = *(undefined4 *)&this->field_0xc8;
    uVar9 = *(undefined4 *)&this->field_0xcc;
    uVar10 = *(undefined8 *)&this->field_0xd0;
    plVar11 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_c8;
    *(undefined8 *)&this->field_0xb8 = uStack_c0;
    *(undefined4 *)&this->field_0xc0 = local_b8;
    *(undefined4 *)&this->field_0xc4 = uStack_b4;
    *(undefined4 *)&this->field_0xc8 = uStack_b0;
    *(undefined4 *)&this->field_0xcc = uStack_ac;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
    *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
    *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
    local_c8 = (code *)lVar12;
    uStack_c0 = uVar13;
    local_b8 = uVar6;
    uStack_b4 = uVar7;
    uStack_b0 = uVar8;
    uStack_ac = uVar9;
    local_a8 = uVar10;
    uStack_a0 = plVar11;
    if (lVar12 != 0) {
      plVar23 = (longlong *)&local_b8;
      if (plVar11 != (longlong *)0x0) {
        plVar23 = plVar11;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (local_98 != (code *)0x0) {
      pppuVar24 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar24 = local_70;
      }
      (*(code *)(*pppuVar24)[2])();
    }
    if (local_68 != (code *)0x0) {
      pppuVar24 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar24 = local_40;
      }
      (*(code *)(*pppuVar24)[2])();
    }
  }
  FVar26 = local_138;
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_120.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_148);
      local_120.StatData.Pad = (uchar  [8])(local_148.QuadPart & 0xffffffff);
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

// DoAllocateNewMips @ 148830f30

bool __thiscall
FTextureStreamIn::DoAllocateNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 != (FTextureMipAllocator *)0x0) {
    EVar1 = pFVar2->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar5 = EVar1 == Async;
    }
    else {
      if (param_1->CurrentThread != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskThread == TT_Render",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0x16,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
      }
      bVar5 = EVar1 == Render;
    }
    if (bVar5) goto LAB_148830fc1;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                     ,0xb5,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
LAB_148830fc1:
  pFVar2 = (this->MipAllocator).Ptr;
                    /* WARNING: Could not recover jumptable at 0x000148830fe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1,&this->MipInfos,&this->SyncOptions);
  return (bool)uVar4;
}

// DoCleanUpMipDataProviders @ 148831d80

void __thiscall
FTextureStreamIn::DoCleanUpMipDataProviders(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar6 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar6 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    if (*(longlong *)FVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0xfb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)(*(longlong *)FVar6 + 0x18) == 4) {
      iVar3 = *(int *)(*(longlong *)FVar6 + 0x1c);
      if (param_1->CurrentThread == 2) {
        bVar5 = iVar3 == 0;
      }
      else {
        if (param_1->CurrentThread != 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskThread == TT_Render",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                             ,0x23,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        bVar5 = iVar3 == 1;
      }
      if (bVar5) {
        (**(code **)(**(longlong **)FVar6 + 0x40))(*(longlong **)FVar6,&this->SyncOptions);
      }
    }
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar6 + 8);
  }
  return;
}

// DoFinalizeNewMips @ 1488328a0

bool __thiscall
FTextureStreamIn::DoFinalizeNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) || (param_1->CurrentThread == 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipAllocator && IsSameThread(FTextureMipAllocator::ETickThread::Render, Context.CurrentThread)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0xf3,L"");
    if (bVar2) goto code_r0x000148832912;
  }
  else if ((param_1->CurrentThread != 1) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x16,L""), bVar2)) {
code_r0x000148832912:
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FTextureMipAllocator::FinalizeMips((this->MipAllocator).Ptr,param_1,&this->SyncOptions);
  return bVar2;
}

// DoGetMipData @ 148832c90

void __thiscall
FTextureStreamIn::DoGetMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar6 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar6 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    if (*(longlong *)FVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0xbd,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)(*(longlong *)FVar6 + 0x18) == 1) {
      iVar5 = *(int *)(*(longlong *)FVar6 + 0x1c);
      if (param_1->CurrentThread == 2) {
        bVar4 = iVar5 == 0;
      }
      else {
        if (param_1->CurrentThread != 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskThread == TT_Render",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                             ,0x23,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        bVar4 = iVar5 == 1;
      }
      if (bVar4) {
        iVar5 = (**(code **)(**(longlong **)FVar6 + 0x10))
                          (*(longlong **)FVar6,param_1,this->StartingMipIndex,&this->MipInfos,
                           &this->SyncOptions);
        this->StartingMipIndex = iVar5;
      }
    }
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar6 + 8);
  }
  return;
}

// DoInitMipDataProviders @ 148832dc0

void __thiscall
FTextureStreamIn::DoInitMipDataProviders(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar6 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar6 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    if (*(longlong *)FVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDataProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                         ,0xaa,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)(*(longlong *)FVar6 + 0x18) == 0) {
      iVar3 = *(int *)(*(longlong *)FVar6 + 0x1c);
      if (param_1->CurrentThread == 2) {
        bVar5 = iVar3 == 0;
      }
      else {
        if (param_1->CurrentThread != 1) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TaskThread == TT_Render",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                             ,0x23,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        bVar5 = iVar3 == 1;
      }
      if (bVar5) {
        (**(code **)(**(longlong **)FVar6 + 8))(*(longlong **)FVar6,param_1,&this->SyncOptions);
      }
    }
    FVar6 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar6 + 8);
  }
  return;
}

// DoPollMipData @ 1488331d0

bool __thiscall
FTextureStreamIn::DoPollMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar8;
  undefined1 local_res8 [8];
  
  FVar8 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar8 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar8 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar8 + (longlong)iVar2 * 8);
  do {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar1) {
      return true;
    }
    if ((*(longlong *)FVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("MipDataProvider",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0xca,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*(int *)(*(longlong *)FVar8 + 0x18) == 2) {
      iVar3 = *(int *)(*(longlong *)FVar8 + 0x1c);
      if (param_1->CurrentThread == 2) {
        bVar5 = iVar3 == 0;
      }
      else {
        if ((param_1->CurrentThread != 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TaskThread == TT_Render",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                               ,0x23,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = iVar3 == 1;
      }
      if ((bVar5) &&
         (cVar7 = (**(code **)(**(longlong **)FVar8 + 0x18))(*(longlong **)FVar8,&this->SyncOptions)
         , cVar7 == '\0')) {
        return false;
      }
    }
    FVar8 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar8 + 8);
  } while( true );
}

// DoPostprocessGPUMipData @ 1488332f0

bool __thiscall
FTextureStreamIn::DoPostprocessGPUMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint *puVar10;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar11;
  int iVar12;
  undefined1 local_res8 [8];
  
  puVar10 = (uint *)(**(code **)(((((this->MipAllocator).Ptr)->IntermediateTextureRHI).Reference)->
                                 _padding_ + 0x20))();
  if ((*puVar10 >> 0x17 & 1) == 0) {
    iVar12 = *(int *)&this->field_0x14;
  }
  else {
    iVar12 = 0;
  }
  FVar11 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = *(int *)&this->field_0x10;
  iVar3 = *(int *)&this->field_0x14;
  iVar4 = (this->MipDataProviders).ArrayNum;
  if (FVar11 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar11 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar11 + (longlong)iVar4 * 8);
  do {
    if ((this->MipDataProviders).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar11 == FVar1) {
      return true;
    }
    if ((*(longlong *)FVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MipDataProvider",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0xe4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (*(int *)(*(longlong *)FVar11 + 0x18) == 3) {
      iVar5 = *(int *)(*(longlong *)FVar11 + 0x1c);
      if (param_1->CurrentThread == 2) {
        bVar7 = iVar5 == 0;
      }
      else {
        if ((param_1->CurrentThread != 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TaskThread == TT_Render",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                               ,0x23,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        bVar7 = iVar5 == 1;
      }
      if ((bVar7) &&
         (cVar9 = (**(code **)(**(longlong **)FVar11 + 0x20))
                            (*(longlong **)FVar11,param_1,
                             &((this->MipAllocator).Ptr)->IntermediateTextureRHI,
                             *(int *)&this->field_0x14 - iVar12,iVar2 - iVar3,&this->SyncOptions),
         cVar9 == '\0')) {
        return false;
      }
    }
    FVar11 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar11 + 8);
  } while( true );
}

// DoUploadNewMips @ 1488336d0

bool __thiscall
FTextureStreamIn::DoUploadNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 != (FTextureMipAllocator *)0x0) {
    EVar1 = pFVar2->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar5 = EVar1 == Async;
    }
    else {
      if (param_1->CurrentThread != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskThread == TT_Render",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0x16,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
      }
      bVar5 = EVar1 == Render;
    }
    if (bVar5) goto LAB_148833761;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                     ,0xd9,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
LAB_148833761:
  pFVar2 = (this->MipAllocator).Ptr;
                    /* WARNING: Could not recover jumptable at 0x00014883377f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,param_1,&this->SyncOptions);
  return (bool)uVar4;
}

// FinalizeNewMips @ 148838880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::FinalizeNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar2;
  int iVar3;
  int iVar4;
  FTextureMipAllocator *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  EThreadType EVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_FinalizeNewMips>
  FVar19;
  undefined ***pppuVar20;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined ***pppuVar24;
  FNameEntryId FVar25;
  FName FVar26;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar27;
  undefined4 uVar28;
  undefined1 auStackY_278 [32];
  undefined1 local_218 [4];
  FColor_u_0 local_214;
  LARGE_INTEGER local_210;
  FName local_208;
  FName local_200;
  FTextureUpdateContext *local_1f0;
  FStatMessage local_1e8;
  FName local_1d8;
  FName local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FTextureStreamIn *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FTextureStreamIn *local_120;
  undefined ***local_110;
  longlong local_108;
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
  FTextureStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1f0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_TextureStreamIn_FinalizeNewMips ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_FinalizeNewMips>
         )0x0) {
      pFVar18 = ::FName::FName(&local_1d8,"STAT_TextureStreamIn_FinalizeNewMips");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_FinalizeNewMips,*pFVar18
                 ,L"FTextureStreamIn::FinalizeNewMips","STATGROUP_StreamingDetails",
                 "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_TextureStreamIn_FinalizeNewMips;
  if (StatPtr_STAT_TextureStreamIn_FinalizeNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_FinalizeNewMips>
       )0x0) {
    pFVar18 = ::FName::FName(&local_1d0,"STAT_TextureStreamIn_FinalizeNewMips");
    FVar19 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_FinalizeNewMips>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_FinalizeNewMips
                          ,*pFVar18,L"FTextureStreamIn::FinalizeNewMips",
                          "STATGROUP_StreamingDetails","STATCAT_Advanced",L"Streaming Details",true,
                          true,ST_int64,true,true,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar19;
  bVar13 = false;
  bVar15 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar21 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar21 == 0)) {
LAB_148838a06:
    bVar14 = false;
    FVar26 = local_200;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_214.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_214._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar25.Value;
        local_208.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x1e5);
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148838a06;
    local_210.s.LowPart = FVar25.Value;
    local_210.s.HighPart = uVar21;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = true;
  }
  if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) || (param_1->CurrentThread == 2)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("MipAllocator && IsSameThread(FTextureMipAllocator::ETickThread::Render, Context.CurrentThread)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                        ,0xf3,L"");
    if (bVar16) goto code_r0x000148838a6d;
  }
  else if ((param_1->CurrentThread != 1) &&
          (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("TaskThread == TT_Render",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                               ,0x16,L""), bVar16)) {
code_r0x000148838a6d:
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar16 = FTextureMipAllocator::FinalizeMips((this->MipAllocator).Ptr,param_1,&this->SyncOptions);
  if ((!bVar16) && (*(int *)&this->field_0x60 != 0)) {
    this->field_0x5c = 1;
  }
  if (this->field_0x5c == '\0') {
    this->field_0x5e = 1;
    pFVar5 = (this->MipAllocator).Ptr;
    if (pFVar5 != (FTextureMipAllocator *)0x0) {
      (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
    piVar1 = &(this->MipInfos).ArrayMax;
    (this->MipInfos).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>_>
                (0x30,8,0,&(this->MipInfos).AllocatorInstance,0,piVar1);
    }
    if (this->field_0x5c != '\0') {
LAB_148838d98:
      CleanUpMipDataProviders(this,param_1);
      goto LAB_148838fe2;
    }
    FVar27 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
    iVar3 = (this->MipDataProviders).ArrayNum;
    if (FVar27 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                   )0x0) {
      FVar27 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )&this->MipDataProviders;
    }
    FVar2 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar27 + (longlong)iVar3 * 8);
    while( true ) {
      if ((this->MipDataProviders).ArrayNum != iVar3) {
        local_218[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_218);
      }
      param_1 = local_1f0;
      if (FVar27 == FVar2) goto LAB_148838d98;
      if ((*(longlong *)FVar27 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipDataProvider",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x5e,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(*(longlong *)FVar27 + 0x18) == 4) break;
LAB_148838ba8:
      FVar27 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )((longlong)FVar27 + 8);
    }
    iVar4 = *(int *)(*(longlong *)FVar27 + 0x1c);
    if (iVar4 == 0) {
      uVar28 = 2;
    }
    else {
      if (iVar4 != 1) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0x68,L"");
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_148838ba8;
      }
      uVar28 = 1;
    }
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::FinalizeNewMips'::`11'::<lambda_2>,0,0>::
                 _vftable_;
    local_110 = (undefined ***)0x0;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::FinalizeNewMips'::__l11::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_120 = this;
    EVar17 = GetCancelThread(this);
    local_140 = (undefined ***)0x0;
    local_158 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::FinalizeNewMips'::`11'::<lambda_1>,0,0>::
                 _vftable_;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::FinalizeNewMips'::__l11::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_150 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = uVar28;
    local_1c8 = local_168;
    uStack_1a0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      pppuVar24 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar24 = local_140;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_1b8);
    }
    lVar11 = *(longlong *)&this->field_0x70;
    uVar12 = *(undefined8 *)&this->field_0x78;
    uVar28 = *(undefined4 *)&this->field_0x80;
    uVar7 = *(undefined4 *)&this->field_0x84;
    uVar8 = *(undefined4 *)&this->field_0x88;
    uVar9 = *(undefined4 *)&this->field_0x8c;
    uVar10 = *(undefined8 *)&this->field_0x90;
    plVar23 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_1c8;
    *(undefined8 *)&this->field_0x78 = uStack_1c0;
    *(undefined4 *)&this->field_0x80 = local_1b8;
    *(undefined4 *)&this->field_0x84 = uStack_1b4;
    *(undefined4 *)&this->field_0x88 = uStack_1b0;
    *(undefined4 *)&this->field_0x8c = uStack_1ac;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_1a8;
    *(undefined4 *)&this->field_0x94 = local_1a8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_1a0;
    *(undefined4 *)&this->field_0x9c = uStack_1a0._4_4_;
    local_1b8 = uVar28;
    uStack_1b4 = uVar7;
    uStack_1b0 = uVar8;
    uStack_1ac = uVar9;
    local_1a8 = uVar10;
    uStack_1a0 = plVar23;
    local_1c8 = (code *)lVar11;
    uStack_1c0 = uVar12;
    if (lVar11 != 0) {
      plVar22 = (longlong *)&local_1b8;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar17;
    local_198 = local_138;
    uStack_170 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      pppuVar24 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar24 = local_110;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_188);
    }
    lVar11 = *(longlong *)&this->field_0xb0;
    uVar12 = *(undefined8 *)&this->field_0xb8;
    uVar28 = *(undefined4 *)&this->field_0xc0;
    uVar7 = *(undefined4 *)&this->field_0xc4;
    uVar8 = *(undefined4 *)&this->field_0xc8;
    uVar9 = *(undefined4 *)&this->field_0xcc;
    uVar10 = *(undefined8 *)&this->field_0xd0;
    plVar23 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_198;
    *(undefined8 *)&this->field_0xb8 = uStack_190;
    *(undefined4 *)&this->field_0xc0 = local_188;
    *(undefined4 *)&this->field_0xc4 = uStack_184;
    *(undefined4 *)&this->field_0xc8 = uStack_180;
    *(undefined4 *)&this->field_0xcc = uStack_17c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_178;
    *(undefined4 *)&this->field_0xd4 = local_178._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_170;
    *(undefined4 *)&this->field_0xdc = uStack_170._4_4_;
    local_198 = (code *)lVar11;
    uStack_190 = uVar12;
    local_188 = uVar28;
    uStack_184 = uVar7;
    uStack_180 = uVar8;
    uStack_17c = uVar9;
    local_178 = uVar10;
    uStack_170 = plVar23;
    if (lVar11 != 0) {
      plVar22 = (longlong *)&local_188;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_168 != (code *)0x0) {
      pppuVar24 = &local_158;
      if (local_140 != (undefined ***)0x0) {
        pppuVar24 = local_140;
      }
      (*(code *)(*pppuVar24)[2])();
    }
    if (local_138 == (code *)0x0) goto LAB_148838fe2;
    pppuVar24 = &local_128;
    pppuVar20 = local_110;
  }
  else {
    if (((this->MipAllocator).Ptr)->NextTickState == Done) {
      this->field_0x5e = 1;
    }
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::FinalizeNewMips'::`15'::<lambda_3>,0,0>::
                _vftable_;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextureStreamIn::FinalizeNewMips'::__l15::<lambda_3>,void,FTextureUpdateContext_const_&>
               ::Call;
    local_90 = this;
    EVar17 = GetCancelThread(this);
    local_78 = 0;
    local_50 = (longlong *)0x0;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar16)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 0;
    local_108 = local_78;
    uStack_e0 = (longlong *)0x0;
    if (local_78 != 0) {
      plVar23 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar23 = local_50;
      }
      (**(code **)*plVar23)(plVar23,&local_f8);
    }
    lVar11 = *(longlong *)&this->field_0x70;
    uVar12 = *(undefined8 *)&this->field_0x78;
    uVar28 = *(undefined4 *)&this->field_0x80;
    uVar7 = *(undefined4 *)&this->field_0x84;
    uVar8 = *(undefined4 *)&this->field_0x88;
    uVar9 = *(undefined4 *)&this->field_0x8c;
    uVar10 = *(undefined8 *)&this->field_0x90;
    plVar23 = *(longlong **)&this->field_0x98;
    *(longlong *)&this->field_0x70 = local_108;
    *(undefined8 *)&this->field_0x78 = uStack_100;
    *(undefined4 *)&this->field_0x80 = local_f8;
    *(undefined4 *)&this->field_0x84 = uStack_f4;
    *(undefined4 *)&this->field_0x88 = uStack_f0;
    *(undefined4 *)&this->field_0x8c = uStack_ec;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
    *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
    *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
    local_108 = lVar11;
    uStack_100 = uVar12;
    local_f8 = uVar28;
    uStack_f4 = uVar7;
    uStack_f0 = uVar8;
    uStack_ec = uVar9;
    local_e8 = uVar10;
    uStack_e0 = plVar23;
    if (lVar11 != 0) {
      plVar22 = (longlong *)&local_f8;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar17;
    local_d8 = local_a8;
    uStack_b0 = (longlong *)0x0;
    if (local_a8 != (code *)0x0) {
      pppuVar24 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar24 = local_80;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_c8);
    }
    lVar11 = *(longlong *)&this->field_0xb0;
    uVar12 = *(undefined8 *)&this->field_0xb8;
    uVar28 = *(undefined4 *)&this->field_0xc0;
    uVar7 = *(undefined4 *)&this->field_0xc4;
    uVar8 = *(undefined4 *)&this->field_0xc8;
    uVar9 = *(undefined4 *)&this->field_0xcc;
    uVar10 = *(undefined8 *)&this->field_0xd0;
    plVar23 = *(longlong **)&this->field_0xd8;
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
    local_d8 = (code *)lVar11;
    uStack_d0 = uVar12;
    local_c8 = uVar28;
    uStack_c4 = uVar7;
    uStack_c0 = uVar8;
    uStack_bc = uVar9;
    local_b8 = uVar10;
    uStack_b0 = plVar23;
    if (lVar11 != 0) {
      plVar22 = (longlong *)&local_c8;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_78 != 0) {
      plVar23 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar23 = local_50;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (local_a8 == (code *)0x0) goto LAB_148838fe2;
    pppuVar24 = &local_98;
    pppuVar20 = local_80;
  }
  if (pppuVar20 != (undefined ***)0x0) {
    pppuVar24 = pppuVar20;
  }
  (*(code *)(*pppuVar24)[2])();
LAB_148838fe2:
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1e8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_1e8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_210);
      local_1e8.StatData.Pad[4] = '\0';
      local_1e8.StatData.Pad[5] = '\0';
      local_1e8.StatData.Pad[6] = '\0';
      local_1e8.StatData.Pad[7] = '\0';
      local_1e8.StatData.Pad[0] = local_210.s.LowPart._0_1_;
      local_1e8.StatData.Pad[1] = local_210.s.LowPart._1_1_;
      local_1e8.StatData.Pad[2] = local_210.s.LowPart._2_1_;
      local_1e8.StatData.Pad[3] = local_210.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1e8);
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

// GetCancelThread @ 14883da20

EThreadType __thiscall FTextureStreamIn::GetCancelThread(FTextureStreamIn *this)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  bool bVar4;
  EThreadType EVar5;
  int iVar6;
  int iVar7;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar8;
  undefined1 local_res8 [8];
  
  FVar8 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar7 = (this->MipDataProviders).ArrayNum;
  if (FVar8 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                )0x0) {
    FVar8 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar8 + (longlong)iVar7 * 8);
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar1) {
      pFVar2 = (this->MipAllocator).Ptr;
      if ((pFVar2 != (FTextureMipAllocator *)0x0) &&
         (((pFVar2->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
          ((iVar7 = (**(code **)(pFVar2->_padding_ + 0x20))(), iVar7 != 0 && (iVar7 == 1)))))) {
        return TT_Render;
      }
      return TT_Async;
    }
    if ((*(longlong *)FVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MipDataProvider",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0x87,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    iVar6 = (**(code **)(**(longlong **)FVar8 + 0x50))();
    if (iVar6 == 0) {
      return TT_Async;
    }
    if (iVar6 == 1) break;
    FVar8 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar8 + 8);
  }
  return TT_Render;
}

// GetMipAllocatorThread @ 14883e720

EThreadType __thiscall
FTextureStreamIn::GetMipAllocatorThread(FTextureStreamIn *this,ETickState param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  bool bVar4;
  EThreadType EVar5;
  
  if ((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipAllocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x72,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  if ((this->field_0x5c == '\0') &&
     (pFVar2 = (this->MipAllocator).Ptr, pFVar2->NextTickState == param_1)) {
    EVar1 = pFVar2->NextTickThread;
    if (EVar1 == Async) {
      return TT_Async;
    }
    if (EVar1 == Render) {
      return TT_Render;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                       ,0x7c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return TT_None;
}

// GetMipData @ 14883e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureStreamIn::GetMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  FTextureUpdateContext *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  EThreadType EVar17;
  EThreadType EVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::GetMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_GetMipData>
  FVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined ***pppuVar24;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar25;
  undefined4 uVar26;
  undefined1 auStackY_338 [32];
  undefined1 local_2d7;
  undefined1 local_2d6 [6];
  FName local_2d0;
  FColor_u_0 local_2c8 [2];
  FName local_2c0;
  FName local_2b8;
  FTextureUpdateContext *local_2a8;
  FName local_2a0;
  FName local_298 [2];
  code *local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined **local_218;
  FTextureStreamIn *local_210;
  undefined ***local_200;
  code *local_1f8;
  undefined **local_1e8;
  FTextureStreamIn *local_1e0;
  undefined ***local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FTextureStreamIn *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FTextureStreamIn *local_120;
  undefined ***local_110;
  longlong local_108;
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
  FTextureStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2a8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_GetMipData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::GetMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_GetMipData>
          )0x0;
    pFVar19 = ::FName::FName(&local_2a0,"STAT_TextureStreamIn_GetMipData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_GetMipData,*pFVar19,
               L"FTextureStreamIn::GetMipData","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_TextureStreamIn_GetMipData;
  if (StatPtr_STAT_TextureStreamIn_GetMipData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::GetMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_GetMipData>
       )0x0) {
    pFVar19 = ::FName::FName(local_298,"STAT_TextureStreamIn_GetMipData");
    FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::GetMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_GetMipData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_GetMipData,
                          *pFVar19,L"FTextureStreamIn::GetMipData","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar3 = *(FName *)FVar20;
  bVar11 = false;
  bVar12 = false;
  local_2b8.ComparisonIndex.Value = 0;
  local_2b8.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar3.ComparisonIndex.Value.Value == 0) && (FVar3.Number == 0)) {
LAB_14883ea36:
    bVar12 = bVar15;
    bVar11 = bVar14;
    bVar14 = false;
    local_2d0 = local_2b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x14e);
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14883ea36;
    local_2d0 = FVar3;
    FThreadStats::AddMessage(FVar3,CycleScopeStart);
    bVar14 = true;
  }
  pFVar13 = local_2a8;
  FVar25 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar25 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&this->MipDataProviders;
  }
  FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
           )((longlong)FVar25 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_2d7 = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_2d7);
    }
    if (FVar25 == FVar1) break;
    if ((*(longlong *)FVar25 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipDataProvider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0xbd,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(*(longlong *)FVar25 + 0x18) == 1) {
      iVar16 = *(int *)(*(longlong *)FVar25 + 0x1c);
      if (pFVar13->CurrentThread == 2) {
        bVar15 = iVar16 == 0;
      }
      else {
        if ((pFVar13->CurrentThread != 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskThread == TT_Render",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x23,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar15 = iVar16 == 1;
      }
      if (bVar15) {
        iVar16 = (**(code **)(**(longlong **)FVar25 + 0x10))
                           (*(longlong **)FVar25,pFVar13,this->StartingMipIndex,&this->MipInfos);
        this->StartingMipIndex = iVar16;
      }
    }
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar25 + 8);
  }
  uVar26 = 1;
  EVar17 = GetMipDataProviderThread(this,GetMips);
  if (EVar17 == TT_None) {
    if ((this->StartingMipIndex != *(int *)&this->field_0x10) && (*(int *)&this->field_0x60 != 0)) {
      this->field_0x5c = 1;
    }
    if (this->field_0x5c == '\0') {
      FVar25 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
      iVar2 = (this->MipDataProviders).ArrayNum;
      if (FVar25 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                     )0x0) {
        FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                  )&this->MipDataProviders;
      }
      FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )((longlong)FVar25 + (longlong)iVar2 * 8);
      while( true ) {
        if ((this->MipDataProviders).ArrayNum != iVar2) {
          local_2d6[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2d6);
        }
        if (FVar25 == FVar1) {
          PollMipData(this,pFVar13);
          goto LAB_14883f281;
        }
        if ((*(longlong *)FVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("MipDataProvider",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x5e,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(*(longlong *)FVar25 + 0x18) == 2) break;
LAB_14883ede5:
        FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                  )((longlong)FVar25 + 8);
      }
      iVar16 = *(int *)(*(longlong *)FVar25 + 0x1c);
      if (iVar16 == 0) {
        uVar26 = 2;
      }
      else if (iVar16 != 1) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0x68,L"");
        if (bVar15) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14883ede5;
      }
      this->bIsPollingMipData = true;
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::GetMipData'::`16'::<lambda_4>,0,0>::
                   _vftable_;
      local_110 = (undefined ***)0x0;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::GetMipData'::__l16::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_120 = this;
      EVar17 = GetCancelThread(this);
      local_140 = (undefined ***)0x0;
      local_158 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::GetMipData'::`16'::<lambda_3>,0,0>::
                   _vftable_;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::GetMipData'::__l16::<lambda_3>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_150 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = uVar26;
      local_1c8 = local_168;
      uStack_1a0 = (longlong *)0x0;
      if (local_168 != (code *)0x0) {
        pppuVar24 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar24 = local_140;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_1b8);
      }
      lVar9 = *(longlong *)&this->field_0x70;
      uVar10 = *(undefined8 *)&this->field_0x78;
      uVar26 = *(undefined4 *)&this->field_0x80;
      uVar5 = *(undefined4 *)&this->field_0x84;
      uVar6 = *(undefined4 *)&this->field_0x88;
      uVar7 = *(undefined4 *)&this->field_0x8c;
      uVar8 = *(undefined8 *)&this->field_0x90;
      plVar23 = *(longlong **)&this->field_0x98;
      *(code **)&this->field_0x70 = local_1c8;
      *(undefined8 *)&this->field_0x78 = uStack_1c0;
      *(undefined4 *)&this->field_0x80 = local_1b8;
      *(undefined4 *)&this->field_0x84 = uStack_1b4;
      *(undefined4 *)&this->field_0x88 = uStack_1b0;
      *(undefined4 *)&this->field_0x8c = uStack_1ac;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_1a8;
      *(undefined4 *)&this->field_0x94 = local_1a8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_1a0;
      *(undefined4 *)&this->field_0x9c = uStack_1a0._4_4_;
      local_1c8 = (code *)lVar9;
      uStack_1c0 = uVar10;
      local_1b8 = uVar26;
      uStack_1b4 = uVar5;
      uStack_1b0 = uVar6;
      uStack_1ac = uVar7;
      local_1a8 = uVar8;
      uStack_1a0 = plVar23;
      if (lVar9 != 0) {
        plVar22 = (longlong *)&local_1b8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar17;
      local_198 = local_138;
      uStack_170 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        pppuVar24 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar24 = local_110;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_188);
      }
      lVar9 = *(longlong *)&this->field_0xb0;
      uVar10 = *(undefined8 *)&this->field_0xb8;
      uVar26 = *(undefined4 *)&this->field_0xc0;
      uVar5 = *(undefined4 *)&this->field_0xc4;
      uVar6 = *(undefined4 *)&this->field_0xc8;
      uVar7 = *(undefined4 *)&this->field_0xcc;
      uVar8 = *(undefined8 *)&this->field_0xd0;
      plVar23 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_198;
      *(undefined8 *)&this->field_0xb8 = uStack_190;
      *(undefined4 *)&this->field_0xc0 = local_188;
      *(undefined4 *)&this->field_0xc4 = uStack_184;
      *(undefined4 *)&this->field_0xc8 = uStack_180;
      *(undefined4 *)&this->field_0xcc = uStack_17c;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_178;
      *(undefined4 *)&this->field_0xd4 = local_178._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_170;
      *(undefined4 *)&this->field_0xdc = uStack_170._4_4_;
      local_198 = (code *)lVar9;
      uStack_190 = uVar10;
      local_188 = uVar26;
      uStack_184 = uVar5;
      uStack_180 = uVar6;
      uStack_17c = uVar7;
      local_178 = uVar8;
      uStack_170 = plVar23;
      if (lVar9 != 0) {
        plVar22 = (longlong *)&local_188;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_168 != (code *)0x0) {
        pppuVar24 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar24 = local_140;
        }
        (*(code *)(*pppuVar24)[2])();
      }
      if (local_138 == (code *)0x0) goto LAB_14883f281;
      pppuVar24 = &local_128;
      pppuVar21 = local_110;
    }
    else {
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::GetMipData'::`20'::<lambda_5>,0,0>::
                  _vftable_;
      local_80 = (undefined ***)0x0;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextureStreamIn::GetMipData'::__l20::<lambda_5>,void,FTextureUpdateContext_const_&>
                 ::Call;
      local_90 = this;
      EVar17 = GetCancelThread(this);
      local_78 = 0;
      local_50 = (longlong *)0x0;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 0;
      local_108 = local_78;
      uStack_e0 = (longlong *)0x0;
      if (local_78 != 0) {
        plVar23 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)*plVar23)(plVar23,&local_f8);
      }
      lVar9 = *(longlong *)&this->field_0x70;
      uVar10 = *(undefined8 *)&this->field_0x78;
      uVar26 = *(undefined4 *)&this->field_0x80;
      uVar5 = *(undefined4 *)&this->field_0x84;
      uVar6 = *(undefined4 *)&this->field_0x88;
      uVar7 = *(undefined4 *)&this->field_0x8c;
      uVar8 = *(undefined8 *)&this->field_0x90;
      plVar23 = *(longlong **)&this->field_0x98;
      *(longlong *)&this->field_0x70 = local_108;
      *(undefined8 *)&this->field_0x78 = uStack_100;
      *(undefined4 *)&this->field_0x80 = local_f8;
      *(undefined4 *)&this->field_0x84 = uStack_f4;
      *(undefined4 *)&this->field_0x88 = uStack_f0;
      *(undefined4 *)&this->field_0x8c = uStack_ec;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
      *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
      *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
      local_108 = lVar9;
      uStack_100 = uVar10;
      local_f8 = uVar26;
      uStack_f4 = uVar5;
      uStack_f0 = uVar6;
      uStack_ec = uVar7;
      local_e8 = uVar8;
      uStack_e0 = plVar23;
      if (lVar9 != 0) {
        plVar22 = (longlong *)&local_f8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar17;
      local_d8 = local_a8;
      uStack_b0 = (longlong *)0x0;
      if (local_a8 != (code *)0x0) {
        pppuVar24 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar24 = local_80;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_c8);
      }
      lVar9 = *(longlong *)&this->field_0xb0;
      uVar10 = *(undefined8 *)&this->field_0xb8;
      uVar26 = *(undefined4 *)&this->field_0xc0;
      uVar5 = *(undefined4 *)&this->field_0xc4;
      uVar6 = *(undefined4 *)&this->field_0xc8;
      uVar7 = *(undefined4 *)&this->field_0xcc;
      uVar8 = *(undefined8 *)&this->field_0xd0;
      plVar23 = *(longlong **)&this->field_0xd8;
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
      local_d8 = (code *)lVar9;
      uStack_d0 = uVar10;
      local_c8 = uVar26;
      uStack_c4 = uVar5;
      uStack_c0 = uVar6;
      uStack_bc = uVar7;
      local_b8 = uVar8;
      uStack_b0 = plVar23;
      if (lVar9 != 0) {
        plVar22 = (longlong *)&local_c8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_78 != 0) {
        plVar23 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      if (local_a8 == (code *)0x0) goto LAB_14883f281;
      pppuVar24 = &local_98;
      pppuVar21 = local_80;
    }
  }
  else {
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::GetMipData'::`5'::<lambda_2>,0,0>::
                 _vftable_;
    local_1d0 = (undefined ***)0x0;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::GetMipData'::__l5::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1e0 = this;
    EVar18 = GetCancelThread(this);
    local_200 = (undefined ***)0x0;
    local_218 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::GetMipData'::`5'::<lambda_1>,0,0>::
                 _vftable_;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::GetMipData'::__l5::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_210 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar17;
    local_288 = local_228;
    uStack_260 = (longlong *)0x0;
    if (local_228 != (code *)0x0) {
      pppuVar24 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar24 = local_200;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_278);
    }
    lVar9 = *(longlong *)&this->field_0x70;
    uVar10 = *(undefined8 *)&this->field_0x78;
    uVar26 = *(undefined4 *)&this->field_0x80;
    uVar5 = *(undefined4 *)&this->field_0x84;
    uVar6 = *(undefined4 *)&this->field_0x88;
    uVar7 = *(undefined4 *)&this->field_0x8c;
    uVar8 = *(undefined8 *)&this->field_0x90;
    plVar23 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_288;
    *(undefined8 *)&this->field_0x78 = uStack_280;
    *(undefined4 *)&this->field_0x80 = local_278;
    *(undefined4 *)&this->field_0x84 = uStack_274;
    *(undefined4 *)&this->field_0x88 = uStack_270;
    *(undefined4 *)&this->field_0x8c = uStack_26c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_268;
    *(undefined4 *)&this->field_0x94 = local_268._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_260;
    *(undefined4 *)&this->field_0x9c = uStack_260._4_4_;
    local_278 = uVar26;
    uStack_274 = uVar5;
    uStack_270 = uVar6;
    uStack_26c = uVar7;
    local_268 = uVar8;
    uStack_260 = plVar23;
    local_288 = (code *)lVar9;
    uStack_280 = uVar10;
    if (lVar9 != 0) {
      plVar22 = (longlong *)&local_278;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar18;
    local_258 = local_1f8;
    uStack_230 = (longlong *)0x0;
    if (local_1f8 != (code *)0x0) {
      pppuVar24 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar24 = local_1d0;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_248);
    }
    lVar9 = *(longlong *)&this->field_0xb0;
    uVar10 = *(undefined8 *)&this->field_0xb8;
    uVar26 = *(undefined4 *)&this->field_0xc0;
    uVar5 = *(undefined4 *)&this->field_0xc4;
    uVar6 = *(undefined4 *)&this->field_0xc8;
    uVar7 = *(undefined4 *)&this->field_0xcc;
    uVar8 = *(undefined8 *)&this->field_0xd0;
    plVar23 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_258;
    *(undefined8 *)&this->field_0xb8 = uStack_250;
    *(undefined4 *)&this->field_0xc0 = local_248;
    *(undefined4 *)&this->field_0xc4 = uStack_244;
    *(undefined4 *)&this->field_0xc8 = uStack_240;
    *(undefined4 *)&this->field_0xcc = uStack_23c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_238;
    *(undefined4 *)&this->field_0xd4 = local_238._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_230;
    *(undefined4 *)&this->field_0xdc = uStack_230._4_4_;
    local_258 = (code *)lVar9;
    uStack_250 = uVar10;
    local_248 = uVar26;
    uStack_244 = uVar5;
    uStack_240 = uVar6;
    uStack_23c = uVar7;
    local_238 = uVar8;
    uStack_230 = plVar23;
    if (lVar9 != 0) {
      plVar22 = (longlong *)&local_248;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_228 != (code *)0x0) {
      pppuVar24 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar24 = local_200;
      }
      (*(code *)(*pppuVar24)[2])();
    }
    if (local_1f8 == (code *)0x0) goto LAB_14883f281;
    pppuVar24 = &local_1e8;
    pppuVar21 = local_1d0;
  }
  if (pppuVar21 != (undefined ***)0x0) {
    pppuVar24 = pppuVar21;
  }
  (*(code *)(*pppuVar24)[2])();
LAB_14883f281:
  FVar3 = local_2d0;
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar3,CycleScopeEnd);
  }
  return;
}

// GetMipDataProviderThread @ 14883f380

EThreadType __thiscall
FTextureStreamIn::GetMipDataProviderThread(FTextureStreamIn *this,ETickState param_1)

{
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  EThreadType EVar6;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar7;
  undefined1 local_res8 [8];
  
  if (this->field_0x5c == '\0') {
    FVar7 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
    iVar2 = (this->MipDataProviders).ArrayNum;
    if (FVar7 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                  )0x0) {
      FVar7 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )&this->MipDataProviders;
    }
    FVar1 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
             )((longlong)FVar7 + (longlong)iVar2 * 8);
    while( true ) {
      if ((this->MipDataProviders).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar7 == FVar1) break;
      if ((*(longlong *)FVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipDataProvider",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                             ,0x5e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      if (*(ETickState *)(*(longlong *)FVar7 + 0x18) == param_1) {
        iVar3 = *(int *)(*(longlong *)FVar7 + 0x1c);
        if (iVar3 == 0) {
          return TT_Async;
        }
        if (iVar3 == 1) {
          return TT_Render;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                           ,0x68,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          EVar6 = (*pcVar4)();
          return EVar6;
        }
      }
      FVar7 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
               )((longlong)FVar7 + 8);
    }
  }
  return TT_None;
}

// InitMipDataProviders @ 1488452d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::InitMipDataProviders(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  LARGE_INTEGER LVar15;
  bool bVar16;
  EThreadType EVar17;
  EThreadType EVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::InitMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_InitMipDataProviders>
  FVar20;
  undefined ***pppuVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar22;
  longlong *plVar23;
  undefined ***pppuVar24;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar25;
  FName FVar26;
  undefined1 auStackY_348 [32];
  undefined1 local_2e8 [4];
  FColor_u_0 local_2e4;
  FName local_2e0;
  LARGE_INTEGER local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FStatMessage local_2b0;
  FName local_2a0;
  FName local_298 [2];
  code *local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined **local_218;
  FTextureStreamIn *local_210;
  undefined ***local_200;
  code *local_1f8;
  undefined **local_1e8;
  FTextureStreamIn *local_1e0;
  undefined ***local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FTextureStreamIn *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FTextureStreamIn *local_120;
  undefined ***local_110;
  longlong local_108;
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
  FTextureStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2d8 = (LARGE_INTEGER)param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_InitMipDataProviders =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::InitMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_InitMipDataProviders>
          )0x0;
    pFVar19 = ::FName::FName(&local_2a0,"STAT_TextureStreamIn_InitMipDataProviders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_InitMipDataProviders,
               *pFVar19,L"FTextureStreamIn::InitMipDataProviders","STATGROUP_StreamingDetails",
               "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_TextureStreamIn_InitMipDataProviders;
  if (StatPtr_STAT_TextureStreamIn_InitMipDataProviders ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::InitMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_InitMipDataProviders>
       )0x0) {
    pFVar19 = ::FName::FName(local_298,"STAT_TextureStreamIn_InitMipDataProviders");
    FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::InitMipDataProviders(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_InitMipDataProviders>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TextureStreamIn_InitMipDataProviders,*pFVar19,
                          L"FTextureStreamIn::InitMipDataProviders","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar26 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_148845453:
    bVar13 = false;
    local_2c8 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e4._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d0.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_2d0.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x10a);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148845453;
    local_2e0 = FVar26;
    local_2c8 = FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar13 = true;
  }
  LVar15 = local_2d8;
  FVar25 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar2 = (this->MipDataProviders).ArrayNum;
  if (FVar25 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&this->MipDataProviders;
  }
  FVar26 = (FName)((longlong)FVar25 + (longlong)iVar2 * 8);
  local_2e0 = FVar26;
  while( true ) {
    if ((this->MipDataProviders).ArrayNum != iVar2) {
      local_2e8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_2e8);
    }
    if ((FName)FVar25 == FVar26) break;
    if ((*(longlong *)FVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipDataProvider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0xaa,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(*(longlong *)FVar25 + 0x18) == 0) {
      iVar3 = *(int *)(*(longlong *)FVar25 + 0x1c);
      if (*(int *)(LVar15.QuadPart + 0x20) == 2) {
        bVar16 = iVar3 == 0;
      }
      else {
        if ((*(int *)(LVar15.QuadPart + 0x20) != 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskThread == TT_Render",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x23,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar16 = iVar3 == 1;
      }
      FVar26 = local_2e0;
      if (bVar16) {
        (**(code **)(**(longlong **)FVar25 + 8))();
        FVar26 = local_2e0;
      }
    }
    FVar25 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar25 + 8);
  }
  EVar17 = GetMipDataProviderThread(this,Init);
  if (EVar17 == TT_None) {
    EVar17 = GetMipAllocatorThread(this,AllocateMips);
    if (EVar17 == TT_None) {
      if (*(int *)&this->field_0x60 != 0) {
        this->field_0x5c = 1;
      }
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::InitMipDataProviders'::`12'::<lambda_5>,0,0>
                  ::_vftable_;
      local_80 = (undefined ***)0x0;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextureStreamIn::InitMipDataProviders'::__l12::<lambda_5>,void,FTextureUpdateContext_const_&>
                 ::Call;
      local_90 = this;
      EVar17 = GetCancelThread(this);
      local_78 = 0;
      local_50 = (longlong *)0x0;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 0;
      local_108 = local_78;
      uStack_e0 = (longlong *)0x0;
      if (local_78 != 0) {
        plVar23 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)*plVar23)(plVar23,&local_f8);
      }
      lVar10 = *(longlong *)&this->field_0x70;
      uVar11 = *(undefined8 *)&this->field_0x78;
      uVar5 = *(undefined4 *)&this->field_0x80;
      uVar6 = *(undefined4 *)&this->field_0x84;
      uVar7 = *(undefined4 *)&this->field_0x88;
      uVar8 = *(undefined4 *)&this->field_0x8c;
      uVar9 = *(undefined8 *)&this->field_0x90;
      plVar23 = *(longlong **)&this->field_0x98;
      *(longlong *)&this->field_0x70 = local_108;
      *(undefined8 *)&this->field_0x78 = uStack_100;
      *(undefined4 *)&this->field_0x80 = local_f8;
      *(undefined4 *)&this->field_0x84 = uStack_f4;
      *(undefined4 *)&this->field_0x88 = uStack_f0;
      *(undefined4 *)&this->field_0x8c = uStack_ec;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
      *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
      *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
      local_108 = lVar10;
      uStack_100 = uVar11;
      local_f8 = uVar5;
      uStack_f4 = uVar6;
      uStack_f0 = uVar7;
      uStack_ec = uVar8;
      local_e8 = uVar9;
      uStack_e0 = plVar23;
      if (lVar10 != 0) {
        plVar22 = (longlong *)&local_f8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar17;
      local_d8 = local_a8;
      uStack_b0 = (longlong *)0x0;
      if (local_a8 != (code *)0x0) {
        pppuVar24 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar24 = local_80;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_c8);
      }
      lVar10 = *(longlong *)&this->field_0xb0;
      uVar11 = *(undefined8 *)&this->field_0xb8;
      uVar5 = *(undefined4 *)&this->field_0xc0;
      uVar6 = *(undefined4 *)&this->field_0xc4;
      uVar7 = *(undefined4 *)&this->field_0xc8;
      uVar8 = *(undefined4 *)&this->field_0xcc;
      uVar9 = *(undefined8 *)&this->field_0xd0;
      plVar23 = *(longlong **)&this->field_0xd8;
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
      local_d8 = (code *)lVar10;
      uStack_d0 = uVar11;
      local_c8 = uVar5;
      uStack_c4 = uVar6;
      uStack_c0 = uVar7;
      uStack_bc = uVar8;
      local_b8 = uVar9;
      uStack_b0 = plVar23;
      if (lVar10 != 0) {
        plVar22 = (longlong *)&local_c8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_78 != 0) {
        plVar23 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      if (local_a8 == (code *)0x0) goto LAB_148845bc2;
      pppuVar24 = &local_98;
      pppuVar21 = local_80;
    }
    else {
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::InitMipDataProviders'::`10'::<lambda_4>,0,0>
                   ::_vftable_;
      local_110 = (undefined ***)0x0;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::InitMipDataProviders'::__l10::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_120 = this;
      EVar18 = GetCancelThread(this);
      local_140 = (undefined ***)0x0;
      local_158 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::InitMipDataProviders'::`10'::<lambda_3>,0,0>
                   ::_vftable_;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::InitMipDataProviders'::__l10::<lambda_3>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_150 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(EThreadType *)&this->field_0x68 = EVar17;
      local_1c8 = local_168;
      uStack_1a0 = (longlong *)0x0;
      if (local_168 != (code *)0x0) {
        pppuVar24 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar24 = local_140;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_1b8);
      }
      lVar10 = *(longlong *)&this->field_0x70;
      uVar11 = *(undefined8 *)&this->field_0x78;
      uVar5 = *(undefined4 *)&this->field_0x80;
      uVar6 = *(undefined4 *)&this->field_0x84;
      uVar7 = *(undefined4 *)&this->field_0x88;
      uVar8 = *(undefined4 *)&this->field_0x8c;
      uVar9 = *(undefined8 *)&this->field_0x90;
      plVar23 = *(longlong **)&this->field_0x98;
      *(code **)&this->field_0x70 = local_1c8;
      *(undefined8 *)&this->field_0x78 = uStack_1c0;
      *(undefined4 *)&this->field_0x80 = local_1b8;
      *(undefined4 *)&this->field_0x84 = uStack_1b4;
      *(undefined4 *)&this->field_0x88 = uStack_1b0;
      *(undefined4 *)&this->field_0x8c = uStack_1ac;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_1a8;
      *(undefined4 *)&this->field_0x94 = local_1a8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_1a0;
      *(undefined4 *)&this->field_0x9c = uStack_1a0._4_4_;
      local_1c8 = (code *)lVar10;
      uStack_1c0 = uVar11;
      local_1b8 = uVar5;
      uStack_1b4 = uVar6;
      uStack_1b0 = uVar7;
      uStack_1ac = uVar8;
      local_1a8 = uVar9;
      uStack_1a0 = plVar23;
      if (lVar10 != 0) {
        plVar22 = (longlong *)&local_1b8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar18;
      local_198 = local_138;
      uStack_170 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        pppuVar24 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar24 = local_110;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_188);
      }
      lVar10 = *(longlong *)&this->field_0xb0;
      uVar11 = *(undefined8 *)&this->field_0xb8;
      uVar5 = *(undefined4 *)&this->field_0xc0;
      uVar6 = *(undefined4 *)&this->field_0xc4;
      uVar7 = *(undefined4 *)&this->field_0xc8;
      uVar8 = *(undefined4 *)&this->field_0xcc;
      uVar9 = *(undefined8 *)&this->field_0xd0;
      plVar23 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_198;
      *(undefined8 *)&this->field_0xb8 = uStack_190;
      *(undefined4 *)&this->field_0xc0 = local_188;
      *(undefined4 *)&this->field_0xc4 = uStack_184;
      *(undefined4 *)&this->field_0xc8 = uStack_180;
      *(undefined4 *)&this->field_0xcc = uStack_17c;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_178;
      *(undefined4 *)&this->field_0xd4 = local_178._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_170;
      *(undefined4 *)&this->field_0xdc = uStack_170._4_4_;
      local_198 = (code *)lVar10;
      uStack_190 = uVar11;
      local_188 = uVar5;
      uStack_184 = uVar6;
      uStack_180 = uVar7;
      uStack_17c = uVar8;
      local_178 = uVar9;
      uStack_170 = plVar23;
      if (lVar10 != 0) {
        plVar22 = (longlong *)&local_188;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_168 != (code *)0x0) {
        pppuVar24 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar24 = local_140;
        }
        (*(code *)(*pppuVar24)[2])();
      }
      if (local_138 == (code *)0x0) goto LAB_148845bc2;
      pppuVar24 = &local_128;
      pppuVar21 = local_110;
    }
  }
  else {
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::InitMipDataProviders'::`5'::<lambda_2>,0,0>
                 ::_vftable_;
    local_1d0 = (undefined ***)0x0;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::InitMipDataProviders'::__l5::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1e0 = this;
    EVar18 = GetCancelThread(this);
    local_200 = (undefined ***)0x0;
    local_218 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::InitMipDataProviders'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::InitMipDataProviders'::__l5::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_210 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar17;
    local_288 = local_228;
    uStack_260 = (longlong *)0x0;
    if (local_228 != (code *)0x0) {
      pppuVar24 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar24 = local_200;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_278);
    }
    lVar10 = *(longlong *)&this->field_0x70;
    uVar11 = *(undefined8 *)&this->field_0x78;
    uVar5 = *(undefined4 *)&this->field_0x80;
    uVar6 = *(undefined4 *)&this->field_0x84;
    uVar7 = *(undefined4 *)&this->field_0x88;
    uVar8 = *(undefined4 *)&this->field_0x8c;
    uVar9 = *(undefined8 *)&this->field_0x90;
    plVar23 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_288;
    *(undefined8 *)&this->field_0x78 = uStack_280;
    *(undefined4 *)&this->field_0x80 = local_278;
    *(undefined4 *)&this->field_0x84 = uStack_274;
    *(undefined4 *)&this->field_0x88 = uStack_270;
    *(undefined4 *)&this->field_0x8c = uStack_26c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_268;
    *(undefined4 *)&this->field_0x94 = local_268._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_260;
    *(undefined4 *)&this->field_0x9c = uStack_260._4_4_;
    local_278 = uVar5;
    uStack_274 = uVar6;
    uStack_270 = uVar7;
    uStack_26c = uVar8;
    local_268 = uVar9;
    uStack_260 = plVar23;
    local_288 = (code *)lVar10;
    uStack_280 = uVar11;
    if (lVar10 != 0) {
      plVar22 = (longlong *)&local_278;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar18;
    local_258 = local_1f8;
    uStack_230 = (longlong *)0x0;
    if (local_1f8 != (code *)0x0) {
      pppuVar24 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar24 = local_1d0;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_248);
    }
    lVar10 = *(longlong *)&this->field_0xb0;
    uVar11 = *(undefined8 *)&this->field_0xb8;
    uVar5 = *(undefined4 *)&this->field_0xc0;
    uVar6 = *(undefined4 *)&this->field_0xc4;
    uVar7 = *(undefined4 *)&this->field_0xc8;
    uVar8 = *(undefined4 *)&this->field_0xcc;
    uVar9 = *(undefined8 *)&this->field_0xd0;
    plVar23 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_258;
    *(undefined8 *)&this->field_0xb8 = uStack_250;
    *(undefined4 *)&this->field_0xc0 = local_248;
    *(undefined4 *)&this->field_0xc4 = uStack_244;
    *(undefined4 *)&this->field_0xc8 = uStack_240;
    *(undefined4 *)&this->field_0xcc = uStack_23c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_238;
    *(undefined4 *)&this->field_0xd4 = local_238._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_230;
    *(undefined4 *)&this->field_0xdc = uStack_230._4_4_;
    local_258 = (code *)lVar10;
    uStack_250 = uVar11;
    local_248 = uVar5;
    uStack_244 = uVar6;
    uStack_240 = uVar7;
    uStack_23c = uVar8;
    local_238 = uVar9;
    uStack_230 = plVar23;
    if (lVar10 != 0) {
      plVar22 = (longlong *)&local_248;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_228 != (code *)0x0) {
      pppuVar24 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar24 = local_200;
      }
      (*(code *)(*pppuVar24)[2])();
    }
    if (local_1f8 == (code *)0x0) goto LAB_148845bc2;
    pppuVar24 = &local_1e8;
    pppuVar21 = local_1d0;
  }
  if (pppuVar21 != (undefined ***)0x0) {
    pppuVar24 = pppuVar21;
  }
  (*(code *)(*pppuVar24)[2])();
LAB_148845bc2:
  FVar26 = local_2c8;
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2b0.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_2b0.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2d8);
      local_2b0.StatData.Pad = (uchar  [8])(local_2d8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_2b0);
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

// PollMipData @ 14884cf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureStreamIn::PollMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int iVar1;
  int iVar2;
  ETickThread EVar3;
  FTextureMipAllocator *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  EThreadType EVar17;
  EThreadType EVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PollMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PollMipData>
  FVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  longlong *plVar24;
  FName FVar25;
  ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
  FVar26;
  undefined4 uVar27;
  FName FVar28;
  undefined1 auStackY_328 [32];
  undefined1 local_2c8 [8];
  FName local_2c0;
  FColor_u_0 local_2b8 [2];
  FName local_2b0;
  FName local_2a8;
  FTextureUpdateContext *local_298;
  FName local_290;
  FName local_288 [2];
  code *local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  code *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  code *local_218;
  undefined **local_208;
  FTextureStreamIn *local_200;
  undefined ***local_1f0;
  code *local_1e8;
  undefined **local_1d8;
  FTextureStreamIn *local_1d0;
  undefined ***local_1c0;
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  code *local_158;
  undefined **local_148;
  FTextureStreamIn *local_140;
  undefined ***local_130;
  code *local_128;
  undefined **local_118;
  FTextureStreamIn *local_110;
  undefined ***local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTextureStreamIn *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_298 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_PollMipData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PollMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PollMipData>
          )0x0;
    pFVar19 = ::FName::FName(&local_290,"STAT_TextureStreamIn_PollMipData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_PollMipData,*pFVar19,
               L"FTextureStreamIn::PollMipData","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_TextureStreamIn_PollMipData;
  if (StatPtr_STAT_TextureStreamIn_PollMipData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PollMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PollMipData>
       )0x0) {
    pFVar19 = ::FName::FName(local_288,"STAT_TextureStreamIn_PollMipData");
    FVar20 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PollMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PollMipData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_PollMipData,
                          *pFVar19,L"FTextureStreamIn::PollMipData","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar25 = *(FName *)FVar20;
  bVar12 = false;
  bVar14 = false;
  local_2a8.ComparisonIndex.Value = 0;
  local_2a8.Number = 0;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b8[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_2b0.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x178);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2c0 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar13 = true;
      goto LAB_14884d0bb;
    }
  }
  bVar13 = false;
  FVar25 = local_2a8;
LAB_14884d0bb:
  FVar26 = (this->MipDataProviders).AllocatorInstance.SecondaryData;
  iVar1 = (this->MipDataProviders).ArrayNum;
  if (FVar26 == (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
                 )0x0) {
    FVar26 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )&this->MipDataProviders;
  }
  FVar28 = (FName)((longlong)FVar26 + (longlong)iVar1 * 8);
  local_2c0 = FVar28;
  do {
    if ((this->MipDataProviders).ArrayNum != iVar1) {
      local_2c8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_2c8);
    }
    if ((FName)FVar26 == FVar28) goto LAB_14884d1ab;
    if ((*(longlong *)FVar26 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipDataProvider",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0xca,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(*(longlong *)FVar26 + 0x18) == 2) {
      iVar2 = *(int *)(*(longlong *)FVar26 + 0x1c);
      if (local_298->CurrentThread == 2) {
        bVar15 = iVar2 == 0;
      }
      else {
        if ((local_298->CurrentThread != 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskThread == TT_Render",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x23,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar15 = iVar2 == 1;
      }
      FVar28 = local_2c0;
      if ((bVar15) &&
         (cVar16 = (**(code **)(**(longlong **)FVar26 + 0x18))
                             (*(longlong **)FVar26,&this->SyncOptions), FVar28 = local_2c0,
         cVar16 == '\0')) break;
    }
    FVar26 = (ForElementType<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_>
              )((longlong)FVar26 + 8);
  } while( true );
  if (*(int *)&this->field_0x60 != 0) {
    this->field_0x5c = 1;
  }
LAB_14884d1ab:
  uVar27 = 2;
  EVar17 = GetMipDataProviderThread(this,PollMips);
  if (EVar17 == TT_None) {
    this->bIsPollingMipData = false;
    if (this->field_0x5c == '\0') {
      if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipAllocator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x72,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((this->field_0x5c == '\0') &&
         (pFVar4 = (this->MipAllocator).Ptr, pFVar4->NextTickState == UploadMips)) {
        EVar3 = pFVar4->NextTickThread;
        if (EVar3 != Async) {
          if (EVar3 != Render) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x7c,L"");
            if (bVar15) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            goto LAB_14884d42a;
          }
          uVar27 = 1;
        }
        local_118 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamIn::PollMipData'::`16'::<lambda_4>,0,0>::
                     _vftable_;
        local_100 = (undefined ***)0x0;
        local_128 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamIn::PollMipData'::__l16::<lambda_4>,void,FTextureUpdateContext_const_&>
                    ::Call;
        local_110 = this;
        EVar17 = GetCancelThread(this);
        local_130 = (undefined ***)0x0;
        local_148 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamIn::PollMipData'::`16'::<lambda_3>,0,0>::
                     _vftable_;
        local_158 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamIn::PollMipData'::__l16::<lambda_3>,void,FTextureUpdateContext_const_&>
                    ::Call;
        local_140 = this;
        if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Locked || TaskState == TS_Init",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                                ,0x1b,L""), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)&this->field_0x68 = uVar27;
        local_1b8 = local_158;
        uStack_190 = (longlong *)0x0;
        if (local_158 != (code *)0x0) {
          pppuVar23 = &local_148;
          if (local_130 != (undefined ***)0x0) {
            pppuVar23 = local_130;
          }
          (*(code *)**pppuVar23)(pppuVar23,&local_1a8);
        }
        lVar10 = *(longlong *)&this->field_0x70;
        uVar11 = *(undefined8 *)&this->field_0x78;
        uVar27 = *(undefined4 *)&this->field_0x80;
        uVar6 = *(undefined4 *)&this->field_0x84;
        uVar7 = *(undefined4 *)&this->field_0x88;
        uVar8 = *(undefined4 *)&this->field_0x8c;
        uVar9 = *(undefined8 *)&this->field_0x90;
        plVar22 = *(longlong **)&this->field_0x98;
        *(code **)&this->field_0x70 = local_1b8;
        *(undefined8 *)&this->field_0x78 = uStack_1b0;
        *(undefined4 *)&this->field_0x80 = local_1a8;
        *(undefined4 *)&this->field_0x84 = uStack_1a4;
        *(undefined4 *)&this->field_0x88 = uStack_1a0;
        *(undefined4 *)&this->field_0x8c = uStack_19c;
        *(undefined4 *)&this->field_0x90 = (undefined4)local_198;
        *(undefined4 *)&this->field_0x94 = local_198._4_4_;
        *(undefined4 *)&this->field_0x98 = (undefined4)uStack_190;
        *(undefined4 *)&this->field_0x9c = uStack_190._4_4_;
        local_1b8 = (code *)lVar10;
        uStack_1b0 = uVar11;
        local_1a8 = uVar27;
        uStack_1a4 = uVar6;
        uStack_1a0 = uVar7;
        uStack_19c = uVar8;
        local_198 = uVar9;
        uStack_190 = plVar22;
        if (lVar10 != 0) {
          plVar24 = (longlong *)&local_1a8;
          if (plVar22 != (longlong *)0x0) {
            plVar24 = plVar22;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        *(EThreadType *)&this->field_0xa0 = EVar17;
        local_188 = local_128;
        uStack_160 = (longlong *)0x0;
        if (local_128 != (code *)0x0) {
          pppuVar23 = &local_118;
          if (local_100 != (undefined ***)0x0) {
            pppuVar23 = local_100;
          }
          (*(code *)**pppuVar23)(pppuVar23,&local_178);
        }
        lVar10 = *(longlong *)&this->field_0xb0;
        uVar11 = *(undefined8 *)&this->field_0xb8;
        uVar27 = *(undefined4 *)&this->field_0xc0;
        uVar6 = *(undefined4 *)&this->field_0xc4;
        uVar7 = *(undefined4 *)&this->field_0xc8;
        uVar8 = *(undefined4 *)&this->field_0xcc;
        uVar9 = *(undefined8 *)&this->field_0xd0;
        plVar22 = *(longlong **)&this->field_0xd8;
        *(code **)&this->field_0xb0 = local_188;
        *(undefined8 *)&this->field_0xb8 = uStack_180;
        *(undefined4 *)&this->field_0xc0 = local_178;
        *(undefined4 *)&this->field_0xc4 = uStack_174;
        *(undefined4 *)&this->field_0xc8 = uStack_170;
        *(undefined4 *)&this->field_0xcc = uStack_16c;
        *(undefined4 *)&this->field_0xd0 = (undefined4)local_168;
        *(undefined4 *)&this->field_0xd4 = local_168._4_4_;
        *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_160;
        *(undefined4 *)&this->field_0xdc = uStack_160._4_4_;
        local_188 = (code *)lVar10;
        uStack_180 = uVar11;
        local_178 = uVar27;
        uStack_174 = uVar6;
        uStack_170 = uVar7;
        uStack_16c = uVar8;
        local_168 = uVar9;
        uStack_160 = plVar22;
        if (lVar10 != 0) {
          plVar24 = (longlong *)&local_178;
          if (plVar22 != (longlong *)0x0) {
            plVar24 = plVar22;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
        if (local_158 != (code *)0x0) {
          pppuVar23 = &local_148;
          if (local_130 != (undefined ***)0x0) {
            pppuVar23 = local_130;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        if (local_128 == (code *)0x0) goto LAB_14884d66a;
        pppuVar23 = &local_118;
        pppuVar21 = local_100;
        goto LAB_14884d65d;
      }
LAB_14884d42a:
      if (*(int *)&this->field_0x60 != 0) {
        this->field_0x5c = 1;
      }
    }
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTextureStreamIn::PollMipData'::`21'::<lambda_5>,0,0>::
                _vftable_;
    local_70 = (undefined ***)0x0;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FTextureStreamIn::PollMipData'::__l21::<lambda_5>,void,FTextureUpdateContext_const_&>
               ::Call;
    local_80 = this;
    EVar17 = GetCancelThread(this);
    local_68 = 0;
    local_40 = (longlong *)0x0;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)&this->field_0x68 = 0;
    local_f8 = local_68;
    uStack_d0 = (longlong *)0x0;
    if (local_68 != 0) {
      plVar22 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar22 = local_40;
      }
      (**(code **)*plVar22)(plVar22,&local_e8);
    }
    lVar10 = *(longlong *)&this->field_0x70;
    uVar11 = *(undefined8 *)&this->field_0x78;
    uVar27 = *(undefined4 *)&this->field_0x80;
    uVar6 = *(undefined4 *)&this->field_0x84;
    uVar7 = *(undefined4 *)&this->field_0x88;
    uVar8 = *(undefined4 *)&this->field_0x8c;
    uVar9 = *(undefined8 *)&this->field_0x90;
    plVar22 = *(longlong **)&this->field_0x98;
    *(longlong *)&this->field_0x70 = local_f8;
    *(undefined8 *)&this->field_0x78 = uStack_f0;
    *(undefined4 *)&this->field_0x80 = local_e8;
    *(undefined4 *)&this->field_0x84 = uStack_e4;
    *(undefined4 *)&this->field_0x88 = uStack_e0;
    *(undefined4 *)&this->field_0x8c = uStack_dc;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
    *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
    *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
    local_f8 = lVar10;
    uStack_f0 = uVar11;
    local_e8 = uVar27;
    uStack_e4 = uVar6;
    uStack_e0 = uVar7;
    uStack_dc = uVar8;
    local_d8 = uVar9;
    uStack_d0 = plVar22;
    if (lVar10 != 0) {
      plVar24 = (longlong *)&local_e8;
      if (plVar22 != (longlong *)0x0) {
        plVar24 = plVar22;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar17;
    local_c8 = local_98;
    uStack_a0 = (longlong *)0x0;
    if (local_98 != (code *)0x0) {
      pppuVar23 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar23 = local_70;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_b8);
    }
    lVar10 = *(longlong *)&this->field_0xb0;
    uVar11 = *(undefined8 *)&this->field_0xb8;
    uVar27 = *(undefined4 *)&this->field_0xc0;
    uVar6 = *(undefined4 *)&this->field_0xc4;
    uVar7 = *(undefined4 *)&this->field_0xc8;
    uVar8 = *(undefined4 *)&this->field_0xcc;
    uVar9 = *(undefined8 *)&this->field_0xd0;
    plVar22 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_c8;
    *(undefined8 *)&this->field_0xb8 = uStack_c0;
    *(undefined4 *)&this->field_0xc0 = local_b8;
    *(undefined4 *)&this->field_0xc4 = uStack_b4;
    *(undefined4 *)&this->field_0xc8 = uStack_b0;
    *(undefined4 *)&this->field_0xcc = uStack_ac;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_a8;
    *(undefined4 *)&this->field_0xd4 = local_a8._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_a0;
    *(undefined4 *)&this->field_0xdc = uStack_a0._4_4_;
    local_c8 = (code *)lVar10;
    uStack_c0 = uVar11;
    local_b8 = uVar27;
    uStack_b4 = uVar6;
    uStack_b0 = uVar7;
    uStack_ac = uVar8;
    local_a8 = uVar9;
    uStack_a0 = plVar22;
    if (lVar10 != 0) {
      plVar24 = (longlong *)&local_b8;
      if (plVar22 != (longlong *)0x0) {
        plVar24 = plVar22;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_68 != 0) {
      plVar22 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar22 = local_40;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if (local_98 == (code *)0x0) goto LAB_14884d66a;
    pppuVar23 = &local_88;
    pppuVar21 = local_70;
  }
  else {
    local_1d8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::PollMipData'::`8'::<lambda_2>,0,0>::
                 _vftable_;
    local_1c0 = (undefined ***)0x0;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::PollMipData'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1d0 = this;
    EVar18 = GetCancelThread(this);
    local_1f0 = (undefined ***)0x0;
    local_208 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::PollMipData'::`8'::<lambda_1>,0,0>::
                 _vftable_;
    local_218 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::PollMipData'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_200 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar17;
    local_278 = local_218;
    uStack_250 = (longlong *)0x0;
    if (local_218 != (code *)0x0) {
      pppuVar23 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar23 = local_1f0;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_268);
    }
    lVar10 = *(longlong *)&this->field_0x70;
    uVar11 = *(undefined8 *)&this->field_0x78;
    uVar27 = *(undefined4 *)&this->field_0x80;
    uVar6 = *(undefined4 *)&this->field_0x84;
    uVar7 = *(undefined4 *)&this->field_0x88;
    uVar8 = *(undefined4 *)&this->field_0x8c;
    uVar9 = *(undefined8 *)&this->field_0x90;
    plVar22 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_278;
    *(undefined8 *)&this->field_0x78 = uStack_270;
    *(undefined4 *)&this->field_0x80 = local_268;
    *(undefined4 *)&this->field_0x84 = uStack_264;
    *(undefined4 *)&this->field_0x88 = uStack_260;
    *(undefined4 *)&this->field_0x8c = uStack_25c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_258;
    *(undefined4 *)&this->field_0x94 = local_258._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_250;
    *(undefined4 *)&this->field_0x9c = uStack_250._4_4_;
    local_268 = uVar27;
    uStack_264 = uVar6;
    uStack_260 = uVar7;
    uStack_25c = uVar8;
    local_258 = uVar9;
    uStack_250 = plVar22;
    local_278 = (code *)lVar10;
    uStack_270 = uVar11;
    if (lVar10 != 0) {
      plVar24 = (longlong *)&local_268;
      if (plVar22 != (longlong *)0x0) {
        plVar24 = plVar22;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar18;
    local_248 = local_1e8;
    uStack_220 = (longlong *)0x0;
    if (local_1e8 != (code *)0x0) {
      pppuVar23 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar23 = local_1c0;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_238);
    }
    lVar10 = *(longlong *)&this->field_0xb0;
    uVar11 = *(undefined8 *)&this->field_0xb8;
    uVar27 = *(undefined4 *)&this->field_0xc0;
    uVar6 = *(undefined4 *)&this->field_0xc4;
    uVar7 = *(undefined4 *)&this->field_0xc8;
    uVar8 = *(undefined4 *)&this->field_0xcc;
    uVar9 = *(undefined8 *)&this->field_0xd0;
    plVar22 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_248;
    *(undefined8 *)&this->field_0xb8 = uStack_240;
    *(undefined4 *)&this->field_0xc0 = local_238;
    *(undefined4 *)&this->field_0xc4 = uStack_234;
    *(undefined4 *)&this->field_0xc8 = uStack_230;
    *(undefined4 *)&this->field_0xcc = uStack_22c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_228;
    *(undefined4 *)&this->field_0xd4 = local_228._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_220;
    *(undefined4 *)&this->field_0xdc = uStack_220._4_4_;
    local_248 = (code *)lVar10;
    uStack_240 = uVar11;
    local_238 = uVar27;
    uStack_234 = uVar6;
    uStack_230 = uVar7;
    uStack_22c = uVar8;
    local_228 = uVar9;
    uStack_220 = plVar22;
    if (lVar10 != 0) {
      plVar24 = (longlong *)&local_238;
      if (plVar22 != (longlong *)0x0) {
        plVar24 = plVar22;
      }
      (**(code **)(*plVar24 + 0x10))();
    }
    if (local_218 != (code *)0x0) {
      pppuVar23 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar23 = local_1f0;
      }
      (*(code *)(*pppuVar23)[2])();
    }
    if (local_1e8 == (code *)0x0) goto LAB_14884d66a;
    pppuVar23 = &local_1d8;
    pppuVar21 = local_1c0;
  }
LAB_14884d65d:
  if (pppuVar21 != (undefined ***)0x0) {
    pppuVar23 = pppuVar21;
  }
  (*(code *)(*pppuVar23)[2])();
LAB_14884d66a:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// PostprocessGPUMipData @ 14884e5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::PostprocessGPUMipData(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  EThreadType EVar14;
  EThreadType EVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PostprocessGPUMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PostprocessGPUMipData>
  FVar17;
  undefined ***pppuVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined ***pppuVar22;
  FNameEntryId FVar23;
  FName FVar24;
  undefined1 auStackY_328 [32];
  FColor_u_0 local_2c8 [2];
  LARGE_INTEGER local_2c0;
  FName local_2b8;
  FName local_2b0;
  FStatMessage local_2a0;
  FName local_290;
  FName local_288 [2];
  code *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  code *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  code *local_218;
  undefined **local_208;
  FTextureStreamIn *local_200;
  undefined ***local_1f0;
  code *local_1e8;
  undefined **local_1d8;
  FTextureStreamIn *local_1d0;
  undefined ***local_1c0;
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
  FTextureStreamIn *local_140;
  undefined ***local_130;
  code *local_128;
  undefined **local_118;
  FTextureStreamIn *local_110;
  undefined ***local_100;
  longlong local_f8;
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
  FTextureStreamIn *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_PostprocessGPUMipData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PostprocessGPUMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PostprocessGPUMipData>
          )0x0;
    pFVar16 = ::FName::FName(&local_290,"STAT_TextureStreamIn_PostprocessGPUMipData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_PostprocessGPUMipData,
               *pFVar16,L"FTextureStreamIn::PostprocessGPUMipData","STATGROUP_StreamingDetails",
               "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_TextureStreamIn_PostprocessGPUMipData;
  if (StatPtr_STAT_TextureStreamIn_PostprocessGPUMipData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PostprocessGPUMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PostprocessGPUMipData>
       )0x0) {
    pFVar16 = ::FName::FName(local_288,"STAT_TextureStreamIn_PostprocessGPUMipData");
    FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::PostprocessGPUMipData(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_PostprocessGPUMipData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TextureStreamIn_PostprocessGPUMipData,*pFVar16,
                          L"FTextureStreamIn::PostprocessGPUMipData","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar10 = false;
  bVar12 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar19 = FVar24.Number;
  if ((FVar23.Value == 0) && (uVar19 == 0)) {
LAB_14884e75f:
    bVar11 = false;
    FVar24 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar23.Value;
        local_2b8.Number = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x1c8);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14884e75f;
    local_2c0.s.LowPart = FVar23.Value;
    local_2c0.s.HighPart = uVar19;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar11 = true;
  }
  bVar13 = DoPostprocessGPUMipData(this,param_1);
  if ((!bVar13) && (*(int *)&this->field_0x60 != 0)) {
    this->field_0x5c = 1;
  }
  EVar14 = GetMipDataProviderThread(this,PostprocessGPUMipData);
  if (EVar14 == TT_None) {
    if (this->field_0x5c == '\0') {
      this->bIsPostprocessingGPUMipData = false;
      local_118 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::PostprocessGPUMipData'::`12'::<lambda_4>,0,0>
                   ::_vftable_;
      local_128 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::PostprocessGPUMipData'::__l12::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_100 = (undefined ***)0x0;
      local_110 = this;
      EVar14 = GetCancelThread(this);
      local_130 = (undefined ***)0x0;
      local_148 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::PostprocessGPUMipData'::`12'::<lambda_3>,0,0>
                   ::_vftable_;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::PostprocessGPUMipData'::__l12::<lambda_3>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_140 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 1;
      local_1b8 = local_158;
      uStack_190 = (longlong *)0x0;
      if (local_158 != (code *)0x0) {
        pppuVar22 = &local_148;
        if (local_130 != (undefined ***)0x0) {
          pppuVar22 = local_130;
        }
        (*(code *)**pppuVar22)(pppuVar22,&local_1a8);
      }
      lVar8 = *(longlong *)&this->field_0x70;
      uVar9 = *(undefined8 *)&this->field_0x78;
      uVar3 = *(undefined4 *)&this->field_0x80;
      uVar4 = *(undefined4 *)&this->field_0x84;
      uVar5 = *(undefined4 *)&this->field_0x88;
      uVar6 = *(undefined4 *)&this->field_0x8c;
      uVar7 = *(undefined8 *)&this->field_0x90;
      plVar21 = *(longlong **)&this->field_0x98;
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
      local_1b8 = (code *)lVar8;
      uStack_1b0 = uVar9;
      local_1a8._0_4_ = uVar3;
      local_1a8._4_4_ = uVar4;
      uStack_1a0 = uVar5;
      uStack_19c = uVar6;
      local_198 = uVar7;
      uStack_190 = plVar21;
      if (lVar8 != 0) {
        plVar20 = &local_1a8;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar14;
      local_188 = local_128;
      uStack_160 = (longlong *)0x0;
      if (local_128 != (code *)0x0) {
        pppuVar22 = &local_118;
        if (local_100 != (undefined ***)0x0) {
          pppuVar22 = local_100;
        }
        (*(code *)**pppuVar22)(pppuVar22,&local_178);
      }
      lVar8 = *(longlong *)&this->field_0xb0;
      uVar9 = *(undefined8 *)&this->field_0xb8;
      uVar3 = *(undefined4 *)&this->field_0xc0;
      uVar4 = *(undefined4 *)&this->field_0xc4;
      uVar5 = *(undefined4 *)&this->field_0xc8;
      uVar6 = *(undefined4 *)&this->field_0xcc;
      uVar7 = *(undefined8 *)&this->field_0xd0;
      plVar21 = *(longlong **)&this->field_0xd8;
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
      local_188 = (code *)lVar8;
      uStack_180 = uVar9;
      local_178._0_4_ = uVar3;
      local_178._4_4_ = uVar4;
      uStack_170 = uVar5;
      uStack_16c = uVar6;
      local_168 = uVar7;
      uStack_160 = plVar21;
      if (lVar8 != 0) {
        plVar20 = &local_178;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (local_158 != (code *)0x0) {
        pppuVar22 = &local_148;
        if (local_130 != (undefined ***)0x0) {
          pppuVar22 = local_130;
        }
        (*(code *)(*pppuVar22)[2])();
      }
      if (local_128 == (code *)0x0) goto LAB_14884edef;
      pppuVar22 = &local_118;
      pppuVar18 = local_100;
    }
    else {
      local_70 = (undefined ***)0x0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::PostprocessGPUMipData'::`14'::<lambda_5>,0,0>
                  ::_vftable_;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextureStreamIn::PostprocessGPUMipData'::__l14::<lambda_5>,void,FTextureUpdateContext_const_&>
                 ::Call;
      local_80 = this;
      EVar14 = GetCancelThread(this);
      local_68 = 0;
      local_40 = (longlong *)0x0;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 0;
      local_f8 = local_68;
      uStack_d0 = (longlong *)0x0;
      if (local_68 != 0) {
        plVar21 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar21 = local_40;
        }
        (**(code **)*plVar21)(plVar21,&local_e8);
      }
      lVar8 = *(longlong *)&this->field_0x70;
      uVar9 = *(undefined8 *)&this->field_0x78;
      uVar3 = *(undefined4 *)&this->field_0x80;
      uVar4 = *(undefined4 *)&this->field_0x84;
      uVar5 = *(undefined4 *)&this->field_0x88;
      uVar6 = *(undefined4 *)&this->field_0x8c;
      uVar7 = *(undefined8 *)&this->field_0x90;
      plVar21 = *(longlong **)&this->field_0x98;
      *(longlong *)&this->field_0x70 = local_f8;
      *(undefined8 *)&this->field_0x78 = uStack_f0;
      *(undefined4 *)&this->field_0x80 = (undefined4)local_e8;
      *(undefined4 *)&this->field_0x84 = local_e8._4_4_;
      *(undefined4 *)&this->field_0x88 = uStack_e0;
      *(undefined4 *)&this->field_0x8c = uStack_dc;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_d8;
      *(undefined4 *)&this->field_0x94 = local_d8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_d0;
      *(undefined4 *)&this->field_0x9c = uStack_d0._4_4_;
      local_f8 = lVar8;
      uStack_f0 = uVar9;
      local_e8._0_4_ = uVar3;
      local_e8._4_4_ = uVar4;
      uStack_e0 = uVar5;
      uStack_dc = uVar6;
      local_d8 = uVar7;
      uStack_d0 = plVar21;
      if (lVar8 != 0) {
        plVar20 = &local_e8;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar14;
      local_c8 = local_98;
      uStack_a0 = (longlong *)0x0;
      if (local_98 != (code *)0x0) {
        pppuVar22 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar22 = local_70;
        }
        (*(code *)**pppuVar22)(pppuVar22,&local_b8);
      }
      lVar8 = *(longlong *)&this->field_0xb0;
      uVar9 = *(undefined8 *)&this->field_0xb8;
      uVar3 = *(undefined4 *)&this->field_0xc0;
      uVar4 = *(undefined4 *)&this->field_0xc4;
      uVar5 = *(undefined4 *)&this->field_0xc8;
      uVar6 = *(undefined4 *)&this->field_0xcc;
      uVar7 = *(undefined8 *)&this->field_0xd0;
      plVar21 = *(longlong **)&this->field_0xd8;
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
      local_c8 = (code *)lVar8;
      uStack_c0 = uVar9;
      local_b8._0_4_ = uVar3;
      local_b8._4_4_ = uVar4;
      uStack_b0 = uVar5;
      uStack_ac = uVar6;
      local_a8 = uVar7;
      uStack_a0 = plVar21;
      if (lVar8 != 0) {
        plVar20 = &local_b8;
        if (plVar21 != (longlong *)0x0) {
          plVar20 = plVar21;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (local_68 != 0) {
        plVar21 = local_58;
        if (local_40 != (longlong *)0x0) {
          plVar21 = local_40;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      if (local_98 == (code *)0x0) goto LAB_14884edef;
      pppuVar22 = &local_88;
      pppuVar18 = local_70;
    }
  }
  else {
    local_1c0 = (undefined ***)0x0;
    local_1d8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::PostprocessGPUMipData'::`8'::<lambda_2>,0,0>
                 ::_vftable_;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::PostprocessGPUMipData'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1d0 = this;
    EVar15 = GetCancelThread(this);
    local_1f0 = (undefined ***)0x0;
    local_208 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::PostprocessGPUMipData'::`8'::<lambda_1>,0,0>
                 ::_vftable_;
    local_218 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::PostprocessGPUMipData'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_200 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar14;
    local_278 = local_218;
    uStack_250 = (longlong *)0x0;
    if (local_218 != (code *)0x0) {
      pppuVar22 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar22 = local_1f0;
      }
      (*(code *)**pppuVar22)(pppuVar22,&local_268);
    }
    lVar8 = *(longlong *)&this->field_0x70;
    uVar9 = *(undefined8 *)&this->field_0x78;
    uVar3 = *(undefined4 *)&this->field_0x80;
    uVar4 = *(undefined4 *)&this->field_0x84;
    uVar5 = *(undefined4 *)&this->field_0x88;
    uVar6 = *(undefined4 *)&this->field_0x8c;
    uVar7 = *(undefined8 *)&this->field_0x90;
    plVar21 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_278;
    *(undefined8 *)&this->field_0x78 = uStack_270;
    *(undefined4 *)&this->field_0x80 = (undefined4)local_268;
    *(undefined4 *)&this->field_0x84 = local_268._4_4_;
    *(undefined4 *)&this->field_0x88 = uStack_260;
    *(undefined4 *)&this->field_0x8c = uStack_25c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_258;
    *(undefined4 *)&this->field_0x94 = local_258._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_250;
    *(undefined4 *)&this->field_0x9c = uStack_250._4_4_;
    local_268._0_4_ = uVar3;
    local_268._4_4_ = uVar4;
    uStack_260 = uVar5;
    uStack_25c = uVar6;
    local_258 = uVar7;
    uStack_250 = plVar21;
    local_278 = (code *)lVar8;
    uStack_270 = uVar9;
    if (lVar8 != 0) {
      plVar20 = &local_268;
      if (plVar21 != (longlong *)0x0) {
        plVar20 = plVar21;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar15;
    local_248 = local_1e8;
    uStack_220 = (longlong *)0x0;
    if (local_1e8 != (code *)0x0) {
      pppuVar22 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar22 = local_1c0;
      }
      (*(code *)**pppuVar22)(pppuVar22,&local_238);
    }
    lVar8 = *(longlong *)&this->field_0xb0;
    uVar9 = *(undefined8 *)&this->field_0xb8;
    uVar3 = *(undefined4 *)&this->field_0xc0;
    uVar4 = *(undefined4 *)&this->field_0xc4;
    uVar5 = *(undefined4 *)&this->field_0xc8;
    uVar6 = *(undefined4 *)&this->field_0xcc;
    uVar7 = *(undefined8 *)&this->field_0xd0;
    plVar21 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_248;
    *(undefined8 *)&this->field_0xb8 = uStack_240;
    *(undefined4 *)&this->field_0xc0 = (undefined4)local_238;
    *(undefined4 *)&this->field_0xc4 = local_238._4_4_;
    *(undefined4 *)&this->field_0xc8 = uStack_230;
    *(undefined4 *)&this->field_0xcc = uStack_22c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_228;
    *(undefined4 *)&this->field_0xd4 = local_228._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_220;
    *(undefined4 *)&this->field_0xdc = uStack_220._4_4_;
    local_248 = (code *)lVar8;
    uStack_240 = uVar9;
    local_238._0_4_ = uVar3;
    local_238._4_4_ = uVar4;
    uStack_230 = uVar5;
    uStack_22c = uVar6;
    local_228 = uVar7;
    uStack_220 = plVar21;
    if (lVar8 != 0) {
      plVar20 = &local_238;
      if (plVar21 != (longlong *)0x0) {
        plVar20 = plVar21;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if (local_218 != (code *)0x0) {
      pppuVar22 = &local_208;
      if (local_1f0 != (undefined ***)0x0) {
        pppuVar22 = local_1f0;
      }
      (*(code *)(*pppuVar22)[2])();
    }
    if (local_1e8 == (code *)0x0) goto LAB_14884edef;
    pppuVar22 = &local_1d8;
    pppuVar18 = local_1c0;
  }
  if (pppuVar18 != (undefined ***)0x0) {
    pppuVar22 = pppuVar18;
  }
  (*(code *)(*pppuVar22)[2])();
LAB_14884edef:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2a0.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_2a0.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2c0);
      local_2a0.StatData.Pad[4] = '\0';
      local_2a0.StatData.Pad[5] = '\0';
      local_2a0.StatData.Pad[6] = '\0';
      local_2a0.StatData.Pad[7] = '\0';
      local_2a0.StatData.Pad[0] = local_2c0.s.LowPart._0_1_;
      local_2a0.StatData.Pad[1] = local_2c0.s.LowPart._1_1_;
      local_2a0.StatData.Pad[2] = local_2c0.s.LowPart._2_1_;
      local_2a0.StatData.Pad[3] = local_2c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_2a0);
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

// UploadNewMips @ 148863c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamIn::UploadNewMips(FTextureStreamIn *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  int iVar2;
  int iVar3;
  FTextureMipAllocator *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  EThreadType EVar16;
  EThreadType EVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_UploadNewMips>
  FVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  FName FVar24;
  FName FVar25;
  undefined4 uVar26;
  bool bVar27;
  undefined1 auStackY_338 [32];
  undefined1 local_2d8 [8];
  FName local_2d0;
  FColor_u_0 local_2c8 [2];
  FName local_2c0;
  FName local_2b8;
  FTextureUpdateContext *local_2a8;
  FName local_2a0;
  FName local_298 [2];
  code *local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined **local_218;
  FTextureStreamIn *local_210;
  undefined ***local_200;
  code *local_1f8;
  undefined **local_1e8;
  FTextureStreamIn *local_1e0;
  undefined ***local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined **local_158;
  FTextureStreamIn *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FTextureStreamIn *local_120;
  undefined ***local_110;
  longlong local_108;
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
  FTextureStreamIn *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2a8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamIn_UploadNewMips =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_UploadNewMips>
          )0x0;
    pFVar18 = ::FName::FName(&local_2a0,"STAT_TextureStreamIn_UploadNewMips");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_UploadNewMips,*pFVar18,
               L"FTextureStreamIn::UploadNewMips","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_TextureStreamIn_UploadNewMips;
  if (StatPtr_STAT_TextureStreamIn_UploadNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_UploadNewMips>
       )0x0) {
    pFVar18 = ::FName::FName(local_298,"STAT_TextureStreamIn_UploadNewMips");
    FVar19 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamIn::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamIn_UploadNewMips>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamIn_UploadNewMips,
                          *pFVar18,L"FTextureStreamIn::UploadNewMips","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar24 = *(FName *)FVar19;
  bVar12 = false;
  bVar14 = false;
  local_2b8.ComparisonIndex.Value = 0;
  local_2b8.Number = 0;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_148863db0:
    bVar13 = false;
    FVar24 = local_2b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                   ,0x1a2);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148863db0;
    local_2d0 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar13 = true;
  }
  pFVar4 = (this->MipAllocator).Ptr;
  if (pFVar4 == (FTextureMipAllocator *)0x0) {
LAB_148863e05:
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                        ,0xd9,L"");
    if (bVar27) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    EVar1 = pFVar4->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar27 = EVar1 == Async;
    }
    else {
      if ((param_1->CurrentThread != 1) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                              ,0x16,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar27 = EVar1 == Render;
    }
    if (!bVar27) goto LAB_148863e05;
  }
  pFVar4 = (this->MipAllocator).Ptr;
  cVar15 = (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,param_1,&this->SyncOptions);
  if ((cVar15 == '\0') && (*(int *)&this->field_0x60 != 0)) {
    this->field_0x5c = 1;
  }
  uVar26 = 1;
  EVar16 = GetMipAllocatorThread(this,UploadMips);
  if (EVar16 == TT_None) {
    if (this->field_0x5c == '\0') {
      FVar25 = *(FName *)&(this->MipDataProviders).AllocatorInstance.SecondaryData;
      iVar2 = (this->MipDataProviders).ArrayNum;
      if (FVar25 == (FName)0x0) {
        FVar25 = (FName)&this->MipDataProviders;
      }
      local_2d0 = (FName)((longlong)FVar25 + (longlong)iVar2 * 8);
      while( true ) {
        if ((this->MipDataProviders).ArrayNum != iVar2) {
          local_2d8[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<FTextureMipDataProvider,TDefaultDelete<FTextureMipDataProvider>_>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2d8);
        }
        if (FVar25 == local_2d0) {
          PostprocessGPUMipData(this,local_2a8);
          goto LAB_14886459c;
        }
        if ((*(longlong *)FVar25 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("MipDataProvider",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                                ,0x5e,L""), bVar27)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(*(longlong *)FVar25 + 0x18) == 3) break;
LAB_1488640fa:
        FVar25 = (FName)((longlong)FVar25 + 8);
      }
      iVar3 = *(int *)(*(longlong *)FVar25 + 0x1c);
      if (iVar3 == 0) {
        uVar26 = 2;
      }
      else if (iVar3 != 1) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamIn.cpp"
                            ,0x68,L"");
        if (bVar27) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_1488640fa;
      }
      this->bIsPostprocessingGPUMipData = true;
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::UploadNewMips'::`15'::<lambda_4>,0,0>::
                   _vftable_;
      local_110 = (undefined ***)0x0;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::UploadNewMips'::__l15::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_120 = this;
      EVar16 = GetCancelThread(this);
      local_140 = (undefined ***)0x0;
      local_158 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamIn::UploadNewMips'::`15'::<lambda_3>,0,0>::
                   _vftable_;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamIn::UploadNewMips'::__l15::<lambda_3>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_150 = this;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = uVar26;
      local_1c8 = local_168;
      uStack_1a0 = (longlong *)0x0;
      if (local_168 != (code *)0x0) {
        pppuVar23 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar23 = local_140;
        }
        (*(code *)**pppuVar23)(pppuVar23,&local_1b8);
      }
      lVar10 = *(longlong *)&this->field_0x70;
      uVar11 = *(undefined8 *)&this->field_0x78;
      uVar26 = *(undefined4 *)&this->field_0x80;
      uVar6 = *(undefined4 *)&this->field_0x84;
      uVar7 = *(undefined4 *)&this->field_0x88;
      uVar8 = *(undefined4 *)&this->field_0x8c;
      uVar9 = *(undefined8 *)&this->field_0x90;
      plVar22 = *(longlong **)&this->field_0x98;
      *(code **)&this->field_0x70 = local_1c8;
      *(undefined8 *)&this->field_0x78 = uStack_1c0;
      *(undefined4 *)&this->field_0x80 = local_1b8;
      *(undefined4 *)&this->field_0x84 = uStack_1b4;
      *(undefined4 *)&this->field_0x88 = uStack_1b0;
      *(undefined4 *)&this->field_0x8c = uStack_1ac;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_1a8;
      *(undefined4 *)&this->field_0x94 = local_1a8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_1a0;
      *(undefined4 *)&this->field_0x9c = uStack_1a0._4_4_;
      local_1c8 = (code *)lVar10;
      uStack_1c0 = uVar11;
      local_1b8 = uVar26;
      uStack_1b4 = uVar6;
      uStack_1b0 = uVar7;
      uStack_1ac = uVar8;
      local_1a8 = uVar9;
      uStack_1a0 = plVar22;
      if (lVar10 != 0) {
        plVar21 = (longlong *)&local_1b8;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar16;
      local_198 = local_138;
      uStack_170 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        pppuVar23 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar23 = local_110;
        }
        (*(code *)**pppuVar23)(pppuVar23,&local_188);
      }
      lVar10 = *(longlong *)&this->field_0xb0;
      uVar11 = *(undefined8 *)&this->field_0xb8;
      uVar26 = *(undefined4 *)&this->field_0xc0;
      uVar6 = *(undefined4 *)&this->field_0xc4;
      uVar7 = *(undefined4 *)&this->field_0xc8;
      uVar8 = *(undefined4 *)&this->field_0xcc;
      uVar9 = *(undefined8 *)&this->field_0xd0;
      plVar22 = *(longlong **)&this->field_0xd8;
      *(code **)&this->field_0xb0 = local_198;
      *(undefined8 *)&this->field_0xb8 = uStack_190;
      *(undefined4 *)&this->field_0xc0 = local_188;
      *(undefined4 *)&this->field_0xc4 = uStack_184;
      *(undefined4 *)&this->field_0xc8 = uStack_180;
      *(undefined4 *)&this->field_0xcc = uStack_17c;
      *(undefined4 *)&this->field_0xd0 = (undefined4)local_178;
      *(undefined4 *)&this->field_0xd4 = local_178._4_4_;
      *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_170;
      *(undefined4 *)&this->field_0xdc = uStack_170._4_4_;
      local_198 = (code *)lVar10;
      uStack_190 = uVar11;
      local_188 = uVar26;
      uStack_184 = uVar6;
      uStack_180 = uVar7;
      uStack_17c = uVar8;
      local_178 = uVar9;
      uStack_170 = plVar22;
      if (lVar10 != 0) {
        plVar21 = (longlong *)&local_188;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      if (local_168 != (code *)0x0) {
        pppuVar23 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar23 = local_140;
        }
        (*(code *)(*pppuVar23)[2])();
      }
      if (local_138 == (code *)0x0) goto LAB_14886459c;
      pppuVar23 = &local_128;
      pppuVar20 = local_110;
    }
    else {
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamIn::UploadNewMips'::`19'::<lambda_5>,0,0>::
                  _vftable_;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextureStreamIn::UploadNewMips'::__l19::<lambda_5>,void,FTextureUpdateContext_const_&>
                 ::Call;
      local_90 = this;
      EVar16 = GetCancelThread(this);
      local_78 = 0;
      local_50 = (longlong *)0x0;
      if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)&this->field_0x68 = 0;
      local_108 = local_78;
      uStack_e0 = (longlong *)0x0;
      if (local_78 != 0) {
        plVar22 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar22 = local_50;
        }
        (**(code **)*plVar22)(plVar22,&local_f8);
      }
      lVar10 = *(longlong *)&this->field_0x70;
      uVar11 = *(undefined8 *)&this->field_0x78;
      uVar26 = *(undefined4 *)&this->field_0x80;
      uVar6 = *(undefined4 *)&this->field_0x84;
      uVar7 = *(undefined4 *)&this->field_0x88;
      uVar8 = *(undefined4 *)&this->field_0x8c;
      uVar9 = *(undefined8 *)&this->field_0x90;
      plVar22 = *(longlong **)&this->field_0x98;
      *(longlong *)&this->field_0x70 = local_108;
      *(undefined8 *)&this->field_0x78 = uStack_100;
      *(undefined4 *)&this->field_0x80 = local_f8;
      *(undefined4 *)&this->field_0x84 = uStack_f4;
      *(undefined4 *)&this->field_0x88 = uStack_f0;
      *(undefined4 *)&this->field_0x8c = uStack_ec;
      *(undefined4 *)&this->field_0x90 = (undefined4)local_e8;
      *(undefined4 *)&this->field_0x94 = local_e8._4_4_;
      *(undefined4 *)&this->field_0x98 = (undefined4)uStack_e0;
      *(undefined4 *)&this->field_0x9c = uStack_e0._4_4_;
      local_108 = lVar10;
      uStack_100 = uVar11;
      local_f8 = uVar26;
      uStack_f4 = uVar6;
      uStack_f0 = uVar7;
      uStack_ec = uVar8;
      local_e8 = uVar9;
      uStack_e0 = plVar22;
      if (lVar10 != 0) {
        plVar21 = (longlong *)&local_f8;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      *(EThreadType *)&this->field_0xa0 = EVar16;
      local_d8 = local_a8;
      uStack_b0 = (longlong *)0x0;
      if (local_a8 != (code *)0x0) {
        pppuVar23 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar23 = local_80;
        }
        (*(code *)**pppuVar23)(pppuVar23,&local_c8);
      }
      lVar10 = *(longlong *)&this->field_0xb0;
      uVar11 = *(undefined8 *)&this->field_0xb8;
      uVar26 = *(undefined4 *)&this->field_0xc0;
      uVar6 = *(undefined4 *)&this->field_0xc4;
      uVar7 = *(undefined4 *)&this->field_0xc8;
      uVar8 = *(undefined4 *)&this->field_0xcc;
      uVar9 = *(undefined8 *)&this->field_0xd0;
      plVar22 = *(longlong **)&this->field_0xd8;
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
      local_d8 = (code *)lVar10;
      uStack_d0 = uVar11;
      local_c8 = uVar26;
      uStack_c4 = uVar6;
      uStack_c0 = uVar7;
      uStack_bc = uVar8;
      local_b8 = uVar9;
      uStack_b0 = plVar22;
      if (lVar10 != 0) {
        plVar21 = (longlong *)&local_c8;
        if (plVar22 != (longlong *)0x0) {
          plVar21 = plVar22;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      if (local_78 != 0) {
        plVar22 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar22 = local_50;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_a8 == (code *)0x0) goto LAB_14886459c;
      pppuVar23 = &local_98;
      pppuVar20 = local_80;
    }
  }
  else {
    local_1d0 = (undefined ***)0x0;
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::UploadNewMips'::`8'::<lambda_2>,0,0>::
                 _vftable_;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::UploadNewMips'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1e0 = this;
    EVar17 = GetCancelThread(this);
    local_200 = (undefined ***)0x0;
    local_218 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamIn::UploadNewMips'::`8'::<lambda_1>,0,0>::
                 _vftable_;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamIn::UploadNewMips'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_210 = this;
    if (((*(int *)&this->field_0x60 != 3) && (*(int *)&this->field_0x60 != 4)) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar27)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(EThreadType *)&this->field_0x68 = EVar16;
    local_288 = local_228;
    uStack_260 = (longlong *)0x0;
    if (local_228 != (code *)0x0) {
      pppuVar23 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar23 = local_200;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_278);
    }
    lVar10 = *(longlong *)&this->field_0x70;
    uVar11 = *(undefined8 *)&this->field_0x78;
    uVar26 = *(undefined4 *)&this->field_0x80;
    uVar6 = *(undefined4 *)&this->field_0x84;
    uVar7 = *(undefined4 *)&this->field_0x88;
    uVar8 = *(undefined4 *)&this->field_0x8c;
    uVar9 = *(undefined8 *)&this->field_0x90;
    plVar22 = *(longlong **)&this->field_0x98;
    *(code **)&this->field_0x70 = local_288;
    *(undefined8 *)&this->field_0x78 = uStack_280;
    *(undefined4 *)&this->field_0x80 = local_278;
    *(undefined4 *)&this->field_0x84 = uStack_274;
    *(undefined4 *)&this->field_0x88 = uStack_270;
    *(undefined4 *)&this->field_0x8c = uStack_26c;
    *(undefined4 *)&this->field_0x90 = (undefined4)local_268;
    *(undefined4 *)&this->field_0x94 = local_268._4_4_;
    *(undefined4 *)&this->field_0x98 = (undefined4)uStack_260;
    *(undefined4 *)&this->field_0x9c = uStack_260._4_4_;
    local_278 = uVar26;
    uStack_274 = uVar6;
    uStack_270 = uVar7;
    uStack_26c = uVar8;
    local_268 = uVar9;
    uStack_260 = plVar22;
    local_288 = (code *)lVar10;
    uStack_280 = uVar11;
    if (lVar10 != 0) {
      plVar21 = (longlong *)&local_278;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    *(EThreadType *)&this->field_0xa0 = EVar17;
    local_258 = local_1f8;
    uStack_230 = (longlong *)0x0;
    if (local_1f8 != (code *)0x0) {
      pppuVar23 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar23 = local_1d0;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_248);
    }
    lVar10 = *(longlong *)&this->field_0xb0;
    uVar11 = *(undefined8 *)&this->field_0xb8;
    uVar26 = *(undefined4 *)&this->field_0xc0;
    uVar6 = *(undefined4 *)&this->field_0xc4;
    uVar7 = *(undefined4 *)&this->field_0xc8;
    uVar8 = *(undefined4 *)&this->field_0xcc;
    uVar9 = *(undefined8 *)&this->field_0xd0;
    plVar22 = *(longlong **)&this->field_0xd8;
    *(code **)&this->field_0xb0 = local_258;
    *(undefined8 *)&this->field_0xb8 = uStack_250;
    *(undefined4 *)&this->field_0xc0 = local_248;
    *(undefined4 *)&this->field_0xc4 = uStack_244;
    *(undefined4 *)&this->field_0xc8 = uStack_240;
    *(undefined4 *)&this->field_0xcc = uStack_23c;
    *(undefined4 *)&this->field_0xd0 = (undefined4)local_238;
    *(undefined4 *)&this->field_0xd4 = local_238._4_4_;
    *(undefined4 *)&this->field_0xd8 = (undefined4)uStack_230;
    *(undefined4 *)&this->field_0xdc = uStack_230._4_4_;
    local_258 = (code *)lVar10;
    uStack_250 = uVar11;
    local_248 = uVar26;
    uStack_244 = uVar6;
    uStack_240 = uVar7;
    uStack_23c = uVar8;
    local_238 = uVar9;
    uStack_230 = plVar22;
    if (lVar10 != 0) {
      plVar21 = (longlong *)&local_248;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_228 != (code *)0x0) {
      pppuVar23 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar23 = local_200;
      }
      (*(code *)(*pppuVar23)[2])();
    }
    if (local_1f8 == (code *)0x0) goto LAB_14886459c;
    pppuVar23 = &local_1e8;
    pppuVar20 = local_1d0;
  }
  if (pppuVar20 != (undefined ***)0x0) {
    pppuVar23 = pppuVar20;
  }
  (*(code *)(*pppuVar23)[2])();
LAB_14886459c:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

