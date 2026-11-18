// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// GetOrCreateSRV @ 145caa700

/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIShaderResourceView * __thiscall
FRHITextureViewCache::GetOrCreateSRV
          (FRHITextureViewCache *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          FRHITextureSRVCreateInfo *param_3)

{
  TArray<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar3;
  EPixelFormat *pEVar4;
  uchar uVar5;
  ushort uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FRHIShaderResourceView *pFVar10;
  longlong lVar11;
  FInitializer *pFVar12;
  ulonglong uVar13;
  ETextureDimension EVar14;
  ERHITexturePlane EVar15;
  ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar16;
  undefined1 local_res8 [8];
  FLLMScope local_58 [2];
  FRHIShaderResourceView *local_50;
  FMemScope local_48;
  FInitializer local_40;
  
  FVar16 = (this->SRVs).AllocatorInstance.SecondaryData;
  pTVar1 = &this->SRVs;
  iVar9 = (this->SRVs).ArrayNum;
  if (FVar16 == (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
              )pTVar1;
  }
  FVar3 = (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)
          ((longlong)FVar16 + (longlong)iVar9 * 0x18);
  while( true ) {
    if ((this->SRVs).ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar16 == FVar3) break;
    if ((((((*(EPixelFormat *)FVar16 == param_3->Format) &&
           (*(uchar *)((longlong)FVar16 + 1) == param_3->MipLevel)) &&
          (*(uchar *)((longlong)FVar16 + 2) == param_3->NumMipLevels)) &&
         ((*(ERHITextureSRVOverrideSRGBType *)((longlong)FVar16 + 3) == param_3->SRGBOverride &&
          (*(ushort *)((longlong)FVar16 + 4) == param_3->FirstArraySlice)))) &&
        ((*(ushort *)((longlong)FVar16 + 6) == param_3->NumArraySlices &&
         ((*(ERHITexturePlane *)((longlong)FVar16 + 8) == param_3->MetaData &&
          ((bool)*(char *)((longlong)FVar16 + 10) == (param_3->DimensionOverride).bIsSet)))))) &&
       ((*(char *)((longlong)FVar16 + 10) == '\0' ||
        (*(ETextureDimension *)((longlong)FVar16 + 9) == (param_3->DimensionOverride).TypedValue))))
    {
      return *(FRHIShaderResourceView **)((longlong)FVar16 + 0x10);
    }
    FVar16 = (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
              )((longlong)FVar16 + 0x18);
  }
  if ((param_2 == (FRHITexture *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x79b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar7)();
    return pFVar10;
  }
  lVar11 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  EVar14 = *(ETextureDimension *)(lVar11 + 0x32);
  if ((param_3->DimensionOverride).bIsSet != false) {
    EVar14 = (param_3->DimensionOverride).TypedValue;
  }
  local_40._8_8_ = 0;
  local_40._0_8_ = 2;
  pFVar12 = FRHIViewDesc::FTextureSRV::FInitializer::SetDimension(&local_40,EVar14);
  pFVar12->field_0x1 = param_3->Format;
  uVar5 = param_3->MipLevel;
  pFVar12->field_0x4 = param_3->NumMipLevels;
  pFVar12->field_0x3 = uVar5;
  EVar15 = None;
  if (param_3->SRGBOverride == SRGBO_ForceDisable) {
    EVar15 = 8;
  }
  EVar15 = EVar15 | pFVar12->field_0x2 & 0xf7;
  pFVar12->field_0x2 = EVar15;
  uVar6 = param_3->NumArraySlices;
  *(ushort *)&pFVar12->field_0x6 = param_3->FirstArraySlice;
  *(ushort *)&pFVar12->field_0x8 = uVar6;
  uVar13 = (ulonglong)_tls_index;
  pFVar12->field_0x2 = (EVar15 ^ param_3->MetaData) & Num ^ EVar15;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name983,L"RHIMisc/CreateShaderResourceView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_58,`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name983,false,None,Default,true);
  FMemScope::FMemScope
            (&local_48,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHITexture*___ptr64,FRHIViewDesc::FTextureSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name983,true);
  lVar11 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
  if ((lVar11 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3d8,
                         L"Creating a shader resource view of an FRHITextureReference is not supported."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar7)();
    return pFVar10;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_50,param_1,param_2,pFVar12);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_58);
  if ((local_50 == (FRHIShaderResourceView *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHIShaderResourceView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x7ab,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRHIShaderResourceView *)(*pcVar7)();
    return pFVar10;
  }
  pFVar10 = local_50;
  iVar9 = (this->SRVs).ArrayNum;
  piVar2 = &(this->SRVs).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->SRVs).ArrayNum = iVar9 + 1;
  FVar16 = (this->SRVs).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
              )pTVar1;
  }
  pEVar4 = (EPixelFormat *)((longlong)FVar16 + (longlong)iVar9 * 0x18);
  *pEVar4 = param_3->Format;
  pEVar4[1] = param_3->MipLevel;
  pEVar4[2] = param_3->NumMipLevels;
  pEVar4[3] = param_3->SRGBOverride;
  *(ushort *)(pEVar4 + 4) = param_3->FirstArraySlice;
  *(ushort *)(pEVar4 + 6) = param_3->NumArraySlices;
  pEVar4[8] = param_3->MetaData;
  pEVar4[10] = PF_Unknown;
  bVar8 = (param_3->DimensionOverride).bIsSet;
  pEVar4[10] = bVar8;
  if (bVar8 != false) {
    pEVar4[9] = (param_3->DimensionOverride).TypedValue;
  }
  pEVar4[0x10] = PF_Unknown;
  pEVar4[0x11] = PF_Unknown;
  pEVar4[0x12] = PF_Unknown;
  pEVar4[0x13] = PF_Unknown;
  pEVar4[0x14] = PF_Unknown;
  pEVar4[0x15] = PF_Unknown;
  pEVar4[0x16] = PF_Unknown;
  pEVar4[0x17] = PF_Unknown;
  *(FRHIShaderResourceView **)(pEVar4 + 0x10) = local_50;
  return pFVar10;
}

// GetOrCreateUAV @ 145caacc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHITexturePlane": Some values do not have unique names */

FRHIUnorderedAccessView * __thiscall
FRHITextureViewCache::GetOrCreateUAV
          (FRHITextureViewCache *this,FRHICommandListBase *param_1,FRHITexture *param_2,
          FRHITextureUAVCreateInfo *param_3)

{
  int *piVar1;
  int *piVar2;
  EPixelFormat *pEVar3;
  ushort uVar4;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRHIUnorderedAccessView *pFVar9;
  longlong lVar10;
  FInitializer *pFVar11;
  ETextureDimension EVar12;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar13;
  undefined1 local_res8 [8];
  FRHICommandListBase *local_res10;
  FLLMScope local_68 [2];
  FRHIUnorderedAccessView *local_60;
  FMemScope local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  iVar8 = (this->UAVs).ArrayNum;
  piVar1 = &(this->UAVs).ArrayNum;
  FVar5 = (this->UAVs).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
           )this;
  if (FVar5 != (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar13 = FVar5;
  }
  FVar5 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)FVar13 + (longlong)iVar8 * 0x18);
  local_res10 = param_1;
  while( true ) {
    if ((this->UAVs).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar13 == FVar5) break;
    if (((((*(EPixelFormat *)FVar13 == param_3->Format) &&
          (*(uchar *)((longlong)FVar13 + 1) == param_3->MipLevel)) &&
         (*(uchar *)((longlong)FVar13 + 6) == param_3->MetaData)) &&
        ((*(ushort *)((longlong)FVar13 + 2) == param_3->FirstArraySlice &&
         (*(ushort *)((longlong)FVar13 + 4) == param_3->NumArraySlices)))) &&
       (((bool)*(uchar *)((longlong)FVar13 + 8) == (param_3->DimensionOverride).bIsSet &&
        ((*(uchar *)((longlong)FVar13 + 8) == '\0' ||
         (*(uchar *)((longlong)FVar13 + 7) == (param_3->DimensionOverride).TypedValue)))))) {
      return *(FRHIUnorderedAccessView **)((longlong)FVar13 + 0x10);
    }
    FVar13 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
              )((longlong)FVar13 + 0x18);
  }
  if ((param_2 == (FRHITexture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x7bb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FRHIUnorderedAccessView *)(*pcVar6)();
    return pFVar9;
  }
  lVar10 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  EVar12 = *(ETextureDimension *)(lVar10 + 0x32);
  if ((param_3->DimensionOverride).bIsSet != false) {
    EVar12 = (param_3->DimensionOverride).TypedValue;
  }
  uStack_48 = 0;
  local_50 = &DAT_100000003;
  pFVar11 = FRHIViewDesc::FTextureUAV::FInitializer::SetDimension((FInitializer *)&local_50,EVar12);
  pFVar11->field_0x1 = param_3->Format;
  pFVar11->field_0x3 = param_3->MipLevel;
  uVar4 = param_3->NumArraySlices;
  *(ushort *)&pFVar11->field_0x6 = param_3->FirstArraySlice;
  *(ushort *)&pFVar11->field_0x8 = uVar4;
  pFVar11->field_0x2 = pFVar11->field_0x2 ^ (pFVar11->field_0x2 ^ param_3->MetaData) & Num;
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
            (local_68,`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name997,false,None,Default,true);
  FMemScope::FMemScope
            (&local_58,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHITexture*___ptr64,FRHIViewDesc::FTextureUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name997,true);
  lVar10 = (**(code **)(param_2->_padding_ + 0x28))(param_2);
  if ((lVar10 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Texture->GetTextureReference() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x3e6,
                         L"Creating an unordered access view of an FRHITextureReference is not supported."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FRHIUnorderedAccessView *)(*pcVar6)();
    return pFVar9;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_60,local_res10,param_2,pFVar11);
  FMemScope::~FMemScope(&local_58);
  FLLMScope::~FLLMScope(local_68);
  if ((local_60 == (FRHIUnorderedAccessView *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHIUnorderedAccessView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                         ,0x7ca,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FRHIUnorderedAccessView *)(*pcVar6)();
    return pFVar9;
  }
  pFVar9 = local_60;
  iVar8 = *piVar1;
  piVar2 = &(this->UAVs).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_>
                      (0x818,(ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                              *)this,piVar2);
    *piVar1 = iVar8;
  }
  *piVar1 = iVar8 + 1;
  FVar5 = (this->UAVs).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    this = (FRHITextureViewCache *)FVar5;
  }
  pEVar3 = (EPixelFormat *)((longlong)this + (longlong)iVar8 * 0x18);
  *pEVar3 = param_3->Format;
  pEVar3[1] = param_3->MipLevel;
  *(ushort *)(pEVar3 + 2) = param_3->FirstArraySlice;
  *(ushort *)(pEVar3 + 4) = param_3->NumArraySlices;
  pEVar3[6] = param_3->MetaData;
  pEVar3[8] = PF_Unknown;
  bVar7 = (param_3->DimensionOverride).bIsSet;
  pEVar3[8] = bVar7;
  if (bVar7 != false) {
    pEVar3[7] = (param_3->DimensionOverride).TypedValue;
  }
  pEVar3[0x10] = PF_Unknown;
  pEVar3[0x11] = PF_Unknown;
  pEVar3[0x12] = PF_Unknown;
  pEVar3[0x13] = PF_Unknown;
  pEVar3[0x14] = PF_Unknown;
  pEVar3[0x15] = PF_Unknown;
  pEVar3[0x16] = PF_Unknown;
  pEVar3[0x17] = PF_Unknown;
  *(FRHIUnorderedAccessView **)(pEVar3 + 0x10) = local_60;
  return pFVar9;
}

// SetDebugName @ 145cbeb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHITextureViewCache::SetDebugName
          (FRHITextureViewCache *this,FRHICommandListBase *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->UAVs).AllocatorInstance.SecondaryData;
  piVar1 = &(this->UAVs).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    this = (FRHITextureViewCache *)FVar3;
  }
  FVar3 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)this + (longlong)iVar2 * 0x18);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
        this == FVar3) break;
    (**(code **)(GDynamicRHI->_padding_ + 0x208))
              (GDynamicRHI,param_1,*(undefined8 *)((longlong)this + 0x10),param_2);
    this = (FRHITextureViewCache *)((longlong)this + 0x18);
  }
  return;
}

// ~FRHITextureViewCache @ 145cd2990

void __thiscall FRHITextureViewCache::~FRHITextureViewCache(FRHITextureViewCache *this)

{
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar1;
  ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar2;
  ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar3;
  
  FVar2 = (this->SRVs).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FVar2 = (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
            )&this->SRVs;
  }
  DestructItems<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int>
            ((TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_> *)FVar2,
             (this->SRVs).ArrayNum);
  FVar2 = (this->SRVs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar1 = (this->UAVs).AllocatorInstance.SecondaryData;
  FVar3 = (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          this;
  if (FVar1 != (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  DestructItems<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int>
            ((TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_> *)FVar3,
             (this->UAVs).ArrayNum);
  FVar1 = (this->UAVs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

