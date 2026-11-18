// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 26

// FMediaTextureResource @ 146c1c900

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMediaTextureResource * __thiscall
FMediaTextureResource::FMediaTextureResource
          (FMediaTextureResource *this,UMediaTexture *param_1,TIntPoint<int> *param_2,
          ulong64 *param_3,FLinearColor *param_4,FGuid *param_5,bool param_6,uchar param_7,
          EColorSpace param_8)

{
  UMediaTexture *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  FColorSpace *pFVar9;
  FColorSpace *pFVar10;
  FMediaTextureResource *pFVar11;
  
  FRenderTarget::FRenderTarget((FRenderTarget *)this);
  FTexture::FTexture((FTexture *)&this->_padding_);
  pFVar10 = (FColorSpace *)0x0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->Cleared = false;
  this->OwnerDim = param_2;
  this->OwnerSize = param_3;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&(this->CurrentClearColor).field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)((longlong)&(this->CurrentClearColor).field0_0x0 + 8) = uVar3;
  uVar4 = param_5->A;
  uVar5 = param_5->B;
  uVar6 = param_5->C;
  uVar7 = param_5->D;
  this->bEnableGenMips = param_6;
  (this->InitialTextureGuid).A = uVar4;
  (this->InitialTextureGuid).B = uVar5;
  (this->InitialTextureGuid).C = uVar6;
  (this->InitialTextureGuid).D = uVar7;
  (this->InputTarget).Reference = (FRHITexture *)0x0;
  (this->IntermediateTarget).Reference = (FRHITexture *)0x0;
  (this->OutputTarget).Reference = (FRHITexture *)0x0;
  this->Owner = param_1;
  if (!param_6) {
    param_7 = '\x01';
  }
  this->CurrentNumMips = param_7;
  this->CurrentSamplerFilter = ESamplerFilter_Num;
  this->CurrentMipMapBias = -1.0;
  (this->PlayerFacadePtr).Object = (FMediaPlayerFacade *)0x0;
  (this->PlayerFacadePtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentSample).Object = (IMediaTextureSample *)0x0;
  (this->CurrentSample).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FPriorSamples::Create(&this->PriorSamples);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PriorSamplesCS,4000);
  pUVar1 = this->Owner;
  (this->MipGenerationCache).Reference = (IPooledRenderTarget *)0x0;
  (this->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
  (this->OverrideColorSpace).Ptr = (FColorSpace *)0x0;
  this->bRecreateOutputTarget = false;
  if ((pUVar1->NewStyleOutput == false) && (GRHIGlobals.SupportsImageExternal != false)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  this->bUsesImageExternal = bVar8;
  if (param_8 != None) {
    pFVar9 = ::operator_new(0x150);
    if (pFVar9 != (FColorSpace *)0x0) {
      pFVar10 = UE::Color::FColorSpace::FColorSpace(pFVar9,param_8);
    }
    pFVar9 = (this->OverrideColorSpace).Ptr;
    if (pFVar9 != pFVar10) {
      (this->OverrideColorSpace).Ptr = pFVar10;
      ::operator_delete(pFVar9,0x150);
    }
    if ((this->OverrideColorSpace).Ptr == (FColorSpace *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverrideColorSpace.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x187,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FMediaTextureResource *)(*pcVar2)();
        return pFVar11;
      }
    }
  }
  return this;
}

// ~FMediaTextureResource @ 146c1e560

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::~FMediaTextureResource(FMediaTextureResource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  IPooledRenderTarget *pIVar5;
  FRHITexture *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  ::operator_delete((this->OverrideColorSpace).Ptr,0x150);
  pFVar3 = (this->JustInTimeRenderParams).Ptr;
  if (pFVar3 != (FRenderParams *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
    pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x70);
  }
  pIVar5 = (this->MipGenerationCache).Reference;
  if (pIVar5 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar5->_padding_ + 0x38))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PriorSamplesCS);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PriorSamples).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSample).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->PlayerFacadePtr).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  pFVar6 = (this->OutputTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar6 = (this->IntermediateTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar6 = (this->InputTarget).Reference;
  if (pFVar6 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)&this->_padding_);
  FRenderTarget::~FRenderTarget((FRenderTarget *)this);
  return;
}

// CacheNextAvailableSampleTime @ 146c20e00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMediaTextureResource::CacheNextAvailableSampleTime
          (FMediaTextureResource *this,
          TSharedPtr<TMediaSampleSource<IMediaTextureSample>,1> *param_1)

{
  TMediaSampleSource<IMediaTextureSample> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  TAtomic<FTimespan> *pTVar5;
  TAtomic<FTimespan> TVar6;
  longlong *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18 [16];
  
  TVar6 = (TAtomic<FTimespan>)0x8000000000000000;
  pTVar1 = param_1->Object;
  if (pTVar1 != (TMediaSampleSource<IMediaTextureSample> *)0x0) {
    local_28 = (longlong *)0x0;
    pTStack_20 = (TReferenceControllerBase<1> *)0x0;
    cVar3 = (**(code **)((longlong)*pTVar1 + 8))(pTVar1,&local_28);
    if (cVar3 != '\0') {
      if ((local_28 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar5 = (TAtomic<FTimespan> *)(**(code **)(*local_28 + 0x60))(local_28,local_18);
      TVar6 = *pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  LOCK();
  this->Owner->CachedNextSampleTime = TVar6;
  UNLOCK();
  return;
}

// ClearTexture @ 146c215e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMediaTextureResource::ClearTexture
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,FLinearColor *param_2,
          bool param_3)

{
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  FRHIBreadcrumbAllocator *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  undefined1 auStackY_1d8 [32];
  TIntPoint<int>_u_0 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined2 local_184;
  longlong local_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined1 local_160;
  FRHIBreadcrumbScope local_158;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *local_148;
  wchar_t *pwStack_140;
  FRHIRenderPassInfo local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_198 = (TIntPoint<int>_u_0)&DAT_200000002;
  CreateIntermediateRenderTarget
            (this,param_1,(TIntPoint<int> *)&local_198._s_0,PF_B8G8R8A8,param_3,param_2,'\x01',false
            );
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_158.Node._0_4_ = 0x359;
      local_158.RHICmdList = (FRHIComputeCommandList *)0x151430c90;
      local_148 = &GPUStat_MediaTextureResource;
      pwStack_140 = L"FMediaTextureResource_ClearTexture";
      ::Desc._padding_._0_4_ = 0x51430c90;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x359;
      ::Desc._padding_._4_4_ = local_158.Node._4_4_;
      ::Desc._padding_._0_4_ = 0x54c0dd20;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x51430ea0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMediaTextureResource::ClearTexture'::__l8::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar5 = FMemStackBase::Alloc(&pFVar4->Inner,0x50,8);
  pFVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar5->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar5->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar5->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar5->Allocator = pFVar4;
  pFVar5->TraceCpuSpecId = 0;
  pFVar5->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar5->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar5->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar5->ID = uVar2;
  pFVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar5[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar3 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar3;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar5->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_158,(FRHIComputeCommandList *)param_1,pFVar5);
  local_180 = this->_padding_;
  uStack_190 = 1;
  local_198 = (TIntPoint<int>_u_0)&local_188;
  local_148 = (TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *)CONCAT71(local_148._1_7_,1);
  local_188 = 0xffffffff;
  local_184 = 0xffff;
  local_178 = 1;
  local_174 = 0x70;
  local_170 = 0x1000;
  local_16c = 0;
  local_160 = 0;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)&local_198._s_0,None);
  FRHIRenderPassInfo::FRHIRenderPassInfo
            (&local_138,(FRHITexture *)this->_padding_,Clear_Store,(FRHITexture *)0x0,'\0',-1);
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_138,L"ClearTexture");
  FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
  local_180 = this->_padding_;
  _uStack_190 = CONCAT44(uStack_18c,1);
  local_198 = (TIntPoint<int>_u_0)&local_188;
  local_188 = 0xffffffff;
  local_184 = 0xffff;
  local_178 = 1;
  local_174 = 0x1000;
  local_170 = 0x70;
  local_16c = 0;
  local_160 = 0;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)&local_198._s_0,None);
  if (local_138.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_138.ShadingRateTexture.Reference);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_158);
  this->Cleared = true;
  return;
}

// ConvertSample @ 146c21b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMediaTextureResource::ConvertSample
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,FLinearColor *param_3,uchar param_4)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  int iVar2;
  FRHITexture *this_00;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FRHITexture *pFVar11;
  longlong lVar12;
  ETextureCreateFlags *pEVar13;
  TRefCountPtr<FRHITexture> TVar14;
  uint uVar15;
  ETextureCreateFlags EVar16;
  byte bVar17;
  undefined1 auStackY_278 [32];
  int local_230;
  int iStack_22c;
  uchar *local_228;
  FRHICommandListBase *local_220;
  FUpdateTextureRegion2D local_218;
  undefined1 local_200 [48];
  longlong local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  EPixelFormat local_1a5;
  undefined2 local_1a4;
  FName local_198;
  FNameEntryId local_190;
  uint local_18c;
  wchar_t *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  FRHITextureDesc local_158;
  wchar_t *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FRHITextureDesc local_d8;
  wchar_t *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_220 = (FRHICommandListBase *)param_1;
  local_200._8_8_ = this;
  local_200._16_8_ = param_3;
  EVar4 = MediaTextureResourceHelpers::GetPixelFormat(param_2);
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar6 = (**(code **)((longlong)*param_2->Object + 0x10))();
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = (FRHITexture *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if (pFVar11 != (FRHITexture *)0x0) {
    UpdateResourceSize(this);
    this_00 = (this->InputTarget).Reference;
    if (this_00 != (FRHITexture *)0x0) {
      (this->InputTarget).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
    goto LAB_146c22038;
  }
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar7 = (**(code **)((longlong)*param_2->Object + 0x80))();
  if (cVar7 == '\0') {
LAB_146c21cbb:
    EVar16 = None;
  }
  else {
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = (**(code **)((longlong)*param_2->Object + 0x28))();
    if ((0x15 < uVar9) || (EVar16 = SRGB, (0x30002cU >> (uVar9 & 0x1f) & 1) == 0))
    goto LAB_146c21cbb;
  }
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 8))(param_2->Object,&local_230);
  pTVar1 = &this->InputTarget;
  pFVar11 = pTVar1->Reference;
  if (pFVar11 == (FRHITexture *)0x0) {
LAB_146c21d91:
    local_1bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_200._40_8_ = 0;
    local_1d0 = 1;
    local_188 = L"FMediaTextureResource";
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1ac = 0x10001;
    local_1a8 = ResolveSrc|CPURead;
    local_1a6 = None >> 0x10;
    local_1a4 = 0xff00;
    local_198.ComparisonIndex.Value = 0;
    local_198.Number = 0;
    local_190.Value = 0;
    local_18c = 1;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_1a5 = EVar4;
    FRHITextureDesc::FRHITextureDesc(&local_158,(FRHITextureDesc *)(local_200 + 0x28));
    local_108 = local_188;
    local_100 = (undefined4)local_180;
    local_fc = local_180._4_4_;
    local_f8 = local_178;
    local_f0 = local_170;
    local_e8 = local_168;
    if (local_198 != (FName)0x0) {
      FMemory::Free((void *)local_198);
    }
    local_158.Flags = EVar16;
    local_158.NumMips = bVar6;
    FRHITextureDesc::FRHITextureDesc(&local_d8,&local_158);
    local_88 = local_108;
    local_80 = local_100;
    local_7c = local_fc;
    local_78 = local_f8;
    local_70 = local_f0;
    local_68 = local_e8;
    if (local_158.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_158.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar14 = FRHICommandListBase::CreateTexture(local_220,(FRHITextureCreateDesc *)local_200);
    if ((FRHITexture *)pTVar1 != TVar14.Reference) {
      pFVar11 = pTVar1->Reference;
      pTVar1->Reference = (FRHITexture *)(TVar14.Reference)->_padding_;
      (TVar14.Reference)->_padding_ = 0;
      if (pFVar11 != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
      }
    }
    if ((FRHIResource *)local_200._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_200._0_8_);
    }
    UpdateResourceSize(this);
    if (local_d8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_d8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  else {
    lVar12 = (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11);
    iVar2 = *(int *)(lVar12 + 0x28);
    lVar12 = (**(code **)(pFVar11->_padding_ + 0x20))(pFVar11);
    if ((((*(int *)(lVar12 + 0x24) != local_230) || (iVar2 != iStack_22c)) ||
        (lVar12 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
        *(EPixelFormat *)(lVar12 + 0x33) != EVar4)) ||
       ((pEVar13 = (ETextureCreateFlags *)(**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
        (*pEVar13 & EVar16) != EVar16 ||
        (lVar12 = (**(code **)(pTVar1->Reference->_padding_ + 0x20))(),
        *(byte *)(lVar12 + 0x30) != bVar6)))) goto LAB_146c21d91;
  }
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_228 = (uchar *)(**(code **)*param_2->Object)();
  if ((local_228 == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x409,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  if (bVar6 != 0) {
    do {
      if ((param_2->Object == (IMediaTextureSample *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar17 = (byte)uVar9;
      uVar10 = (**(code **)((longlong)*param_2->Object + 0x38))();
      local_218.Width = local_230 >> (bVar17 & 0x1f);
      uVar10 = uVar10 >> (bVar17 & 0x1f);
      uVar15 = iStack_22c >> (bVar17 & 0x1f);
      local_218.DestX = 0;
      local_218.DestY = 0;
      local_218.SrcX = 0;
      local_218.SrcY = 0;
      local_218.Height = uVar15;
      FRHICommandListBase::UpdateTexture2D
                (local_220,pTVar1->Reference,uVar9,&local_218,uVar10,local_228);
      uVar9 = (uint)(byte)(bVar17 + 1);
      local_228 = local_228 + uVar15 * uVar10;
    } while ((byte)(bVar17 + 1) < bVar6);
  }
  pFVar11 = pTVar1->Reference;
  param_1 = (FRHICommandListImmediate *)local_220;
  this = (FMediaTextureResource *)local_200._8_8_;
LAB_146c22038:
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x30))(param_2->Object,local_200 + 0x18);
  if (1 < bVar6) {
    param_4 = bVar6;
  }
  bVar5 = MediaTextureResourceHelpers::RequiresUAVTexture(param_2,param_4);
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar8 = (bool)(**(code **)((longlong)*param_2->Object + 0x80))();
  EVar4 = MediaTextureResourceHelpers::GetConvertedPixelFormat(param_2);
  CreateIntermediateRenderTarget
            (this,param_1,(TIntPoint<int> *)(local_200 + 0x18),EVar4,bVar8,
             (FLinearColor *)local_200._16_8_,param_4,bVar5);
  ConvertTextureToOutput(this,param_1,pFVar11,param_2);
  return;
}

// ConvertTextureToOutput @ 146c22140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMediaTextureResource::ConvertTextureToOutput
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          TSharedPtr<IMediaTextureSample,1> *param_3)

{
  byte bVar1;
  FRHITransitionInfo_u_8 FVar2;
  code *pcVar3;
  float fVar4;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *pTVar5;
  bool bVar6;
  char cVar7;
  EToneMapMethod EVar8;
  EEncoding EVar9;
  uint uVar10;
  atomic<unsigned_int> aVar11;
  Type TVar12;
  int iVar13;
  FRHIBreadcrumbAllocator *pFVar14;
  FRHIBreadcrumbNode *pFVar15;
  longlong lVar16;
  FGlobalShaderMap *this_00;
  TRefCountPtr<FRHIShaderResourceView> TVar17;
  byte *pbVar18;
  FRHITexture *pFVar19;
  FInitializer *pFVar20;
  FRHIPixelShader *pFVar21;
  IMediaTextureSample *pIVar22;
  FShaderType *pFVar23;
  FName FVar24;
  FRHIBatchedShaderParameters *pFVar25;
  undefined1 uVar26;
  FRHIResource *this_01;
  FRHIResource *pFVar27;
  float in_XMM1_Da;
  undefined1 auStackY_ca8 [32];
  bool local_c48;
  TIntPoint<int>_u_0 local_c40;
  bool local_c38;
  EToneMapMethod local_c37;
  bool local_c36;
  FMediaTextureResource *local_c30;
  uint local_c28;
  FRHICommandListBase *local_c20;
  undefined1 local_c18 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_bf8;
  TIntPoint<int>_u_0 local_be8;
  undefined1 local_be0 [16];
  TIntPoint<int> local_bd0;
  undefined1 local_bc8 [16];
  TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable> local_bb8;
  FRHITexture *local_ba8;
  ForAnyElementType local_ba0;
  IRHIComputeContext *local_b98;
  FRHITexture *local_b90;
  undefined1 local_b88 [72];
  FRHIResource *local_b40;
  FRHITransitionInfo_u_8 local_b38;
  FRHIBreadcrumbScope local_b30;
  bool local_b20;
  FRHITexture *local_b18;
  TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable> local_b10;
  TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable> local_b00;
  TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable> local_af0;
  FRHIResource *local_ae0;
  undefined1 local_ad8 [28];
  EResourceTransitionFlags local_abc;
  uchar local_ab0 [1];
  FRHITransitionInfo local_aa8;
  undefined1 local_a78 [16];
  ForElementType<EPixelFormat> local_a68;
  int local_a60;
  undefined1 local_a5c;
  undefined1 local_a50;
  TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable> local_a48;
  TSharedPtr<IMediaTextureSample,1> local_a38;
  TSharedPtr<IMediaTextureSample,1> local_a28;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a18;
  TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable> local_a08;
  TSharedPtr<IMediaTextureSample,1> local_9f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_9e8;
  char *local_9d8;
  uint uStack_9d0;
  uint uStack_9cc;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *local_9c8;
  wchar_t *pwStack_9c0;
  TSharedPtr<IMediaTextureSample,1> local_9b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_9a8;
  undefined1 local_998 [16];
  FInitializer local_988;
  TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable> local_978;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_968;
  TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable> local_958;
  TSharedPtr<IMediaTextureSample,1> local_948;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_938;
  FRHICommandListScopedFence *local_928;
  FRHIBreadcrumbNode *pFStack_920;
  FRHIDrawStatsCategory *local_918;
  undefined8 uStack_910;
  TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable> local_908;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_8f8;
  TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable> local_8e8;
  TSharedPtr<IMediaTextureSample,1> local_8d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_8c8;
  TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable> local_8b8;
  TSharedPtr<IMediaTextureSample,1> local_8a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_898;
  TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable> local_888;
  TSharedPtr<IMediaTextureSample,1> local_878;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_868;
  undefined1 local_858 [16];
  TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable> local_848;
  TSharedPtr<IMediaTextureSample,1> local_838;
  TSharedPtr<IMediaTextureSample,1> local_828;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_818;
  FInitializer local_808;
  TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable> local_7f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_7e8;
  undefined1 local_7d8 [8];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [8];
  undefined1 local_7b8 [8];
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [8];
  undefined1 local_7a0 [8];
  TArrayView<FRHITransitionInfo_const_,int> local_798;
  TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable> local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FLinearColor_u_0 local_6c8;
  FLinearColor_u_0 local_6b8;
  undefined1 local_6a8 [16];
  undefined1 local_698 [8];
  undefined1 local_690 [8];
  undefined1 local_688 [8];
  undefined1 local_680 [8];
  undefined1 local_678 [16];
  undefined1 local_668 [208];
  uint local_598;
  ulong64 local_590;
  TMatrix<float> local_588;
  TMatrix<float> local_548;
  TMatrix<float> local_508;
  TMatrix<float> local_4c8;
  TMatrix<float> local_488;
  TMatrix<float> local_448;
  TMatrix<float> local_408;
  TMatrix<float> local_3c8;
  TMatrix<float> local_388;
  TMatrix<float> local_348;
  TMatrix<float> local_308;
  TMatrix<float> local_2c8;
  TMatrix<float> local_288;
  TMatrix<float> local_248;
  TMatrix<float> local_208;
  TMatrix<float> local_1c8;
  FRHIRenderPassInfo local_188;
  ulonglong local_88;
  FRHIResource *this_02;
  FRHIResource *this_03;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_ca8;
  local_c30 = this;
  local_c20 = (FRHICommandListBase *)param_1;
  if ((param_3->Object == (IMediaTextureSample *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar7 = (**(code **)((longlong)*param_3->Object + 0x10))();
  if ((cVar7 != '\x01') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sample->GetNumMips() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x43c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_9d8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
    ;
    local_9c8 = &GPUStat_MediaTextureResource;
    pTVar5 = local_9c8;
    uStack_9d0 = 0x43e;
    ::Desc._padding_ = CONCAT44(uStack_9cc,0x43e);
    pwStack_9c0 = L"FMediaTextureResource_Convert";
    local_9c8._0_4_ = 6.6267487e+12;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x54c0dd20;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x51430f08;
    ::Desc._padding_._4_4_ = 1;
    in_XMM1_Da = local_9c8._0_4_;
    local_9c8 = pTVar5;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMediaTextureResource::ConvertTextureToOutput'::__l15::<lambda_1>::operator()<>'::__l2
           ::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar14 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar15 = FMemStackBase::Alloc(&pFVar14->Inner,0x50,8);
  pFVar15->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar15->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar15->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar15->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar15->Allocator = pFVar14;
  iVar13 = 0;
  pFVar15->TraceCpuSpecId = 0;
  pFVar15->TraceCpuMetadataId = 0;
  pFVar15->Data = (FRHIBreadcrumbData *)&::Desc;
  LOCK();
  UNLOCK();
  uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar15->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar15->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar15->ID = uVar10;
  pFVar15->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar15[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar11 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar11;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar15->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_b30,(FRHIComputeCommandList *)param_1,pFVar15);
  fVar4 = __real_3f800000;
  local_b20 = true;
  CreateTempMediaVertexBuffer((FRHICommandListBase *)local_c18,in_XMM1_Da,0.0,__real_3f800000,0.0);
  FVar2 = (FRHITransitionInfo_u_8)(this->IntermediateTarget).Reference;
  local_bf8.ArrayNum = 1;
  local_668._0_8_ = (FRHIVertexDeclaration *)0x0;
  local_668._8_8_ = (FRHIVertexShader *)0x0;
  local_668._32_8_ = (FRHIAmplificationShader *)0x0;
  local_668._40_8_ = (FRHIGeometryShader *)0x0;
  local_aa8._padding_._4_2_ = 0xffff;
  local_bf8.DataPtr = &local_aa8;
  local_668._64_8_ = (FRHIRasterizerState *)0x0;
  local_668._72_8_ = (FRHIDepthStencilState *)0x0;
  local_668._112_8_ = None;
  local_668._120_8_ = None;
  local_668._144_8_ = None;
  local_668._152_8_ = None;
  local_798.ArrayNum = 1;
  local_798._12_4_ = local_bf8._12_4_;
  local_668._16_8_ = (FRHIPixelShader *)0x0;
  local_668._24_8_ = (FRHIMeshShader *)0x0;
  local_668._48_8_ = (FRHIWorkGraphShader *)0x0;
  local_668._56_8_ = (FRHIBlendState *)0x0;
  local_668._80_8_ = (FRHISamplerState *)0x0;
  local_668._88_8_ = (FRHISamplerState *)0x0;
  local_668._100_4_ = 0;
  local_668[0x68] = '\0';
  local_668[0x69] = '\0';
  local_668[0x6a] = '\0';
  local_668[0x6b] = '\0';
  local_668._108_4_ = 0;
  local_668._128_8_ = None;
  local_668._136_8_ = None;
  local_668._160_8_ = None;
  local_668._168_8_ = None;
  local_668[0xb0] = PF_Unknown;
  local_668._184_8_ = None;
  local_668._192_4_ = 0;
  local_668._196_4_ = 0;
  local_668._200_4_ = 0;
  local_668._204_4_ = 0;
  local_598 = 1;
  local_590 = 0;
  local_aa8._padding_._0_4_ = 0xffffffff;
  local_aa8.Type = Texture;
  local_aa8.AccessBefore = None;
  local_aa8.AccessAfter = RTV;
  local_aa8.Flags = None;
  local_aa8.CommitInfo.bIsSet = false;
  local_b38 = FVar2;
  local_aa8.field1_0x8 = FVar2;
  local_798.DataPtr = local_bf8.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_798,None);
  lVar16 = (**(code **)((FVar2.Resource)->_padding_ + 0x20))(FVar2.Resource);
  cVar7 = *(char *)(lVar16 + 0x32);
  if ((((cVar7 == '\0') || (cVar7 == '\x01')) || (cVar7 == '\x02')) ||
     ((cVar7 == '\x03' || (cVar7 == '\x04')))) {
    iVar13 = *(int *)(lVar16 + 0x28);
  }
  lVar16 = (**(code **)((FVar2.Resource)->_padding_ + 0x20))(FVar2.Resource);
  cVar7 = *(char *)(lVar16 + 0x32);
  if (((cVar7 == '\0') || (cVar7 == '\x01')) ||
     ((cVar7 == '\x02' || ((cVar7 == '\x03' || (cVar7 == '\x04')))))) {
    local_c40._s_0.X = *(int *)(lVar16 + 0x24);
  }
  else {
    local_c40._s_0.X = 0;
  }
  local_bf8.ArrayNum = 1;
  local_ad8._4_2_ = 0xffff;
  local_ad8._8_8_ = this->_padding_;
  local_bf8.DataPtr = (FRHITransitionInfo *)local_ad8;
  local_ad8._0_4_ = 0xffffffff;
  local_ad8[0x10] = Texture;
  local_ad8._20_4_ = None;
  local_ad8._24_4_ = RTV;
  local_abc = None;
  local_ab0[0] = false;
  local_c40._s_0.Y = iVar13;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_bf8,None);
  FRHIRenderPassInfo::FRHIRenderPassInfo
            (&local_188,FVar2.Texture,DontLoad_Store,(FRHITexture *)0x0,'\0',-1);
  FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_188,L"ConvertMedia");
  FRHICommandList::ApplyCachedRenderTargets
            ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)local_c40._s_0.X,(float)local_c40._s_0.Y,
             fVar4);
  local_668._72_8_ =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_668._64_8_ =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_668._56_8_ =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  local_668._96_4_ = PT_TriangleStrip;
  TVar12 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar12 = GMaxRHIFeatureLevel;
  }
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar12]);
  TShaderMapRef<FMediaShadersVS>::TShaderMapRef<FMediaShadersVS>
            ((TShaderMapRef<FMediaShadersVS> *)&local_788,this_00);
  local_668._0_8_ = GMediaVertexDeclaration._32_8_;
  local_668._8_8_ =
       TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetVertexShader(&local_788,true);
  this_02 = (FRHIResource *)0x0;
  this_01 = (FRHIResource *)0x0;
  this_03 = (FRHIResource *)0x0;
  pFVar27 = (FRHIResource *)0x0;
  if ((param_3->Object == (IMediaTextureSample *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_c28 = (**(code **)((longlong)*param_3->Object + 0x28))();
  switch(local_c28) {
  case 1:
  case 0x11:
  case 0x12:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_348);
    local_878.Object = param_3->Object;
    local_878.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_878.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_878,&local_388);
    pFVar23 = (FShaderType *)FYUVY416ConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_868,pFVar23,0);
    if (local_868.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_678);
      ::FName::ToString((FName *)FVar24,&local_718);
      FYUVY416ConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FYUVY416ConvertPS::GetStaticType();
    local_848.ShaderContent = (FYUVY416ConvertPS *)local_868.ShaderContent;
    local_848.ShaderMap = local_868.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_848,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    local_858._8_4_ = 0;
    local_858._12_4_ = 0;
    local_858._0_4_ = 2;
    local_858._4_4_ = 0;
    pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                        ((FInitializer *)local_858,param_2);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    iVar13 = (**(code **)((longlong)*pIVar22 + 0x28))(pIVar22);
    uVar26 = 1;
    if (iVar13 == 0x11) {
      uVar26 = 0x13;
    }
    pFVar20->field_0x1 = uVar26;
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHITexture *)local_bc8,(FInitializer *)param_2);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    cVar7 = *(char *)(lVar16 + 0x33);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    pFVar21 = TShaderRefBase<FYUVY416ConvertPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_848,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._16_8_ = local_bc8._0_8_;
    if ((FRHIResource *)local_bc8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_bc8._0_8_);
    }
    FYUVY416ConvertPS::SetParameters
              ((FYUVY416ConvertPS *)local_868.ShaderContent,pFVar25,
               (FRHIShaderResourceView *)(local_b88 + 0x10),&local_348,EVar9,&local_388,cVar7 == '&'
               ,EVar8);
    FRHICommandList::SetBatchedShaderParameters
              ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar21,pFVar25);
    this_03 = pFVar27;
    if ((FRHIResource *)local_bc8._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_bc8._0_8_);
    }
    goto LAB_146c23fcf;
  case 2:
  case 3:
  case 4:
  case 0xc:
  case 0xd:
  case 0x1a:
  case 0x1b:
    pbVar18 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((*pbVar18 & 0x10) == 0) {
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      local_c48 = (bool)(**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    }
    else {
      local_c48 = true;
    }
    local_838.Object = param_3->Object;
    local_838.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_838.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_838,&local_308);
    TShaderMapRef<FRGBConvertPS>::TShaderMapRef<FRGBConvertPS>
              ((TShaderMapRef<FRGBConvertPS> *)&local_b10,this_00);
    local_668._16_8_ =
         TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_b10,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_b10,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._24_8_ = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    FRGBConvertPS::SetParameters
              (local_b10.ShaderContent,pFVar25,(FRHITexture *)(local_b88 + 0x18),
               (TIntPoint<int> *)&local_c40._s_0,local_c48,&local_308,EVar8);
    pFVar27 = this_03;
    param_1 = (FRHICommandListImmediate *)local_c20;
    break;
  case 5:
    pFVar23 = (FShaderType *)FBMPConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_7e8,pFVar23,0);
    if (local_7e8.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_688);
      ::FName::ToString((FName *)FVar24,&local_6f8);
      FBMPConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FBMPConvertPS::GetStaticType();
    local_a48.ShaderContent = (FBMPConvertPS *)local_7e8.ShaderContent;
    local_a48.ShaderMap = local_7e8.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_a48,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FBMPConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_a48,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._40_8_ = param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    FBMPConvertPS::SetParameters
              ((FBMPConvertPS *)local_7e8.ShaderContent,pFVar25,(FRHITexture *)(local_b88 + 0x28),
               (TIntPoint<int> *)&local_c40._s_0,false);
    break;
  case 6:
  case 7:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_548);
    local_9b8.Object = param_3->Object;
    local_9b8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_9b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_9b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_9b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_9b8,&local_588);
    lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (*(char *)(lVar16 + 0x33) == 'C') {
      pFVar23 = (FShaderType *)FNV12ConvertPS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_9a8,pFVar23,0);
      if ((FRHITexture *)local_9a8.ShaderContent == (FRHITexture *)0x0) {
        FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7d8);
        ::FName::ToString((FName *)FVar24,&local_778);
        FNV12ConvertPS::GetStaticType();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_778.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNV12ConvertPS::GetStaticType();
      local_978.ShaderContent = (FNV12ConvertPS *)local_9a8.ShaderContent;
      local_978.ShaderMap = local_9a8.ShaderMap;
      local_668._16_8_ =
           TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_978,true);
      SetGraphicsPipelineState
                ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
                 CheckApply,true);
      lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
      iVar13 = *(int *)(lVar16 + 0x28);
      lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
      local_998._8_8_ = (FRHITexture *)0x0;
      local_998._0_8_ = 2;
      local_be8._s_0.X = *(int *)(lVar16 + 0x24);
      local_be8._s_0.Y = iVar13;
      pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)local_998,param_2);
      pFVar20->field_0x1 = 3;
      TVar17 = FRHICommandListBase::CreateShaderResourceView
                         ((FRHICommandListBase *)param_1,(FRHITexture *)(local_b88 + 0x40),
                          (FInitializer *)param_2);
      if ((FRHIShaderResourceView *)local_7d0 != TVar17.Reference) {
        this_02 = *(FRHIResource **)TVar17.Reference;
        *(undefined8 *)TVar17.Reference = 0;
      }
      if ((FRHIResource *)local_b88._64_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b88._64_8_);
      }
      local_988._8_8_ = 0;
      local_988._0_8_ = 2;
      pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture(&local_988,param_2)
      ;
      pFVar20->field_0x1 = 0x28;
      TVar17 = FRHICommandListBase::CreateShaderResourceView
                         ((FRHICommandListBase *)param_1,(FRHITexture *)local_b88,
                          (FInitializer *)param_2);
      if ((FRHIShaderResourceView *)(local_7d0 + 8) != TVar17.Reference) {
        this_03 = *(FRHIResource **)TVar17.Reference;
        *(undefined8 *)TVar17.Reference = 0;
      }
      if ((FRHIResource *)local_b88._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b88._0_8_);
      }
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
      pFVar19 = (FRHITexture *)
                TShaderRefBase<FNV12ConvertPS,FShaderMapPointerTable>::GetPixelShader
                          (&local_978,true);
      pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      bVar6 = local_c28 == 7;
      local_b40 = this_03;
      if (this_03 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_03);
      }
      local_ae0 = this_02;
      if (this_02 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_02);
      }
      FNV12ConvertPS::SetParameters
                ((FNV12ConvertPS *)local_9a8.ShaderContent,pFVar25,(TIntPoint<int> *)&local_be8._s_0
                 ,(FRHIShaderResourceView *)&local_ae0,(FRHIShaderResourceView *)&local_b40,
                 (TIntPoint<int> *)&local_c40._s_0,&local_548,EVar9,&local_588,bVar6,EVar8);
      pFVar27 = this_03;
    }
    else {
      pFVar23 = (FShaderType *)FNV12ConvertAsBytesPS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_968,pFVar23,0);
      if ((FRHIVertexShader *)local_968.ShaderContent == (FRHIVertexShader *)0x0) {
        FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7c0);
        ::FName::ToString((FName *)FVar24,&local_768);
        FNV12ConvertAsBytesPS::GetStaticType();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_768.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNV12ConvertAsBytesPS::GetStaticType();
      local_958.ShaderContent = (FNV12ConvertAsBytesPS *)local_968.ShaderContent;
      local_958.ShaderMap = local_968.ShaderMap;
      local_668._16_8_ =
           TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable>::GetPixelShader
                     (&local_958,true);
      SetGraphicsPipelineState
                ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
                 CheckApply,true);
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
      pFVar19 = (FRHITexture *)
                TShaderRefBase<FNV12ConvertAsBytesPS,FShaderMapPointerTable>::GetPixelShader
                          (&local_958,true);
      pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      local_ba8 = param_2;
      FRHIResource::AddRef((FRHIResource *)param_2);
      FNV12ConvertAsBytesPS::SetParameters
                ((FNV12ConvertAsBytesPS *)local_968.ShaderContent,pFVar25,(FRHITexture *)&local_ba8,
                 (TIntPoint<int> *)&local_c40._s_0,&local_548,EVar9,&local_588,local_c28 == 7,EVar8)
      ;
      this_02 = this_01;
      param_1 = (FRHICommandListImmediate *)local_c20;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x10:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_448);
    local_8d8.Object = param_3->Object;
    local_8d8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_8d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_8d8,&local_488);
    pFVar23 = (FShaderType *)FYUVv216ConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_8c8,pFVar23,0);
    if (local_8c8.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7a8);
      ::FName::ToString((FName *)FVar24,&local_738);
      FYUVv216ConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FYUVv216ConvertPS::GetStaticType();
    local_8b8.ShaderContent = (FYUVv216ConvertPS *)local_8c8.ShaderContent;
    local_8b8.ShaderMap = local_8c8.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_8b8,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    uVar10 = local_c28;
    local_c38 = local_c28 == 8;
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    local_c37 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    local_c36 = uVar10 == 0xb;
    lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    cVar7 = *(char *)(lVar16 + 0x33);
    if ((0x10 < uVar10) || (local_c48 = false, (0x10a00U >> (uVar10 & 0x1f) & 1) == 0)) {
      local_c48 = true;
    }
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FYUVv216ConvertPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_8b8,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_c18._16_8_ = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    FYUVv216ConvertPS::SetParameters
              ((FYUVv216ConvertPS *)local_8c8.ShaderContent,pFVar25,
               (FRHITexture *)(local_c18 + 0x10),(TIntPoint<int> *)&local_c40._s_0,&local_448,EVar9,
               &local_488,local_c48,cVar7 == '\x02',local_c36,local_c37,local_c38);
    this_02 = this_01;
    param_1 = (FRHICommandListImmediate *)local_c20;
    break;
  case 0xe:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_3c8);
    local_8a8.Object = param_3->Object;
    local_8a8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_8a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_8a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_8a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_8a8,&local_408);
    pFVar23 = (FShaderType *)FYUVv210ConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_898,pFVar23,0);
    if (local_898.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7a0);
      ::FName::ToString((FName *)FVar24,&local_728);
      FYUVv210ConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FYUVv210ConvertPS::GetStaticType();
    local_888.ShaderContent = (FYUVv210ConvertPS *)local_898.ShaderContent;
    local_888.ShaderMap = local_898.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_888,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    local_c18._16_8_ =
         TShaderRefBase<FYUVv210ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_888,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._8_8_ = param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    FYUVv210ConvertPS::SetParameters
              ((FYUVv210ConvertPS *)local_898.ShaderContent,pFVar25,(FRHITexture *)(local_b88 + 8),
               (TIntPoint<int> *)&local_c40._s_0,&local_3c8,EVar9,&local_408,true,EVar8);
    pFVar19 = (FRHITexture *)local_c18._16_8_;
    pFVar27 = this_03;
    break;
  case 0x13:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_4c8);
    local_948.Object = param_3->Object;
    local_948.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if ((FRHIWorkGraphShader *)local_948.SharedReferenceCount.ReferenceController !=
        (FRHIWorkGraphShader *)0x0) {
      LOCK();
      *(atomic<int> *)
       &((FRHIWorkGraphShader *)local_948.SharedReferenceCount.ReferenceController)->field_0x8 =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((FRHIWorkGraphShader *)local_948.SharedReferenceCount.ReferenceController)->
                   field_0x8 + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_948,&local_508);
    FRHITexture::GetSizeXY(param_2);
    lVar16 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (*(char *)(lVar16 + 0x33) == 'V') {
      pFVar23 = (FShaderType *)FP010ConvertPS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_938,pFVar23,0);
      if ((FRHIComputeShader *)local_938.ShaderContent == (FRHIComputeShader *)0x0) {
        FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7b8);
        ::FName::ToString((FName *)FVar24,&local_758);
        FP010ConvertPS::GetStaticType();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_758.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FP010ConvertPS::GetStaticType();
      local_908.ShaderContent = (FP010ConvertPS *)local_938.ShaderContent;
      local_908.ShaderMap = local_938.ShaderMap;
      local_668._16_8_ =
           TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_908,true);
      SetGraphicsPipelineState
                ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
                 CheckApply,true);
      pFStack_920 = (FRHIBreadcrumbNode *)0x0;
      local_928 = (FRHICommandListScopedFence *)&DAT_00000002;
      pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)&local_928,param_2);
      pFVar20->field_0x1 = 4;
      FRHICommandListBase::CreateShaderResourceView
                ((FRHICommandListBase *)param_1,(FRHITexture *)(local_be0 + 8),
                 (FInitializer *)param_2);
      uStack_910._0_1_ = false;
      uStack_910._1_7_ = 0;
      local_918 = (FRHIDrawStatsCategory *)&DAT_00000002;
      pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
                          ((FInitializer *)&local_918,param_2);
      pFVar20->field_0x1 = 0xe;
      FRHICommandListBase::CreateShaderResourceView
                ((FRHICommandListBase *)param_1,(FRHITexture *)local_be0,(FInitializer *)param_2);
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
      pFVar21 = TShaderRefBase<FP010ConvertPS,FShaderMapPointerTable>::GetPixelShader
                          (&local_908,true);
      pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
      local_ba0.Data = (FScriptContainerElement *)local_be0._0_8_;
      if ((IRHICommandContext *)local_be0._0_8_ != (IRHICommandContext *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_be0._0_8_);
      }
      local_b98 = (IRHIComputeContext *)local_be0._8_8_;
      if ((IRHIComputeContext *)local_be0._8_8_ != (IRHIComputeContext *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_be0._8_8_);
      }
      FP010ConvertPS::SetParameters
                ((FP010ConvertPS *)local_938.ShaderContent,pFVar25,&local_bd0,
                 (FRHIShaderResourceView *)&local_b98,(FRHIShaderResourceView *)&local_ba0,
                 (TIntPoint<int> *)&local_c40._s_0,&local_4c8,&local_508,EVar9,EVar8);
      FRHICommandList::SetBatchedShaderParameters
                ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar21,pFVar25);
      if ((IRHICommandContext *)local_be0._0_8_ != (IRHICommandContext *)0x0) {
        FRHIResource::Release((FRHIResource *)local_be0._0_8_);
      }
      this_01 = this_02;
      if ((IRHIComputeContext *)local_be0._8_8_ != (IRHIComputeContext *)0x0) {
        FRHIResource::Release((FRHIResource *)local_be0._8_8_);
        this_03 = pFVar27;
      }
      goto LAB_146c23fcf;
    }
    pFVar23 = (FShaderType *)FP010ConvertAsUINT16sPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_8f8,pFVar23,0);
    if (local_8f8.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_7b0);
      ::FName::ToString((FName *)FVar24,&local_748);
      FP010ConvertAsUINT16sPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FP010ConvertAsUINT16sPS::GetStaticType();
    local_8e8.ShaderContent = (FP010ConvertAsUINT16sPS *)local_8f8.ShaderContent;
    local_8e8.ShaderMap = local_8f8.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable>::GetPixelShader
                   (&local_8e8,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FP010ConvertAsUINT16sPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_8e8,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters(local_c20);
    local_b90 = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    FP010ConvertAsUINT16sPS::SetParameters
              ((FP010ConvertAsUINT16sPS *)local_8f8.ShaderContent,pFVar25,&local_bd0,
               (FRHITexture *)&local_b90,(TIntPoint<int> *)&local_c40._s_0,&local_4c8,&local_508,
               EVar9,EVar8);
    param_1 = (FRHICommandListImmediate *)local_c20;
    break;
  case 0x14:
  case 0x15:
    pbVar18 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((*pbVar18 & 0x10) == 0) {
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      local_c48 = (bool)(**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    }
    else {
      local_c48 = true;
    }
    local_a38.Object = param_3->Object;
    local_a38.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_a38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_a38,&local_288);
    TShaderMapRef<FRGBConvertPS>::TShaderMapRef<FRGBConvertPS>
              ((TShaderMapRef<FRGBConvertPS> *)&local_b00,this_00);
    local_668._16_8_ =
         TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_b00,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_b00,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._48_8_ = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    FRGBConvertPS::SetParameters
              (local_b00.ShaderContent,pFVar25,(FRHITexture *)(local_b88 + 0x30),
               (TIntPoint<int> *)&local_c40._s_0,local_c48,&local_288,EVar8);
    pFVar27 = this_03;
    param_1 = (FRHICommandListImmediate *)local_c20;
    break;
  case 0x16:
    TShaderMapRef<FRGBConvertPS>::TShaderMapRef<FRGBConvertPS>
              ((TShaderMapRef<FRGBConvertPS> *)&local_af0,this_00);
    local_668._16_8_ =
         TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_af0,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FRGBConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_af0,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._56_8_ = param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    FRGBConvertPS::SetParameters
              (local_af0.ShaderContent,pFVar25,(FRHITexture *)(local_b88 + 0x38),
               (TIntPoint<int> *)&local_c40._s_0,Linear,&SplatMtx,None);
    pFVar27 = this_03;
    break;
  case 0x17:
    pbVar18 = (byte *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((*pbVar18 & 0x10) == 0) {
      pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
      local_c48 = (bool)(**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    }
    else {
      local_c48 = true;
    }
    local_a28.Object = param_3->Object;
    local_a28.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if ((FRHITexture *)local_a28.SharedReferenceCount.ReferenceController != (FRHITexture *)0x0) {
      LOCK();
      *(atomic<int> *)
       &((FRHITexture *)local_a28.SharedReferenceCount.ReferenceController)->_padding_ =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((FRHITexture *)local_a28.SharedReferenceCount.ReferenceController)->_padding_ +
           1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_a28,&local_248);
    pFVar23 = (FShaderType *)FYCoCgConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_a18,pFVar23,0);
    if ((FRHITexture *)local_a18.ShaderContent == (FRHITexture *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_698);
      ::FName::ToString((FName *)FVar24,&local_6e8);
      FYCoCgConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FYCoCgConvertPS::GetStaticType();
    local_a08.ShaderContent = (FYCoCgConvertPS *)local_a18.ShaderContent;
    local_a08.ShaderMap = local_a18.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_a08,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pFVar19 = (FRHITexture *)
              TShaderRefBase<FYCoCgConvertPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_a08,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_c18._8_8_ = param_2;
    FRHIResource::AddRef((FRHIResource *)param_2);
    FYCoCgConvertPS::SetParameters
              ((FYCoCgConvertPS *)local_a18.ShaderContent,pFVar25,(FRHITexture *)(local_c18 + 8),
               (TIntPoint<int> *)&local_c40._s_0,local_c48,&local_248,EVar8);
    pFVar27 = this_03;
    param_1 = (FRHICommandListImmediate *)local_c20;
    break;
  default:
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    if (local_188.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_188.ShadingRateTexture.Reference);
    }
    if ((FRHIBuffer *)local_c18._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c18._0_8_);
    }
    if (local_b20 == false) {
      return;
    }
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_b30);
    return;
  case 0x1c:
    local_828.Object = param_3->Object;
    local_828.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_828.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_828,&local_2c8);
    pFVar23 = (FShaderType *)FARGB16BigConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_818,pFVar23,0);
    if (local_818.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_680);
      ::FName::ToString((FName *)FVar24,&local_708);
      FARGB16BigConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_708.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FARGB16BigConvertPS::GetStaticType();
    local_7f8.ShaderContent = (FARGB16BigConvertPS *)local_818.ShaderContent;
    local_7f8.ShaderMap = local_818.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_7f8,true)
    ;
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    local_808._8_8_ = 0;
    local_808._0_8_ = 2;
    pFVar20 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture(&local_808,param_2);
    pFVar20->field_0x1 = 0x22;
    FRHICommandListBase::CreateShaderResourceView
              ((FRHICommandListBase *)param_1,(FRHITexture *)(local_bc8 + 8),(FInitializer *)param_2
              );
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    pFVar21 = TShaderRefBase<FARGB16BigConvertPS,FShaderMapPointerTable>::GetPixelShader
                        (&local_7f8,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_b88._32_8_ = local_bc8._8_8_;
    if ((FRHIResource *)local_bc8._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_bc8._8_8_);
    }
    FARGB16BigConvertPS::SetParameters
              ((FARGB16BigConvertPS *)local_818.ShaderContent,pFVar25,
               (FRHIShaderResourceView *)(local_b88 + 0x20),(TIntPoint<int> *)&local_c40._s_0,EVar9,
               &local_2c8,EVar8);
    FRHICommandList::SetBatchedShaderParameters
              ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar21,pFVar25);
    this_01 = this_02;
    if ((FRHIResource *)local_bc8._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_bc8._8_8_);
    }
    goto LAB_146c23fcf;
  case 0x1d:
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    (**(code **)((longlong)*pIVar22 + 0xc0))(pIVar22,&local_1c8);
    local_9f8.Object = param_3->Object;
    local_9f8.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if ((FRHITexture *)local_9f8.SharedReferenceCount.ReferenceController != (FRHITexture *)0x0) {
      LOCK();
      *(atomic<int> *)
       &((FRHITexture *)local_9f8.SharedReferenceCount.ReferenceController)->_padding_ =
           (atomic<int>)
           ((int)*(atomic<int> *)
                  &((FRHITexture *)local_9f8.SharedReferenceCount.ReferenceController)->_padding_ +
           1);
      UNLOCK();
    }
    GetColorSpaceConversionMatrixForSample(local_c30,&local_9f8,&local_208);
    pFVar23 = (FShaderType *)FVYUConvertPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_9e8,pFVar23,0);
    if (local_9e8.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_690);
      ::FName::ToString((FName *)FVar24,&local_6d8);
      FVYUConvertPS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVYUConvertPS::GetStaticType();
    local_bb8.ShaderContent = (FVYUConvertPS *)local_9e8.ShaderContent;
    local_bb8.ShaderMap = local_9e8.ShaderMap;
    local_668._16_8_ =
         TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_bb8,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_668,0,
               CheckApply,true);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar8 = (**(code **)((longlong)*pIVar22 + 0x128))(pIVar22);
    pIVar22 = TSharedPtr<IMediaTextureSample,1>::operator->(param_3);
    EVar9 = (**(code **)((longlong)*pIVar22 + 0x100))(pIVar22);
    local_c18._8_8_ =
         TShaderRefBase<FVYUConvertPS,FShaderMapPointerTable>::GetPixelShader(&local_bb8,true);
    pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_6c8._s_0.R = (float)0;
    local_6c8._s_0.G = (float)0;
    local_6c8._s_0.B = (float)0;
    local_6c8._s_0.A = (float)0;
    local_6b8._s_0.R = (float)___xmm_3f80000000000000000000003f800000;
    local_6b8._s_0.G = (float)_UNK_15076b184;
    local_6b8._s_0.B = (float)_UNK_15076b188;
    local_6b8._s_0.A = (float)_UNK_15076b18c;
    local_b18 = param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    FVYUConvertPS::SetParameters
              ((FVYUConvertPS *)local_9e8.ShaderContent,pFVar25,(FRHITexture *)&local_b18,
               (TIntPoint<int> *)&local_c40._s_0,&local_1c8,EVar9,&local_208,EVar8,
               (FLinearColor *)&local_6b8._s_0,(FLinearColor *)&local_6c8._s_0);
    pFVar19 = (FRHITexture *)local_c18._8_8_;
    pFVar27 = this_03;
  }
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar19,pFVar25);
  this_01 = this_02;
  this_03 = pFVar27;
LAB_146c23fcf:
  FRHICommandList::SetStreamSource((FRHICommandList *)param_1,0,(FRHIBuffer *)local_c18._0_8_,0);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)local_c40._s_0.X,(float)local_c40._s_0.Y,
             fVar4);
  FRHICommandList::DrawPrimitive((FRHICommandList *)param_1,0,2,1);
  if (this_03 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_03);
  }
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
  local_bb8.ShaderMap = (FShaderMapBase *)CONCAT44(local_bb8.ShaderMap._4_4_,1);
  local_a78._4_2_ = 0xffff;
  local_a78._8_8_ = local_b38;
  local_bb8.ShaderContent = (FVYUConvertPS *)local_a78;
  local_a78._0_4_ = 0xffffffff;
  local_6a8._8_8_ = local_bb8.ShaderMap;
  local_a68._0_1_ = 1;
  local_a68._4_4_ = 0x1000;
  local_a60 = 0x60;
  local_a5c = 0;
  local_a50 = 0;
  local_6a8._0_8_ = local_bb8.ShaderContent;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)param_1,
             (TArrayView<FRHITransitionInfo_const_,int> *)local_6a8,None);
  if (local_188.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_188.ShadingRateTexture.Reference);
  }
  if ((FRHIBuffer *)local_c18._0_8_ != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c18._0_8_);
  }
  if (local_b20 != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_b30);
  }
  local_c30->Cleared = false;
  return;
}

// CopyFromExternalTexture @ 146c242a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMediaTextureResource::CopyFromExternalTexture
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,FGuid *param_3)

{
  byte bVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  Type TVar7;
  FExternalTextureRegistry *pFVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar11;
  FName this_01;
  FRHIPixelShader *pFVar12;
  FRHIBatchedShaderParameters *pFVar13;
  float fVar14;
  undefined1 auStackY_4f8 [32];
  int local_4b8;
  int local_4b4;
  TRefCountPtr<FRHISamplerState> local_4b0;
  TRefCountPtr<FRHITexture> local_4a8;
  undefined1 local_4a0 [16];
  TReferenceControllerBase<1> *pTStack_490;
  FMemMark *local_488;
  FRHITexture *local_480;
  FRHIBreadcrumbNode *local_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 local_468 [48];
  FRHITransitionInfo local_438;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_408;
  char *local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *local_3e8;
  wchar_t *pwStack_3e0;
  FRHIBreadcrumbScope local_3d8;
  char local_3c8;
  undefined1 local_3b8 [16];
  TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable> local_3a8;
  FString local_398;
  FLinearColor local_388;
  FLinearColor local_378;
  undefined1 local_368 [16];
  undefined1 local_358 [208];
  uint local_288;
  ulong64 local_280;
  FRHIRenderPassInfo local_278;
  FRHIRenderPassInfo local_178;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_4a8.Reference = (FRHITexture *)0x0;
  local_4b0.Reference = (FRHISamplerState *)0x0;
  pFVar8 = FExternalTextureRegistry::Get();
  bVar4 = FExternalTextureRegistry::GetExternalTexture
                    (pFVar8,(FMaterialRenderProxy *)0x0,param_3,&local_4a8,&local_4b0);
  if (bVar4) {
    pFVar8 = FExternalTextureRegistry::Get();
    FExternalTextureRegistry::GetExternalTextureCoordinateOffset(pFVar8,param_3,&local_388);
    pFVar8 = FExternalTextureRegistry::Get();
    FExternalTextureRegistry::GetExternalTextureCoordinateScaleRotation(pFVar8,param_3,&local_378);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_3f0 = 0x603;
      local_3f8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
      ;
      ::Desc._padding_ = CONCAT44(uStack_3ec,0x603);
      local_3e8 = &GPUStat_MediaTextureResource;
      pwStack_3e0 = L"FMediaTextureResource_ConvertExternalTexture";
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_ = (longlong)&GPUStat_MediaTextureResource;
      ::Desc._padding_ = (longlong)u_FMediaTextureRe;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FMediaTextureResource::CopyFromExternalTexture'::__l11::<lambda_1>::operator()<>'::
             __l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
    pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar10->Allocator = pFVar9;
    pFVar10->TraceCpuSpecId = 0;
    pFVar10->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar10->ID = uVar5;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar10[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)::Desc._padding_,(char *)::Desc._padding_,
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar6;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_3d8,(FRHIComputeCommandList *)param_1,pFVar10);
    local_358._0_8_ = (FRHIVertexDeclaration *)0x0;
    local_358._8_8_ = (FRHIVertexShader *)0x0;
    local_358._16_8_ = (FRHIPixelShader *)0x0;
    local_358._24_8_ = (FRHIMeshShader *)0x0;
    local_358._32_8_ = (FRHIAmplificationShader *)0x0;
    local_358._40_8_ = (FRHIGeometryShader *)0x0;
    local_358._48_8_ = (FRHIWorkGraphShader *)0x0;
    local_358._56_8_ = (FRHIBlendState *)0x0;
    local_358._64_8_ = (FRHIRasterizerState *)0x0;
    local_358._72_8_ = (FRHIBreadcrumbAllocator *)0x0;
    local_358._80_8_ = (FRHISamplerState *)0x0;
    local_358._88_8_ = (FActivatePipelineCommand *)0x0;
    local_358._112_8_ = None;
    local_358._120_8_ = None;
    local_358._128_8_ = (FRHITexture *)0x0;
    local_358._136_8_ = None;
    local_358._144_8_ = None;
    local_358._152_8_ = (FRHITexture *)0x0;
    local_358._160_8_ = None;
    local_358._168_8_ = None;
    local_3c8 = '\x01';
    local_358._100_4_ = 0;
    local_358[0x68] = '\0';
    local_358[0x69] = '\0';
    local_358[0x6a] = '\0';
    local_358[0x6b] = '\0';
    local_358[0x6c] = '\0';
    local_358[0x6d] = '\0';
    local_358[0x6e] = '\0';
    local_358[0x6f] = '\0';
    local_358[0xb0] = PF_Unknown;
    local_358._184_8_ = None;
    local_358[0xc0] = ENoAction;
    local_358[0xc1] = ENoAction;
    local_358._194_6_ = 0;
    local_358._200_8_ = (FRHITexture *)0x0;
    local_288 = 1;
    local_280 = 0;
    FRHIRenderPassInfo::FRHIRenderPassInfo
              (&local_178,(FRHITexture *)this->_padding_,DontLoad_Store,(FRHITexture *)0x0,'\0',-1);
    FRHICommandList::BeginRenderPass
              ((FRHICommandList *)param_1,&local_178,L"ConvertMedia_ExternalTexture");
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*param_2->Object + 0x30))(param_2->Object,&local_4b8);
    FRHICommandList::ApplyCachedRenderTargets
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_358);
    fVar3 = __real_3f800000;
    fVar14 = 0.0;
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)local_4b8,(float)local_4b4,
               __real_3f800000);
    local_358._72_8_ =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_358._64_8_ =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_358._56_8_ =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    local_358._96_4_ = PT_TriangleStrip;
    TVar7 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar7 = GMaxRHIFeatureLevel;
    }
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar7]);
    TShaderMapRef<FMediaShadersVS>::TShaderMapRef<FMediaShadersVS>
              ((TShaderMapRef<FMediaShadersVS> *)&local_3a8,this_00);
    local_358._0_8_ = GMediaVertexDeclaration._32_8_;
    local_358._8_8_ =
         TShaderRefBase<FMediaShadersVS,FShaderMapPointerTable>::GetVertexShader(&local_3a8,true);
    pFVar11 = (FShaderType *)FReadTextureExternalPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_408,pFVar11,0);
    if ((FRHIParallelRenderPassInfo *)local_408.ShaderContent == (FRHIParallelRenderPassInfo *)0x0)
    {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_478);
      ::FName::ToString((FName *)this_01,&local_398);
      FReadTextureExternalPS::GetStaticType();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FReadTextureExternalPS::GetStaticType();
    local_4a0._8_8_ = local_408.ShaderContent;
    pTStack_490 = (TReferenceControllerBase<1> *)local_408.ShaderMap;
    local_358._16_8_ =
         TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable>::GetPixelShader
                   ((TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable> *)(local_4a0 + 8)
                    ,true);
    SetGraphicsPipelineState
              ((FRHICommandList *)param_1,(FGraphicsPipelineStateInitializer *)local_358,0,
               CheckApply,true);
    pFVar12 = TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable>::GetPixelShader
                        ((TShaderRefBase<FReadTextureExternalPS,FShaderMapPointerTable> *)
                         (local_4a0 + 8),true);
    pFVar13 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    local_488 = (FMemMark *)local_4b0.Reference;
    if ((FRHIResource *)local_4b0.Reference != (FRHIResource *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_4b0.Reference);
    }
    local_480 = local_4a8.Reference;
    if (local_4a8.Reference != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_4a8.Reference);
    }
    FReadTextureExternalPS::SetParameters
              ((FReadTextureExternalPS *)local_408.ShaderContent,pFVar13,(FRHITexture *)&local_480,
               (FRHISamplerState *)&local_488,&local_378,&local_388);
    FRHICommandList::SetBatchedShaderParameters
              ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar12,pFVar13);
    CreateTempMediaVertexBuffer((FRHICommandListBase *)local_4a0,fVar14,0.0,fVar3,0.0);
    FRHICommandList::SetStreamSource((FRHICommandList *)param_1,0,(FRHIBuffer *)local_4a0._0_8_,0);
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)local_4b8,(float)local_4b4,fVar3);
    FRHICommandList::DrawPrimitive((FRHICommandList *)param_1,0,2,1);
    if ((FRHIBuffer *)local_4a0._0_8_ != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_4a0._0_8_);
    }
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    pTStack_490 = (TReferenceControllerBase<1> *)CONCAT44(pTStack_490._4_4_,1);
    local_438._padding_._4_2_ = 0xffff;
    local_438.field1_0x8 = (FRHITransitionInfo_u_8)this->_padding_;
    local_4a0._8_8_ = &local_438;
    local_438._padding_._0_1_ = true;
    local_438._padding_._1_1_ = true;
    local_438._padding_._2_1_ = ~None;
    local_438._padding_._3_1_ = ~None;
    local_368._8_8_ = pTStack_490;
    local_438.Type = Texture;
    local_438.AccessBefore = None;
    local_438.AccessAfter = SRVMask;
    local_438.Flags = None;
    local_438.CommitInfo.bIsSet = false;
    local_368._0_8_ = local_4a0._8_8_;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_368,None);
    if (local_178.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_178.ShadingRateTexture.Reference);
    }
    if (local_3c8 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_3d8);
    }
  }
  else {
    FRHIRenderPassInfo::FRHIRenderPassInfo
              (&local_278,(FRHITexture *)this->_padding_,Clear_Store,(FRHITexture *)0x0,'\0',-1);
    FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_278,L"ClearTexture");
    FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
    uStack_470 = 1;
    local_468._4_2_ = 0xffff;
    local_468._8_8_ = this->_padding_;
    local_478 = (FRHIBreadcrumbNode *)local_468;
    local_468._0_4_ = 0xffffffff;
    local_3b8._8_8_ = CONCAT44(uStack_46c,1);
    local_468[0x10] = Texture;
    local_468._20_4_ = None;
    local_468._24_4_ = SRVMask;
    local_468[0x1c] = None;
    local_468[0x28] = false;
    local_3b8._0_8_ = local_478;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_3b8,None);
    if (local_278.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_278.ShadingRateTexture.Reference);
    }
  }
  if ((FRHIResource *)local_4b0.Reference != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_4b0.Reference);
  }
  if (local_4a8.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_4a8.Reference);
  }
  return;
}

// CopySample @ 146c24a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMediaTextureResource::CopySample
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2,FLinearColor *param_3,uchar param_4,
          FGuid *param_5)

{
  IPooledRenderTarget *pIVar1;
  code *pcVar2;
  FLinearColor *pFVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  EPixelFormat EVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FRHITexture *pFVar11;
  TIntPoint<int> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_2f8 [32];
  byte local_2b8;
  byte local_2b7;
  byte local_2b6;
  FLinearColor *local_2b0;
  FRHITransitionInfo *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FGuid *local_298;
  int local_290;
  int local_28c;
  FUpdateTextureRegion2D local_288;
  FRHICommandListImmediate *local_270;
  TIntVector3<int>_u_0 local_268;
  undefined8 local_25c;
  int local_254;
  undefined8 local_250;
  int local_248;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  undefined4 local_230;
  FRHITransitionInfo local_228;
  FRHITransitionInfo local_1f8;
  FRHITransitionInfo local_1c8;
  undefined1 local_198 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_188;
  TArrayView<FRHITransitionInfo_const_,int> local_178;
  TArrayView<FRHITransitionInfo_const_,int> local_168;
  FRHIRenderPassInfo local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_298 = param_5;
  local_2b0 = param_3;
  local_270 = param_1;
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar11 = (FRHITexture *)(**(code **)((longlong)*param_2->Object + 0x48))();
  if ((param_2->Object == (IMediaTextureSample *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = (**(code **)((longlong)*param_2->Object + 0x10))();
  local_2b6 = bVar5;
  if (pFVar11 == (FRHITexture *)0x0) {
    if (1 < bVar5) {
      param_4 = bVar5;
    }
    bVar4 = MediaTextureResourceHelpers::RequiresUAVTexture(param_2,param_4);
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = (bool)(**(code **)((longlong)*param_2->Object + 0x80))();
    EVar7 = MediaTextureResourceHelpers::GetPixelFormat(param_2);
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar12 = (TIntPoint<int> *)
              (**(code **)((longlong)*param_2->Object + 8))(param_2->Object,&local_2a8);
    CreateIntermediateRenderTarget(this,param_1,pTVar12,EVar7,bVar6,local_2b0,param_4,bVar4);
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = (**(code **)*param_2->Object)();
    if (lVar13 == 0) {
      if ((bVar5 != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SampleNumMips == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                             ,0x5bb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GRHIGlobals.SupportsImageExternal != false) {
        CopyFromExternalTexture(this,param_1,param_2,local_298);
        this->Cleared = false;
        return;
      }
      local_228.field1_0x8 = (FRHITransitionInfo_u_8)this->_padding_;
      local_2a8 = &local_228;
      uStack_2a0 = 1;
      local_188._12_4_ = uStack_29c;
      local_188.ArrayNum = 1;
      local_228._padding_._0_4_ = 0xffffffff;
      local_228._padding_._4_2_ = 0xffff;
      local_228.Type = Texture;
      local_228.AccessBefore = None;
      local_228.AccessAfter = RTV;
      local_228.Flags = None;
      local_228.CommitInfo.bIsSet = false;
      local_188.DataPtr = local_2a8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_188,None);
      FRHIRenderPassInfo::FRHIRenderPassInfo
                (&local_158,(FRHITexture *)this->_padding_,Clear_Store,(FRHITexture *)0x0,'\0',-1);
      FRHICommandList::BeginRenderPass((FRHICommandList *)param_1,&local_158,L"ClearTexture");
      FRHICommandList::EndRenderPass((FRHICommandList *)param_1);
      local_1f8.field1_0x8 = (FRHITransitionInfo_u_8)this->_padding_;
      uStack_2a0 = 1;
      local_178._12_4_ = uStack_29c;
      local_178.ArrayNum = 1;
      local_1f8._padding_._0_4_ = 0xffffffff;
      local_1f8._padding_._4_2_ = 0xffff;
      local_1f8.Type = Texture;
      local_1f8.AccessBefore = RTV;
      local_1f8.AccessAfter = SRVMask;
      local_1f8.Flags = None;
      local_1f8.CommitInfo.bIsSet = false;
      local_2a8 = &local_1f8;
      local_178.DataPtr = &local_1f8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_178,None);
      if (local_158.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_158.ShadingRateTexture.Reference);
      }
    }
    else {
      local_2b7 = param_4;
      if ((param_2->Object == (IMediaTextureSample *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar14 = (longlong *)(**(code **)((longlong)*param_2->Object + 0x50))();
      if ((plVar14 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,param_1,&this->_padding_,&local_2b7),
         cVar9 == '\0')) {
        if ((param_2->Object == (IMediaTextureSample *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)((longlong)*param_2->Object + 8))(param_2->Object,&local_290);
        if ((param_2->Object == (IMediaTextureSample *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_2b0 = (FLinearColor *)(**(code **)*param_2->Object)();
        EVar7 = MediaTextureResourceHelpers::GetPixelFormat(param_2);
        local_2b8 = 0;
        if (bVar5 != 0) {
          local_298 = (FGuid *)&GPixelFormats[EVar7].BlockSizeY;
          do {
            uVar15 = local_290 >> (local_2b8 & 0x1f);
            uVar16 = local_28c >> (local_2b8 & 0x1f);
            if ((param_2->Object == (IMediaTextureSample *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar10 = (**(code **)((longlong)*param_2->Object + 0x38))();
            pFVar3 = local_2b0;
            uVar10 = uVar10 >> (local_2b8 & 0x1f);
            local_288.DestX = 0;
            local_288.DestY = 0;
            local_288.SrcX = 0;
            local_288.SrcY = 0;
            local_288.Width = uVar15;
            local_288.Height = uVar16;
            FRHICommandListBase::UpdateTexture2D
                      ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                       (FRHITexture *)this->_padding_,(uint)local_2b8,&local_288,uVar10,
                       (uchar *)local_2b0);
            local_2b0 = (FLinearColor *)
                        ((longlong)&pFVar3->field0_0x0 +
                        (ulonglong)((((local_298->A - 1) + uVar16) / local_298->A) * uVar10));
            local_2b8 = local_2b8 + 1;
            param_1 = local_270;
          } while (local_2b8 < local_2b6);
        }
      }
      local_1c8.field1_0x8 = (FRHITransitionInfo_u_8)this->_padding_;
      local_2a8 = &local_1c8;
      uStack_2a0 = 1;
      local_168._12_4_ = uStack_29c;
      local_168.ArrayNum = 1;
      local_1c8._padding_._0_4_ = 0xffffffff;
      local_1c8._padding_._4_2_ = 0xffff;
      local_1c8.Type = Texture;
      local_1c8.AccessBefore = None;
      local_1c8.AccessAfter = SRVMask;
      local_1c8.Flags = None;
      local_1c8.CommitInfo.bIsSet = false;
      local_168.DataPtr = local_2a8;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_168,None);
    }
  }
  else if ((FRHITexture *)this->_padding_ == pFVar11) {
    if (1 < bVar5) {
      param_4 = bVar5;
    }
    bVar4 = MediaTextureResourceHelpers::RequiresUAVTexture(param_2,param_4);
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar6 = (bool)(**(code **)((longlong)*param_2->Object + 0x80))();
    EVar7 = MediaTextureResourceHelpers::GetPixelFormat(param_2);
    if ((param_2->Object == (IMediaTextureSample *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar12 = (TIntPoint<int> *)
              (**(code **)((longlong)*param_2->Object + 0x30))(param_2->Object,local_198);
    CreateIntermediateRenderTarget(this,param_1,pTVar12,EVar7,bVar6,local_2b0,param_4,bVar4);
    local_268._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_25c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_250 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_268._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_254 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_248 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_244 = 0;
    local_23c = 1;
    local_234 = 0;
    local_230 = 1;
    TransitionAndCopyTexture
              ((FRHICommandList *)param_1,pFVar11,(this->IntermediateTarget).Reference,
               (FRHICopyTextureInfo *)&local_268._s_0);
  }
  else {
    UpdateTextureReference(this,param_1,pFVar11);
    pIVar1 = (this->MipGenerationCache).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this->MipGenerationCache).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    pFVar11 = (this->IntermediateTarget).Reference;
    if (pFVar11 != (FRHITexture *)0x0) {
      (this->IntermediateTarget).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar11);
    }
  }
  this->Cleared = false;
  return;
}

// CreateIntermediateRenderTarget @ 146c255d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMediaTextureResource::CreateIntermediateRenderTarget
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,TIntPoint<int> *param_2,
          EPixelFormat param_3,bool param_4,FLinearColor *param_5,uchar param_6,bool param_7)

{
  int iVar1;
  FRHITexture *pFVar2;
  IPooledRenderTarget *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong *puVar8;
  TRefCountPtr<FRHITexture> TVar9;
  FName *pFVar10;
  ulonglong uVar11;
  TRefCountPtr<FRHITexture> *pTVar12;
  FRHICommandListBase *pFVar13;
  undefined1 auStack_1a8 [32];
  uchar local_188;
  EPixelFormat local_187;
  undefined1 local_180 [64];
  undefined4 local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  int local_12c;
  ERHIAccess local_128;
  TIntPoint<int>_u_0 local_124;
  undefined4 local_11c;
  uchar local_118;
  undefined2 local_117;
  EPixelFormat local_115;
  undefined2 local_114;
  void *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FName local_e0;
  longlong local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  FName local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uVar11 = (ulonglong)param_4 << 4;
  if ((param_7) && ((GPixelFormats[param_3].Capabilities & TypedUAVLoad) != None)) {
    uVar11 = uVar11 | 0x20000;
  }
  local_187 = param_3;
  local_180._32_8_ = param_2;
  local_180._48_8_ = param_1;
  local_188 = UE::MediaTexture::Private::ClampNumMips(param_6,param_2);
  bVar6 = IsBlockCompressedFormat(param_3);
  local_180._40_8_ = uVar11 | 1;
  if (bVar6) {
    local_180._40_8_ = uVar11;
  }
  if (((((this->CurrentClearColor).field0_0x0._s_0.R == (param_5->field0_0x0)._s_0.R) &&
       ((this->CurrentClearColor).field0_0x0._s_0.G == (param_5->field0_0x0)._s_0.G)) &&
      ((this->CurrentClearColor).field0_0x0._s_0.B == (param_5->field0_0x0)._s_0.B)) &&
     ((this->CurrentClearColor).field0_0x0._s_0.A == (param_5->field0_0x0)._s_0.A)) {
    pTVar12 = &this->IntermediateTarget;
    local_180._0_8_ = pTVar12->Reference;
    if ((FName)local_180._0_8_ != (FName)0x0) {
      lVar7 = (**(code **)(*(longlong *)local_180._0_8_ + 0x20))();
      iVar1 = *(int *)(lVar7 + 0x28);
      lVar7 = (**(code **)(*(longlong *)local_180._0_8_ + 0x20))();
      if (((*(int *)(lVar7 + 0x24) == *(int *)local_180._32_8_) &&
          (iVar1 == *(int *)(local_180._32_8_ + 4))) &&
         ((lVar7 = (**(code **)(pTVar12->Reference->_padding_ + 0x20))(),
          *(EPixelFormat *)(lVar7 + 0x33) == local_187 &&
          ((puVar8 = (ulonglong *)(**(code **)(pTVar12->Reference->_padding_ + 0x20))(),
           (local_180._40_8_ & *puVar8) == local_180._40_8_ &&
           (pFVar13 = (FRHICommandListBase *)local_180._48_8_, this->CurrentNumMips == local_188))))
         )) goto LAB_146c2576d;
    }
  }
  pTVar12 = &this->IntermediateTarget;
  pIVar3 = (this->MipGenerationCache).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->MipGenerationCache).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  local_13c = (param_5->field0_0x0)._s_0.R;
  local_138 = (param_5->field0_0x0)._s_0.G;
  local_12c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_134 = (param_5->field0_0x0)._s_0.B;
  local_f8 = L"MediaTextureResourceOutput";
  local_130 = (param_5->field0_0x0)._s_0.A;
  local_117 = 1;
  local_124._s_0 = *(TIntPoint<int>_u_0_s_0 *)local_180._32_8_;
  local_115 = local_187;
  local_118 = local_188;
  local_180._56_8_ = local_180._40_8_ | 8;
  local_fc = 1;
  local_140 = 1;
  local_128 = None;
  local_11c = 0x10001;
  local_114 = 0xff00;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f0 = 0x70;
  local_e8 = 0;
  FLazyName::Resolve(&::ClassName);
  local_e0.ComparisonIndex.Value = local_180._0_4_;
  local_e0.Number = local_180._4_4_;
  local_d8 = this->_padding_;
  FRHITextureDesc::FRHITextureDesc(&local_c8,(FRHITextureDesc *)(local_180 + 0x38));
  local_78 = local_f8;
  local_70 = (undefined4)local_f0;
  local_6c = local_f0._4_4_;
  local_68 = local_e8;
  local_60 = local_e0;
  local_58 = local_d8;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  pFVar13 = (FRHICommandListBase *)local_180._48_8_;
  TVar9 = FRHICommandListBase::CreateTexture
                    ((FRHICommandListBase *)local_180._48_8_,(FRHITextureCreateDesc *)local_180);
  if ((FRHITexture *)pTVar12 != TVar9.Reference) {
    pFVar2 = pTVar12->Reference;
    pTVar12->Reference = (FRHITexture *)(TVar9.Reference)->_padding_;
    (TVar9.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if ((FName)local_180._0_8_ != (FName)0x0) {
    FRHIResource::Release((FRHIResource *)local_180._0_8_);
  }
  pFVar2 = pTVar12->Reference;
  pFVar10 = ::FName::FName((FName *)local_180,L"MediaTextureResourceOutput");
  FRHITexture::SetName(pFVar2,*pFVar10);
  pTVar12->Reference->_padding_ = this->_padding_;
  uVar4 = *(undefined8 *)&param_5->field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  this->CurrentNumMips = local_188;
  *(undefined8 *)&(this->CurrentClearColor).field0_0x0 = uVar4;
  *(undefined8 *)((longlong)&(this->CurrentClearColor).field0_0x0 + 8) = uVar5;
  UpdateResourceSize(this);
  this->Cleared = false;
  this->bRecreateOutputTarget = true;
  if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
LAB_146c2576d:
  pFVar2 = (this->IntermediateTarget).Reference;
  if ((FRHITexture *)this->_padding_ != pFVar2) {
    UpdateTextureReference(this,(FRHICommandListImmediate *)pFVar13,pFVar2);
  }
  return;
}

// FlushPendingData @ 146c27930

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::FlushPendingData(FMediaTextureResource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPriorSamples *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FPriorSamples,1> *pTVar4;
  TSharedRef<FPriorSamples,1> local_18;
  
  lpCriticalSection = &this->PriorSamplesCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar4 = FPriorSamples::Create(&local_18);
    pFVar1 = (this->PriorSamples).Object;
    pTVar2 = (this->PriorSamples).SharedReferenceCount.ReferenceController;
    pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
    (this->PriorSamples).Object = pTVar4->Object;
    (this->PriorSamples).SharedReferenceCount.ReferenceController = pTVar3;
    pTVar4->Object = pFVar1;
    (pTVar4->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000146c27987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetColorSpaceConversionMatrixForSample @ 146c28210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMediaTextureResource::GetColorSpaceConversionMatrixForSample
          (FMediaTextureResource *this,TSharedPtr<IMediaTextureSample,1> *param_1,
          TMatrix<float> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  EChromaticAdaptationMethod EVar4;
  FColorSpace *pFVar5;
  longlong lVar6;
  FColorSpace *pFVar7;
  FColorSpaceTransform *pFVar8;
  float fVar9;
  undefined1 auStack_238 [32];
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  TMatrix<float> local_1d8;
  TMatrix<float> local_198;
  FColorSpaceTransform local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_238;
  pFVar5 = (this->OverrideColorSpace).Ptr;
  if (pFVar5 == (FColorSpace *)0x0) {
    pFVar5 = UE::Color::FColorSpace::GetWorking();
  }
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar6 = (**(code **)((longlong)*param_1->Object + 0x58))();
  if (lVar6 == 0) {
    if (param_1->Object == (IMediaTextureSample *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar7 = (FColorSpace *)(**(code **)((longlong)*param_1->Object + 200))();
    bVar3 = UE::Color::FColorSpace::Equals(pFVar7,pFVar5,__real_3e7ad7f29abcaf48);
    if (!bVar3) {
      if (param_1->Object == (IMediaTextureSample *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      EVar4 = (**(code **)((longlong)*param_1->Object + 0xf8))();
      if (param_1->Object == (IMediaTextureSample *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar7 = (FColorSpace *)(**(code **)((longlong)*param_1->Object + 200))();
      pFVar8 = UE::Color::FColorSpaceTransform::FColorSpaceTransform(&local_158,pFVar7,pFVar5,EVar4)
      ;
      local_1f8 = (float)*(double *)&pFVar8->field_0x10;
      local_1e8 = (float)*(double *)&pFVar8->field_0x18;
      local_218 = (float)*(double *)pFVar8;
      local_208 = (float)*(double *)&pFVar8->field_0x8;
      fStack_214 = (float)*(double *)&pFVar8->field_0x20;
      fStack_204 = (float)*(double *)&pFVar8->field_0x28;
      fStack_210 = (float)*(double *)&pFVar8->field_0x40;
      fStack_200 = (float)*(double *)&pFVar8->field_0x48;
      fStack_20c = (float)*(double *)&pFVar8->field_0x60;
      fStack_1fc = (float)*(double *)&pFVar8->field_0x68;
      fStack_1f4 = (float)*(double *)&pFVar8->field_0x30;
      fStack_1e4 = (float)*(double *)&pFVar8->field_0x38;
      fStack_1f0 = (float)*(double *)&pFVar8->field_0x50;
      fStack_1e0 = (float)*(double *)&pFVar8->field_0x58;
      fStack_1ec = (float)*(double *)&pFVar8->field_0x70;
      fStack_1dc = (float)*(double *)&pFVar8->field_0x78;
      param_2->M[0][0] = local_218;
      param_2->M[0][1] = fStack_214;
      param_2->M[0][2] = fStack_210;
      param_2->M[0][3] = fStack_20c;
      param_2->M[1][0] = local_208;
      param_2->M[1][1] = fStack_204;
      param_2->M[1][2] = fStack_200;
      param_2->M[1][3] = fStack_1fc;
      param_2->M[2][0] = local_1f8;
      param_2->M[2][1] = fStack_1f4;
      param_2->M[2][2] = fStack_1f0;
      param_2->M[2][3] = fStack_1ec;
      param_2->M[3][0] = local_1e8;
      param_2->M[3][1] = fStack_1e4;
      param_2->M[3][2] = fStack_1e0;
      param_2->M[3][3] = fStack_1dc;
      goto LAB_146c285c1;
    }
  }
  uVar2 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)param_2->M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(param_2->M[0] + 2) = uVar2;
  uVar2 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)param_2->M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(param_2->M[1] + 2) = uVar2;
  uVar2 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)param_2->M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(param_2->M[2] + 2) = uVar2;
  uVar2 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)param_2->M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(param_2->M[3] + 2) = uVar2;
LAB_146c285c1:
  if (param_1->Object == (IMediaTextureSample *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar9 = (float)(**(code **)((longlong)*param_1->Object + 0x108))();
  if (fVar9 != __real_3f800000) {
    local_1d8.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_1d8.M[3][1] = _UNK_150689644;
    local_1d8.M[3][2] = _UNK_150689648;
    local_1d8.M[3][3] = _UNK_15068964c;
    local_1d8.M[0][1] = 0.0;
    local_1d8.M[0][2] = 0.0;
    local_1d8.M[0][3] = 0.0;
    local_1d8.M[1][0] = 0.0;
    local_1d8.M[1][2] = 0.0;
    local_1d8.M[1][3] = 0.0;
    local_1d8.M[2][0] = 0.0;
    local_1d8.M[2][1] = 0.0;
    local_1d8.M[2][3] = 0.0;
    local_1d8.M[0][0] = fVar9;
    local_1d8.M[1][1] = fVar9;
    local_1d8.M[2][2] = fVar9;
    VectorMatrixMultiply(&local_198,&local_1d8,param_2);
    *(undefined8 *)param_2->M[0] = local_198.M[0]._0_8_;
    *(undefined8 *)(param_2->M[0] + 2) = local_198.M[0]._8_8_;
    *(undefined8 *)param_2->M[1] = local_198.M[1]._0_8_;
    *(undefined8 *)(param_2->M[1] + 2) = local_198.M[1]._8_8_;
    *(undefined8 *)param_2->M[2] = local_198.M[2]._0_8_;
    *(undefined8 *)(param_2->M[2] + 2) = local_198.M[2]._8_8_;
    *(undefined8 *)param_2->M[3] = local_198.M[3]._0_8_;
    *(undefined8 *)(param_2->M[3] + 2) = local_198.M[3]._8_8_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetFriendlyName @ 146c28c30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FString * __thiscall
FMediaTextureResource::GetFriendlyName(FMediaTextureResource *this,FString *__return_storage_ptr__)

{
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)(this->IntermediateTarget).Reference,__return_storage_ptr__,
             (UObject *)0x0);
  return __return_storage_ptr__;
}

// GetSizeX @ 146c2d4b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall FMediaTextureResource::GetSizeX(FMediaTextureResource *this)

{
  return (uint)(this->IntermediateTarget).Reference[1]._padding_;
}

// GetSizeXY @ 146c2d4d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TIntPoint<int> __thiscall FMediaTextureResource::GetSizeXY(FMediaTextureResource *this)

{
  UMediaTexture *pUVar1;
  TIntPoint<int>_u_0 in_RDX;
  
  pUVar1 = this->Owner;
  *(int *)in_RDX = (pUVar1->Dimensions).field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) = (pUVar1->Dimensions).field0_0x0._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// GetSizeY @ 146c2d550

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall FMediaTextureResource::GetSizeY(FMediaTextureResource *this)

{
  return *(uint *)((longlong)&(this->IntermediateTarget).Reference[1]._padding_ + 4);
}

// InitRHI @ 146c2f000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMediaTextureResource::InitRHI(FMediaTextureResource *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FExternalTextureRegistry *this_00;
  TRefCountPtr<FRHITexture> local_res8;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  if ((param_1->PersistentState).bImmediate == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x17,L"This operation expects the immediate command list.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetupSampler((FMediaTextureResource *)&this[-1].OverrideColorSpace);
  ClearTexture((FMediaTextureResource *)&this[-1].OverrideColorSpace,
               (FRHICommandListImmediate *)param_1,(FLinearColor *)((longlong)&this->_padding_ + 4),
               (bool)((((this->IntermediateTarget).Reference)->TextureDesc).field_0x36 & 1));
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureRHI.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                       ,0x315,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this[-1].bRecreateOutputTarget == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTargetTextureRHI.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                       ,0x316,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&(this->InitialTextureGuid).D == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntermediateTarget.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                       ,0x317,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((char)this->_padding_ == '\0') {
    local_res8.Reference =
         *(FRHITexture **)((this->IntermediateTarget).Reference[1]._padding_ + 0x20);
    if (local_res8.Reference != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res8.Reference);
    }
    this_00 = FExternalTextureRegistry::Get();
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_18._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_18._8_8_ = _UNK_15076b188;
    FExternalTextureRegistry::RegisterExternalTexture
              (this_00,(FGuid *)&this->CurrentClearColor,&local_res8,
               (TRefCountPtr<FRHISamplerState> *)&this->_padding_,(FLinearColor *)&local_18._s_0,
               (FLinearColor *)&local_28._s_0);
    if (local_res8.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_res8.Reference);
    }
  }
  return;
}

// JustInTimeRender @ 146c2f750

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::JustInTimeRender(FMediaTextureResource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                         ,0x346,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->JustInTimeRenderParams).Ptr;
  if (pFVar3 != (FRenderParams *)0x0) {
    Render(this,pFVar3);
    pFVar3 = (this->JustInTimeRenderParams).Ptr;
    if (pFVar3 != (FRenderParams *)0x0) {
      (this->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
      pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      ::operator_delete(pFVar3,0x70);
    }
  }
  return;
}

// ReleaseRHI @ 146c32010

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaTextureResource::ReleaseRHI(FMediaTextureResource *this)

{
  longlong *plVar1;
  FRHIResource *pFVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  plVar1 = (this->PriorSamplesCS).CriticalSection.Opaque3[1];
  if (plVar1 != (longlong *)0x0) {
    (this->PriorSamplesCS).CriticalSection.Opaque3[1] = (void *)0x0;
    (**(code **)(*plVar1 + 0x38))();
  }
  pFVar2 = *(FRHIResource **)&(this->InitialTextureGuid).B;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this->InitialTextureGuid).B = 0;
    (this->InitialTextureGuid).C = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)&(this->InitialTextureGuid).D;
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)&(this->InitialTextureGuid).D = 0;
    FRHIResource::Release(pFVar2);
  }
  this_00 = (this->InputTarget).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->InputTarget).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar2 = *(FRHIResource **)&this[-1].bRecreateOutputTarget;
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)&this[-1].bRecreateOutputTarget = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = (FRHIResource *)this->_padding_;
  if (pFVar2 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(pFVar2);
  }
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
  UpdateTextureReference
            ((FMediaTextureResource *)&this[-1].OverrideColorSpace,
             &GRHICommandList.CommandListImmediate,(FRHITexture *)0x0);
  return;
}

// Render @ 146c32810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall FMediaTextureResource::Render(FMediaTextureResource *this,FRenderParams *param_1)

{
  FLinearColor *pFVar1;
  FWindowsRecursiveMutex *pFVar2;
  TSharedPtr<IMediaTextureSample,1> *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  FRHITexture *this_01;
  UMediaTexture *pUVar7;
  code *pcVar8;
  atomic<int> aVar9;
  bool bVar10;
  IMediaTextureSample *pIVar11;
  FSharedReferencer<1> FVar12;
  FName FVar13;
  FRenderParams *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  bool bVar21;
  EPixelFormat EVar22;
  bool bVar23;
  char cVar24;
  uint uVar25;
  atomic<unsigned_int> aVar26;
  atomic<int> aVar27;
  uint uVar28;
  FRHIBreadcrumbAllocator *pFVar29;
  FRHIBreadcrumbNode *pFVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_MediaAssets_MediaTextureResourceRender> FVar32;
  longlong *plVar33;
  int *piVar34;
  ulonglong uVar35;
  TIntPoint<int> *pTVar36;
  longlong *plVar37;
  TRefCountPtr<FRHITexture> TVar38;
  undefined8 *puVar39;
  FRDGTexture *pFVar40;
  TStatId TVar41;
  TAtomic<FTimespan> *pTVar42;
  FExternalTextureRegistry *pFVar43;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FRHITexture *pFVar44;
  byte bVar45;
  int iVar46;
  Type TVar47;
  TAtomic<FTimespan> TVar48;
  longlong lVar49;
  FName FVar50;
  FName FVar51;
  undefined1 auStackY_c98 [32];
  char local_c38;
  TSharedPtr<IMediaTextureSample,1> local_c28;
  char local_c18;
  FMediaTextureResource *local_c10;
  FName local_c08;
  FRHITexture *local_c00;
  FName local_bf8;
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *local_bf0;
  FSharedReferencer<1> local_be8;
  FRenderParams *local_be0;
  FName local_bd8;
  FLLMScope local_bd0 [2];
  FRHITexture *local_bc8;
  longlong *local_bc0;
  TReferenceControllerBase<1> *pTStack_bb8;
  FColor_u_0 local_bb0;
  uint local_bac;
  FName local_ba8;
  undefined8 local_ba0;
  FSharedReferencer<1> local_b98;
  FName local_b90;
  FRHIResource *local_b88;
  int local_b80;
  undefined4 uStack_b7c;
  TRefCountPtr<FRHITexture> local_b78;
  TReferenceControllerBase<1> *local_b70;
  longlong *local_b68;
  TReferenceControllerBase<1> *pTStack_b60;
  FName local_b58;
  FName local_b48;
  undefined1 local_b40 [48];
  uint local_b10;
  uint local_b0c;
  FRDGEventName local_b08;
  IMediaTextureSample *local_af0;
  FName local_ae8;
  IMediaTextureSample *local_ae0;
  FName local_ad8;
  FLinearColor_u_0 local_ad0;
  FLinearColor_u_0 local_ac0;
  char *local_ab0;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  TGPUStat<TRHIGPUStatNameProvider_MediaTextureResource> *local_aa0;
  wchar_t *pwStack_a98;
  FDestructionSentinel local_a90;
  FDestructionSentinel local_a78;
  FRHIBreadcrumbScope local_a60;
  char local_a50;
  undefined1 local_a48 [8];
  undefined1 local_a40 [8];
  undefined1 local_a38 [8];
  undefined1 local_a30 [8];
  undefined1 local_a28 [8];
  FName local_a20;
  FName local_a18 [2];
  FGenerateMipsParams local_a08;
  IMediaTextureSample *local_9f8;
  TReferenceControllerBase<1> *pTStack_9f0;
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  FRHITextureDesc local_9a8;
  wchar_t *local_958;
  undefined8 local_950;
  FResourceBulkDataInterface *local_948;
  FName local_940;
  FName local_938;
  FRHITextureCreateDesc local_928;
  FRHITextureCreateDesc local_8a8;
  FRDGBuilder local_828;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c98;
  local_c10 = this;
  local_be0 = param_1;
  bVar16 = IsInRenderingThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x1594,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_ab0 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
    ;
    local_aa0 = &GPUStat_MediaTextureResource;
    uStack_aa8 = 0x198;
    ::Desc._padding_ = CONCAT44(uStack_aa4,0x198);
    pwStack_a98 = L"MediaTextureResource";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x54c0dd20;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x514247e0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FMediaTextureResource::Render'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar29 = FRHIComputeCommandList::GetBreadcrumbAllocator
                      ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate);
  pFVar30 = FMemStackBase::Alloc(&pFVar29->Inner,0x50,8);
  pFVar30->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar30->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar30->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar30->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar30->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar30->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar30->Allocator = pFVar29;
  pFVar30->TraceCpuSpecId = 0;
  pFVar30->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar25 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar30->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar30->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar30->ID = uVar25;
  pFVar30->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar30[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar16 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar16)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar26 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar26;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar30->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope
            (&local_a60,(FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,pFVar30);
  local_a50 = '\x01';
  FLLMScope::FLLMScope(local_bd0,MediaStreaming,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)(local_b40 + 8),MediaStreaming,true);
  FVar32 = StatPtr_STAT_MediaAssets_MediaTextureResourceRender;
  if (StatPtr_STAT_MediaAssets_MediaTextureResourceRender ==
      (FThreadSafeStaticStat<FStat_STAT_MediaAssets_MediaTextureResourceRender>)0x0) {
    pFVar31 = ::FName::FName(&local_a20,"STAT_MediaAssets_MediaTextureResourceRender");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_MediaAssets_MediaTextureResourceRender>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MediaAssets_MediaTextureResourceRender,*pFVar31,
                        L"MediaAssets MediaTextureResource Render","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar50 = *(FName *)FVar32;
  bVar16 = false;
  bVar10 = false;
  local_b58.ComparisonIndex.Value = 0;
  local_b58.Number = 0;
  bVar15 = false;
  bVar17 = false;
  if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_146c32b06:
    bVar10 = bVar17;
    bVar16 = bVar15;
    bVar15 = false;
    local_bd8 = local_b58;
    FVar50 = local_b58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_bb0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_bb0._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar16 = false;
      bVar10 = true;
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b90.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
        local_b90.Number = FVar50.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b90,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                   ,0x19c);
        bVar16 = true;
        bVar10 = true;
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146c32b06;
    local_bf8 = FVar50;
    local_bd8 = FVar50;
    FThreadStats::AddMessage(FVar50,CycleScopeStart);
    bVar15 = true;
  }
  if (__CsvProfilerStat413 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("FMediaTextureResource_Render",_GCsvCategory_MediaStreaming.Index);
    __CsvProfilerStat413 = true;
  }
  uVar25 = _GCsvCategory_MediaStreaming.Index;
  local_bac = _GCsvCategory_MediaStreaming.Index;
  FCsvProfiler::BeginStat
            ("FMediaTextureResource_Render",_GCsvCategory_MediaStreaming.Index,
             "CSV_FMediaTextureResource_Render");
  pFVar2 = &this->PriorSamplesCS;
  local_be8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_146c34209;
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
  local_bf0 = (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)
              (this->PriorSamples).Object;
  local_b98.ReferenceController = (this->PriorSamples).SharedReferenceCount.ReferenceController;
  local_ba0 = 0;
  if (local_b98.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b98.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b98.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_be8,&local_b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b98.ReferenceController);
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  if ((local_bf0 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Update(local_bf0);
  local_b70 = (param_1->SampleSource).WeakReferenceCount.ReferenceController;
  local_bf8.ComparisonIndex.Value = 0;
  local_bf8.Number = 0;
  local_ac0._0_8_ = ___xmm_3f80000000000000000000003f800000;
  local_ac0._8_8_ = _UNK_15076b188;
  local_ad0._s_0.R = (float)0;
  local_ad0._s_0.G = (float)0;
  local_ad0._s_0.B = (float)0;
  local_ad0._s_0.A = (float)0;
  if (local_b70 == (TReferenceControllerBase<1> *)0x0) {
LAB_146c32c36:
    if ((param_1->TextureSample).Object != (IMediaTextureSample *)0x0) {
      if (local_bf8 != (FName)0x0) goto LAB_146c32d49;
      local_c28.SharedReferenceCount.ReferenceController =
           (param_1->TextureSample).SharedReferenceCount.ReferenceController;
      local_c28.Object = (param_1->TextureSample).Object;
      if ((FName)local_c28.SharedReferenceCount.ReferenceController != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
             (atomic<int>)
             ((int)*(atomic<int> *)
                    ((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_c38 = local_c28.Object != (IMediaTextureSample *)0x0;
      goto LAB_146c33046;
    }
    if (param_1->CanClear == false) goto LAB_146c33e53;
    if ((((this->Cleared == false) ||
         ((this->CurrentClearColor).field0_0x0._s_0.R != (param_1->ClearColor).field0_0x0._s_0.R))
        || ((this->CurrentClearColor).field0_0x0._s_0.G != (param_1->ClearColor).field0_0x0._s_0.G))
       || (((this->CurrentClearColor).field0_0x0._s_0.B != (param_1->ClearColor).field0_0x0._s_0.B
           || ((this->CurrentClearColor).field0_0x0._s_0.A !=
               (param_1->ClearColor).field0_0x0._s_0.A)))) {
      ClearTexture(this,&GRHICommandList.CommandListImmediate,&param_1->ClearColor,false);
      if ((this->CurrentSample).Object == (IMediaTextureSample *)0x0) goto LAB_146c33e53;
      if ((local_bf0 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Retire
                (local_bf0,&GRHICommandList.CommandListImmediate,&this->CurrentSample);
      TSharedPtr<IMediaTextureSample,1>::operator=(&this->CurrentSample,(FNullTag *)0x0);
      TVar48 = (TAtomic<FTimespan>)0x8000000000000000;
    }
    else {
      TVar48 = (TAtomic<FTimespan>)0x8000000000000000;
    }
  }
  else {
    aVar9 = local_b70->SharedReferenceCount;
    do {
      if (aVar9 == (atomic<int>)0x0) {
        local_b70 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146c32c36;
      }
      LOCK();
      aVar27 = local_b70->SharedReferenceCount;
      bVar17 = aVar9 == aVar27;
      if (bVar17) {
        local_b70->SharedReferenceCount = (atomic<int>)((int)aVar9 + 1);
        aVar27 = aVar9;
      }
      UNLOCK();
      aVar9 = aVar27;
    } while (!bVar17);
    local_bf8 = (FName)(param_1->SampleSource).Object;
    if (local_bf8 == (FName)0x0) goto LAB_146c32c36;
LAB_146c32d49:
    local_c28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c28.Object = (IMediaTextureSample *)0x0;
    local_c38 = '\0';
    local_bc0 = (longlong *)0x0;
    pTStack_bb8 = (TReferenceControllerBase<1> *)0x0;
    FVar50 = local_bf8;
    while ((cVar24 = (**(code **)(*(longlong *)FVar50 + 8))(FVar50,&local_bc0), cVar24 != '\0' &&
           (local_bc0 != (longlong *)0x0))) {
      if ((local_bc0 == (longlong *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)(*local_bc0 + 0x60))(local_bc0,local_b40 + 0x18);
      if ((local_bc0 == (longlong *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar33 = (longlong *)(**(code **)(*local_bc0 + 0x20))(local_bc0,local_a30);
      FVar12.ReferenceController = local_c28.SharedReferenceCount.ReferenceController;
      pIVar11 = local_c28.Object;
      if (param_1->Rate < 0.0) {
LAB_146c32e33:
        iVar46 = (param_1->Time).SequenceIndex;
        if (((int)local_b40._32_4_ <= iVar46) &&
           ((iVar46 != local_b40._32_4_ ||
            ((iVar46 = (param_1->Time).LoopIndex, (int)local_b40._36_4_ <= iVar46 &&
             ((iVar46 != local_b40._36_4_ ||
              (*plVar33 + local_b40._24_8_ <= (param_1->Time).Time.Ticks)))))))) break;
      }
      else {
        iVar46 = (param_1->Time).SequenceIndex;
        if ((iVar46 < (int)local_b40._32_4_) ||
           ((iVar46 == local_b40._32_4_ &&
            ((iVar46 = (param_1->Time).LoopIndex, iVar46 < (int)local_b40._36_4_ ||
             ((iVar46 == local_b40._36_4_ &&
              ((param_1->Time).Time.Ticks < (longlong)local_b40._24_8_)))))))) break;
        if (param_1->Rate <= 0.0) goto LAB_146c32e33;
      }
      if ((local_c38 != '\0') && (local_c28.Object != (IMediaTextureSample *)0x0)) {
        local_ba8 = (FName)local_c28.SharedReferenceCount.ReferenceController;
        if ((FName)local_c28.SharedReferenceCount.ReferenceController == (FName)0x0) {
          local_c08 = (FName)this->Owner;
        }
        else {
          LOCK();
          *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) + 1);
          UNLOCK();
          local_c08 = (FName)this->Owner;
          LOCK();
          *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) + 1);
          UNLOCK();
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FMediaDelegates::OnSampleDiscarded_RenderThread,(FWriteAccessScope *)&local_a90)
        ;
        bVar17 = false;
        FMediaDelegates::OnSampleDiscarded_RenderThread._28_4_ =
             FMediaDelegates::OnSampleDiscarded_RenderThread._28_4_ + 1;
        uVar25 = FMediaDelegates::OnSampleDiscarded_RenderThread._16_4_ - 1;
        FVar50 = (FName)FVar12.ReferenceController;
        if (-1 < (int)uVar25) {
          lVar49 = (longlong)(int)uVar25 << 4;
          do {
            uVar28 = 0;
            if ((int)uVar25 < (int)FMediaDelegates::OnSampleDiscarded_RenderThread._16_4_) {
              uVar28 = ~uVar25 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((*(int *)(FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_ + 8 + lVar49) == 0)
               || (*(longlong **)(FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_ + lVar49) ==
                   (longlong *)0x0)) {
LAB_146c32f6c:
              bVar17 = true;
            }
            else {
              lVar6 = **(longlong **)
                        (FMediaDelegates::OnSampleDiscarded_RenderThread._8_8_ + lVar49);
              local_af0 = pIVar11;
              local_ae8 = (FName)FVar12.ReferenceController;
              if ((FName)FVar12.ReferenceController != (FName)0x0) {
                LOCK();
                *(atomic<int> *)((longlong)FVar12.ReferenceController + 8) =
                     (atomic<int>)
                     ((int)*(atomic<int> *)((longlong)FVar12.ReferenceController + 8) + 1);
                UNLOCK();
              }
              cVar24 = (**(code **)(lVar6 + 0x68))();
              if (cVar24 == '\0') goto LAB_146c32f6c;
            }
            lVar49 = lVar49 + -0x10;
            uVar25 = uVar25 - 1;
            FVar50 = local_ba8;
          } while (-1 < (int)uVar25);
        }
        FMediaDelegates::OnSampleDiscarded_RenderThread._28_4_ =
             FMediaDelegates::OnSampleDiscarded_RenderThread._28_4_ + -1;
        if (bVar17) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FMediaDelegates::OnSampleDiscarded_RenderThread,false);
        }
        if (local_a90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a90.Accessor,&local_a90);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar12.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar50);
        FVar50 = local_bf8;
        param_1 = local_be0;
        this = local_c10;
      }
      local_c38 = (*(code *)**(undefined8 **)FVar50)(FVar50,&local_c28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_bb8)
    ;
    FVar50 = local_bd8;
LAB_146c33046:
    FVar12.ReferenceController = local_c28.SharedReferenceCount.ReferenceController;
    pIVar11 = local_c28.Object;
    local_ba8 = (FName)local_c28.SharedReferenceCount.ReferenceController;
    if ((FName)local_c28.SharedReferenceCount.ReferenceController == (FName)0x0) {
      local_c08 = (FName)this->Owner;
    }
    else {
      LOCK();
      *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
      local_c08 = (FName)this->Owner;
      LOCK();
      *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
           (atomic<int>)
           ((int)*(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8)
           + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FMediaDelegates::OnPreSampleRender_RenderThread,(FWriteAccessScope *)&local_a78);
    FVar13 = local_c08;
    FMediaDelegates::OnPreSampleRender_RenderThread._28_4_ =
         FMediaDelegates::OnPreSampleRender_RenderThread._28_4_ + 1;
    uVar25 = FMediaDelegates::OnPreSampleRender_RenderThread._16_4_ - 1;
    local_c18 = '\0';
    FVar51 = (FName)FVar12.ReferenceController;
    if (-1 < (int)uVar25) {
      lVar49 = (longlong)(int)uVar25 << 4;
      do {
        uVar28 = 0;
        if ((int)uVar25 < (int)FMediaDelegates::OnPreSampleRender_RenderThread._16_4_) {
          uVar28 = ~uVar25 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)(FMediaDelegates::OnPreSampleRender_RenderThread._8_8_ + 8 + lVar49) == 0) ||
           (plVar33 = *(longlong **)(FMediaDelegates::OnPreSampleRender_RenderThread._8_8_ + lVar49)
           , plVar33 == (longlong *)0x0)) {
LAB_146c33160:
          local_c18 = '\x01';
        }
        else {
          lVar6 = *plVar33;
          local_ae0 = pIVar11;
          local_ad8 = (FName)FVar12.ReferenceController;
          if ((FName)FVar12.ReferenceController != (FName)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)FVar12.ReferenceController + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)FVar12.ReferenceController + 8) + 1);
            UNLOCK();
          }
          cVar24 = (**(code **)(lVar6 + 0x68))(plVar33,FVar13);
          if (cVar24 == '\0') goto LAB_146c33160;
        }
        lVar49 = lVar49 + -0x10;
        uVar25 = uVar25 - 1;
        FVar50 = local_bd8;
        FVar51 = local_ba8;
        this = local_c10;
      } while (-1 < (int)uVar25);
    }
    FMediaDelegates::OnPreSampleRender_RenderThread._28_4_ =
         FMediaDelegates::OnPreSampleRender_RenderThread._28_4_ + -1;
    if (local_c18 != '\0') {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FMediaDelegates::OnPreSampleRender_RenderThread,false);
    }
    if (local_a78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a78.Accessor,&local_a78);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar51);
    if ((local_c38 != '\0') &&
       ((this->bUsesImageExternal == false || (this->bEnableGenMips != false)))) {
      bVar17 = this->bEnableGenMips;
      if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar19 = UE::MediaTexture::Private::CalcGeneratedNumMips(local_c28.Object,bVar17);
      bVar17 = false;
      if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      piVar34 = (int *)(**(code **)((longlong)*local_c28.Object + 0x30))(local_c28.Object,local_a38)
      ;
      this = local_c10;
      iVar46 = piVar34[1];
      if (*piVar34 < piVar34[1]) {
        iVar46 = *piVar34;
      }
      if (iVar46 < 1) {
        ClearTexture(local_c10,&GRHICommandList.CommandListImmediate,&FLinearColor::Red,false);
      }
      else {
        if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar33 = (longlong *)(**(code **)((longlong)*local_c28.Object + 0x50))();
        if (plVar33 == (longlong *)0x0) {
          if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar24 = (**(code **)((longlong)*local_c28.Object + 0x98))();
          if (cVar24 == '\0') {
            if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar49 = (**(code **)((longlong)*local_c28.Object + 0x48))();
            if (lVar49 == 0) {
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar49 = (**(code **)*local_c28.Object)();
              this = local_c10;
              if (lVar49 == 0) goto LAB_146c33e41;
            }
          }
        }
        else {
          if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar20 = (**(code **)((longlong)*local_c28.Object + 0x10))();
          bVar45 = bVar19;
          if (1 < bVar20) {
            bVar45 = bVar20;
          }
          bVar18 = MediaTextureResourceHelpers::RequiresUAVTexture(&local_c28,bVar45);
          uVar25 = (**(code **)(*plVar33 + 8))(plVar33);
          if ((uVar25 & 1) == 0) {
            uVar35 = (**(code **)(*plVar33 + 8))();
            if ((uVar35 & 2) == 0) {
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar21 = (bool)(**(code **)((longlong)*local_c28.Object + 0x80))();
              EVar22 = MediaTextureResourceHelpers::GetConvertedPixelFormat(&local_c28);
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar36 = (TIntPoint<int> *)
                        (**(code **)((longlong)*local_c28.Object + 0x30))
                                  (local_c28.Object,local_a40);
              CreateIntermediateRenderTarget
                        (local_c10,&GRHICommandList.CommandListImmediate,pTVar36,EVar22,bVar21,
                         &local_be0->ClearColor,bVar45,bVar18);
              (**(code **)(*plVar33 + 0x10))(plVar33,0x154be5ed0);
            }
            else {
              local_b88 = (FRHIResource *)0x0;
              cVar24 = (**(code **)(*plVar33 + 0x10))(plVar33,0x154be5ed0);
              bVar17 = cVar24 != '\0';
              if (local_b88 != (FRHIResource *)0x0) {
                FRHIResource::Release(local_b88);
              }
            }
          }
          else {
            local_c00 = (FRHITexture *)0x0;
            cVar24 = (**(code **)(*plVar33 + 0x10))(plVar33,0x154be5ed0);
            if (cVar24 != '\0') {
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              piVar34 = (int *)(**(code **)((longlong)*local_c28.Object + 0x30))
                                         (local_c28.Object,local_a48);
              if (((local_c10->Owner->NewStyleOutput == false) ||
                  (lVar49 = (**(code **)(local_c00->_padding_ + 0x20))(),
                  *(char *)(lVar49 + 0x30) != '\x01')) || (bVar19 == 1)) {
                pFVar44 = local_c00;
                lVar49 = (**(code **)(local_c00->_padding_ + 0x20))(local_c00);
                iVar46 = *(int *)(lVar49 + 0x28);
                lVar49 = (**(code **)(pFVar44->_padding_ + 0x20))(pFVar44);
                if ((*(int *)(lVar49 + 0x24) == *piVar34) && (iVar46 == piVar34[1])) {
                  lVar49 = (**(code **)(local_c00->_padding_ + 0x20))();
                  bVar20 = *(byte *)(lVar49 + 0x33);
                  if ((bVar20 == 2) ||
                     ((bVar20 < 0x26 && ((0x2000080600U >> ((ulonglong)bVar20 & 0x3f) & 1) != 0))))
                  {
                    UpdateTextureReference
                              (local_c10,&GRHICommandList.CommandListImmediate,local_c00);
                    uVar35 = (**(code **)(*plVar33 + 8))(plVar33);
                    if ((uVar35 & 2) != 0) {
                      bVar17 = true;
                    }
                    goto LAB_146c3367c;
                  }
                }
              }
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar21 = (bool)(**(code **)((longlong)*local_c28.Object + 0x80))();
              EVar22 = MediaTextureResourceHelpers::GetConvertedPixelFormat(&local_c28);
              if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar23)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar36 = (TIntPoint<int> *)
                        (**(code **)((longlong)*local_c28.Object + 0x30))
                                  (local_c28.Object,local_a28);
              CreateIntermediateRenderTarget
                        (local_c10,&GRHICommandList.CommandListImmediate,pTVar36,EVar22,bVar21,
                         &local_be0->ClearColor,bVar45,bVar18);
              ConvertTextureToOutput
                        (local_c10,&GRHICommandList.CommandListImmediate,local_c00,&local_c28);
            }
LAB_146c3367c:
            if (local_c00 != (FRHITexture *)0x0) {
              FRHIResource::Release((FRHIResource *)local_c00);
            }
          }
          local_c10->Cleared = false;
          this = local_c10;
          if (!bVar17) goto LAB_146c336a4;
        }
        pFVar14 = local_be0;
        bVar17 = RequiresConversion(local_c10,&local_c28,bVar19);
        this = local_c10;
        pFVar1 = &pFVar14->ClearColor;
        if (bVar17) {
          ConvertSample(local_c10,&GRHICommandList.CommandListImmediate,&local_c28,pFVar1,bVar19);
        }
        else {
          CopySample(local_c10,&GRHICommandList.CommandListImmediate,&local_c28,pFVar1,bVar19,
                     &pFVar14->CurrentGuid);
        }
      }
LAB_146c336a4:
      if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar33 = (longlong *)(**(code **)((longlong)*local_c28.Object + 0x58))();
      pFVar44 = (this->IntermediateTarget).Reference;
      if (plVar33 == (longlong *)0x0) {
        if ((pFVar44 != (FRHITexture *)0x0) &&
           (this_01 = (this->OutputTarget).Reference, this_01 != pFVar44)) {
          (this->OutputTarget).Reference = pFVar44;
          FRHIResource::AddRef((FRHIResource *)pFVar44);
          goto joined_r0x000146c33ad8;
        }
      }
      else {
        if ((pFVar44 != (FRHITexture *)0x0) ||
           (pFVar44 = (FRHITexture *)this->_padding_, local_bc8 = pFVar44,
           pFVar44 != (FRHITexture *)0x0)) {
          local_bc8 = pFVar44;
          FRHIResource::AddRef((FRHIResource *)pFVar44);
        }
        if ((this->bRecreateOutputTarget != false) && (local_bc8 != (FRHITexture *)0x0)) {
          plVar37 = (longlong *)(**(code **)(local_bc8->_padding_ + 0x20))();
          local_9a8.Flags = None;
          local_9a8.ClearValue.Value._4_8_ = 0;
          local_9a8.ClearValue._0_8_ = 1;
          local_9a8.AliasableFormats.ArrayMax = 1;
          local_958 = L"MediaTextureColorConversionOutput";
          local_b80 = ((TIntPoint<int>_u_0_s_0 *)((longlong)plVar37 + 0x24))->X;
          uStack_b7c = (undefined4)plVar37[5];
          local_9a8.Extent.field0_0x0._s_0 = *(TIntPoint<int>_u_0 *)((longlong)plVar37 + 0x24);
          local_9a8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
          local_9a8.Format = *(EPixelFormat *)((longlong)plVar37 + 0x33);
          local_9a8.ClearValue.Value.Color[3] = 0.0;
          local_9a8.ExtData = 0;
          local_9a8.Depth = 1;
          local_9a8.ArraySize = 1;
          local_9a8.NumMips = '\x01';
          local_9a8.NumSamples = '\x01';
          local_9a8.Dimension = Texture2D;
          local_9a8.UAVFormat = PF_Unknown;
          local_9a8.FastVRAMPercentage = 0xff;
          local_9a8.AliasableFormats.AllocatorInstance.SecondaryData =
               (ForElementType<EPixelFormat>)0x0;
          local_9a8.AliasableFormats.ArrayNum = 0;
          local_950 = 0;
          local_948 = (FResourceBulkDataInterface *)0x0;
          local_940.ComparisonIndex.Value = 0;
          local_940.Number = 0;
          local_938.ComparisonIndex.Value = 0;
          local_938.Number = 0;
          FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_928,&local_9a8);
          local_928.DebugName = local_958;
          local_928.InitialState = (ERHIAccess)local_950;
          local_928.InitAction = local_950._4_4_;
          local_928.BulkData = local_948;
          local_928.ClassName = local_940;
          local_928.OwnerName = local_938;
          if (local_9a8.AliasableFormats.AllocatorInstance.SecondaryData !=
              (ForElementType<EPixelFormat>)0x0) {
            FMemory::Free((void *)local_9a8.AliasableFormats.AllocatorInstance.SecondaryData);
          }
          local_928._padding_._0_1_ = (undefined1)plVar37[6];
          local_928._padding_ = plVar37[1];
          local_928._padding_ = plVar37[2];
          local_928._padding_._0_4_ = (undefined4)plVar37[3];
          FLazyName::Resolve(&::ClassName);
          local_928.ClassName = local_b48;
          local_928.OwnerName = (FName)this->_padding_;
          local_928._padding_ = *plVar37;
          FRHITextureCreateDesc::FRHITextureCreateDesc(&local_8a8,&local_928);
          if ((void *)local_928._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_928._padding_);
          }
          TVar38 = FRHICommandListBase::CreateTexture
                             ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                              (FRHITextureCreateDesc *)local_b40);
          TRefCountPtr<FRHITexture>::operator=
                    (&this->OutputTarget,(TRefCountPtr<FRHITexture> *)TVar38.Reference);
          if ((FRHIResource *)local_b40._0_8_ != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)local_b40._0_8_);
          }
          pFVar44 = (this->OutputTarget).Reference;
          pFVar31 = ::FName::FName(local_a18,L"MediaTextureResourceOutput");
          FRHITexture::SetName(pFVar44,*pFVar31);
          ((this->OutputTarget).Reference)->_padding_ = this->_padding_;
          this->bRecreateOutputTarget = false;
          if ((void *)local_8a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_8a8._padding_);
          }
        }
        (**(code **)(*plVar33 + 8))(plVar33,0x154be5ed0,&local_bc8);
        pFVar44 = (this->OutputTarget).Reference;
        this_01 = local_bc8;
        if ((FRHITexture *)this->_padding_ != pFVar44) {
          UpdateTextureReference(this,&GRHICommandList.CommandListImmediate,pFVar44);
          this_01 = local_bc8;
        }
joined_r0x000146c33ad8:
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
        }
      }
      if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar39 = (undefined8 *)
                (**(code **)((longlong)*local_c28.Object + 0xa0))(local_c28.Object,local_9e8);
      local_ac0._0_8_ = *puVar39;
      local_ac0._8_8_ = puVar39[1];
      if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar31 = (FName *)(**(code **)((longlong)*local_c28.Object + 0xa8))
                                   (local_c28.Object,local_9d8);
      this_00 = &this->CurrentSample;
      local_ad0._0_8_ = *pFVar31;
      local_ad0._8_8_ = pFVar31[1];
      if (this_00->Object != (IMediaTextureSample *)0x0) {
        if ((local_bf0 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Retire
                  (local_bf0,&GRHICommandList.CommandListImmediate,this_00);
        TSharedPtr<IMediaTextureSample,1>::operator=(this_00,(FNullTag *)0x0);
      }
      if ((this->OutputTarget).Reference == (FRHITexture *)this->_padding_) {
        if ((local_bf0 == (TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_> *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TGPUsyncedDataDeleter<TSharedPtr<IMediaTextureSample,1>_>::Retire
                  (local_bf0,&GRHICommandList.CommandListImmediate,&local_c28);
      }
      else {
        if ((FName)local_c28.SharedReferenceCount.ReferenceController != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) =
               (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_c28.SharedReferenceCount.ReferenceController + 8) + 1);
          UNLOCK();
        }
        local_9f8 = this_00->Object;
        pTStack_9f0 = (this->CurrentSample).SharedReferenceCount.ReferenceController;
        this_00->Object = local_c28.Object;
        (this->CurrentSample).SharedReferenceCount.ReferenceController =
             local_c28.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_9f0);
      }
      if ((1 < this->CurrentNumMips) && (this->Cleared == false)) {
        if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        cVar24 = (**(code **)((longlong)*local_c28.Object + 0x10))();
        if (cVar24 == '\x01') {
          lVar49 = (**(code **)(((this->OutputTarget).Reference)->_padding_ + 0x20))();
          bVar17 = IsBlockCompressedFormat(*(EPixelFormat *)(lVar49 + 0x33));
          if (!bVar17) {
            if (((this->OutputTarget).Reference == (FRHITexture *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutputTarget",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                                    ,0x293,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            CacheRenderTarget((this->OutputTarget).Reference,L"MipGeneration",
                              &this->MipGenerationCache);
            local_b08.EventFormat = L"";
            local_b08.FormattedEventName.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_b08.FormattedEventName.Data.ArrayNum = 0;
            local_b08.FormattedEventName.Data.ArrayMax = 0;
            FRDGBuilder::FRDGBuilder
                      (&local_828,&GRHICommandList.CommandListImmediate,&local_b08,None,
                       GMaxRHIShaderPlatform);
            pFVar40 = FRDGBuilder::RegisterExternalTexture
                                (&local_828,&this->MipGenerationCache,None);
            bVar19 = *(byte *)((longlong)&this->_padding_ + 4);
            local_a08.Filter = ___xmm_00000001000000010000000100000001;
            local_a08.AddressU = _UNK_150631da4;
            local_a08.AddressV = _UNK_150631da8;
            local_a08.AddressW = _UNK_150631dac;
            TVar47 = (uint)bVar19;
            if (bVar19 == 5) {
              TVar47 = GMaxRHIFeatureLevel;
            }
            FGenerateMips::Execute(&local_828,TVar47,pFVar40,&local_a08,AutoDetect);
            FRDGBuilder::Execute(&local_828);
            FRDGBuilder::~FRDGBuilder(&local_828);
          }
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        TVar41 = FThreadSafeStaticStatInner<FStat_STAT_MediaUtils_TextureSampleTime,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_MediaUtils_TextureSampleTime,1> *
                            )&StatPtr_STAT_MediaUtils_TextureSampleTime);
        local_c08 = *(FName *)(TVar41.StatIdPtr)->Name;
        if ((local_c28.Object == (IMediaTextureSample *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        plVar33 = (longlong *)
                  (**(code **)((longlong)*local_c28.Object + 0x60))(local_c28.Object,local_9c8);
        FThreadStats::AddMessage<double>
                  (local_c08,Set,(double)*plVar33 * __real_3f1a36e2eb1c432d,false);
      }
    }
LAB_146c33e41:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c28.SharedReferenceCount.ReferenceController);
    param_1 = local_be0;
    uVar25 = local_bac;
LAB_146c33e53:
    TVar48 = (TAtomic<FTimespan>)0x8000000000000000;
    if (local_bf8 != (FName)0x0) {
      local_b68 = (longlong *)0x0;
      pTStack_b60 = (TReferenceControllerBase<1> *)0x0;
      cVar24 = (**(code **)(*(longlong *)local_bf8 + 8))(local_bf8,&local_b68);
      if (cVar24 != '\0') {
        if ((local_b68 == (longlong *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar42 = (TAtomic<FTimespan> *)(**(code **)(*local_b68 + 0x60))(local_b68,local_9b8);
        TVar48 = *pTVar42;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_b60);
    }
  }
  LOCK();
  this->Owner->CachedNextSampleTime = TVar48;
  UNLOCK();
  if ((this->Owner->NewStyleOutput == false) && (this->bUsesImageExternal == false)) {
    SetupSampler(this);
    if ((((param_1->CurrentGuid).B != 0 || (param_1->CurrentGuid).A != 0) ||
        (param_1->CurrentGuid).C != 0) || (param_1->CurrentGuid).D != 0) {
      local_b78.Reference = *(FRHITexture **)(this->Owner->_padding_ + 0x20);
      if (local_b78.Reference != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_b78.Reference);
      }
      pFVar43 = FExternalTextureRegistry::Get();
      FExternalTextureRegistry::RegisterExternalTexture
                (pFVar43,&param_1->CurrentGuid,&local_b78,
                 (TRefCountPtr<FRHISamplerState> *)&this->_padding_,(FLinearColor *)&local_ac0._s_0,
                 (FLinearColor *)&local_ad0._s_0);
      if (local_b78.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b78.Reference);
      }
    }
    uVar28 = (param_1->PreviousGuid).D;
    uVar3 = (param_1->PreviousGuid).C;
    uVar4 = (param_1->PreviousGuid).B;
    uVar5 = (param_1->PreviousGuid).A;
    if ((((uVar28 != 0 || uVar3 != 0) || uVar4 != 0) || uVar5 != 0) &&
       (((uVar3 != (param_1->CurrentGuid).C || uVar4 != (param_1->CurrentGuid).B) ||
        uVar5 != (param_1->CurrentGuid).A) || uVar28 != (param_1->CurrentGuid).D)) {
      pFVar43 = FExternalTextureRegistry::Get();
      FExternalTextureRegistry::UnregisterExternalTexture(pFVar43,&param_1->PreviousGuid);
    }
  }
  pUVar7 = this->Owner;
  bVar17 = IsInRenderingThread();
  if ((!bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Assets\\MediaTexture.cpp"
                          ,0xe1,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = &pUVar7->CriticalSection;
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    uVar28 = (param_1->CurrentGuid).B;
    uVar3 = (param_1->CurrentGuid).C;
    uVar4 = (param_1->CurrentGuid).D;
    (pUVar7->CurrentRenderedGuid).A = (param_1->CurrentGuid).A;
    (pUVar7->CurrentRenderedGuid).B = uVar28;
    (pUVar7->CurrentRenderedGuid).C = uVar3;
    (pUVar7->CurrentRenderedGuid).D = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_be8.ReferenceController);
    FCsvProfiler::EndStat("FMediaTextureResource_Render",uVar25);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar15) && (FVar50 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
        local_b10 = (uint)FVar50.ComparisonIndex.Value;
        local_b0c = FVar50.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter((LARGE_INTEGER *)(local_b40 + 0x10));
        local_b40._40_8_ = ZEXT48((uint)local_b40._16_4_);
        FThreadStats::AddStatMessage(this_02,(FStatMessage *)(local_b40 + 0x28));
        piVar34 = &this_02->ScopeCount;
        *piVar34 = *piVar34 + -1;
        if (*piVar34 == 0) {
          FThreadStats::Flush(this_02,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
    }
    FMemScope::~FMemScope((FMemScope *)(local_b40 + 8));
    FLLMScope::~FLLMScope(local_bd0);
    if (local_a50 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a60);
    }
    return;
  }
LAB_146c34209:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequiresConversion @ 146c34370

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FMediaTextureResource::RequiresConversion
          (FMediaTextureResource *this,TRefCountPtr<FRHITexture> *param_1,TIntPoint<int> *param_2,
          uchar param_3)

{
  byte bVar1;
  int iVar2;
  FRHITexture *pFVar3;
  longlong lVar4;
  
  if (((this->Owner->NewStyleOutput == false) ||
      (lVar4 = (**(code **)(param_1->Reference->_padding_ + 0x20))(),
      *(char *)(lVar4 + 0x30) != '\x01')) || (param_3 == '\x01')) {
    pFVar3 = param_1->Reference;
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    iVar2 = *(int *)(lVar4 + 0x28);
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    if ((*(int *)(lVar4 + 0x24) == (param_2->field0_0x0)._s_0.X) &&
       (iVar2 == (param_2->field0_0x0)._s_0.Y)) {
      lVar4 = (**(code **)(param_1->Reference->_padding_ + 0x20))();
      bVar1 = *(byte *)(lVar4 + 0x33);
      if ((bVar1 == 2) ||
         ((bVar1 < 0x26 && ((0x2000080600U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)))) {
        return false;
      }
    }
  }
  return true;
}

// RequiresConversion @ 146c34420

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FMediaTextureResource::RequiresConversion
          (FMediaTextureResource *this,TSharedPtr<IMediaTextureSample,1> *param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  FColorSpace *pFVar10;
  FColorSpace *this_00;
  byte *pbVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (this->Owner->NewStyleOutput != false) {
    if ((param_1->Object == (IMediaTextureSample *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    plVar6 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x48))();
    if (((plVar6 != (longlong *)0x0) &&
        (lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6), *(char *)(lVar7 + 0x30) == '\x01')) &&
       (param_2 != '\x01')) {
      return true;
    }
  }
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  piVar8 = (int *)(**(code **)((longlong)*param_1->Object + 8))(param_1->Object,local_res8);
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  piVar9 = (int *)(**(code **)((longlong)*param_1->Object + 0x30))(param_1->Object,local_res20);
  if ((*piVar8 != *piVar9) || (piVar8[1] != piVar9[1])) {
    return true;
  }
  pFVar10 = (this->OverrideColorSpace).Ptr;
  if (pFVar10 == (FColorSpace *)0x0) {
    pFVar10 = UE::Color::FColorSpace::GetWorking();
  }
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x40))();
  if (cVar4 != '\0') {
    if ((param_1->Object == (IMediaTextureSample *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = (FColorSpace *)(**(code **)((longlong)*param_1->Object + 200))();
    bVar2 = UE::Color::FColorSpace::Equals(this_00,pFVar10,__real_3e7ad7f29abcaf48);
    if (!bVar2) {
      return true;
    }
  }
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x100))();
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar5 = (**(code **)((longlong)*param_1->Object + 0x28))();
  if ((uVar5 - 2 < 2) || (uVar5 - 0x14 < 2)) {
    if (cVar4 == '\x02') {
      if ((param_1->Object == (IMediaTextureSample *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      plVar6 = (longlong *)(**(code **)((longlong)*param_1->Object + 0x48))();
      if (plVar6 == (longlong *)0x0) {
        return false;
      }
      pbVar11 = (byte *)(**(code **)(*plVar6 + 0x20))(plVar6);
      if ((*pbVar11 & 0x10) != 0) {
        return false;
      }
      goto LAB_146c34665;
    }
  }
  else if ((0x1b < uVar5) || ((0xc003010U >> (uVar5 & 0x1f) & 1) == 0)) goto LAB_146c34665;
  if (cVar4 == '\x01') {
    return false;
  }
LAB_146c34665:
  if ((param_1->Object == (IMediaTextureSample *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  cVar4 = (**(code **)((longlong)*param_1->Object + 0x40))();
  return cVar4 != '\0';
}

// ResetJustInTimeRenderParams @ 146c348d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::ResetJustInTimeRenderParams(FMediaTextureResource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FRenderParams *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                       ,0x33f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->JustInTimeRenderParams).Ptr;
  if (pFVar3 != (FRenderParams *)0x0) {
    (this->JustInTimeRenderParams).Ptr = (FRenderParams *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->TextureSample).SharedReferenceCount.ReferenceController);
    pTVar4 = (pFVar3->SampleSource).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x70);
  }
  return;
}

// SetJustInTimeRenderParams @ 146c36000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FMediaTextureResource::SetJustInTimeRenderParams(FMediaTextureResource *this,FRenderParams *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TMediaSampleSource<IMediaTextureSample> *pTVar4;
  IMediaTextureSample *pIVar5;
  code *pcVar6;
  FWeakReferencer<1> *pFVar7;
  undefined8 uVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  FRenderParams *pFVar16;
  FRenderParams *pFVar17;
  TUniquePtr<FMediaTextureResource::FRenderParams,TDefaultDelete<FMediaTextureResource::FRenderParams>_>
  *pTVar18;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  IMediaTextureSample *local_20;
  TReferenceControllerBase<1> *pTStack_18;
  
  bVar15 = IsInRenderingThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaAssets\\Private\\Misc\\MediaTextureResource.cpp"
                          ,0x337,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = ::operator_new(0x70);
  if (pFVar16 != (FRenderParams *)0x0) {
    *(undefined8 *)pFVar16 = 0;
    *(undefined8 *)((longlong)&(pFVar16->ClearColor).field0_0x0 + 4) = 0;
    *(undefined8 *)((longlong)&(pFVar16->ClearColor).field0_0x0 + 0xc) = 0;
    *(undefined8 *)&(pFVar16->PreviousGuid).D = 0;
    *(undefined8 *)&pFVar16->NumMips = 0;
    (pFVar16->CurrentGuid).B = 0;
    (pFVar16->CurrentGuid).C = 0;
    *(undefined8 *)&(pFVar16->CurrentGuid).D = 0;
    (pFVar16->PreviousGuid).B = 0;
    (pFVar16->PreviousGuid).C = 0;
    (pFVar16->SampleSource).Object = (TMediaSampleSource<IMediaTextureSample> *)0x0;
    (pFVar16->SampleSource).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar16->Time).Time.Ticks = -0x8000000000000000;
    (pFVar16->Time).SequenceIndex = 0;
    (pFVar16->Time).LoopIndex = 0;
    (pFVar16->TextureSample).Object = (IMediaTextureSample *)0x0;
    (pFVar16->TextureSample).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  pTVar18 = &this->JustInTimeRenderParams;
  if (pTVar18 ==
      (TUniquePtr<FMediaTextureResource::FRenderParams,TDefaultDelete<FMediaTextureResource::FRenderParams>_>
       *)&local_38) {
    if (pFVar16 == (FRenderParams *)0x0) goto LAB_146c36132;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar16->TextureSample).SharedReferenceCount.ReferenceController);
    pTVar3 = (pFVar16->SampleSource).WeakReferenceCount.ReferenceController;
    pFVar17 = pFVar16;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  else {
    pFVar17 = pTVar18->Ptr;
    pTVar18->Ptr = pFVar16;
    if (pFVar17 == (FRenderParams *)0x0) goto LAB_146c36132;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar17->TextureSample).SharedReferenceCount.ReferenceController);
    pTVar3 = (pFVar17->SampleSource).WeakReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  ::operator_delete(pFVar17,0x70);
LAB_146c36132:
  pFVar16 = pTVar18->Ptr;
  pFVar16->CanClear = param_1->CanClear;
  uVar8 = *(undefined8 *)((longlong)&(param_1->ClearColor).field0_0x0 + 8);
  *(undefined8 *)&(pFVar16->ClearColor).field0_0x0 =
       *(undefined8 *)&(param_1->ClearColor).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar16->ClearColor).field0_0x0 + 8) = uVar8;
  uVar10 = (param_1->CurrentGuid).B;
  uVar11 = (param_1->CurrentGuid).C;
  uVar12 = (param_1->CurrentGuid).D;
  (pFVar16->CurrentGuid).A = (param_1->CurrentGuid).A;
  (pFVar16->CurrentGuid).B = uVar10;
  (pFVar16->CurrentGuid).C = uVar11;
  (pFVar16->CurrentGuid).D = uVar12;
  uVar10 = (param_1->PreviousGuid).B;
  uVar11 = (param_1->PreviousGuid).C;
  uVar12 = (param_1->PreviousGuid).D;
  (pFVar16->PreviousGuid).A = (param_1->PreviousGuid).A;
  (pFVar16->PreviousGuid).B = uVar10;
  (pFVar16->PreviousGuid).C = uVar11;
  (pFVar16->PreviousGuid).D = uVar12;
  pFVar16->Rate = param_1->Rate;
  pTVar3 = (param_1->SampleSource).WeakReferenceCount.ReferenceController;
  pTVar4 = (param_1->SampleSource).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_30 = *(undefined4 *)&(pFVar16->SampleSource).Object;
  uStack_2c = *(undefined4 *)((longlong)&(pFVar16->SampleSource).Object + 4);
  pFVar7 = &(pFVar16->SampleSource).WeakReferenceCount;
  uStack_28 = *(undefined4 *)&pFVar7->ReferenceController;
  uStack_24 = *(undefined4 *)
               ((longlong)&(pFVar16->SampleSource).WeakReferenceCount.ReferenceController + 4);
  pTVar9 = pFVar7->ReferenceController;
  (pFVar16->SampleSource).Object = pTVar4;
  (pFVar16->SampleSource).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  pFVar16->NumMips = param_1->NumMips;
  iVar13 = (param_1->Time).SequenceIndex;
  iVar14 = (param_1->Time).LoopIndex;
  (pFVar16->Time).Time.Ticks = (param_1->Time).Time.Ticks;
  (pFVar16->Time).SequenceIndex = iVar13;
  (pFVar16->Time).LoopIndex = iVar14;
  pTVar3 = (param_1->TextureSample).SharedReferenceCount.ReferenceController;
  pIVar5 = (param_1->TextureSample).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_20 = (pFVar16->TextureSample).Object;
  pTStack_18 = (pFVar16->TextureSample).SharedReferenceCount.ReferenceController;
  (pFVar16->TextureSample).Object = pIVar5;
  (pFVar16->TextureSample).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// SetupSampler @ 146c37a10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::SetupSampler(FMediaTextureResource *this)

{
  uchar uVar1;
  UMediaTexture *pUVar2;
  FRHIResource *this_00;
  ETextureSamplerFilter EVar3;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FRHIResource *this_04;
  ESamplerFilter EVar4;
  FSamplerStateInitializerRHI local_28;
  
  if ((this->CurrentNumMips < 2) && (this->Owner->NewStyleOutput == false)) {
    EVar4 = SF_Bilinear;
  }
  else {
    this_01 = UDeviceProfileManager::Get(false);
    this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
    this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
    EVar3 = UTextureLODSettings::GetSamplerFilter(this_03,(UTexture *)this->Owner);
    EVar4 = (ESamplerFilter)EVar3;
  }
  pUVar2 = this->Owner;
  local_28.MipBias = pUVar2->MipMapBias;
  if (__real_417fd70a <= pUVar2->MipMapBias) {
    local_28.MipBias = __real_417fd70a;
  }
  if (local_28.MipBias <= __real_c1800000) {
    local_28.MipBias = __real_c1800000;
  }
  if ((this->CurrentSamplerFilter != EVar4) ||
     (__real_322bcc77 <
      (float)((uint)(this->CurrentMipMapBias - local_28.MipBias) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    this->CurrentMipMapBias = local_28.MipBias;
    local_28.AddressV.Value = '\0';
    this->CurrentSamplerFilter = EVar4;
    uVar1 = (pUVar2->AddressY).Value;
    if (uVar1 != '\0') {
      local_28.AddressV.Value = (uVar1 != '\x01') + '\x01';
    }
    uVar1 = (pUVar2->AddressX).Value;
    local_28.AddressU.Value = '\0';
    if (uVar1 != '\0') {
      local_28.AddressU.Value = (uVar1 != '\x01') + '\x01';
    }
    local_28.Filter.Value = (uchar)EVar4;
    local_28.AddressW.Value = '\0';
    local_28.MinMipLevel = 0.0;
    local_28.MaxMipLevel = 3.4028235e+38;
    local_28.MaxAnisotropy = 0;
    local_28.BorderColor = 0;
    local_28.SamplerComparisonFunction.Value = '\0';
    this_04 = (FRHIResource *)FTexture::GetOrCreateSamplerState(&local_28);
    this_00 = (FRHIResource *)this->_padding_;
    if (this_00 != this_04) {
      this->_padding_ = (longlong)this_04;
      if (this_04 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_04);
      }
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
  }
  return;
}

// UpdateResourceSize @ 146c3a590

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FMediaTextureResource::UpdateResourceSize(FMediaTextureResource *this)

{
  EPixelFormat EVar1;
  uint uVar2;
  FRHITexture *pFVar3;
  longlong lVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  uVar5 = 0;
  pFVar3 = (this->InputTarget).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x20))();
    EVar1 = *(EPixelFormat *)(lVar4 + 0x33);
    lVar4 = (**(code **)(((this->InputTarget).Reference)->_padding_ + 0x20))();
    uVar2 = *(uint *)(lVar4 + 0x28);
    lVar4 = (**(code **)(((this->InputTarget).Reference)->_padding_ + 0x20))();
    uVar5 = CalcTextureSize(*(uint *)(lVar4 + 0x24),uVar2,EVar1,1);
  }
  pFVar3 = (this->IntermediateTarget).Reference;
  if ((pFVar3 != (FRHITexture *)0x0) && (pFVar3 != (this->OutputTarget).Reference)) {
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x20))();
    EVar1 = *(EPixelFormat *)(lVar4 + 0x33);
    lVar4 = (**(code **)(((this->IntermediateTarget).Reference)->_padding_ + 0x20))();
    uVar2 = *(uint *)(lVar4 + 0x28);
    lVar4 = (**(code **)(((this->IntermediateTarget).Reference)->_padding_ + 0x20))();
    uVar6 = CalcTextureSize(*(uint *)(lVar4 + 0x24),uVar2,EVar1,1);
    uVar5 = uVar5 + uVar6;
  }
  pFVar3 = (this->OutputTarget).Reference;
  if (pFVar3 != (FRHITexture *)0x0) {
    lVar4 = (**(code **)(pFVar3->_padding_ + 0x20))();
    EVar1 = *(EPixelFormat *)(lVar4 + 0x33);
    lVar4 = (**(code **)(((this->OutputTarget).Reference)->_padding_ + 0x20))();
    uVar2 = *(uint *)(lVar4 + 0x28);
    lVar4 = (**(code **)(((this->OutputTarget).Reference)->_padding_ + 0x20))();
    uVar6 = CalcTextureSize(*(uint *)(lVar4 + 0x24),uVar2,EVar1,1);
    uVar5 = uVar5 + uVar6;
  }
  *this->OwnerSize = uVar5;
  return;
}

// UpdateTextureReference @ 146c3a7b0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMediaTextureResource::UpdateTextureReference
          (FMediaTextureResource *this,FRHICommandListImmediate *param_1,FRHITexture *param_2)

{
  undefined4 uVar1;
  FRHITexture *pFVar2;
  longlong lVar3;
  TIntPoint<int>_u_0 TVar4;
  
  pFVar2 = (FRHITexture *)this->_padding_;
  if (pFVar2 != param_2) {
    this->_padding_ = (longlong)param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pFVar2 = (FRHITexture *)this->_padding_;
  if (pFVar2 != param_2) {
    this->_padding_ = (longlong)param_2;
    if (param_2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_2);
    }
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  FRHICommandListBase::UpdateTextureReference
            ((FRHICommandListBase *)param_1,
             *(FRHITextureReference **)(this->Owner->_padding_ + 0x20),param_2);
  TVar4 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
    uVar1 = *(undefined4 *)(lVar3 + 0x28);
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
    TVar4._s_0.Y = uVar1;
    TVar4._s_0.X = *(undefined4 *)(lVar3 + 0x24);
  }
  this->OwnerDim->field0_0x0 = TVar4;
  return;
}

