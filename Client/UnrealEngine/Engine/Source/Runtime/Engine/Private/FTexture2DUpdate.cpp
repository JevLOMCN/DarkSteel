// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FTexture2DUpdate @ 1488082b0

FTexture2DUpdate * __thiscall
FTexture2DUpdate::FTexture2DUpdate(FTexture2DUpdate *this,UTexture2D *param_1)

{
  FTextureResource *pFVar1;
  
  FRenderAssetUpdate::FRenderAssetUpdate
            ((FRenderAssetUpdate *)this,(UStreamableRenderAsset *)param_1);
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined ***)this = &___7FTexture2DUpdate__6B_;
  (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
  if (param_1 != (UTexture2D *)0x0) {
    pFVar1 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar1 != (FTextureResource *)0x0) goto LAB_148808310;
  }
  this->field_0x5c = 1;
LAB_148808310:
  LOCK();
  GPending2DUpdateCount = GPending2DUpdateCount + 1;
  UNLOCK();
  return this;
}

// ~FTexture2DUpdate @ 14880cd00

void __thiscall FTexture2DUpdate::~FTexture2DUpdate(FTexture2DUpdate *this)

{
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  pFVar1 = (this->IntermediateTextureRHI).Reference;
  *(undefined ***)this = &___7FTexture2DUpdate__6B_;
  if (pFVar1 != (FRHITexture *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2337964369540808652>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                       ,0x34,"!IntermediateTextureRHI");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  GPending2DUpdateCount = GPending2DUpdateCount + -1;
  UNLOCK();
  pFVar1 = (this->IntermediateTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  if (*(longlong *)&this->field_0xb0 != 0) {
    plVar4 = (longlong *)&this->field_0xc0;
    if (*(longlong **)&this->field_0xd8 != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->field_0xd8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->field_0x70 != 0) {
    plVar4 = (longlong *)&this->field_0x80;
    if (*(longlong **)&this->field_0x98 != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->field_0x98;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  FRenderAssetUpdate::~FRenderAssetUpdate((FRenderAssetUpdate *)this);
  return;
}

// DoAsyncReallocate @ 1488317a0

void __thiscall
FTexture2DUpdate::DoAsyncReallocate(FTexture2DUpdate *this,FTexture2DUpdateContext *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FTexture2DMipMap *pFVar2;
  longlong lVar3;
  FRHITexture *this_00;
  code *pcVar4;
  bool bVar5;
  FTexture2DMipMap **ppFVar6;
  TRefCountPtr<FRHITexture> TVar7;
  int iVar8;
  FRHIResource *local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_1->CurrentThread != 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                       ,0x40,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((this->field_0x5c == '\0') && (param_1->Texture != (UTexture2D *)0x0)) &&
     (param_1->Resource != (FTexture2DResource *)0x0)) {
    ppFVar6 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                        (&param_1->MipsView,*(int *)&this->field_0x14);
    pTVar1 = &this->IntermediateTextureRHI;
    pFVar2 = *ppFVar6;
    LOCK();
    *(undefined4 *)&this->field_0x58 = 1;
    UNLOCK();
    if (pTVar1->Reference != (FRHITexture *)0x0) {
      uVar9 = 1;
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2337964369540808632>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                         ,0x48,"!IntermediateTextureRHI");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = 0;
    lVar3 = param_1->Resource->_padding_;
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x112) == '\0')) {
      iVar8 = (int)lVar3;
    }
    TVar7 = RHIAsyncReallocateTexture2D
                      ((FRHITexture *)&local_res8,iVar8,(uint)(byte)this->field_0xe,
                       (uint)pFVar2->SizeX,(FThreadSafeCounter *)CONCAT44(uVar9,(uint)pFVar2->SizeY)
                      );
    if ((FRHITexture *)pTVar1 != TVar7.Reference) {
      this_00 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar7.Reference)->_padding_;
      (TVar7.Reference)->_padding_ = 0;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// DoConvertToNonVirtual @ 148831e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FTexture2DUpdate::DoConvertToNonVirtual(FTexture2DUpdate *this,FTexture2DUpdateContext *param_1)

{
  FTexture2DMipMap *pFVar1;
  FName FVar2;
  FRHITexture *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FRHICommandListBase *this_00;
  FTexture2DMipMap **ppFVar7;
  FRHITextureCreateDesc *pFVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FRHITexture *pFVar10;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [80];
  wchar_t *local_e8;
  FResourceBulkDataInterface *local_d8;
  FNameEntryId local_d0;
  ERHITextureInitAction local_cc;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((param_1->CurrentThread != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                         ,0x86,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((((this->field_0x5c == '\0') &&
       ((this->IntermediateTextureRHI).Reference == (FRHITexture *)0x0)) &&
      (param_1->Texture != (UTexture2D *)0x0)) &&
     ((param_1->Resource != (FTexture2DResource *)0x0 &&
      (bVar5 = FTextureResource::IsTextureRHIPartiallyResident
                         ((FTextureResource *)param_1->Resource), bVar5)))) {
    this_00 = (FRHICommandListBase *)FRHICommandListImmediate::Get();
    ppFVar7 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                        (&param_1->MipsView,*(int *)&this->field_0x14);
    pFVar1 = *ppFVar7;
    if (((this->IntermediateTextureRHI).Reference != (FRHITexture *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2337964369540808559>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                           ,0x91,"!IntermediateTextureRHI"), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar8 = FRHITextureCreateDesc::Create2D
                       (&local_a8,L"FTexture2DUpdate",(uint)pFVar1->SizeX,(uint)pFVar1->SizeY,
                        *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4));
    *(undefined1 *)&pFVar8->_padding_ = this->field_0xe;
    pFVar8->_padding_ = param_1->Resource->_padding_;
    FRHITextureDesc::FRHITextureDesc
              ((FRHITextureDesc *)(local_138 + 0x10),(FRHITextureDesc *)pFVar8);
    local_d8 = (FResourceBulkDataInterface *)pFVar8->DebugName;
    local_d0.Value = pFVar8->InitialState;
    local_cc = pFVar8->InitAction;
    local_c8 = (FName)pFVar8->BulkData;
    local_c0 = pFVar8->ClassName;
    local_b8 = pFVar8->OwnerName;
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    FVar2 = (FName)param_1->Resource->ResourceMem;
    if (FVar2 != (FName)0x0) {
      local_cc = BulkData;
      local_c8 = FVar2;
    }
    if (local_d0.Value == None) {
      local_d0.Value = RHIGetDefaultResourceState(local_138._16_8_,local_c8 != (FName)0x0);
    }
    TVar9 = FRHICommandListBase::CreateTexture(this_00,(FRHITextureCreateDesc *)local_138);
    TRefCountPtr<FRHITexture>::operator=
              (&this->IntermediateTextureRHI,(TRefCountPtr<FRHITexture> *)TVar9.Reference);
    if ((FRHIResource *)local_138._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138._0_8_);
    }
    pFVar3 = (FRHITexture *)param_1->Resource->_padding_;
    pFVar10 = (FRHITexture *)0x0;
    if ((pFVar3 != (FRHITexture *)0x0) && ((pFVar3->TextureDesc).Dimension == Texture2D)) {
      pFVar10 = pFVar3;
    }
    UE::RHI::CopySharedMips_AssumeSRVMaskState
              ((FRHICommandList *)this_00,pFVar10,(this->IntermediateTextureRHI).Reference);
    if (local_e8 != (wchar_t *)0x0) {
      FMemory::Free(local_e8);
    }
    return true;
  }
  return false;
}

// DoConvertToVirtualWithNewMips @ 148832400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DUpdate::DoConvertToVirtualWithNewMips
          (FTexture2DUpdate *this,FTexture2DUpdateContext *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  longlong *plVar2;
  FRHITexture *pFVar3;
  FTexture2DMipMap *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  FTexture2DMipMap **ppFVar9;
  FRHITextureCreateDesc *pFVar10;
  TRefCountPtr<FRHITexture> TVar11;
  FRHITexture *pFVar12;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [80];
  wchar_t *local_d8;
  FResourceBulkDataInterface *local_c8;
  FNameEntryId local_c0;
  ERHITextureInitAction local_bc;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FRHITextureCreateDesc local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((param_1->CurrentThread != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.CurrentThread == TT_Render",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                         ,0x57,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->field_0x5c != '\0') {
    return;
  }
  if (param_1->Resource != (FTexture2DResource *)0x0) {
    bVar7 = IsInRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar2 = (longlong *)param_1->Resource->_padding_;
    if ((plVar2 == (longlong *)0x0) ||
       (puVar8 = (uint *)(**(code **)(*plVar2 + 0x20))(), (*puVar8 >> 0x17 & 1) == 0)) {
      ppFVar9 = TArrayView<FTexture2DMipMap_const_*,int>::operator[](&param_1->MipsView,0);
      pFVar4 = *ppFVar9;
      if (((this->IntermediateTextureRHI).Reference != (FRHITexture *)0x0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2337964369540808606>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                             ,0x62,"!IntermediateTextureRHI"), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar10 = FRHITextureCreateDesc::Create2D
                          (&local_98,L"FTexture2DUpdate",(uint)pFVar4->SizeX,(uint)pFVar4->SizeY,
                           *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4));
      *(undefined1 *)&pFVar10->_padding_ = this->field_0xb;
      pFVar10->_padding_ = param_1->Resource->_padding_ | 0x800000;
      FRHITextureDesc::FRHITextureDesc
                ((FRHITextureDesc *)(local_128 + 0x10),(FRHITextureDesc *)pFVar10);
      local_c8 = (FResourceBulkDataInterface *)pFVar10->DebugName;
      local_c0.Value = pFVar10->InitialState;
      local_bc = pFVar10->InitAction;
      local_b8 = (FName)pFVar10->BulkData;
      local_b0 = pFVar10->ClassName;
      local_a8 = pFVar10->OwnerName;
      if ((void *)local_98._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_98._padding_);
      }
      FVar5 = (FName)param_1->Resource->ResourceMem;
      if (FVar5 != (FName)0x0) {
        local_bc = BulkData;
        local_b8 = FVar5;
      }
      if (local_c0.Value == None) {
        local_c0.Value = RHIGetDefaultResourceState(local_128._16_8_,local_b8 != (FName)0x0);
      }
      TVar11 = FRHICommandListBase::CreateTexture
                         ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                          (FRHITextureCreateDesc *)local_128);
      pTVar1 = &this->IntermediateTextureRHI;
      if ((FRHITexture *)pTVar1 != TVar11.Reference) {
        pFVar3 = pTVar1->Reference;
        pTVar1->Reference = (FRHITexture *)(TVar11.Reference)->_padding_;
        (TVar11.Reference)->_padding_ = 0;
        if (pFVar3 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar3);
        }
      }
      if ((FRHIResource *)local_128._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_128._0_8_);
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x378))
                (GDynamicRHI,0x154be5ed0,(this->IntermediateTextureRHI).Reference,
                 *(undefined4 *)&this->field_0x10);
      (**(code **)(GDynamicRHI->_padding_ + 0x380))
                (GDynamicRHI,0x154be5ed0,(this->IntermediateTextureRHI).Reference,
                 *(undefined4 *)&this->field_0x10);
      pFVar3 = (FRHITexture *)param_1->Resource->_padding_;
      pFVar12 = (FRHITexture *)0x0;
      if ((pFVar3 != (FRHITexture *)0x0) && ((pFVar3->TextureDesc).Dimension == Texture2D)) {
        pFVar12 = pFVar3;
      }
      UE::RHI::CopySharedMips_AssumeSRVMaskState
                ((FRHICommandList *)&GRHICommandList.CommandListImmediate,pFVar12,
                 (this->IntermediateTextureRHI).Reference);
      if (local_d8 != (wchar_t *)0x0) {
        FMemory::Free(local_d8);
      }
    }
    else {
      pFVar3 = (FRHITexture *)param_1->Resource->_padding_;
      pFVar12 = (FRHITexture *)0x0;
      if ((pFVar3 != (FRHITexture *)0x0) && ((pFVar3->TextureDesc).Dimension == Texture2D)) {
        pFVar12 = pFVar3;
      }
      pFVar3 = (this->IntermediateTextureRHI).Reference;
      if (pFVar3 != pFVar12) {
        (this->IntermediateTextureRHI).Reference = pFVar12;
        if (pFVar12 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar12);
        }
        if (pFVar3 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar3);
        }
      }
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x378))
              (GDynamicRHI,0x154be5ed0,(this->IntermediateTextureRHI).Reference,
               *(undefined4 *)&this->field_0x14);
    return;
  }
  return;
}

// DoFinishUpdate @ 1488329e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DUpdate::DoFinishUpdate(FTexture2DUpdate *this,FTexture2DUpdateContext *param_1)

{
  FRHITexture *pFVar1;
  FTexture2DResource *this_00;
  code *pcVar2;
  bool bVar3;
  FRHICommandListBase *pFVar4;
  
  if (param_1->CurrentThread != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.CurrentThread == TT_Render",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DUpdate.cpp"
                       ,0xae,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->IntermediateTextureRHI).Reference;
  if ((pFVar1 != (FRHITexture *)0x0) &&
     (this_00 = param_1->Resource, this_00 != (FTexture2DResource *)0x0)) {
    if (this->field_0x5c == '\0') {
      pFVar4 = (FRHICommandListBase *)FRHICommandListImmediate::Get();
      FStreamableTextureResource::FinalizeStreaming
                ((FStreamableTextureResource *)this_00,pFVar4,pFVar1);
      this->field_0x5e = 1;
    }
    pFVar1 = (this->IntermediateTextureRHI).Reference;
    if (pFVar1 != (FRHITexture *)0x0) {
      (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  return;
}

