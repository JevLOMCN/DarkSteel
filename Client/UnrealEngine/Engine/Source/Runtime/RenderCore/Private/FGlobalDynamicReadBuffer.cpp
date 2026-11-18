// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 16

// AllocateInternal<21,FFloat16> @ 145d01110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateInternal<21,FFloat16>
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,
          FDynamicReadBufferPool *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FAllocation *pFVar12;
  FRHICommandListBase *pFVar13;
  ulonglong uVar14;
  FRHICommandListBase *pFVar15;
  FShaderResourceViewInitializer *pFVar16;
  FRHICommandListBase *pFVar17;
  EBufferUsageFlags EVar18;
  FRHICommandListBase *local_80;
  ulonglong local_78;
  undefined1 local_70 [48];
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar5)();
    return pFVar12;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar17 = (FRHICommandListBase *)0x0;
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  if (this->RHICmdList == (FRHICommandListBase *)0x0) {
    pFVar13 = ::operator_new(0x1bb0);
    pFVar15 = pFVar17;
    if (pFVar13 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (pFVar13,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      pFVar15 = pFVar13;
    }
    this->RHICmdList = pFVar15;
    FRHICommandListBase::SwitchPipeline(pFVar15,Graphics);
  }
  iVar6 = param_2 * 2;
  pFVar15 = (FRHICommandListBase *)param_1->CurrentBuffer;
  iVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x180))();
  if ((pFVar15 == (FRHICommandListBase *)0x0) ||
     (*(uint *)&(pFVar15->MemManager).TopMark <
      (uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar6))) {
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    uVar14 = (ulonglong)iVar11;
    if (0 < iVar11) {
      pFVar15 = pFVar17;
      pFVar13 = pFVar17;
      local_78 = uVar14;
      do {
        uVar10 = (uint)pFVar15;
        uVar9 = 0;
        if ((int)uVar10 < (param_1->Buffers).Array.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar14 = local_78, bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FAllocation *)(*pcVar5)();
          return pFVar12;
        }
        pFVar15 = *(FRHICommandListBase **)
                   ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)pFVar13 * 8);
        if ((uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar6) <=
            *(uint *)&(pFVar15->MemManager).TopMark) goto LAB_145d0146d;
        pFVar15 = (FRHICommandListBase *)(ulonglong)(uVar10 + 1);
        pFVar13 = (FRHICommandListBase *)((longlong)&(pFVar13->MemManager).Top + 1);
      } while ((longlong)pFVar13 < (longlong)uVar14);
    }
    uVar10 = (((param_2 - 1) + GAlignReadBufferRenderingBufferSize) /
             (uint)GAlignReadBufferRenderingBufferSize) * GAlignReadBufferRenderingBufferSize;
    uVar9 = (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    if ((uint)GMinReadBufferRenderingBufferSize <
        (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      uVar9 = GMinReadBufferRenderingBufferSize;
    }
    if (uVar9 < uVar10) {
      uVar9 = uVar10;
    }
    local_78 = (ulonglong)uVar9;
    if ((GRHIGlobals.MaxViewDimensionForTypedBuffer.Value < local_78) &&
       (2 < (byte)LogRendererCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_struct_FGlobalDynamicReadBuffer::FAllocation___cdecl_FGlobalDynamicReadBuffer::AllocateInternal<21,FFloat16>(FDynamicReadBufferPool*___ptr64,unsigned_int)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    }
    pFVar15 = ::operator_new(0x40);
    if (pFVar15 != (FRHICommandListBase *)0x0) {
      (pFVar15->MemManager).TopMark = (FMemMark *)0x0;
      (pFVar15->MemManager).End = (uchar *)0x0;
      (pFVar15->MemManager).TopChunk = (FTaggedMemory *)0x0;
      *(uchar **)&(pFVar15->MemManager).NumMarks = (uchar *)0x0;
      (pFVar15->MemManager).Top = (uchar *)&___7FDynamicAllocReadBuffer__6B_;
      pFVar15->Root = (FRHICommandBase *)0x0;
      (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
       &pFVar15->CommandLink)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar15->GraphicsContext = (IRHICommandContext *)0x0;
      pFVar17 = pFVar15;
    }
    pFVar3 = (param_1->Buffers).Array.AllocatorInstance.Data;
    local_80 = pFVar17;
    if (((pFVar3 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar3 + (longlong)(param_1->Buffers).Array.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FAllocation *)(*pcVar5)();
      return pFVar12;
    }
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)param_1,piVar1);
      (param_1->Buffers).Array.ArrayNum = iVar11;
    }
    (param_1->Buffers).Array.ArrayNum = iVar11 + 1;
    EVar18 = Dynamic;
    *(FRHICommandListBase **)
     ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
    if (GReadBufferD3D11StaticAllocation != 0) {
      iVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      EVar18 = Dynamic;
      if (iVar11 == 2) {
        EVar18 = Static;
      }
    }
    FDynamicReadBuffer::Initialize
              ((FDynamicReadBuffer *)pFVar17,this->RHICmdList,
               L"FGlobalDynamicReadBuffer_AllocateInternal",2,(uint)local_78,PF_R16F,EVar18);
    pFVar15 = pFVar17;
LAB_145d0146d:
    if (*(longlong *)&(pFVar15->MemManager).NumMarks == 0) {
      FDynamicAllocReadBuffer::Lock((FDynamicAllocReadBuffer *)pFVar15,this->RHICmdList);
    }
    param_1->CurrentBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  }
  uVar9 = *(uint *)&(pFVar15->MemManager).TopMark;
  uVar10 = *(int *)&pFVar15->Root + -1 + iVar8 & -iVar8;
  *(uint *)&pFVar15->Root = uVar10;
  if ((uVar9 < uVar10 + iVar6) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->AllocatedByteCount + SizeInBytes <= Buffer->NumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicBufferAllocator.cpp"
                         ,0xb9,
                         L"Global dynamic read buffer allocation failed: BufferSize=%d AllocatedByteCount=%d SizeInBytes=%d"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar5)();
    return pFVar12;
  }
  uVar9 = *(uint *)&pFVar15->Root;
  pFVar4 = (FRHIBuffer *)(pFVar15->MemManager).End;
  __return_storage_ptr__->Buffer =
       (uchar *)((longlong)(int)uVar9 + *(longlong *)&(pFVar15->MemManager).NumMarks);
  pFVar17 = this->RHICmdList;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  pFVar16 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                      ((FShaderResourceViewInitializer *)(local_70 + 8),pFVar4,PF_R16F,uVar9,param_2
                      );
  FRHICommandListBase::CreateShaderResourceView
            (pFVar17,(FRHIBuffer *)local_70,(FInitializer *)pFVar16->Buffer);
  iVar8 = *(int *)&pFVar15->GraphicsContext;
  piVar1 = (int *)((longlong)&pFVar15->GraphicsContext + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar15->CommandLink,piVar1);
  }
  *(int *)&pFVar15->GraphicsContext = iVar8 + 1;
  pFVar3 = (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
            &pFVar15->CommandLink)->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = 0;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 8) = local_70._0_8_;
  local_70._0_8_ = 0;
  uVar10 = *(int *)&pFVar15->GraphicsContext - 1;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)&pFVar15->GraphicsContext) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar5)();
    return pFVar12;
  }
  __return_storage_ptr__->SRV =
       *(FRHIShaderResourceView **)
        ((((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
          &pFVar15->CommandLink)->AllocatorInstance).Data +
        (longlong)*(int *)&pFVar15->GraphicsContext * 8 + -8);
  *(int *)&pFVar15->Root = *(int *)&pFVar15->Root + iVar6;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// AllocateInternal<28,unsigned_int> @ 145d01610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateInternal<28,unsigned_int>
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,
          FDynamicReadBufferPool *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  int iVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  FRHIBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FAllocation *pFVar12;
  FRHICommandListBase *pFVar13;
  ulonglong uVar14;
  FRHICommandListBase *pFVar15;
  FShaderResourceViewInitializer *pFVar16;
  FRHICommandListBase *pFVar17;
  EBufferUsageFlags EVar18;
  FRHICommandListBase *local_80;
  ulonglong local_78;
  undefined1 local_70 [48];
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar17 = (FRHICommandListBase *)0x0;
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  if (this->RHICmdList == (FRHICommandListBase *)0x0) {
    pFVar13 = ::operator_new(0x1bb0);
    pFVar15 = pFVar17;
    if (pFVar13 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (pFVar13,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      pFVar15 = pFVar13;
    }
    this->RHICmdList = pFVar15;
    FRHICommandListBase::SwitchPipeline(pFVar15,Graphics);
  }
  iVar2 = param_2 * 4;
  pFVar15 = (FRHICommandListBase *)param_1->CurrentBuffer;
  iVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x180))();
  if ((pFVar15 == (FRHICommandListBase *)0x0) ||
     (*(uint *)&(pFVar15->MemManager).TopMark <
      (uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2))) {
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    uVar14 = (ulonglong)iVar11;
    if (0 < iVar11) {
      pFVar15 = pFVar17;
      pFVar13 = pFVar17;
      local_78 = uVar14;
      do {
        uVar10 = (uint)pFVar15;
        uVar9 = 0;
        if ((int)uVar10 < (param_1->Buffers).Array.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar14 = local_78, bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FAllocation *)(*pcVar6)();
          return pFVar12;
        }
        pFVar15 = *(FRHICommandListBase **)
                   ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)pFVar13 * 8);
        if ((uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2) <=
            *(uint *)&(pFVar15->MemManager).TopMark) goto LAB_145d01970;
        pFVar15 = (FRHICommandListBase *)(ulonglong)(uVar10 + 1);
        pFVar13 = (FRHICommandListBase *)((longlong)&(pFVar13->MemManager).Top + 1);
      } while ((longlong)pFVar13 < (longlong)uVar14);
    }
    uVar10 = (((param_2 - 1) + GAlignReadBufferRenderingBufferSize) /
             (uint)GAlignReadBufferRenderingBufferSize) * GAlignReadBufferRenderingBufferSize;
    uVar9 = (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    if ((uint)GMinReadBufferRenderingBufferSize <
        (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      uVar9 = GMinReadBufferRenderingBufferSize;
    }
    if (uVar9 < uVar10) {
      uVar9 = uVar10;
    }
    local_78 = (ulonglong)uVar9;
    if ((GRHIGlobals.MaxViewDimensionForTypedBuffer.Value < local_78) &&
       (2 < (byte)LogRendererCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_struct_FGlobalDynamicReadBuffer::FAllocation___cdecl_FGlobalDynamicReadBuffer::AllocateInternal<28,unsigned_int>(FDynamicReadBufferPool*___ptr64,unsigned_int)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    }
    pFVar15 = ::operator_new(0x40);
    if (pFVar15 != (FRHICommandListBase *)0x0) {
      (pFVar15->MemManager).TopMark = (FMemMark *)0x0;
      (pFVar15->MemManager).End = (uchar *)0x0;
      (pFVar15->MemManager).TopChunk = (FTaggedMemory *)0x0;
      *(uchar **)&(pFVar15->MemManager).NumMarks = (uchar *)0x0;
      (pFVar15->MemManager).Top = (uchar *)&___7FDynamicAllocReadBuffer__6B_;
      pFVar15->Root = (FRHICommandBase *)0x0;
      (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
       &pFVar15->CommandLink)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar15->GraphicsContext = (IRHICommandContext *)0x0;
      pFVar17 = pFVar15;
    }
    pFVar4 = (param_1->Buffers).Array.AllocatorInstance.Data;
    local_80 = pFVar17;
    if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar4 + (longlong)(param_1->Buffers).Array.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FAllocation *)(*pcVar6)();
      return pFVar12;
    }
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)param_1,piVar1);
      (param_1->Buffers).Array.ArrayNum = iVar11;
    }
    (param_1->Buffers).Array.ArrayNum = iVar11 + 1;
    EVar18 = Dynamic;
    *(FRHICommandListBase **)
     ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
    if (GReadBufferD3D11StaticAllocation != 0) {
      iVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      EVar18 = Dynamic;
      if (iVar11 == 2) {
        EVar18 = Static;
      }
    }
    FDynamicReadBuffer::Initialize
              ((FDynamicReadBuffer *)pFVar17,this->RHICmdList,
               L"FGlobalDynamicReadBuffer_AllocateInternal",4,(uint)local_78,PF_R32_UINT,EVar18);
    pFVar15 = pFVar17;
LAB_145d01970:
    if (*(longlong *)&(pFVar15->MemManager).NumMarks == 0) {
      FDynamicAllocReadBuffer::Lock((FDynamicAllocReadBuffer *)pFVar15,this->RHICmdList);
    }
    param_1->CurrentBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  }
  uVar9 = *(uint *)&(pFVar15->MemManager).TopMark;
  uVar10 = *(int *)&pFVar15->Root + -1 + iVar8 & -iVar8;
  *(uint *)&pFVar15->Root = uVar10;
  if ((uVar9 < uVar10 + iVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->AllocatedByteCount + SizeInBytes <= Buffer->NumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicBufferAllocator.cpp"
                         ,0xb9,
                         L"Global dynamic read buffer allocation failed: BufferSize=%d AllocatedByteCount=%d SizeInBytes=%d"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  uVar9 = *(uint *)&pFVar15->Root;
  pFVar5 = (FRHIBuffer *)(pFVar15->MemManager).End;
  __return_storage_ptr__->Buffer =
       (uchar *)((longlong)(int)uVar9 + *(longlong *)&(pFVar15->MemManager).NumMarks);
  pFVar17 = this->RHICmdList;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  pFVar16 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                      ((FShaderResourceViewInitializer *)(local_70 + 8),pFVar5,PF_R32_UINT,uVar9,
                       param_2);
  FRHICommandListBase::CreateShaderResourceView
            (pFVar17,(FRHIBuffer *)local_70,(FInitializer *)pFVar16->Buffer);
  iVar8 = *(int *)&pFVar15->GraphicsContext;
  piVar1 = (int *)((longlong)&pFVar15->GraphicsContext + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar15->CommandLink,piVar1);
  }
  *(int *)&pFVar15->GraphicsContext = iVar8 + 1;
  pFVar4 = (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
            &pFVar15->CommandLink)->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = local_70._0_8_;
  local_70._0_8_ = 0;
  uVar10 = *(int *)&pFVar15->GraphicsContext - 1;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)&pFVar15->GraphicsContext) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  __return_storage_ptr__->SRV =
       *(FRHIShaderResourceView **)
        ((((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
          &pFVar15->CommandLink)->AllocatorInstance).Data +
        (longlong)*(int *)&pFVar15->GraphicsContext * 8 + -8);
  *(int *)&pFVar15->Root = *(int *)&pFVar15->Root + iVar2;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// AllocateInternal<29,int> @ 145d01b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateInternal<29,int>
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,
          FDynamicReadBufferPool *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  int iVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  FRHIBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FAllocation *pFVar12;
  FRHICommandListBase *pFVar13;
  ulonglong uVar14;
  FRHICommandListBase *pFVar15;
  FShaderResourceViewInitializer *pFVar16;
  FRHICommandListBase *pFVar17;
  EBufferUsageFlags EVar18;
  FRHICommandListBase *local_80;
  ulonglong local_78;
  undefined1 local_70 [48];
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar17 = (FRHICommandListBase *)0x0;
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  if (this->RHICmdList == (FRHICommandListBase *)0x0) {
    pFVar13 = ::operator_new(0x1bb0);
    pFVar15 = pFVar17;
    if (pFVar13 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (pFVar13,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      pFVar15 = pFVar13;
    }
    this->RHICmdList = pFVar15;
    FRHICommandListBase::SwitchPipeline(pFVar15,Graphics);
  }
  iVar2 = param_2 * 4;
  pFVar15 = (FRHICommandListBase *)param_1->CurrentBuffer;
  iVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x180))();
  if ((pFVar15 == (FRHICommandListBase *)0x0) ||
     (*(uint *)&(pFVar15->MemManager).TopMark <
      (uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2))) {
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    uVar14 = (ulonglong)iVar11;
    if (0 < iVar11) {
      pFVar15 = pFVar17;
      pFVar13 = pFVar17;
      local_78 = uVar14;
      do {
        uVar10 = (uint)pFVar15;
        uVar9 = 0;
        if ((int)uVar10 < (param_1->Buffers).Array.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar14 = local_78, bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FAllocation *)(*pcVar6)();
          return pFVar12;
        }
        pFVar15 = *(FRHICommandListBase **)
                   ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)pFVar13 * 8);
        if ((uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2) <=
            *(uint *)&(pFVar15->MemManager).TopMark) goto LAB_145d01e80;
        pFVar15 = (FRHICommandListBase *)(ulonglong)(uVar10 + 1);
        pFVar13 = (FRHICommandListBase *)((longlong)&(pFVar13->MemManager).Top + 1);
      } while ((longlong)pFVar13 < (longlong)uVar14);
    }
    uVar10 = (((param_2 - 1) + GAlignReadBufferRenderingBufferSize) /
             (uint)GAlignReadBufferRenderingBufferSize) * GAlignReadBufferRenderingBufferSize;
    uVar9 = (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    if ((uint)GMinReadBufferRenderingBufferSize <
        (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      uVar9 = GMinReadBufferRenderingBufferSize;
    }
    if (uVar9 < uVar10) {
      uVar9 = uVar10;
    }
    local_78 = (ulonglong)uVar9;
    if ((GRHIGlobals.MaxViewDimensionForTypedBuffer.Value < local_78) &&
       (2 < (byte)LogRendererCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_struct_FGlobalDynamicReadBuffer::FAllocation___cdecl_FGlobalDynamicReadBuffer::AllocateInternal<29,int>(FDynamicReadBufferPool*___ptr64,unsigned_int)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    }
    pFVar15 = ::operator_new(0x40);
    if (pFVar15 != (FRHICommandListBase *)0x0) {
      (pFVar15->MemManager).TopMark = (FMemMark *)0x0;
      (pFVar15->MemManager).End = (uchar *)0x0;
      (pFVar15->MemManager).TopChunk = (FTaggedMemory *)0x0;
      *(uchar **)&(pFVar15->MemManager).NumMarks = (uchar *)0x0;
      (pFVar15->MemManager).Top = (uchar *)&___7FDynamicAllocReadBuffer__6B_;
      pFVar15->Root = (FRHICommandBase *)0x0;
      (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
       &pFVar15->CommandLink)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar15->GraphicsContext = (IRHICommandContext *)0x0;
      pFVar17 = pFVar15;
    }
    pFVar4 = (param_1->Buffers).Array.AllocatorInstance.Data;
    local_80 = pFVar17;
    if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar4 + (longlong)(param_1->Buffers).Array.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FAllocation *)(*pcVar6)();
      return pFVar12;
    }
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)param_1,piVar1);
      (param_1->Buffers).Array.ArrayNum = iVar11;
    }
    (param_1->Buffers).Array.ArrayNum = iVar11 + 1;
    EVar18 = Dynamic;
    *(FRHICommandListBase **)
     ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
    if (GReadBufferD3D11StaticAllocation != 0) {
      iVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      EVar18 = Dynamic;
      if (iVar11 == 2) {
        EVar18 = Static;
      }
    }
    FDynamicReadBuffer::Initialize
              ((FDynamicReadBuffer *)pFVar17,this->RHICmdList,
               L"FGlobalDynamicReadBuffer_AllocateInternal",4,(uint)local_78,PF_R32_SINT,EVar18);
    pFVar15 = pFVar17;
LAB_145d01e80:
    if (*(longlong *)&(pFVar15->MemManager).NumMarks == 0) {
      FDynamicAllocReadBuffer::Lock((FDynamicAllocReadBuffer *)pFVar15,this->RHICmdList);
    }
    param_1->CurrentBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  }
  uVar9 = *(uint *)&(pFVar15->MemManager).TopMark;
  uVar10 = *(int *)&pFVar15->Root + -1 + iVar8 & -iVar8;
  *(uint *)&pFVar15->Root = uVar10;
  if ((uVar9 < uVar10 + iVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->AllocatedByteCount + SizeInBytes <= Buffer->NumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicBufferAllocator.cpp"
                         ,0xb9,
                         L"Global dynamic read buffer allocation failed: BufferSize=%d AllocatedByteCount=%d SizeInBytes=%d"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  uVar9 = *(uint *)&pFVar15->Root;
  pFVar5 = (FRHIBuffer *)(pFVar15->MemManager).End;
  __return_storage_ptr__->Buffer =
       (uchar *)((longlong)(int)uVar9 + *(longlong *)&(pFVar15->MemManager).NumMarks);
  pFVar17 = this->RHICmdList;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  pFVar16 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                      ((FShaderResourceViewInitializer *)(local_70 + 8),pFVar5,PF_R32_SINT,uVar9,
                       param_2);
  FRHICommandListBase::CreateShaderResourceView
            (pFVar17,(FRHIBuffer *)local_70,(FInitializer *)pFVar16->Buffer);
  iVar8 = *(int *)&pFVar15->GraphicsContext;
  piVar1 = (int *)((longlong)&pFVar15->GraphicsContext + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar15->CommandLink,piVar1);
  }
  *(int *)&pFVar15->GraphicsContext = iVar8 + 1;
  pFVar4 = (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
            &pFVar15->CommandLink)->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = local_70._0_8_;
  local_70._0_8_ = 0;
  uVar10 = *(int *)&pFVar15->GraphicsContext - 1;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)&pFVar15->GraphicsContext) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  __return_storage_ptr__->SRV =
       *(FRHIShaderResourceView **)
        ((((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
          &pFVar15->CommandLink)->AllocatorInstance).Data +
        (longlong)*(int *)&pFVar15->GraphicsContext * 8 + -8);
  *(int *)&pFVar15->Root = *(int *)&pFVar15->Root + iVar2;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// AllocateInternal<13,float> @ 145d02030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateInternal<13,float>
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,
          FDynamicReadBufferPool *param_1,uint param_2)

{
  FMutex *this_00;
  int *piVar1;
  int iVar2;
  atomic<unsigned_char> aVar3;
  FScriptContainerElement *pFVar4;
  FRHIBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FAllocation *pFVar12;
  FRHICommandListBase *pFVar13;
  ulonglong uVar14;
  FRHICommandListBase *pFVar15;
  FShaderResourceViewInitializer *pFVar16;
  FRHICommandListBase *pFVar17;
  EBufferUsageFlags EVar18;
  FRHICommandListBase *local_80;
  ulonglong local_78;
  undefined1 local_70 [48];
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow(this_00);
  }
  pFVar17 = (FRHICommandListBase *)0x0;
  __return_storage_ptr__->Buffer = (uchar *)0x0;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  if (this->RHICmdList == (FRHICommandListBase *)0x0) {
    pFVar13 = ::operator_new(0x1bb0);
    pFVar15 = pFVar17;
    if (pFVar13 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (pFVar13,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      pFVar15 = pFVar13;
    }
    this->RHICmdList = pFVar15;
    FRHICommandListBase::SwitchPipeline(pFVar15,Graphics);
  }
  iVar2 = param_2 * 4;
  pFVar15 = (FRHICommandListBase *)param_1->CurrentBuffer;
  iVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x180))();
  if ((pFVar15 == (FRHICommandListBase *)0x0) ||
     (*(uint *)&(pFVar15->MemManager).TopMark <
      (uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2))) {
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    uVar14 = (ulonglong)iVar11;
    if (0 < iVar11) {
      pFVar15 = pFVar17;
      pFVar13 = pFVar17;
      local_78 = uVar14;
      do {
        uVar10 = (uint)pFVar15;
        uVar9 = 0;
        if ((int)uVar10 < (param_1->Buffers).Array.ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar14 = local_78, bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FAllocation *)(*pcVar6)();
          return pFVar12;
        }
        pFVar15 = *(FRHICommandListBase **)
                   ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)pFVar13 * 8);
        if ((uint)((*(int *)&pFVar15->Root + -1 + iVar8 & -iVar8) + iVar2) <=
            *(uint *)&(pFVar15->MemManager).TopMark) goto LAB_145d02390;
        pFVar15 = (FRHICommandListBase *)(ulonglong)(uVar10 + 1);
        pFVar13 = (FRHICommandListBase *)((longlong)&(pFVar13->MemManager).Top + 1);
      } while ((longlong)pFVar13 < (longlong)uVar14);
    }
    uVar10 = (((param_2 - 1) + GAlignReadBufferRenderingBufferSize) /
             (uint)GAlignReadBufferRenderingBufferSize) * GAlignReadBufferRenderingBufferSize;
    uVar9 = (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    if ((uint)GMinReadBufferRenderingBufferSize <
        (uint)GRHIGlobals.MaxViewDimensionForTypedBuffer.Value) {
      uVar9 = GMinReadBufferRenderingBufferSize;
    }
    if (uVar9 < uVar10) {
      uVar9 = uVar10;
    }
    local_78 = (ulonglong)uVar9;
    if ((GRHIGlobals.MaxViewDimensionForTypedBuffer.Value < local_78) &&
       (2 < (byte)LogRendererCore._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                (&`protected:_struct_FGlobalDynamicReadBuffer::FAllocation___cdecl_FGlobalDynamicReadBuffer::AllocateInternal<13,float>(FDynamicReadBufferPool*___ptr64,unsigned_int)___ptr64'
                  ::__l20::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    }
    pFVar15 = ::operator_new(0x40);
    if (pFVar15 != (FRHICommandListBase *)0x0) {
      (pFVar15->MemManager).TopMark = (FMemMark *)0x0;
      (pFVar15->MemManager).End = (uchar *)0x0;
      (pFVar15->MemManager).TopChunk = (FTaggedMemory *)0x0;
      *(uchar **)&(pFVar15->MemManager).NumMarks = (uchar *)0x0;
      (pFVar15->MemManager).Top = (uchar *)&___7FDynamicAllocReadBuffer__6B_;
      pFVar15->Root = (FRHICommandBase *)0x0;
      (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
       &pFVar15->CommandLink)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pFVar15->GraphicsContext = (IRHICommandContext *)0x0;
      pFVar17 = pFVar15;
    }
    pFVar4 = (param_1->Buffers).Array.AllocatorInstance.Data;
    local_80 = pFVar17;
    if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 <
         pFVar4 + (longlong)(param_1->Buffers).Array.ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FAllocation *)(*pcVar6)();
      return pFVar12;
    }
    iVar11 = (param_1->Buffers).Array.ArrayNum;
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)param_1,piVar1);
      (param_1->Buffers).Array.ArrayNum = iVar11;
    }
    (param_1->Buffers).Array.ArrayNum = iVar11 + 1;
    EVar18 = Dynamic;
    *(FRHICommandListBase **)
     ((param_1->Buffers).Array.AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
    if (GReadBufferD3D11StaticAllocation != 0) {
      iVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      EVar18 = Dynamic;
      if (iVar11 == 2) {
        EVar18 = Static;
      }
    }
    FDynamicReadBuffer::Initialize
              ((FDynamicReadBuffer *)pFVar17,this->RHICmdList,
               L"FGlobalDynamicReadBuffer_AllocateInternal",4,(uint)local_78,PF_R32_FLOAT,EVar18);
    pFVar15 = pFVar17;
LAB_145d02390:
    if (*(longlong *)&(pFVar15->MemManager).NumMarks == 0) {
      FDynamicAllocReadBuffer::Lock((FDynamicAllocReadBuffer *)pFVar15,this->RHICmdList);
    }
    param_1->CurrentBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  }
  uVar9 = *(uint *)&(pFVar15->MemManager).TopMark;
  uVar10 = *(int *)&pFVar15->Root + -1 + iVar8 & -iVar8;
  *(uint *)&pFVar15->Root = uVar10;
  if ((uVar9 < uVar10 + iVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer->AllocatedByteCount + SizeInBytes <= Buffer->NumBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicBufferAllocator.cpp"
                         ,0xb9,
                         L"Global dynamic read buffer allocation failed: BufferSize=%d AllocatedByteCount=%d SizeInBytes=%d"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  uVar9 = *(uint *)&pFVar15->Root;
  pFVar5 = (FRHIBuffer *)(pFVar15->MemManager).End;
  __return_storage_ptr__->Buffer =
       (uchar *)((longlong)(int)uVar9 + *(longlong *)&(pFVar15->MemManager).NumMarks);
  pFVar17 = this->RHICmdList;
  __return_storage_ptr__->ReadBuffer = (FDynamicAllocReadBuffer *)pFVar15;
  pFVar16 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                      ((FShaderResourceViewInitializer *)(local_70 + 8),pFVar5,PF_R32_FLOAT,uVar9,
                       param_2);
  FRHICommandListBase::CreateShaderResourceView
            (pFVar17,(FRHIBuffer *)local_70,(FInitializer *)pFVar16->Buffer);
  iVar8 = *(int *)&pFVar15->GraphicsContext;
  piVar1 = (int *)((longlong)&pFVar15->GraphicsContext + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar15->CommandLink,piVar1);
  }
  *(int *)&pFVar15->GraphicsContext = iVar8 + 1;
  pFVar4 = (((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
            &pFVar15->CommandLink)->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = 0;
  *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = local_70._0_8_;
  local_70._0_8_ = 0;
  uVar10 = *(int *)&pFVar15->GraphicsContext - 1;
  uVar9 = 0;
  if ((int)uVar10 < *(int *)&pFVar15->GraphicsContext) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FAllocation *)(*pcVar6)();
    return pFVar12;
  }
  __return_storage_ptr__->SRV =
       *(FRHIShaderResourceView **)
        ((((TArray<TRefCountPtr<FRHIShaderResourceView>,TSizedDefaultAllocator<32>_> *)
          &pFVar15->CommandLink)->AllocatorInstance).Data +
        (longlong)*(int *)&pFVar15->GraphicsContext * 8 + -8);
  *(int *)&pFVar15->Root = *(int *)&pFVar15->Root + iVar2;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return __return_storage_ptr__;
}

// FGlobalDynamicReadBuffer @ 145d0a070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGlobalDynamicReadBuffer * __thiscall
FGlobalDynamicReadBuffer::FGlobalDynamicReadBuffer(FGlobalDynamicReadBuffer *this)

{
  FDynamicReadBufferPool *pFVar1;
  FDynamicReadBufferPool *pFVar2;
  FDynamicReadBufferPool *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  pFVar3 = (FDynamicReadBufferPool *)0x0;
  this->_padding_ = (longlong)&___7FGlobalDynamicReadBuffer__6B_;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  this->RHICmdList = (FRHICommandListBase *)0x0;
  this->TotalAllocatedSinceLastCommit = 0;
  pFVar1 = ::operator_new(0x18);
  pFVar2 = pFVar3;
  if (pFVar1 != (FDynamicReadBufferPool *)0x0) {
    (pFVar1->Buffers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Buffers).Array.ArrayNum = 0;
    (pFVar1->Buffers).Array.ArrayMax = 0;
    pFVar1->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
    pFVar2 = pFVar1;
  }
  this->FloatBufferPool = pFVar2;
  pFVar1 = ::operator_new(0x18);
  pFVar2 = pFVar3;
  if (pFVar1 != (FDynamicReadBufferPool *)0x0) {
    (pFVar1->Buffers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Buffers).Array.ArrayNum = 0;
    (pFVar1->Buffers).Array.ArrayMax = 0;
    pFVar1->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
    pFVar2 = pFVar1;
  }
  this->Int32BufferPool = pFVar2;
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FDynamicReadBufferPool *)0x0) {
    (pFVar2->Buffers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Buffers).Array.ArrayNum = 0;
    (pFVar2->Buffers).Array.ArrayMax = 0;
    pFVar2->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
    pFVar3 = pFVar2;
  }
  this->UInt32BufferPool = pFVar3;
  pFVar3 = ::operator_new(0x18);
  if (pFVar3 == (FDynamicReadBufferPool *)0x0) {
    this->HalfBufferPool = (FDynamicReadBufferPool *)0x0;
    return this;
  }
  (pFVar3->Buffers).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Buffers).Array.ArrayNum = 0;
  (pFVar3->Buffers).Array.ArrayMax = 0;
  pFVar3->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
  this->HalfBufferPool = pFVar3;
  return this;
}

// ~FGlobalDynamicReadBuffer @ 145d0c050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGlobalDynamicReadBuffer::~FGlobalDynamicReadBuffer(FGlobalDynamicReadBuffer *this)

{
  this->_padding_ = (longlong)&___7FGlobalDynamicReadBuffer__6B_;
  Cleanup(this);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// AllocateFloat @ 145d12510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateFloat
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 + this->TotalAllocatedSinceLastCommit;
  this->TotalAllocatedSinceLastCommit = uVar1;
  if (((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <= uVar1)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  AllocateInternal<13,float>(this,__return_storage_ptr__,this->FloatBufferPool,param_1);
  return __return_storage_ptr__;
}

// AllocateHalf @ 145d12590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateHalf
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 + this->TotalAllocatedSinceLastCommit;
  this->TotalAllocatedSinceLastCommit = uVar1;
  if (((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <= uVar1)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  AllocateInternal<21,FFloat16>(this,__return_storage_ptr__,this->HalfBufferPool,param_1);
  return __return_storage_ptr__;
}

// AllocateInt32 @ 145d12610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateInt32
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 + this->TotalAllocatedSinceLastCommit;
  this->TotalAllocatedSinceLastCommit = uVar1;
  if (((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <= uVar1)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  AllocateInternal<29,int>(this,__return_storage_ptr__,this->Int32BufferPool,param_1);
  return __return_storage_ptr__;
}

// AllocateUInt32 @ 145d12690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FAllocation * __thiscall
FGlobalDynamicReadBuffer::AllocateUInt32
          (FGlobalDynamicReadBuffer *this,FAllocation *__return_storage_ptr__,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 + this->TotalAllocatedSinceLastCommit;
  this->TotalAllocatedSinceLastCommit = uVar1;
  if (((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <= uVar1)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  AllocateInternal<28,unsigned_int>(this,__return_storage_ptr__,this->UInt32BufferPool,param_1);
  return __return_storage_ptr__;
}

// Cleanup @ 145d13d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGlobalDynamicReadBuffer::Cleanup(FGlobalDynamicReadBuffer *this)

{
  if (this->FloatBufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->FloatBufferPool,1);
    this->FloatBufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->Int32BufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->Int32BufferPool,1);
    this->Int32BufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->UInt32BufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->UInt32BufferPool,1);
    this->UInt32BufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->HalfBufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->HalfBufferPool,1);
    this->HalfBufferPool = (FDynamicReadBufferPool *)0x0;
  }
  return;
}

// Commit @ 145d14250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGlobalDynamicReadBuffer::Commit(FGlobalDynamicReadBuffer *this,FRHICommandListImmediate *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FQueuedCommandList local_res8;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_28;
  
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  RemoveUnusedBuffers(this->RHICmdList,this->FloatBufferPool);
  this->FloatBufferPool->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
  RemoveUnusedBuffers(this->RHICmdList,this->Int32BufferPool);
  this->Int32BufferPool->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
  RemoveUnusedBuffers(this->RHICmdList,this->UInt32BufferPool);
  this->UInt32BufferPool->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
  RemoveUnusedBuffers(this->RHICmdList,this->HalfBufferPool);
  this->HalfBufferPool->CurrentBuffer = (FDynamicAllocReadBuffer *)0x0;
  if (this->RHICmdList != (FRHICommandListBase *)0x0) {
    FRHICommandListBase::FinishRecording(this->RHICmdList);
    local_res8.CmdList = this->RHICmdList;
    local_28.ArrayNum = 1;
    local_28.DataPtr = &local_res8;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_1,&local_28,Disabled,0);
    this->RHICmdList = (FRHICommandListBase *)0x0;
  }
  this->TotalAllocatedSinceLastCommit = 0;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// IncrementTotalAllocations @ 145d41220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGlobalDynamicReadBuffer::IncrementTotalAllocations(FGlobalDynamicReadBuffer *this,uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_1 + this->TotalAllocatedSinceLastCommit;
  this->TotalAllocatedSinceLastCommit = uVar1;
  if (((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <= uVar1)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
    return;
  }
  return;
}

// InitRHI @ 145d41990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGlobalDynamicReadBuffer::InitRHI(FGlobalDynamicReadBuffer *this,FRHICommandListBase *param_1)

{
  return;
}

// IsRenderAlarmLoggingEnabled @ 145d44ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FGlobalDynamicReadBuffer::IsRenderAlarmLoggingEnabled(FGlobalDynamicReadBuffer *this)

{
  if ((0 < GMaxReadBufferRenderingBytesAllocatedPerFrame) &&
     ((ulonglong)(longlong)GMaxReadBufferRenderingBytesAllocatedPerFrame <=
      this->TotalAllocatedSinceLastCommit)) {
    return true;
  }
  return false;
}

// ReleaseRHI @ 145d48340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGlobalDynamicReadBuffer::ReleaseRHI(FGlobalDynamicReadBuffer *this)

{
  if (this->FloatBufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->FloatBufferPool,1);
    this->FloatBufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->Int32BufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->Int32BufferPool,1);
    this->Int32BufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->UInt32BufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->UInt32BufferPool,1);
    this->UInt32BufferPool = (FDynamicReadBufferPool *)0x0;
  }
  if (this->HalfBufferPool != (FDynamicReadBufferPool *)0x0) {
    FDynamicReadBufferPool::_scalar_deleting_destructor_(this->HalfBufferPool,1);
    this->HalfBufferPool = (FDynamicReadBufferPool *)0x0;
  }
  return;
}

