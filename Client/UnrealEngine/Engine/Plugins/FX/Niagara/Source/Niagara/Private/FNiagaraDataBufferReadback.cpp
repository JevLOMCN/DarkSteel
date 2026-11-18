// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// ~FNiagaraDataBufferReadback @ 148e56490

void __thiscall
FNiagaraDataBufferReadback::~FNiagaraDataBufferReadback(FNiagaraDataBufferReadback *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pFVar3 = (this->ReadbackData_Half).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReadbackData_Int32).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ReadbackData_Float).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReadbackComplete);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148e564f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator() @ 14927e4d0

void __thiscall
`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TTuple<void_*,unsigned_int> *pTVar5;
  FFloat16 *pFVar6;
  FFloat16 *pFVar7;
  float *pfVar8;
  
  pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                     (param_1,*(int *)((longlong)this + 0x10));
  iVar1 = **(int **)pTVar5;
  if ((*(int *)((longlong)this + 0x14) < iVar1) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6717081069985726793>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                         ,0x149,"SourceNumInstancesAllocated >= InstanceCount"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x14);
  if (iVar1 < *(int *)((longlong)this + 0x14)) {
    iVar3 = iVar1;
  }
  pFVar6 = (FFloat16 *)0x0;
  if (*(int *)((longlong)this + 0x18) == -1) {
    pfVar8 = (float *)0x0;
  }
  else {
    pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x18));
    pfVar8 = *(float **)pTVar5;
  }
  pFVar7 = pFVar6;
  if (*(int *)((longlong)this + 0x1c) != -1) {
    pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x1c));
    pFVar7 = *(FFloat16 **)pTVar5;
  }
  if (*(int *)((longlong)this + 0x20) != -1) {
    pTVar5 = TArrayView<TTuple<void_*,unsigned_int>_const_,int>::operator[]
                       (param_1,*(int *)((longlong)this + 0x20));
    pFVar6 = *(FFloat16 **)pTVar5;
  }
  FNiagaraDataBufferReadback::GatherResults
            (*(FNiagaraDataBufferReadback **)this,iVar3,pfVar8,(int *)pFVar6,pFVar7,
             *(int *)((longlong)this + 0x24),*(int *)((longlong)this + 0x28),
             *(int *)((longlong)this + 0x2c),*(int *)((longlong)this + 0x30),
             *(int *)((longlong)this + 0x34),*(int *)((longlong)this + 0x38));
  FNiagaraDataBufferReadback::ReadbackCompleteInternal(*(FNiagaraDataBufferReadback **)this);
  return;
}

// operator() @ 14927f050

void __thiscall
`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  atomic<int> *paVar5;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  FReadAccessScope local_28;
  
  LOCK();
  *(int *)(*(longlong *)this + 0x10) = *(int *)(*(longlong *)this + 0x10) + -1;
  UNLOCK();
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  lVar2 = *(longlong *)this;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x18),&local_28);
  if (*(int *)(lVar2 + 0x28) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x20);
  }
  lVar3 = *plVar4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  local_38 = lVar2;
  local_30 = pTVar1;
  (**(code **)(lVar3 + 0x60))(plVar4,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// EnqueueReadback @ 14929aec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBufferReadback::EnqueueReadback
          (FNiagaraDataBufferReadback *this,FRHICommandList *param_1,
          TRefCountPtr<FNiagaraDataBuffer> param_2,FNiagaraGpuReadbackManager *param_3,
          FNiagaraGPUInstanceCountManager *param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong local_res8;
  
  if ((param_2.Reference)->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDataBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0xd6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0xd7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (param_2.Reference)->_padding_;
  if (((*(int *)(lVar1 + 0x78) == 0) && (*(int *)(lVar1 + 0xa8) == 0)) &&
     (*(int *)(lVar1 + 0x108) == 0)) {
    LOCK();
    this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + 1);
    UNLOCK();
    lVar1 = (param_2.Reference)->_padding_;
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8);
    GatherResults(this,*(int *)(lVar1 + 0x124),*(float **)(lVar1 + 0x18),*(int **)(lVar1 + 0x28),
                  *(FFloat16 **)(lVar1 + 0x38),*(int *)(lVar1 + 300),*(int *)(lVar1 + 0x130),
                  *(int *)(lVar1 + 0x134),*(int *)(lVar2 + 0x2c),*(int *)(lVar2 + 0x30),
                  *(int *)(lVar2 + 0x34));
    ReadbackCompleteInternal(this);
  }
  else {
    LOCK();
    this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + 1);
    UNLOCK();
    lVar1 = (param_2.Reference)->_padding_;
    local_res8 = lVar1;
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 8) == -1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsBeingWritten()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                           ,0x26,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    GPUReadbackInternal(this,param_1,param_3,param_4,(FNiagaraDataBuffer *)&local_res8);
  }
  lVar1 = (param_2.Reference)->_padding_;
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 8) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
  }
  return;
}

// GPUReadbackInternal @ 14929c790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataBufferReadback::GPUReadbackInternal
          (FNiagaraDataBufferReadback *this,FRHICommandList *param_1,
          FNiagaraGpuReadbackManager *param_2,FNiagaraGPUInstanceCountManager *param_3,
          TRefCountPtr<FNiagaraDataBuffer> param_4)

{
  int iVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraDataBufferReadback *pFVar4;
  code *pcVar5;
  FRHICommandList *this_00;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FRWBuffer *pFVar11;
  longlong lVar12;
  TSharedRef<FNiagaraDataBufferReadback,1> *pTVar13;
  longlong lVar14;
  ForElementType<FRHITransitionInfo> FVar15;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> FVar16;
  undefined8 *puVar17;
  uint uVar18;
  atomic<int> *paVar19;
  uchar *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong local_2c0;
  undefined1 local_2b8 [4];
  uint local_2b4;
  uint local_2b0;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  FRHICommandList *local_280;
  FNiagaraDataBuffer *local_278;
  FNiagaraDataBufferReadback *local_270;
  FNiagaraGpuReadbackManager *local_268;
  ForElementType<FRHITransitionInfo> local_258;
  int iStack_250;
  undefined4 uStack_24c;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  ForElementType<FRHITransitionInfo> local_238;
  int iStack_230;
  undefined4 uStack_22c;
  TArrayView<FRHITransitionInfo_const_,int> local_228;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_218;
  TSharedRef<FNiagaraDataBufferReadback,1> local_208;
  TArrayView<FRHITransitionInfo_const_,int> local_1f8;
  code *local_1e8 [5];
  undefined8 *local_1c0;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_1b8;
  uint local_160;
  uint local_15c;
  ForElementType<FRHITransitionInfo> local_158;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  lVar12 = (param_4.Reference)->_padding_;
  local_278 = param_4.Reference;
  local_280 = param_1;
  local_270 = this;
  local_268 = param_2;
  if ((lVar12 == 0) || (param_2 == (FNiagaraGpuReadbackManager *)0x0)) {
    ReadbackCompleteInternal(this);
    lVar12 = (param_4.Reference)->_padding_;
    if (lVar12 != 0) {
      if ((*(int *)(lVar12 + 8) < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
      UNLOCK();
    }
  }
  else {
    iVar1 = *(int *)(lVar12 + 0x5c);
    if (iVar1 == -1) {
      ReadbackCompleteInternal(this);
      TRefCountPtr<FNiagaraDataBuffer>::~TRefCountPtr<FNiagaraDataBuffer>
                ((TRefCountPtr<FNiagaraDataBuffer> *)param_4.Reference);
    }
    else {
      local_1b8.SecondaryData = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0;
      local_160 = 0;
      local_15c = 5;
      pFVar11 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer(param_3);
      local_2b0 = local_160;
      if (local_160 == local_15c) {
        local_2b0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                              (0x810,&local_1b8,(int *)&local_15c);
      }
      local_160 = local_2b0 + 1;
      FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar16 = local_1b8.SecondaryData;
      }
      lVar14 = (longlong)(int)local_2b0;
      uVar10 = 0xffffffff;
      *(FRHIBuffer **)((longlong)FVar16 + lVar14 * 0x10) = (pFVar11->Buffer).Reference;
      *(int *)((uchar *)((longlong)FVar16 + 8) + lVar14 * 0x10) = iVar1 * 4;
      puVar20 = (uchar *)((longlong)FVar16 + 0xc) + lVar14 * 0x10;
      puVar20[0] = '\x04';
      puVar20[1] = '\0';
      puVar20[2] = '\0';
      puVar20[3] = '\0';
      if (*(int *)(lVar12 + 0x78) == 0) {
        local_2b4 = 0xffffffff;
      }
      else {
        local_2b4 = local_160;
        if (local_160 == local_15c) {
          local_2b4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                                (0x810,&local_1b8,(int *)&local_15c);
        }
        local_160 = local_2b4 + 1;
        FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
        if (local_1b8.SecondaryData !=
            (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
          FVar16 = local_1b8.SecondaryData;
        }
        puVar17 = (undefined8 *)((longlong)FVar16 + (longlong)(int)local_2b4 * 0x10);
        uVar23 = *(undefined4 *)(lVar12 + 0x78);
        *puVar17 = *(undefined8 *)(lVar12 + 0x60);
        *(undefined4 *)(puVar17 + 1) = 0;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar23;
      }
      uVar22 = local_2b4;
      if (*(int *)(lVar12 + 0x108) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = local_160;
        if (local_160 == local_15c) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                            (0x810,&local_1b8,(int *)&local_15c);
        }
        local_160 = uVar8 + 1;
        FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
        if (local_1b8.SecondaryData !=
            (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
          FVar16 = local_1b8.SecondaryData;
        }
        puVar17 = (undefined8 *)((longlong)FVar16 + (longlong)(int)uVar8 * 0x10);
        uVar23 = *(undefined4 *)(lVar12 + 0x108);
        *puVar17 = *(undefined8 *)(lVar12 + 0xf0);
        *(undefined4 *)(puVar17 + 1) = 0;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar23;
      }
      if (*(int *)(lVar12 + 0xa8) == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = local_160;
        if (local_160 == local_15c) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                            (0x810,&local_1b8,(int *)&local_15c);
        }
        local_160 = uVar9 + 1;
        FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
        if (local_1b8.SecondaryData !=
            (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
          FVar16 = local_1b8.SecondaryData;
        }
        puVar17 = (undefined8 *)((longlong)FVar16 + (longlong)(int)uVar9 * 0x10);
        uVar23 = *(undefined4 *)(lVar12 + 0xa8);
        *puVar17 = *(undefined8 *)(lVar12 + 0x90);
        *(undefined4 *)(puVar17 + 1) = 0;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar23;
      }
      if (*(int *)(lVar12 + 0xd8) != 0) {
        uVar10 = local_160;
        if (local_160 == local_15c) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                             (0x810,&local_1b8,(int *)&local_15c);
        }
        local_160 = uVar10 + 1;
        FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
        if (local_1b8.SecondaryData !=
            (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
          FVar16 = local_1b8.SecondaryData;
        }
        puVar17 = (undefined8 *)((longlong)FVar16 + (longlong)(int)uVar10 * 0x10);
        uVar23 = *(undefined4 *)(lVar12 + 0xd8);
        *puVar17 = *(undefined8 *)(lVar12 + 0xc0);
        *(undefined4 *)(puVar17 + 1) = 0;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar23;
      }
      lVar12 = (param_4.Reference)->_padding_;
      local_29c = *(undefined4 *)(lVar12 + 300);
      local_294 = *(undefined4 *)(lVar12 + 0x134);
      local_298 = *(undefined4 *)(lVar12 + 0x130);
      lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + 8);
      local_290 = *(undefined4 *)(lVar14 + 0x2c);
      local_28c = *(undefined4 *)(lVar14 + 0x30);
      local_288 = *(undefined4 *)(lVar14 + 0x34);
      local_2a0 = *(undefined4 *)(lVar12 + 0x128);
      local_158.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
      local_60 = 0;
      local_5c = 5;
      if ((int)local_160 < 1) {
        local_2c8 = 0;
        local_2c0 = (longlong)(int)local_160;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar16 = local_1b8.SecondaryData;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                             (0x830,&local_158,&local_5c);
      }
      lVar12 = (longlong)local_60;
      local_60 = local_60 + 1;
      uVar2 = *(undefined8 *)FVar16;
      FVar15 = (ForElementType<FRHITransitionInfo>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar15 = local_158.SecondaryData;
      }
      uVar18 = 1;
      puVar21 = (undefined4 *)(lVar12 * 0x30 + (longlong)FVar15);
      *puVar21 = 0xffffffff;
      *(undefined2 *)(puVar21 + 1) = 0xffff;
      *(undefined8 *)(puVar21 + 2) = uVar2;
      *(undefined1 *)(puVar21 + 4) = 2;
      puVar21[5] = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
      puVar21[6] = 0x80;
      *(undefined1 *)(puVar21 + 7) = 0;
      *(undefined1 *)(puVar21 + 10) = 0;
      if (1 < (int)local_160) {
        local_2a8 = 0x10;
        do {
          uVar23 = 0x70;
          if (uVar18 == uVar10) {
            uVar23 = 0x10;
          }
          uVar22 = 0;
          if ((int)uVar18 < (int)local_160) {
            uVar22 = ~uVar18 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_2c0 = (longlong)(int)local_160;
            local_2c8 = (longlong)(int)uVar18;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
          if (local_1b8.SecondaryData !=
              (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
            FVar16 = local_1b8.SecondaryData;
          }
          if (local_60 == local_5c) {
            local_60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                                 (0x830,&local_158,&local_5c);
          }
          lVar12 = (longlong)local_60;
          local_60 = local_60 + 1;
          uVar2 = *(undefined8 *)(local_2a8 + (longlong)FVar16);
          FVar15 = (ForElementType<FRHITransitionInfo>)&local_158;
          if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
            FVar15 = local_158.SecondaryData;
          }
          local_2a8 = local_2a8 + 0x10;
          uVar18 = uVar18 + 1;
          *(undefined4 *)((longlong)FVar15 + lVar12 * 0x30) = 0xffffffff;
          ((uchar *)((longlong)FVar15 + 4) + lVar12 * 0x30)[0] = 0xff;
          ((uchar *)((longlong)FVar15 + 4) + lVar12 * 0x30)[1] = 0xff;
          *(undefined8 *)((uchar *)((longlong)FVar15 + 8) + lVar12 * 0x30) = uVar2;
          ((uchar *)((longlong)FVar15 + 0x10))[lVar12 * 0x30] = '\x02';
          *(undefined4 *)((uchar *)((longlong)FVar15 + 0x14) + lVar12 * 0x30) = uVar23;
          puVar20 = (uchar *)((longlong)FVar15 + 0x18) + lVar12 * 0x30;
          puVar20[0] = 0x80;
          puVar20[1] = '\0';
          puVar20[2] = '\0';
          puVar20[3] = '\0';
          ((uchar *)((longlong)FVar15 + 0x1c))[lVar12 * 0x30] = '\0';
          ((uchar *)((longlong)FVar15 + 0x28))[lVar12 * 0x30] = '\0';
          param_4.Reference = local_278;
          uVar22 = local_2b4;
        } while ((int)uVar18 < (int)local_160);
      }
      iVar1 = local_60;
      local_258 = (ForElementType<FRHITransitionInfo>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_258 = local_158.SecondaryData;
      }
      if ((local_60 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_250 = iVar1;
      local_228._12_4_ = uStack_24c;
      local_228.ArrayNum = iVar1;
      local_228.DataPtr = (FRHITransitionInfo *)local_258;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)local_280,&local_228,None);
      pTVar13 = TSharedFromThis<FNiagaraDataBufferReadback,1>::AsShared
                          ((TSharedFromThis<FNiagaraDataBufferReadback,1> *)local_270,&local_208);
      pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar13->Object;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        paVar19 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar19 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      local_1e8[0] = (code *)0x0;
      local_1c0 = FMemory::Malloc(0x48,8);
      uStack_240 = local_160;
      local_1c0[1] = pFVar4;
      *local_1c0 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
                    ::_vftable_;
      local_1c0[2] = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar19 = (atomic<int>)((int)*paVar19 + 1);
        UNLOCK();
      }
      *(uint *)(local_1c0 + 3) = local_2b0;
      *(undefined4 *)((longlong)local_1c0 + 0x1c) = local_2a0;
      *(undefined4 *)((longlong)local_1c0 + 0x2c) = local_29c;
      *(undefined4 *)(local_1c0 + 6) = local_298;
      *(undefined4 *)((longlong)local_1c0 + 0x34) = local_294;
      *(undefined4 *)(local_1c0 + 7) = local_290;
      *(undefined4 *)((longlong)local_1c0 + 0x3c) = local_28c;
      *(uint *)(local_1c0 + 4) = uVar22;
      *(uint *)((longlong)local_1c0 + 0x24) = uVar8;
      *(undefined4 *)(local_1c0 + 8) = local_288;
      *(uint *)(local_1c0 + 5) = uVar9;
      if (local_1c0 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_1e8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                       ::Call;
      }
      FVar16 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1b8;
      if (local_1b8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar16 = local_1b8.SecondaryData;
      }
      if (((int)local_160 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = local_280;
      local_218._12_4_ = uStack_23c;
      local_218.ArrayNum = uStack_240;
      local_248 = FVar16;
      local_218.DataPtr = (FBufferRequest *)FVar16;
      FNiagaraGpuReadbackManager::EnqueueReadbacks
                (local_268,local_280,&local_218,
                 (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
                 local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
      iVar1 = local_60;
      lVar12 = (longlong)local_60;
      FVar15 = (ForElementType<FRHITransitionInfo>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FVar15 = local_158.SecondaryData;
      }
      puVar20 = (uchar *)((longlong)FVar15 + 0x14);
      while( true ) {
        if (local_60 != iVar1) {
          local_2b8[0] = 0;
          `TCheckedPointerIterator<FRHITransitionInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        iVar6 = local_60;
        if ((ForElementType<FRHITransitionInfo> *)(puVar20 + -0x14) ==
            (ForElementType<FRHITransitionInfo> *)(lVar12 * 0x30 + (longlong)FVar15)) break;
        uVar23 = *(undefined4 *)puVar20;
        *(undefined4 *)puVar20 = *(undefined4 *)(puVar20 + 4);
        *(undefined4 *)(puVar20 + 4) = uVar23;
        puVar20 = puVar20 + 0x30;
      }
      local_238 = (ForElementType<FRHITransitionInfo>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        local_238 = local_158.SecondaryData;
      }
      if ((local_60 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_230 = iVar6;
      local_1f8._12_4_ = uStack_22c;
      local_1f8.ArrayNum = iVar6;
      local_1f8.DataPtr = (FRHITransitionInfo *)local_238;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_00,&local_1f8,None);
      if (local_158.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
        FMemory::Free((void *)local_158.SecondaryData);
      }
      if (local_1b8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FMemory::Free((void *)local_1b8.SecondaryData);
      }
      lVar12 = (param_4.Reference)->_padding_;
      if (lVar12 != 0) {
        if ((*(int *)(lVar12 + 8) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
        UNLOCK();
      }
    }
  }
  return;
}

// GatherResults @ 14929d940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDataBufferReadback::GatherResults
          (FNiagaraDataBufferReadback *this,int param_1,float *param_2,int *param_3,
          FFloat16 *param_4,int param_5,int param_6,int param_7,int param_8,int param_9,int param_10
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 != (float *)0x0) {
    piVar1 = &(this->ReadbackData_Float).ArrayNum;
    uVar6 = param_5 * param_8;
    iVar5 = *piVar1;
    if (iVar5 < (int)uVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6 - iVar5,&(this->ReadbackData_Float).AllocatorInstance,piVar1,
                 &(this->ReadbackData_Float).ArrayMax);
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar5) {
        uVar7 = iVar5 - uVar6;
        if (((int)(uVar7 | uVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          pFVar2 = (this->ReadbackData_Float).AllocatorInstance.Data + (longlong)(int)uVar6 * 4;
          iVar5 = (*piVar1 - uVar7) - uVar6;
          if (iVar5 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar7 * 4,(longlong)iVar5 << 2);
          }
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(this->ReadbackData_Float).AllocatorInstance,*piVar1,
                     &(this->ReadbackData_Float).ArrayMax);
        }
      }
    }
    memcpy((this->ReadbackData_Float).AllocatorInstance.Data,param_2,(longlong)(int)uVar6);
  }
  if (param_3 != (int *)0x0) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->ReadbackData_Int32,param_6 * param_9,Default);
    memcpy((this->ReadbackData_Int32).AllocatorInstance.Data,param_3,(longlong)(param_6 * param_9));
  }
  if (param_4 != (FFloat16 *)0x0) {
    piVar1 = &(this->ReadbackData_Half).ArrayNum;
    uVar6 = param_7 * param_10;
    iVar5 = *piVar1;
    if (iVar5 < (int)uVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6 - iVar5,&(this->ReadbackData_Half).AllocatorInstance,piVar1,
                 &(this->ReadbackData_Half).ArrayMax);
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      if ((int)uVar6 < iVar5) {
        uVar7 = iVar5 - uVar6;
        if (((int)(uVar7 | uVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar7 != 0) {
          pFVar2 = (this->ReadbackData_Half).AllocatorInstance.Data + (longlong)(int)uVar6 * 2;
          iVar5 = (*piVar1 - uVar7) - uVar6;
          if (iVar5 != 0) {
            memmove(pFVar2,pFVar2 + (longlong)(int)uVar7 * 2,(longlong)iVar5 * 2);
          }
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&(this->ReadbackData_Half).AllocatorInstance,*piVar1,
                     &(this->ReadbackData_Half).ArrayMax);
        }
      }
    }
    memcpy((this->ReadbackData_Half).AllocatorInstance.Data,param_4,(longlong)(int)uVar6);
  }
  this->ReadbackData_Count = param_1;
  this->ReadbackData_FloatStride = param_5;
  this->ReadbackData_HalfStride = param_7;
  this->ReadbackData_NumFloatComponents = param_8;
  this->ReadbackData_Int32Stride = param_6;
  this->ReadbackData_NumInt32Components = param_9;
  this->ReadbackData_NumHalfComponents = param_10;
  return;
}

// ReadResultsToDataBuffer @ 1492b1710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBufferReadback::ReadResultsToDataBuffer
          (FNiagaraDataBufferReadback *this,FNiagaraDataBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FNiagaraDataBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0x105,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReadbackData_NumFloatComponents !=
      ((param_1->Owner->CompiledData).StructPtr)->TotalFloatComponents) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadbackData_NumFloatComponents == DestBuffer->GetOwner()->GetNumFloatComponents()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0x107,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReadbackData_NumInt32Components !=
      ((param_1->Owner->CompiledData).StructPtr)->TotalInt32Components) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadbackData_NumInt32Components == DestBuffer->GetOwner()->GetNumInt32Components()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0x108,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ReadbackData_NumHalfComponents !=
      ((param_1->Owner->CompiledData).StructPtr)->TotalHalfComponents) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReadbackData_NumHalfComponents == DestBuffer->GetOwner()->GetNumHalfComponents()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0x109,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataBuffer::GPUCopyFrom
            (param_1,(float *)(this->ReadbackData_Float).AllocatorInstance.Data,
             (int *)(this->ReadbackData_Int32).AllocatorInstance.Data,
             (FFloat16 *)(this->ReadbackData_Half).AllocatorInstance.Data,0,this->ReadbackData_Count
             ,this->ReadbackData_FloatStride,this->ReadbackData_Int32Stride,
             this->ReadbackData_HalfStride);
  return;
}

// ReadbackCompleteInternal @ 1492b1840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataBufferReadback::ReadbackCompleteInternal(FNiagaraDataBufferReadback *this)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  char cVar4;
  TSharedRef<FNiagaraDataBufferReadback,1> *pTVar5;
  FReadAccessScope local_58;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataBufferReadback *local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReadbackComplete,
             &local_58);
  if (((*(int *)&(this->OnReadbackComplete).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->OnReadbackComplete).field_0x8, plVar1 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*plVar1 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  if (!bVar3) {
    LOCK();
    this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + -1);
    UNLOCK();
    return;
  }
  pTVar5 = TSharedFromThis<FNiagaraDataBufferReadback,1>::AsShared
                     ((TSharedFromThis<FNiagaraDataBufferReadback,1> *)this,
                      (TSharedRef<FNiagaraDataBufferReadback,1> *)&local_58);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_20 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,void>
                ::Call;
  local_18 = pTVar2;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_58.DestructionSentinel.Accessor);
  return;
}

