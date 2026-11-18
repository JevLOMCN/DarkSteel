// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FSlateTexture2DRHIRef @ 1486945d0

FSlateTexture2DRHIRef * __thiscall
FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
          (FSlateTexture2DRHIRef *this,uint param_1,uint param_2,EPixelFormat param_3,
          TSharedPtr<FSlateTextureData,1> *param_4,ETextureCreateFlags param_5,bool param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateUpdatableTexture__6B_;
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FSlateUpdatableTexture__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->TexCreateFlags = param_5;
  this->Width = param_1;
  this->Height = param_2;
  (this->TextureData).Object = param_4->Object;
  pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
  (this->TextureData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bCreateEmptyTexture = param_6;
  this->PixelFormat = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// FSlateTexture2DRHIRef @ 1486946c0

FSlateTexture2DRHIRef * __thiscall
FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
          (FSlateTexture2DRHIRef *this,TRefCountPtr<FRHITexture> param_1,uint param_2,uint param_3)

{
  FRHIResource *this_00;
  
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  this->_padding_ = 0;
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
  }
  this->_padding_ = (longlong)&___7FSlateUpdatableTexture__6B_;
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->Width = param_2;
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FSlateUpdatableTexture__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->Height = param_3;
  this->TexCreateFlags = None;
  (this->TextureData).Object = (FSlateTextureData *)0x0;
  (this->TextureData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->PixelFormat = PF_Unknown;
  this->bCreateEmptyTexture = false;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return this;
}

// ~FSlateTexture2DRHIRef @ 14869aa20

void __thiscall FSlateTexture2DRHIRef::~FSlateTexture2DRHIRef(FSlateTexture2DRHIRef *this)

{
  this->_padding_ = (longlong)&_vftable__for__TSlateTexture<TRefCountPtr<FRHITexture>_>__;
  this->_padding_ = (longlong)&_vftable__for__FSlateUpdatableTexture__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TextureData).SharedReferenceCount.ReferenceController);
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  this->_padding_ = (longlong)&___7FSlateUpdatableTexture__6B_;
  this->_padding_ = (longlong)&___7__TSlateTexture_V__TRefCountPtr_VFRHITexture______6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  *(undefined1 *)&this->_padding_ = 0x84;
  return;
}

// operator() @ 14869e810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x10);
  iVar6 = (**(code **)**(undefined8 **)this)();
  if (iVar6 == iVar1) {
    iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x14);
    iVar6 = (**(code **)(**(longlong **)this + 8))();
    if (iVar6 == iVar1) goto LAB_14869e896;
  }
  lVar3 = *(longlong *)this;
  uVar2 = *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x14);
  *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x10);
  *(undefined4 *)(lVar3 + 0x4c) = uVar2;
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)(lVar3 + 0x28),
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
LAB_14869e896:
  (**(code **)(*(longlong *)(*(longlong *)this + 0x18) + 0x28))
            ((longlong *)(*(longlong *)this + 0x18),*(undefined8 *)((longlong)this + 8));
  if (*(FSlateTextureData **)((longlong)this + 8) != (FSlateTextureData *)0x0) {
    FSlateTextureData::_scalar_deleting_destructor_(*(FSlateTextureData **)((longlong)this + 8),1);
  }
  return;
}

// Cleanup @ 1486a8770

void __thiscall FSlateTexture2DRHIRef::Cleanup(FSlateTexture2DRHIRef *this)

{
  FRenderResource *pFVar1;
  
  pFVar1 = (FRenderResource *)&this->_padding_;
  if (this == (FSlateTexture2DRHIRef *)&DAT_00000018) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
  pFVar1 = (FRenderResource *)&this->_padding_;
  if (this == (FSlateTexture2DRHIRef *)&DAT_00000018) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginCleanup((FDeferredCleanupInterface *)pFVar1);
  return;
}

// ClearTextureData @ 1486a8bb0

void __thiscall FSlateTexture2DRHIRef::ClearTextureData(FSlateTexture2DRHIRef *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TextureData != (TSharedPtr<FSlateTextureData,1> *)&local_18) {
    (this->TextureData).Object = (FSlateTextureData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TextureData).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GetHeight @ 1486bf0d0

uint __thiscall FSlateTexture2DRHIRef::GetHeight(FSlateTexture2DRHIRef *this)

{
  return this->Height;
}

// GetRenderResource @ 1486c6270

FRenderResource * __thiscall FSlateTexture2DRHIRef::GetRenderResource(FSlateTexture2DRHIRef *this)

{
  FRenderResource *pFVar1;
  
  pFVar1 = (FRenderResource *)&this->_padding_;
  if (this == (FSlateTexture2DRHIRef *)&DAT_00000018) {
    pFVar1 = (FRenderResource *)0x0;
  }
  return pFVar1;
}

// GetSlateResource @ 1486c7bc0

FSlateShaderResource * __thiscall
FSlateTexture2DRHIRef::GetSlateResource(FSlateTexture2DRHIRef *this)

{
  return (FSlateShaderResource *)&this[-1].TextureData;
}

// GetWidth @ 1486c9bb0

uint __thiscall FSlateTexture2DRHIRef::GetWidth(FSlateTexture2DRHIRef *this)

{
  return this->Width;
}

// InitRHI @ 1486cdc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateTexture2DRHIRef::InitRHI(FSlateTexture2DRHIRef *this,FRHICommandListBase *param_1)

{
  TSharedPtr<FSlateTextureData,1> *pTVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  FSlateTextureData *pFVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  TRefCountPtr<FRHITexture> TVar19;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory> FVar20;
  longlong *plVar21;
  uint uVar22;
  void *_Dst;
  ulonglong uVar23;
  uchar auVar24 [8];
  FScriptContainerElement *_Src;
  ulonglong _Size;
  undefined1 auStackY_368 [32];
  FName local_2e8;
  FRHIResource *local_2e0;
  FName local_2d8;
  FStatMessage local_2d0;
  FStatMessage local_2c0;
  FName local_2b0;
  FName local_2a8 [3];
  ulonglong local_290;
  undefined1 local_288 [32];
  FRHITextureDesc local_268;
  wchar_t *local_218;
  undefined8 local_210;
  FResourceBulkDataInterface *local_208;
  undefined8 local_200;
  FName local_1f8;
  FRHITextureDesc local_1e8;
  wchar_t *local_198;
  ERHIAccess local_190;
  ERHITextureInitAction local_18c;
  FResourceBulkDataInterface *local_188;
  FName local_180;
  FName local_178;
  undefined1 local_168 [48];
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  FRHICommandListBase *local_108;
  FRHITexture *local_100;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId47,"FSlateTexture2DRHIRef_InitDynamicRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
               ,0x2f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId47);
  }
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                         ,0x31,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)this->_padding_ != 0) && (*(int *)((longlong)&this->_padding_ + 4) != 0)) {
    lVar2 = this->_padding_;
    if ((lVar2 == 0) ||
       (pFVar10 = TSharedPtr<FSlateTextureData,1>::operator->
                            ((TSharedPtr<FSlateTextureData,1> *)&this->_padding_),
       (pFVar10->Bytes).ArrayNum < 1)) {
      bVar8 = false;
      if ((lVar2 == 0) && (*(char *)((longlong)&this->_padding_ + 1) == '\0')) goto LAB_1486ce580;
    }
    else {
      bVar8 = true;
    }
    if ((this[-1].TextureData.Object != (FSlateTextureData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsValidRef(ShaderResource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                           ,0x3a,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_268.Depth = 1;
    local_268.ArraySize = 1;
    local_268.Flags = None;
    local_268.ClearValue._0_8_ = 1;
    local_268.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_268.ClearValue.Value._4_8_ = 0;
    local_218 = L"FSlateTexture2DRHIRef";
    local_268.Extent.field0_0x0 = (TIntPoint<int>_u_0)this->_padding_;
    local_268.Format = (EPixelFormat)this->_padding_;
    local_268.ClearValue.Value.Color[3] = 0.0;
    local_268.ExtData = 0;
    local_268.NumMips = '\x01';
    local_268.NumSamples = '\x01';
    local_268.Dimension = Texture2D;
    local_268.UAVFormat = PF_Unknown;
    local_268.FastVRAMPercentage = 0xff;
    local_268.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_268.AliasableFormats.ArrayNum = 0;
    local_268.AliasableFormats.ArrayMax = 1;
    local_210 = 0;
    local_208 = (FResourceBulkDataInterface *)0x0;
    local_200 = 0;
    local_1f8.ComparisonIndex.Value = 0;
    local_1f8.Number = 0;
    FRHITextureDesc::FRHITextureDesc(&local_1e8,&local_268);
    local_198 = local_218;
    local_190 = (ERHIAccess)local_210;
    local_18c = local_210._4_4_;
    local_188 = local_208;
    local_180.ComparisonIndex.Value = (undefined4)local_200;
    local_180.Number = local_200._4_4_;
    local_178 = local_1f8;
    if (local_268.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_268.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_1e8.Flags = this->_padding_;
    local_180 = NAME_FSlateTexture2DRHIRef;
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_d8,&local_1e8);
    local_d8.DebugName = local_198;
    local_d8.InitialState = local_190;
    local_d8.InitAction = local_18c;
    local_d8.BulkData = local_188;
    local_d8.ClassName = local_180;
    local_d8.OwnerName = local_178;
    if (local_1e8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_1e8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    if (bVar8) {
      local_d8.InitAction = Initializer;
      FRHICommandListBase::CreateTextureInitializer
                (param_1,(FRHITextureInitializer *)local_168,&local_d8);
      pFVar10 = TSharedPtr<FSlateTextureData,1>::operator->
                          ((TSharedPtr<FSlateTextureData,1> *)&this->_padding_);
      if (((uint)this->_padding_ != pFVar10->Width) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Width == TextureData->GetWidth()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                             ,0x4a,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TSharedPtr<FSlateTextureData,1>::operator->
                          ((TSharedPtr<FSlateTextureData,1> *)&this->_padding_);
      if ((*(uint *)((longlong)&this->_padding_ + 4) != pFVar10->Height) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Height == TextureData->GetHeight()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                             ,0x4b,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((local_138 == (code *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSubresourceCallback",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                             ,0x56,
                             L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Core::Private::Function::CheckCallable(local_138);
      pcVar5 = local_138;
      plVar21 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar21 = local_110;
      }
      uVar11 = (**(code **)(*plVar21 + 8))();
      puVar12 = (undefined8 *)(*pcVar5)(local_288,uVar11);
      local_290 = puVar12[2];
      _Dst = (void *)*puVar12;
      pFVar10 = TSharedPtr<FSlateTextureData,1>::operator->
                          ((TSharedPtr<FSlateTextureData,1> *)&this->_padding_);
      _Src = (pFVar10->Bytes).AllocatorInstance.Data;
      uVar13 = FPixelFormatInfo::GetBlockCountForWidth
                         (GPixelFormats + (byte)this->_padding_,(uint)this->_padding_);
      uVar14 = FPixelFormatInfo::GetBlockCountForHeight
                         (GPixelFormats + (byte)this->_padding_,
                          *(uint *)((longlong)&this->_padding_ + 4));
      uVar22 = (int)uVar13 * GPixelFormats[(byte)this->_padding_].BlockBytes;
      pFVar10 = TSharedPtr<FSlateTextureData,1>::operator->
                          ((TSharedPtr<FSlateTextureData,1> *)&this->_padding_);
      if (((uint)(pFVar10->Bytes).ArrayNum < uVar22 * (int)uVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)TextureData->GetRawBytes().Num() >= SourceDataStride * BlocksY"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                             ,0x55,
                             L"Not enough bytes in source TextureData to complete copy operation"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = local_290;
      _Size = (ulonglong)uVar22;
      if (local_290 == _Size) {
        memcpy(_Dst,_Src,(uVar14 & 0xffffffff) * local_290);
      }
      else {
        if ((local_290 <= _Size) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("SourceDataStride < Subresource.Stride",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                               ,0x5f,
                               L"Texture stride of %u is smaller than source data stride of %u, PixelFormat=%s (%d)"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((int)uVar14 != 0) {
          uVar23 = uVar14 & 0xffffffff;
          do {
            memcpy(_Dst,_Src,_Size);
            _Dst = (void *)((longlong)_Dst + uVar7);
            _Src = _Src + _Size;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if ((this->_padding_ == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (ForAnyElementType *)this->_padding_;
      auVar24 = (uchar  [8])(longlong)*(int *)((longlong)&pFVar3[1].Data + 4);
      if (auVar24 != (uchar  [8])0x0) {
        FVar16 = StatPtr_STAT_SlateTextureDataMemory;
        if (StatPtr_STAT_SlateTextureDataMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)0x0) {
          pFVar15 = ::FName::FName(&local_2b0,"STAT_SlateTextureDataMemory");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureDataMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureDataMemory,
                              *pFVar15,L"Texture Data Memory (CPU)","STATGROUP_SlateMemory",
                              "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                              MCR_Physical);
        }
        FVar4 = *(FName *)FVar16;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar17 == (FThreadStats *)0x0) {
            pFVar18 = FThreadStatsPool::Get();
            pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
          }
          local_2d0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
          local_2e8 = FVar4;
          local_2d0.StatData.Pad = auVar24;
          local_2d0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar17,&local_2d0);
          FStatsTrace::Add(&local_2e8,-(longlong)auVar24);
          if (pFVar17->ScopeCount == 0) {
            FThreadStats::Flush(pFVar17,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar17,false,false);
          }
        }
      }
      *(undefined4 *)&pFVar3[1].Data = 0;
      if (*(int *)((longlong)&pFVar3[1].Data + 4) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
      }
    }
    else {
      FRHICommandListBase::CreateTextureInitializer
                (param_1,(FRHITextureInitializer *)local_168,&local_d8);
    }
    TVar19 = FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_168);
    pTVar1 = &this[-1].TextureData;
    if ((FRHITexture *)pTVar1 != TVar19.Reference) {
      pFVar10 = pTVar1->Object;
      pTVar1->Object = (FSlateTextureData *)(TVar19.Reference)->_padding_;
      (TVar19.Reference)->_padding_ = 0;
      if (pFVar10 != (FSlateTextureData *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar10);
      }
    }
    if (local_2e0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_2e0);
    }
    if ((this[-1].TextureData.Object == (FSlateTextureData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(ShaderResource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                           ,0x6b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar22 = GPixelFormats[(byte)this->_padding_].BlockBytes *
             *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    auVar24._0_4_ = uVar22;
    if (uVar22 != 0) {
      FVar20 = StatPtr_STAT_SlateTextureGPUMemory;
      if (StatPtr_STAT_SlateTextureGPUMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)0x0) {
        pFVar15 = ::FName::FName(local_2a8,"STAT_SlateTextureGPUMemory");
        FVar20 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureGPUMemory,
                            *pFVar15,L"Texture Data Memory (GPU)","STATGROUP_SlateMemory",
                            "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar4 = *(FName *)FVar20;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar17 == (FThreadStats *)0x0) {
          pFVar18 = FThreadStatsPool::Get();
          pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
        }
        local_2c0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_2d8 = FVar4;
        local_2c0.StatData.Pad = auVar24;
        local_2c0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar17,&local_2c0);
        FStatsTrace::Add(&local_2d8,(long64)auVar24);
        if (pFVar17->ScopeCount == 0) {
          FThreadStats::Flush(pFVar17,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar17,false,false);
        }
      }
    }
    if ((local_108 != (FRHICommandListBase *)0x0) && (local_100 != (FRHITexture *)0x0)) {
      FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_168);
    }
    if (local_138 != (code *)0x0) {
      plVar21 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar21 = local_110;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if (local_168._0_8_ != 0) {
      plVar21 = (longlong *)(local_168 + 0x10);
      if ((longlong *)local_168._40_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_168._40_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
  }
LAB_1486ce580:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleaseRHI @ 1486e64b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateTexture2DRHIRef::ReleaseRHI(FSlateTexture2DRHIRef *this)

{
  FName FVar1;
  FSlateTextureData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory> FVar6;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uchar auVar7 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                         ,0x74,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this[-1].TextureData.Object != (FSlateTextureData *)0x0) &&
     (uVar4 = GPixelFormats[(byte)this->_padding_].BlockBytes *
              *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_, auVar7[4] = '\0',
     auVar7[5] = '\0', auVar7[6] = '\0', auVar7[7] = '\0', auVar7._0_4_ = uVar4, uVar4 != 0)) {
    FVar6 = StatPtr_STAT_SlateTextureGPUMemory;
    if (StatPtr_STAT_SlateTextureGPUMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res10,"STAT_SlateTextureGPUMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureGPUMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureGPUMemory,*pFVar5,
                         L"Texture Data Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar7;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  this_00 = this[-1].TextureData.Object;
  if (this_00 != (FSlateTextureData *)0x0) {
    this[-1].TextureData.Object = (FSlateTextureData *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// Resize @ 1486ea4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSlateTexture2DRHIRef::Resize(FSlateTexture2DRHIRef *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  
  this->Width = param_1;
  this->Height = param_2;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::UpdateRHI
            ((FRenderResource *)&this->_padding_,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// ResizeTexture @ 1486eb380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateTexture2DRHIRef::ResizeTexture(FSlateTexture2DRHIRef *this,uint param_1,uint param_2)

{
  TSharedPtr<FSlateTextureData,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  TSharedPtr<FSlateTextureData,1> *pTStack_80;
  uint local_78;
  uint uStack_74;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  TSharedPtr<FSlateTextureData,1> *pTStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar1 = &this[-1].TextureData;
  uVar4 = (*(code *)((this[-1].TextureData.Object)->Bytes).AllocatorInstance.Data)(pTVar1);
  if ((uVar4 == param_1) &&
     (uVar4 = (**(code **)&(pTVar1->Object->Bytes).ArrayNum)(pTVar1), uVar4 == param_2)) {
    return;
  }
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    *(uint *)&this->_padding_ = param_1;
    *(uint *)((longlong)&this->_padding_ + 4) = param_2;
    bVar3 = IsInRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FRenderResource::UpdateRHI
              ((FRenderResource *)&this->_padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  }
  else {
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateTexture2DRHIRef::ResizeTexture'::`10'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pTStack_80 = pTVar1;
    local_78 = param_1;
    uStack_74 = param_2;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::ResizeTexture_::__l10::TSTR_ResizeSlateTexture184>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_48._4_4_ = uStack_74;
      local_48._0_4_ = local_78;
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pTStack_50 = pTStack_80;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateTexture2DRHIRef::ResizeTexture'::__l10::TSTR_ResizeSlateTexture184>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if ((2 < uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar6 = local_40;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar6 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar6 = local_70;
      }
      (*(code *)(*pppuVar6)[2])();
    }
  }
  return;
}

// SetRHIRef @ 1486ef1c0

void __thiscall
FSlateTexture2DRHIRef::SetRHIRef
          (FSlateTexture2DRHIRef *this,TRefCountPtr<FRHITexture> param_1,uint param_2,uint param_3)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FRHIResource *)(param_1.Reference)->_padding_;
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != this_00) {
    this->_padding_ = (longlong)this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
    }
  }
  this->Width = param_2;
  this->Height = param_3;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  return;
}

// SetTextureData @ 1486f00b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateTexture2DRHIRef::SetTextureData
          (FSlateTexture2DRHIRef *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  EPixelFormat EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *_Src;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  FMemScope local_b8;
  FMemScope local_b0;
  void *local_a8;
  uint local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined2 local_74;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 local_58;
  undefined2 local_54;
  
  lVar2 = this->_padding_;
  FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,Textures,true);
  local_88 = 0;
  local_80 = 0;
  local_78 = 1;
  local_74 = 0x100;
  local_90 = lVar2;
  FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e0))();
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_res10);
  EVar1 = this->PixelFormat;
  uVar6 = (ulonglong)((this->Height - 1) + GPixelFormats[EVar1].BlockSizeY) /
          (ulonglong)(uint)GPixelFormats[EVar1].BlockSizeY;
  uVar5 = (((this->Width - 1) + GPixelFormats[EVar1].BlockSizeX) /
          (uint)GPixelFormats[EVar1].BlockSizeX) * GPixelFormats[EVar1].BlockBytes;
  if (uVar5 * (int)uVar6 != param_1->ArrayNum) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_913273131332796215>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0xc9,"SrcStride * NumBlocksY == Bytes.Num()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (uVar5 == local_98) {
    memcpy(local_a8,(param_1->AllocatorInstance).Data,(longlong)param_1->ArrayNum);
  }
  else {
    _Src = (param_1->AllocatorInstance).Data;
    if ((int)uVar6 != 0) {
      _Dst = local_a8;
      do {
        memcpy(_Dst,_Src,(ulonglong)uVar5);
        _Dst = (void *)((longlong)_Dst + (ulonglong)local_98);
        _Src = _Src + uVar5;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  local_70[0] = this->_padding_;
  local_70[1] = 0;
  local_60 = 0;
  local_58 = 3;
  local_54 = 0x100;
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_b0,Textures,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0,local_70);
  FMemScope::~FMemScope(&local_b0);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SetTextureData @ 1486f02e0

void __thiscall
FSlateTexture2DRHIRef::SetTextureData
          (FSlateTexture2DRHIRef *this,TSharedPtr<FSlateTextureData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateTextureData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x90,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Object == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->Width = param_1->Object->Width;
  if (param_1->Object == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->Height = param_1->Object->Height;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TextureData).SharedReferenceCount.ReferenceController;
  (this->TextureData).Object = pFVar2;
  (this->TextureData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (param_1->Object == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Object->BytesPerPixel != GPixelFormats[this->PixelFormat].BlockBytes) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewTextureData->GetBytesPerPixel() == GPixelFormats[PixelFormat].BlockBytes"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x98,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetTextureData @ 1486f0440

void __thiscall
FSlateTexture2DRHIRef::SetTextureData
          (FSlateTexture2DRHIRef *this,TSharedPtr<FSlateTextureData,1> *param_1,EPixelFormat param_2
          ,ETextureCreateFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateTextureData *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x9d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->PixelFormat = param_2;
  this->TexCreateFlags = param_3;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x90,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar2 == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->Width = pFVar2->Width;
  if (pFVar2 == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->Height = pFVar2->Height;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->TextureData).SharedReferenceCount.ReferenceController;
  (this->TextureData).Object = pFVar2;
  (this->TextureData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (pFVar2 == (FSlateTextureData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar2->BytesPerPixel != GPixelFormats[this->PixelFormat].BlockBytes) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewTextureData->GetBytesPerPixel() == GPixelFormats[PixelFormat].BlockBytes"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x98,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateTexture @ 1486f67f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateTexture2DRHIRef::UpdateTexture
          (FSlateTexture2DRHIRef *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4 [3];
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar3 = IsInRenderingThread();
  if (bVar3) {
    SetTextureData((FSlateTexture2DRHIRef *)&this[-1].TextureData,param_1);
  }
  else {
    local_b8 = param_1->ArrayNum;
    sVar6 = (size_t)local_b8;
    _Src = (param_1->AllocatorInstance).Data;
    local_c0.Data = (FScriptContainerElement *)0x0;
    if (local_b8 == 0) {
      local_b4[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_b8,0,&local_c0,local_b8,local_b4);
      memcpy(local_c0.Data,_Src,sVar6);
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    _Src_00.Data = local_c0.Data;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTexture'::`7'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar5 = local_80 + 1;
    pFVar1 = (ForAnyElementType *)(local_80 + 2);
    *ppcVar5 = (code *)&this[-1].TextureData;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    sVar6 = (size_t)local_b8;
    *(int *)(local_80 + 3) = local_b8;
    if (local_b8 == 0) {
      *(int *)((longlong)local_80 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_b8,0,pFVar1,local_b8,(int *)((longlong)local_80 + 0x1c));
      memcpy(pFVar1->Data,_Src_00.Data,sVar6);
    }
    if (ppcVar5 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTexture_::__l7::TSTR_UpdateSlateTexture230>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTexture'::__l7::TSTR_UpdateSlateTexture230>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar4);
      uVar7 = (ulonglong)local_48;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar5 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar5 = local_50;
          }
          (**(code **)(*ppcVar5 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar5 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar5 = local_80;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  return;
}

// UpdateTextureThreadSafe @ 1486f6a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateTexture2DRHIRef::UpdateTextureThreadSafe
          (FSlateTexture2DRHIRef *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FSlateTextureData *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_c8 [32];
  code *local_98 [2];
  undefined **local_88;
  TSharedPtr<FSlateTextureData,1> *pTStack_80;
  FSlateTextureData *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  TSharedPtr<FSlateTextureData,1> *pTStack_50;
  FSlateTextureData *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  bVar3 = IsInGameThread();
  if (bVar3) {
    uVar1 = GPixelFormats[(byte)(char)this->TexCreateFlags].BlockBytes;
    if ((int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4) * uVar1 != param_1->ArrayNum
       ) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Width*Height*BytesPerPixel == Bytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                         ,0xf4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = ::operator_new(0x20);
    local_78 = (FSlateTextureData *)0x0;
    if (this_00 != (FSlateTextureData *)0x0) {
      local_78 = FSlateTextureData::FSlateTextureData
                           (this_00,(uint)this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
                            uVar1,param_1);
    }
    local_70 = (undefined ***)0x0;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pTStack_80 = &this[-1].TextureData;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTextureThreadSafe_::__l5::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafe249>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      pTStack_50 = pTStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafe'::__l5::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafe249>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar4);
      uVar6 = (ulonglong)local_38;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar5 = local_40;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar5 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar5 = local_70;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// UpdateTextureThreadSafeRaw @ 1486f6c70

void __thiscall
FSlateTexture2DRHIRef::UpdateTextureThreadSafeRaw
          (FSlateTexture2DRHIRef *this,uint param_1,uint param_2,void *param_3,
          TIntRect<int> *param_4)

{
  bool bVar1;
  FSlateTextureData *pFVar2;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    pFVar2 = ::operator_new(0x20);
    if (pFVar2 == (FSlateTextureData *)0x0) {
      pFVar2 = (FSlateTextureData *)0x0;
    }
    else {
      pFVar2 = FSlateTextureData::FSlateTextureData(pFVar2,param_3,param_1,param_2,4);
    }
    (**(code **)(this->_padding_ + 0x40))(this,pFVar2);
  }
  return;
}

// UpdateTextureThreadSafeWithKeyedTextureHandle @ 1486f6cf0

void __thiscall
FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithKeyedTextureHandle
          (FSlateTexture2DRHIRef *this,void *param_1,int param_2,int param_3,TIntRect<int> *param_4)

{
  return;
}

// UpdateTextureThreadSafeWithTextureData @ 1486f6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData
          (FSlateTexture2DRHIRef *this,FSlateTextureData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  TSharedPtr<FSlateTextureData,1> *pTStack_70;
  FSlateTextureData *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  TSharedPtr<FSlateTextureData,1> *pTStack_40;
  FSlateTextureData *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x10e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->BytesPerPixel != GPixelFormats[(byte)(char)this->TexCreateFlags].BlockBytes) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkData->GetBytesPerPixel() == GPixelFormats[PixelFormat].BlockBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Slate\\SlateTextures.cpp"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  pTStack_70 = &this[-1].TextureData;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData_::__l2::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafeWithTextureData280>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FSlateTexture2DRHIRef::UpdateTextureThreadSafeWithTextureData'::__l2::TSTR_FSlateTexture2DRHIRef_UpdateTextureThreadSafeWithTextureData280>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

