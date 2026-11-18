// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FTextureStreamOut @ 148808b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTextureStreamOut * __thiscall
FTextureStreamOut::FTextureStreamOut
          (FTextureStreamOut *this,UTexture *param_1,FTextureMipAllocator *param_2)

{
  FTextureMipAllocator *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  EThreadType EVar13;
  int iVar14;
  FTextureStreamOut *pFVar15;
  FTextureResource *pFVar16;
  FStreamableTextureResource *this_00;
  longlong *plVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  undefined4 uVar20;
  undefined1 auStack_228 [40];
  TArrayView<FTexture2DMipMap_const_*,int> local_200;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  code *local_1b8;
  longlong lStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  longlong lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  code *local_158;
  undefined **local_148;
  FTextureStreamOut *local_140;
  undefined ***local_130;
  code *local_128;
  undefined **local_118;
  FTextureStreamOut *local_110;
  undefined ***local_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTextureStreamOut *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
  (this->SyncOptions).bSnooze = (bool *)0x0;
  (this->SyncOptions).Counter = (FThreadSafeCounter *)0x0;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback = 0;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x28 = 0;
  this->_padding_ = (longlong)&___7FTextureStreamOut__6B_;
  if ((param_2 == (FTextureMipAllocator *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMipAllocator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                          ,0x1c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    pFVar15 = (FTextureStreamOut *)(*pcVar2)();
    return pFVar15;
  }
  pFVar1 = (this->MipAllocator).Ptr;
  uVar20 = 1;
  if ((pFVar1 != param_2) &&
     ((this->MipAllocator).Ptr = param_2, pFVar1 != (FTextureMipAllocator *)0x0)) {
    (**(code **)pFVar1->_padding_)();
  }
  (this->SyncOptions).bSnooze = (bool *)((longlong)&this->_padding_ + 5);
  (this->SyncOptions).Counter = (FThreadSafeCounter *)&this->_padding_;
  local_1e8 = *(longlong *)&(this->SyncOptions).RescheduleCallback;
  uVar7 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x8;
  local_1d8 = *(longlong *)&(this->SyncOptions).RescheduleCallback.field_0x10;
  uStack_1d0 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x18;
  uVar3 = *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x20;
  plStack_1c0 = *(longlong **)&(this->SyncOptions).RescheduleCallback.field_0x28;
  *(code **)&(this->SyncOptions).RescheduleCallback =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FTextureStreamOut::FTextureStreamOut'::__l2::<lambda_1>,void>::Call;
  *(undefined8 *)&(this->SyncOptions).RescheduleCallback.field_0x8 = uStack_1e0;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x10 = 0x51ba5e68;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x14 = 1;
  *(FTextureStreamOut **)&(this->SyncOptions).RescheduleCallback.field_0x18 = this;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x20 = (undefined4)local_1c8;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x24 = local_1c8._4_4_;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x28 = 0;
  *(undefined4 *)&(this->SyncOptions).RescheduleCallback.field_0x2c = 0;
  local_1c8 = uVar3;
  uStack_1e0 = uVar7;
  if (local_1e8 != 0) {
    plVar18 = &local_1d8;
    if (plStack_1c0 != (longlong *)0x0) {
      plVar18 = plStack_1c0;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (param_1 == (UTexture *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InTexture",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipDataProvider.cpp"
                        ,0xf,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar15 = (FTextureStreamOut *)(*pcVar2)();
      return pFVar15;
    }
  }
  else {
    pFVar16 = UTexture::GetResource(param_1);
    if (pFVar16 != (FTextureResource *)0x0) {
      pFVar16 = UTexture::GetResource(param_1);
      this_00 = (FStreamableTextureResource *)(**(code **)(pFVar16->_padding_ + 0x88))(pFVar16);
      if (this_00 != (FStreamableTextureResource *)0x0) {
        FStreamableTextureResource::GetPlatformMipsView(this_00,&local_200);
      }
    }
  }
  EVar13 = GetMipAllocatorThread(this,AllocateMips);
  if (EVar13 != TT_None) {
    pFVar1 = (this->MipAllocator).Ptr;
    local_118 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::FTextureStreamOut'::`12'::<lambda_3>,0,0>
                 ::_vftable_;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::FTextureStreamOut'::__l12::<lambda_3>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_100 = (undefined ***)0x0;
    local_110 = this;
    if ((pFVar1 == (FTextureMipAllocator *)0x0) ||
       (((pFVar1->IntermediateTextureRHI).Reference == (FRHITexture *)0x0 &&
        ((iVar14 = (**(code **)(pFVar1->_padding_ + 0x20))(), iVar14 == 0 || (iVar14 != 1)))))) {
      uVar20 = 2;
    }
    local_130 = (undefined ***)0x0;
    local_148 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::FTextureStreamOut'::`12'::<lambda_2>,0,0>
                 ::_vftable_;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::FTextureStreamOut'::__l12::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_140 = this;
    if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      pFVar15 = (FTextureStreamOut *)(*pcVar2)();
      return pFVar15;
    }
    *(EThreadType *)&this->_padding_ = EVar13;
    local_1b8 = local_158;
    uStack_190 = (longlong *)0x0;
    if (local_158 != (code *)0x0) {
      pppuVar19 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar19 = local_130;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_1a8);
    }
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar11 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar6 = this->_padding_;
    plVar18 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_1b8;
    this->_padding_ = lStack_1b0;
    *(undefined4 *)&this->_padding_ = local_1a8;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_1a4;
    *(undefined4 *)&this->_padding_ = uStack_1a0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_19c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_198;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_198._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_190;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_190._4_4_;
    local_1b8 = (code *)lVar8;
    lStack_1b0 = lVar9;
    local_1a8 = (int)lVar10;
    uStack_1a4 = uVar4;
    uStack_1a0 = (int)lVar11;
    uStack_19c = uVar5;
    local_198 = lVar6;
    uStack_190 = plVar18;
    if (lVar8 != 0) {
      plVar17 = (longlong *)&local_1a8;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = uVar20;
    local_188 = local_128;
    uStack_160 = (longlong *)0x0;
    if (local_128 != (code *)0x0) {
      pppuVar19 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar19 = local_100;
      }
      (*(code *)**pppuVar19)(pppuVar19,&local_178);
    }
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    uVar20 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar11 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar6 = this->_padding_;
    plVar18 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_188;
    this->_padding_ = lStack_180;
    *(undefined4 *)&this->_padding_ = local_178;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_174;
    *(undefined4 *)&this->_padding_ = uStack_170;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_16c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_168;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_168._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_160;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_160._4_4_;
    local_188 = (code *)lVar8;
    lStack_180 = lVar9;
    local_178 = (int)lVar10;
    uStack_174 = uVar20;
    uStack_170 = (int)lVar11;
    uStack_16c = uVar4;
    local_168 = lVar6;
    uStack_160 = plVar18;
    if (lVar8 != 0) {
      plVar17 = (longlong *)&local_178;
      if (plVar18 != (longlong *)0x0) {
        plVar17 = plVar18;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    if (local_158 != (code *)0x0) {
      pppuVar19 = &local_148;
      if (local_130 != (undefined ***)0x0) {
        pppuVar19 = local_130;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    if (local_128 != (code *)0x0) {
      pppuVar19 = &local_118;
      if (local_100 != (undefined ***)0x0) {
        pppuVar19 = local_100;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    return this;
  }
  if ((int)this->_padding_ != 0) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  pFVar1 = (this->MipAllocator).Ptr;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextureStreamOut::FTextureStreamOut'::`14'::<lambda_4>,0,0>::
              _vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextureStreamOut::FTextureStreamOut'::__l14::<lambda_4>,void,FTextureUpdateContext_const_&>
             ::Call;
  local_70 = (undefined ***)0x0;
  local_80 = this;
  if ((pFVar1 == (FTextureMipAllocator *)0x0) ||
     (((pFVar1->IntermediateTextureRHI).Reference == (FRHITexture *)0x0 &&
      ((iVar14 = (**(code **)(pFVar1->_padding_ + 0x20))(), iVar14 == 0 || (iVar14 != 1)))))) {
    uVar20 = 2;
  }
  local_68 = 0;
  local_40 = (longlong *)0x0;
  if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    pFVar15 = (FTextureStreamOut *)(*pcVar2)();
    return pFVar15;
  }
  *(undefined4 *)&this->_padding_ = 0;
  local_f8 = local_68;
  uStack_d0 = (longlong *)0x0;
  if (local_68 != 0) {
    plVar18 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar18 = local_40;
    }
    (**(code **)*plVar18)(plVar18,&local_e8);
  }
  lVar8 = this->_padding_;
  lVar9 = this->_padding_;
  lVar10 = this->_padding_;
  uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar11 = this->_padding_;
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  plVar18 = (longlong *)this->_padding_;
  this->_padding_ = local_f8;
  this->_padding_ = lStack_f0;
  *(undefined4 *)&this->_padding_ = local_e8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_e4;
  *(undefined4 *)&this->_padding_ = uStack_e0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_dc;
  *(undefined4 *)&this->_padding_ = (undefined4)local_d8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_d8._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_d0._4_4_;
  local_f8 = lVar8;
  lStack_f0 = lVar9;
  local_e8 = (int)lVar10;
  uStack_e4 = uVar4;
  uStack_e0 = (int)lVar11;
  uStack_dc = uVar5;
  local_d8 = lVar6;
  uStack_d0 = plVar18;
  if (lVar8 != 0) {
    plVar17 = (longlong *)&local_e8;
    if (plVar18 != (longlong *)0x0) {
      plVar17 = plVar18;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  *(undefined4 *)&this->_padding_ = uVar20;
  local_c8 = local_98;
  uStack_a0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar19 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar19 = local_70;
    }
    (*(code *)**pppuVar19)(pppuVar19,&local_b8);
  }
  lVar8 = this->_padding_;
  lVar9 = this->_padding_;
  lVar10 = this->_padding_;
  uVar20 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar11 = this->_padding_;
  uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  plVar18 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)local_c8;
  this->_padding_ = lStack_c0;
  *(undefined4 *)&this->_padding_ = local_b8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_b4;
  *(undefined4 *)&this->_padding_ = uStack_b0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_ac;
  *(undefined4 *)&this->_padding_ = (undefined4)local_a8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_a8._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_a0._4_4_;
  local_c8 = (code *)lVar8;
  lStack_c0 = lVar9;
  local_b8 = (int)lVar10;
  uStack_b4 = uVar20;
  uStack_b0 = (int)lVar11;
  uStack_ac = uVar4;
  local_a8 = lVar6;
  uStack_a0 = plVar18;
  if (lVar8 != 0) {
    plVar17 = (longlong *)&local_b8;
    if (plVar18 != (longlong *)0x0) {
      plVar17 = plVar18;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_68 != 0) {
    plVar18 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar18 = local_40;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (local_98 == (code *)0x0) {
    return this;
  }
  pppuVar19 = &local_88;
  if (local_70 != (undefined ***)0x0) {
    pppuVar19 = local_70;
  }
  (*(code *)(*pppuVar19)[2])();
  return this;
}

// ~FTextureStreamOut @ 14880ced0

void __thiscall FTextureStreamOut::~FTextureStreamOut(FTextureStreamOut *this)

{
  FTextureMipAllocator *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FTextureStreamOut__6B_;
  if (*(longlong *)&(this->SyncOptions).RescheduleCallback != 0) {
    plVar3 = *(longlong **)&(this->SyncOptions).RescheduleCallback.field_0x28;
    plVar2 = (longlong *)&(this->SyncOptions).RescheduleCallback.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  pFVar1 = (this->MipAllocator).Ptr;
  if (pFVar1 != (FTextureMipAllocator *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  if (this->_padding_ != 0) {
    plVar3 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar3 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (this->_padding_ != 0) {
    plVar3 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar3 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// AllocateNewMips @ 14881d010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamOut::AllocateNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  EThreadType EVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_AllocateNewMips>
  FVar18;
  undefined ***pppuVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  FNameEntryId FVar24;
  FName FVar25;
  undefined4 uVar26;
  bool bVar27;
  undefined1 auStackY_638 [32];
  FColor_u_0 local_5d8 [2];
  FName local_5d0;
  uint local_5c8;
  uint uStack_5c4;
  FName local_5c0;
  FName local_5b0;
  FName local_5a8 [2];
  code *local_598;
  longlong lStack_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  code *local_568;
  longlong lStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  code *local_538;
  undefined **local_528;
  FTextureStreamOut *local_520;
  undefined ***local_510;
  code *local_508;
  undefined **local_4f8;
  FTextureStreamOut *local_4f0;
  undefined ***local_4e0;
  code *local_4d8;
  longlong lStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  code *local_4a8;
  longlong lStack_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  code *local_478;
  undefined **local_468;
  FTextureStreamOut *local_460;
  undefined ***local_450;
  code *local_448;
  undefined **local_438;
  FTextureStreamOut *local_430;
  undefined ***local_420;
  code *local_418;
  longlong lStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  code *local_3e8;
  undefined **local_3d8;
  FTextureStreamOut *local_3d0;
  undefined ***local_3c0;
  code *local_3b8 [2];
  undefined **local_3a8;
  FTextureStreamOut *local_3a0;
  undefined ***local_390;
  code *local_388 [2];
  undefined **local_378;
  FTextureStreamOut *local_370;
  undefined ***local_360;
  undefined1 local_358 [40];
  longlong *local_330;
  undefined1 local_328 [720];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_638;
  uVar26 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamOut_AllocateNewMips =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_AllocateNewMips>
          )0x0;
    pFVar17 = ::FName::FName(&local_5b0,"STAT_TextureStreamOut_AllocateNewMips");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_AllocateNewMips,*pFVar17,
               L"FTextureStreamOut::AllocateNewMips","STATGROUP_StreamingDetails","STATCAT_Advanced"
               ,L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar18 = StatPtr_STAT_TextureStreamOut_AllocateNewMips;
  if (StatPtr_STAT_TextureStreamOut_AllocateNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_AllocateNewMips>
       )0x0) {
    pFVar17 = ::FName::FName(local_5a8,"STAT_TextureStreamOut_AllocateNewMips");
    FVar18 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::AllocateNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_AllocateNewMips>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_TextureStreamOut_AllocateNewMips,*pFVar17,
                          L"FTextureStreamOut::AllocateNewMips","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar25 = *(FName *)FVar18;
  bVar9 = false;
  bVar11 = false;
  local_5c0.ComparisonIndex.Value = 0;
  local_5c0.Number = 0;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar20 = FVar25.Number;
  if ((FVar24.Value == 0) && (uVar20 == 0)) {
LAB_14881d18e:
    bVar10 = false;
    FVar25 = local_5c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5d8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_5d0.ComparisonIndex.Value = FVar24.Value;
        local_5d0.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_5d0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                   ,0x7f);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14881d18e;
    local_5c8 = FVar24.Value;
    uStack_5c4 = uVar20;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar10 = true;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 == (FTextureMipAllocator *)0x0) {
LAB_14881d1e6:
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                        ,0x68,L"");
    if (bVar27) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    EVar1 = pFVar2->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar27 = EVar1 == Async;
    }
    else {
      if ((param_1->CurrentThread != 1) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                              ,0x14,L""), bVar27)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar27 = EVar1 == Render;
    }
    if (!bVar27) goto LAB_14881d1e6;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0xf;
  cVar14 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1,local_328,&this->SyncOptions);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((cVar14 == '\0') && ((int)this->_padding_ != 0)) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  EVar15 = GetMipAllocatorThread(this,AllocateMips);
  pFVar2 = (this->MipAllocator).Ptr;
  if (EVar15 == TT_None) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      if ((pFVar2 == (FTextureMipAllocator *)0x0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipAllocator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                              ,0x40,L""), bVar27)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
         (pFVar2 = (this->MipAllocator).Ptr, pFVar2->NextTickState == UploadMips)) {
        EVar1 = pFVar2->NextTickThread;
        if (EVar1 != Async) {
          if (EVar1 != Render) {
            bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                                ,0x4a,L"");
            if (bVar27) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            goto LAB_14881d4ec;
          }
          uVar26 = 1;
        }
        local_420 = (undefined ***)0x0;
        local_438 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`15'::<lambda_4>,0,0>
                     ::_vftable_;
        local_448 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l15::<lambda_4>,void,FTextureUpdateContext_const_&>
                    ::Call;
        local_430 = this;
        EVar15 = GetCancelThread(this);
        local_450 = (undefined ***)0x0;
        local_468 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`15'::<lambda_3>,0,0>
                     ::_vftable_;
        local_478 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l15::<lambda_3>,void,FTextureUpdateContext_const_&>
                    ::Call;
        local_460 = this;
        if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Locked || TaskState == TS_Init",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                                ,0x1b,L""), bVar27)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&this->_padding_ = uVar26;
        local_4d8 = local_478;
        uStack_4b0 = (longlong *)0x0;
        if (local_478 != (code *)0x0) {
          pppuVar23 = &local_468;
          if (local_450 != (undefined ***)0x0) {
            pppuVar23 = local_450;
          }
          (*(code *)**pppuVar23)(pppuVar23,&local_4c8);
        }
        lVar7 = this->_padding_;
        lVar8 = this->_padding_;
        lVar12 = this->_padding_;
        uVar26 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar13 = this->_padding_;
        uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar6 = this->_padding_;
        plVar22 = (longlong *)this->_padding_;
        this->_padding_ = (longlong)local_4d8;
        this->_padding_ = lStack_4d0;
        *(undefined4 *)&this->_padding_ = local_4c8;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_4c4;
        *(undefined4 *)&this->_padding_ = uStack_4c0;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_4bc;
        *(undefined4 *)&this->_padding_ = (undefined4)local_4b8;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_4b8._4_4_;
        *(undefined4 *)&this->_padding_ = (undefined4)uStack_4b0;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_4b0._4_4_;
        local_4d8 = (code *)lVar7;
        lStack_4d0 = lVar8;
        local_4c8 = (int)lVar12;
        uStack_4c4 = uVar26;
        uStack_4c0 = (int)lVar13;
        uStack_4bc = uVar4;
        local_4b8 = lVar6;
        uStack_4b0 = plVar22;
        if (lVar7 != 0) {
          plVar21 = (longlong *)&local_4c8;
          if (plVar22 != (longlong *)0x0) {
            plVar21 = plVar22;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        *(EThreadType *)&this->_padding_ = EVar15;
        local_4a8 = local_448;
        uStack_480 = (longlong *)0x0;
        if (local_448 != (code *)0x0) {
          pppuVar23 = &local_438;
          if (local_420 != (undefined ***)0x0) {
            pppuVar23 = local_420;
          }
          (*(code *)**pppuVar23)(pppuVar23,&local_498);
        }
        lVar7 = this->_padding_;
        lVar8 = this->_padding_;
        lVar12 = this->_padding_;
        uVar26 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar13 = this->_padding_;
        uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar6 = this->_padding_;
        plVar22 = (longlong *)this->_padding_;
        this->_padding_ = (longlong)local_4a8;
        this->_padding_ = lStack_4a0;
        *(undefined4 *)&this->_padding_ = local_498;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_494;
        *(undefined4 *)&this->_padding_ = uStack_490;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_48c;
        *(undefined4 *)&this->_padding_ = (undefined4)local_488;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_488._4_4_;
        *(undefined4 *)&this->_padding_ = (undefined4)uStack_480;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_480._4_4_;
        local_4a8 = (code *)lVar7;
        lStack_4a0 = lVar8;
        local_498 = (int)lVar12;
        uStack_494 = uVar26;
        uStack_490 = (int)lVar13;
        uStack_48c = uVar4;
        local_488 = lVar6;
        uStack_480 = plVar22;
        if (lVar7 != 0) {
          plVar21 = (longlong *)&local_498;
          if (plVar22 != (longlong *)0x0) {
            plVar21 = plVar22;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        if (local_478 != (code *)0x0) {
          pppuVar23 = &local_468;
          if (local_450 != (undefined ***)0x0) {
            pppuVar23 = local_450;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        if (local_448 == (code *)0x0) goto LAB_14881d9d4;
        pppuVar23 = &local_438;
        pppuVar19 = local_420;
      }
      else {
LAB_14881d4ec:
        local_390 = (undefined ***)0x0;
        local_3a8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`17'::<lambda_6>,0,0>
                     ::_vftable_;
        local_3b8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l17::<lambda_6>,void,FTextureUpdateContext_const_&>
                       ::Call;
        local_3a0 = this;
        EVar15 = GetCancelThread(this);
        local_3c0 = (undefined ***)0x0;
        local_3d8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`17'::<lambda_5>,0,0>
                     ::_vftable_;
        local_3e8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l17::<lambda_5>,void,FTextureUpdateContext_const_&>
                    ::Call;
        local_3d0 = this;
        if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("TaskState == TS_Locked || TaskState == TS_Init",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                                ,0x1b,L""), bVar27)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&this->_padding_ = 1;
        local_418 = local_3e8;
        uStack_3f0 = (longlong *)0x0;
        if (local_3e8 != (code *)0x0) {
          pppuVar23 = &local_3d8;
          if (local_3c0 != (undefined ***)0x0) {
            pppuVar23 = local_3c0;
          }
          (*(code *)**pppuVar23)(pppuVar23,&local_408);
        }
        lVar7 = this->_padding_;
        lVar8 = this->_padding_;
        lVar12 = this->_padding_;
        uVar26 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar13 = this->_padding_;
        uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        lVar6 = this->_padding_;
        plVar22 = (longlong *)this->_padding_;
        this->_padding_ = (longlong)local_418;
        this->_padding_ = lStack_410;
        *(undefined4 *)&this->_padding_ = local_408;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_404;
        *(undefined4 *)&this->_padding_ = uStack_400;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_3fc;
        *(undefined4 *)&this->_padding_ = (undefined4)local_3f8;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_3f8._4_4_;
        *(undefined4 *)&this->_padding_ = (undefined4)uStack_3f0;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_3f0._4_4_;
        local_418 = (code *)lVar7;
        lStack_410 = lVar8;
        local_408 = (int)lVar12;
        uStack_404 = uVar26;
        uStack_400 = (int)lVar13;
        uStack_3fc = uVar4;
        local_3f8 = lVar6;
        uStack_3f0 = plVar22;
        if (lVar7 != 0) {
          plVar21 = (longlong *)&local_408;
          if (plVar22 != (longlong *)0x0) {
            plVar21 = plVar22;
          }
          (**(code **)(*plVar21 + 0x10))();
        }
        *(EThreadType *)&this->_padding_ = EVar15;
        TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                  ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->_padding_,
                   (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_3b8);
        if (local_3e8 != (code *)0x0) {
          pppuVar23 = &local_3d8;
          if (local_3c0 != (undefined ***)0x0) {
            pppuVar23 = local_3c0;
          }
          (*(code *)(*pppuVar23)[2])();
        }
        if (local_3b8[0] == (code *)0x0) goto LAB_14881d9d4;
        pppuVar23 = &local_3a8;
        pppuVar19 = local_390;
      }
    }
    else {
      local_360 = (undefined ***)0x0;
      local_378 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`19'::<lambda_7>,0,0>
                   ::_vftable_;
      local_388[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l19::<lambda_7>,void,FTextureUpdateContext_const_&>
                     ::Call;
      local_370 = this;
      if ((pFVar2 != (FTextureMipAllocator *)0x0) &&
         (((pFVar2->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
          ((iVar16 = (**(code **)(pFVar2->_padding_ + 0x20))(), iVar16 != 0 && (iVar16 == 1)))))) {
        uVar26 = 1;
      }
      local_358._0_8_ = 0;
      local_330 = (longlong *)0x0;
      if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar27)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&this->_padding_ = 0;
      TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->_padding_,
                 (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_358);
      *(undefined4 *)&this->_padding_ = uVar26;
      TFunction<void___cdecl(FTextureUpdateContext_const_&)>::operator=
                ((TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)&this->_padding_,
                 (TFunction<void___cdecl(FTextureUpdateContext_const_&)> *)local_388);
      if (local_358._0_8_ != 0) {
        plVar22 = (longlong *)(local_358 + 0x10);
        if (local_330 != (longlong *)0x0) {
          plVar22 = local_330;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_388[0] == (code *)0x0) goto LAB_14881d9d4;
      pppuVar23 = &local_378;
      pppuVar19 = local_360;
    }
  }
  else {
    local_4e0 = (undefined ***)0x0;
    local_4f8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`8'::<lambda_2>,0,0>::
                 _vftable_;
    local_508 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_4f0 = this;
    if ((pFVar2 != (FTextureMipAllocator *)0x0) &&
       (((pFVar2->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
        ((iVar16 = (**(code **)(pFVar2->_padding_ + 0x20))(), iVar16 != 0 && (iVar16 == 1)))))) {
      uVar26 = 1;
    }
    local_510 = (undefined ***)0x0;
    local_528 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::AllocateNewMips'::`8'::<lambda_1>,0,0>::
                 _vftable_;
    local_538 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::AllocateNewMips'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_520 = this;
    if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar27)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(EThreadType *)&this->_padding_ = EVar15;
    local_598 = local_538;
    uStack_570 = (longlong *)0x0;
    if (local_538 != (code *)0x0) {
      pppuVar23 = &local_528;
      if (local_510 != (undefined ***)0x0) {
        pppuVar23 = local_510;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_588);
    }
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    lVar12 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar13 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar6 = this->_padding_;
    plVar22 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_598;
    this->_padding_ = lStack_590;
    *(undefined4 *)&this->_padding_ = local_588;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_584;
    *(undefined4 *)&this->_padding_ = uStack_580;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_57c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_578;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_578._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_570;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_570._4_4_;
    local_588 = (int)lVar12;
    uStack_584 = uVar4;
    uStack_580 = (int)lVar13;
    uStack_57c = uVar5;
    local_578 = lVar6;
    uStack_570 = plVar22;
    local_598 = (code *)lVar7;
    lStack_590 = lVar8;
    if (lVar7 != 0) {
      plVar21 = (longlong *)&local_588;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = uVar26;
    local_568 = local_508;
    uStack_540 = (longlong *)0x0;
    if (local_508 != (code *)0x0) {
      pppuVar23 = &local_4f8;
      if (local_4e0 != (undefined ***)0x0) {
        pppuVar23 = local_4e0;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_558);
    }
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    lVar12 = this->_padding_;
    uVar26 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar13 = this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar6 = this->_padding_;
    plVar22 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_568;
    this->_padding_ = lStack_560;
    *(undefined4 *)&this->_padding_ = local_558;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_554;
    *(undefined4 *)&this->_padding_ = uStack_550;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_54c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_548;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_548._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_540;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_540._4_4_;
    local_568 = (code *)lVar7;
    lStack_560 = lVar8;
    local_558 = (int)lVar12;
    uStack_554 = uVar26;
    uStack_550 = (int)lVar13;
    uStack_54c = uVar4;
    local_548 = lVar6;
    uStack_540 = plVar22;
    if (lVar7 != 0) {
      plVar21 = (longlong *)&local_558;
      if (plVar22 != (longlong *)0x0) {
        plVar21 = plVar22;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_538 != (code *)0x0) {
      pppuVar23 = &local_528;
      if (local_510 != (undefined ***)0x0) {
        pppuVar23 = local_510;
      }
      (*(code *)(*pppuVar23)[2])();
    }
    if (local_508 == (code *)0x0) goto LAB_14881d9d4;
    pppuVar23 = &local_4f8;
    pppuVar19 = local_4e0;
  }
  if (pppuVar19 != (undefined ***)0x0) {
    pppuVar23 = pppuVar19;
  }
  (*(code *)(*pppuVar23)[2])();
LAB_14881d9d4:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// Cancel @ 148827450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTextureStreamOut::Cancel(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  FTextureMipAllocator *pFVar2;
  FRHITexture *this_00;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_Cancel>
  FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined ***pppuVar21;
  FNameEntryId FVar22;
  FName FVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  LARGE_INTEGER local_140;
  FName local_138;
  FName local_130;
  FStatMessage local_120;
  FName local_110;
  FName local_108 [2];
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined **local_88;
  FTextureStreamOut *local_80;
  undefined ***local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  uVar24 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamOut_Cancel =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_Cancel>
          )0x0;
    pFVar16 = ::FName::FName(&local_110,"STAT_TextureStreamOut_Cancel");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_Cancel,*pFVar16,
               L"FTextureStreamOut::Cancel","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_TextureStreamOut_Cancel;
  if (StatPtr_STAT_TextureStreamOut_Cancel ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_Cancel>
       )0x0) {
    pFVar16 = ::FName::FName(local_108,"STAT_TextureStreamOut_Cancel");
    FVar17 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::Cancel(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_Cancel>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_Cancel,
                          *pFVar16,L"FTextureStreamOut::Cancel","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar9 = false;
  bVar11 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar18 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar18 == 0)) {
LAB_1488275d3:
    bVar10 = false;
    FVar23 = local_130;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar22.Value;
        local_138.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                   ,0xd1);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488275d3;
    local_140.s.LowPart = FVar22.Value;
    local_140.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 == (FTextureMipAllocator *)0x0) goto LAB_14882786c;
  iVar15 = param_1->CurrentThread;
  if ((pFVar2->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
    iVar14 = (**(code **)(pFVar2->_padding_ + 0x20))();
  }
  else {
    iVar14 = 1;
  }
  if (iVar15 == 2) {
    bVar25 = iVar14 == 0;
  }
  else {
    if ((iVar15 != 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskThread == TT_Render",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                            ,0x14,L""), bVar25)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar25 = iVar14 == 1;
  }
  if (bVar25) {
    pFVar2 = (this->MipAllocator).Ptr;
    (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,&this->SyncOptions);
    this_00 = (pFVar2->IntermediateTextureRHI).Reference;
    if (this_00 != (FRHITexture *)0x0) {
      (pFVar2->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if ((pFVar2->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
    iVar15 = (**(code **)(pFVar2->_padding_ + 0x20))();
    if (iVar15 != 0) {
      if (iVar15 != 1) {
        pFVar2 = (this->MipAllocator).Ptr;
        if (pFVar2 != (FTextureMipAllocator *)0x0) {
          (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
        goto LAB_14882786c;
      }
      goto LAB_1488276af;
    }
  }
  else {
LAB_1488276af:
    uVar24 = 1;
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FTextureStreamOut::Cancel'::`13'::<lambda_1>,0,0>::_vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextureStreamOut::Cancel'::__l13::<lambda_1>,void,FTextureUpdateContext_const_&>
             ::Call;
  local_80 = this;
  local_68 = 0;
  local_40 = (longlong *)0x0;
  if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("TaskState == TS_Locked || TaskState == TS_Init",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                          ,0x1b,L""), bVar25)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined4 *)&this->_padding_ = 0;
  local_f8 = local_68;
  uStack_d0 = (longlong *)0x0;
  if (local_68 != 0) {
    plVar20 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar20 = local_40;
    }
    (**(code **)*plVar20)(plVar20,&local_e8);
  }
  lVar7 = this->_padding_;
  lVar8 = this->_padding_;
  lVar12 = this->_padding_;
  uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar13 = this->_padding_;
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  plVar20 = (longlong *)this->_padding_;
  this->_padding_ = local_f8;
  this->_padding_ = lStack_f0;
  *(undefined4 *)&this->_padding_ = (undefined4)local_e8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_e8._4_4_;
  *(undefined4 *)&this->_padding_ = uStack_e0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_dc;
  *(undefined4 *)&this->_padding_ = (undefined4)local_d8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_d8._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_d0._4_4_;
  local_e8._0_4_ = (int)lVar12;
  local_e8._4_4_ = uVar4;
  uStack_e0 = (int)lVar13;
  uStack_dc = uVar5;
  local_d8 = lVar6;
  uStack_d0 = plVar20;
  local_f8 = lVar7;
  lStack_f0 = lVar8;
  if (lVar7 != 0) {
    plVar19 = &local_e8;
    if (plVar20 != (longlong *)0x0) {
      plVar19 = plVar20;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  *(undefined4 *)&this->_padding_ = uVar24;
  local_c8 = local_98;
  uStack_a0 = (longlong *)0x0;
  if (local_98 != (code *)0x0) {
    pppuVar21 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar21 = local_70;
    }
    (*(code *)**pppuVar21)(pppuVar21,&local_b8);
  }
  lVar7 = this->_padding_;
  lVar8 = this->_padding_;
  lVar12 = this->_padding_;
  uVar24 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar13 = this->_padding_;
  uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar6 = this->_padding_;
  plVar20 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)local_c8;
  this->_padding_ = lStack_c0;
  *(undefined4 *)&this->_padding_ = (undefined4)local_b8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_b8._4_4_;
  *(undefined4 *)&this->_padding_ = uStack_b0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_ac;
  *(undefined4 *)&this->_padding_ = (undefined4)local_a8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_a8._4_4_;
  *(undefined4 *)&this->_padding_ = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_a0._4_4_;
  local_c8 = (code *)lVar7;
  lStack_c0 = lVar8;
  local_b8._0_4_ = (int)lVar12;
  local_b8._4_4_ = uVar24;
  uStack_b0 = (int)lVar13;
  uStack_ac = uVar4;
  local_a8 = lVar6;
  uStack_a0 = plVar20;
  if (lVar7 != 0) {
    plVar19 = &local_b8;
    if (plVar20 != (longlong *)0x0) {
      plVar19 = plVar20;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_68 != 0) {
    plVar20 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar20 = local_40;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if (local_98 != (code *)0x0) {
    pppuVar21 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar21 = local_70;
    }
    (*(code *)(*pppuVar21)[2])();
  }
LAB_14882786c:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_120.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_120);
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

// DoAllocateNewMips @ 148830ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FTextureStreamOut::DoAllocateNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [720];
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_318;
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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                           ,0x14,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
      }
      bVar5 = EVar1 == Render;
    }
    if (bVar5) goto LAB_148831090;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                     ,0x68,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
LAB_148831090:
  pFVar2 = (this->MipAllocator).Ptr;
  local_1c = 0xf;
  local_28 = (void *)0x0;
  local_20 = 0;
  uVar4 = (**(code **)(pFVar2->_padding_ + 8))(pFVar2,param_1,local_2f8,&this->SyncOptions);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return (bool)uVar4;
}

// DoFinalizeNewMips @ 148832940

bool __thiscall
FTextureStreamOut::DoFinalizeNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) || (param_1->CurrentThread == 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipAllocator && IsSameThread(FTextureMipAllocator::ETickThread::Render, Context.CurrentThread)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                       ,0x75,L"");
    if (bVar2) goto code_r0x0001488329b2;
  }
  else if ((param_1->CurrentThread != 1) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                              ,0x14,L""), bVar2)) {
code_r0x0001488329b2:
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FTextureMipAllocator::FinalizeMips((this->MipAllocator).Ptr,param_1,&this->SyncOptions);
  return bVar2;
}

// DoUploadNewMips @ 148833790

bool __thiscall
FTextureStreamOut::DoUploadNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

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
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                           ,0x14,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar4 = (*pcVar3)();
          return (bool)uVar4;
        }
      }
      bVar5 = EVar1 == Render;
    }
    if (bVar5) goto LAB_148833821;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                     ,0x6f,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar4 = (*pcVar3)();
    return (bool)uVar4;
  }
LAB_148833821:
  pFVar2 = (this->MipAllocator).Ptr;
                    /* WARNING: Could not recover jumptable at 0x00014883383f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,param_1,&this->SyncOptions);
  return (bool)uVar4;
}

// FinalizeNewMips @ 148839190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamOut::FinalizeNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_FinalizeNewMips>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_TextureStreamOut_FinalizeNewMips ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_FinalizeNewMips>
         )0x0) {
      pFVar8 = ::FName::FName(&local_58,"STAT_TextureStreamOut_FinalizeNewMips");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_FinalizeNewMips,*pFVar8
                 ,L"FTextureStreamOut::FinalizeNewMips","STATGROUP_StreamingDetails",
                 "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_TextureStreamOut_FinalizeNewMips;
  if (StatPtr_STAT_TextureStreamOut_FinalizeNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_FinalizeNewMips>
       )0x0) {
    pFVar8 = ::FName::FName(&local_50,"STAT_TextureStreamOut_FinalizeNewMips");
    FVar9 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::FinalizeNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_FinalizeNewMips>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_FinalizeNewMips
                         ,*pFVar8,L"FTextureStreamOut::FinalizeNewMips","STATGROUP_StreamingDetails"
                         ,"STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                         MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_14883930a:
    bVar5 = false;
    FVar12 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                   ,0xbf);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14883930a;
    local_res20.s.LowPart = FVar11.Value;
    local_res20.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar5 = true;
  }
  if (((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) || (param_1->CurrentThread == 2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipAllocator && IsSameThread(FTextureMipAllocator::ETickThread::Render, Context.CurrentThread)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                       ,0x75,L"");
    if (bVar7) goto code_r0x000148839370;
  }
  else if ((param_1->CurrentThread != 1) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                              ,0x14,L""), bVar7)) {
code_r0x000148839370:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = FTextureMipAllocator::FinalizeMips((this->MipAllocator).Ptr,param_1,&this->SyncOptions);
  if (bVar7) {
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  }
  else if ((int)this->_padding_ != 0) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  pFVar2 = (this->MipAllocator).Ptr;
  if (pFVar2 != (FTextureMipAllocator *)0x0) {
    (this->MipAllocator).Ptr = (FTextureMipAllocator *)0x0;
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
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

// GetCancelThread @ 14883db00

EThreadType __thiscall FTextureStreamOut::GetCancelThread(FTextureStreamOut *this)

{
  FTextureMipAllocator *pFVar1;
  int iVar2;
  
  pFVar1 = (this->MipAllocator).Ptr;
  if (pFVar1 == (FTextureMipAllocator *)0x0) {
    return TT_Async;
  }
  if ((pFVar1->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
    iVar2 = (**(code **)(pFVar1->_padding_ + 0x20))();
    if (iVar2 == 0) {
      return TT_Async;
    }
    if (iVar2 != 1) {
      return TT_Async;
    }
  }
  return TT_Render;
}

// GetMipAllocatorThread @ 14883e7e0

EThreadType __thiscall
FTextureStreamOut::GetMipAllocatorThread(FTextureStreamOut *this,ETickState param_1)

{
  ETickThread EVar1;
  FTextureMipAllocator *pFVar2;
  code *pcVar3;
  bool bVar4;
  EThreadType EVar5;
  
  if ((this->MipAllocator).Ptr == (FTextureMipAllocator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MipAllocator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                       ,0x40,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  if ((*(char *)((longlong)&this->_padding_ + 4) == '\0') &&
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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  return TT_None;
}

// UploadNewMips @ 148864690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTextureStreamOut::UploadNewMips(FTextureStreamOut *this,FTextureUpdateContext *param_1)

{
  int *piVar1;
  ETickThread EVar2;
  FTextureMipAllocator *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  EThreadType EVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_UploadNewMips>
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
  undefined4 uVar27;
  bool bVar28;
  undefined1 auStackY_338 [32];
  FColor_u_0 local_2d8 [2];
  LARGE_INTEGER local_2d0;
  FName local_2c8;
  FName local_2c0;
  FStatMessage local_2b0;
  FName local_2a0;
  FName local_298 [2];
  code *local_288;
  longlong lStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined **local_218;
  FTextureStreamOut *local_210;
  undefined ***local_200;
  code *local_1f8;
  undefined **local_1e8;
  FTextureStreamOut *local_1e0;
  undefined ***local_1d0;
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
  FTextureStreamOut *local_150;
  undefined ***local_140;
  code *local_138;
  undefined **local_128;
  FTextureStreamOut *local_120;
  undefined ***local_110;
  longlong local_108;
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
  FTextureStreamOut *local_90;
  undefined ***local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar27 = 2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_TextureStreamOut_UploadNewMips =
         (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_UploadNewMips>
          )0x0;
    pFVar18 = ::FName::FName(&local_2a0,"STAT_TextureStreamOut_UploadNewMips");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_UploadNewMips,*pFVar18,
               L"FTextureStreamOut::UploadNewMips","STATGROUP_StreamingDetails","STATCAT_Advanced",
               L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_TextureStreamOut_UploadNewMips;
  if (StatPtr_STAT_TextureStreamOut_UploadNewMips ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_UploadNewMips>
       )0x0) {
    pFVar18 = ::FName::FName(local_298,"STAT_TextureStreamOut_UploadNewMips");
    FVar19 = (FThreadSafeStaticStat<_public:_void___cdecl_FTextureStreamOut::UploadNewMips(FTextureUpdateContext_const_&)_::_2_::FStat_STAT_TextureStreamOut_UploadNewMips>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextureStreamOut_UploadNewMips,
                          *pFVar18,L"FTextureStreamOut::UploadNewMips","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar26 = *(FName *)FVar19;
  bVar10 = false;
  bVar12 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar21 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar21 == 0)) {
LAB_14886480e:
    bVar11 = false;
    FVar26 = local_2c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c8.ComparisonIndex.Value = FVar25.Value;
        local_2c8.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                   ,0xa2);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14886480e;
    local_2d0.s.LowPart = FVar25.Value;
    local_2d0.s.HighPart = uVar21;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar11 = true;
  }
  pFVar3 = (this->MipAllocator).Ptr;
  if (pFVar3 == (FTextureMipAllocator *)0x0) {
LAB_148864866:
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("MipAllocator && IsSameThread(MipAllocator->GetNextTickThread(), Context.CurrentThread)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                        ,0x6f,L"");
    if (bVar28) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    EVar2 = pFVar3->NextTickThread;
    if (param_1->CurrentThread == 2) {
      bVar28 = EVar2 == Async;
    }
    else {
      if ((param_1->CurrentThread != 1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskThread == TT_Render",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureStreamOut.cpp"
                              ,0x14,L""), bVar28)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar28 = EVar2 == Render;
    }
    if (!bVar28) goto LAB_148864866;
  }
  pFVar3 = (this->MipAllocator).Ptr;
  cVar15 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,param_1);
  if ((cVar15 == '\0') && ((int)this->_padding_ != 0)) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  EVar16 = GetMipAllocatorThread(this,UploadMips);
  pFVar3 = (this->MipAllocator).Ptr;
  if (EVar16 == TT_None) {
    if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
      local_110 = (undefined ***)0x0;
      local_128 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamOut::UploadNewMips'::`13'::<lambda_4>,0,0>::
                   _vftable_;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamOut::UploadNewMips'::__l13::<lambda_4>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_120 = this;
      if ((pFVar3 != (FTextureMipAllocator *)0x0) &&
         (((pFVar3->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
          ((iVar17 = (**(code **)(pFVar3->_padding_ + 0x20))(), iVar17 != 0 && (iVar17 == 1)))))) {
        uVar27 = 1;
      }
      local_140 = (undefined ***)0x0;
      local_158 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FTextureStreamOut::UploadNewMips'::`13'::<lambda_3>,0,0>::
                   _vftable_;
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTextureStreamOut::UploadNewMips'::__l13::<lambda_3>,void,FTextureUpdateContext_const_&>
                  ::Call;
      local_150 = this;
      if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar28)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->_padding_ = 1;
      local_1c8 = local_168;
      uStack_1a0 = (longlong *)0x0;
      if (local_168 != (code *)0x0) {
        pppuVar24 = &local_158;
        if (local_140 != (undefined ***)0x0) {
          pppuVar24 = local_140;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_1b8);
      }
      lVar8 = this->_padding_;
      lVar9 = this->_padding_;
      lVar13 = this->_padding_;
      uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar14 = this->_padding_;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar7 = this->_padding_;
      plVar23 = (longlong *)this->_padding_;
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
      local_1c8 = (code *)lVar8;
      lStack_1c0 = lVar9;
      local_1b8._0_4_ = (int)lVar13;
      local_1b8._4_4_ = uVar5;
      uStack_1b0 = (int)lVar14;
      uStack_1ac = uVar6;
      local_1a8 = lVar7;
      uStack_1a0 = plVar23;
      if (lVar8 != 0) {
        plVar22 = &local_1b8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(undefined4 *)&this->_padding_ = uVar27;
      local_198 = local_138;
      uStack_170 = (longlong *)0x0;
      if (local_138 != (code *)0x0) {
        pppuVar24 = &local_128;
        if (local_110 != (undefined ***)0x0) {
          pppuVar24 = local_110;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_188);
      }
      lVar8 = this->_padding_;
      lVar9 = this->_padding_;
      lVar13 = this->_padding_;
      uVar27 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar14 = this->_padding_;
      uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar7 = this->_padding_;
      plVar23 = (longlong *)this->_padding_;
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
      local_198 = (code *)lVar8;
      lStack_190 = lVar9;
      local_188._0_4_ = (int)lVar13;
      local_188._4_4_ = uVar27;
      uStack_180 = (int)lVar14;
      uStack_17c = uVar5;
      local_178 = lVar7;
      uStack_170 = plVar23;
      if (lVar8 != 0) {
        plVar22 = &local_188;
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
      if (local_138 == (code *)0x0) goto LAB_148864f62;
      pppuVar24 = &local_128;
      pppuVar20 = local_110;
    }
    else {
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FTextureStreamOut::UploadNewMips'::`15'::<lambda_5>,0,0>::
                  _vftable_;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FTextureStreamOut::UploadNewMips'::__l15::<lambda_5>,void,FTextureUpdateContext_const_&>
                 ::Call;
      local_90 = this;
      if ((pFVar3 != (FTextureMipAllocator *)0x0) &&
         (((pFVar3->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
          ((iVar17 = (**(code **)(pFVar3->_padding_ + 0x20))(), iVar17 != 0 && (iVar17 == 1)))))) {
        uVar27 = 1;
      }
      local_78 = 0;
      local_50 = (longlong *)0x0;
      if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("TaskState == TS_Locked || TaskState == TS_Init",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                              ,0x1b,L""), bVar28)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)&this->_padding_ = 0;
      local_108 = local_78;
      uStack_e0 = (longlong *)0x0;
      if (local_78 != 0) {
        plVar23 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)*plVar23)(plVar23,&local_f8);
      }
      lVar8 = this->_padding_;
      lVar9 = this->_padding_;
      lVar13 = this->_padding_;
      uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar14 = this->_padding_;
      uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar7 = this->_padding_;
      plVar23 = (longlong *)this->_padding_;
      this->_padding_ = local_108;
      this->_padding_ = lStack_100;
      *(undefined4 *)&this->_padding_ = (undefined4)local_f8;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_f8._4_4_;
      *(undefined4 *)&this->_padding_ = uStack_f0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_ec;
      *(undefined4 *)&this->_padding_ = (undefined4)local_e8;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_e8._4_4_;
      *(undefined4 *)&this->_padding_ = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_e0._4_4_;
      local_108 = lVar8;
      lStack_100 = lVar9;
      local_f8._0_4_ = (int)lVar13;
      local_f8._4_4_ = uVar5;
      uStack_f0 = (int)lVar14;
      uStack_ec = uVar6;
      local_e8 = lVar7;
      uStack_e0 = plVar23;
      if (lVar8 != 0) {
        plVar22 = &local_f8;
        if (plVar23 != (longlong *)0x0) {
          plVar22 = plVar23;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      *(undefined4 *)&this->_padding_ = uVar27;
      local_d8 = local_a8;
      uStack_b0 = (longlong *)0x0;
      if (local_a8 != (code *)0x0) {
        pppuVar24 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar24 = local_80;
        }
        (*(code *)**pppuVar24)(pppuVar24,&local_c8);
      }
      lVar8 = this->_padding_;
      lVar9 = this->_padding_;
      lVar13 = this->_padding_;
      uVar27 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar14 = this->_padding_;
      uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      lVar7 = this->_padding_;
      plVar23 = (longlong *)this->_padding_;
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
      local_d8 = (code *)lVar8;
      lStack_d0 = lVar9;
      local_c8._0_4_ = (int)lVar13;
      local_c8._4_4_ = uVar27;
      uStack_c0 = (int)lVar14;
      uStack_bc = uVar5;
      local_b8 = lVar7;
      uStack_b0 = plVar23;
      if (lVar8 != 0) {
        plVar22 = &local_c8;
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
      if (local_a8 == (code *)0x0) goto LAB_148864f62;
      pppuVar24 = &local_98;
      pppuVar20 = local_80;
    }
  }
  else {
    local_1d0 = (undefined ***)0x0;
    local_1e8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::UploadNewMips'::`8'::<lambda_2>,0,0>::
                 _vftable_;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::UploadNewMips'::__l8::<lambda_2>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_1e0 = this;
    if ((pFVar3 != (FTextureMipAllocator *)0x0) &&
       (((pFVar3->IntermediateTextureRHI).Reference != (FRHITexture *)0x0 ||
        ((iVar17 = (**(code **)(pFVar3->_padding_ + 0x20))(), iVar17 != 0 && (iVar17 == 1)))))) {
      uVar27 = 1;
    }
    local_200 = (undefined ***)0x0;
    local_218 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FTextureStreamOut::UploadNewMips'::`8'::<lambda_1>,0,0>::
                 _vftable_;
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`FTextureStreamOut::UploadNewMips'::__l8::<lambda_1>,void,FTextureUpdateContext_const_&>
                ::Call;
    local_210 = this;
    if ((((int)this->_padding_ != 3) && ((int)this->_padding_ != 4)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("TaskState == TS_Locked || TaskState == TS_Init",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\RenderAssetUpdate.inl"
                            ,0x1b,L""), bVar28)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(EThreadType *)&this->_padding_ = EVar16;
    local_288 = local_228;
    uStack_260 = (longlong *)0x0;
    if (local_228 != (code *)0x0) {
      pppuVar24 = &local_218;
      if (local_200 != (undefined ***)0x0) {
        pppuVar24 = local_200;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_278);
    }
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar13 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar14 = this->_padding_;
    uVar6 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    plVar23 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_288;
    this->_padding_ = lStack_280;
    *(undefined4 *)&this->_padding_ = (undefined4)local_278;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_278._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_270;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_26c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_268;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_268._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_260;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_260._4_4_;
    local_278._0_4_ = (int)lVar13;
    local_278._4_4_ = uVar5;
    uStack_270 = (int)lVar14;
    uStack_26c = uVar6;
    local_268 = lVar7;
    uStack_260 = plVar23;
    local_288 = (code *)lVar8;
    lStack_280 = lVar9;
    if (lVar8 != 0) {
      plVar22 = &local_278;
      if (plVar23 != (longlong *)0x0) {
        plVar22 = plVar23;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    *(undefined4 *)&this->_padding_ = uVar27;
    local_258 = local_1f8;
    uStack_230 = (longlong *)0x0;
    if (local_1f8 != (code *)0x0) {
      pppuVar24 = &local_1e8;
      if (local_1d0 != (undefined ***)0x0) {
        pppuVar24 = local_1d0;
      }
      (*(code *)**pppuVar24)(pppuVar24,&local_248);
    }
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar13 = this->_padding_;
    uVar27 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar14 = this->_padding_;
    uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    plVar23 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_258;
    this->_padding_ = lStack_250;
    *(undefined4 *)&this->_padding_ = (undefined4)local_248;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_248._4_4_;
    *(undefined4 *)&this->_padding_ = uStack_240;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_23c;
    *(undefined4 *)&this->_padding_ = (undefined4)local_238;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = local_238._4_4_;
    *(undefined4 *)&this->_padding_ = (undefined4)uStack_230;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_230._4_4_;
    local_258 = (code *)lVar8;
    lStack_250 = lVar9;
    local_248._0_4_ = (int)lVar13;
    local_248._4_4_ = uVar27;
    uStack_240 = (int)lVar14;
    uStack_23c = uVar5;
    local_238 = lVar7;
    uStack_230 = plVar23;
    if (lVar8 != 0) {
      plVar22 = &local_248;
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
    if (local_1f8 == (code *)0x0) goto LAB_148864f62;
    pppuVar24 = &local_1e8;
    pppuVar20 = local_1d0;
  }
  if (pppuVar20 != (undefined ***)0x0) {
    pppuVar24 = pppuVar20;
  }
  (*(code *)(*pppuVar24)[2])();
LAB_148864f62:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2b0.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_2b0.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_2d0);
      local_2b0.StatData.Pad[4] = '\0';
      local_2b0.StatData.Pad[5] = '\0';
      local_2b0.StatData.Pad[6] = '\0';
      local_2b0.StatData.Pad[7] = '\0';
      local_2b0.StatData.Pad[0] = local_2d0.s.LowPart._0_1_;
      local_2b0.StatData.Pad[1] = local_2d0.s.LowPart._1_1_;
      local_2b0.StatData.Pad[2] = local_2d0.s.LowPart._2_1_;
      local_2b0.StatData.Pad[3] = local_2d0.s.LowPart._3_1_;
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

