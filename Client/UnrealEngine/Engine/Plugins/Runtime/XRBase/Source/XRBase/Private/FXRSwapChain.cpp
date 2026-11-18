// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 6

// FXRSwapChain @ 14cf7de70

FXRSwapChain * __thiscall
FXRSwapChain::FXRSwapChain
          (FXRSwapChain *this,TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *param_1
          ,TRefCountPtr<FRHITexture> *param_2)

{
  TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRHITexture *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FXRSwapChain *pFVar9;
  FName *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FName local_res8;
  FName local_res10;
  FString local_38;
  
  uVar13 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FXRSwapChain__6B_;
  (this->RHITexture).Reference = (FRHITexture *)0x0;
  pFVar4 = param_2->Reference;
  (this->RHITexture).Reference = pFVar4;
  if (pFVar4 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar4);
  }
  pTVar1 = &this->RHITextureSwapChain;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RHITextureSwapChain).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  (this->RHITextureSwapChain).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TRefCountPtr<FRHITexture>,TRefCountPtr<FRHITexture>,int>
              ((pTVar1->AllocatorInstance).Data,(TRefCountPtr<FRHITexture> *)pFVar5,iVar3);
  }
  this->SwapChainIndex_RHIThread = (atomic<unsigned_int>)0x0;
  (this->DebugLabel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugLabel).Data.ArrayNum = 0;
  (this->DebugLabel).Data.ArrayMax = 0;
  if (((this->RHITexture).Reference == (FRHITexture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHITexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRSwapChain.cpp"
                         ,0x44,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FXRSwapChain *)(*pcVar6)();
    return pFVar9;
  }
  pFVar4 = (this->RHITexture).Reference;
  pFVar10 = ::FName::FName(&local_res8,L"XRSwapChainAliasedTexture");
  FRHITexture::SetName(pFVar4,*pFVar10);
  uVar14 = uVar13;
  if (0 < (this->RHITextureSwapChain).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar8 = 0;
      if ((int)uVar12 < (this->RHITextureSwapChain).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FXRSwapChain *)(*pcVar6)();
        return pFVar9;
      }
      pFVar4 = *(FRHITexture **)((pTVar1->AllocatorInstance).Data + uVar14);
      ::FString::PrintfImpl(&local_38,L"XRSwapChainBackingTex%d");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar11.Data = local_38.Data.AllocatorInstance.Data;
      }
      pFVar10 = ::FName::FName(&local_res10,(wchar_t *)FVar11.Data);
      FRHITexture::SetName(pFVar4,*pFVar10);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) < (this->RHITextureSwapChain).ArrayNum);
  }
  return this;
}

// ~FXRSwapChain @ 14cf7ee80

void __thiscall FXRSwapChain::~FXRSwapChain(FXRSwapChain *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRHITexture *this_00;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FXRSwapChain__6B_;
  pFVar3 = (this->DebugLabel).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->RHITextureSwapChain).AllocatorInstance.Data,
             (this->RHITextureSwapChain).ArrayNum);
  pFVar3 = (this->RHITextureSwapChain).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->RHITexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014cf7eeee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// IncrementSwapChainIndex_RHIThread @ 14cf92790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FXRSwapChain::IncrementSwapChainIndex_RHIThread(FXRSwapChain *this)

{
  atomic<unsigned_int> aVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  uint uVar3;
  FRHICommandListImmediate *pFVar4;
  
  if (GIsThreadedRendering) {
    bVar2 = IsRHIThreadRunning();
    if (!bVar2) {
      bVar2 = IsInActualRenderingThread();
      goto LAB_14cf927f1;
    }
    bVar2 = IsInRHIThread();
    if (bVar2) goto LAB_14cf9281b;
    bVar2 = IsInActualRenderingThread();
    if (bVar2) {
      pFVar4 = GetImmediateCommandList_ForRenderCommand();
      if ((GRHICommandList.bLatchedBypass == false) || ((pFVar4->field_0x29b & 0x20) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      goto LAB_14cf927f1;
    }
  }
  else {
    bVar2 = IsInGameThread();
LAB_14cf927f1:
    if (bVar2 != false) goto LAB_14cf9281b;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InRHIOrValidThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRSwapChain.cpp"
                     ,0x3b,L"");
  if (bVar2) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_14cf9281b:
  LOCK();
  this->SwapChainIndex_RHIThread =
       (atomic<unsigned_int>)
       (((int)this->SwapChainIndex_RHIThread + 1U) % (uint)(this->RHITextureSwapChain).ArrayNum);
  UNLOCK();
  aVar1 = this->SwapChainIndex_RHIThread;
  UNRECOVERED_JUMPTABLE = *(code **)(GDynamicRHI->_padding_ + 0x2b8);
  uVar3 = 0;
  if ((int)aVar1 < (this->RHITextureSwapChain).ArrayNum) {
    uVar3 = ~(uint)aVar1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf928aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (GDynamicRHI,&this->RHITexture,
             (this->RHITextureSwapChain).AllocatorInstance.Data + (longlong)(int)aVar1 * 8);
  return;
}

// ReleaseCurrentImage_RHIThread @ 14cf988e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FXRSwapChain::ReleaseCurrentImage_RHIThread(FXRSwapChain *this,IRHICommandContext *param_1)

{
  return;
}

// ReleaseResources_RHIThread @ 14cf988f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FXRSwapChain::ReleaseResources_RHIThread(FXRSwapChain *this)

{
  FRHITexture *this_00;
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *pFVar3;
  
  if (GIsThreadedRendering) {
    bVar2 = IsRHIThreadRunning();
    if (!bVar2) {
      bVar2 = IsInActualRenderingThread();
      goto LAB_14cf98948;
    }
    bVar2 = IsInRHIThread();
    if (bVar2) goto LAB_14cf98972;
    bVar2 = IsInActualRenderingThread();
    if (bVar2) {
      pFVar3 = GetImmediateCommandList_ForRenderCommand();
      if ((GRHICommandList.bLatchedBypass == false) || ((pFVar3->field_0x29b & 0x20) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      goto LAB_14cf98948;
    }
  }
  else {
    bVar2 = IsInGameThread();
LAB_14cf98948:
    if (bVar2 != false) goto LAB_14cf98972;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InRHIOrValidThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\XRSwapChain.cpp"
                     ,0x3b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14cf98972:
  this_00 = (this->RHITexture).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->RHITexture).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->RHITextureSwapChain).AllocatorInstance.Data,
             (this->RHITextureSwapChain).ArrayNum);
  (this->RHITextureSwapChain).ArrayNum = 0;
  if ((this->RHITextureSwapChain).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RHITextureSwapChain).AllocatorInstance,0,
               &(this->RHITextureSwapChain).ArrayMax);
  }
  return;
}

// WaitCurrentImage_RHIThread @ 14cf9e380

void __thiscall FXRSwapChain::WaitCurrentImage_RHIThread(FXRSwapChain *this,long64 param_1)

{
  return;
}

