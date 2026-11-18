// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// GetNumBytes @ 145e9e000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FRDGScatterUploadBuffer::GetNumBytes(FRDGScatterUploadBuffer *this)

{
  FRDGPooledBuffer *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->ScatterBuffer).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->UploadBuffer).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    return (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement + uVar2;
  }
  return uVar2;
}

// Init @ 145ea2c70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGScatterUploadBuffer::Init
          (FRDGScatterUploadBuffer *this,FRDGBuilder *param_1,uint param_2,uint param_3,bool param_4
          ,wchar_t *param_5)

{
  longlong *plVar1;
  FRHICommandListBase *this_00;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined4 uStack_8c;
  FRDGBufferDesc local_80;
  FRDGBufferDesc local_68;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId820,"FRDGScatterUploadBuffer::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x334);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId820);
  }
  uVar13 = param_2 * 4;
  this->bFloat4Buffer = param_4;
  *(uint *)&this->_padding_ = param_3;
  iVar15 = (param_4 ^ 1) << 4;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2;
  this_00 = (FRHICommandListBase *)param_1->_padding_;
  lVar14 = 4;
  if (param_4) {
    lVar14 = 0x10;
  }
  uVar10 = 1;
  if (uVar13 != 0) {
    uVar10 = (ulonglong)uVar13;
  }
  uVar10 = uVar10 - 1;
  lVar3 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  cVar11 = (char)lVar3;
  if (uVar10 == 0) {
    cVar11 = -1;
  }
  uVar10 = 1L << (0x40U - ('?' - cVar11) & 0x3f);
  uVar9 = 0x20000000;
  if (uVar10 < 0x20000000) {
    uVar9 = (uint)uVar10;
  }
  if ((uVar9 < uVar13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScatterBufferSize >= ScatterBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x343,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = param_2 * (int)this->_padding_;
  uVar10 = 1;
  if (uVar12 != 0) {
    uVar10 = (ulonglong)uVar12;
  }
  uVar10 = uVar10 - 1;
  lVar3 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  cVar11 = (char)lVar3;
  if (uVar10 == 0) {
    cVar11 = -1;
  }
  uVar10 = 1L << (0x40U - ('?' - cVar11) & 0x3f);
  uVar5 = (uint)(lVar14 << 0x1b);
  if (uVar10 < (ulonglong)(lVar14 << 0x1b)) {
    uVar5 = (uint)uVar10;
  }
  if ((uVar5 < uVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("UploadBufferSize >= UploadBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                         ,0x348,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = IsRegistered(param_1,&this->ScatterBuffer);
  if (bVar6) {
    pFVar2 = (this->ScatterBuffer).Reference;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      (this->ScatterBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)();
      }
    }
    pFVar2 = (this->UploadBuffer).Reference;
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      (this->UploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)();
      }
    }
  }
  pFVar2 = (this->ScatterBuffer).Reference;
  if (((pFVar2 == (FRDGPooledBuffer *)0x0) ||
      (uVar7 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement, uVar7 < uVar13)) ||
     (uVar9 < uVar7 >> 1)) {
    local_80.NumElements = uVar9 >> 2;
    local_80.BytesPerElement = 4;
    local_80._8_8_ = CONCAT44(uStack_8c,iVar15) | 0x10100;
    local_80.Metadata = (FShaderParametersMetadata *)0x0;
    AllocatePooledBuffer(&local_80,&this->ScatterBuffer,param_5,None);
  }
  pFVar2 = (this->UploadBuffer).Reference;
  if (((pFVar2 == (FRDGPooledBuffer *)0x0) ||
      (uVar9 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement, uVar9 < uVar12)) ||
     (uVar5 < uVar9 >> 1)) {
    local_68.NumElements = uVar5 / (uint)lVar14;
    local_68.BytesPerElement = (uint)lVar14;
    local_68._8_8_ = CONCAT44(uStack_8c,iVar15) | 0x10100;
    local_68.Metadata = (FShaderParametersMetadata *)0x0;
    AllocatePooledBuffer(&local_68,&this->UploadBuffer,param_5,None);
  }
  pvVar8 = FRHICommandListBase::LockBuffer
                     (this_00,(((this->ScatterBuffer).Reference)->Buffer).Reference,0,uVar13,
                      RLM_WriteOnly);
  this->_padding_ = (longlong)pvVar8;
  pvVar8 = FRHICommandListBase::LockBuffer
                     (this_00,(((this->UploadBuffer).Reference)->Buffer).Reference,0,uVar12,
                      RLM_WriteOnly);
  this->_padding_ = (longlong)pvVar8;
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Init @ 145ea3000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGScatterUploadBuffer::Init
          (FRDGScatterUploadBuffer *this,FRDGBuilder *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,bool param_4,wchar_t *param_5)

{
  uint uVar1;
  
  uVar1 = param_2->ArrayNum;
  Init(this,param_1,uVar1,param_3,param_4,param_5);
  memcpy((void *)this->_padding_,param_2->DataPtr,(longlong)(int)uVar1 << 2);
  *(uint *)&this->_padding_ = uVar1;
  return;
}

// InitPreSized @ 145ea3550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGScatterUploadBuffer::InitPreSized
          (FRDGScatterUploadBuffer *this,FRDGBuilder *param_1,uint param_2,uint param_3,bool param_4
          ,wchar_t *param_5)

{
  Init(this,param_1,param_2,param_3,param_4,param_5);
  *(uint *)&this->_padding_ = param_2;
  return;
}

// Release @ 145eae3b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGScatterUploadBuffer::Release(FRDGScatterUploadBuffer *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  
  if (this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ScatterData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                       ,0x26f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->ScatterBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->ScatterBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->UploadBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->UploadBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return;
}

// Reset @ 145eb0c00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRDGScatterUploadBuffer::Reset(FRDGScatterUploadBuffer *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// ResourceUploadToInternal @ 145eb2cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGScatterUploadBuffer::ResourceUploadToInternal
          (FRDGScatterUploadBuffer *this,FRDGBuilder *param_1,FRDGViewableResource *param_2)

{
  FRHICommandListBase *this_00;
  code *pcVar1;
  bool bVar2;
  EResourceType EVar3;
  FRDGBufferSRV *pFVar4;
  FRDGBufferSRV *pFVar5;
  bool bVar6;
  FScatterCopyParams local_78;
  FRDGBufferSRVDesc local_68;
  FRDGBufferSRVDesc local_48;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId871,"FRDGScatterUploadBuffer::ResourceUploadTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
               ,0x367);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId871);
  }
  this_00 = (FRHICommandListBase *)param_1->_padding_;
  FRHICommandListBase::UnlockBuffer(this_00,(((this->ScatterBuffer).Reference)->Buffer).Reference);
  FRHICommandListBase::UnlockBuffer(this_00,(((this->UploadBuffer).Reference)->Buffer).Reference);
  this->_padding_ = 0;
  this->_padding_ = 0;
  if ((int)this->_padding_ != 0) {
    EVar3 = GetResourceType(param_2);
    if ((this->bFloat4Buffer == (EVar3 == BYTEBUFFER)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFloat4Buffer != (DstResourceType == EResourceType::BYTEBUFFER)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\UnifiedBuffer.cpp"
                           ,0x376,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_68.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->ScatterBuffer,None);
    local_68._padding_._4_4_ = 0;
    local_68._padding_._0_4_ = 0xffffffff;
    local_68._padding_ = 0;
    local_68._padding_._0_1_ = 0;
    if ((((local_68.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_68._padding_._0_1_ = 0x1c;
    }
    pFVar4 = FRDGBuilder::CreateSRV(param_1,&local_68);
    local_48.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->UploadBuffer,None);
    local_48._padding_._0_1_ = 0;
    local_48._padding_._4_4_ = 0;
    local_48._padding_._0_4_ = 0xffffffff;
    local_48._padding_ = 0;
    if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_48._padding_._0_1_ = 0x1c;
    }
    pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_48);
    local_78.NumScatters = (uint)this->_padding_;
    local_78.NumBytesPerElement = (uint)this->_padding_;
    local_78.NumElementsPerScatter = -1;
    ScatterCopyResource(param_1,param_2,pFVar4,pFVar5,&local_78);
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

