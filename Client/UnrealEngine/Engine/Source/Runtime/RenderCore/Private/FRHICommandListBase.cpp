// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// CreateUnorderedAccessView @ 145d1b800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FRHICommandListBase::CreateUnorderedAccessView
          (FRHICommandListBase *this,FRHITexture *param_1,FInitializer *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  TRefCountPtr<FRHIUnorderedAccessView> TVar4;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name997,L"RHIMisc/CreateUnorderedAccessView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name997,false,None,Default,true);
  FMemScope::FMemScope
            (local_res18,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name997,true);
  lVar3 = (**(code **)(*(longlong *)param_2 + 0x28))(param_2);
  if (lVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture->GetTextureReference() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x3e6,
                       L"Creating an unordered access view of an FRHITextureReference is not supported."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.Reference = (FRHIUnorderedAccessView *)(*pcVar1)();
      return (TRefCountPtr<FRHIUnorderedAccessView>)TVar4.Reference;
    }
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,param_1,this,param_2);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// CacheActiveRenderTargets @ 145da3520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::CacheActiveRenderTargets(FRHICommandListBase *this,FRHIRenderPassInfo *param_1)

{
  undefined1 *puVar1;
  FRHIRenderTargetView *pFVar2;
  FRHIRenderTargetView *pFVar3;
  uint uVar4;
  uint uVar5;
  ERenderTargetLoadAction EVar6;
  ERenderTargetStoreAction EVar7;
  undefined6 uVar8;
  FRHISetRenderTargetsInfo *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_208 [32];
  FRHISetRenderTargetsInfo local_1e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(&local_1e8);
  FRHIRenderPassInfo::ConvertToRenderTargetsInfo(param_1,&local_1e8);
  if (0 < local_1e8.NumColorRenderTargets) {
    pFVar9 = &local_1e8;
    uVar11 = 0;
    do {
      pFVar3 = pFVar9->ColorRenderTarget;
      uVar4 = pFVar9->ColorRenderTarget[0].MipIndex;
      uVar5 = pFVar9->ColorRenderTarget[0].ArraySliceIndex;
      uVar10 = (int)uVar11 + 1;
      EVar6 = pFVar9->ColorRenderTarget[0].LoadAction;
      EVar7 = pFVar9->ColorRenderTarget[0].StoreAction;
      uVar8 = *(undefined6 *)&pFVar9->ColorRenderTarget[0].field_0x12;
      pFVar9 = (FRHISetRenderTargetsInfo *)(pFVar9->ColorRenderTarget + 1);
      pFVar2 = (this->PersistentState).CachedRenderTargets.Elements + uVar11;
      pFVar2->Texture = pFVar3->Texture;
      pFVar2->MipIndex = uVar4;
      pFVar2->ArraySliceIndex = uVar5;
      pFVar2 = (this->PersistentState).CachedRenderTargets.Elements + uVar11;
      pFVar2->LoadAction = EVar6;
      pFVar2->StoreAction = EVar7;
      *(undefined6 *)&pFVar2->field_0x12 = uVar8;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < local_1e8.NumColorRenderTargets);
  }
  (this->PersistentState).bHasFragmentDensityAttachment = '\0';
  (this->PersistentState).CachedNumSimultanousRenderTargets = local_1e8.NumColorRenderTargets;
  puVar1 = &(this->PersistentState).field_0xdb;
  *puVar1 = *puVar1 | local_1e8.ShadingRateTexture != (FRHITexture *)0x0;
  (this->PersistentState).MultiViewCount = local_1e8.MultiViewCount;
  (this->PersistentState).CachedDepthStencilTarget.Texture =
       local_1e8.DepthStencilRenderTarget.Texture;
  (this->PersistentState).CachedDepthStencilTarget.DepthLoadAction =
       local_1e8.DepthStencilRenderTarget.DepthLoadAction;
  (this->PersistentState).CachedDepthStencilTarget.DepthStoreAction =
       local_1e8.DepthStencilRenderTarget.DepthStoreAction;
  (this->PersistentState).CachedDepthStencilTarget.StencilLoadAction =
       local_1e8.DepthStencilRenderTarget.StencilLoadAction;
  (this->PersistentState).CachedDepthStencilTarget.StencilStoreAction =
       local_1e8.DepthStencilRenderTarget.StencilStoreAction;
  (this->PersistentState).CachedDepthStencilTarget.DepthStencilAccess =
       (FExclusiveDepthStencil)local_1e8.DepthStencilRenderTarget.DepthStencilAccess.Value;
  return;
}

