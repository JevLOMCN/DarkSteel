// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FTextureMipAllocator @ 148808490

FTextureMipAllocator * __thiscall
FTextureMipAllocator::FTextureMipAllocator(FTextureMipAllocator *this,FTextureMipAllocator *param_1)

{
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  (this->ResourceState).field0_0x0 = (param_1->ResourceState).field0_0x0;
  this->CurrentFirstLODIdx = param_1->CurrentFirstLODIdx;
  this->PendingFirstLODIdx = param_1->PendingFirstLODIdx;
  (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
  (this->IntermediateTextureRHI).Reference = (param_1->IntermediateTextureRHI).Reference;
  (param_1->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
  this->NextTickState = param_1->NextTickState;
  this->NextTickThread = param_1->NextTickThread;
  return this;
}

// FTextureMipAllocator @ 1488084e0

FTextureMipAllocator * __thiscall
FTextureMipAllocator::FTextureMipAllocator(FTextureMipAllocator *this,FTextureMipAllocator *param_1)

{
  FRHITexture *this_00;
  
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  (this->ResourceState).field0_0x0 = (param_1->ResourceState).field0_0x0;
  this->CurrentFirstLODIdx = param_1->CurrentFirstLODIdx;
  this->PendingFirstLODIdx = param_1->PendingFirstLODIdx;
  (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
  this_00 = (param_1->IntermediateTextureRHI).Reference;
  (this->IntermediateTextureRHI).Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->NextTickState = param_1->NextTickState;
  this->NextTickThread = param_1->NextTickThread;
  return this;
}

// FTextureMipAllocator @ 148808550

FTextureMipAllocator * __thiscall
FTextureMipAllocator::FTextureMipAllocator
          (FTextureMipAllocator *this,UTexture *param_1,ETickState param_2,ETickThread param_3)

{
  byte bVar1;
  byte bVar2;
  
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  (this->ResourceState).field0_0x0 = (FStreamableRenderResourceState_u_0)param_1->_padding_;
  this->CurrentFirstLODIdx =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 3);
  (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
  this->PendingFirstLODIdx = (uint)bVar2 - (uint)bVar1;
  this->NextTickState = param_2;
  this->NextTickThread = param_3;
  return this;
}

// ~FTextureMipAllocator @ 14880cdc0

void __thiscall FTextureMipAllocator::~FTextureMipAllocator(FTextureMipAllocator *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  this_00 = (this->IntermediateTextureRHI).Reference;
  if (this_00 == (FRHITexture *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// ExecuteCancel @ 148835930

void __thiscall
FTextureMipAllocator::ExecuteCancel(FTextureMipAllocator *this,FTextureUpdateSyncOptions *param_1)

{
  FRHITexture *this_00;
  
  (**(code **)(this->_padding_ + 0x18))();
  this_00 = (this->IntermediateTextureRHI).Reference;
  if (this_00 != (FRHITexture *)0x0) {
    (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ExecuteGetCancelThread @ 148835b40

ETickThread __thiscall FTextureMipAllocator::ExecuteGetCancelThread(FTextureMipAllocator *this)

{
  ETickThread EVar1;
  
  if ((this->IntermediateTextureRHI).Reference != (FRHITexture *)0x0) {
    return Render;
  }
                    /* WARNING: Could not recover jumptable at 0x000148835b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x20))();
  return EVar1;
}

// FinalizeMips @ 1488387c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FTextureMipAllocator::FinalizeMips
          (FTextureMipAllocator *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  FStreamableTextureResource *this_00;
  FRHITexture *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 local_res8 [8];
  
  if ((this->IntermediateTextureRHI).Reference == (FRHITexture *)0x0) {
    local_res8[0] = 0;
    bVar3 = `FTextureMipAllocator::FinalizeMips'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  this_00 = param_1->Resource;
  pFVar1 = (this->IntermediateTextureRHI).Reference;
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FStreamableTextureResource::FinalizeStreaming
            (this_00,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar1);
  pFVar1 = (this->IntermediateTextureRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->IntermediateTextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  return true;
}

// operator() @ 150531fe0

bool __thiscall `FTextureMipAllocator::FinalizeMips'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3080632736927449061>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3080632736927449061>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

