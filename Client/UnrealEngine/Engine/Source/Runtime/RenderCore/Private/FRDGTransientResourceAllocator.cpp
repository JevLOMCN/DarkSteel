// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// InitRHI @ 145d735a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRDGTransientResourceAllocator::InitRHI
          (FRDGTransientResourceAllocator *this,FRHICommandListBase *param_1)

{
  IRHITransientResourceAllocator *pIVar1;
  
  pIVar1 = (IRHITransientResourceAllocator *)(**(code **)(GDynamicRHI->_padding_ + 0xd8))();
  this->Allocator = pIVar1;
  return;
}

// ReleaseRHI @ 145d735d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRDGTransientResourceAllocator::ReleaseRHI(FRDGTransientResourceAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->Allocator != (IRHITransientResourceAllocator *)0x0) {
    ReleasePendingDeallocations(this);
    piVar1 = &(this->PendingDeallocationList).ArrayMax;
    (this->PendingDeallocationList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingDeallocationList).AllocatorInstance,0,piVar1);
    }
    pFVar5 = (this->DeallocatedList).AllocatorInstance.Data;
    iVar3 = (this->DeallocatedList).ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->DeallocatedList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRDGTransientRenderTarget_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar2) break;
      puVar4 = *(undefined8 **)pFVar5;
      if (puVar4 != (undefined8 *)0x0) {
        if ((void *)puVar4[0xe] != (void *)0x0) {
          FMemory::Free((void *)puVar4[0xe]);
        }
        *puVar4 = &___7IPooledRenderTarget__6B_;
        if ((FRHIResource *)puVar4[3] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar4[3]);
        }
        if ((FRHIResource *)puVar4[2] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar4[2]);
        }
        if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)puVar4[1]);
        }
        ::operator_delete(puVar4,0x90);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->DeallocatedList).ArrayMax;
    (this->DeallocatedList).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeallocatedList).AllocatorInstance,0,piVar1);
    }
    (**(code **)((longlong)*this->Allocator + 0x38))(this->Allocator,0x154be5ed0);
    FRHICommandListImmediate::ImmediateFlush
              (&GRHICommandList.CommandListImmediate,FlushRHIThread,None);
    (**(code **)((longlong)*this->Allocator + 0x40))(this->Allocator,0x154be5ed0);
    this->Allocator = (IRHITransientResourceAllocator *)0x0;
  }
  return;
}

// AddPendingDeallocation @ 145d9f7e0

void __thiscall
FRDGTransientResourceAllocator::AddPendingDeallocation
          (FRDGTransientResourceAllocator *this,FRDGTransientRenderTarget *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (FRDGTransientRenderTarget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x15f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->RefCount != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTarget->GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x160,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1->Texture == (FRHITransientTexture *)0x0) {
      param_1->LifetimeState = Deallocated;
      piVar1 = &(this->DeallocatedList).ArrayMax;
      iVar4 = (this->DeallocatedList).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->DeallocatedList).AllocatorInstance,piVar1);
      }
      (this->DeallocatedList).ArrayNum = iVar4 + 1;
      *(FRDGTransientRenderTarget **)
       ((this->DeallocatedList).AllocatorInstance.Data + (longlong)iVar4 * 8) = param_1;
    }
    else {
      param_1->LifetimeState = PendingDeallocation;
      piVar1 = &(this->PendingDeallocationList).ArrayMax;
      iVar4 = (this->PendingDeallocationList).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->PendingDeallocationList).AllocatorInstance,piVar1);
      }
      (this->PendingDeallocationList).ArrayNum = iVar4 + 1;
      *(FRDGTransientRenderTarget **)
       ((this->PendingDeallocationList).AllocatorInstance.Data + (longlong)iVar4 * 8) = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x000145d9f8ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AllocateRenderTarget @ 145da2090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<FRDGTransientRenderTarget> __thiscall
FRDGTransientResourceAllocator::AllocateRenderTarget
          (FRDGTransientResourceAllocator *this,FRHITransientTexture *param_1)

{
  int iVar1;
  FRHIResource *pFVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  TRefCountPtr<FRDGTransientRenderTarget> TVar7;
  undefined8 *puVar8;
  FPooledRenderTargetDesc *pFVar9;
  byte bVar10;
  longlong in_R8;
  int iVar11;
  undefined1 auStackY_d8 [32];
  FPooledRenderTargetDesc local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (in_R8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x139,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar7.Reference = (FRDGTransientRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<FRDGTransientRenderTarget>)TVar7.Reference;
    }
  }
  iVar1 = (this->FreeList).ArrayNum;
  if (iVar1 == 0) {
    puVar8 = ::operator_new(0x90);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[6] = 1;
      *puVar8 = &___7FRDGTransientRenderTarget__6B_;
      puVar8[5] = L"UnknownTexture";
      puVar8[7] = 0;
      *(undefined4 *)(puVar8 + 8) = 0;
      ((TIntPoint<int>_u_0 *)((longlong)puVar8 + 0x54))->_s_0 =
           (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
      *(undefined2 *)((longlong)puVar8 + 0x5e) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x61) = 0xff01;
      *(undefined4 *)((longlong)puVar8 + 0x7c) = 1;
      *(undefined4 *)((longlong)puVar8 + 0x8c) = 0;
    }
  }
  else {
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        TVar7.Reference = (FRDGTransientRenderTarget *)(*pcVar4)();
        return (TRefCountPtr<FRDGTransientRenderTarget>)TVar7.Reference;
      }
    }
    iVar1 = (this->FreeList).ArrayNum;
    iVar11 = iVar1 + -1;
    puVar8 = *(undefined8 **)((this->FreeList).AllocatorInstance.Data + (longlong)iVar1 * 8 + -8);
    (this->FreeList).ArrayNum = iVar11;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->FreeList).AllocatorInstance,iVar11,&(this->FreeList).ArrayMax);
  }
  puVar8[4] = in_R8;
  pFVar9 = ::Translate(&local_a8,(FRHITextureDesc *)(in_R8 + 0xb0));
  puVar8[5] = pFVar9->DebugName;
  uVar5 = *(undefined8 *)((longlong)&(pFVar9->ClearValue).Value + 4);
  puVar8[6] = *(undefined8 *)&pFVar9->ClearValue;
  puVar8[7] = uVar5;
  *(float *)(puVar8 + 8) = (pFVar9->ClearValue).Value.Color[3];
  puVar8[9] = pFVar9->Flags;
  *(EPixelFormat *)(puVar8 + 10) = pFVar9->Format;
  *(EPixelFormat *)((longlong)puVar8 + 0x51) = pFVar9->UAVFormat;
  *(TIntPoint<int>_u_0 *)((longlong)puVar8 + 0x54) = (pFVar9->Extent).field0_0x0;
  *(ushort *)((longlong)puVar8 + 0x5c) = pFVar9->Depth;
  *(ushort *)((longlong)puVar8 + 0x5e) = pFVar9->ArraySize;
  *(uchar *)(puVar8 + 0xc) = pFVar9->NumMips;
  *(uchar *)((longlong)puVar8 + 0x61) = pFVar9->NumSamples;
  *(uchar *)((longlong)puVar8 + 0x62) = pFVar9->FastVRAMPercentage;
  if ((TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
      (puVar8 + 0xd) != &pFVar9->AliasableFormats) {
    if ((pFVar9->AliasableFormats).AllocatorInstance.SecondaryData ==
        (ForElementType<EPixelFormat>)0x0) {
      *(uchar *)(puVar8 + 0xd) = (pFVar9->AliasableFormats).AllocatorInstance.InlineData[0];
    }
    if ((void *)puVar8[0xe] != (void *)0x0) {
      FMemory::Free((void *)puVar8[0xe]);
    }
    *(ForElementType<EPixelFormat> *)(puVar8 + 0xe) =
         (pFVar9->AliasableFormats).AllocatorInstance.SecondaryData;
    (pFVar9->AliasableFormats).AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    *(int *)(puVar8 + 0xf) = (pFVar9->AliasableFormats).ArrayNum;
    *(int *)((longlong)puVar8 + 0x7c) = (pFVar9->AliasableFormats).ArrayMax;
    (pFVar9->AliasableFormats).ArrayNum = 0;
    (pFVar9->AliasableFormats).ArrayMax = 1;
  }
  bVar10 = (*(byte *)(puVar8 + 0x10) ^ (pFVar9->field13_0x58).PackedBits) & 1 ^
           *(byte *)(puVar8 + 0x10);
  *(byte *)(puVar8 + 0x10) = bVar10;
  bVar10 = (bVar10 ^ (pFVar9->field13_0x58).PackedBits) & 2 ^ bVar10;
  *(byte *)(puVar8 + 0x10) = bVar10;
  *(byte *)(puVar8 + 0x10) =
       (bVar10 ^ (pFVar9->field13_0x58).PackedBits) & 3 ^ (pFVar9->field13_0x58).PackedBits;
  *(FPooledRenderTargetDesc_u_88 *)(puVar8 + 0x10) = pFVar9->field13_0x58;
  if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  puVar8[5] = *(undefined8 *)(in_R8 + 0x40);
  *(undefined4 *)(puVar8 + 0x11) = 1;
  if (*(longlong *)(in_R8 + 0x10) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar7.Reference = (FRDGTransientRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<FRDGTransientRenderTarget>)TVar7.Reference;
    }
  }
  pFVar2 = *(FRHIResource **)(in_R8 + 8);
  pFVar3 = (FRHIResource *)puVar8[1];
  if (pFVar3 != pFVar2) {
    puVar8[1] = pFVar2;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar2);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (*(longlong *)(in_R8 + 0x10) != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ResourceTask.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x133,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar7.Reference = (FRDGTransientRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<FRDGTransientRenderTarget>)TVar7.Reference;
    }
  }
  pFVar2 = *(FRHIResource **)(in_R8 + 8);
  pFVar3 = (FRHIResource *)puVar8[2];
  if (pFVar3 != pFVar2) {
    puVar8[2] = pFVar2;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar2);
    }
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  param_1->_padding_ = (longlong)puVar8;
  if (*(int *)(puVar8 + 0x11) != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LifetimeState == ERDGTransientResourceLifetimeState::Allocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x101,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      TVar7.Reference = (FRDGTransientRenderTarget *)(*pcVar4)();
      return (TRefCountPtr<FRDGTransientRenderTarget>)TVar7.Reference;
    }
  }
  LOCK();
  *(int *)((longlong)puVar8 + 0x8c) = *(int *)((longlong)puVar8 + 0x8c) + 1;
  UNLOCK();
  return (TRefCountPtr<FRDGTransientRenderTarget>)(FRDGTransientRenderTarget *)param_1;
}

// Release @ 145dc6950

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRDGTransientResourceAllocator::Release
          (FRDGTransientResourceAllocator *this,TRefCountPtr<FRDGTransientRenderTarget> *param_1,
          FRHITransientAllocationFences *param_2)

{
  FRDGTransientRenderTarget *pFVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1->Reference == (FRDGTransientRenderTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x151,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Reference->RefCount == 1) {
    (**(code **)((longlong)*this->Allocator + 0x30))
              (this->Allocator,param_1->Reference->Texture,param_2);
    pFVar1 = param_1->Reference;
    pFVar1->Texture = (FRHITransientTexture *)0x0;
    pFVar2 = (FRHIResource *)pFVar1->_padding_;
    if (pFVar2 != (FRHIResource *)0x0) {
      pFVar1->_padding_ = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar2 = (FRHIResource *)pFVar1->_padding_;
    if (pFVar2 != (FRHIResource *)0x0) {
      pFVar1->_padding_ = 0;
      FRHIResource::Release(pFVar2);
    }
    pFVar1 = param_1->Reference;
    if (pFVar1 != (FRDGTransientRenderTarget *)0x0) {
      param_1->Reference = (FRDGTransientRenderTarget *)0x0;
      FRDGTransientRenderTarget::Release(pFVar1);
    }
  }
  return;
}

// ReleasePendingDeallocations @ 145dc6c00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRDGTransientResourceAllocator::ReleasePendingDeallocations(FRDGTransientResourceAllocator *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  FRHITransitionInfo_u_8 FVar4;
  FRHIViewableResource *pFVar5;
  FRHIResource *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FRHITransition *pFVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  FRHITransition *local_res20;
  ForElementType<FRHITrackedAccessInfo> local_138;
  undefined8 local_130;
  ForElementType<FRHITransitionInfo> local_128;
  undefined8 local_120;
  ForElementType<FRHITransientAliasingInfo> local_118;
  undefined8 local_110;
  FRHITransition *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  TArrayView<FRHITransition_const_*,int> local_f8;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined1 local_d8;
  FRHITransitionInfo *local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  FRHITransientAliasingInfo *local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  FRHITrackedAccessInfo *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FRHITransitionCreateInfo local_98;
  TArrayView<FRHITransition_const_*,int> local_68;
  TArrayView<FRHITrackedAccessInfo_const_,int> local_58;
  
  if (&this->CS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CS);
  uVar1 = (this->PendingDeallocationList).ArrayNum;
  if (uVar1 != 0) {
    local_138.Data = (FRHITrackedAccessInfo *)0x0;
    local_130 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar12 = 0;
    if (0 < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_>
                (0x10,8,uVar1,&local_138,0,(int *)((longlong)&local_130 + 4));
      iVar12 = (int)local_130;
    }
    uVar1 = (this->PendingDeallocationList).ArrayNum;
    local_128.Data = (FRHITransitionInfo *)0x0;
    local_120 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar11 = 0;
    if (0 < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                (0x30,8,uVar1,&local_128,0,(int *)((longlong)&local_120 + 4));
      iVar11 = (int)local_120;
    }
    uVar1 = (this->PendingDeallocationList).ArrayNum;
    local_118.Data = (FRHITransientAliasingInfo *)0x0;
    local_110 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransientAliasingInfo>_>
                (0x20,8,uVar1,&local_118,0,(int *)((longlong)&local_110 + 4));
    }
    local_res10 = (this->PendingDeallocationList).ArrayNum;
    uVar14 = (ulonglong)(int)local_res10;
    pFVar15 = (this->PendingDeallocationList).AllocatorInstance.Data;
    local_res18 = pFVar15 + uVar14 * 8;
    while( true ) {
      pFVar8 = local_res18;
      if ((this->PendingDeallocationList).ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRDGTransientRenderTarget_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar15 == pFVar8) break;
      lVar2 = *(longlong *)pFVar15;
      local_e4 = 0xffffffffffffffff;
      local_dc = 0;
      local_d8 = 1;
      local_e8 = 0;
      (**(code **)((longlong)*this->Allocator + 0x30))
                (this->Allocator,*(undefined8 *)(lVar2 + 0x20));
      lVar3 = *(longlong *)(lVar2 + 0x20);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ResourceTask.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                            ,0x133,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = *(FRHITransitionInfo_u_8 *)(lVar3 + 8);
      if (iVar11 == local_120._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITransitionInfo>_>
                           (0x830,&local_128,(int *)((longlong)&local_120 + 4));
      }
      local_120 = CONCAT44(local_120._4_4_,iVar11 + 1);
      *(undefined4 *)&local_128.Data[iVar11]._padding_ = 0xffffffff;
      *(undefined2 *)((longlong)&local_128.Data[iVar11]._padding_ + 4) = 0xffff;
      local_128.Data[iVar11].field1_0x8 = FVar4;
      local_128.Data[iVar11].Type = Texture;
      local_128.Data[iVar11].AccessBefore = None;
      local_128.Data[iVar11].AccessAfter = Discard;
      local_128.Data[iVar11].Flags = None;
      local_128.Data[iVar11].CommitInfo.bIsSet = false;
      lVar3 = *(longlong *)(lVar2 + 0x20);
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ResourceTask.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                            ,0x133,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = *(FRHIViewableResource **)(lVar3 + 8);
      if (iVar12 == local_130._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHITrackedAccessInfo>_>
                           (0x810,&local_138,(int *)((longlong)&local_130 + 4));
      }
      local_130 = CONCAT44(local_130._4_4_,iVar12 + 1);
      local_138.Data[iVar12].Resource = pFVar5;
      *(undefined4 *)&local_138.Data[iVar12]._padding_ = 0x40000;
      *(undefined1 *)((longlong)&local_138.Data[iVar12]._padding_ + 4) = 1;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      pFVar6 = *(FRHIResource **)(lVar2 + 0x10);
      if (pFVar6 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        FRHIResource::Release(pFVar6);
      }
      pFVar6 = *(FRHIResource **)(lVar2 + 8);
      if (pFVar6 != (FRHIResource *)0x0) {
        *(undefined8 *)(lVar2 + 8) = 0;
        FRHIResource::Release(pFVar6);
      }
      uVar14 = (ulonglong)local_res10;
      pFVar15 = pFVar15 + 8;
      *(undefined4 *)(lVar2 + 0x88) = 0;
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 1;
    }
    iVar9 = (int)local_110;
    local_c0 = local_118.Data;
    if ((int)local_110 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_d0 = local_128.Data;
    iStack_b8 = iVar9;
    if (iVar11 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_98.AliasingInfos._12_4_ = uStack_b4;
    local_98.AliasingInfos.ArrayNum = iStack_b8;
    local_98.TransitionInfos._12_4_ = uStack_c4;
    local_98.TransitionInfos.ArrayNum = iVar11;
    local_98.SrcPipelines = Graphics;
    local_98.DstPipelines = Graphics;
    local_98.Flags = None;
    local_98.TransitionInfos.DataPtr = local_d0;
    local_98.AliasingInfos.DataPtr = local_c0;
    iStack_c8 = iVar11;
    pFVar13 = RHICreateTransition(&local_98);
    local_108 = (FRHITransition *)&local_res20;
    uStack_100 = 1;
    local_68._12_4_ = uStack_fc;
    local_68.ArrayNum = 1;
    local_res20 = pFVar13;
    local_68.DataPtr = (FRHITransition **)local_108;
    FRHIComputeCommandList::BeginTransitions
              ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_68);
    local_f8.ArrayNum = 1;
    local_f8.DataPtr = &local_108;
    local_108 = pFVar13;
    FRHIComputeCommandList::EndTransitions
              ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_f8);
    local_a8 = local_138.Data;
    if (iVar12 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_58._12_4_ = uStack_9c;
    local_58.ArrayNum = iVar12;
    local_58.DataPtr = local_a8;
    iStack_a0 = iVar12;
    FRHIComputeCommandList::SetTrackedAccess
              ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_58);
    TArray<FRDGTransientRenderTarget_*,TSizedDefaultAllocator<32>_>::
    Append<FRDGTransientRenderTarget_*,TSizedDefaultAllocator<32>_>
              (&this->FreeList,&this->PendingDeallocationList);
    (this->PendingDeallocationList).ArrayNum = 0;
    if ((this->PendingDeallocationList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->PendingDeallocationList).AllocatorInstance,0,
                 &(this->PendingDeallocationList).ArrayMax);
    }
    if (local_118.Data != (FRHITransientAliasingInfo *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_118.Data);
    }
    if (local_128.Data != (FRHITransitionInfo *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_128.Data);
    }
    if (local_138.Data != (FRHITrackedAccessInfo *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_138.Data);
    }
  }
  if ((this->DeallocatedList).ArrayNum != 0) {
    TArray<FRDGTransientRenderTarget_*,TSizedDefaultAllocator<32>_>::
    Append<FRDGTransientRenderTarget_*,TSizedDefaultAllocator<32>_>
              (&this->FreeList,&this->DeallocatedList);
    (this->DeallocatedList).ArrayNum = 0;
    if ((this->DeallocatedList).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeallocatedList).AllocatorInstance,0,
                 &(this->DeallocatedList).ArrayMax);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145dc711a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

