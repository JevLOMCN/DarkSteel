// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 1478df960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticShadowDepthMap::InitRHI(FStaticShadowDepthMap *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  longlong lVar2;
  TRefCountPtr<FRHITexture> TVar3;
  FRHICommandListImmediate *pFVar4;
  wchar_t *pwVar5;
  FStaticShadowDepthMapData *pFVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStackY_258 [32];
  FLLMScope local_228 [2];
  undefined1 local_220 [16];
  FMemScope local_210;
  longlong local_208 [2];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined2 local_1ec;
  FMemScope local_1e8;
  longlong local_1e0 [2];
  int local_1d0;
  undefined1 local_1c8 [28];
  FRHIGPUMask local_1ac;
  uint local_1a8;
  TIntPoint<int>_u_0 local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined2 local_194;
  ForElementType<EPixelFormat> local_188;
  int local_180;
  int local_17c;
  wchar_t *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FRHITextureDesc local_c8;
  wchar_t *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_210 = (FMemScope)param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     (((pFVar6 = this->Data, pFVar6 != (FStaticShadowDepthMapData *)0x0 &&
       (local_220._0_4_ = pFVar6->ShadowMapSizeX, 0 < (int)local_220._0_4_)) &&
      ((local_220._4_4_ = pFVar6->ShadowMapSizeY, 0 < (int)local_220._4_4_ &&
       (2 < (int)GMaxRHIFeatureLevel)))))) {
    local_1ac.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_178 = L"FStaticShadowDepthMap";
    local_1a4._s_0.Y = local_220._4_4_;
    local_1a4._s_0.X = local_220._0_4_;
    iVar7 = 0;
    local_1c8._0_8_ = None;
    local_1c8._8_8_ = &DAT_00000001;
    local_1c8._16_8_ = 0;
    local_1c8._24_4_ = 0.0;
    local_1a8 = 0;
    local_19c._0_2_ = 1;
    local_19c._2_2_ = 1;
    local_198._0_1_ = '\x01';
    local_198._1_1_ = '\x01';
    local_198._2_1_ = Texture2D;
    local_198._3_1_ = PF_R16F;
    local_194._0_1_ = PF_Unknown;
    local_194._1_1_ = 0xff;
    local_188 = (ForElementType<EPixelFormat>)0x0;
    local_180 = 0;
    local_17c = 1;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)local_1c8);
    local_f8 = local_178;
    local_f0 = (undefined4)local_170;
    local_ec = local_170._4_4_;
    local_e8 = local_168;
    local_e0 = local_160;
    local_d8 = local_158;
    if (local_188 != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_188);
    }
    FLazyName::Resolve(&::ClassName);
    local_e0 = CONCAT44(local_220._4_4_,local_220._0_4_);
    FRHITextureDesc::FRHITextureDesc(&local_c8,&local_148);
    local_78 = local_f8;
    local_70 = local_f0;
    local_6c = local_ec;
    local_68 = local_e8;
    local_60 = local_e0;
    local_58 = local_d8;
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    TVar3 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_220);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar3.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar3.Reference)->_padding_;
      (TVar3.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if ((FRHIResource *)CONCAT44(local_220._4_4_,local_220._0_4_) != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)CONCAT44(local_220._4_4_,local_220._0_4_));
    }
    FRHICommandListBase::GetAsImmediate(param_1);
    lVar2 = *plVar1;
    FLLMScope::FLLMScope(local_228,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_1e8,Textures,true);
    local_208[1] = 0;
    local_1f0 = 1;
    local_1f8 = 0;
    local_1ec = 0x100;
    local_208[0] = lVar2;
    FLLMScope::FLLMScope((FLLMScope *)(local_220 + 8),Textures,false,None,Default,true);
    FMemScope::FMemScope((FMemScope *)local_220,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_1e0);
    FMemScope::~FMemScope((FMemScope *)local_220);
    FLLMScope::~FLLMScope((FLLMScope *)(local_220 + 8));
    FMemScope::~FMemScope(&local_1e8);
    FLLMScope::~FLLMScope(local_228);
    pFVar6 = this->Data;
    uVar8 = pFVar6->ShadowMapSizeX * GPixelFormats[0x15].BlockBytes;
    if (0 < pFVar6->ShadowMapSizeY) {
      do {
        memcpy((void *)((ulonglong)(uint)(iVar7 * local_1d0) + local_1e0[0]),
               (pFVar6->DepthSamples).AllocatorInstance.Data + iVar7 * uVar8,(ulonglong)uVar8);
        pFVar6 = this->Data;
        iVar7 = iVar7 + 1;
      } while (iVar7 < pFVar6->ShadowMapSizeY);
    }
    pFVar4 = FRHICommandListBase::GetAsImmediate((FRHICommandListBase *)local_210);
    local_208[0] = *plVar1;
    local_208[1] = 0;
    local_1f0 = 3;
    local_1f8 = 0;
    local_1ec = 0x100;
    FLLMScope::FLLMScope(local_228,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_210,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,pFVar4,local_208);
    FMemScope::~FMemScope(&local_210);
    FLLMScope::~FLLMScope(local_228);
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

