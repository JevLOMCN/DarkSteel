// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// InitRHI @ 1489627b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVectorFieldAnimatedResource::InitRHI
          (FVectorFieldAnimatedResource *this,FRHICommandListBase *param_1)

{
  byte bVar1;
  char cVar2;
  FRHIResource *this_00;
  longlong *plVar3;
  longlong *plVar4;
  FRHIUnorderedAccessView *this_01;
  code *pcVar5;
  bool bVar6;
  FRHITextureCreateDesc *pFVar7;
  TRefCountPtr<FRHITexture> TVar8;
  longlong lVar9;
  Type TVar10;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar11;
  undefined1 auStackY_198 [32];
  FLLMScope local_158 [2];
  TRefCountPtr<FRHIUnorderedAccessView> local_150;
  undefined1 local_148 [80];
  wchar_t *local_f8;
  FResourceBulkDataInterface *local_e8;
  FNameEntryId local_e0;
  ERHITextureInitAction local_dc;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FRHITextureCreateDesc local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (!GRHIGlobals.SupportsTexture3D) {
    return;
  }
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeX > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x403,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeY > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x404,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((int)this->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeZ > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x405,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar10 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar10 = GMaxRHIFeatureLevel;
  }
  pFVar7 = FRHITextureCreateDesc::Create3D
                     (&local_b8,L"FVectorFieldAnimatedResource",(int)this->_padding_,
                      *(int *)((longlong)&this->_padding_ + 4),(int)this->_padding_,PF_FloatRGBA);
  lVar9 = 0x20008;
  if ((int)TVar10 < 3) {
    lVar9 = 0;
  }
  pFVar7->_padding_ = lVar9;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)(local_148 + 0x10),(FRHITextureDesc *)pFVar7);
  local_e8 = (FResourceBulkDataInterface *)pFVar7->DebugName;
  local_e0.Value = pFVar7->InitialState;
  local_dc = pFVar7->InitAction;
  local_d8 = (FName)pFVar7->BulkData;
  local_d0 = pFVar7->ClassName;
  local_c8 = pFVar7->OwnerName;
  if ((void *)local_b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  TVar8 = FRHICommandListBase::CreateTexture(param_1,(FRHITextureCreateDesc *)local_148);
  plVar4 = &this->_padding_;
  if ((FRHITexture *)plVar4 != TVar8.Reference) {
    this_00 = (FRHIResource *)*plVar4;
    *plVar4 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if ((FRHIResource *)local_148._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148._0_8_);
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar10 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar10 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar10) {
    plVar3 = (longlong *)*plVar4;
    if ((plVar3 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TargetTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xc0b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = (**(code **)(*plVar3 + 0x20))(plVar3);
    cVar2 = *(char *)(lVar9 + 0x32);
    if (((((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) &&
        ((cVar2 != '\x03' && (cVar2 != '\x04')))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xbfb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = (longlong *)*plVar4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name997,L"RHIMisc/CreateUnorderedAccessView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_158,
               `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name997,false,None,Default,true);
    FMemScope::FMemScope
              ((FMemScope *)(local_148 + 8),
               &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name997,true);
    lVar9 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if ((lVar9 != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Texture->GetTextureReference() == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x3e6,
                           L"Creating an unordered access view of an FRHITextureReference is not supported."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_150,param_1,plVar4);
    FMemScope::~FMemScope((FMemScope *)(local_148 + 8));
    FLLMScope::~FLLMScope(local_158);
    pTVar11 = &this->VolumeTextureUAV;
    if (pTVar11 != &local_150) {
      this_01 = pTVar11->Reference;
      pTVar11->Reference = local_150.Reference;
      local_150.Reference = (FRHIUnorderedAccessView *)0x0;
      if (this_01 == (FRHIUnorderedAccessView *)0x0) goto LAB_148962b21;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    if (local_150.Reference != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_150.Reference);
    }
  }
LAB_148962b21:
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// ReleaseRHI @ 148977810

void __thiscall FVectorFieldAnimatedResource::ReleaseRHI(FVectorFieldAnimatedResource *this)

{
  FRHIUnorderedAccessView *this_00;
  FRHIResource *this_01;
  
  this_00 = (this->VolumeTextureUAV).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    (this->VolumeTextureUAV).Reference = (FRHIUnorderedAccessView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (FRHIResource *)this->_padding_;
  if (this_01 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_01);
    return;
  }
  return;
}

// ResetVectorField @ 14897a2c0

void __thiscall FVectorFieldAnimatedResource::ResetVectorField(FVectorFieldAnimatedResource *this)

{
  this->FrameTime = 0.0;
  return;
}

// Update @ 1489882c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVectorFieldAnimatedResource::Update
          (FVectorFieldAnimatedResource *this,FRHICommandListImmediate *param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  UTexture2D *this_00;
  UVectorFieldAnimated *pUVar3;
  TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters> this_01;
  UVectorFieldStatic *pUVar4;
  FVectorFieldResource *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  FShader *pFVar8;
  bool bVar9;
  Type TVar10;
  int iVar11;
  FTextureResource *pFVar12;
  FShaderParametersMetadata *pFVar13;
  TRefCountPtr<FRHIUniformBuffer> TVar14;
  FGlobalShaderMap *this_02;
  FShaderType *pFVar15;
  FName this_03;
  FRHIComputeShader *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  FRHITexture *local_res8;
  TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters> local_res20;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  FRHIResource *local_188 [2];
  TShaderRefBase<FCompositeAnimatedVectorFieldCS,FShaderMapPointerTable> local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  uint local_130;
  int local_128;
  undefined2 local_124;
  ForAnyElementType local_120;
  ForAnyElementType local_118;
  int local_110;
  undefined1 local_10c;
  undefined1 local_100;
  int local_f8;
  undefined2 local_f4;
  ForAnyElementType local_f0;
  ForAnyElementType local_e8;
  uint local_e0;
  undefined1 local_dc;
  ForAnyElementType local_d0;
  TOptional<FRHIBreadcrumbScope> local_c8;
  undefined1 local_b0 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_a8;
  FString local_98;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78 [2];
  FShaderTarget_u_0 local_58;
  int iStack_54;
  
  bVar9 = IsInRenderingThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x42a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar10 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar10 = GMaxRHIFeatureLevel;
  }
  if ((((2 < (int)TVar10) && (this->AnimatedVectorField != (UVectorFieldAnimated *)0x0)) &&
      (this_00 = (this->AnimatedVectorField->Texture).field0_0x0.DebugPtr,
      this_00 != (UTexture2D *)0x0)) &&
     (pFVar12 = UTexture::GetResource((UTexture *)this_00), pFVar12 != (FTextureResource *)0x0)) {
    local_c8.bIsSet = false;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      local_58.Packed = 0;
      iStack_54 = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._12_8_ = ZEXT48((uint)local_78[1]._12_4_);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_AnimateVectorFi;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x42e;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FVectorFieldAnimatedResource::Update'::__l17::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_a8._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVectorFieldAnimatedResource::Update(FRHICommandListImmediate&___ptr64,float)___ptr64'::`17'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    TOptional<FRHIBreadcrumbScope>::
    Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
              (&local_c8,(FRHIComputeCommandList *)param_1,&local_a8);
    pUVar3 = this->AnimatedVectorField;
    local_13c = param_2 * pUVar3->FramesPerSecond + this->FrameTime;
    this->FrameTime = local_13c;
    iVar18 = pUVar3->FrameCount;
    iVar2 = pUVar3->SubImagesX;
    iVar11 = (int)local_13c;
    if (pUVar3->bLoop == 0) {
      iVar18 = iVar18 + -1;
      iVar17 = iVar18;
      if (iVar11 < iVar18) {
        iVar17 = iVar11;
      }
      iVar19 = iVar17 / iVar2;
      iVar11 = iVar17 % iVar2;
      if (iVar17 + 1 < iVar18) {
        iVar18 = iVar17 + 1;
      }
    }
    else {
      iVar17 = (int)((longlong)iVar11 % (longlong)iVar18);
      uVar6 = (ulonglong)(uint)(iVar17 >> 0x1f) << 0x20 |
              (longlong)iVar11 % (longlong)iVar18 & 0xffffffffU;
      iVar19 = (int)((longlong)uVar6 / (longlong)iVar2);
      iVar11 = (int)((longlong)uVar6 % (longlong)iVar2);
      iVar18 = (iVar17 + 1) % iVar18;
    }
    local_168 = __real_3f800000 / (float)iVar2;
    local_164 = __real_3f800000 / (float)pUVar3->SubImagesY;
    local_15c = (float)iVar19 * local_164;
    local_160 = (float)iVar11 * local_168;
    local_14c = (float)(iVar18 / iVar2) * local_164;
    local_150 = (float)(iVar18 % iVar2) * local_168;
    local_148 = __real_3f800000 / (float)(int)this->_padding_;
    local_144 = __real_3f800000 / (float)*(int *)((longlong)&this->_padding_ + 4);
    local_140 = __real_3f800000 / (float)(int)this->_padding_;
    local_158 = local_168;
    local_154 = local_164;
    fVar20 = (float)truncf();
    pUVar3 = this->AnimatedVectorField;
    local_13c = local_13c - fVar20;
    local_138 = pUVar3->NoiseScale;
    local_134 = pUVar3->NoiseMax;
    local_130 = (uint)(pUVar3->ConstructionOp).Value;
    pFVar13 = FCompositeAnimatedVectorFieldUniformParameters::GetStructMetadata();
    if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar14 = RHICreateUniformBuffer
                       (local_188,(FRHIUniformBufferLayout *)&local_168,
                        (EUniformBufferUsage)(pFVar13->Layout).Reference,None);
    this_01 = (TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters>)
              (TVar14.Reference)->_padding_;
    local_res20 = this_01;
    if (this_01 != (TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
      pFVar13 = FCompositeAnimatedVectorFieldUniformParameters::GetStructMetadata();
      if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((FName)(pFVar13->Layout).Reference != *(FName *)((longlong)this_01 + 0x40)) {
        pFVar13 = FCompositeAnimatedVectorFieldUniformParameters::GetStructMetadata();
        if (((pFVar13->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    if (local_188[0] != (FRHIResource *)0x0) {
      FRHIResource::Release(local_188[0]);
    }
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    TVar10 = (uint)bVar1;
    if (bVar1 == 5) {
      TVar10 = GMaxRHIFeatureLevel;
    }
    this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar10]);
    pFVar15 = (FShaderType *)FCompositeAnimatedVectorFieldCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_02,&local_198,pFVar15,0);
    if ((FCompositeAnimatedVectorFieldCS *)local_198.ShaderContent ==
        (FCompositeAnimatedVectorFieldCS *)0x0) {
      this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b0);
      ::FName::ToString((FName *)this_03,&local_98);
      FCompositeAnimatedVectorFieldCS::GetStaticType();
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FCompositeAnimatedVectorFieldCS::GetStaticType();
    pFVar8 = local_198.ShaderContent;
    local_178.ShaderContent = (FCompositeAnimatedVectorFieldCS *)local_198.ShaderContent;
    local_res8 = (GBlackVolumeTexture->TextureRHI).Reference;
    pUVar4 = (this->AnimatedVectorField->NoiseField).field0_0x0.DebugPtr;
    if ((pUVar4 != (UVectorFieldStatic *)0x0) &&
       (pFVar5 = pUVar4->Resource, pFVar5 != (FVectorFieldResource *)0x0)) {
      local_res8 = (pFVar5->VolumeTextureRHI).Reference;
    }
    local_120.Data = (FScriptContainerElement *)(this->VolumeTextureUAV).Reference;
    local_198.ShaderContent = (FShader *)&local_128;
    local_198.ShaderMap._0_4_ = 1;
    local_88._12_4_ = local_198.ShaderMap._4_4_;
    local_88.ArrayNum = 1;
    local_128 = -1;
    local_124 = 0xffff;
    local_118._0_1_ = 3;
    local_118._4_4_ = 0;
    local_110 = 0x400;
    local_10c = 0;
    local_100 = 0;
    local_88.DataPtr = (FRHITransitionInfo *)local_198.ShaderContent;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_88,None);
    pFVar16 = (FRHIComputeShader *)
              TShaderRefBase<FCompositeAnimatedVectorFieldCS,FShaderMapPointerTable>::
              GetRHIShaderBase(&local_178,SF_Compute,true);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar16);
    pFVar12 = UTexture::GetResource
                        ((UTexture *)(this->AnimatedVectorField->Texture).field0_0x0.DebugPtr);
    SetShaderParametersLegacyCS<FRHICommandListImmediate,FCompositeAnimatedVectorFieldCS,TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters>_&,TRefCountPtr<FRHIUnorderedAccessView>_&,TRefCountPtr<FRHITexture>_&,FRHITexture_*_&>
              (param_1,&local_178,&local_res20,&this->VolumeTextureUAV,
               (TRefCountPtr<FRHITexture> *)&pFVar12->_padding_,&local_res8);
    iVar18 = (int)this->_padding_;
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    iVar11 = (int)this->_padding_;
    DispatchComputeShader
              ((FRHIComputeCommandList *)param_1,pFVar8,(int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3,
               (int)((iVar2 >> 0x1f & 7U) + iVar2) >> 3,(int)((iVar18 >> 0x1f & 7U) + iVar18) >> 3);
    UnsetShaderParametersLegacyCS<FRHICommandListImmediate,FCompositeAnimatedVectorFieldCS>
              (param_1,&local_178);
    local_f0.Data = (FScriptContainerElement *)(this->VolumeTextureUAV).Reference;
    local_198.ShaderContent = (FShader *)&local_f8;
    local_198.ShaderMap._0_4_ = 1;
    local_78[0]._12_4_ = local_198.ShaderMap._4_4_;
    local_78[0].ArrayNum = 1;
    local_f8 = -1;
    local_f4 = 0xffff;
    local_e8._0_1_ = 3;
    local_e8._4_4_ = 0x400;
    local_e0 = 0x70;
    local_dc = 0;
    local_d0._0_1_ = 0;
    local_78[0].DataPtr = (FRHITransitionInfo *)local_198.ShaderContent;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,local_78,None);
    if (local_res20 != (TUniformBufferRef<FCompositeAnimatedVectorFieldUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_res20);
    }
    if (local_c8.bIsSet != false) {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_c8.TypedValue);
    }
  }
  return;
}

