// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 10

// FSlatePostProcessResource @ 145fe6a40

FSlatePostProcessResource * __thiscall
FSlatePostProcessResource::FSlatePostProcessResource(FSlatePostProcessResource *this,int param_1)

{
  *(undefined1 *)&this->_padding_ = 0x21;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__FSlateShaderResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  (this->RenderTargets).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FRHITexture>_>)0x0;
  (this->RenderTargets).ArrayNum = 0;
  (this->RenderTargets).ArrayMax = 2;
  this->PixelFormat = PF_Unknown;
  (this->RenderTargetSize).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->RenderTargetCount = param_1;
  this->FrameUsed = GFrameCounter;
  return this;
}

// ~FSlatePostProcessResource @ 145fea260

void __thiscall
FSlatePostProcessResource::~FSlatePostProcessResource(FSlatePostProcessResource *this)

{
  ForElementType<TRefCountPtr<FRHITexture>_> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FSlateShaderResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  FVar1 = (this->RenderTargets).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
    FVar1 = (ForElementType<TRefCountPtr<FRHITexture>_>)&this->RenderTargets;
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)FVar1,(this->RenderTargets).ArrayNum);
  FVar1 = (this->RenderTargets).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  *(undefined1 *)&this->_padding_ = 0x84;
  return;
}

// CleanUp @ 145ff7130

void __thiscall FSlatePostProcessResource::CleanUp(FSlatePostProcessResource *this)

{
  FRenderResource *pFVar1;
  
  pFVar1 = (FRenderResource *)&this->_padding_;
  if (this == (FSlatePostProcessResource *)0x0) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginReleaseResource(pFVar1,(FRenderCommandPipe *)0x0);
  pFVar1 = (FRenderResource *)&this->_padding_;
  if (this == (FSlatePostProcessResource *)0x0) {
    pFVar1 = (FRenderResource *)0x0;
  }
  BeginCleanup((FDeferredCleanupInterface *)pFVar1);
  return;
}

// GetHeight @ 14600caf0

uint __thiscall FSlatePostProcessResource::GetHeight(FSlatePostProcessResource *this)

{
  return (this->RenderTargetSize).field0_0x0._s_0.Y;
}

// GetType @ 146018ff0

Type __thiscall FSlatePostProcessResource::GetType(FSlatePostProcessResource *this)

{
  return PostProcess;
}

// GetWidth @ 146019b10

uint __thiscall FSlatePostProcessResource::GetWidth(FSlatePostProcessResource *this)

{
  return (this->RenderTargetSize).field0_0x0._s_0.X;
}

// InitRHI @ 14601a2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlatePostProcessResource::InitRHI(FSlatePostProcessResource *this,FRHICommandListBase *param_1)

{
  return;
}

// ReleaseRHI @ 146021960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlatePostProcessResource::ReleaseRHI(FSlatePostProcessResource *this)

{
  int iVar1;
  FName FVar2;
  TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar3
  ;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar6;
  FName local_res8;
  FStatMessage local_18;
  
  FVar5 = StatPtr_STAT_SLATEPPRenderTargetMem;
  if (StatPtr_STAT_SLATEPPRenderTargetMem ==
      (FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_SLATEPPRenderTargetMem");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SLATEPPRenderTargetMem,*pFVar4,
                       L"PostProcess RenderTargets","STATGROUP_SlateMemory","STATCAT_Advanced",
                       L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar5;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_18.StatData.Pad[0] = '\0';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Set(&local_res8,0);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  *(TIntPoint<int>_u_0 *)&(this->RenderTargets).AllocatorInstance.SecondaryData.field_0x4 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  plVar6 = *(longlong **)(this->RenderTargets).AllocatorInstance.InlineData;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = &this->_padding_;
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)plVar6,
             *(int *)((this->RenderTargets).AllocatorInstance.InlineData + 8));
  iVar1 = *(int *)((this->RenderTargets).AllocatorInstance.InlineData + 0xc);
  pTVar3 = &this->RenderTargets;
  (pTVar3->AllocatorInstance).InlineData[8] = '\0';
  (pTVar3->AllocatorInstance).InlineData[9] = '\0';
  (pTVar3->AllocatorInstance).InlineData[10] = '\0';
  (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
  if (iVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
              (8,8,0,(ForElementType<TRefCountPtr<FRHITexture>_> *)&this->_padding_,0,
               (int *)((this->RenderTargets).AllocatorInstance.InlineData + 0xc));
  }
  return;
}

// ResizeTargets @ 146023a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlatePostProcessResource::ResizeTargets
          (FSlatePostProcessResource *this,TIntPoint<int> *param_1,EPixelFormat param_2)

{
  TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1
  ;
  int *piVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<TRefCountPtr<FRHITexture>_> FVar8;
  ForElementType<TRefCountPtr<FRHITexture>_> FVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar12;
  longlong lVar13;
  undefined1 auStackY_1c8 [32];
  undefined1 local_168 [24];
  undefined4 local_150;
  uint local_14c;
  FName local_148 [2];
  FRHITextureDesc local_138;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  FRHITextureDesc local_b8;
  wchar_t *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlatePostProcessResource.cpp"
                         ,0x28,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar9 = (this->RenderTargets).AllocatorInstance.SecondaryData;
  pTVar1 = &this->RenderTargets;
  if (FVar9 == (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
    FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)pTVar1;
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)FVar9,(this->RenderTargets).ArrayNum);
  iVar12 = 0;
  piVar2 = &(this->RenderTargets).ArrayMax;
  (this->RenderTargets).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  TVar3 = (param_1->field0_0x0)._s_0;
  (this->RenderTargetSize).field0_0x0._s_0 = TVar3;
  this->PixelFormat = param_2;
  if (((0 < TVar3.X) && (0 < TVar3.Y)) && (0 < this->RenderTargetCount)) {
    do {
      local_138.ClearValue._0_8_ = 1;
      local_138.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      local_138.ClearValue.Value._4_8_ = 0;
      local_138.Extent.field0_0x0 = (this->RenderTargetSize).field0_0x0;
      local_138.Format = this->PixelFormat;
      local_138.ClearValue.Value.Color[3] = 0.0;
      local_138.ExtData = 0;
      local_138.Depth = 1;
      local_138.ArraySize = 1;
      local_138.NumMips = '\x01';
      local_138.NumSamples = '\x01';
      local_138.Dimension = Texture2D;
      local_138.UAVFormat = PF_Unknown;
      local_138.FastVRAMPercentage = 0xff;
      local_138.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_138.AliasableFormats.ArrayNum = 0;
      local_138.AliasableFormats.ArrayMax = 1;
      local_e8 = L"FSlatePostProcessResource";
      local_e0 = 0x70;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_138.Flags = ShaderResource|RenderTargetable;
      FRHITextureDesc::FRHITextureDesc(&local_b8,&local_138);
      local_68 = local_e8;
      local_60 = (undefined4)local_e0;
      local_5c = local_e0._4_4_;
      local_58 = local_d8;
      local_50 = local_d0;
      local_48 = local_c8;
      if ((FName)local_138.AliasableFormats.AllocatorInstance.SecondaryData != (FName)0x0) {
        FMemory::Free((void *)local_138.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      bVar6 = IsInRenderingThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FRHICommandListBase::CreateTexture
                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (FRHITextureCreateDesc *)local_168);
      FVar9 = (this->RenderTargets).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<FRHITexture>_>)pTVar1;
      if (FVar9 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
        FVar8 = FVar9;
      }
      if ((ulonglong)FVar8 <= local_168) {
        if (FVar9 == (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
          FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)pTVar1;
        }
        if ((local_168 < (undefined1 *)((longlong)FVar9 + (longlong)*piVar2 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (this->RenderTargets).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->RenderTargets).ArrayNum = iVar7 + 1;
      FVar9 = (this->RenderTargets).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<TRefCountPtr<FRHITexture>_>)pTVar1;
      if (FVar9 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
        FVar8 = FVar9;
      }
      *(undefined8 *)((longlong)FVar8 + (longlong)iVar7 * 8) = 0;
      *(undefined8 *)((longlong)FVar8 + (longlong)iVar7 * 8) = local_168._0_8_;
      if (((FRHIResource *)local_168._0_8_ != (FRHIResource *)0x0) &&
         (FRHIResource::AddRef((FRHIResource *)local_168._0_8_),
         (FRHIResource *)local_168._0_8_ != (FRHIResource *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_168._0_8_);
      }
      if (local_b8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_b8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < this->RenderTargetCount);
  }
  lVar13 = (longlong)
           (GPixelFormats[this->PixelFormat].BlockBytes * (this->RenderTargetSize).field0_0x0._s_0.Y
            * this->RenderTargetCount * (this->RenderTargetSize).field0_0x0._s_0.X);
  FVar11 = StatPtr_STAT_SLATEPPRenderTargetMem;
  if (StatPtr_STAT_SLATEPPRenderTargetMem ==
      (FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem>)0x0) {
    pFVar10 = ::FName::FName(local_148,"STAT_SLATEPPRenderTargetMem");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_SLATEPPRenderTargetMem>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SLATEPPRenderTargetMem,*pFVar10,
                        L"PostProcess RenderTargets","STATGROUP_SlateMemory","STATCAT_Advanced",
                        L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
  }
  lVar4 = *(longlong *)FVar11;
  if (((lVar4 != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_168._8_8_ = lVar4;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_14c = (uint)((ulonglong)lVar4 >> 0x20) & 0xffff8fff | 0x8000;
    local_168._8_8_ = lVar4;
    local_168._16_8_ = lVar13;
    local_150 = (int)lVar4;
    FThreadStats::AddStatMessage(this_00,(FStatMessage *)(local_168 + 0x10));
    FStatsTrace::Set((FName *)(local_168 + 8),lVar13);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// Update @ 14602dd90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlatePostProcessResource::Update
          (FSlatePostProcessResource *this,TIntPoint<int> *param_1,EPixelFormat param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TIntPoint<int>_u_0 local_res8;
  
  iVar1 = (this->RenderTargetSize).field0_0x0._s_0.X;
  if ((((iVar1 < (param_1->field0_0x0)._s_0.X) ||
       (iVar2 = (this->RenderTargetSize).field0_0x0._s_0.Y, iVar2 < (param_1->field0_0x0)._s_0.Y))
      || ((iVar1 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X &&
          (iVar2 == UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)))) ||
     (((this->RenderTargets).ArrayNum == 0 || (this->PixelFormat != param_2)))) {
    if ((int)this->_padding_ == -1) {
      pcVar3 = *(code **)(this->_padding_ + 0x18);
      bVar4 = IsInRenderingThread();
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      (*pcVar3)(&this->_padding_,0x154be5ed0);
    }
    local_res8._s_0.X = (this->RenderTargetSize).field0_0x0._s_0.X;
    local_res8._s_0.Y = (this->RenderTargetSize).field0_0x0._s_0.Y;
    if (local_res8._s_0.X < (param_1->field0_0x0)._s_0.X) {
      local_res8._s_0.X = (param_1->field0_0x0)._s_0.X;
    }
    if (local_res8._s_0.Y < (param_1->field0_0x0)._s_0.Y) {
      local_res8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    }
    ResizeTargets(this,(TIntPoint<int> *)&local_res8._s_0,param_2);
  }
  this->FrameUsed = GFrameCounter;
  return;
}

