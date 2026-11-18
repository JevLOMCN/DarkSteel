// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNiagaraSimCacheGpuResource @ 149387480

FNiagaraSimCacheGpuResource * __thiscall
FNiagaraSimCacheGpuResource::FNiagaraSimCacheGpuResource
          (FNiagaraSimCacheGpuResource *this,UNiagaraSimCache *param_1)

{
  FDelegateHandle FVar1;
  UNiagaraSimCache *local_res8;
  
  this->_padding_ = (longlong)&___7FNiagaraSimCacheGpuResource__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakSimCache).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakSimCache).WeakPtr,(FObjectPtr)&local_res8);
  this->NumFrames = 0;
  this->NumEmitters = 0;
  this->EmitterIndex = -1;
  (this->SimCacheBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->SimCacheBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->SimCacheBuffer).NumBytes = 0;
  (this->OnSimCacheChangedHandle).ID = 0;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
          ::AddRaw<FNiagaraSimCacheGpuResource>
                    ((TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                      *)&UNiagaraSimCache::OnCacheEndWrite,
                     (FNiagaraSimCacheGpuResource *)&local_res8,(pmf_04be14de)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnSimCacheChangedHandle).ID = *FVar1.ID;
  BuildResource(this,param_1);
  return this;
}

// ~FNiagaraSimCacheGpuResource @ 14938a440

void __thiscall
FNiagaraSimCacheGpuResource::~FNiagaraSimCacheGpuResource(FNiagaraSimCacheGpuResource *this)

{
  ulong64 uVar1;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_02;
  FDestructionSentinel local_38;
  
  this->_padding_ = (longlong)&___7FNiagaraSimCacheGpuResource__6B_;
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheGpuResource.cpp"
                         ,0x10,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = (this->OnSimCacheChangedHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UNiagaraSimCache::OnCacheEndWrite,(FWriteAccessScope *)&local_38);
    uVar6 = 0;
    if (0 < (int)UNiagaraSimCache::OnCacheEndWrite._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)UNiagaraSimCache::OnCacheEndWrite._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_02 = (ForAnyElementType *)(UNiagaraSimCache::OnCacheEndWrite._8_8_ + lVar7);
        if (((*(int *)&this_02[1].Data != 0) && (this_02->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_02->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_02[1].Data != 0) && (this_02->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_02->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_02,0,0,0x10);
            *(undefined4 *)&this_02[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &UNiagaraSimCache::OnCacheEndWrite,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)UNiagaraSimCache::OnCacheEndWrite._16_4_);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  this_00 = (this->SimCacheBuffer).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->SimCacheBuffer).Buffer.Reference;
  if (this_01 == (FRHIBuffer *)0x0) {
    return;
  }
  FRHIResource::Release((FRHIResource *)this_01);
  return;
}

// operator() @ 14938c630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  FRHIResource *pFVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  void *_Dst;
  FRHIBuffer *pFVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIResource *local_res8;
  
  *(undefined4 *)(*(longlong *)this + 0x10) = *(undefined4 *)((longlong)this + 8);
  *(undefined4 *)(*(longlong *)this + 0x14) = *(undefined4 *)((longlong)this + 0xc);
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0x30) = 0;
  pFVar2 = *(FRHIResource **)(lVar1 + 0x20);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)(lVar1 + 0x28);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)(lVar1 + 0x28) = 0;
    FRHIResource::Release(pFVar2);
  }
  if (0 < *(int *)((longlong)this + 0x18)) {
    lVar1 = *(longlong *)this;
    *(int *)(lVar1 + 0x30) = *(int *)((longlong)this + 0x18) * 4;
    pFVar5 = (FRHIBuffer *)(lVar1 + 0x20);
    TVar3 = FRHICommandListBase::CreateBuffer
                      ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)&local_res8);
    if (pFVar5 != TVar3.Reference) {
      pFVar2 = (FRHIResource *)pFVar5->_padding_;
      pFVar5->_padding_ = (TVar3.Reference)->_padding_;
      (TVar3.Reference)->_padding_ = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar4 = FRHICommandListBase::CreateShaderResourceView
                      ((FRHICommandListBase *)param_1,(FRHIBuffer *)&local_res8,
                       (FInitializer *)pFVar5->_padding_);
    pFVar6 = (FRHIShaderResourceView *)(lVar1 + 0x28);
    if (pFVar6 != TVar4.Reference) {
      pFVar2 = *(FRHIResource **)pFVar6;
      *(undefined8 *)pFVar6 = *(undefined8 *)TVar4.Reference;
      *(undefined8 *)TVar4.Reference = 0;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar2);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x20),0,
                      *(uint *)(*(longlong *)this + 0x30),RLM_WriteOnly);
    memcpy(_Dst,*(void **)((longlong)this + 0x10),(ulonglong)*(uint *)(*(longlong *)this + 0x30));
    FRHICommandListBase::UnlockBuffer
              ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x20));
  }
  return;
}

// BuildResource @ 149394e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraSimCacheGpuResource::BuildResource
          (FNiagaraSimCacheGpuResource *this,UNiagaraSimCache *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FNiagaraSimCacheGpuResource *pFVar9;
  bool bVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  ulonglong uVar12;
  code **ppcVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_128 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  ForAnyElementType local_f0;
  int local_e8 [4];
  uint local_d8;
  FScriptContainerElement *local_d0;
  UNiagaraSimCache *local_c8;
  FScriptContainerElement *local_c0;
  FNiagaraSimCacheGpuResource *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8 = param_1;
  local_b8 = this;
  if (param_1 == (UNiagaraSimCache *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SimCache != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheGpuResource.cpp"
                        ,0x1e,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar1 = (param_1->CacheFrames).ArrayNum;
  this->NumFrames = iVar1;
  iVar2 = (param_1->CacheLayout).EmitterLayouts.ArrayNum;
  this->NumEmitters = iVar2;
  pFVar20 = (param_1->CacheFrames).AllocatorInstance.Data;
  local_e8[2] = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  pFVar17 = pFVar20 + 0x150;
  local_e8[3] = (param_1->CacheFrames).ArrayNum;
  uVar12 = (ulonglong)local_e8[3];
  uVar18 = iVar2 * iVar1 * 4;
  pFVar19 = pFVar20 + uVar12 * 0x160;
  local_d8 = uVar18;
  while( true ) {
    if ((param_1->CacheFrames).ArrayNum != (int)uVar12) {
      local_f8 = 0;
      `TCheckedPointerIterator<FNiagaraSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    if (pFVar20 == pFVar19) break;
    iVar1 = *(int *)pFVar17;
    lVar14 = *(longlong *)(pFVar17 + -8);
    lVar22 = (longlong)iVar1 * 0xd8 + lVar14;
    while( true ) {
      if (*(int *)pFVar17 != iVar1) {
        local_f7 = 0;
        `TCheckedPointerIterator<FNiagaraSimCacheEmitterFrame_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_f7);
      }
      if (lVar14 == lVar22) break;
      uVar18 = uVar18 + (*(int *)(lVar14 + 0x58) + 3U >> 2) +
               (*(int *)(lVar14 + 0x78) + 3U >> 2) + (*(int *)(lVar14 + 0x68) + 3U >> 2);
      lVar14 = lVar14 + 0xd8;
    }
    uVar12 = (ulonglong)(uint)local_e8[3];
    pFVar20 = pFVar20 + 0x160;
    pFVar17 = pFVar17 + 0x160;
    param_1 = local_c8;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar18,&local_f0,local_e8,local_e8 + 1);
  local_e8[3] = (param_1->CacheFrames).ArrayNum;
  uVar12 = (ulonglong)local_e8[3];
  pFVar20 = (param_1->CacheFrames).AllocatorInstance.Data;
  pFVar17 = pFVar20 + 0x150;
  local_c0 = pFVar20 + uVar12 * 0x160;
  uVar18 = local_d8;
  uVar21 = local_e8[2];
  while( true ) {
    pFVar19 = local_c0;
    local_d0 = pFVar20;
    if ((param_1->CacheFrames).ArrayNum != (int)uVar12) {
      local_f6 = 0;
      `TCheckedPointerIterator<FNiagaraSimCacheFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f6);
    }
    pFVar9 = local_b8;
    FVar6.Data = local_f0.Data;
    if (pFVar20 == pFVar19) break;
    local_d8 = *(uint *)pFVar17;
    uVar12 = (ulonglong)(int)local_d8;
    lVar14 = *(longlong *)(pFVar17 + -8);
    lVar22 = uVar12 * 0xd8 + lVar14;
    while( true ) {
      if (*(int *)pFVar17 != (int)uVar12) {
        local_f5[0] = 0;
        `TCheckedPointerIterator<FNiagaraSimCacheEmitterFrame_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_f5);
      }
      if (lVar14 == lVar22) break;
      uVar3 = *(undefined4 *)(lVar14 + 0x40);
      uVar16 = 0;
      if ((int)uVar21 < local_e8[0]) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined4 *)(local_f0.Data + (longlong)(int)uVar21 * 4) = uVar3;
      uVar16 = uVar21 + 1;
      uVar15 = 0;
      if ((int)uVar16 < local_e8[0]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar15 = uVar21 + 2;
      *(uint *)(local_f0.Data + (longlong)(int)uVar16 * 4) = uVar18;
      iVar1 = *(int *)(lVar14 + 0x78);
      if (0 < iVar1) {
        pvVar4 = *(void **)(lVar14 + 0x70);
        uVar16 = 0;
        if ((int)uVar18 < local_e8[0]) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        memcpy(local_f0.Data + (longlong)(int)uVar18 * 4,pvVar4,(longlong)iVar1);
        uVar18 = uVar18 + (*(int *)(lVar14 + 0x78) + 3U >> 2);
      }
      uVar16 = 0;
      if ((int)uVar15 < local_e8[0]) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar16 = uVar21 + 3;
      *(uint *)(local_f0.Data + (longlong)(int)uVar15 * 4) = uVar18;
      iVar1 = *(int *)(lVar14 + 0x58);
      if (0 < iVar1) {
        pvVar4 = *(void **)(lVar14 + 0x50);
        uVar15 = 0;
        if ((int)uVar18 < local_e8[0]) {
          uVar15 = ~uVar18 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        memcpy(local_f0.Data + (longlong)(int)uVar18 * 4,pvVar4,(longlong)iVar1);
        uVar18 = uVar18 + (*(int *)(lVar14 + 0x58) + 3U >> 2);
      }
      uVar15 = 0;
      if ((int)uVar16 < local_e8[0]) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_e8[2] = uVar21 + 4;
      *(uint *)(local_f0.Data + (longlong)(int)uVar16 * 4) = uVar18;
      iVar1 = *(int *)(lVar14 + 0x68);
      if (0 < iVar1) {
        pvVar4 = *(void **)(lVar14 + 0x60);
        uVar21 = 0;
        if ((int)uVar18 < local_e8[0]) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if (uVar21 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        memcpy(local_f0.Data + (longlong)(int)uVar18 * 4,pvVar4,(longlong)iVar1);
        uVar18 = uVar18 + (*(int *)(lVar14 + 0x68) + 3U >> 2);
      }
      uVar12 = (ulonglong)local_d8;
      lVar14 = lVar14 + 0xd8;
      uVar21 = local_e8[2];
    }
    pFVar20 = local_d0 + 0x160;
    uVar12 = (ulonglong)(uint)local_e8[3];
    pFVar17 = pFVar17 + 0x160;
    param_1 = local_c8;
  }
  iVar7 = local_e8[0];
  iVar8 = local_e8[1];
  iVar1 = local_b8->NumFrames;
  iVar2 = local_b8->NumEmitters;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x28,8);
  local_80[1] = (code *)pFVar9;
  *(int *)(local_80 + 2) = iVar1;
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraSimCacheGpuResource::BuildResource'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(int *)((longlong)local_80 + 0x14) = iVar2;
  local_80[3] = (code *)FVar6.Data;
  *(int *)(local_80 + 4) = iVar7;
  *(int *)((longlong)local_80 + 0x24) = iVar8;
  if (local_80 != (code **)&DAT_fffffffffffffff8) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSimCacheGpuResource::BuildResource_::__l2::TSTR_FNiagaraSimCacheGpuResource_BuildResource83>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FNiagaraSimCacheGpuResource::BuildResource'::__l2::TSTR_FNiagaraSimCacheGpuResource_BuildResource83>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar11);
    uVar12 = (ulonglong)local_48;
    if (2 < uVar12) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar13 = local_50;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar13 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar13 = local_80;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  return;
}

// CreateResource @ 14939adf0

TSharedPtr<FNiagaraSimCacheGpuResource,1> * __cdecl
FNiagaraSimCacheGpuResource::CreateResource
          (TSharedPtr<FNiagaraSimCacheGpuResource,1> *__return_storage_ptr__,
          UNiagaraSimCache *param_1)

{
  pmf_04be14de this;
  FDelegateHandle FVar1;
  UNiagaraSimCache *local_res8;
  TRawPtrProxyWithDeleter<FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>_>
  local_28;
  
  this = (pmf_04be14de)::operator_new(0x40);
  if (this == (pmf_04be14de)0x0) {
    this = (pmf_04be14de)0x0;
  }
  else {
    *(undefined ***)this = &___7FNiagaraSimCacheGpuResource__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSimCache *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(undefined8 *)((longlong)this + 8) = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSimCache *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)this + 8),(FObjectPtr)&local_res8);
    *(undefined8 *)((longlong)this + 0x10) = 0;
    *(undefined4 *)((longlong)this + 0x18) = 0xffffffff;
    *(undefined8 *)((longlong)this + 0x20) = 0;
    *(undefined8 *)((longlong)this + 0x28) = 0;
    *(undefined4 *)((longlong)this + 0x30) = 0;
    *(undefined8 *)((longlong)this + 0x38) = 0;
    FVar1 = TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
            ::AddRaw<FNiagaraSimCacheGpuResource>
                      ((TMulticastDelegateRegistration<void___cdecl(UNiagaraSimCache_*),FDefaultDelegateUserPolicy>
                        *)&UNiagaraSimCache::OnCacheEndWrite,
                       (FNiagaraSimCacheGpuResource *)&local_res8,this);
    *(undefined8 *)((longlong)this + 0x38) = *(undefined8 *)FVar1.ID;
    BuildResource((FNiagaraSimCacheGpuResource *)this,param_1);
  }
  local_28.Object = (FNiagaraSimCacheGpuResource *)this;
  TSharedPtr<FNiagaraSimCacheGpuResource,1>::
  TSharedPtr<FNiagaraSimCacheGpuResource,1><FNiagaraSimCacheGpuResource,FNiagaraRenderThreadDeletor<FNiagaraSimCacheGpuResource>_>
            (__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

