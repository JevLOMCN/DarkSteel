// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// GetOrCreateSRV @ 145caa460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIShaderResourceView * __thiscall
FRHIBufferViewCache::GetOrCreateSRV
          (FRHIBufferViewCache *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,
          FRHIBufferSRVCreateInfo *param_3)

{
  int *piVar1;
  EBufferUsageFlags EVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FRHIShaderResourceView *pFVar8;
  char cVar9;
  undefined8 *puVar10;
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar11;
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar12;
  undefined1 local_res20 [8];
  FLLMScope local_58 [2];
  FRHIShaderResourceView *local_50;
  FMemScope local_48;
  undefined4 local_40;
  uint uStack_3c;
  FRHIRayTracingScene *pFStack_38;
  
  if (param_3->RayTracingScene == (FRHIRayTracingScene *)0x0) {
    FVar11 = (this->SRVs).AllocatorInstance.SecondaryData;
    iVar7 = (this->SRVs).ArrayNum;
    if (FVar11 == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                   )0x0) {
      FVar11 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )&this->SRVs;
    }
    FVar12 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
             )((longlong)iVar7 * 0x20 + (longlong)FVar11);
    while( true ) {
      if ((this->SRVs).ArrayNum != iVar7) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar11 == FVar12) goto LAB_145caa502;
      if (((*(EPixelFormat *)FVar11 == param_3->Format) &&
          (*(uint *)((longlong)FVar11 + 4) == param_3->StartOffsetBytes)) &&
         ((*(uint *)((longlong)FVar11 + 8) == param_3->NumElements &&
          (*(FRHIRayTracingScene **)((longlong)FVar11 + 0x10) == param_3->RayTracingScene)))) break;
      FVar11 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )((longlong)FVar11 + 0x20);
    }
    pFVar8 = *(FRHIShaderResourceView **)((longlong)FVar11 + 0x18);
  }
  else {
LAB_145caa502:
    EVar2 = (param_2->Desc).Usage;
    local_40._0_2_ = 0;
    pFStack_38 = (FRHIRayTracingScene *)0x0;
    if ((EVar2 & ByteAddressBuffer) == None) {
      if ((EVar2 >> 0x10 & 1) == 0) {
        if ((EVar2 >> 0xd & 1) == 0) {
          cVar9 = '\x01';
          local_40._0_2_ = (ushort)param_3->Format << 8;
        }
        else {
          pFStack_38 = param_3->RayTracingScene;
          cVar9 = '\x03';
        }
      }
      else {
        cVar9 = '\x02';
      }
    }
    else {
      cVar9 = '\x04';
    }
    uVar3 = param_3->NumElements;
    local_40 = (uint)CONCAT12(cVar9,(short)local_40);
    _local_40 = CONCAT44(param_3->StartOffsetBytes,local_40);
    if (uVar3 != 0xffffffff) {
      if (((cVar9 == '\0') || (cVar9 == '\x03')) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer.SRV.BufferType != EBufferType::Unknown && Buffer.SRV.BufferType != EBufferType::AccelerationStructure"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xb35,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRHIShaderResourceView *)(*pcVar4)();
        return pFVar8;
      }
      pFStack_38 = (FRHIRayTracingScene *)CONCAT44(pFStack_38._4_4_,uVar3);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_58,`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                        ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_48,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_50,param_1,param_2,&local_40);
    FMemScope::~FMemScope(&local_48);
    FLLMScope::~FLLMScope(local_58);
    pFVar8 = local_50;
    if (param_3->RayTracingScene == (FRHIRayTracingScene *)0x0) {
      iVar7 = (this->SRVs).ArrayNum;
      piVar1 = &(this->SRVs).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_>
                          (0x820,&(this->SRVs).AllocatorInstance,piVar1);
      }
      (this->SRVs).ArrayNum = iVar7 + 1;
      FVar11 = (this->SRVs).AllocatorInstance.SecondaryData;
      uVar5 = *(undefined8 *)&param_3->NumElements;
      if (FVar11 == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                     )0x0) {
        FVar11 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                  )&this->SRVs;
      }
      puVar10 = (undefined8 *)((longlong)iVar7 * 0x20 + (longlong)FVar11);
      *puVar10 = *(undefined8 *)param_3;
      puVar10[1] = uVar5;
      puVar10[2] = param_3->RayTracingScene;
      puVar10[3] = 0;
      puVar10[3] = local_50;
    }
    else if (local_50 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_50);
    }
  }
  return pFVar8;
}

// GetOrCreateUAV @ 145caaa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIUnorderedAccessView * __thiscall
FRHIBufferViewCache::GetOrCreateUAV
          (FRHIBufferViewCache *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,
          FRHIBufferUAVCreateInfo *param_3)

{
  int *piVar1;
  int *piVar2;
  EBufferUsageFlags EVar3;
  FRHIUnorderedAccessView *pFVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar8;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar9;
  FLLMScope local_res8 [2];
  FRHICommandListBase *local_res10;
  FRHIUnorderedAccessView *local_58;
  FMemScope local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FVar9 = (this->UAVs).AllocatorInstance.SecondaryData;
  iVar6 = (this->UAVs).ArrayNum;
  piVar1 = &(this->UAVs).ArrayNum;
  FVar8 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          this;
  if (FVar9 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar8 = FVar9;
  }
  FVar9 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)iVar6 * 0x10 + (longlong)FVar8);
  local_res10 = param_1;
  while( true ) {
    if ((this->UAVs).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar9) break;
    if (((*(EPixelFormat *)FVar8 == param_3->Format) &&
        ((bool)*(uchar *)((longlong)FVar8 + 1) == param_3->bSupportsAtomicCounter)) &&
       ((bool)*(uchar *)((longlong)FVar8 + 2) == param_3->bSupportsAppendBuffer)) {
      return *(FRHIUnorderedAccessView **)((longlong)FVar8 + 8);
    }
    FVar8 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
            )((longlong)FVar8 + 0x10);
  }
  uStack_40 = 0;
  bVar5 = param_3->bSupportsAppendBuffer * '\x02' & 2U ^ param_3->bSupportsAtomicCounter & 1U;
  EVar3 = (param_2->Desc).Usage;
  if ((EVar3 & ByteAddressBuffer) == None) {
    if ((EVar3 >> 0x10 & 1) == 0) {
      if ((EVar3 >> 0xd & 1) == 0) {
        local_48._0_3_ = CONCAT12(1,CONCAT11(param_3->Format,1));
        local_48 = (ulonglong)CONCAT13(bVar5,(undefined3)local_48);
      }
      else {
        local_48 = (ulonglong)CONCAT13(bVar5,0x30001);
      }
    }
    else {
      local_48 = (ulonglong)CONCAT13(bVar5,0x20001);
    }
  }
  else {
    local_48 = (ulonglong)CONCAT13(bVar5,0x40001);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name991,L"RHIMisc/CreateUnorderedAccessView");
    _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name991,false,None,Default,true);
  FMemScope::FMemScope
            (&local_50,
             &`public:_class_TRefCountPtr<FRHIUnorderedAccessView>___cdecl_FRHICommandListBase::CreateUnorderedAccessView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferUAV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name991,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b8))(GDynamicRHI,&local_58,local_res10,param_2,&local_48)
  ;
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  pFVar4 = local_58;
  iVar6 = *piVar1;
  piVar2 = &(this->UAVs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_>
                      (0x810,(ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                              *)this,piVar2);
    *piVar1 = iVar6;
  }
  *piVar1 = iVar6 + 1;
  FVar9 = (this->UAVs).AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    this = (FRHIBufferViewCache *)FVar9;
  }
  puVar7 = (undefined2 *)((longlong)iVar6 * 0x10 + (longlong)this);
  *puVar7 = *(undefined2 *)param_3;
  *(bool *)(puVar7 + 1) = param_3->bSupportsAppendBuffer;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(FRHIUnorderedAccessView **)(puVar7 + 4) = local_58;
  return pFVar4;
}

// SetDebugName @ 145cbeaf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIBufferViewCache::SetDebugName
          (FRHIBufferViewCache *this,FRHICommandListBase *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->UAVs).AllocatorInstance.SecondaryData;
  piVar1 = &(this->UAVs).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    this = (FRHIBufferViewCache *)FVar3;
  }
  FVar3 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)iVar2 * 0x10 + (longlong)this);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
        this == FVar3) break;
    (**(code **)(GDynamicRHI->_padding_ + 0x208))
              (GDynamicRHI,param_1,*(undefined8 *)((longlong)this + 8),param_2);
    this = (FRHIBufferViewCache *)((longlong)this + 0x10);
  }
  return;
}

