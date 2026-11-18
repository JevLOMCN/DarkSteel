// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 29

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>_> @ 145c43100

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>_>
          (ushort param_1,
          ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FTimestampStream::FState>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145c431d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 6) {
      iVar8 = 5;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 6) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145c432a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<67,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145c43370

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<67,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x44) {
      iVar8 = 0x43;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x44) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<67,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// GetSinks @ 145c5b810

TArray<UE::RHI::GPUProfiler::FEventSink_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::RHI::GPUProfiler::GetSinks(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::RHI::GPUProfiler::GetSinks'::__l2::_dynamic_atexit_destructor_for__Sinks__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Sinks;
}

// InitializeQueues @ 145c5fba0

void __cdecl
UE::RHI::GPUProfiler::InitializeQueues(TArrayView<UE::RHI::GPUProfiler::FQueue_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::RHI::GPUProfiler::FEventSink_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  pTVar3 = GetSinks();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::RHI::GPUProfiler::FEventSink_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_28 = *(undefined4 *)&param_1->DataPtr;
    uStack_24 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_20 = param_1->ArrayNum;
    uStack_1c = *(undefined4 *)&param_1->field_0xc;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,&local_28);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// IsProfiling @ 145c60bc0

bool __cdecl UE::RHI::GPUProfiler::IsProfiling(void)

{
  return (bool)GGPUProfilerSink_StatSystem.bIsProfiling;
}

// ProcessEvents @ 145c6c7a0

void __cdecl
UE::RHI::GPUProfiler::ProcessEvents(TArrayView<UE::RHI::GPUProfiler::FEventStream,int> *param_1)

{
  FEventStream *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForAnyElementType FVar11;
  FEventStream *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  undefined8 local_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId780,"UE::RHI::GPUProfiler::ProcessEvents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
               ,0x30c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId780);
  }
  uVar3 = param_1->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (-1 < (int)uVar3) {
    if (0 < (int)uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3,&local_58,0,(int *)((longlong)&local_50 + 4));
    }
    pFVar12 = param_1->DataPtr;
    pFVar1 = pFVar12 + (int)uVar3;
    for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 1) {
      if (pFVar12->First != (FChunk *)0x0) {
        pTVar9 = ::operator_new(0x28);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar10 = pTVar9 + 1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFEventStream_GPUProfiler_RHI_UE___00_SharedPointerInternals__6B_
          ;
          pTVar9[1]._padding_ = (longlong)pFVar12->First;
          *(FChunk **)&pTVar9[1].SharedReferenceCount = pFVar12->Current;
          *(FQueue_u_0 *)&pTVar9[2]._padding_ = (pFVar12->Queue).field0_0x0;
          pFVar12->First = (FChunk *)0x0;
          pFVar12->Current = (FChunk *)0x0;
          if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar8 + 1);
        *(TReferenceControllerBase<1> **)&local_58.Data[(longlong)iVar8 * 0x10].field_0x0 = pTVar10;
        *(TReferenceControllerBase<1> **)(local_58.Data + (longlong)iVar8 * 0x10 + 8) = pTVar9;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
    }
    if ((int)local_50 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`UE::RHI::GPUProfiler::GetSinks'::__l2::_dynamic_atexit_destructor_for__Sinks__);
        _Init_thread_footer(&::_TSS0);
      }
      iVar8 = Sinks.ArrayNum;
      pFVar2 = Sinks.AllocatorInstance.Data + (longlong)iVar8 * 8;
      FVar11.Data = Sinks.AllocatorInstance.Data;
      while( true ) {
        if (Sinks.ArrayNum != iVar8) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::RHI::GPUProfiler::FEventSink_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar11.Data == pFVar2) break;
        puVar4 = *(undefined8 **)FVar11.Data;
        iVar6 = (int)local_50;
        pcVar5 = *(code **)*puVar4;
        local_48 = (TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *)local_58.Data;
        if (((int)local_50 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iStack_40 = iVar6;
        local_38 = (undefined4)local_48;
        uStack_34 = local_48._4_4_;
        iStack_30 = iVar6;
        uStack_2c = uStack_3c;
        (*pcVar5)(puVar4,&local_38);
        FVar11.Data = FVar11.Data + 8;
      }
    }
    DestructItems<TSharedRef<UE::RHI::GPUProfiler::FEventStream,1>,int>
              ((TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *)local_58.Data,(int)local_50);
    if ((TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *)local_58.Data !=
        (TSharedRef<UE::RHI::GPUProfiler::FEventStream,1> *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_> @ 145c833e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 145c83480

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (ushort param_1,ForElementType<unsigned_char> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_> @ 145c83550

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
          (ushort param_1,ForElementType<FRHIUniformBuffer_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_> @ 145c83620

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_> @ 145c836f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_> @ 145c837c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FRHITextureSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_> @ 145c83890

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FRHITextureUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>_> @ 145c83960

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>_>
          (ushort param_1,ForElementType<FLockTracker::FLockParams> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLockTracker::FLockParams>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<58,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145c83a30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<58,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x3b) {
      iVar8 = 0x3a;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x3b) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<58,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<14,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 145c83b00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<14,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0xf) {
      iVar8 = 0xe;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xf) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<14,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_> @ 145c83c60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FRHIUniformBuffer_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_> @ 145c83d40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_> @ 145c83e20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
          (uint param_1,uint param_2,ForElementType<FRHIUniformBuffer_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>_> @ 145c83ee0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLockTracker::FLockParams>_>
          (uint param_1,uint param_2,ForElementType<FLockTracker::FLockParams> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLockTracker::FLockParams>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ConvertRayTracingShaderBindings @ 145c98610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRayTracingShaderBindings * __cdecl
UE::RHI::ConvertRayTracingShaderBindings
          (FRayTracingShaderBindings *__return_storage_ptr__,FRHIBatchedShaderParameters *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  FRHITexture *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FRHIUnorderedAccessView *pFVar6;
  FRHIResource *pFVar7;
  FRHIUniformBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  FRayTracingShaderBindings *pFVar11;
  FRHIShaderParameterResource *pFVar12;
  FRHIShaderParameterResource *pFVar13;
  
  memset(__return_storage_ptr__,0,0x200);
  memset(__return_storage_ptr__->SRVs,0,0x200);
  __return_storage_ptr__->UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[0xe] = (FRHIUniformBuffer *)0x0;
  __return_storage_ptr__->UniformBuffers[0xf] = (FRHIUniformBuffer *)0x0;
  memset(__return_storage_ptr__->Samplers,0,0x100);
  __return_storage_ptr__->UAVs[0] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[1] = (FRHIUnorderedAccessView *)0x0;
  piVar1 = &(__return_storage_ptr__->BindlessParameters).ArrayMax;
  __return_storage_ptr__->UAVs[2] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[3] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[4] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[5] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[6] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[7] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[8] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[9] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[10] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[0xb] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[0xc] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[0xd] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[0xe] = (FRHIUnorderedAccessView *)0x0;
  __return_storage_ptr__->UAVs[0xf] = (FRHIUnorderedAccessView *)0x0;
  (__return_storage_ptr__->BindlessParameters).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->BindlessParameters).ArrayNum = 0;
  *piVar1 = 0;
  if (((param_1->Parameters).ArrayNum != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BatchedParameters.Parameters.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x94f,
                          L"FRHIShaderParameter is not supported by FRayTracingShaderBindings"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
    return pFVar11;
  }
  pFVar12 = (param_1->ResourceParameters).DataPtr;
  pFVar13 = pFVar12 + (param_1->ResourceParameters).ArrayNum;
  do {
    if (pFVar12 == pFVar13) {
      iVar3 = (param_1->BindlessParameters).ArrayNum;
      pFVar12 = (param_1->BindlessParameters).DataPtr;
      (__return_storage_ptr__->BindlessParameters).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,
                   &(__return_storage_ptr__->BindlessParameters).AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((__return_storage_ptr__->BindlessParameters).AllocatorInstance.Data,pFVar12,
                 (longlong)iVar3 << 4);
        }
      }
      return __return_storage_ptr__;
    }
    switch(pFVar12->Type) {
    case Texture:
      uVar2 = pFVar12->Index;
      pFVar4 = (FRHITexture *)pFVar12->Resource;
      if ((0x3f < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->Textures[uVar2] = pFVar4;
      break;
    case ResourceView:
      uVar2 = pFVar12->Index;
      pFVar5 = (FRHIShaderResourceView *)pFVar12->Resource;
      if ((0x3f < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->SRVs[uVar2] = pFVar5;
      break;
    case UnorderedAccessView:
      uVar2 = pFVar12->Index;
      pFVar6 = (FRHIUnorderedAccessView *)pFVar12->Resource;
      if ((0xf < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->UAVs[uVar2] = pFVar6;
      break;
    case Sampler:
      uVar2 = pFVar12->Index;
      pFVar7 = pFVar12->Resource;
      if ((0x1f < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->Samplers[uVar2] = (FRHISamplerState *)pFVar7;
      break;
    case UniformBuffer:
      uVar2 = pFVar12->Index;
      pFVar8 = (FRHIUniformBuffer *)pFVar12->Resource;
      if ((0xf < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      __return_storage_ptr__->UniformBuffers[uVar2] = pFVar8;
      break;
    case ResourceCollection:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x968,L"");
      if (bVar10) {
code_r0x000145c98932:
        pcVar9 = (code *)swi(3);
        pFVar11 = (FRayTracingShaderBindings *)(*pcVar9)();
        return pFVar11;
      }
      break;
    default:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x96b,L"");
      if (bVar10) goto code_r0x000145c98932;
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// CopySharedMips @ 145c98d10

void __cdecl
UE::RHI::CopySharedMips(FRHICommandList *param_1,FRHITexture *param_2,FRHITexture *param_3)

{
  byte bVar1;
  longlong lVar2;
  FRHITexture *pFVar3;
  TIntVector3<int>_u_0 local_48;
  undefined8 local_3c;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined8 local_24;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  lVar2 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  bVar1 = *(byte *)(lVar2 + 0x30);
  lVar2 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (bVar1 < *(byte *)(lVar2 + 0x30)) {
    lVar2 = param_3->_padding_;
    pFVar3 = param_3;
  }
  else {
    lVar2 = param_2->_padding_;
    pFVar3 = param_2;
  }
  lVar2 = (**(code **)(lVar2 + 0x20))(pFVar3);
  local_34 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_28 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_24 = 0;
  local_3c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_30 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_48._s_0.X = *(int *)(lVar2 + 0x24);
  local_48._s_0.Y = *(int *)(lVar2 + 0x28);
  local_48._s_0.Z = (int)*(ushort *)(lVar2 + 0x2c);
  local_1c = (uint)*(ushort *)(lVar2 + 0x2e);
  local_10 = (uint)*(byte *)(lVar2 + 0x30);
  lVar2 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_18 = *(byte *)(lVar2 + 0x30) - local_10;
  lVar2 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  local_14 = *(byte *)(lVar2 + 0x30) - local_10;
  FRHICommandList::CopyTexture(param_1,param_2,param_3,(FRHICopyTextureInfo *)&local_48._s_0);
  return;
}

// CopySharedMips_AssumeSRVMaskState @ 145c98e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::RHI::CopySharedMips_AssumeSRVMaskState
          (FRHICommandList *param_1,FRHITexture *param_2,FRHITexture *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  FRHITexture *pFVar6;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined3 uStack_77;
  undefined4 local_74;
  TIntVector3<int>_u_0 local_70;
  uint5 local_64;
  undefined3 uStack_5f;
  uint local_5c;
  uint local_58;
  uint local_54;
  FRHITexture *local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_30;
  
  uVar4 = local_98._12_4_;
  local_98.ArrayNum = 2;
  iVar2 = local_98.ArrayNum;
  local_88._0_4_ = -1;
  local_88._4_2_ = 0xffff;
  local_78 = 1;
  local_74 = 0x70;
  local_70._0_5_ = 0x80;
  local_64._4_1_ = false;
  local_58 = 0xffffffff;
  local_54 = CONCAT22(local_54._2_2_,0xffff);
  local_48 = 1;
  local_44 = 0x70;
  local_40 = 0x2000;
  local_3c = 0;
  local_30 = 0;
  local_98.DataPtr = (FRHITransitionInfo *)local_88;
  local_50 = param_3;
  local_80 = (undefined1  [8])param_2;
  FRHICommandListBase::TransitionInternal((FRHICommandListBase *)param_1,&local_98,None);
  local_98.DataPtr = (FRHITransitionInfo *)local_88;
  local_98.ArrayNum = iVar2;
  local_98._12_4_ = uVar4;
  FRHIComputeCommandList::SetTrackedAccess
            ((FRHIComputeCommandList *)param_1,&local_98,param_1->field_0x6a);
  lVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  bVar1 = *(byte *)(lVar5 + 0x30);
  lVar5 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (bVar1 < *(byte *)(lVar5 + 0x30)) {
    lVar5 = param_3->_padding_;
    pFVar6 = param_3;
  }
  else {
    lVar5 = param_2->_padding_;
    pFVar6 = param_2;
  }
  lVar5 = (**(code **)(lVar5 + 0x20))(pFVar6);
  local_74 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_70._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  _local_64 = 0;
  local_80._4_4_ = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  _local_78 = (undefined4)
              ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  local_70._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_88._0_4_ = *(int *)(lVar5 + 0x24);
  local_88._4_4_ = *(int *)(lVar5 + 0x28);
  local_80._0_4_ = ZEXT24(*(ushort *)(lVar5 + 0x2c));
  local_5c = (uint)*(ushort *)(lVar5 + 0x2e);
  local_50 = (FRHITexture *)CONCAT44(local_50._4_4_,(uint)*(byte *)(lVar5 + 0x30));
  lVar5 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_58 = *(byte *)(lVar5 + 0x30) - (uint)local_50;
  lVar5 = (**(code **)(param_3->_padding_ + 0x20))(param_3);
  local_54 = *(byte *)(lVar5 + 0x30) - (uint)local_50;
  FRHICommandList::CopyTexture(param_1,param_2,param_3,(FRHICopyTextureInfo *)local_88);
  local_98.ArrayNum = 2;
  uVar3 = local_98._8_8_;
  local_88._0_4_ = -1;
  local_88._4_2_ = 0xffff;
  local_78 = 1;
  local_74 = 0x80;
  local_70._0_5_ = 0x70;
  local_64._4_1_ = false;
  local_58 = 0xffffffff;
  local_54 = CONCAT22(local_54._2_2_,0xffff);
  local_48 = 1;
  local_44 = 0x2000;
  local_40 = 0x70;
  local_3c = 0;
  local_30 = 0;
  local_98.DataPtr = (FRHITransitionInfo *)local_88;
  local_50 = param_3;
  local_80 = (undefined1  [8])param_2;
  FRHICommandListBase::TransitionInternal((FRHICommandListBase *)param_1,&local_98,None);
  local_98.DataPtr = (FRHITransitionInfo *)local_88;
  local_98._8_8_ = uVar3;
  FRHIComputeCommandList::SetTrackedAccess
            ((FRHIComputeCommandList *)param_1,&local_98,param_1->field_0x6a);
  return;
}

// ShouldEnableGPUCrashFeature @ 145cc0360

bool __cdecl UE::RHI::ShouldEnableGPUCrashFeature(IConsoleVariable *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  int *piVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int local_res18 [4];
  FString local_18;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar3 = FCommandLine::Get();
      bNoGpuCrashDebugging = FParse::Param(pwVar3,L"nogpucrashdebugging");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pwVar3 = FCommandLine::Get();
      bGpuCrashDebugging = FParse::Param(pwVar3,L"gpucrashdebugging");
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (bNoGpuCrashDebugging == false) {
    if (bGpuCrashDebugging == false) {
      iVar2 = (**(code **)(*(longlong *)CVarGPUCrashDebugging._padding_ + 200))();
      if (iVar2 < 1) {
        iVar2 = (**(code **)(*(longlong *)param_1 + 200))(param_1);
        bVar6 = 0 < iVar2;
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
    }
  }
  else {
    bVar6 = false;
  }
  local_res18[0] = 0;
  ::FString::PrintfImpl(&local_18,L"%s=");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar3,(wchar_t *)FVar5.Data,local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    return 0 < local_res18[0];
  }
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar3,param_2);
  if (bVar1) {
    bVar6 = true;
  }
  return bVar6;
}

// UseGPUCrashBreadcrumbs @ 145cc9830

bool __cdecl UE::RHI::UseGPUCrashBreadcrumbs(void)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  bool bVar5;
  int *piVar6;
  ForAnyElementType FVar7;
  int local_res8 [2];
  FString local_18;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), lVar1 = CVarGPUCrashDebuggingBreadcrumbs._padding_,
     ::_TSS0 == -1)) {
    if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar4 = FCommandLine::Get();
      bNoGpuCrashDebugging = FParse::Param(pwVar4,L"nogpucrashdebugging");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar6 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pwVar4 = FCommandLine::Get();
      bGpuCrashDebugging = FParse::Param(pwVar4,L"gpucrashdebugging");
      _Init_thread_footer(&::_TSS1);
    }
    if (bNoGpuCrashDebugging == false) {
      if (bGpuCrashDebugging == false) {
        iVar3 = (**(code **)(*(longlong *)CVarGPUCrashDebugging._padding_ + 200))();
        if (iVar3 < 1) {
          iVar3 = (**(code **)(*(longlong *)lVar1 + 200))(lVar1);
          bVar5 = 0 < iVar3;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
      }
    }
    else {
      bVar5 = false;
    }
    local_res8[0] = 0;
    ::FString::PrintfImpl(&local_18,L"%s=");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar7.Data = local_18.Data.AllocatorInstance.Data;
    }
    pwVar4 = FCommandLine::Get();
    bVar2 = FParse::Value(pwVar4,(wchar_t *)FVar7.Data,local_res8);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      bVar5 = 0 < local_res8[0];
    }
    else {
      pwVar4 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar4,L"gpubreadcrumbs");
      if (bVar2) {
        bVar5 = true;
      }
    }
    bEnabled = bVar5;
    _Init_thread_footer(&::_TSS0);
    return bEnabled;
  }
  return bEnabled;
}

// UseGPUCrashDebugging @ 145cc9a20

bool __cdecl UE::RHI::UseGPUCrashDebugging(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar3 = FCommandLine::Get();
      bNoGpuCrashDebugging = FParse::Param(pwVar3,L"nogpucrashdebugging");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*piVar4 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pwVar3 = FCommandLine::Get();
      bGpuCrashDebugging = FParse::Param(pwVar3,L"gpucrashdebugging");
      _Init_thread_footer(&::_TSS1);
    }
  }
  pTVar1 = CVarGPUCrashDebugging.Ref;
  if (bNoGpuCrashDebugging != false) {
    return false;
  }
  if (bGpuCrashDebugging != false) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<RHIValidation::FResourceIdentity>_> @ 145ccff20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<RHIValidation::FResourceIdentity>_>
          (ushort param_1,ForElementType<RHIValidation::FResourceIdentity> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<RHIValidation::FResourceIdentity>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

