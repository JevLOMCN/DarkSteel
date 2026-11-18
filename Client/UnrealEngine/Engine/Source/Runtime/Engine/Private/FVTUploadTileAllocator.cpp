// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Allocate @ 1489cafa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
FVTUploadTileAllocator::Allocate
          (FVTUploadTileAllocator *this,FRHICommandListBase *param_1,EVTUploadType param_2,
          EPixelFormat param_3,uint param_4)

{
  int *piVar1;
  atomic<unsigned_char> aVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FStagingBuffer *this_00;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint local_38;
  int iStack_34;
  uint local_30;
  
  if ((this == (FVTUploadTileAllocator *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  local_30 = ((param_4 - 1) + GPixelFormats[param_3].BlockSizeX) /
             (uint)GPixelFormats[param_3].BlockSizeX;
  local_38 = GPixelFormats[param_3].BlockBytes;
  iStack_34 = local_38 * local_30;
  uVar6 = 0;
  local_30 = (((param_4 - 1) + GPixelFormats[param_3].BlockSizeY) /
             (uint)GPixelFormats[param_3].BlockSizeY) * local_38 * local_30;
  if (0 < (this->FormatDescs).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar6 < (this->FormatDescs).ArrayNum) {
        uVar9 = uVar8;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      if (local_38 == *(uint *)((this->FormatDescs).AllocatorInstance.Data + lVar10)) {
        uVar9 = 0;
        if ((int)uVar6 < (this->FormatDescs).ArrayNum) {
          uVar9 = uVar8;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return uVar6;
        }
        if (iStack_34 == *(int *)((this->FormatDescs).AllocatorInstance.Data + lVar10 + 4)) {
          uVar9 = 0;
          if ((int)uVar6 < (this->FormatDescs).ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return uVar6;
          }
          if (local_30 == *(uint *)((this->FormatDescs).AllocatorInstance.Data + lVar10 + 8)) break;
        }
      }
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0xc;
    } while ((int)uVar6 < (this->FormatDescs).ArrayNum);
  }
  uVar9 = (this->FormatDescs).ArrayNum;
  if (uVar6 == uVar9) {
    if ((0x1f < uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FormatDescs.Num() < FHandle::MaxFormats",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                           ,0x44,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    pFVar11 = (this->FormatDescs).AllocatorInstance.Data;
    if (((pFVar11 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar11 + (longlong)(this->FormatDescs).ArrayMax * 0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    iVar7 = (this->FormatDescs).ArrayNum;
    piVar1 = &(this->FormatDescs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&(this->FormatDescs).AllocatorInstance,piVar1);
    }
    (this->FormatDescs).ArrayNum = iVar7 + 1;
    piVar1 = &(this->FormatBuffers).ArrayMax;
    pFVar11 = (this->FormatDescs).AllocatorInstance.Data;
    *(ulonglong *)(pFVar11 + (longlong)iVar7 * 0xc) = CONCAT44(iStack_34,local_38);
    *(uint *)(pFVar11 + (longlong)iVar7 * 0xc + 8) = local_30;
    iVar7 = (this->FormatBuffers).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->FormatBuffers).AllocatorInstance,piVar1);
    }
    (this->FormatBuffers).ArrayNum = iVar7 + 1;
    DefaultConstructItems<FVTUploadTileAllocator::FSharedFormatBuffers,int>
              ((this->FormatBuffers).AllocatorInstance.Data + (longlong)iVar7 * 0x10,1);
  }
  uVar9 = 0;
  if ((int)uVar6 < (this->FormatBuffers).ArrayNum) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  pFVar11 = (this->FormatBuffers).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  uVar9 = 0;
  iVar7 = *(int *)&pFVar11[8].field_0x0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar7) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      if (*(longlong *)(*(longlong *)&pFVar11->field_0x0 + lVar10 + 8) == 0) break;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&pFVar11[8].field_0x0) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
      if (*(int *)(*(longlong *)&pFVar11->field_0x0 + lVar10 + 0x28) != 0) break;
      iVar7 = *(int *)&pFVar11[8].field_0x0;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar9 < iVar7);
  }
  if (uVar9 == *(uint *)&pFVar11[8].field_0x0) {
    if ((0x3fff < *(uint *)&pFVar11[8].field_0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FormatBuffer.StagingBuffers.Num() < FHandle::MaxStagingBuffers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                           ,0x5f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    iVar7 = *(int *)&pFVar11[8].field_0x0;
    if (iVar7 == *(int *)(pFVar11 + 0xc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
    }
    *(int *)&pFVar11[8].field_0x0 = iVar7 + 1;
    DefaultConstructItems<FVTUploadTileAllocator::FStagingBuffer,int>
              ((void *)(*(longlong *)&pFVar11->field_0x0 + (longlong)iVar7 * 0x30),1);
  }
  uVar8 = 0;
  if ((int)uVar9 < *(int *)&pFVar11[8].field_0x0) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  this_00 = (FStagingBuffer *)(*(longlong *)&pFVar11->field_0x0 + (longlong)(int)uVar9 * 0x30);
  if (this_00->Memory == (void *)0x0) {
    FStagingBuffer::Init(this_00,param_1,param_2,local_38,local_30);
    this->NumAllocatedBytes =
         this->NumAllocatedBytes + (ulonglong)(this_00->NumTiles * this_00->TileSizeAligned);
  }
  if (((this_00->TileFreeList).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return uVar6;
  }
  iVar7 = (this_00->TileFreeList).ArrayNum;
  uVar3 = *(ushort *)((this_00->TileFreeList).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2);
  (this_00->TileFreeList).ArrayNum = iVar7 + -1;
  LOCK();
  aVar2 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return ((uint)uVar3 << 0xe | uVar9 & 0x3fff) << 5 | uVar6 & 0x1f;
}

// Free @ 1489e4420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVTUploadTileAllocator::Free(FVTUploadTileAllocator *this,FRHICommandListBase *param_1,uint param_2)

{
  int *piVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FStagingBuffer *this_00;
  uint uVar7;
  ushort local_28 [8];
  
  if ((this == (FVTUploadTileAllocator *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar4 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  if (((this->FormatBuffers).ArrayNum <= (int)(param_2 & 0x1f)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (this->FormatBuffers).AllocatorInstance.Data + (ulonglong)(param_2 & 0x1f) * 0x10;
  uVar7 = param_2 >> 5 & 0x3fff;
  if ((*(int *)(pFVar6 + 8) <= (int)uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FStagingBuffer *)(*(longlong *)pFVar6 + (ulonglong)uVar7 * 0x30);
  local_28[0] = (ushort)(param_2 >> 0x13);
  pFVar6 = (this_00->TileFreeList).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar6 + (longlong)(this_00->TileFreeList).ArrayMax * 2
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this_00->TileFreeList).ArrayNum;
  piVar1 = &(this_00->TileFreeList).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&(this_00->TileFreeList).AllocatorInstance,piVar1);
  }
  (this_00->TileFreeList).ArrayNum = iVar5 + 1;
  *(ushort *)((this_00->TileFreeList).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_28[0];
  if (this_00->NumTiles == (this_00->TileFreeList).ArrayNum) {
    if ((this->NumAllocatedBytes < (ulonglong)(this_00->NumTiles * this_00->TileSizeAligned)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumAllocatedBytes >= StagingBuffer.TileSizeAligned * StagingBuffer.NumTiles"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VT\\VirtualTextureUploadCache.cpp"
                           ,0x83,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->NumAllocatedBytes =
         this->NumAllocatedBytes - (ulonglong)(this_00->NumTiles * this_00->TileSizeAligned);
    FStagingBuffer::Release(this_00,param_1);
  }
  if (this != (FVTUploadTileAllocator *)0x0) {
    LOCK();
    aVar2 = (this->Mutex).State;
    (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this->Mutex);
    }
  }
  return;
}

// GetBufferFromHandle @ 1489e6880

FVTUploadTileBuffer * __thiscall
FVTUploadTileAllocator::GetBufferFromHandle
          (FVTUploadTileAllocator *this,FVTUploadTileBuffer *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVTUploadTileBuffer *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar6 = param_1 & 0x1f;
  if ((this->FormatDescs).ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVTUploadTileBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->FormatDescs).AllocatorInstance.Data;
  if ((this->FormatBuffers).ArrayNum <= (int)uVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVTUploadTileBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar8 = (this->FormatBuffers).AllocatorInstance.Data + (ulonglong)uVar6 * 0x10;
  uVar7 = param_1 >> 5 & 0x3fff;
  if (*(int *)(pFVar8 + 8) <= (int)uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVTUploadTileBuffer *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar5 = (ulonglong)uVar7 * 0x30 + *(longlong *)pFVar8;
  __return_storage_ptr__->Memory =
       (void *)((ulonglong)((param_1 >> 0x13) * *(int *)(lVar5 + 0x14)) + *(longlong *)(lVar5 + 8));
  __return_storage_ptr__->MemorySize = *(uint *)(lVar5 + 0x10);
  __return_storage_ptr__->Stride = *(uint *)(pFVar1 + (ulonglong)uVar6 * 0xc + 4);
  return __return_storage_ptr__;
}

// GetBufferFromHandleExt @ 1489e69d0

FVTUploadTileBufferExt * __thiscall
FVTUploadTileAllocator::GetBufferFromHandleExt
          (FVTUploadTileAllocator *this,FVTUploadTileBufferExt *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVTUploadTileBufferExt *pFVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar7 = param_1 & 0x1f;
  if ((this->FormatDescs).ArrayNum <= (int)uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVTUploadTileBufferExt *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar2 = (this->FormatDescs).AllocatorInstance.Data;
  if ((this->FormatBuffers).ArrayNum <= (int)uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVTUploadTileBufferExt *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar9 = (this->FormatBuffers).AllocatorInstance.Data + (ulonglong)uVar7 * 0x10;
  uVar8 = param_1 >> 5 & 0x3fff;
  if (*(int *)(pFVar9 + 8) <= (int)uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVTUploadTileBufferExt *)(*pcVar3)();
      return pFVar5;
    }
  }
  puVar6 = (undefined8 *)((ulonglong)uVar8 * 0x30 + *(longlong *)pFVar9);
  iVar1 = *(int *)((longlong)puVar6 + 0x14);
  __return_storage_ptr__->RHIBuffer = (FRHIBuffer *)*puVar6;
  __return_storage_ptr__->BufferMemory = (void *)puVar6[1];
  __return_storage_ptr__->Stride = *(uint *)(pFVar2 + (ulonglong)uVar7 * 0xc + 4);
  __return_storage_ptr__->BufferOffset = (param_1 >> 0x13) * iVar1;
  return __return_storage_ptr__;
}

