// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 152

// FValidationRHI @ 145cd2040

/* WARNING: Enum "Type": Some values do not have unique names */

FValidationRHI * __thiscall
FValidationRHI::FValidationRHI(FValidationRHI *this,FDynamicRHI *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FValidationRHI *pFVar4;
  longlong lVar5;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->RHI = param_1;
  *(undefined8 *)&this->DepthStencilStates = 0;
  *(undefined8 *)&(this->DepthStencilStates).field_0x8 = 0;
  *(undefined8 *)&(this->DepthStencilStates).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FValidationRHI__6B_;
  *(undefined4 *)&(this->DepthStencilStates).field_0x28 = 0;
  *(undefined4 *)&(this->DepthStencilStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->DepthStencilStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DepthStencilStates).field_0x34 = 0;
  *(undefined8 *)&(this->DepthStencilStates).field_0x40 = 0;
  *(undefined4 *)&(this->DepthStencilStates).field_0x48 = 0;
  this->RenderThreadFrameID = (atomic<unsigned___int64>)0x0;
  (this->RHIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIName).Data.ArrayNum = 0;
  (this->RHIName).Data.ArrayMax = 0;
  if ((this->RHI == (FDynamicRHI *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHI",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x240,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FValidationRHI *)(*pcVar1)();
    return pFVar4;
  }
  if (4 < (byte)LogRHI._0_1_) {
    if ((param_1 != (FDynamicRHI *)0x0) &&
       (lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1), lVar5 != 0)) {
      (**(code **)(param_1->_padding_ + 0x20))(param_1);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  GRHIValidationEnabled = true;
  if ((uint)(SeenFailureHashes.Elements._8_4_ - SeenFailureHashes.Elements._52_4_) < 0x100) {
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&SeenFailureHashes,0x100);
    for (lVar5 = 0x3f; 0x10fUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    iVar3 = 1 << ((byte)lVar5 & 0x1f);
    if ((SeenFailureHashes.HashSize == 0) || (SeenFailureHashes.HashSize < iVar3)) {
      SeenFailureHashes.HashSize = iVar3;
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash
                (&SeenFailureHashes);
    }
  }
  return this;
}

// ~FValidationRHI @ 145cd2d70

void __thiscall FValidationRHI::~FValidationRHI(FValidationRHI *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FValidationRHI__6B_;
  GRHIValidationEnabled = false;
  pFVar1 = (this->RHIName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DepthStencilStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DepthStencilStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DepthStencilStates);
  FDynamicRHI::~FDynamicRHI((FDynamicRHI *)this);
  return;
}

// AsyncReallocateTexture2D_RenderThread @ 145cd5880

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FValidationRHI::AsyncReallocateTexture2D_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,int param_3,
          int param_4,int param_5,FThreadSafeCounter *param_6)

{
  char cVar1;
  int iVar2;
  FState FVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  FResource *this_00;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined4 in_register_0000008c;
  longlong lVar11;
  uint uStackX_c;
  ushort uStack_1a;
  
  (**(code **)(this->RHI->_padding_ + 0x400))
            (this->RHI,param_1,param_2,CONCAT44(in_register_0000008c,param_3),param_4,param_5,
             param_6._0_4_);
  lVar9 = *(longlong *)param_1;
  lVar6 = (**(code **)(*(longlong *)(lVar9 + 0x28) + 8))(lVar9 + 0x28);
  pwVar10 = (wchar_t *)0x0;
  iVar2 = *(int *)(lVar6 + 0x30);
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    if (iVar2 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(lVar6 + 0x28);
    }
  }
  (**(code **)(**(longlong **)param_1 + 0x20))();
  lVar6 = (**(code **)(**(longlong **)param_1 + 0x20))();
  cVar1 = *(char *)(lVar6 + 0x33);
  this_00 = (FResource *)(**(code **)(*(longlong *)(lVar9 + 0x28) + 8))(lVar9 + 0x28);
  if (this_00 != (FResource *)0x0) {
    if ((cVar1 == '\v') || (uVar5 = 1, cVar1 == ',')) {
      uVar5 = 2;
    }
    this_00->NumPlanes = uVar5;
    lVar9 = (ulonglong)uStack_1a << 0x30;
    uStackX_c = uStackX_c & 0xffffff00;
    FVar3._4_4_ = uStackX_c;
    FVar3.Access = SRVMask;
    this_00->TrackedState = FVar3;
    bVar4 = 3;
    (this_00->TransientState).AcquireBacktrace = (void *)0x0;
    (this_00->TransientState).NumAcquiredSubresources = (int)lVar9;
    (this_00->TransientState).bTransient = (bool)(char)((ulonglong)lVar9 >> 0x20);
    (this_00->TransientState).Status = (char)((ulonglong)lVar9 >> 0x28);
    *(short *)&(this_00->TransientState).field_0xe = (short)((ulonglong)lVar9 >> 0x30);
    this_00->NumMips = param_4;
    this_00->NumArraySlices = 1;
    do {
      bVar8 = ~bVar4 + 1 & bVar4;
      if ((bVar8 == 1) || (bVar8 != 2)) {
        lVar9 = 0x54;
        lVar6 = 0x50;
        lVar11 = 0x48;
      }
      else {
        lVar9 = 0x7c;
        lVar6 = 0x78;
        lVar11 = 0x70;
      }
      *(undefined4 *)((longlong)&this_00->NumMips + lVar6) = 0x70;
      *(byte *)((longlong)&this_00->NumMips + lVar9) = bVar8;
      *(undefined8 *)((longlong)&this_00->NumMips + lVar11) =
           *(undefined8 *)((longlong)&this_00->NumMips + lVar6);
      bVar4 = bVar4 & ~(~bVar4 + 1);
    } while (bVar4 != 0);
    if (pwVar10 != (wchar_t *)0x0) {
      RHIValidation::FResource::SetDebugName(this_00,pwVar10,(wchar_t *)0x0);
    }
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// FlushPendingLogs @ 145cdbd30

void __thiscall FValidationRHI::FlushPendingLogs(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cdbd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x98))();
  return;
}

// GetInterfaceType @ 145cdcab0

ERHIInterfaceType __thiscall FValidationRHI::GetInterfaceType(FValidationRHI *this)

{
  ERHIInterfaceType EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145cdcab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->RHI->_padding_ + 0x28))();
  return EVar1;
}

// GetName @ 145cdcbb0

wchar_t * __thiscall FValidationRHI::GetName(FValidationRHI *this)

{
  if ((this->RHIName).Data.ArrayNum != 0) {
    return (wchar_t *)(this->RHIName).Data.AllocatorInstance.Data;
  }
  return L"";
}

// GetNonValidationRHI @ 145cdce70

FDynamicRHI * __thiscall FValidationRHI::GetNonValidationRHI(FValidationRHI *this)

{
  return this->RHI;
}

// Init @ 145cdf2e0

void __thiscall FValidationRHI::Init(FValidationRHI *this)

{
  wchar_t *pwVar1;
  
  (**(code **)(this->RHI->_padding_ + 8))();
  pwVar1 = (wchar_t *)(**(code **)(this->RHI->_padding_ + 0x20))();
  ::FString::operator=(&this->RHIName,pwVar1);
  ::FString::AppendChars(&this->RHIName,L"_Validation",0xb);
  LOCK();
  this->RenderThreadFrameID = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  this->RHIThreadFrameID = 0;
  return;
}

// LockBufferValidate @ 145ce14a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FValidationRHI::LockBufferValidate
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,
          EResourceLockMode param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  IRHICommandContext *pIVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  if (((!GRHIGlobals.SupportsMultithreadedResources) &&
      ((param_1->PersistentState).bImmediate == '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.SupportsMultithreadedResources || RHICmdList.IsImmediate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x418,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_3 == RLM_WriteOnly_NoOverwrite) && (GRHIGlobals.SupportsMapWriteNoOverwrite == false))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("LockMode != RLM_WriteOnly_NoOverwrite || GRHIGlobals.SupportsMapWriteNoOverwrite"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                            ,0x419,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->ActivePipelines == Graphics) && (((param_2->Desc).Usage & Volatile) == None)) &&
     (param_3 == RLM_WriteOnly)) {
    if (((GRHICommandList.bLatchedBypass == false) ||
        ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
      bVar4 = (param_1->PersistentState).bInsideRenderPass;
    }
    else {
      pIVar5 = FRHICommandListBase::GetContext(param_1);
      bVar4 = *(byte *)((longlong)
                        &pIVar5[3].RenderPassInfo.ColorRenderTargets.Elements[1].ResolveTarget + 1);
    }
    if (bVar4 != 0) {
      ::FString::PrintfImpl
                (&local_18,
                 L"Locking non-volatile buffers for writing inside a render pass is not allowed. Resource: \"%s\" (0x%p)."
                );
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar6.Data = local_18.Data.AllocatorInstance.Data;
      }
      ReportValidationFailure((wchar_t *)FVar6.Data);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LockBuffer_BottomOfPipe @ 145ce1610

/* WARNING: Removing unreachable block (ram,0x000145ce16f8) */
/* WARNING: Removing unreachable block (ram,0x000145ce172b) */
/* WARNING: Removing unreachable block (ram,0x000145ce178a) */
/* WARNING: Removing unreachable block (ram,0x000145ce1734) */
/* WARNING: Removing unreachable block (ram,0x000145ce1792) */
/* WARNING: Removing unreachable block (ram,0x000145ce1743) */
/* WARNING: Removing unreachable block (ram,0x000145ce1767) */
/* WARNING: Removing unreachable block (ram,0x000145ce176c) */
/* WARNING: Removing unreachable block (ram,0x000145ce17a9) */
/* WARNING: Removing unreachable block (ram,0x000145ce17b9) */
/* WARNING: Removing unreachable block (ram,0x000145ce17c5) */
/* WARNING: Removing unreachable block (ram,0x000145ce17c9) */
/* WARNING: Removing unreachable block (ram,0x000145ce17d5) */
/* WARNING: Removing unreachable block (ram,0x000145ce17de) */
/* WARNING: Removing unreachable block (ram,0x000145ce17e7) */
/* WARNING: Removing unreachable block (ram,0x000145ce17f2) */
/* WARNING: Removing unreachable block (ram,0x000145ce17f7) */
/* WARNING: Removing unreachable block (ram,0x000145ce180e) */
/* WARNING: Removing unreachable block (ram,0x000145ce181f) */
/* WARNING: Removing unreachable block (ram,0x000145ce1824) */
/* WARNING: Removing unreachable block (ram,0x000145ce182d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FValidationRHI::LockBuffer_BottomOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  wchar_t wVar1;
  void *pvVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  uint local_res8 [2];
  uint local_68 [16];
  
  if ((param_5 == RLM_WriteOnly_NoOverwrite) && (!GRHIGlobals.SupportsMapWriteNoOverwrite)) {
    uVar3 = 0xffffffff;
    pwVar4 = L"Using RLM_WriteOnly_NoOverwrite when the RHI doesn\'t support it.";
    wVar1 = L'U';
    do {
      pwVar4 = pwVar4 + 1;
      local_res8[0] =
           FCrc::CRCTablesSB8[1][uVar3 >> 0x10 & 0xff] ^
           FCrc::CRCTablesSB8[2][((ushort)wVar1 ^ uVar3) >> 8 & 0xff] ^
           FCrc::CRCTablesSB8[0][uVar3 >> 0x18] ^
           FCrc::CRCTablesSB8[3][((ushort)wVar1 ^ uVar3) & 0xff];
      uVar3 = (ulonglong)local_res8[0];
      wVar1 = *pwVar4;
    } while (wVar1 != L'\0');
    local_res8[0] = ~local_res8[0];
    EnterCriticalSection((LPCRITICAL_SECTION)&SeenFailureHashesMutex);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
    Emplace<unsigned_int_const_&>(&SeenFailureHashes,local_68,(bool *)local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&SeenFailureHashesMutex);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce1860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(**(code **)(this->RHI->_padding_ + 0x448))(this->RHI,param_1,param_2,param_3);
  return pvVar2;
}

// LockStagingBuffer_RenderThread @ 145ce1870

void * __thiscall
FValidationRHI::LockStagingBuffer_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2,
          FRHIGPUFence *param_3,uint param_4,uint param_5)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ce187e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0xf8))();
  return pvVar1;
}

// PostInit @ 145ce2870

void __thiscall FValidationRHI::PostInit(FValidationRHI *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FDynamicRHI *pFVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (((int)this->_padding_ < (this->RHI->PixelFormatBlockBytes).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHI->PixelFormatBlockBytes.Num() <= PixelFormatBlockBytes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                         ,0x4b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->RHI;
  pTVar7 = &pFVar4->PixelFormatBlockBytes;
  if (pTVar7 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&this->_padding_) {
    iVar2 = (pFVar4->PixelFormatBlockBytes).ArrayMax;
    piVar1 = &(pFVar4->PixelFormatBlockBytes).ArrayMax;
    _Src = (void *)this->_padding_;
    iVar3 = (int)this->_padding_;
    (pFVar4->PixelFormatBlockBytes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,iVar2,&pTVar7->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce2937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x10))();
  return;
}

// RHIAcquireThreadOwnership @ 145ce2950

void __thiscall FValidationRHI::RHIAcquireThreadOwnership(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce2957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x2f0))();
  return;
}

// RHIAdvanceFrameForGetViewportBackBuffer @ 145ce2970

void __thiscall
FValidationRHI::RHIAdvanceFrameForGetViewportBackBuffer
          (FValidationRHI *this,FRHIViewport *param_1,bool param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce2977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x2e8))();
  return;
}

// RHIAliasTextureResources @ 145ce2990

void __thiscall
FValidationRHI::RHIAliasTextureResources
          (FValidationRHI *this,TRefCountPtr<FRHITexture> *param_1,
          TRefCountPtr<FRHITexture> *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1->Reference == (FRHITexture *)0x0) || (param_2->Reference == (FRHITexture *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestTexture && SourceTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x2f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = (**(code **)(param_2->Reference->_padding_ + 0x38))();
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceTexture->GetNativeResource() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x2fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce2a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x2b8))(this->RHI,param_1,param_2);
  return;
}

// RHIAsyncCreateTexture2D @ 145ce2a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FValidationRHI::RHIAsyncCreateTexture2D
          (FValidationRHI *this,uint param_1,uint param_2,uchar param_3,uint param_4,
          ETextureCreateFlags param_5,ERHIAccess param_6,void **param_7,uint param_8,
          wchar_t *param_9,TRefCountPtr<FBaseGraphTask> *param_10)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_register_00000014;
  FRHITexture *pFVar6;
  uint uVar7;
  undefined7 in_register_00000089;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_0000004c;
  undefined8 in_stack_00000060;
  
  pFVar6 = (FRHITexture *)CONCAT44(in_register_00000014,param_1);
  if (!GRHIGlobals.SupportsAsyncTextureCreation) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.SupportsAsyncTextureCreation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x225,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  uVar7 = (uint)CONCAT71(in_register_00000089,param_3);
  uVar5 = (undefined4)param_5;
  if ((undefined4)param_5 == None) {
    uVar5 = RenderTargetable;
  }
  if (uVar7 < param_2) {
    uVar7 = param_2;
  }
  if (uVar7 < (uint)(1 << ((char)uVar5 - 1U & 0x1f))) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<241696290990195238>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x226,"FMath::Max(SizeX, SizeY) >= (1u << (FMath::Max(1u, NumMips) - 1))");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  (**(code **)(this->RHI->_padding_ + 0x1a0))
            (this->RHI,pFVar6,param_2,CONCAT71(in_register_00000089,param_3) & 0xffffffff,
             (undefined1)param_4,(undefined4)param_5,CONCAT44(in_stack_0000003c,param_6),
             param_7._0_4_,CONCAT44(in_stack_0000004c,param_8),param_9._0_4_,param_10,
             in_stack_00000060);
  piVar4 = (int *)(**(code **)(*(longlong *)(pFVar6->_padding_ + 0x28) + 8))();
  if ((*piVar4 == 0) || (piVar4[1] == 0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<241696290990195240>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x228,"Texture->IsBarrierTrackingInitialized()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  return (TRefCountPtr<FRHITexture>)pFVar6;
}

// RHIAsyncReallocateTexture2D @ 145ce2bd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FValidationRHI::RHIAsyncReallocateTexture2D
          (FValidationRHI *this,FRHITexture *param_1,int param_2,int param_3,int param_4,
          FThreadSafeCounter *param_5)

{
  char cVar1;
  int iVar2;
  FState FVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  FResource *this_00;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined4 in_register_00000084;
  undefined4 in_register_0000008c;
  longlong lVar11;
  uint uStackX_c;
  ushort uStack_1a;
  
  (**(code **)(this->RHI->_padding_ + 0x1d8))
            (this->RHI,param_1,CONCAT44(in_register_00000084,param_2),
             CONCAT44(in_register_0000008c,param_3),param_4,param_5._0_4_);
  lVar9 = param_1->_padding_;
  lVar6 = (**(code **)(*(longlong *)(lVar9 + 0x28) + 8))(lVar9 + 0x28);
  pwVar10 = (wchar_t *)0x0;
  iVar2 = *(int *)(lVar6 + 0x30);
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    if (iVar2 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = *(wchar_t **)(lVar6 + 0x28);
    }
  }
  (**(code **)(*(longlong *)param_1->_padding_ + 0x20))();
  lVar6 = (**(code **)(*(longlong *)param_1->_padding_ + 0x20))();
  cVar1 = *(char *)(lVar6 + 0x33);
  this_00 = (FResource *)(**(code **)(*(longlong *)(lVar9 + 0x28) + 8))(lVar9 + 0x28);
  if (this_00 != (FResource *)0x0) {
    if ((cVar1 == '\v') || (uVar5 = 1, cVar1 == ',')) {
      uVar5 = 2;
    }
    this_00->NumPlanes = uVar5;
    lVar9 = (ulonglong)uStack_1a << 0x30;
    uStackX_c = uStackX_c & 0xffffff00;
    FVar3._4_4_ = uStackX_c;
    FVar3.Access = SRVMask;
    this_00->TrackedState = FVar3;
    bVar4 = 3;
    (this_00->TransientState).AcquireBacktrace = (void *)0x0;
    (this_00->TransientState).NumAcquiredSubresources = (int)lVar9;
    (this_00->TransientState).bTransient = (bool)(char)((ulonglong)lVar9 >> 0x20);
    (this_00->TransientState).Status = (char)((ulonglong)lVar9 >> 0x28);
    *(short *)&(this_00->TransientState).field_0xe = (short)((ulonglong)lVar9 >> 0x30);
    this_00->NumMips = param_3;
    this_00->NumArraySlices = 1;
    do {
      bVar8 = ~bVar4 + 1 & bVar4;
      if ((bVar8 == 1) || (bVar8 != 2)) {
        lVar9 = 0x54;
        lVar6 = 0x50;
        lVar11 = 0x48;
      }
      else {
        lVar9 = 0x7c;
        lVar6 = 0x78;
        lVar11 = 0x70;
      }
      *(undefined4 *)((longlong)&this_00->NumMips + lVar6) = 0x70;
      *(byte *)((longlong)&this_00->NumMips + lVar9) = bVar8;
      *(undefined8 *)((longlong)&this_00->NumMips + lVar11) =
           *(undefined8 *)((longlong)&this_00->NumMips + lVar6);
      bVar4 = bVar4 & ~(~bVar4 + 1);
    } while (bVar4 != 0);
    if (pwVar10 != (wchar_t *)0x0) {
      RHIValidation::FResource::SetDebugName(this_00,pwVar10,(wchar_t *)0x0);
    }
  }
  return (TRefCountPtr<FRHITexture>)param_1;
}

// RHIBeginRenderQueryBatch_TopOfPipe @ 145ce3920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIBeginRenderQueryBatch_TopOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce3927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x268))();
  return;
}

// RHIBeginRenderQuery_TopOfPipe @ 145ce3940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIBeginRenderQuery_TopOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce3947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x278))();
  return;
}

// RHIBeginSuspendRendering @ 145ce3960

void __thiscall FValidationRHI::RHIBeginSuspendRendering(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce3967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x348))();
  return;
}

// RHIBeginUpdateTexture3D @ 145ce4070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FUpdateTexture3DData * __thiscall
FValidationRHI::RHIBeginUpdateTexture3D
          (FValidationRHI *this,FUpdateTexture3DData *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4)

{
  (**(code **)(this->RHI->_padding_ + 0x408))();
  return __return_storage_ptr__;
}

// RHIBindDebugLabelName @ 145ce40f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIBindDebugLabelName
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  FRHICommandBase *pFVar3;
  FString *pFVar4;
  IRHIComputeContext *pIVar5;
  FRHICommandBase *pFVar6;
  FResource *pFVar7;
  FString local_38;
  
  pFVar4 = ::FString::FString(&local_38,param_3);
  pFVar3 = (FRHICommandBase *)(pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar6 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar6;
    param_1->CommandLink = &pFVar6->Next;
    pFVar6->Next = (FRHICommandBase *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FValidationRHI::RHIBindDebugLabelName'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar6[1]._padding_ = (longlong)param_2;
    pFVar6[1].Next = pFVar3;
    *(int *)&pFVar6[2]._padding_ = iVar1;
    *(int *)((longlong)&pFVar6[2]._padding_ + 4) = iVar2;
    pFVar6[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext(param_1);
    pFVar6 = (FRHICommandBase *)L"";
    if (iVar1 != 0) {
      pFVar6 = pFVar3;
    }
    pFVar7 = (FResource *)&param_2->_padding_;
    if (param_2 == (FRHIBuffer *)0x0) {
      pFVar7 = (FResource *)0x0;
    }
    RHIValidation::FTracker::Rename(pIVar5->Tracker,pFVar7,(wchar_t *)pFVar6,(wchar_t *)0x0);
    if (pFVar3 != (FRHICommandBase *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce4216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x210))(this->RHI,param_1,param_2,param_3);
  return;
}

// RHIBindDebugLabelName @ 145ce4230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIBindDebugLabelName
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  FRHICommandBase *pFVar3;
  FTracker *this_00;
  FString *pFVar4;
  IRHIComputeContext *pIVar5;
  FResource *pFVar6;
  FRHICommandBase *pFVar7;
  FString local_38;
  
  pFVar4 = ::FString::FString(&local_38,param_3);
  pFVar3 = (FRHICommandBase *)(pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar7 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar7;
    param_1->CommandLink = &pFVar7->Next;
    pFVar7->Next = (FRHICommandBase *)0x0;
    pFVar7->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FValidationRHI::RHIBindDebugLabelName'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar7[1]._padding_ = (longlong)param_2;
    pFVar7[1].Next = pFVar3;
    *(int *)&pFVar7[2]._padding_ = iVar1;
    *(int *)((longlong)&pFVar7[2]._padding_ + 4) = iVar2;
    pFVar7[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext(param_1);
    pFVar7 = (FRHICommandBase *)L"";
    if (iVar1 != 0) {
      pFVar7 = pFVar3;
    }
    this_00 = pIVar5->Tracker;
    pFVar6 = (FResource *)(**(code **)(param_2->_padding_ + 8))();
    RHIValidation::FTracker::Rename(this_00,pFVar6,(wchar_t *)pFVar7,(wchar_t *)0x0);
    if (pFVar3 != (FRHICommandBase *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce435b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x218))(this->RHI,param_1,param_2,param_3);
  return;
}

// RHIBindDebugLabelName @ 145ce4370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIBindDebugLabelName
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIUnorderedAccessView *param_2,
          wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  FRHICommandBase *pFVar3;
  FString *pFVar4;
  IRHIComputeContext *pIVar5;
  FRHICommandBase *pFVar6;
  FString local_68;
  FViewIdentity local_58;
  
  RHIValidation::FViewIdentity::FViewIdentity
            (&local_58,*(FRHIViewableResource **)&param_2->field_0x18,
             (FRHIViewDesc *)&param_2->field_0x20);
  pFVar4 = ::FString::FString(&local_68,param_3);
  pFVar3 = (FRHICommandBase *)(pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->Data).ArrayNum;
  iVar2 = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar6 = FMemStackBase::Alloc(&param_1->MemManager,0x30,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar6;
    param_1->CommandLink = &pFVar6->Next;
    pFVar6->Next = (FRHICommandBase *)0x0;
    pFVar6->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FValidationRHI::RHIBindDebugLabelName'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar6[1]._padding_ = local_58._padding_;
    pFVar6[1].Next = pFVar3;
    *(int *)&pFVar6[2]._padding_ = iVar1;
    *(int *)((longlong)&pFVar6[2]._padding_ + 4) = iVar2;
    pFVar6[2].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    pIVar5 = FRHICommandListBase::GetComputeContext(param_1);
    pFVar6 = (FRHICommandBase *)L"";
    if (iVar1 != 0) {
      pFVar6 = pFVar3;
    }
    RHIValidation::FTracker::Rename
              (pIVar5->Tracker,(FResource *)local_58._padding_,(wchar_t *)pFVar6,(wchar_t *)0x0);
    if (pFVar3 != (FRHICommandBase *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce44a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x208))(this->RHI,param_1,param_2,param_3);
  return;
}

// RHIBlockUntilGPUIdle @ 145ce44c0

void __thiscall FValidationRHI::RHIBlockUntilGPUIdle(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce44c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x340))();
  return;
}

// RHICalcRayTracingClusterOperationSize @ 145ce4ea0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FRayTracingClusterOperationSize * __thiscall
FValidationRHI::RHICalcRayTracingClusterOperationSize
          (FValidationRHI *this,FRayTracingClusterOperationSize *__return_storage_ptr__,
          FRayTracingClusterOperationInitializer *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x480))();
  return __return_storage_ptr__;
}

// RHICalcRayTracingGeometrySize @ 145ce4ed0

FRayTracingAccelerationStructureSize * __thiscall
FValidationRHI::RHICalcRayTracingGeometrySize
          (FValidationRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingGeometryInitializer *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x478))();
  return __return_storage_ptr__;
}

// RHICalcRayTracingSceneSize @ 145ce4f00

FRayTracingAccelerationStructureSize * __thiscall
FValidationRHI::RHICalcRayTracingSceneSize
          (FValidationRHI *this,FRayTracingAccelerationStructureSize *__return_storage_ptr__,
          FRayTracingSceneInitializer *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x470))();
  return __return_storage_ptr__;
}

// RHICalcTexturePlatformSize @ 145ce4f30

FRHICalcTextureSizeResult * __thiscall
FValidationRHI::RHICalcTexturePlatformSize
          (FValidationRHI *this,FRHICalcTextureSizeResult *__return_storage_ptr__,
          FRHITextureDesc *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FRHICalcTextureSizeResult *pFVar3;
  
  bVar2 = FRHITextureDesc::Validate(param_1,L"",false);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<241696290990195162>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x1da,"Desc.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICalcTextureSizeResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1->NumMips <= param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<241696290990195163>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x1db,"FirstMipIndex < Desc.NumMips");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICalcTextureSizeResult *)(*pcVar1)();
      return pFVar3;
    }
  }
  (**(code **)(this->RHI->_padding_ + 0x178))(this->RHI,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// RHICheckViewportHDRStatus @ 145ce5060

void __thiscall
FValidationRHI::RHICheckViewportHDRStatus(FValidationRHI *this,FRHIViewport *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce5067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x328))();
  return;
}

// RHICloseTranslateChain @ 145ce5370

void __thiscall
FValidationRHI::RHICloseTranslateChain
          (FValidationRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2,bool param_3)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined8 local_38 [2];
  
  if (param_3) {
                    /* WARNING: Could not recover jumptable at 0x000145ce54dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x3e0))();
    return;
  }
  uVar3 = (param_1->Contexts).ArrayNum;
  uVar12 = (ulonglong)(int)uVar3;
  pFVar14 = (param_1->Contexts).AllocatorInstance.Data;
  pFVar2 = pFVar14 + uVar12 * 8;
  while( true ) {
    if ((param_1->Contexts).ArrayNum != (int)uVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<IRHIComputeContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == pFVar2) break;
    plVar6 = *(longlong **)pFVar14;
    if (plVar6 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar6 + 8))(plVar6);
      if (cVar8 != '\x01') {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Context->GetPipeline() == ERHIPipeline::Graphics",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0x2e4,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar10 = (**(code **)(*plVar6 + 0x148))(plVar6);
      puVar11 = ::operator_new(0x68);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        *(undefined4 *)((longlong)puVar11 + 0x2c) = 2;
      }
      lVar10 = *(longlong *)(lVar10 + 8);
      puVar1 = puVar11 + 0xb;
      pvVar13 = *(void **)(lVar10 + 8);
      *(undefined8 *)(lVar10 + 8) = 0;
      uVar4 = *(undefined4 *)(lVar10 + 0x10);
      uVar5 = *(undefined4 *)(lVar10 + 0x14);
      *(undefined8 *)(lVar10 + 0x10) = 0;
      if (puVar1 != local_38) {
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        *puVar1 = pvVar13;
        pvVar13 = (void *)0x0;
        *(undefined4 *)(puVar11 + 0xc) = uVar4;
        *(undefined4 *)((longlong)puVar11 + 100) = uVar5;
      }
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
      *(undefined1 *)(puVar11 + 8) = 1;
      *(undefined8 **)param_2 = puVar11;
    }
    uVar12 = (ulonglong)uVar3;
    pFVar14 = pFVar14 + 8;
  }
  return;
}

// RHIComputeMemorySize @ 145ce5620

uint __thiscall FValidationRHI::RHIComputeMemorySize(FValidationRHI *this,FRHITexture *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ce5627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x1d0))();
  return uVar1;
}

// RHICreateAliasedTexture @ 145ce5ce0

TRefCountPtr<FRHITexture> __thiscall
FValidationRHI::RHICreateAliasedTexture(FValidationRHI *this,TRefCountPtr<FRHITexture> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  longlong *in_R8;
  
  if (*in_R8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x301,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  (**(code **)(this->RHI->_padding_ + 0x2c0))(this->RHI,param_1);
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHICreateAmplificationShader @ 145ce5d50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIAmplificationShader> __thiscall
FValidationRHI::RHICreateAmplificationShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIAmplificationShader> TVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar4 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x250,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIAmplificationShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIAmplificationShader>)TVar3.Reference;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bSupportsMeshShadersTier0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHISupportsMeshShadersTier0(GMaxRHIShaderPlatform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIAmplificationShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIAmplificationShader>)TVar3.Reference;
    }
  }
  local_28 = *(undefined4 *)param_2->Hash;
  uStack_24 = *(undefined4 *)(param_2->Hash + 4);
  uStack_20 = *(undefined4 *)(param_2->Hash + 8);
  uStack_1c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x90))(this->RHI,param_1,&local_28);
  return (TRefCountPtr<FRHIAmplificationShader>)(FRHIAmplificationShader *)param_1;
}

// RHICreateBlendState @ 145ce5e30

TRefCountPtr<FRHIBlendState> __thiscall
FValidationRHI::RHICreateBlendState(FValidationRHI *this,FBlendStateInitializerRHI *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x60))();
  return (TRefCountPtr<FRHIBlendState>)(FRHIBlendState *)param_1;
}

// RHICreateBoundShaderState @ 145ce5e60

TRefCountPtr<FRHIBoundShaderState> __thiscall
FValidationRHI::RHICreateBoundShaderState
          (FValidationRHI *this,FRHIVertexDeclaration *param_1,FRHIVertexShader *param_2,
          FRHIPixelShader *param_3,FRHIGeometryShader *param_4)

{
  (**(code **)(this->RHI->_padding_ + 0x108))();
  return (TRefCountPtr<FRHIBoundShaderState>)(FRHIBoundShaderState *)param_1;
}

// RHICreateBufferInitializer @ 145ce5ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIBufferInitializer * __thiscall
FValidationRHI::RHICreateBufferInitializer
          (FValidationRHI *this,FRHIBufferInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHIBufferCreateDesc *param_2)

{
  (**(code **)(this->RHI->_padding_ + 0x140))();
  return __return_storage_ptr__;
}

// RHICreateComputePipelineState @ 145ce5ed0

TRefCountPtr<FRHIComputePipelineState> __thiscall
FValidationRHI::RHICreateComputePipelineState
          (FValidationRHI *this,FComputePipelineStateInitializer *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x118))();
  return (TRefCountPtr<FRHIComputePipelineState>)(FRHIComputePipelineState *)param_1;
}

// RHICreateComputeShader @ 145ce5f00

TRefCountPtr<FRHIComputeShader> __thiscall
FValidationRHI::RHICreateComputeShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2->Hash;
  uStack_14 = *(undefined4 *)(param_2->Hash + 4);
  uStack_10 = *(undefined4 *)(param_2->Hash + 8);
  uStack_c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0xa0))(this->RHI,param_1,&local_18);
  return (TRefCountPtr<FRHIComputeShader>)(FRHIComputeShader *)param_1;
}

// RHICreateDepthStencilState @ 145ce5f40

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHIDepthStencilState> __thiscall
FValidationRHI::RHICreateDepthStencilState
          (FValidationRHI *this,FDepthStencilStateInitializerRHI *param_1)

{
  undefined2 uVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong *in_R8;
  int local_res8 [2];
  ulonglong local_res10;
  ulonglong *local_res18;
  ulonglong local_res20;
  
  (**(code **)(this->RHI->_padding_ + 0x58))();
  uVar7 = 0;
  if ((*(char *)((longlong)in_R8 + 1) != '\a') || ((char)*in_R8 != '\0')) {
    uVar7 = ((char)*in_R8 != '\0') + 1;
  }
  if (*(char *)((longlong)in_R8 + 2) == '\0') {
    if (*(char *)((longlong)in_R8 + 7) == '\0') goto LAB_145ce5fce;
LAB_145ce5f8c:
    if (((*(char *)((longlong)in_R8 + 9) == '\0') && (*(char *)((longlong)in_R8 + 0xb) == '\0')) &&
       (*(char *)((longlong)in_R8 + 10) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
    if (*(char *)((longlong)in_R8 + 7) != '\0') goto LAB_145ce5f8c;
  }
  if (*(char *)((longlong)in_R8 + 0xc) != '\0') {
    uVar7 = uVar7 | 0x10;
  }
  if ((*(char *)((longlong)in_R8 + 0xd) != '\0') &&
     (((*(char *)((longlong)in_R8 + 4) != '\0' || (*(char *)((longlong)in_R8 + 6) != '\0')) ||
      ((*(char *)((longlong)in_R8 + 5) != '\0' || (bVar2)))))) {
    uVar7 = uVar7 | 0x20;
  }
LAB_145ce5fce:
  *(uint *)(*(longlong *)param_1 + 0x18) = uVar7;
  local_res10._0_1_ = param_1->bEnableDepthWrite;
  local_res10._1_1_ = param_1->DepthTest;
  local_res10._2_1_ = param_1->bEnableFrontFaceStencil;
  local_res10._3_1_ = param_1->FrontFaceStencilTest;
  local_res10._4_1_ = param_1->FrontFaceStencilFailStencilOp;
  local_res10._5_1_ = param_1->FrontFaceDepthFailStencilOp;
  local_res10._6_1_ = param_1->FrontFacePassStencilOp;
  local_res10._7_1_ = param_1->bEnableBackFaceStencil;
  local_res20 = *in_R8;
  uVar3 = in_R8[1];
  uVar1 = *(undefined2 *)((longlong)in_R8 + 0xc);
  uVar7 = ((uint)(local_res10 >> 0x14) & 0xffff ^ (uint)(local_res10 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if (*(int *)&(this->DepthStencilStates).field_0x8 !=
      *(int *)&(this->DepthStencilStates).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DepthStencilStates).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DepthStencilStates).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->DepthStencilStates).field_0x48 - 1U & uVar7) * 4);
    if (iVar4 != -1) {
      do {
        puVar5 = (ulonglong *)((longlong)iVar4 * 0x20 + *(longlong *)&this->DepthStencilStates);
        if (*puVar5 == local_res10) {
          if (puVar5 != (ulonglong *)0x0) goto LAB_145ce60a9;
          break;
        }
        iVar4 = (int)puVar5[3];
      } while (iVar4 != -1);
    }
  }
  local_res18 = &local_res10;
  TSet<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FRHIDepthStencilState_*_&&>_>
            ((TSet<TTuple<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIDepthStencilState_*,FDepthStencilStateInitializerRHI,0>,FDefaultSetAllocator>
              *)&this->DepthStencilStates,(uint)local_res8,
             (TKeyInitializer<FRHIDepthStencilState_*_&&> *)(ulonglong)uVar7,(bool *)&local_res18);
  puVar5 = (ulonglong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this->DepthStencilStates);
LAB_145ce60a9:
  puVar5[1] = local_res20;
  *(int *)(puVar5 + 2) = (int)uVar3;
  *(undefined2 *)((longlong)puVar5 + 0x14) = uVar1;
  return (TRefCountPtr<FRHIDepthStencilState>)(FRHIDepthStencilState *)param_1;
}

// RHICreateGPUFence @ 145ce60d0

TRefCountPtr<FRHIGPUFence> __thiscall
FValidationRHI::RHICreateGPUFence(FValidationRHI *this,FName *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0xb8))();
  return (TRefCountPtr<FRHIGPUFence>)(FRHIGPUFence *)param_1;
}

// RHICreateGeometryShader @ 145ce6100

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIGeometryShader> __thiscall
FValidationRHI::RHICreateGeometryShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIGeometryShader> TVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  bVar2 = RHISupportsGeometryShaders((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHISupportsGeometryShaders(GMaxRHIShaderPlatform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIGeometryShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIGeometryShader>)TVar3.Reference;
    }
  }
  local_18 = *(undefined4 *)param_2->Hash;
  uStack_14 = *(undefined4 *)(param_2->Hash + 4);
  uStack_10 = *(undefined4 *)(param_2->Hash + 8);
  uStack_c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x80))(this->RHI,param_1,&local_18);
  return (TRefCountPtr<FRHIGeometryShader>)(FRHIGeometryShader *)param_1;
}

// RHICreateGraphicsPipelineState @ 145ce61a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

TRefCountPtr<FRHIGraphicsPipelineState> __thiscall
FValidationRHI::RHICreateGraphicsPipelineState
          (FValidationRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  FRHIVertexDeclaration *pFVar1;
  FGraphicsPipelineStateInitializer *in_R8;
  
  ValidatePipeline(this,in_R8);
  (**(code **)(this->RHI->_padding_ + 0x110))(this->RHI,param_1);
  pFVar1 = (param_1->BoundShaderState).VertexDeclarationRHI;
  if (pFVar1 != (FRHIVertexDeclaration *)0x0) {
    *(Type *)&pFVar1[1].field_0x8 = (in_R8->DepthStencilState->ActualDSMode).Value;
  }
  return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)param_1;
}

// RHICreateMeshShader @ 145ce6200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIMeshShader> __thiscall
FValidationRHI::RHICreateMeshShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIMeshShader> TVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar4 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0x250,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIMeshShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIMeshShader>)TVar3.Reference;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bSupportsMeshShadersTier0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHISupportsMeshShadersTier0(GMaxRHIShaderPlatform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIMeshShader *)(*pcVar1)();
      return (TRefCountPtr<FRHIMeshShader>)TVar3.Reference;
    }
  }
  local_28 = *(undefined4 *)param_2->Hash;
  uStack_24 = *(undefined4 *)(param_2->Hash + 4);
  uStack_20 = *(undefined4 *)(param_2->Hash + 8);
  uStack_1c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x88))(this->RHI,param_1,&local_28);
  return (TRefCountPtr<FRHIMeshShader>)(FRHIMeshShader *)param_1;
}

// RHICreatePixelShader @ 145ce62e0

TRefCountPtr<FRHIPixelShader> __thiscall
FValidationRHI::RHICreatePixelShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2->Hash;
  uStack_14 = *(undefined4 *)(param_2->Hash + 4);
  uStack_10 = *(undefined4 *)(param_2->Hash + 8);
  uStack_c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x70))(this->RHI,param_1,&local_18);
  return (TRefCountPtr<FRHIPixelShader>)(FRHIPixelShader *)param_1;
}

// RHICreateRasterizerState @ 145ce6310

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

TRefCountPtr<FRHIRasterizerState> __thiscall
FValidationRHI::RHICreateRasterizerState
          (FValidationRHI *this,FRasterizerStateInitializerRHI *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x50))();
  return (TRefCountPtr<FRHIRasterizerState>)(FRHIRasterizerState *)param_1;
}

// RHICreateRayTracingGeometry @ 145ce6340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingGeometry> __thiscall
FValidationRHI::RHICreateRayTracingGeometry
          (FValidationRHI *this,FRHICommandListBase *param_1,FRayTracingGeometryInitializer *param_2
          )

{
  uchar *puVar1;
  uchar *puVar2;
  byte bVar3;
  FString *pFVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong in_R9;
  longlong lVar8;
  wchar_t *pwVar9;
  uint uStackX_c;
  ushort uStack_1a;
  FString local_18;
  
  (**(code **)(this->RHI->_padding_ + 0x490))();
  puVar2 = (param_1->MemManager).Top;
  pFVar4 = FDebugName::ToString((FDebugName *)(in_R9 + 0x58),&local_18);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  uStackX_c = uStackX_c & 0xffffff00;
  *(ulonglong *)(puVar2 + 0x38) = CONCAT44(uStackX_c,0x20000);
  bVar3 = 3;
  puVar2[0x28] = '\0';
  puVar2[0x29] = '\0';
  puVar2[0x2a] = '\0';
  puVar2[0x2b] = '\0';
  puVar2[0x2c] = '\0';
  puVar2[0x2d] = '\0';
  puVar2[0x2e] = '\0';
  puVar2[0x2f] = '\0';
  *(ulonglong *)(puVar2 + 0x30) = (ulonglong)uStack_1a << 0x30;
  puVar2[0x18] = '\x01';
  puVar2[0x19] = '\0';
  puVar2[0x1a] = '\0';
  puVar2[0x1b] = '\0';
  puVar2[0x1c] = '\x01';
  puVar2[0x1d] = '\0';
  puVar2[0x1e] = '\0';
  puVar2[0x1f] = '\0';
  puVar2[0x20] = '\x01';
  puVar2[0x21] = '\0';
  puVar2[0x22] = '\0';
  puVar2[0x23] = '\0';
  do {
    bVar5 = ~bVar3 + 1 & bVar3;
    if ((bVar5 == 1) || (bVar5 != 2)) {
      lVar6 = 0x54;
      lVar7 = 0x50;
      lVar8 = 0x48;
    }
    else {
      lVar6 = 0x7c;
      lVar7 = 0x78;
      lVar8 = 0x70;
    }
    puVar1 = puVar2 + lVar7 + 0x18;
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\x02';
    puVar1[3] = '\0';
    puVar2[lVar6 + 0x18] = bVar5;
    *(undefined8 *)(puVar2 + lVar8 + 0x18) = *(undefined8 *)(puVar2 + lVar7 + 0x18);
    bVar3 = bVar3 & ~(~bVar3 + 1);
  } while (bVar3 != 0);
  if ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0) {
    RHIValidation::FResource::SetDebugName((FResource *)(puVar2 + 0x18),pwVar9,(wchar_t *)0x0);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (TRefCountPtr<FRHIRayTracingGeometry>)(FRHIRayTracingGeometry *)param_1;
}

// RHICreateRayTracingPipelineState @ 145ce6470

TRefCountPtr<FRHIRayTracingPipelineState> __thiscall
FValidationRHI::RHICreateRayTracingPipelineState
          (FValidationRHI *this,FRayTracingPipelineStateInitializer *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x4a8))();
  return (TRefCountPtr<FRHIRayTracingPipelineState>)(FRHIRayTracingPipelineState *)param_1;
}

// RHICreateRayTracingScene @ 145ce64a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingScene> __thiscall
FValidationRHI::RHICreateRayTracingScene(FValidationRHI *this,FRayTracingSceneInitializer *param_1)

{
  longlong lVar1;
  byte bVar2;
  FString *pFVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 *in_R8;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uStackX_c;
  ushort uStack_2a;
  FString local_28;
  undefined8 local_18;
  
  local_28.Data.AllocatorInstance.Data._0_4_ = *in_R8;
  local_28.Data.AllocatorInstance.Data._4_4_ = in_R8[1];
  local_28.Data.ArrayNum = in_R8[2];
  local_28.Data.ArrayMax = in_R8[3];
  local_18 = *(undefined8 *)(in_R8 + 4);
  (**(code **)(this->RHI->_padding_ + 0x498))(this->RHI,local_18,&local_28);
  lVar1 = *(longlong *)param_1;
  pFVar3 = ::FName::ToString((FName *)(in_R8 + 4),&local_28);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  uStackX_c = uStackX_c & 0xffffff00;
  *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStackX_c,0x20000);
  bVar2 = 3;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(ulonglong *)(lVar1 + 0x30) = (ulonglong)uStack_2a << 0x30;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x1c) = 1;
  *(undefined4 *)(lVar1 + 0x20) = 1;
  do {
    bVar4 = ~bVar2 + 1 & bVar2;
    if ((bVar4 == 1) || (bVar4 != 2)) {
      lVar5 = 0x54;
      lVar6 = 0x50;
      lVar7 = 0x48;
    }
    else {
      lVar5 = 0x7c;
      lVar6 = 0x78;
      lVar7 = 0x70;
    }
    *(undefined4 *)(lVar1 + 0x18 + lVar6) = 0x20000;
    *(byte *)(lVar1 + 0x18 + lVar5) = bVar4;
    *(undefined8 *)(lVar1 + 0x18 + lVar7) = *(undefined8 *)(lVar1 + 0x18 + lVar6);
    bVar2 = bVar2 & ~(~bVar2 + 1);
  } while (bVar2 != 0);
  if ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0) {
    RHIValidation::FResource::SetDebugName((FResource *)(lVar1 + 0x18),pwVar8,(wchar_t *)0x0);
  }
  if ((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                       local_28.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_28.Data.AllocatorInstance.Data._4_4_,
                                   local_28.Data.AllocatorInstance.Data._0_4_));
  }
  return (TRefCountPtr<FRHIRayTracingScene>)(FRHIRayTracingScene *)param_1;
}

// RHICreateRayTracingShader @ 145ce65f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

TRefCountPtr<FRHIRayTracingShader> __thiscall
FValidationRHI::RHICreateRayTracingShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2,
          EShaderFrequency param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2->Hash;
  uStack_14 = *(undefined4 *)(param_2->Hash + 4);
  uStack_10 = *(undefined4 *)(param_2->Hash + 8);
  uStack_c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x4a0))(this->RHI,param_1,&local_18);
  return (TRefCountPtr<FRHIRayTracingShader>)(FRHIRayTracingShader *)param_1;
}

// RHICreateRenderQuery @ 145ce6630

TRefCountPtr<FRHIRenderQuery> __thiscall
FValidationRHI::RHICreateRenderQuery(FValidationRHI *this,ERenderQueryType param_1)

{
  undefined4 in_register_00000014;
  
  (**(code **)(this->RHI->_padding_ + 0x260))();
  return (TRefCountPtr<FRHIRenderQuery>)(FRHIRenderQuery *)CONCAT44(in_register_00000014,param_1);
}

// RHICreateResourceCollection @ 145ce6660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIResourceCollection> __thiscall
FValidationRHI::RHICreateResourceCollection
          (FValidationRHI *this,FRHICommandListBase *param_1,
          TArrayView<FRHIResourceCollectionMember_const_,int> *param_2)

{
  undefined4 *in_R9;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *in_R9;
  uStack_14 = in_R9[1];
  uStack_10 = in_R9[2];
  uStack_c = in_R9[3];
  (**(code **)(this->RHI->_padding_ + 0x1c0))(this->RHI,param_1,param_2,&local_18);
  return (TRefCountPtr<FRHIResourceCollection>)(FRHIResourceCollection *)param_1;
}

// RHICreateSamplerState @ 145ce66a0

TRefCountPtr<FRHISamplerState> __thiscall
FValidationRHI::RHICreateSamplerState(FValidationRHI *this,FSamplerStateInitializerRHI *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x48))();
  return (TRefCountPtr<FRHISamplerState>)(FRHISamplerState *)param_1;
}

// RHICreateShaderBindingTable @ 145ce66d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderBindingTable> __thiscall
FValidationRHI::RHICreateShaderBindingTable
          (FValidationRHI *this,FRHICommandListBase *param_1,
          FRayTracingShaderBindingTableInitializer *param_2)

{
  (**(code **)(this->RHI->_padding_ + 0x4b0))();
  return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
}

// RHICreateShaderBundle @ 145ce6700

TRefCountPtr<FRHIShaderBundle> __thiscall
FValidationRHI::RHICreateShaderBundle(FValidationRHI *this,FShaderBundleCreateInfo *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x4c0))();
  return (TRefCountPtr<FRHIShaderBundle>)(FRHIShaderBundle *)param_1;
}

// RHICreateShaderLibrary @ 145ce6730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShaderLibrary> __thiscall
FValidationRHI::RHICreateShaderLibrary
          (FValidationRHI *this,EShaderPlatform param_1,FString *param_2,FString *param_3)

{
  undefined6 in_register_00000012;
  
  (**(code **)(this->RHI->_padding_ + 0xb0))();
  return (TRefCountPtr<FRHIShaderLibrary>)
         (FRHIShaderLibrary *)CONCAT62(in_register_00000012,param_1);
}

// RHICreateShaderLibrary_RenderThread @ 145ce6770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FRHIShaderLibrary> __thiscall
FValidationRHI::RHICreateShaderLibrary_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,EShaderPlatform param_2,
          FString *param_3,FString *param_4)

{
  FDynamicRHI *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  undefined6 in_register_00000082;
  FString *in_stack_00000030;
  FString local_48;
  FString local_38;
  
  pFVar1 = this->RHI;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x420);
  pFVar4 = ::FString::FString(&local_48,in_stack_00000030);
  pFVar5 = ::FString::FString(&local_38,param_4);
  (*pcVar2)(pFVar1,param_1,CONCAT62(in_register_00000082,param_2),(ulonglong)param_3 & 0xffff,pFVar5
            ,pFVar4);
  pFVar3 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (in_stack_00000030->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return (TRefCountPtr<FRHIShaderLibrary>)(FRHIShaderLibrary *)param_1;
}

// RHICreateShaderResourceView @ 145ce6830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FValidationRHI::RHICreateShaderResourceView
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  FBufferSRV *in_stack_00000028;
  undefined1 auStack_78 [48];
  FViewInfo local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((*(char *)in_stack_00000028 == '\0') || (*(char *)in_stack_00000028 == '\x01')) {
    FRHIViewDesc::FBufferSRV::GetViewInfo
              (in_stack_00000028,(FViewInfo *)&local_48,(FRHIBuffer *)param_3);
    ValidateViewForBufferType(&local_48,(FRHIBuffer *)param_3);
  }
  (**(code **)(this->RHI->_padding_ + 0x1b0))(this->RHI,param_1,param_2,param_3);
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// RHICreateStagingBuffer @ 145ce68d0

TRefCountPtr<FRHIStagingBuffer> __thiscall
FValidationRHI::RHICreateStagingBuffer(FValidationRHI *this)

{
  FRHIStagingBuffer *in_RDX;
  
  (**(code **)(this->RHI->_padding_ + 0xe0))();
  return (TRefCountPtr<FRHIStagingBuffer>)in_RDX;
}

// RHICreateTextureInitializer @ 145ce6900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHITextureInitializer * __thiscall
FValidationRHI::RHICreateTextureInitializer
          (FValidationRHI *this,FRHITextureInitializer *__return_storage_ptr__,
          FRHICommandListBase *param_1,FRHITextureCreateDesc *param_2)

{
  code *pcVar1;
  code *pcVar2;
  FRHITextureInitializer *this_00;
  code **ppcVar3;
  code **ppcVar4;
  longlong *plVar5;
  undefined1 auStack_218 [32];
  FRHITextureCreateDesc *local_1f8 [2];
  code *local_1e8;
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code **local_1c0;
  code *local_1b8 [2];
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code **ppcStack_190;
  longlong local_188;
  longlong local_178 [3];
  longlong *local_160;
  FRHICommandListBase *local_158;
  FRHITexture *local_150;
  void *local_148;
  ulong64 local_140;
  TIntPoint<int>_u_0 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined8 uStack_120;
  longlong local_118 [2];
  code *local_108;
  longlong *plStack_100;
  longlong local_f8;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code **local_d0;
  longlong local_c8 [2];
  longlong local_b8 [3];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  FRHICommandListBase *local_68;
  FRHITexture *local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  FRHITextureDesc::Validate((FRHITextureDesc *)param_2,param_2->DebugName,true);
  if (param_2->InitialState == None) {
    local_1f8[0] = param_2;
    `FRHITextureCreateDesc::CheckValidity'::__l2::<lambda_1>::operator()(local_1f8);
  }
  this_00 = (FRHITextureInitializer *)
            (**(code **)(this->RHI->_padding_ + 0x198))(this->RHI,local_c8,param_1,param_2);
  local_1b8[0] = *(code **)&this_00->FinalizeCallback;
  ppcStack_190 = *(code ***)&(this_00->FinalizeCallback).field_0x28;
  *(undefined8 *)&(this_00->FinalizeCallback).field_0x28 = 0;
  local_1a8 = *(code **)&(this_00->FinalizeCallback).field_0x10;
  pcStack_1a0 = *(code **)&(this_00->FinalizeCallback).field_0x18;
  local_198 = *(code **)&(this_00->FinalizeCallback).field_0x20;
  if (local_1b8[0] != (code *)0x0) {
    *(undefined8 *)&this_00->FinalizeCallback = 0;
  }
  local_188 = *(longlong *)&this_00->GetSubresourceCallback;
  local_160 = *(longlong **)&(this_00->GetSubresourceCallback).field_0x28;
  *(undefined8 *)&(this_00->GetSubresourceCallback).field_0x28 = 0;
  local_178[0] = *(longlong *)&(this_00->GetSubresourceCallback).field_0x10;
  local_178[1] = *(longlong *)&(this_00->GetSubresourceCallback).field_0x18;
  local_178[2] = *(longlong *)&(this_00->GetSubresourceCallback).field_0x20;
  if (local_188 != 0) {
    *(undefined8 *)&this_00->GetSubresourceCallback = 0;
  }
  local_158 = this_00->CommandList;
  local_150 = this_00->Texture;
  local_148 = this_00->WritableData;
  local_140 = this_00->WritableSize;
  local_138 = (this_00->Desc).Extent.field0_0x0;
  uStack_130._0_2_ = (this_00->Desc).Depth;
  uStack_130._2_2_ = (this_00->Desc).ArraySize;
  uStack_130._4_1_ = (this_00->Desc).Dimension;
  uStack_130._5_1_ = (this_00->Desc).Format;
  uStack_130._6_2_ = *(undefined2 *)&(this_00->Desc).field_0xe;
  FRHITextureInitializer::Reset(this_00);
  local_1e8 = local_1b8[0];
  local_f8 = 0;
  local_1c0 = ppcStack_190;
  ppcStack_190 = (code **)0x0;
  local_e8 = local_1a8;
  pcStack_e0 = pcStack_1a0;
  local_d8 = local_198;
  local_d0 = (code **)0x0;
  local_1d8 = local_1a8;
  pcStack_1d0 = pcStack_1a0;
  local_1c8 = local_198;
  local_128 = (code *)0x0;
  local_1b8[0] = (code *)0x0;
  ppcVar3 = FMemory::Malloc(0x40,0x10);
  plStack_100 = (longlong *)ppcStack_190;
  pcVar2 = local_1b8[1];
  pcVar1 = local_1b8[0];
  *ppcVar3 = (code *)&
                     ___7__TFunction_OwnedObject_V<lambda_1>__1___0FRHIValidationTextureInitializer_FValidationRHI__QEAA_AEBUFRHITextureCreateDesc____QEAUFRHITextureInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  ppcVar4 = ppcVar3 + 2;
  *ppcVar4 = local_1e8;
  ppcVar3[7] = (code *)local_1c0;
  local_1c0 = (code **)0x0;
  ppcVar3[4] = local_1d8;
  ppcVar3[5] = pcStack_1d0;
  ppcVar3[6] = local_1c8;
  if (*ppcVar4 != (code *)0x0) {
    local_1e8 = (code *)0x0;
  }
  if (ppcVar4 != (code **)0x0) {
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FValidationRHI::FRHIValidationTextureInitializer::FRHIValidationTextureInitializer'::__l2::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
                ::Call;
  }
  local_1b8[0] = local_128;
  local_1b8[1] = (code *)uStack_120;
  ppcStack_190 = ppcVar3;
  local_128 = pcVar1;
  uStack_120 = pcVar2;
  local_118[0]._0_4_ = local_1a8._0_4_;
  local_118[0]._4_4_ = local_1a8._4_4_;
  local_118[1]._0_4_ = pcStack_1a0._0_4_;
  local_118[1]._4_4_ = pcStack_1a0._4_4_;
  local_108 = local_198;
  if (pcVar1 != (code *)0x0) {
    ppcVar4 = (code **)local_118;
    if (plStack_100 != (longlong *)0x0) {
      ppcVar4 = (code **)plStack_100;
    }
    (**(code **)((longlong)*ppcVar4 + 0x10))();
  }
  if (local_1e8 != (code *)0x0) {
    ppcVar4 = &local_1d8;
    if (local_1c0 != (code **)0x0) {
      ppcVar4 = local_1c0;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if (local_f8 != 0) {
    ppcVar4 = &local_e8;
    if (local_d0 != (code **)0x0) {
      ppcVar4 = local_d0;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  FRHITextureInitializer::FRHITextureInitializer
            (__return_storage_ptr__,(FRHITextureInitializer *)local_1b8);
  if ((local_158 != (FRHICommandListBase *)0x0) && (local_150 != (FRHITexture *)0x0)) {
    FRHICommandListBase::RemovePendingTextureUpload(local_158,local_150);
  }
  if (local_188 != 0) {
    plVar5 = local_178;
    if (local_160 != (longlong *)0x0) {
      plVar5 = local_160;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_1b8[0] != (code *)0x0) {
    ppcVar4 = local_1b8 + 2;
    if (ppcStack_190 != (code **)0x0) {
      ppcVar4 = ppcStack_190;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  if ((local_68 != (FRHICommandListBase *)0x0) && (local_60 != (FRHITexture *)0x0)) {
    FRHICommandListBase::RemovePendingTextureUpload(local_68,local_60);
  }
  if (local_98 != 0) {
    plVar5 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar5 = local_70;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_c8[0] != 0) {
    plVar5 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar5 = local_a0;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return __return_storage_ptr__;
}

// RHICreateTextureReference @ 145ce6c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITextureReference> __thiscall
FValidationRHI::RHICreateTextureReference
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2)

{
  (**(code **)(this->RHI->_padding_ + 0x1a8))();
  return (TRefCountPtr<FRHITextureReference>)(FRHITextureReference *)param_1;
}

// RHICreateTransientResourceAllocator @ 145ce6c70

IRHITransientResourceAllocator * __thiscall
FValidationRHI::RHICreateTransientResourceAllocator(FValidationRHI *this)

{
  IRHITransientResourceAllocator IVar1;
  IRHITransientResourceAllocator *pIVar2;
  
  IVar1 = (IRHITransientResourceAllocator)(**(code **)(this->RHI->_padding_ + 0xd8))();
  if (IVar1 == (IRHITransientResourceAllocator)0x0) {
    return (IRHITransientResourceAllocator *)0x0;
  }
  pIVar2 = ::operator_new(0x80);
  if (pIVar2 != (IRHITransientResourceAllocator *)0x0) {
    pIVar2[1] = IVar1;
    *pIVar2 = (IRHITransientResourceAllocator)&___7FValidationTransientResourceAllocator__6B_;
    pIVar2[2] = (IRHITransientResourceAllocator)0x0;
    pIVar2[3] = (IRHITransientResourceAllocator)0x0;
    pIVar2[6] = (IRHITransientResourceAllocator)0x0;
    *(undefined4 *)(pIVar2 + 7) = 0;
    *(undefined4 *)&pIVar2[7].field_0x4 = 0x80;
    *(undefined4 *)(pIVar2 + 8) = 0xffffffff;
    *(undefined4 *)&pIVar2[8].field_0x4 = 0;
    pIVar2[10] = (IRHITransientResourceAllocator)0x0;
    *(undefined4 *)(pIVar2 + 0xb) = 0;
    pIVar2[0xc] = (IRHITransientResourceAllocator)0x0;
    pIVar2[0xd] = (IRHITransientResourceAllocator)0x0;
    pIVar2[0xe] = (IRHITransientResourceAllocator)0x0;
    pIVar2[0xf] = (IRHITransientResourceAllocator)0x0;
    return pIVar2;
  }
  return (IRHITransientResourceAllocator *)0x0;
}

// RHICreateTransition @ 145ce6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FValidationRHI::RHICreateTransition
          (FValidationRHI *this,FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  ERHIPipeline EVar4;
  ERHIPipeline EVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  FRHITexture *pFVar8;
  code *pcVar9;
  ushort uVar10;
  FRHITransition *pFVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint *puVar19;
  ulong64 *puVar20;
  ERHIPipeline EVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  ERHIPipeline EVar24;
  ForAnyElementType *pFVar25;
  ERHIPipeline EVar26;
  FRHITransientAliasingOverlap *pFVar27;
  undefined1 *puVar28;
  ForAnyElementType FVar29;
  ushort *puVar30;
  longlong lVar31;
  uint uVar32;
  FRHITransientAliasingInfo *pFVar33;
  byte bVar34;
  FRHITransientAliasingInfo *pFVar35;
  ERHIPipeline EVar36;
  FRHITransientAliasingOverlap *pFVar37;
  FRHITransitionCreateInfo *pFVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  uint uVar44;
  undefined1 auStackY_218 [32];
  byte local_1c6;
  undefined1 local_1c3 [3];
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined2 local_18e;
  ForAnyElementType local_188;
  undefined8 local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  longlong *plStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  uint local_140;
  uint uStack_13c;
  undefined4 uStack_138;
  ERHIPipeline EStack_134;
  undefined2 uStack_133;
  undefined1 uStack_131;
  undefined4 local_130;
  ERHIPipeline EStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  undefined4 uStack_128;
  ERHITransitionCreateFlags EStack_124;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114 [4];
  undefined1 *local_110;
  undefined4 local_108;
  ERHIPipeline EStack_104;
  undefined2 uStack_103;
  undefined1 uStack_101;
  undefined4 local_100;
  ERHIPipeline EStack_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  FRHITransitionCreateInfo *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  FRHITransition *local_c0;
  FValidationRHI *local_b8;
  FViewIdentity local_b0;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  ForAnyElementType local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  EVar4 = param_2->DstPipelines;
  puVar28 = (undefined1 *)0x0;
  EVar5 = param_2->SrcPipelines;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_f8 = param_2;
  local_c0 = param_1;
  local_b8 = this;
  EVar21 = EVar5;
  if (EVar5 != EVar4) {
    for (; EVar21 != None; EVar21 = EVar21 & ~(~EVar21 + Graphics)) {
      EVar36 = ~EVar21 + Graphics & EVar21;
      for (EVar24 = EVar4; EVar24 != None; EVar24 = EVar24 & ~(~EVar24 + Graphics)) {
        EVar26 = ~EVar24 + Graphics & EVar24;
        if (EVar36 != EVar26) {
          puVar15 = ::operator_new(0x10);
          local_110 = puVar28;
          if (puVar15 != (undefined1 *)0x0) {
            *puVar15 = 0;
            puVar15[2] = 0;
            *(undefined8 *)(puVar15 + 8) = 0;
            local_110 = puVar15;
          }
          local_110[1] = EVar36;
          local_110[2] = EVar26;
          if (((local_178.Data <= (FScriptContainerElement *)&local_110) &&
              ((FScriptContainerElement *)&local_110 <
               local_178.Data + (longlong)local_170._4_4_ * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar13 = (int)local_170;
          if ((int)local_170 == local_170._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_178,(int *)((longlong)&local_170 + 4));
          }
          local_170 = CONCAT44(local_170._4_4_,iVar13 + 1);
          *(undefined1 **)(local_178.Data + (longlong)iVar13 * 8) = local_110;
        }
      }
    }
  }
  pFVar38 = local_f8;
  uVar32 = (local_f8->AliasingInfos).ArrayNum;
  local_198._4_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  _local_60 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  _local_50 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 0;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  local_198._0_4_ = local_198._4_4_;
  if (0 < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar32,&local_188,0,(int *)((longlong)&local_180 + 4));
  }
  uVar32 = (pFVar38->AliasingInfos).ArrayNum;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  if (local_198._4_4_ < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar32,&local_1a0,(int)local_198,(int *)((longlong)&local_198 + 4));
  }
  uVar32 = (pFVar38->TransitionInfos).ArrayNum;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  if (local_1b8._4_4_ < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar32,&local_1c0,(int)local_1b8,(int *)((longlong)&local_1b8 + 4));
  }
  uVar32 = (pFVar38->TransitionInfos).ArrayNum;
  if ((int)uVar32 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar32);
  }
  if (local_1a8._4_4_ < (int)uVar32) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar32,&local_1b0,(int)local_1a8,(int *)((longlong)&local_1a8 + 4));
  }
  iVar13 = (int)local_170;
  pFVar3 = local_178.Data + (longlong)(int)local_170 * 8;
  FVar29.Data = local_178.Data;
  while( true ) {
    if ((int)local_170 != iVar13) {
      local_1c3[0] = 0;
      `TCheckedPointerIterator<RHIValidation::FFence_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1c3);
    }
    if (FVar29.Data == pFVar3) break;
    plStack_158 = *(longlong **)FVar29.Data;
    if ((*(char *)((longlong)plStack_158 + 2) == '\x01') ||
       (pFVar25 = &local_78, *(char *)((longlong)plStack_158 + 2) != '\x02')) {
      pFVar25 = &local_88;
    }
    iVar14 = *(int *)&pFVar25[1].Data;
    piVar1 = (int *)((longlong)&pFVar25[1].Data + 4);
    local_160 = 10;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,pFVar25,piVar1);
    }
    lVar16 = (longlong)iVar14;
    *(int *)&pFVar25[1].Data = iVar14 + 1;
    FVar29.Data = FVar29.Data + 8;
    pFVar7 = pFVar25->Data;
    *(ulonglong *)(pFVar7 + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
    *(longlong **)(pFVar7 + lVar16 * 0x48 + 8) = plStack_158;
    *(longlong **)(pFVar7 + lVar16 * 0x48 + 0x10) = local_150;
    *(undefined8 *)(pFVar7 + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x20 + 8) =
         CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x30) =
         CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x30 + 8) = CONCAT44(EStack_124,uStack_128);
    *(undefined8 *)(pFVar7 + lVar16 * 0x48 + 0x40) = local_120;
  }
  pFVar35 = (pFVar38->AliasingInfos).DataPtr;
  pFVar33 = pFVar35 + (pFVar38->AliasingInfos).ArrayNum;
  local_1c6 = 0;
  if (pFVar35 != pFVar33) {
    do {
      if ((pFVar35->field0_0x0).Texture != (FRHITexture *)0x0) {
        plVar17 = &((pFVar35->field0_0x0).Texture)->_padding_;
        if (pFVar35->Type == Texture) {
          plVar17 = (longlong *)(**(code **)(*plVar17 + 8))(plVar17);
        }
        puVar28 = (undefined1 *)
                  (ulonglong)(byte)((byte)puVar28 | *(uint *)((longlong)plVar17 + 0xac) != 0);
        if (pFVar35->Action == Acquire) {
          if ((*(char *)((longlong)plVar17 + 0x1c) == '\0') &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Resource->TransientState.bTransient",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                  ,0x398,
                                  L"Acquiring resource %s which is not transient. Only transient resources can be acquired."
                                 ), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          LOCK();
          *(uint *)(plVar17 + 0x15) = (uint)plVar17[0x15] + 1;
          UNLOCK();
          local_160 = 4;
          local_150 = (longlong *)0x0;
          iVar13 = (int)local_198;
          plStack_158 = plVar17;
          if ((int)local_198 == local_198._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x848,&local_1a0,(int *)((longlong)&local_198 + 4));
          }
          lVar16 = (longlong)iVar13;
          local_198 = CONCAT44(local_198._4_4_,iVar13 + 1);
          *(ulonglong *)(local_1a0.Data + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
          *(longlong **)(local_1a0.Data + lVar16 * 0x48 + 8) = plStack_158;
          *(longlong **)(local_1a0.Data + lVar16 * 0x48 + 0x10) = local_150;
          *(undefined8 *)(local_1a0.Data + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
          *(ulonglong *)(local_1a0.Data + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
          *(ulonglong *)(local_1a0.Data + lVar16 * 0x48 + 0x20 + 8) =
               CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
          *(ulonglong *)(local_1a0.Data + lVar16 * 0x48 + 0x30) =
               CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
          *(ulonglong *)(local_1a0.Data + lVar16 * 0x48 + 0x30 + 8) =
               CONCAT44(EStack_124,uStack_128);
          *(undefined8 *)(local_1a0.Data + lVar16 * 0x48 + 0x40) = local_120;
          pFVar27 = (pFVar35->Overlaps).DataPtr;
          pFVar37 = pFVar27 + (pFVar35->Overlaps).ArrayNum;
          for (; pFVar27 != pFVar37; pFVar27 = pFVar27 + 1) {
            plVar18 = (longlong *)0x0;
            pFVar8 = (pFVar27->field0_0x0).Texture;
            if (pFVar27->Type == Texture) {
              plVar18 = (longlong *)(**(code **)(pFVar8->_padding_ + 8))(&pFVar8->_padding_);
LAB_145ce71f4:
              if (plVar18 == (longlong *)0x0) goto LAB_145ce7200;
            }
            else {
              if (pFVar8 != (FRHITexture *)0x0) {
                plVar18 = &pFVar8->_padding_;
                goto LAB_145ce71f4;
              }
LAB_145ce7200:
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ResourceBefore",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                  ,0x3a9,L"Null resource provided as an aliasing overlap of %s");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            LOCK();
            *(uint *)(plVar18 + 0x15) = (uint)plVar18[0x15] + 1;
            UNLOCK();
            LOCK();
            *(uint *)(plVar17 + 0x15) = (uint)plVar17[0x15] + 1;
            UNLOCK();
            local_160 = 3;
            uStack_148 = 0;
            iVar13 = (int)local_180;
            plStack_158 = plVar18;
            local_150 = plVar17;
            if ((int)local_180 == local_180._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&local_188,(int *)((longlong)&local_180 + 4));
            }
            lVar16 = (longlong)iVar13;
            local_180 = CONCAT44(local_180._4_4_,iVar13 + 1);
            *(ulonglong *)(local_188.Data + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
            *(longlong **)(local_188.Data + lVar16 * 0x48 + 8) = plStack_158;
            *(longlong **)(local_188.Data + lVar16 * 0x48 + 0x10) = local_150;
            *(undefined8 *)(local_188.Data + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
            *(ulonglong *)(local_188.Data + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
            *(ulonglong *)(local_188.Data + lVar16 * 0x48 + 0x20 + 8) =
                 CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
            *(ulonglong *)(local_188.Data + lVar16 * 0x48 + 0x30) =
                 CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
            *(ulonglong *)(local_188.Data + lVar16 * 0x48 + 0x30 + 8) =
                 CONCAT44(EStack_124,uStack_128);
            *(undefined8 *)(local_188.Data + lVar16 * 0x48 + 0x40) = local_120;
          }
        }
      }
      pFVar35 = pFVar35 + 1;
    } while (pFVar35 != pFVar33);
    local_1c6 = (byte)puVar28;
    pFVar38 = local_f8;
  }
  local_164 = 0;
  bVar34 = (byte)puVar28;
  if (0 < (pFVar38->TransitionInfos).ArrayNum) {
    local_190 = uStack_103;
    local_18e = uStack_fb;
    local_c8 = 0;
    do {
      lVar16 = local_c8;
      uVar32 = 0;
      uVar44 = uVar32;
      if ((int)local_164 < (pFVar38->TransitionInfos).ArrayNum) {
        uVar44 = ~local_164 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar30 = (ushort *)((longlong)&((pFVar38->TransitionInfos).DataPtr)->_padding_ + lVar16);
      if (*(longlong *)(puVar30 + 4) != 0) {
        if ((*(int *)(puVar30 + 0xc) == 0) && ((EVar5 != EVar4 || (EVar4 == All)))) {
          ReportValidationFailure
                    (L"Cannot use Unknown after state when transitioning between pipelines.");
        }
        if (((char)puVar30[8] == '\0') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Info.Type != FRHITransitionInfo::EType::Unknown",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                ,0x3b8,
                                L"FRHITransitionInfo::Type cannot be Unknown when creating a resource transition."
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((char)puVar30[0x14] != '\0') {
          if ((char)puVar30[8] == '\x02') {
            uVar44 = *(uint *)(*(longlong *)(puVar30 + 4) + 0xd8);
            if ((*(uint *)(*(longlong *)(puVar30 + 4) + 0xe0) & 0x400000) == 0) {
              ReportValidationFailure
                        (L"Commit transitions can only be used with reserved resources.");
            }
            if (*(ulonglong *)(puVar30 + 0x10) <= (ulonglong)uVar44) goto LAB_145ce7428;
            pwVar22 = 
            L"Buffer commit size request must not be larger than the size of the buffer itself, as virtual memory allocation cannot be resized."
            ;
          }
          else {
            pwVar22 = L"Reserved resource commit is only supported for buffers";
          }
          ReportValidationFailure(pwVar22);
        }
LAB_145ce7428:
        cVar6 = (char)puVar30[8];
        if (cVar6 == '\x01') {
LAB_145ce746a:
          puVar19 = (uint *)(**(code **)(*(longlong *)(*(longlong *)(puVar30 + 4) + 0x28) + 8))();
          local_e8 = puVar19;
          if (*puVar30 == 0xffff) {
            uStack_e0 = 0;
            uStack_dc = *puVar19;
          }
          else {
            if ((*puVar19 <= (uint)*puVar30) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Info.MipIndex < uint32(Resource->NumMips)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                    ,0xc5,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uStack_e0 = (uint)*puVar30;
            uStack_dc = 1;
          }
          if (puVar30[1] == 0xffff) {
            local_d8 = 0;
            uStack_d4 = puVar19[1];
          }
          else {
            if ((puVar19[1] <= (uint)puVar30[1]) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Info.ArraySlice < uint32(Resource->NumArraySlices)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                    ,0xd1,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_d8 = (uint)puVar30[1];
            uStack_d4 = 1;
          }
          if (puVar30[2] == 0xffff) {
            uStack_d0 = 0;
            uStack_cc = puVar19[2];
          }
          else {
            if ((puVar19[2] <= (uint)puVar30[2]) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Info.PlaneSlice < uint32(Resource->NumPlanes)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                    ,0xdd,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uStack_d0 = (uint)puVar30[2];
            uStack_cc = 1;
          }
          uVar39 = local_d8;
          uVar40 = uStack_d4;
          uVar41 = uStack_d0;
          local_168 = uStack_cc;
          uVar42 = (undefined4)local_e8;
          uVar43 = local_e8._4_4_;
          uVar32 = uStack_e0;
          uVar44 = uStack_dc;
LAB_145ce75bb:
          plVar17 = (longlong *)CONCAT44(uVar43,uVar42);
        }
        else {
          if (cVar6 == '\x02') {
            plVar17 = (longlong *)(*(longlong *)(puVar30 + 4) + 0x28);
          }
          else {
            if (cVar6 == '\x03') {
              RHIValidation::FViewIdentity::FViewIdentity
                        (&local_b0,*(FRHIViewableResource **)(*(longlong *)(puVar30 + 4) + 0x18),
                         (FRHIViewDesc *)(*(longlong *)(puVar30 + 4) + 0x20));
              uVar39 = (uint)local_b0._padding_;
              uVar40 = local_b0._padding_._4_4_;
              uVar41 = (uint)local_b0._padding_;
              local_168 = local_b0._padding_._4_4_;
              uVar42 = (undefined4)local_b0._padding_;
              uVar43 = local_b0._padding_._4_4_;
              uVar32 = (uint)local_b0._padding_;
              uVar44 = local_b0._padding_._4_4_;
              goto LAB_145ce75bb;
            }
            if (cVar6 != '\x04') {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                                  ,0x3ce,L"");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              goto LAB_145ce746a;
            }
            plVar17 = (longlong *)(*(longlong *)(puVar30 + 4) + 0x18);
          }
          uVar44 = (uint)*plVar17;
          local_168 = (uint)plVar17[1];
          uVar41 = 0;
          uVar40 = *(uint *)((longlong)plVar17 + 4);
          uVar39 = uVar32;
        }
        uStack_138 = *(undefined4 *)(puVar30 + 10);
        local_130 = *(undefined4 *)(puVar30 + 0xc);
        local_1c6 = local_1c6 | *(uint *)((longlong)plVar17 + 0xac) != 0;
        uVar10 = puVar30[0xe];
        EStack_124 = local_f8->Flags;
        for (EVar21 = EVar5; EVar21 != None; EVar21 = EVar21 & EVar21 - Graphics) {
          LOCK();
          *(uint *)(plVar17 + 0x15) = (uint)plVar17[0x15] + 1;
          UNLOCK();
        }
        uStack_133 = local_190;
        uStack_131 = uStack_101;
        uStack_12b = local_18e;
        uStack_129 = uStack_f9;
        local_160 = 0;
        local_150 = (longlong *)CONCAT44(uVar44,uVar32);
        uStack_148 = CONCAT44(uVar40,uVar39);
        uStack_128 = CONCAT31(uStack_128._1_3_,(char)uVar10);
        local_120 = 0;
        iVar13 = (int)local_1b8;
        plStack_158 = plVar17;
        local_140 = uVar41;
        uStack_13c = local_168;
        EStack_134 = EVar5;
        EStack_12c = EVar4;
        local_108 = uStack_138;
        EStack_104 = EVar5;
        local_100 = local_130;
        EStack_fc = EVar4;
        local_f0 = local_130;
        local_ec = uStack_138;
        if ((int)local_1b8 == local_1b8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&local_1c0,(int *)((longlong)&local_1b8 + 4));
        }
        lVar16 = (longlong)iVar13;
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar13 + 1);
        *(ulonglong *)(local_1c0.Data + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
        *(longlong **)(local_1c0.Data + lVar16 * 0x48 + 8) = plStack_158;
        *(longlong **)(local_1c0.Data + lVar16 * 0x48 + 0x10) = local_150;
        *(undefined8 *)(local_1c0.Data + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
        *(ulonglong *)(local_1c0.Data + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
        *(ulonglong *)(local_1c0.Data + lVar16 * 0x48 + 0x20 + 8) =
             CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
        *(ulonglong *)(local_1c0.Data + lVar16 * 0x48 + 0x30) =
             CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
        *(ulonglong *)(local_1c0.Data + lVar16 * 0x48 + 0x30 + 8) = CONCAT44(EStack_124,uStack_128);
        *(undefined8 *)(local_1c0.Data + lVar16 * 0x48 + 0x40) = local_120;
        uVar10 = puVar30[0xe];
        for (EVar21 = EStack_fc; EVar21 != None; EVar21 = EVar21 & EVar21 - Graphics) {
          LOCK();
          *(uint *)(plVar17 + 0x15) = (uint)plVar17[0x15] + 1;
          UNLOCK();
        }
        uStack_133 = local_190;
        uStack_131 = uStack_101;
        uStack_12b = local_18e;
        uStack_129 = uStack_f9;
        local_160 = 1;
        local_150 = (longlong *)CONCAT44(uVar44,uVar32);
        uStack_148 = CONCAT44(uVar40,uVar39);
        uStack_128 = CONCAT31(uStack_128._1_3_,(char)uVar10);
        local_120 = 0;
        iVar13 = (int)local_1a8;
        plStack_158 = plVar17;
        local_140 = uVar41;
        uStack_13c = local_168;
        uStack_138 = local_ec;
        EStack_134 = EVar5;
        local_130 = local_f0;
        EStack_12c = EVar4;
        if ((int)local_1a8 == local_1a8._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&local_1b0,(int *)((longlong)&local_1a8 + 4));
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar13 + 1);
        lVar16 = (longlong)iVar13;
        *(ulonglong *)(local_1b0.Data + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
        *(longlong **)(local_1b0.Data + lVar16 * 0x48 + 8) = plStack_158;
        *(longlong **)(local_1b0.Data + lVar16 * 0x48 + 0x10) = local_150;
        *(undefined8 *)(local_1b0.Data + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
        *(ulonglong *)(local_1b0.Data + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
        *(ulonglong *)(local_1b0.Data + lVar16 * 0x48 + 0x20 + 8) =
             CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
        *(ulonglong *)(local_1b0.Data + lVar16 * 0x48 + 0x30) =
             CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
        *(ulonglong *)(local_1b0.Data + lVar16 * 0x48 + 0x30 + 8) = CONCAT44(EStack_124,uStack_128);
        *(undefined8 *)(local_1b0.Data + lVar16 * 0x48 + 0x40) = local_120;
        lVar16 = local_c8;
        pFVar38 = local_f8;
      }
      local_164 = local_164 + 1;
      local_c8 = lVar16 + 0x30;
      bVar34 = local_1c6;
    } while ((int)local_164 < (pFVar38->TransitionInfos).ArrayNum);
  }
  if (bVar34 != 0) {
    puVar20 = operator_new__(0xf0);
    FWindowsPlatformStackWalk::CaptureStackBackTrace(puVar20,0x1e,(void *)0x0);
    iVar13 = (int)local_198;
    pFVar3 = local_1a0.Data + (longlong)(int)local_198 * 0x48;
    FVar29.Data = local_1a0.Data;
    while( true ) {
      if ((int)local_198 != iVar13) {
        `TCheckedPointerIterator<RHIValidation::FOperation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_118);
      }
      if (FVar29.Data == pFVar3) break;
      if (*(int *)FVar29.Data == 4) {
        *(ulong64 **)(FVar29.Data + 0x10) = puVar20;
      }
      FVar29.Data = FVar29.Data + 0x48;
    }
    iVar13 = (int)local_180;
    uVar23 = (ulonglong)(int)local_180;
    pFVar3 = local_188.Data + uVar23 * 0x48;
    FVar29.Data = local_188.Data;
    while( true ) {
      if ((int)uVar23 != iVar13) {
        `TCheckedPointerIterator<RHIValidation::FOperation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_117);
      }
      if (FVar29.Data == pFVar3) break;
      *(ulong64 **)(FVar29.Data + 0x18) = puVar20;
      FVar29.Data = FVar29.Data + 0x48;
      uVar23 = local_180 & 0xffffffff;
    }
    iVar13 = (int)local_1b8;
    uVar23 = (ulonglong)(int)local_1b8;
    pFVar3 = local_1c0.Data + uVar23 * 0x48;
    FVar29.Data = local_1c0.Data;
    while( true ) {
      if ((int)uVar23 != iVar13) {
        `TCheckedPointerIterator<RHIValidation::FOperation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_114);
      }
      if (FVar29.Data == pFVar3) break;
      *(ulong64 **)(FVar29.Data + 0x40) = puVar20;
      FVar29.Data = FVar29.Data + 0x48;
      uVar23 = local_1b8 & 0xffffffff;
    }
    iVar13 = (int)local_1a8;
    uVar23 = (ulonglong)(int)local_1a8;
    pFVar3 = local_1b0.Data + uVar23 * 0x48;
    FVar29.Data = local_1b0.Data;
    while( true ) {
      if ((int)uVar23 != iVar13) {
        `TCheckedPointerIterator<RHIValidation::FOperation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_115);
      }
      if (FVar29.Data == pFVar3) break;
      *(ulong64 **)(FVar29.Data + 0x40) = puVar20;
      FVar29.Data = FVar29.Data + 0x48;
      uVar23 = local_1a8 & 0xffffffff;
    }
  }
  iVar13 = (int)local_170;
  pFVar3 = local_178.Data + (longlong)(int)local_170 * 8;
  FVar29.Data = local_178.Data;
  while( true ) {
    if ((int)local_170 != iVar13) {
      `TCheckedPointerIterator<RHIValidation::FFence_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_116);
    }
    pFVar11 = local_c0;
    if (FVar29.Data == pFVar3) break;
    plStack_158 = *(longlong **)FVar29.Data;
    if ((*(char *)((longlong)plStack_158 + 1) == '\x01') ||
       (pFVar25 = &stack0xffffffffffffffa8, *(char *)((longlong)plStack_158 + 1) != '\x02')) {
      pFVar25 = &stack0xffffffffffffff98;
    }
    iVar14 = *(int *)&pFVar25[1].Data;
    piVar1 = (int *)((longlong)&pFVar25[1].Data + 4);
    local_160 = 9;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,pFVar25,piVar1);
    }
    lVar16 = (longlong)iVar14;
    *(int *)&pFVar25[1].Data = iVar14 + 1;
    FVar29.Data = FVar29.Data + 8;
    pFVar7 = pFVar25->Data;
    *(ulonglong *)(pFVar7 + lVar16 * 0x48) = CONCAT44(uStack_15c,local_160);
    *(longlong **)(pFVar7 + lVar16 * 0x48 + 8) = plStack_158;
    *(longlong **)(pFVar7 + lVar16 * 0x48 + 0x10) = local_150;
    *(undefined8 *)(pFVar7 + lVar16 * 0x48 + 0x10 + 8) = uStack_148;
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x20) = CONCAT44(uStack_13c,local_140);
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x20 + 8) =
         CONCAT17(uStack_131,CONCAT25(uStack_133,CONCAT14(EStack_134,uStack_138)));
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x30) =
         CONCAT17(uStack_129,CONCAT25(uStack_12b,CONCAT14(EStack_12c,local_130)));
    *(ulonglong *)(pFVar7 + lVar16 * 0x48 + 0x30 + 8) = CONCAT44(EStack_124,uStack_128);
    *(undefined8 *)(pFVar7 + lVar16 * 0x48 + 0x40) = local_120;
  }
  if (local_c0 != (FRHITransition *)&stack0xffffffffffffff98) {
    if ((void *)local_c0->_padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c0->_padding_);
    }
    pFVar11->_padding_ = (longlong)local_68.Data;
    *(undefined4 *)&pFVar11->_padding_ = local_60;
    *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = uStack_5c;
    _local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &stack0xffffffffffffffa8) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_58.Data;
    *(undefined4 *)&pFVar11->_padding_ = local_50;
    *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = uStack_4c;
    _local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_88) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_88.Data;
    *(undefined4 *)&pFVar11->_padding_ = (undefined4)local_80;
    *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_78) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_78.Data;
    *(undefined4 *)&pFVar11->_padding_ = (undefined4)local_70;
    *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = local_70._4_4_;
    local_70 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_1a0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_1a0.Data;
    *(int *)&pFVar11->_padding_ = (int)local_198;
    *(int *)((longlong)&pFVar11->_padding_ + 4) = local_198._4_4_;
    local_198 = 0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_188) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_188.Data;
    *(int *)&pFVar11->_padding_ = (int)local_180;
    *(int *)((longlong)&pFVar11->_padding_ + 4) = local_180._4_4_;
    local_180 = 0;
    local_188.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_1c0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_1c0.Data;
    *(int *)&pFVar11->_padding_ = (int)local_1b8;
    *(int *)((longlong)&pFVar11->_padding_ + 4) = local_1b8._4_4_;
    local_1b8 = 0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &pFVar11->_padding_;
  if ((ForAnyElementType *)plVar17 != &local_1b0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_1b0.Data;
    *(int *)&pFVar11->_padding_ = (int)local_1a8;
    *(int *)((longlong)&pFVar11->_padding_ + 4) = local_1a8._4_4_;
    local_1a8 = 0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
  }
  (**(code **)(local_b8->RHI->_padding_ + 200))(local_b8->RHI,pFVar11,pFVar38);
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  lVar16 = 2;
  puVar28 = (undefined1 *)&stack0xffffffffffffff98;
  lVar31 = 2;
  do {
    puVar2 = (undefined8 *)(puVar28 + -0x10);
    puVar28 = puVar28 + -0x10;
    lVar31 = lVar31 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar31 != 0);
  puVar28 = (undefined1 *)&stack0xffffffffffffffb8;
  do {
    puVar2 = (undefined8 *)(puVar28 + -0x10);
    puVar28 = puVar28 + -0x10;
    lVar16 = lVar16 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar16 != 0);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// RHICreateUniformBuffer @ 145ce7d30

TRefCountPtr<FRHIUniformBuffer> __thiscall
FValidationRHI::RHICreateUniformBuffer
          (FValidationRHI *this,void *param_1,FRHIUniformBufferLayout *param_2,
          EUniformBufferUsage param_3,EUniformBufferValidation param_4)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIUniformBuffer> TVar3;
  atomic<unsigned___int64> aVar4;
  undefined4 in_register_0000008c;
  longlong lVar5;
  undefined4 in_stack_00000030;
  
  lVar5 = CONCAT44(in_register_0000008c,param_3);
  if (lVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Layout",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIUniformBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIUniformBuffer>)TVar3.Reference;
    }
  }
  if ((*(int *)(lVar5 + 0x30) < 1) && (*(int *)(lVar5 + 0x8c) == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Layout->Resources.Num() > 0 || Layout->ConstantBufferSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x18d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIUniformBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIUniformBuffer>)TVar3.Reference;
    }
  }
  (**(code **)(this->RHI->_padding_ + 0x128))
            (this->RHI,param_1,param_2,lVar5,param_4,in_stack_00000030);
  lVar5 = *(longlong *)param_1;
  bVar2 = IsInRHIThread();
  if (bVar2) {
    aVar4 = (atomic<unsigned___int64>)this->RHIThreadFrameID;
  }
  else {
    aVar4 = this->RenderThreadFrameID;
  }
  *(atomic<unsigned___int64> *)(lVar5 + 0x18) = aVar4;
  *(bool *)(lVar5 + 0x20) = param_2 == (FRHIUniformBufferLayout *)0x0;
  *(EUniformBufferValidation *)(lVar5 + 0x24) = param_4;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return (TRefCountPtr<FRHIUniformBuffer>)param_1;
}

// RHICreateUnorderedAccessView @ 145ce7e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FValidationRHI::RHICreateUnorderedAccessView
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIViewableResource *param_2,
          FRHIViewDesc *param_3)

{
  FBufferUAV *in_stack_00000028;
  undefined1 auStack_78 [48];
  FViewInfo local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((*(char *)in_stack_00000028 == '\0') || (*(char *)in_stack_00000028 == '\x01')) {
    FRHIViewDesc::FBufferUAV::GetViewInfo(in_stack_00000028,&local_48,(FRHIBuffer *)param_3);
    ValidateViewForBufferType((FViewInfo *)&local_48,(FRHIBuffer *)param_3);
  }
  (**(code **)(this->RHI->_padding_ + 0x1b8))(this->RHI,param_1,param_2,param_3);
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHICreateVertexDeclaration @ 145ce7ee0

TRefCountPtr<FRHIVertexDeclaration> __thiscall
FValidationRHI::RHICreateVertexDeclaration
          (FValidationRHI *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x68))();
  return (TRefCountPtr<FRHIVertexDeclaration>)(FRHIVertexDeclaration *)param_1;
}

// RHICreateVertexShader @ 145ce7f10

TRefCountPtr<FRHIVertexShader> __thiscall
FValidationRHI::RHICreateVertexShader
          (FValidationRHI *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)param_2->Hash;
  uStack_14 = *(undefined4 *)(param_2->Hash + 4);
  uStack_10 = *(undefined4 *)(param_2->Hash + 8);
  uStack_c = *(undefined4 *)(param_2->Hash + 0xc);
  (**(code **)(this->RHI->_padding_ + 0x78))(this->RHI,param_1,&local_18);
  return (TRefCountPtr<FRHIVertexShader>)(FRHIVertexShader *)param_1;
}

// RHICreateViewport @ 145ce7f40

TRefCountPtr<FRHIViewport> __thiscall
FValidationRHI::RHICreateViewport
          (FValidationRHI *this,void *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
  (**(code **)(this->RHI->_padding_ + 0x308))();
  return (TRefCountPtr<FRHIViewport>)param_1;
}

// RHIEndFrame @ 145ce9960

void __thiscall FValidationRHI::RHIEndFrame(FValidationRHI *this,FRHIEndFrameArgs *param_1)

{
  this->RHIThreadFrameID = this->RHIThreadFrameID + 1;
                    /* WARNING: Could not recover jumptable at 0x000145ce996b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x40))();
  return;
}

// RHIEndFrame_RenderThread @ 145ce9980

void __thiscall
FValidationRHI::RHIEndFrame_RenderThread(FValidationRHI *this,FRHICommandListImmediate *param_1)

{
  LOCK();
  this->RenderThreadFrameID = (atomic<unsigned___int64>)((longlong)this->RenderThreadFrameID + 1);
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000145ce998c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x38))();
  return;
}

// RHIEndMultiUpdateTexture3D @ 145ce99a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIEndMultiUpdateTexture3D
          (FValidationRHI *this,FRHICommandListBase *param_1,
          TArray<FUpdateTexture3DData,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce99a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x418))();
  return;
}

// RHIEndRenderQueryBatch_TopOfPipe @ 145ce9a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIEndRenderQueryBatch_TopOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,ERenderQueryType param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce9a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x270))();
  return;
}

// RHIEndRenderQuery_TopOfPipe @ 145ce9aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIEndRenderQuery_TopOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIRenderQuery *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ce9aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x280))();
  return;
}

// RHIEndUpdateTexture3D @ 145cea1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIEndUpdateTexture3D
          (FValidationRHI *this,FRHICommandListBase *param_1,FUpdateTexture3DData *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cea1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x410))();
  return;
}

// RHIFinalizeContext @ 145cea210

void __thiscall
FValidationRHI::RHIFinalizeContext
          (FValidationRHI *this,FRHIFinalizeContextArgs *param_1,
          TRHIPipelineArray<IRHIPlatformCommandList_*> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  void *pvVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  IRHIUploadContext *local_a0;
  longlong local_98;
  uint local_90;
  FScriptContainerElement *local_88;
  longlong local_80;
  longlong lStack_78;
  FScriptContainerElement *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58 [3];
  
  local_90 = (param_1->Contexts).ArrayNum;
  uVar12 = (ulonglong)(int)local_90;
  pFVar13 = (param_1->Contexts).AllocatorInstance.Data;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = pFVar13 + uVar12 * 8;
  local_80 = 0;
  lStack_78 = 0;
  while( true ) {
    pFVar16 = local_70;
    puVar14 = (undefined8 *)0x0;
    local_88 = pFVar13;
    if ((param_1->Contexts).ArrayNum != (int)uVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<IRHIComputeContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar13 == pFVar16) break;
    plVar11 = *(longlong **)pFVar13;
    lVar9 = (**(code **)(*plVar11 + 0x148))(plVar11);
    puVar10 = ::operator_new(0x68);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = 2;
      puVar14 = puVar10;
    }
    lVar4 = *(longlong *)(lVar9 + 8);
    puVar10 = puVar14 + 0xb;
    pvVar15 = *(void **)(lVar4 + 8);
    *(undefined8 *)(lVar4 + 8) = 0;
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    uVar2 = *(undefined4 *)(lVar4 + 0x14);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    if (puVar10 != local_58) {
      if ((void *)*puVar10 != (void *)0x0) {
        FMemory::Free((void *)*puVar10);
      }
      *puVar10 = pvVar15;
      pvVar15 = (void *)0x0;
      *(undefined4 *)(puVar14 + 0xc) = uVar1;
      *(undefined4 *)((longlong)puVar14 + 100) = uVar2;
    }
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    cVar6 = (**(code **)(*plVar11 + 8))(plVar11);
    *(char *)(puVar14 + 8) = cVar6;
    if ((cVar6 == '\x01') || (plVar11 = &lStack_78, cVar6 != '\x02')) {
      plVar11 = &local_80;
    }
    *plVar11 = (longlong)puVar14;
    local_98 = lVar9;
    if (((local_b0.Data <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 < local_b0.Data + (longlong)local_a8._4_4_ * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)local_a8;
    if ((int)local_a8 == local_a8._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
    }
    pFVar13 = local_88 + 8;
    local_a8 = CONCAT44(local_a8._4_4_,iVar8 + 1);
    *(longlong *)(local_b0.Data + (longlong)iVar8 * 8) = local_98;
    uVar12 = (ulonglong)local_90;
  }
  local_a0 = param_1->UploadContext;
  (**(code **)(this->RHI->_padding_ + 0x3e0))(this->RHI,&local_b0,&local_68);
  pFVar16 = (param_1->Contexts).AllocatorInstance.Data;
  iVar8 = (param_1->Contexts).ArrayNum;
  pFVar13 = pFVar16 + (longlong)iVar8 * 8;
  do {
    if ((param_1->Contexts).ArrayNum != iVar8) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<IRHIComputeContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar16 == pFVar13) {
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return;
    }
    plVar11 = *(longlong **)pFVar16;
    cVar6 = (**(code **)(*plVar11 + 8))(plVar11);
    if ((cVar6 == '\x01') || (lVar9 = lStack_78, cVar6 != '\x02')) {
      lVar9 = local_80;
    }
    if (*(char *)(lVar9 + 0x40) == '\x01') {
      iVar3 = (int)plVar11[0x26];
LAB_145cea4b9:
      if (iVar3 == 1) {
        (**(code **)*plVar11)(plVar11,1);
      }
    }
    else {
      if (*(char *)(lVar9 + 0x40) == '\x02') {
        iVar3 = (int)plVar11[6];
        goto LAB_145cea4b9;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x2b2,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    cVar6 = *(char *)(lVar9 + 0x40);
    if ((cVar6 == '\x01') || (cVar6 != '\x02')) {
      *(undefined8 *)(lVar9 + 0x48) = local_68;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      if ((cVar6 == '\x01') || (cVar6 != '\x02')) {
        pFVar16 = pFVar16 + 8;
        *(longlong *)param_2 = lVar9;
      }
      else {
        pFVar16 = pFVar16 + 8;
        *(longlong *)&param_2->field_0x8 = lVar9;
      }
    }
    else {
      *(undefined8 *)(lVar9 + 0x48) = uStack_60;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      pFVar16 = pFVar16 + 8;
      *(longlong *)&param_2->field_0x8 = lVar9;
    }
  } while( true );
}

// RHIFinalizeParallelContext @ 145cea560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IRHIPlatformCommandList * __thiscall
FValidationRHI::RHIFinalizeParallelContext(FValidationRHI *this,IRHIComputeContext *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  IRHIPlatformCommandList *pIVar8;
  longlong lVar9;
  IRHIPlatformCommandList *pIVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 local_38 [2];
  
  cVar6 = (**(code **)(param_1->_padding_ + 8))(param_1);
  if ((cVar6 != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->GetPipeline() == ERHIPipeline::Graphics",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x2f8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar8 = (IRHIPlatformCommandList *)(*pcVar5)();
    return pIVar8;
  }
  lVar9 = (**(code **)(param_1->_padding_ + 0x148))(param_1);
  pIVar10 = ::operator_new(0x68);
  pIVar8 = (IRHIPlatformCommandList *)0x0;
  if (pIVar10 != (IRHIPlatformCommandList *)0x0) {
    *(undefined8 *)&pIVar10->BreadcrumbAllocators = 0;
    *(undefined8 *)&(pIVar10->BreadcrumbAllocators).field_0x8 = 0;
    *(undefined8 *)&(pIVar10->BreadcrumbAllocators).field_0x10 = 0;
    *(undefined8 *)&(pIVar10->BreadcrumbAllocators).field_0x18 = 0;
    *(undefined8 *)&(pIVar10->BreadcrumbAllocators).field_0x20 = 0;
    *(undefined8 *)&(pIVar10->BreadcrumbAllocators).field_0x28 = 0;
    (pIVar10->BreadcrumbRange).First = (FRHIBreadcrumbNode *)0x0;
    (pIVar10->BreadcrumbRange).Last = (FRHIBreadcrumbNode *)0x0;
    *(undefined8 *)&pIVar10[1].BreadcrumbAllocators = 0;
    *(undefined8 *)&pIVar10[1].BreadcrumbAllocators.field_0x8 = 0;
    *(undefined8 *)&pIVar10[1].BreadcrumbAllocators.field_0x10 = 0;
    *(undefined8 *)&pIVar10[1].BreadcrumbAllocators.field_0x18 = 0;
    *(undefined8 *)&pIVar10[1].BreadcrumbAllocators.field_0x20 = 0;
    *(undefined4 *)&(pIVar10->BreadcrumbAllocators).field_0x2c = 2;
    pIVar8 = pIVar10;
  }
  lVar4 = *(longlong *)(lVar9 + 8);
  puVar1 = &pIVar8[1].BreadcrumbAllocators.field_0x18;
  pvVar12 = *(void **)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 8) = 0;
  uVar2 = *(undefined4 *)(lVar4 + 0x10);
  uVar3 = *(undefined4 *)(lVar4 + 0x14);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if ((undefined8 *)puVar1 != local_38) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(void **)puVar1 = pvVar12;
    pvVar12 = (void *)0x0;
    *(undefined4 *)&pIVar8[1].BreadcrumbAllocators.field_0x20 = uVar2;
    *(undefined4 *)&pIVar8[1].BreadcrumbAllocators.field_0x24 = uVar3;
  }
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  *(undefined1 *)&pIVar8[1].BreadcrumbAllocators = 1;
  uVar11 = (**(code **)(this->RHI->_padding_ + 1000))(this->RHI,lVar9);
  *(undefined8 *)&pIVar8[1].BreadcrumbAllocators.field_0x8 = uVar11;
  if ((*(int *)&param_1[6].WrappingContext != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("static_cast<FValidationContext*>(Context)->Type == FValidationContext::EType::Parallel"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x303,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pIVar8 = (IRHIPlatformCommandList *)(*pcVar5)();
    return pIVar8;
  }
  (**(code **)param_1->_padding_)(param_1,1);
  return pIVar8;
}

// RHIFlushResources @ 145cea6d0

void __thiscall FValidationRHI::RHIFlushResources(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cea6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x300))();
  return;
}

// RHIGetAvailableResolutions @ 145cea6f0

bool __thiscall
FValidationRHI::RHIGetAvailableResolutions
          (FValidationRHI *this,TArray<FScreenResolutionRHI,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145cea6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x368))();
  return (bool)uVar1;
}

// RHIGetCommandContext @ 145cea710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

IRHIComputeContext * __thiscall
FValidationRHI::RHIGetCommandContext(FValidationRHI *this,ERHIPipeline param_1,FRHIGPUMask param_2)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  IRHIComputeContext *pIVar4;
  FValidationComputeContext *this_00;
  FValidationContext *pFVar5;
  FTracker *pFVar6;
  undefined4 in_register_00000084;
  
  pIVar3 = (IRHICommandContext *)
           (**(code **)(this->RHI->_padding_ + 0x3c0))
                     (this->RHI,param_1,CONCAT44(in_register_00000084,param_2.GPUMask));
  if (pIVar3 == (IRHICommandContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x271,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IRHIComputeContext *)(*pcVar1)();
      return pIVar4;
    }
  }
  if (param_1 == Graphics) {
    pFVar5 = ::operator_new(1000);
    if (pFVar5 == (FValidationContext *)0x0) {
      pFVar5 = (FValidationContext *)0x0;
    }
    else {
      pFVar5 = FValidationContext::FValidationContext(pFVar5,Parallel);
    }
    pFVar5->RHIContext = pIVar3;
    pFVar6 = &(pFVar5->State).TrackerInstance;
  }
  else {
    if (param_1 != AsyncCompute) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x284,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar4 = (IRHIComputeContext *)(*pcVar1)();
        return pIVar4;
      }
      return (IRHIComputeContext *)0x0;
    }
    this_00 = ::operator_new(0xb8);
    if (this_00 == (FValidationComputeContext *)0x0) {
      pFVar5 = (FValidationContext *)0x0;
      pFVar6 = (FTracker *)&DAT_00000040;
      _DAT_00000038 = pIVar3;
    }
    else {
      pFVar5 = (FValidationContext *)
               FValidationComputeContext::FValidationComputeContext(this_00,Parallel);
      pFVar5->_padding_ = (longlong)pIVar3;
      pFVar6 = (FTracker *)&pFVar5->_padding_;
    }
  }
  pIVar3->_padding_ = (longlong)pFVar6;
  pIVar3->_padding_ = (longlong)pFVar5;
  return (IRHIComputeContext *)pFVar5;
}

// RHIGetDefaultContext @ 145cea820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

IRHICommandContext * __thiscall FValidationRHI::RHIGetDefaultContext(FValidationRHI *this)

{
  FValidationContext *pFVar1;
  FValidationContext *this_00;
  FValidationContext *pFVar2;
  
  pFVar1 = (FValidationContext *)(**(code **)(this->RHI->_padding_ + 0x3b8))();
  pFVar2 = (FValidationContext *)pFVar1->_padding_;
  if ((pFVar2 == (FValidationContext *)0x0) || (pFVar1 == pFVar2)) {
    this_00 = ::operator_new(1000);
    pFVar2 = (FValidationContext *)0x0;
    if (this_00 != (FValidationContext *)0x0) {
      pFVar2 = FValidationContext::FValidationContext(this_00,Default);
    }
    pFVar2->RHIContext = (IRHICommandContext *)pFVar1;
    pFVar1->_padding_ = (longlong)&pFVar2->State;
    pFVar1->_padding_ = (longlong)pFVar2;
  }
  return (IRHICommandContext *)pFVar2;
}

// RHIGetDisplaysInformation @ 145cea9a0

void __thiscall
FValidationRHI::RHIGetDisplaysInformation
          (FValidationRHI *this,TArray<FDisplayInformation,TSizedDefaultAllocator<32>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cea9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x2c8))();
  return;
}

// RHIGetHTilePlatformConfig @ 145ceaa30

uint __thiscall
FValidationRHI::RHIGetHTilePlatformConfig(FValidationRHI *this,FRHITextureDesc *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaa37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x2a8))();
  return uVar1;
}

// RHIGetHTilePlatformConfig @ 145ceaa50

uint __thiscall
FValidationRHI::RHIGetHTilePlatformConfig(FValidationRHI *this,uint param_1,uint param_2)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaa57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x2b0))();
  return uVar1;
}

// RHIGetMinimumAlignmentForBufferBackedSRV @ 145ceaa70

ulong64 __thiscall
FValidationRHI::RHIGetMinimumAlignmentForBufferBackedSRV(FValidationRHI *this,EPixelFormat param_1)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaa77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x180))();
  return uVar1;
}

// RHIGetNativeCommandBuffer @ 145ceaab0

void * __thiscall FValidationRHI::RHIGetNativeCommandBuffer(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x3b0))();
  return pvVar1;
}

// RHIGetNativeComputeQueue @ 145ceaad0

void * __thiscall FValidationRHI::RHIGetNativeComputeQueue(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x3a0))();
  return pvVar1;
}

// RHIGetNativeDevice @ 145ceaaf0

void * __thiscall FValidationRHI::RHIGetNativeDevice(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaaf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x388))();
  return pvVar1;
}

// RHIGetNativeGraphicsQueue @ 145ceab10

void * __thiscall FValidationRHI::RHIGetNativeGraphicsQueue(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceab17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x398))();
  return pvVar1;
}

// RHIGetNativeInstance @ 145ceab30

void * __thiscall FValidationRHI::RHIGetNativeInstance(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceab37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x3a8))();
  return pvVar1;
}

// RHIGetNativePhysicalDevice @ 145ceab50

void * __thiscall FValidationRHI::RHIGetNativePhysicalDevice(FValidationRHI *this)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceab57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x390))();
  return pvVar1;
}

// RHIGetParallelCommandContext @ 145ceab70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

IRHIComputeContext * __thiscall
FValidationRHI::RHIGetParallelCommandContext
          (FValidationRHI *this,FRHIParallelRenderPassInfo *param_1,FRHIGPUMask param_2)

{
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  IRHIComputeContext *pIVar4;
  FValidationContext *pFVar5;
  undefined4 in_register_00000084;
  
  if ((!GRHIGlobals.ParallelRHIExecuteChildWait) && (!GRHIGlobals.ParallelRHIExecuteParentWait)) {
    pIVar3 = (IRHICommandContext *)(**(code **)(this->RHI->_padding_ + 0x3c0))(this->RHI,1);
    if (pIVar3 == (IRHICommandContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x271,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar4 = (IRHIComputeContext *)(*pcVar1)();
        return pIVar4;
      }
    }
    pFVar5 = ::operator_new(1000);
    if (pFVar5 == (FValidationContext *)0x0) {
      pFVar5 = (FValidationContext *)0x0;
    }
    else {
      pFVar5 = FValidationContext::FValidationContext(pFVar5,Parallel);
    }
    pFVar5->RHIContext = pIVar3;
    pIVar3->_padding_ = (longlong)&pFVar5->State;
    pIVar3->_padding_ = (longlong)pFVar5;
    (**(code **)(pFVar5->_padding_ + 0x248))(pFVar5,param_1,param_1->PassName);
    return (IRHIComputeContext *)pFVar5;
  }
  pIVar3 = (IRHICommandContext *)
           (**(code **)(this->RHI->_padding_ + 0x3c8))
                     (this->RHI,param_1,CONCAT44(in_register_00000084,param_2.GPUMask));
  if (pIVar3 == (IRHICommandContext *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                       ,0x2c4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IRHIComputeContext *)(*pcVar1)();
      return pIVar4;
    }
  }
  pFVar5 = ::operator_new(1000);
  if (pFVar5 == (FValidationContext *)0x0) {
    pFVar5 = (FValidationContext *)0x0;
  }
  else {
    pFVar5 = FValidationContext::FValidationContext(pFVar5,Parallel);
  }
  pFVar5->RHIContext = pIVar3;
  pIVar3->_padding_ = (longlong)&pFVar5->State;
  pIVar3->_padding_ = (longlong)pFVar5;
  (pFVar5->State).bInsideBeginRenderPass = true;
  FRHIRenderPassInfo::operator=(&(pFVar5->State).RenderPassInfo,(FRHIRenderPassInfo *)param_1);
  if (param_1->PassName != (wchar_t *)0x0) {
    ::FString::operator=(&(pFVar5->State).RenderPassName,param_1->PassName);
  }
  return (IRHIComputeContext *)pFVar5;
}

// RHIGetPlatformTextureMaxSampleCount @ 145cead00

ushort __thiscall FValidationRHI::RHIGetPlatformTextureMaxSampleCount(FValidationRHI *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145cead07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x468))();
  return uVar1;
}

// RHIGetRayTracingGeometryOfflineMetadata @ 145ceae90

FRayTracingAccelerationStructureOfflineMetadata * __thiscall
FValidationRHI::RHIGetRayTracingGeometryOfflineMetadata
          (FValidationRHI *this,
          FRayTracingAccelerationStructureOfflineMetadata *__return_storage_ptr__,
          FRayTracingGeometryOfflineDataHeader *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x488))();
  return __return_storage_ptr__;
}

// RHIGetRenderQueryResult @ 145ceaec0

bool __thiscall
FValidationRHI::RHIGetRenderQueryResult
          (FValidationRHI *this,FRHIRenderQuery *param_1,ulong64 *param_2,bool param_3,uint param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceaece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x288))();
  return (bool)uVar1;
}

// RHIGetSupportedResolution @ 145ceaee0

void __thiscall
FValidationRHI::RHIGetSupportedResolution(FValidationRHI *this,uint *param_1,uint *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceaee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x370))();
  return;
}

// RHIGetTextureMemoryStats @ 145ceaff0

void __thiscall
FValidationRHI::RHIGetTextureMemoryStats(FValidationRHI *this,FTextureMemoryStats *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceaff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x188))();
  return;
}

// RHIGetTextureMemoryVisualizeData @ 145ceb010

bool __thiscall
FValidationRHI::RHIGetTextureMemoryVisualizeData
          (FValidationRHI *this,FColor *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 400))();
  return (bool)uVar1;
}

// RHIGetUploadContext @ 145ceb030

IRHIUploadContext * __thiscall FValidationRHI::RHIGetUploadContext(FValidationRHI *this)

{
  IRHIUploadContext *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IRHIUploadContext *)(**(code **)(this->RHI->_padding_ + 0x3d0))();
  return pIVar1;
}

// RHIGetViewportBackBuffer @ 145ceb050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FValidationRHI::RHIGetViewportBackBuffer(FValidationRHI *this,FRHIViewport *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  FState FVar4;
  byte bVar5;
  int *piVar6;
  longlong lVar7;
  FResource *this_00;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uStackX_c;
  ushort uStack_1a;
  
  (**(code **)(this->RHI->_padding_ + 0x298))();
  piVar6 = (int *)(**(code **)(*(longlong *)(*(longlong *)param_1 + 0x28) + 8))();
  if ((*piVar6 != 0) && (piVar6[1] != 0)) {
    return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
  }
  plVar1 = *(longlong **)param_1 + 5;
  (**(code **)(**(longlong **)param_1 + 0x20))();
  lVar7 = (**(code **)(**(longlong **)param_1 + 0x20))();
  cVar2 = *(char *)(lVar7 + 0x33);
  lVar7 = (**(code **)(**(longlong **)param_1 + 0x20))();
  cVar3 = *(char *)(lVar7 + 0x32);
  uVar11 = 1;
  if (cVar3 == '\0') {
LAB_145ceb0eb:
    uVar10 = 1;
  }
  else {
    if (cVar3 != '\x01') {
      if (cVar3 == '\x02') {
        uVar10 = (uint)*(ushort *)(lVar7 + 0x2c);
        goto LAB_145ceb0ed;
      }
      if (cVar3 == '\x03') goto LAB_145ceb0eb;
      if (cVar3 != '\x04') {
        uVar10 = 0;
        goto LAB_145ceb0ed;
      }
    }
    uVar10 = (uint)*(ushort *)(lVar7 + 0x2e);
  }
LAB_145ceb0ed:
  lVar7 = (**(code **)(**(longlong **)param_1 + 0x20))();
  bVar5 = *(byte *)(lVar7 + 0x30);
  this_00 = (FResource *)(**(code **)(*plVar1 + 8))(plVar1);
  if (this_00 != (FResource *)0x0) {
    if ((cVar2 == '\v') || (cVar2 == ',')) {
      uVar11 = 2;
    }
    this_00->NumMips = (uint)bVar5;
    this_00->NumArraySlices = uVar10;
    this_00->NumPlanes = uVar11;
    lVar7 = (ulonglong)uStack_1a << 0x30;
    uStackX_c = uStackX_c & 0xffffff00;
    (this_00->TransientState).AcquireBacktrace = (void *)0x0;
    (this_00->TransientState).NumAcquiredSubresources = (int)lVar7;
    (this_00->TransientState).bTransient = (bool)(char)((ulonglong)lVar7 >> 0x20);
    (this_00->TransientState).Status = (char)((ulonglong)lVar7 >> 0x28);
    *(short *)&(this_00->TransientState).field_0xe = (short)((ulonglong)lVar7 >> 0x30);
    FVar4._4_4_ = uStackX_c;
    FVar4.Access = Present;
    this_00->TrackedState = FVar4;
    bVar5 = 3;
    do {
      bVar8 = ~bVar5 + 1 & bVar5;
      if ((bVar8 == 1) || (bVar8 != 2)) {
        lVar7 = 0x54;
        lVar9 = 0x50;
        lVar12 = 0x48;
      }
      else {
        lVar7 = 0x7c;
        lVar9 = 0x78;
        lVar12 = 0x70;
      }
      *(undefined4 *)((longlong)&this_00->NumMips + lVar9) = 2;
      *(byte *)((longlong)&this_00->NumMips + lVar7) = bVar8;
      *(undefined8 *)((longlong)&this_00->NumMips + lVar12) =
           *(undefined8 *)((longlong)&this_00->NumMips + lVar9);
      bVar5 = bVar5 & ~(~bVar5 + 1);
    } while (bVar5 != 0);
    RHIValidation::FResource::SetDebugName(this_00,L"ViewportTexture",(wchar_t *)0x0);
  }
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// RHIGetViewportBackBufferUAV @ 145ceb210

TRefCountPtr<FRHIUnorderedAccessView> __thiscall
FValidationRHI::RHIGetViewportBackBufferUAV(FValidationRHI *this,FRHIViewport *param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x2a0))();
  return (TRefCountPtr<FRHIUnorderedAccessView>)(FRHIUnorderedAccessView *)param_1;
}

// RHIGetViewportNextPresentGPUIndex @ 145ceb240

uint __thiscall
FValidationRHI::RHIGetViewportNextPresentGPUIndex(FValidationRHI *this,FRHIViewport *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x290))();
  return uVar1;
}

// RHIHandleDisplayChange @ 145ceb260

void __thiscall FValidationRHI::RHIHandleDisplayChange(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceb267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x330))();
  return;
}

// RHIIsRenderingSuspended @ 145ceb390

bool __thiscall FValidationRHI::RHIIsRenderingSuspended(FValidationRHI *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->RHI->_padding_ + 0x360))();
  return (bool)uVar1;
}

// RHILockBuffer @ 145ceb3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FValidationRHI::RHILockBuffer
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,EResourceLockMode param_5)

{
  void *pvVar1;
  
  LockBufferValidate(this,param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x000145ceb413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x148))(this->RHI,param_1,param_2,param_3);
  return pvVar1;
}

// RHILockBufferMGPU @ 145ceb420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void * __thiscall
FValidationRHI::RHILockBufferMGPU
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3,
          uint param_4,uint param_5,EResourceLockMode param_6)

{
  void *pvVar1;
  
  LockBufferValidate(this,param_1,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x000145ceb486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0x150))(this->RHI,param_1,param_2,param_3);
  return pvVar1;
}

// RHILockStagingBuffer @ 145ceb490

void * __thiscall
FValidationRHI::RHILockStagingBuffer
          (FValidationRHI *this,FRHIStagingBuffer *param_1,FRHIGPUFence *param_2,uint param_3,
          uint param_4)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb49e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(this->RHI->_padding_ + 0xe8))();
  return pvVar1;
}

// RHILockTexture @ 145ceb4b0

FRHILockTextureResult * __thiscall
FValidationRHI::RHILockTexture
          (FValidationRHI *this,FRHILockTextureResult *__return_storage_ptr__,
          FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FRHILockTextureResult *pFVar5;
  wchar_t *pwVar6;
  
  lVar4 = (**(code **)(*(longlong *)param_2->_padding_ + 0x20))();
  if ((uint)*(byte *)(lVar4 + 0x30) <= (uint)param_2->_padding_) {
    ReportValidationFailure(L"Out of bounds MipIndex");
  }
  cVar1 = *(char *)(lVar4 + 0x32);
  if (cVar1 == '\0') {
    if (*(int *)((longlong)&param_2->_padding_ + 4) != 0) {
      ReportValidationFailure(L"Texture2D locks do not support array indexing");
    }
    if ((int)param_2->_padding_ == 0) goto LAB_145ceb5fc;
    pwVar6 = L"Texture2D locks do not support face indexing";
  }
  else if (cVar1 == '\x01') {
    if ((uint)*(ushort *)(lVar4 + 0x2e) <= *(uint *)((longlong)&param_2->_padding_ + 4)) {
      ReportValidationFailure(L"Texture2DArray lock out of bounds ArrayIndex");
    }
    if ((int)param_2->_padding_ == 0) goto LAB_145ceb5fc;
    pwVar6 = L"Texture2DArray locks do not support face indexing";
  }
  else if (cVar1 == '\x02') {
    ReportValidationFailure(L"Texture3D locks have not been fully tested");
    if ((int)param_2->_padding_ == 0) goto LAB_145ceb5fc;
    pwVar6 = L"Texture3D locks do not support face indexing";
  }
  else if (cVar1 == '\x03') {
    if (*(int *)((longlong)&param_2->_padding_ + 4) != 0) {
      ReportValidationFailure(L"TextureCube locks do not support array indexing");
    }
    if ((uint)param_2->_padding_ < 6) goto LAB_145ceb5fc;
    pwVar6 = L"TextureCube lock out of bounds FaceIndex";
  }
  else {
    if (cVar1 != '\x04') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                         ,0x47b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRHILockTextureResult *)(*pcVar2)();
        return pFVar5;
      }
      goto LAB_145ceb5fc;
    }
    if ((uint)*(ushort *)(lVar4 + 0x2e) <= *(uint *)((longlong)&param_2->_padding_ + 4)) {
      ReportValidationFailure(L"Out of bounds ArrayIndex");
    }
    if ((uint)param_2->_padding_ < 6) goto LAB_145ceb5fc;
    pwVar6 = L"TextureCubeArray lock out of bounds Face Index";
  }
  ReportValidationFailure(pwVar6);
LAB_145ceb5fc:
  (**(code **)(this->RHI->_padding_ + 0x1e0))(this->RHI,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// RHIMapStagingSurface @ 145ceb640

void __thiscall
FValidationRHI::RHIMapStagingSurface
          (FValidationRHI *this,FRHITexture *param_1,FRHIGPUFence *param_2,void **param_3,
          int *param_4,int *param_5,uint param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceb64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x230))();
  return;
}

// RHIMapStagingSurface_RenderThread @ 145ceb660

void __thiscall
FValidationRHI::RHIMapStagingSurface_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3,
          FRHIGPUFence *param_4,void **param_5,int *param_6,int *param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceb66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x428))();
  return;
}

// RHIPreferredPixelFormatHint @ 145ceb9c0

EPixelFormat __thiscall
FValidationRHI::RHIPreferredPixelFormatHint(FValidationRHI *this,EPixelFormat param_1)

{
  EPixelFormat EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145ceb9c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->RHI->_padding_ + 800))();
  return EVar1;
}

// RHIProcessDeleteQueue @ 145ceb9e0

void __thiscall FValidationRHI::RHIProcessDeleteQueue(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceb9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x3f8))();
  return;
}

// RHIRead3DSurfaceFloatData @ 145cebe40

void __thiscall
FValidationRHI::RHIRead3DSurfaceFloatData
          (FValidationRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,TIntPoint<int> param_3,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4)

{
  TIntPoint<int>_u_0 local_18;
  TIntPoint<int>_u_0 local_10;
  
  local_18 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_10 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  (**(code **)(this->RHI->_padding_ + 600))(this->RHI,param_1,&local_18,param_3.field0_0x0,param_4);
  return;
}

// RHIRead3DSurfaceFloatData @ 145cebe80

void __thiscall
FValidationRHI::RHIRead3DSurfaceFloatData
          (FValidationRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,TIntPoint<int> param_3,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,FReadSurfaceDataFlags *param_5)

{
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  ECubeFace local_28;
  ERangeCompressionMode EStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_38 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_30 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_28 = param_5->CubeFace;
  EStack_24 = param_5->CompressionMode;
  uStack_20 = *(undefined4 *)&param_5->bLinearToGamma;
  fStack_1c = param_5->MaxDepthRange;
  local_18._0_1_ = param_5->bOutputStencil;
  local_18._1_1_ = param_5->MipLevel;
  local_18._2_2_ = *(undefined2 *)&param_5->field_0x12;
  local_18._4_4_ = param_5->ArrayIndex;
  local_10 = param_5->GPUIndex;
  (**(code **)(this->RHI->_padding_ + 0x250))
            (this->RHI,local_18,&local_38,param_3.field0_0x0,param_4,&local_28);
  return;
}

// RHIReadSurfaceData @ 145cebef0

void __thiscall
FValidationRHI::RHIReadSurfaceData
          (FValidationRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  ECubeFace local_28;
  ERangeCompressionMode EStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_38 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_30 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_28 = param_4->CubeFace;
  EStack_24 = param_4->CompressionMode;
  uStack_20 = *(undefined4 *)&param_4->bLinearToGamma;
  fStack_1c = param_4->MaxDepthRange;
  local_18._0_1_ = param_4->bOutputStencil;
  local_18._1_1_ = param_4->MipLevel;
  local_18._2_2_ = *(undefined2 *)&param_4->field_0x12;
  local_18._4_4_ = param_4->ArrayIndex;
  local_10 = param_4->GPUIndex;
  (**(code **)(this->RHI->_padding_ + 0x228))(this->RHI,local_18,&local_38,param_3,&local_28);
  return;
}

// RHIReadSurfaceData @ 145cebf60

void __thiscall
FValidationRHI::RHIReadSurfaceData
          (FValidationRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,FReadSurfaceDataFlags *param_4)

{
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  ECubeFace local_28;
  ERangeCompressionMode EStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_38 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_30 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_28 = param_4->CubeFace;
  EStack_24 = param_4->CompressionMode;
  uStack_20 = *(undefined4 *)&param_4->bLinearToGamma;
  fStack_1c = param_4->MaxDepthRange;
  local_18._0_1_ = param_4->bOutputStencil;
  local_18._1_1_ = param_4->MipLevel;
  local_18._2_2_ = *(undefined2 *)&param_4->field_0x12;
  local_18._4_4_ = param_4->ArrayIndex;
  local_10 = param_4->GPUIndex;
  (**(code **)(this->RHI->_padding_ + 0x220))(this->RHI,local_18,&local_38,param_3,&local_28);
  return;
}

// RHIReadSurfaceFloatData @ 145cebfd0

void __thiscall
FValidationRHI::RHIReadSurfaceFloatData
          (FValidationRHI *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_3,ECubeFace param_4,int param_5,
          int param_6)

{
  TIntPoint<int>_u_0 local_18;
  TIntPoint<int>_u_0 local_10;
  
  local_18 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_10 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  (**(code **)(this->RHI->_padding_ + 0x248))
            (this->RHI,param_1,&local_18,param_3,param_4,param_5,param_6);
  return;
}

// RHIReadSurfaceFloatData_RenderThread @ 145cec030

void __thiscall
FValidationRHI::RHIReadSurfaceFloatData_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,
          TIntRect<int> *param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,
          ECubeFace param_5,int param_6,int param_7)

{
  (**(code **)(this->RHI->_padding_ + 0x440))();
  return;
}

// RHIReleaseThreadOwnership @ 145cec0a0

void __thiscall FValidationRHI::RHIReleaseThreadOwnership(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x2f8))();
  return;
}

// RHIReleaseTransition @ 145cec0c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FValidationRHI::RHIReleaseTransition(FValidationRHI *this,FRHITransition *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec0c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0xd0))();
  return;
}

// RHIReplaceResources @ 145cec0e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIReplaceResources
          (FValidationRHI *this,FRHICommandListBase *param_1,
          TArray<FRHIResourceReplaceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x138))();
  return;
}

// RHIResizeViewport @ 145cec100

void __thiscall
FValidationRHI::RHIResizeViewport
          (FValidationRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x318))();
  return;
}

// RHIResizeViewport @ 145cec120

void __thiscall
FValidationRHI::RHIResizeViewport
          (FValidationRHI *this,FRHIViewport *param_1,uint param_2,uint param_3,bool param_4,
          EPixelFormat param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x310))();
  return;
}

// RHIResumeRendering @ 145cec210

void __thiscall FValidationRHI::RHIResumeRendering(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x358))();
  return;
}

// RHISerializeAccelerationStructure @ 145cec320

void __thiscall
FValidationRHI::RHISerializeAccelerationStructure
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHIRayTracingScene *param_2,
          wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145cec327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x4b8))();
  return;
}

// RHISignalFlipEvent @ 145cede20

void __thiscall FValidationRHI::RHISignalFlipEvent(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cede27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x460))();
  return;
}

// RHISubmitCommandLists @ 145cede40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FValidationRHI::RHISubmitCommandLists(FValidationRHI *this,FRHISubmitCommandListsArgs *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  TSharedRef<FRHIBreadcrumbAllocator,1> *_Src;
  FSharedReferencer<1> FVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  FSharedReferencer<1> FVar9;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar10;
  FOpQueueState *pFVar11;
  byte bVar12;
  FSharedReferencer<1> *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  TReferenceControllerBase<1> *local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TReferenceControllerBase<1> local_c8;
  TReferenceControllerBase<1> *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = (param_1->CommandLists).ArrayNum;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&local_e0,0,(int *)((longlong)&local_d8 + 4));
  }
  pFVar14 = (param_1->CommandLists).AllocatorInstance.Data;
  iVar3 = (param_1->CommandLists).ArrayNum;
  local_res18 = pFVar14 + (longlong)iVar3 * 8;
  do {
    pFVar1 = local_res18;
    if ((param_1->CommandLists).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<IRHIPlatformCommandList_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar1) {
      (**(code **)(this->RHI->_padding_ + 0x3f0))(this->RHI,&local_e0);
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      return;
    }
    _Src = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)pFVar14;
    if (((FRHIBreadcrumbNode *)_Src[3].Object == FRHIBreadcrumbNode::Sentinel) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BreadcrumbRange.First != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                           ,0x368,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((FRHIBreadcrumbNode *)_Src[3].SharedReferenceCount.ReferenceController ==
         FRHIBreadcrumbNode::Sentinel) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BreadcrumbRange.Last != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidationCommon.h"
                           ,0x369,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_c8._8_8_ = _Src[3].Object;
    local_b8 = _Src[3].SharedReferenceCount.ReferenceController;
    FVar4.ReferenceController = _Src[5].SharedReferenceCount.ReferenceController;
    local_80 = 0xf;
    local_c8._padding_ = CONCAT44(uStack_7c,0xf);
    uStack_b0 = uStack_68;
    local_a8 = local_60;
    uStack_a0 = uStack_58;
    local_88 = local_40;
    local_98 = local_50;
    uStack_90 = uStack_48;
    uStack_78 = local_c8._8_8_;
    pTStack_70 = local_b8;
    if (((FVar4.ReferenceController <= &local_c8) &&
        (&local_c8 <
         (undefined8 *)
         ((longlong)FVar4.ReferenceController +
         (longlong)*(int *)((longlong)&_Src[6].Object + 4) * 0x48))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)&_Src[6].Object;
    if (iVar8 == *(int *)((longlong)&_Src[6].Object + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)&_Src[5].SharedReferenceCount,
                         (int *)((longlong)&_Src[6].Object + 4));
    }
    FVar4.ReferenceController = _Src[5].SharedReferenceCount.ReferenceController;
    *(int *)&_Src[6].Object = iVar8 + 1;
    memmove((atomic<int> *)((longlong)(FVar4.ReferenceController + 4) + 8),FVar4.ReferenceController
            ,(longlong)iVar8 * 0x48);
    FVar4.ReferenceController = _Src[5].SharedReferenceCount.ReferenceController;
    (FVar4.ReferenceController)->_padding_ = local_c8._padding_;
    (FVar4.ReferenceController)->SharedReferenceCount = local_c8.SharedReferenceCount;
    (FVar4.ReferenceController)->WeakReferenceCount = local_c8.WeakReferenceCount;
    FVar4.ReferenceController[1]._padding_ = (longlong)local_b8;
    *(undefined8 *)((longlong)(FVar4.ReferenceController + 1) + 8) = uStack_b0;
    FVar4.ReferenceController[2]._padding_ = local_a8;
    *(undefined8 *)((longlong)(FVar4.ReferenceController + 2) + 8) = uStack_a0;
    FVar4.ReferenceController[3]._padding_ = local_98;
    *(undefined8 *)((longlong)(FVar4.ReferenceController + 3) + 8) = uStack_90;
    FVar4.ReferenceController[4]._padding_ = local_88;
    if (*(char *)&_Src[4].Object == '\x01') {
LAB_145cee08d:
      pFVar11 = RHIValidation::FTracker::OpQueues;
    }
    else {
      if (*(char *)&_Src[4].Object != '\x02') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIValidation.cpp"
                           ,0xbe7,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_145cee08d;
      }
      pFVar11 = RHIValidation::FTracker::OpQueues + 1;
    }
    iVar8 = (pFVar11->Ops).ArrayNum;
    piVar6 = &(pFVar11->Ops).ArrayMax;
    if (iVar8 == *piVar6) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(pFVar11->Ops).AllocatorInstance,piVar6);
    }
    (pFVar11->Ops).ArrayNum = iVar8 + 1;
    pFVar1 = (pFVar11->Ops).AllocatorInstance.Data + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar1 = 0;
    *(TReferenceControllerBase<1> **)pFVar1 = _Src[5].SharedReferenceCount.ReferenceController;
    _Src[5].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)(pFVar1 + 8) = *(undefined4 *)&_Src[6].Object;
    *(undefined4 *)(pFVar1 + 0xc) = *(undefined4 *)((longlong)&_Src[6].Object + 4);
    _Src[6].Object = (FRHIBreadcrumbAllocator *)0x0;
    *(undefined4 *)(pFVar1 + 0x10) = 0;
    do {
      bVar12 = 0;
      pFVar11 = RHIValidation::FTracker::OpQueues;
      do {
        bVar7 = RHIValidation::FOpQueueState::Execute(pFVar11);
        bVar12 = bVar12 | bVar7;
        pFVar11 = pFVar11 + 1;
      } while (pFVar11 != (FOpQueueState *)&FRHIFrameFlipTrackingRunnable::Singleton);
    } while (bVar12 != 0);
    for (pFVar13 = &_Src[4].SharedReferenceCount; pFVar13 != &_Src[5].SharedReferenceCount;
        pFVar13 = pFVar13 + 1) {
      FVar4.ReferenceController = pFVar13->ReferenceController;
      local_e8 = FVar4.ReferenceController;
      if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)_Src) {
          FVar9.ReferenceController = FVar4.ReferenceController;
          if ((TReferenceControllerBase<1> *)FVar4.ReferenceController[2]._padding_ !=
              (TReferenceControllerBase<1> *)0x0) {
            FVar9.ReferenceController =
                 (TReferenceControllerBase<1> *)FVar4.ReferenceController[2]._padding_;
          }
          DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                    ((TSharedRef<FRHIBreadcrumbAllocator,1> *)FVar9.ReferenceController,
                     *(int *)&FVar4.ReferenceController[2].SharedReferenceCount.field_0x0);
          if (_Src[2].Object == (FRHIBreadcrumbAllocator *)0x0) {
            memmove(FVar4.ReferenceController,_Src,0x20);
          }
          if ((void *)FVar4.ReferenceController[2]._padding_ != (void *)0x0) {
            FMemory::Free((void *)FVar4.ReferenceController[2]._padding_);
          }
          FVar4.ReferenceController[2]._padding_ = (longlong)_Src[2].Object;
          _Src[2].Object = (FRHIBreadcrumbAllocator *)0x0;
          *(undefined4 *)&FVar4.ReferenceController[2].SharedReferenceCount.field_0x0 =
               *(undefined4 *)&_Src[2].SharedReferenceCount.ReferenceController;
          FVar4.ReferenceController[2].WeakReferenceCount =
               *(atomic<int> *)((longlong)&_Src[2].SharedReferenceCount.ReferenceController + 4);
          *(undefined4 *)&_Src[2].SharedReferenceCount.ReferenceController = 0;
          *(undefined4 *)((longlong)&_Src[2].SharedReferenceCount.ReferenceController + 4) = 2;
        }
        FVar4.ReferenceController = _Src[3].SharedReferenceCount.ReferenceController;
        local_e8[3]._padding_ = (longlong)_Src[3].Object;
        *(TReferenceControllerBase<1> **)&local_e8[3].SharedReferenceCount.field_0x0 =
             FVar4.ReferenceController;
        if (((local_e0.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < local_e0.Data + (longlong)local_d8._4_4_ * 8))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (int)local_d8;
        if ((int)local_d8 == local_d8._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_e0,(int *)((longlong)&local_d8 + 4));
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar8 + 1);
        *(TReferenceControllerBase<1> **)(local_e0.Data + (longlong)iVar8 * 8) = local_e8;
      }
    }
    FVar4.ReferenceController = _Src[5].SharedReferenceCount.ReferenceController;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FMemory::Free(FVar4.ReferenceController);
    }
    pTVar10 = _Src;
    if ((TSharedRef<FRHIBreadcrumbAllocator,1> *)_Src[2].Object !=
        (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
      pTVar10 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)_Src[2].Object;
    }
    DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
              (pTVar10,*(int *)&_Src[2].SharedReferenceCount.ReferenceController);
    if (_Src[2].Object != (void *)0x0) {
      FMemory::Free(_Src[2].Object);
    }
    ::operator_delete(_Src,0x68);
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// RHISuspendRendering @ 145cee330

void __thiscall FValidationRHI::RHISuspendRendering(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x350))();
  return;
}

// RHITick @ 145cee350

void __thiscall FValidationRHI::RHITick(FValidationRHI *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x338))();
  return;
}

// RHIUnlockBuffer @ 145cee5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUnlockBuffer
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x158))();
  return;
}

// RHIUnlockBufferMGPU @ 145cee5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUnlockBufferMGPU
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x160))();
  return;
}

// RHIUnlockStagingBuffer @ 145cee600

void __thiscall
FValidationRHI::RHIUnlockStagingBuffer(FValidationRHI *this,FRHIStagingBuffer *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0xf0))();
  return;
}

// RHIUnlockTexture @ 145cee620

void __thiscall
FValidationRHI::RHIUnlockTexture
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHILockTextureArgs *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x1e8))();
  return;
}

// RHIUnmapStagingSurface @ 145cee640

void __thiscall
FValidationRHI::RHIUnmapStagingSurface(FValidationRHI *this,FRHITexture *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x238))();
  return;
}

// RHIUnmapStagingSurface_RenderThread @ 145cee660

void __thiscall
FValidationRHI::RHIUnmapStagingSurface_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x430))();
  return;
}

// RHIUpdateAllocationTags @ 145cee680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateAllocationTags
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x170))();
  return;
}

// RHIUpdateFromBufferTexture2D @ 145cee6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateFromBufferTexture2D
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,FRHIBuffer *param_6,uint param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x1f8))();
  return;
}

// RHIUpdateResourceCollection @ 145cee6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateResourceCollection
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIResourceCollection *param_2,
          uint param_3,TArrayView<FRHIResourceCollectionMember_const_,int> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FString local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  uVar1 = (param_2->Members).ArrayNum;
  if (((int)uVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < uVar1) {
    uVar1 = (param_2->Members).ArrayNum;
    if (((int)uVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_4->ArrayNum + param_3 <= uVar1) goto LAB_145cee7d5;
  }
  if (((param_2->Members).ArrayNum < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl
            (&local_48,
             L"ResourceCollection update range of [%d, %d) is invalid for a ResourceCollection of size \'%d\'"
            );
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  ReportValidationFailure((wchar_t *)FVar4.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_145cee7d5:
  local_38 = *(undefined4 *)&param_4->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
  iStack_30 = param_4->ArrayNum;
  uStack_2c = *(undefined4 *)&param_4->field_0xc;
  (**(code **)(this->RHI->_padding_ + 0x1c8))(this->RHI,param_1,param_2,param_3,&local_38);
  return;
}

// RHIUpdateTexture2D @ 145cee830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateTexture2D
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion2D *param_4,uint param_5,uchar *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x1f0))();
  return;
}

// RHIUpdateTexture3D @ 145cee850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateTexture3D
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITexture *param_2,uint param_3,
          FUpdateTextureRegion3D *param_4,uint param_5,uint param_6,uchar *param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x200))();
  return;
}

// RHIUpdateTextureReference @ 145cee870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateTextureReference
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHITextureReference *param_2,
          FRHITexture *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145cee877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x168))();
  return;
}

// RHIUpdateUniformBuffer @ 145cee890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIUpdateUniformBuffer
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIUniformBuffer *param_2,
          void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandBase *pFVar3;
  
  if (param_2 == (FRHIUniformBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x19b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Contents",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIValidation.h"
                       ,0x19c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->RHI->_padding_ + 0x130))(this->RHI,param_1,param_2,param_3);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar3 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar3;
    param_1->CommandLink = &pFVar3->Next;
    pFVar3->Next = (FRHICommandBase *)0x0;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TRHILambdaCommand_VFRHICommandListBase__V<lambda_1>__1__RHIUpdateUniformBuffer_FValidationRHI__UEAAXAEAV1_PEAVFRHIUniformBuffer__PEBX_Z___6B_
    ;
    pFVar3[1]._padding_ = (longlong)this;
    pFVar3[1].Next = (FRHICommandBase *)param_2;
    pFVar3[2]._padding_ = (longlong)L"TRHILambdaCommand";
  }
  else {
    param_2->_padding_ = this->RHIThreadFrameID;
    *(undefined1 *)&param_2->_padding_ = 0;
    param_2->_padding_ = 0;
  }
  return;
}

// RHIVirtualTextureSetFirstMipInMemory @ 145ceebc0

void __thiscall
FValidationRHI::RHIVirtualTextureSetFirstMipInMemory
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceebc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x378))();
  return;
}

// RHIVirtualTextureSetFirstMipVisible @ 145ceebe0

void __thiscall
FValidationRHI::RHIVirtualTextureSetFirstMipVisible
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHITexture *param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceebe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x380))();
  return;
}

// RHIWaitForFlip @ 145ceec00

FRHIFlipDetails * __thiscall
FValidationRHI::RHIWaitForFlip
          (FValidationRHI *this,FRHIFlipDetails *__return_storage_ptr__,double param_1)

{
  (**(code **)(this->RHI->_padding_ + 0x458))();
  return __return_storage_ptr__;
}

// RHIWriteGPUFence_TopOfPipe @ 145ceec70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::RHIWriteGPUFence_TopOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIGPUFence *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145ceec77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0xc0))();
  return;
}

// ReportValidationFailure @ 145cf05b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FValidationRHI::ReportValidationFailure(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  FRHIBreadcrumbNode *this;
  bool bVar3;
  FOutputDeviceRedirector *this_00;
  ulonglong uVar4;
  wchar_t *pwVar5;
  char local_res8;
  uint local_res10 [2];
  uint local_res18 [4];
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar4 = 0xffffffff;
  local_res10[0] = 0xffffffff;
  wVar1 = *param_1;
  pwVar5 = param_1;
  while (wVar1 != L'\0') {
    pwVar5 = pwVar5 + 1;
    local_res10[0] =
         FCrc::CRCTablesSB8[1][uVar4 >> 0x10 & 0xff] ^
         FCrc::CRCTablesSB8[2][((ushort)wVar1 ^ uVar4) >> 8 & 0xff] ^
         FCrc::CRCTablesSB8[0][uVar4 >> 0x18] ^
         FCrc::CRCTablesSB8[3][((ushort)wVar1 ^ uVar4) & 0xff];
    uVar4 = (ulonglong)local_res10[0];
    wVar1 = *pwVar5;
  }
  local_res10[0] = ~local_res10[0];
  EnterCriticalSection((LPCRITICAL_SECTION)&SeenFailureHashesMutex);
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&SeenFailureHashes,local_res18,(bool *)local_res10);
  LeaveCriticalSection((LPCRITICAL_SECTION)&SeenFailureHashesMutex);
  if (local_res8 != '\0') {
    return;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if ((lVar2 == 0) ||
     (this = *(FRHIBreadcrumbNode **)(lVar2 + 0x30), this == (FRHIBreadcrumbNode *)0x0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  else {
    FRHIBreadcrumbNode::GetFullPath(this,&local_28);
    if (1 < local_28.Data.ArrayNum) {
      ::FString::PrintfImpl
                (&local_38,
                 L"%sBreadcrumbs: %s\n--------------------------------------------------------------------\n"
                );
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      local_48.Data.ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      goto LAB_145cf0719;
    }
  }
  ::FString::operator=(&local_48,param_1);
LAB_145cf0719:
  if (1 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((bVar3) && (RHIValidation::GBreakOnTransitionError != 0)) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"%s\n");
    this_00 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this_00);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 145cf2850

void __thiscall FValidationRHI::Shutdown(FValidationRHI *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145cf2857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x18))();
  return;
}

// UnlockBuffer_BottomOfPipe @ 145cf3890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FValidationRHI::UnlockBuffer_BottomOfPipe
          (FValidationRHI *this,FRHICommandListBase *param_1,FRHIBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cf3897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x450))();
  return;
}

// UnlockStagingBuffer_RenderThread @ 145cf38b0

void __thiscall
FValidationRHI::UnlockStagingBuffer_RenderThread
          (FValidationRHI *this,FRHICommandListImmediate *param_1,FRHIStagingBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000145cf38b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->RHI->_padding_ + 0x100))();
  return;
}

// ValidateIndirectArgsBuffer @ 145cf4690

void __cdecl
FValidationRHI::ValidateIndirectArgsBuffer
          (FRHIBuffer *param_1,uint param_2,uint param_3,uint param_4)

{
  ForAnyElementType FVar1;
  FString local_38;
  FString local_28;
  
  if (((param_1->Desc).Usage & (VertexBuffer|ByteAddressBuffer)) == None) {
    ::FString::PrintfImpl(&local_28,L"Buffer: %s, Size: %u, Stride: %u, Offset: %u, ArgSize: %u");
    ::FString::PrintfImpl
              (&local_38,
               L"Indirect argument buffer must be a vertex or byte address buffer to be used as an indirect dispatch parameter. %s"
              );
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar1.Data = local_38.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (((param_1->Desc).Usage & DrawIndirect) == None) {
    ::FString::PrintfImpl(&local_38,L"Buffer: %s, Size: %u, Stride: %u, Offset: %u, ArgSize: %u");
    ::FString::PrintfImpl
              (&local_28,
               L"Indirect dispatch parameter buffer was not flagged with BUF_DrawIndirect. %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 3) != 0) {
    ::FString::PrintfImpl(&local_38,L"Buffer: %s, Size: %u, Stride: %u, Offset: %u, ArgSize: %u");
    ::FString::PrintfImpl(&local_28,L"Indirect argument offset must be a multiple of 4. %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->Desc).Size < param_2 + param_3) {
    ::FString::PrintfImpl(&local_38,L"Buffer: %s, Size: %u, Stride: %u, Offset: %u, ArgSize: %u");
    ::FString::PrintfImpl(&local_28,L"Indirect argument doesn\'t fit in the buffer. %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_4 != 0) &&
     ((ulonglong)param_2 / (ulonglong)param_4 != ((ulonglong)param_2 + 0xb) / (ulonglong)param_4)) {
    ::FString::PrintfImpl(&local_38,L"Buffer: %s, Size: %u, Stride: %u, Offset: %u, ArgSize: %u");
    ::FString::PrintfImpl(&local_28,L"Indirect arguments cannot cross %d byte boundary. %s");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidatePipeline @ 145cf4b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FValidationRHI::ValidatePipeline(FValidationRHI *this,FGraphicsPipelineStateInitializer *param_1)

{
  EPixelFormat EVar1;
  FRHIDepthStencilState *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  
  EVar1 = param_1->DepthStencilTargetFormat;
  if ((((EVar1 == PF_DepthStencil) || (EVar1 == PF_ShadowDepth)) || (EVar1 == PF_R32_FLOAT)) ||
     ((EVar1 == PF_D24 || (EVar1 == PF_X24_G8)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((EVar1 == PF_DepthStencil) || (EVar1 == PF_X24_G8)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pFVar2 = param_1->DepthStencilState;
  uVar8 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->DepthStencilStates).field_0x8 !=
      *(int *)&(this->DepthStencilStates).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DepthStencilStates).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DepthStencilStates).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->DepthStencilStates).field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8))
                    * 4);
    if (iVar7 != -1) {
      do {
        puVar11 = (ulonglong *)((longlong)iVar7 * 0x20 + *(longlong *)&this->DepthStencilStates);
        if ((FRHIDepthStencilState *)*puVar11 == pFVar2) {
          if (puVar11 != (ulonglong *)0x0) goto LAB_145cf4c03;
          goto LAB_145cf4bdd;
        }
        iVar7 = (int)puVar11[3];
      } while (iVar7 != -1);
    }
  }
  puVar11 = (ulonglong *)0x0;
LAB_145cf4bdd:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145cf4c03:
  if (bVar4) {
    if (bVar5) {
      return;
    }
    if (((((*(char *)((longlong)puVar11 + 10) == '\0') &&
          (*(char *)((longlong)puVar11 + 0xb) == '\a')) &&
         (*(char *)((longlong)puVar11 + 0xc) == '\0')) &&
        ((((*(char *)((longlong)puVar11 + 0xd) == '\0' &&
           (*(char *)((longlong)puVar11 + 0xe) == '\0')) &&
          ((*(char *)((longlong)puVar11 + 0xf) == '\0' &&
           (((char)puVar11[2] == '\a' && (*(char *)((longlong)puVar11 + 0x11) == '\0')))))) &&
         (*(char *)((longlong)puVar11 + 0x12) == '\0')))) &&
       (*(char *)((longlong)puVar11 + 0x13) == '\0')) {
      return;
    }
    pwVar9 = L"No stencil render target set, yet PSO wants to use stencil operations!";
  }
  else {
    if (((char)puVar11[1] != '\0') || (*(char *)((longlong)puVar11 + 9) != '\a')) {
      ReportValidationFailure(L"No depth render target set, yet PSO wants to use depth operations!")
      ;
    }
    if ((param_1->DepthTargetLoadAction != ENoAction) ||
       (param_1->StencilTargetLoadAction != ENoAction)) {
      ReportValidationFailure(L"No depth/stencil target set, yet PSO wants to load from it!");
    }
    if ((param_1->DepthTargetStoreAction == ENoAction) &&
       (param_1->StencilTargetStoreAction == ENoAction)) {
      return;
    }
    pwVar9 = L"No depth/stencil target set, yet PSO wants to store into it!";
  }
  ReportValidationFailure(pwVar9);
  return;
}

// ValidateThreadGroupCount @ 145cf6660

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FValidationRHI::ValidateThreadGroupCount(uint param_1,uint param_2,uint param_3)

{
  ForAnyElementType FVar1;
  FString local_18;
  
  if ((uint)GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < param_1) {
    ::FString::PrintfImpl
              (&local_18,
               L"ThreadGroupCountX is invalid: %u. Must be greater than 0 and less than %d");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((uint)GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < param_2) {
    ::FString::PrintfImpl
              (&local_18,
               L"ThreadGroupCountY is invalid: %u. Must be greater than 0 and less than %d");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((uint)GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z < param_3) {
    ::FString::PrintfImpl
              (&local_18,
               L"ThreadGroupCountZ is invalid: %u. Must be greater than 0 and less than %d");
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
    ReportValidationFailure((wchar_t *)FVar1.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

