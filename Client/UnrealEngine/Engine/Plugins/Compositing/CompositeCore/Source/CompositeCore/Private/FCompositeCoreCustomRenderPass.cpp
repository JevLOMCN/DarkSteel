// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 3

// GetTypeName @ 14ea7fdc0

FName * __thiscall FCompositeCoreCustomRenderPass::GetTypeName(FCompositeCoreCustomRenderPass *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FCompositeCoreCustomRenderPass");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FCompositeCoreCustomRenderPass::GetTypeNameStatic(void)'
          ::__l2::Name;
}

// OnPostRender @ 14ea80f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreCustomRenderPass::OnPostRender
          (FCompositeCoreCustomRenderPass *this,FRDGBuilder *param_1)

{
  FCompositeCoreSceneViewExtension *pFVar1;
  FRDGTexture *pFVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  undefined1 auStackY_b8 [32];
  uint local_88;
  undefined4 uStack_84;
  undefined1 local_78 [24];
  float local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_78._0_8_ = 0x20009;
  local_54 = *(undefined8 *)(this->_padding_ + 0xa4);
  local_88 = (uint)local_54;
  uStack_84 = SUB84(local_54,4);
  local_60 = FClearValueBinding::Black.Value.Color[3];
  local_58 = 0;
  local_5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_78._8_8_ = FClearValueBinding::Black._0_8_;
  local_78._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_4c = 0x10001;
  local_48 = 0xa000101;
  local_44 = 0xff00;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_2c = 1;
  pFVar2 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_78,L"CompositeCoreProcessedTexture",None);
  UE::CompositeCore::Private::AddDilatePass
            (param_1,(FRDGTexture *)this->_padding_,pFVar2,this->ViewFeatureLevel,&this->Inputs);
  pFVar1 = this->ParentExtension;
  pTVar3 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar2);
  local_88 = this->ViewId;
  TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  ::Emplace<unsigned_int_const_&,TRefCountPtr<IPooledRenderTarget>_const_&>
            (&pFVar1->CustomRenderTargetPerView_RenderThread,&local_88,pTVar3);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// OnPreRender @ 14ea81090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreCustomRenderPass::OnPreRender
          (FCompositeCoreCustomRenderPass *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  undefined1 auStack_98 [32];
  TIntRect<int>_u_0 local_78;
  undefined1 local_68 [24];
  float local_50;
  int local_4c;
  undefined4 local_48;
  TIntPoint<int>_u_0 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)this->_padding_;
  local_50 = FClearValueBinding::Black.Value.Color[3];
  local_4c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1c = 1;
  local_68._0_8_ = 9;
  local_68._8_8_ = FClearValueBinding::Black._0_8_;
  local_68._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_48 = 0;
  local_3c = 0x10001;
  local_38 = 0xa000101;
  local_34 = 0xff00;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_44 = (TIntPoint<int>_u_0)local_78._s_0.Min.field0_0x0;
  pFVar1 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_68,L"CompositeCoreCustomTexture",None);
  local_78._s_0.Max.field0_0x0 = (TIntPoint<int>)this->_padding_;
  this->_padding_ = (longlong)pFVar1;
  local_78._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  AddClearRenderTargetPass(param_1,pFVar1,&FLinearColor::Black,(TIntRect<int> *)&local_78._s_0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

